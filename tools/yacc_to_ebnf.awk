#!/usr/bin/awk -f
# Convert a simple subset of Yacc/Bison grammar (grammar.y) into EBNF-like syntax.
# - Strips actions {...}
# - Works on the grammar section between %% markers
# - Maps: name: a b c | d ;  => name = a , b , c | d ;
# - Leaves token/identifiers as-is (no quoting)

BEGIN { in_gram = 0 }

function trim(s){ sub(/^\s+/,"",s); sub(/\s+$/,"",s); return s }

# Remove braces blocks { ... } spanning possibly multiple lines
{
  line = $0
  # Remove C comments
  gsub(/\/\*[^*]*\*+([^/*][^*]*\*+)*\//, " ", line)

  # Strip code blocks: naive removal of {...} content
  # Handle multiple on a line
  while (match(line, /\{[^{}]*\}/)) {
    pre = substr(line, 1, RSTART-1)
    post = substr(line, RSTART+RLENGTH)
    line = pre " " post
  }
}

# Track the grammar section
/^%%/ {
  in_gram = !in_gram
  next
}

in_gram {
  l = line
  # skip empty
  if (l ~ /^\s*$/) next
  # remove precedence and % directives
  if (l ~ /^%/) next
  # coalesce to one space
  gsub(/\s+/, " ", l)
  # Convert ":" to "=" and concatenate sequences with ","
  sub(/ : /, " = ", l)
  # Ensure spaces around | and ;
  gsub(/\|/, " | ", l)
  gsub(/;/, " ;", l)
  # Insert commas between bare identifiers in sequences
  # Simple heuristic: replace single spaces (not around | or =) with ' , '
  gsub(/ = /, " = ", l)
  # Split on |
  out = ""
  n = split(l, alts, / \| /)
  for (i=1;i<=n;i++) {
    rhs = alts[i]
    # add commas between symbols in rhs (except rule name part)
    if (index(rhs, " = ")) {
      split(rhs, kv, / = /)
      lhs = trim(kv[1])
      rest = trim(kv[2])
      gsub(/ +/, " , ", rest)
      rhs2 = lhs " = " rest
    } else {
      rest = trim(rhs)
      gsub(/ +/, " , ", rest)
      rhs2 = rest
    }
    out = out (i>1?" | ":"") rhs2
  }
  print out
}
