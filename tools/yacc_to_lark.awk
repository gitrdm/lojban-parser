#!/usr/bin/awk -f
# Convert Bison/Yacc grammar (grammar.y) to a Lark grammar skeleton.
# - Collects terminals from %token lines and emits %declare for each
# - Sets start: toplevel (as defined in gmiddle)
# - Strips actions { ... } and C comments
# - Joins multi-line productions into single Lark rules
# - Drops explicit 'error' alternatives

BEGIN {
  in_gram = 0;
  buf = "";
}

function trim(s){ sub(/^\s+/,"",s); sub(/\s+$/,"",s); return s }
function strip_comments(s){ gsub(/\/\*[^*]*\*+([^/*][^*]*\*+)*\//, " ", s); return s }
function strip_actions(s){
  # remove {...} blocks (naive: no nested braces)
  while (match(s, /\{[^{}]*\}/)) {
    s = substr(s, 1, RSTART-1) " " substr(s, RSTART+RLENGTH)
  }
  return s
}

# Lowercase nonterminal identifiers while preserving declared tokens (uppercase)
function lower_nonterminals(s,    out,pos,frag,mstart,mlen,name,rest){
  out = ""; pos = 1;
  while (match(substr(s,pos), /[A-Za-z_][A-Za-z0-9_]*/)) {
    mstart = pos + RSTART - 1;
    mlen = RLENGTH;
    frag = substr(s, pos, RSTART-1);
    name = substr(s, mstart, mlen);
    out = out frag;
    if (toupper(name) in TOK) {
      out = out toupper(name);
    } else {
      out = out tolower(name);
    }
    pos = mstart + mlen;
  }
  out = out substr(s, pos);
  return out;
}

 /^%%/ {
  in_gram = !in_gram
  if (in_gram) {
    # Emit Lark header on entering grammar section
    print "start: toplevel"
    # terminals declared: uppercase with underscores/digits
    for (t in TOK) {
      print "%declare " t
    }
    print ""
  }
  next
}

!in_gram {
  # collect token names from %token lines
  if ($0 ~ /^%token/) {
    line = $0
    # Truncate inline C comment to avoid collecting words from the comment
    cidx = index(line, "/*")
    if (cidx > 0) line = substr(line, 1, cidx-1)
    # Collect only the first identifier after %token as the token name
    n = split(line, flds, /[ \t]+/)
    if (n >= 2) {
      tok = flds[2]
      if (tok ~ /^[A-Za-z_][A-Za-z0-9_]*$/) {
        TOK[toupper(tok)] = 1
      }
    }
  }
  next
}

in_gram {
  line = $0
  line = strip_comments(line)
  line = strip_actions(line)
  # Accumulate until semicolon ends a production (after stripping actions)
  buf = buf " " line
  if (index(line, ";") == 0) next

  prod = buf
  buf = ""
  # actions already stripped per-line
  # Normalize whitespace
  gsub(/\s+/, " ", prod)
  prod = trim(prod)
  # Remove trailing semicolon
  sub(/;\s*$/, "", prod)
  # Drop % directives or empty lines
  if (prod ~ /^%/ || prod == "") next
  # Drop productions that start with %prec etc.
  # Convert 'name : rhs' into 'name: rhs'
  sub(/ : /, ": ", prod)
  # Remove explicit ' error ' alts
  gsub(/\| *error */, "| ", prod)
  gsub(/: *error( \|)?/, ": ", prod)
  # Collapse double pipes/spaces that may result
  gsub(/\| +\|/, "|", prod)
  gsub(/ +\| +/, " | ", prod)
  gsub(/  +/, " ", prod)
  # Skip if nothing meaningful remains
  if (match(prod, /^[A-Za-z0-9_]+: *$/)) next
  # Lowercase LHS (rule name) and lowercase nonterminals in RHS
  if (index(prod, ":") == 0) next
  split(prod, parts, ":")
  lhs = trim(parts[1])
  rhs = trim(substr(prod, index(prod, ":")+1))
  lhs = tolower(lhs)
  rhs = lower_nonterminals(rhs)
  print lhs ": " rhs
}
