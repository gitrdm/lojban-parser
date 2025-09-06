// Basic external scanner for tree-sitter-lojban
// Emits simple tokens; will be expanded to bridge existing lexer.

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <wctype.h>
#include <ctype.h>
#include <stdint.h>

// Tree-sitter external scanner interface
typedef struct TSLexer {
  int32_t lookahead;
  void (*advance)(struct TSLexer *, bool);
  void (*mark_end)(struct TSLexer *);
  uint32_t (*get_column)(struct TSLexer *);
  bool (*is_at_included_range_start)(struct TSLexer *);
  bool (*eof)(struct TSLexer *);
} TSLexer;

typedef struct {
  char *word_buffer;
  size_t word_len;
  size_t word_cap;
  uint16_t lu_depth;
  uint16_t to_depth;
  uint16_t vuh_depth;
} Scanner;

enum TokenType {
  WORD,
  CMENE,
  BRIVLA,
  LU,
  LIHU,
  TO,
  TOI,
  SEI,
  ZIO,
  CEU,
  SEU,
  VUH_O,
  VUH_U,
  JOI,
  JEK,
  JA,
  JO,
  JU,
  CE,
  CEO,
  BO,
  KE,
  KEHE,
  KU,
  JEK_BO,
  JOI_BO,
  JA_BO,
  JO_BO,
  JU_BO,
  CE_BO,
  CEO_BO,
  I,
  I_BO,
  I_JEK,
  I_JOI,
  I_JA,
  I_JO,
  I_JU,
  I_CE,
  I_CEO,
  // Mekso
  LI,
  BOI,
  XI,
  DIGITS,
  PI,
  KIO,
  MAU,
  NIU,
  MEX_OPERATOR,
  // Sumti starters
  LA,
  LE,
  LO,
  NOI,
  KUHO,
  GOI,
  GEHU,
  CU,
  MI,
  DO,
  TI,
  TA,
  TU,
  DA,
  KO,
  MIO,
  MAA,
  BY,
  LAHE,
  LEE,
  LOE,
  LEHI,
  LOHI,
  LEA,
  LEO,
  LOA,
  LOO,
  GE,
  GA,
  GO,
  GU,
  GI,
  GIHA,
  BIHI,
  GAHO,
  SE,
  NA,
  NAI,
  // Vocatives
  COI,
  DOI,
  DOHU,
  // FA place tags
  FA,
  FE,
  FI,
  FO,
  FU,
  // BE-linking and CO inversion
  BE,
  BEI,
  BEHO,
  CO,
  // FIhO/FEhU
  FIHO,
  FEHU,
  // KOhA pronouns (subset)
  RI,
  RA,
  RU,
  MA,
  KOA,
  KOE,
  KOI,
  KOO,
  KOU,
};

void *tree_sitter_lojban_external_scanner_create(void) {
  Scanner *scanner = calloc(1, sizeof(Scanner));
  scanner->word_cap = 32;
  scanner->word_buffer = malloc(scanner->word_cap);
  scanner->word_len = 0;
  return scanner;
}

void tree_sitter_lojban_external_scanner_destroy(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  free(scanner->word_buffer);
  free(scanner);
}

void tree_sitter_lojban_external_scanner_reset(void *payload) {
  Scanner *scanner = (Scanner *)payload;
  scanner->lu_depth = 0;
  scanner->to_depth = 0;
  scanner->vuh_depth = 0;
}

unsigned tree_sitter_lojban_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *s = (Scanner *)payload;
  // Store depths as 6 bytes (little endian 3x uint16_t)
  buffer[0] = (char)(s->lu_depth & 0xFF);
  buffer[1] = (char)((s->lu_depth >> 8) & 0xFF);
  buffer[2] = (char)(s->to_depth & 0xFF);
  buffer[3] = (char)((s->to_depth >> 8) & 0xFF);
  buffer[4] = (char)(s->vuh_depth & 0xFF);
  buffer[5] = (char)((s->vuh_depth >> 8) & 0xFF);
  return 6;
}

void tree_sitter_lojban_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *s = (Scanner *)payload;
  if (length >= 6) {
    s->lu_depth = (uint16_t)((unsigned char)buffer[0] | ((unsigned char)buffer[1] << 8));
    s->to_depth = (uint16_t)((unsigned char)buffer[2] | ((unsigned char)buffer[3] << 8));
    s->vuh_depth = (uint16_t)((unsigned char)buffer[4] | ((unsigned char)buffer[5] << 8));
  } else {
    s->lu_depth = s->to_depth = s->vuh_depth = 0;
  }
}

static int isC(char c) {
  return (c >= 'b' && c <= 'd') || (c >= 'f' && c <= 'g') || (c >= 'j' && c <= 'n') || (c >= 'p' && c <= 'r') || (c >= 's' && c <= 'z');
}

static int isV(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

static inline int is_ws_or_pause(int32_t ch) {
  // Treat '.' as a pause; also treat '/' as ignorable separator akin to whitespace.
  return iswspace(ch) || ch == '.' || ch == '/';
}

static inline int is_word_char(int32_t ch) {
  // Lojban words include letters and apostrophe
  return iswalpha(ch) || ch == '\'';
}

static int iscmene(const char *p) {
  size_t len = strlen(p);
  if (len == 0 || !isC(p[len-1])) return 0;
  // Basic filter: require at least one consonant (final consonant already checked)
  int has_c = 0;
  for (size_t i = 0; i < len; i++) {
    if (isC(p[i])) { has_c = 1; break; }
  }
  if (!has_c) return 0;
  return 1;
}

static int isbrivla(const char *p) {
  // Heuristic: brivla end with a vowel and contain a consonant cluster somewhere (ignoring y and ')
  size_t len = strlen(p);
  if (len < 3) return 0;
  if (!isV(p[len-1])) return 0;
  int lastC = 0;
  for (const char *q = p; *q; q++) {
    if (*q == 'y' || *q == 'h' || *q == '\'') continue; // tolerate y and h separators
    if (isC(*q)) {
      if (lastC) return 1;
      lastC = 1;
    } else {
      lastC = 0;
    }
  }
  // No cluster found. For 5+ letter words, accept simple CVCCV/CCVCV approximations.
  if (len >= 5) {
    // Map to C/V ignoring y, h, ' and treating a single r/n between vowels as a hyphen (skip)
    char buf[64];
    size_t j = 0;
    for (size_t i = 0; i < len && j < sizeof(buf)-1; i++) {
      char ch = p[i];
      if (ch == 'y' || ch == 'h' || ch == '\'') continue;
      if ((ch == 'r' || ch == 'n')) {
        // Look at previous mapped and next significant to detect V r/n V pattern
        char prev = (j > 0) ? buf[j-1] : 'X';
        // Find next significant
        char nextSig = 'X';
        for (size_t k = i + 1; k < len; k++) {
          char ch2 = p[k];
          if (ch2 == 'y' || ch2 == 'h' || ch2 == '\'') continue;
          nextSig = isC(ch2) ? 'C' : (isV(ch2) ? 'V' : 'X');
          break;
        }
        if (prev == 'V' && nextSig == 'V') {
          // Treat r/n as hyphen separator; skip it
          continue;
        }
      }
      buf[j++] = isC(ch) ? 'C' : (isV(ch) ? 'V' : 'X');
    }
    buf[j] = 0;
    if (strstr(buf, "CVCCV") || strstr(buf, "CCVCV")) return 1;
  }
  return 0;
}

bool tree_sitter_lojban_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  // Skip whitespace
  while (!lexer->eof(lexer)) {
    if (is_ws_or_pause(lexer->lookahead)) {
      lexer->advance(lexer, false);
      continue;
    }
    // Treat backslash-newline as a line continuation (ignore both)
    if (lexer->lookahead == '\\') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\r') {
        lexer->advance(lexer, false);
      }
      if (lexer->lookahead == '\n') {
        lexer->advance(lexer, false);
      }
      // If it wasn't a newline pair, we still treat the lone backslash as ignorable
      continue;
    }
    break;
  }

  if (lexer->eof(lexer)) return false;

  // Mark start
  lexer->mark_end(lexer);

  // Check for specific reserved cmavo (lowercase assumed)
  // lu
  if (valid_symbols[LU] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'u') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      scanner->lu_depth++;
      return true; // LU
    }
    return false;
  }

  // li'u (lihU)
  if (valid_symbols[LIHU] && scanner->lu_depth > 0 && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          if (scanner->lu_depth > 0) scanner->lu_depth--;
          return true; // LIHU
        }
      }
    }
    return false;
  }

  // la (sumti starter)
  if (valid_symbols[LA] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'a') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // LA
    }
    return false;
  }

  // le / lo (sumti starters)
  if ((valid_symbols[LE] || valid_symbols[LO]) && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    int c = tolower(lexer->lookahead);
    if (c == 'e' && valid_symbols[LE]) {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // LE
    }
    if (c == 'o' && valid_symbols[LO]) {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // LO
    }
    return false;
  }

  // to
  if (valid_symbols[TO] && tolower(lexer->lookahead) == 't') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      scanner->to_depth++;
      return true; // TO
    }
    return false;
  }

  // noi/poi/voi (NOI)
  if (valid_symbols[NOI]) {
    if (tolower(lexer->lookahead) == 'n' || tolower(lexer->lookahead) == 'p' || tolower(lexer->lookahead) == 'v') {
      int first = tolower(lexer->lookahead);
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'o') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'i') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // NOI (noi/poi/voi)
        }
      }
      return false;
    }
  }

  // toi
  if (valid_symbols[TOI] && scanner->to_depth > 0 && tolower(lexer->lookahead) == 't') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        if (scanner->to_depth > 0) scanner->to_depth--;
        return true; // TOI
      }
    }
    return false;
  }

  // sei
  if (valid_symbols[SEI] && tolower(lexer->lookahead) == 's') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // SEI
      }
    }
    return false;
  }

  // se'u (seu)
  if (valid_symbols[SEU] && tolower(lexer->lookahead) == 's') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // SEU
        }
      }
    }
    return false;
  }

  // joi / joi bo
  if ((valid_symbols[JOI] || valid_symbols[JOI_BO]) && tolower(lexer->lookahead) == 'j') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        // Optionally produce JOI_BO if allowed
        if (valid_symbols[JOI_BO]) {
          // Skip whitespace/pause
          while (is_ws_or_pause(lexer->lookahead)) lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'b') {
            lexer->advance(lexer, false);
            if (tolower(lexer->lookahead) == 'o') {
              lexer->advance(lexer, false);
              lexer->mark_end(lexer);
              return true; // JOI_BO
            }
            return false;
          }
        }
        lexer->mark_end(lexer);
        return true; // JOI
      }
    }
    return false;
  }

  // ce / ce'o and their _bo forms
  if ((valid_symbols[CE] || valid_symbols[CE_BO] || valid_symbols[CEO] || valid_symbols[CEO_BO]) && tolower(lexer->lookahead) == 'c') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      // Optionally ce'o
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'o') {
          lexer->advance(lexer, false);
          if (valid_symbols[CEO_BO]) {
            // Try CEO_BO
            while (is_ws_or_pause(lexer->lookahead)) lexer->advance(lexer, false);
            if (tolower(lexer->lookahead) == 'b') {
              lexer->advance(lexer, false);
              if (tolower(lexer->lookahead) == 'o') {
                lexer->advance(lexer, false);
                lexer->mark_end(lexer);
                return true; // CEO_BO
              }
              return false;
            }
          }
          lexer->mark_end(lexer);
          if (valid_symbols[CEO]) return true; // CEO
        }
        return false;
      }
      // plain ce
      if (valid_symbols[CE_BO]) {
        while (is_ws_or_pause(lexer->lookahead)) lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'b') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'o') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // CE_BO
          }
          return false;
        }
      }
      lexer->mark_end(lexer);
      if (valid_symbols[CE]) return true; // CE
    }
    return false;
  }

  // jek: recognize 'je' (or 'je bo' as JEK_BO)
  if ((valid_symbols[JEK] || valid_symbols[JEK_BO] || valid_symbols[JA] || valid_symbols[JA_BO] || valid_symbols[JO] || valid_symbols[JO_BO] || valid_symbols[JU] || valid_symbols[JU_BO]) && tolower(lexer->lookahead) == 'j') {
    lexer->advance(lexer, false);
    int c = tolower(lexer->lookahead);
    if (c == 'e') {
      lexer->advance(lexer, false);
      if (valid_symbols[JEK_BO]) {
        while (is_ws_or_pause(lexer->lookahead)) lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'b') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'o') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // JEK_BO
          }
          return false;
        }
      }
      lexer->mark_end(lexer);
      return true; // JEK ('je')
    }
    if (c == 'a') {
      lexer->advance(lexer, false);
      if (valid_symbols[JA_BO]) {
        while (is_ws_or_pause(lexer->lookahead)) lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'b') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'o') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // JA_BO
          }
          return false;
        }
      }
      lexer->mark_end(lexer);
      return true; // JA
    }
    if (c == 'o') {
      lexer->advance(lexer, false);
      if (valid_symbols[JO_BO]) {
        while (is_ws_or_pause(lexer->lookahead)) lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'b') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'o') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // JO_BO
          }
          return false;
        }
      }
      lexer->mark_end(lexer);
      return true; // JO
    }
    if (c == 'u') {
      lexer->advance(lexer, false);
      if (valid_symbols[JU_BO]) {
        while (is_ws_or_pause(lexer->lookahead)) lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'b') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'o') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // JU_BO
          }
          return false;
        }
      }
      lexer->mark_end(lexer);
      return true; // JU
    }
    return false;
  }

  // i / i bo / i jek / i joi / i ja/jo/ju / i ce/ce'o
  if ((valid_symbols[I] || valid_symbols[I_BO] || valid_symbols[I_JEK] || valid_symbols[I_JOI] || valid_symbols[I_JA] || valid_symbols[I_JO] || valid_symbols[I_JU] || valid_symbols[I_CE] || valid_symbols[I_CEO]) && tolower(lexer->lookahead) == 'i') {
    lexer->advance(lexer, false);
    lexer->mark_end(lexer);
    // Lookahead for compounds if allowed
    while (is_ws_or_pause(lexer->lookahead)) lexer->advance(lexer, false);
    if (valid_symbols[I_BO] && tolower(lexer->lookahead) == 'b') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'o') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // I_BO
      }
      return false;
    }
    if ((valid_symbols[I_JEK] || valid_symbols[I_JOI] || valid_symbols[I_JA] || valid_symbols[I_JO] || valid_symbols[I_JU]) && tolower(lexer->lookahead) == 'j') {
      lexer->advance(lexer, false);
      int c = tolower(lexer->lookahead);
      if (c == 'e' && valid_symbols[I_JEK]) {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // I_JEK (i je)
      }
      if (c == 'a' && valid_symbols[I_JA]) {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // I_JA
      }
      if (c == 'o' && valid_symbols[I_JO]) {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // I_JO
      }
      if (c == 'u' && valid_symbols[I_JU]) {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // I_JU
      }
      if (c == 'o') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'i' && valid_symbols[I_JOI]) {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // I_JOI (i joi)
        }
        return false;
      }
      return false;
    }
    if ((valid_symbols[I_CE] || valid_symbols[I_CEO]) && tolower(lexer->lookahead) == 'c') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'e') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'' && valid_symbols[I_CEO]) {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'o') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // I_CEO
          }
          return false;
        }
        if (valid_symbols[I_CE]) {
          lexer->mark_end(lexer);
          return true; // I_CE
        }
      }
      return false;
    }
    if (valid_symbols[I]) {
      return true; // bare I
    }
    return false;
  }

  // bo
  if (valid_symbols[BO] && tolower(lexer->lookahead) == 'b') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // BO
    }
    return false;
  }

  // cu
  if (valid_symbols[CU] && tolower(lexer->lookahead) == 'c') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'u') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // CU
    }
    return false;
  }

  // mi (pronoun)
  if (valid_symbols[MI] && tolower(lexer->lookahead) == 'm') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // MI
    }
    return false;
  }

  // do (pronoun)
  if (valid_symbols[DO] && tolower(lexer->lookahead) == 'd') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // DO
    }
    return false;
  }

  // ti (pronoun)
  if (valid_symbols[TI] && tolower(lexer->lookahead) == 't') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // TI
    }
    return false;
  }

  // ta (pronoun)
  if (valid_symbols[TA] && tolower(lexer->lookahead) == 't') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'a') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // TA
    }
    return false;
  }

  // tu (pronoun)
  if (valid_symbols[TU] && tolower(lexer->lookahead) == 't') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'u') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // TU
    }
    return false;
  }

  // da (indefinite/variable)
  if (valid_symbols[DA] && tolower(lexer->lookahead) == 'd') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'a') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // DA
    }
    return false;
  }

  // ko (imperative pronoun)
  if (valid_symbols[KO] && tolower(lexer->lookahead) == 'k') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // KO
    }
    return false;
  }

  // mi'o (inclusive we)
  if (valid_symbols[MIO] && tolower(lexer->lookahead) == 'm') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'o') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // MIO (mi'o)
        }
      }
    }
    return false;
  }

  // ma'a (inclusive we all)
  if (valid_symbols[MAA] && tolower(lexer->lookahead) == 'm') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'a') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'a') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // MAA (ma'a)
        }
      }
    }
    return false;
  }

  // zi'o (ZIO)
  if (valid_symbols[ZIO] && tolower(lexer->lookahead) == 'z') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'o') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // ZIO
        }
      }
    }
    return false;
  }

  // ce'u (CEU)
  if (valid_symbols[CEU] && tolower(lexer->lookahead) == 'c') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // CEU
        }
      }
    }
    return false;
  }

  // BY (basic lerfu word): either vowel alone (a/e/i/o/u) or consonant followed by 'y'; optional trailing '.' pause
  if (valid_symbols[BY] && iswalpha(lexer->lookahead)) {
    int32_t first = tolower(lexer->lookahead);
    // Case 1: vowel lerfu word
    if (first == 'a' || first == 'e' || first == 'i' || first == 'o' || first == 'u') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '.') {
        lexer->advance(lexer, false);
      }
      lexer->mark_end(lexer);
      return true; // BY (vowel)
    }
    // Case 2: consonant+y
    if (isC((char)first)) {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'y') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '.') {
          lexer->advance(lexer, false);
        }
        lexer->mark_end(lexer);
        return true; // BY (consonant+y)
      }
      return false;
    }
  }

  // ke
  if (valid_symbols[KE] && tolower(lexer->lookahead) == 'k') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // KE
    }
    return false;
  }

  // GE/GA/GO/GU (forethought connectives)
  if ((valid_symbols[GE] || valid_symbols[GA] || valid_symbols[GO] || valid_symbols[GU]) && tolower(lexer->lookahead) == 'g') {
    lexer->advance(lexer, false);
    int32_t c = tolower(lexer->lookahead);
    if (c == 'e' && valid_symbols[GE]) { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
    if (c == 'a' && valid_symbols[GA]) { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
    if (c == 'o' && valid_symbols[GO]) { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
    if (c == 'u' && valid_symbols[GU]) { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
    return false;
  }

  // GI (separator)
  if (valid_symbols[GI] && tolower(lexer->lookahead) == 'g') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
    return false;
  }

  // GIhA family (gi'a, gi'e, gi'o, gi'u)
  if (valid_symbols[GIHA] && tolower(lexer->lookahead) == 'g') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        int32_t c = tolower(lexer->lookahead);
        if (c == 'a' || c == 'e' || c == 'o' || c == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // gi'a/gi'e/gi'o/gi'u
        }
      }
    }
    return false;
  }

  // BIhI (interval connectives): bi'i, bi'o (limited set for now)
  if (valid_symbols[BIHI] && tolower(lexer->lookahead) == 'b') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        int32_t v = tolower(lexer->lookahead);
        if (v == 'i' || v == 'o') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // bi'i or bi'o
        }
      }
    }
    return false;
  }

  // GAhO (interval bracket markers): ga'o, ke'i
  if (valid_symbols[GAHO]) {
    if (tolower(lexer->lookahead) == 'g') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'a') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'o') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // ga'o
          }
        }
      }
      return false;
    } else if (tolower(lexer->lookahead) == 'k') {
      // ke'i
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'e') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'i') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // ke'i
          }
        }
      }
      return false;
    }
  }

  // SE
  if (valid_symbols[SE] && tolower(lexer->lookahead) == 's') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // se
    }
    return false;
  }

  // NA
  if (valid_symbols[NA] && tolower(lexer->lookahead) == 'n') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'a') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // na
    }
    return false;
  }

  // NAI
  if (valid_symbols[NAI] && tolower(lexer->lookahead) == 'n') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'a') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // nai
      }
    }
    return false;
  }

  // ke'e (KEhE)
  if (valid_symbols[KEHE] && tolower(lexer->lookahead) == 'k') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'e') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // KEhE
        }
      }
    }
    return false;
  }

  // ku
  if (valid_symbols[KU] && tolower(lexer->lookahead) == 'k') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'u') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // KU
    }
    return false;
  }

  // vuhO
  if (valid_symbols[VUH_O] && tolower(lexer->lookahead) == 'v') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'u') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'h') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'o') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          scanner->vuh_depth++;
          return true; // VUH_O
        }
      }
    }
    return false;
  }

  // vuhU
  if (valid_symbols[VUH_U] && scanner->vuh_depth > 0 && tolower(lexer->lookahead) == 'v') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'u') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'h') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          if (scanner->vuh_depth > 0) scanner->vuh_depth--;
          return true; // VUH_U
        }
      }
    }
    return false;
  }

  // ku'o (KUhO)
  if (valid_symbols[KUHO] && tolower(lexer->lookahead) == 'k') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'u') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'o') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // KUhO
        }
      }
    }
    return false;
  }

  // goi (GOI)
  if (valid_symbols[GOI] && tolower(lexer->lookahead) == 'g') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // GOI
      }
    }
    return false;
  }

  // ge'u (GEhU)
  if (valid_symbols[GEHU] && tolower(lexer->lookahead) == 'g') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // GEhU
        }
      }
    }
    return false;
  }

  // li
  if (valid_symbols[LI] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // LI
    }
    return false;
  }

  // la'e (LAHE)
  if (valid_symbols[LAHE] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'a') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'e') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // LAhE (la'e)
        }
      }
    }
    return false;
  }

  // le'e (LEE)
  if (valid_symbols[LEE] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'e') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // LE'e (le'e)
        }
      }
    }
    return false;
  }

  // le'i (LEHI)
  if (valid_symbols[LEHI] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'i') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // LE'i (le'i)
        }
      }
    }
    return false;
  }

  // lo'i (LOHI)
  if (valid_symbols[LOHI] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'i') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // LO'i (lo'i)
        }
      }
    }
    return false;
  }

  // lo'e (LOE)
  if (valid_symbols[LOE] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'e') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // LO'e (lo'e)
        }
      }
    }
    return false;
  }

  // lo'a (LOA)
  if (valid_symbols[LOA] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'a') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // LO'a (lo'a)
        }
      }
    }
    return false;
  }

  // lo'o (LOO)
  if (valid_symbols[LOO] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'o') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // LO'o (lo'o)
        }
      }
    }
    return false;
  }

  // le'a (LEA)
  if (valid_symbols[LEA] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'a') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // LE'a (le'a)
        }
      }
    }
    return false;
  }

  // le'o (LEO)
  if (valid_symbols[LEO] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'o') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // LE'o (le'o)
        }
      }
    }
    return false;
  }

  // boi
  if (valid_symbols[BOI] && tolower(lexer->lookahead) == 'b') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // BOI
      }
    }
    return false;
  }

  // xi
  if (valid_symbols[XI] && tolower(lexer->lookahead) == 'x') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // XI
    }
    return false;
  }

  // DIGITS
  if (valid_symbols[DIGITS] && isdigit(lexer->lookahead)) {
    do {
      lexer->advance(lexer, false);
    } while (isdigit(lexer->lookahead));
    lexer->mark_end(lexer);
    return true; // DIGITS
  }

  // PI ("pi")
  if (valid_symbols[PI] && tolower(lexer->lookahead) == 'p') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // PI
    }
    return false;
  }

  // KIO ("ki'o")
  if (valid_symbols[KIO] && tolower(lexer->lookahead) == 'k') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'o') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // KIO
        }
      }
    }
    return false;
  }

  // DOhU (do'u)
  if (valid_symbols[DOHU] && tolower(lexer->lookahead) == 'd') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // DOhU (do'u)
        }
      }
    }
    return false;
  }

  // DOI (vocative addressing)
  if (valid_symbols[DOI] && tolower(lexer->lookahead) == 'd') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // DOI
      }
    }
    return false;
  }

  // FIhO (fi'o)
  if (valid_symbols[FIHO] && tolower(lexer->lookahead) == 'f') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'o') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // fi'o
        }
      }
    }
    return false;
  }

  // FEhU (fe'u)
  if (valid_symbols[FEHU] && tolower(lexer->lookahead) == 'f') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // fe'u
        }
      }
    }
    return false;
  }

  // KOhA pronouns (subset)
  if (valid_symbols[RI] && tolower(lexer->lookahead) == 'r') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
    return false;
  }
  if (valid_symbols[RA] && tolower(lexer->lookahead) == 'r') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'a') { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
    return false;
  }
  if (valid_symbols[RU] && tolower(lexer->lookahead) == 'r') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'u') { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
    return false;
  }
  if (valid_symbols[MA] && tolower(lexer->lookahead) == 'm') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'a') { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
    return false;
  }
  if (valid_symbols[KOA] && tolower(lexer->lookahead) == 'k') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        int32_t v = tolower(lexer->lookahead);
        if (v == 'a' && valid_symbols[KOA]) { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
        if (v == 'e' && valid_symbols[KOE]) { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
        if (v == 'i' && valid_symbols[KOI]) { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
        if (v == 'o' && valid_symbols[KOO]) { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
        if (v == 'u' && valid_symbols[KOU]) { lexer->advance(lexer, false); lexer->mark_end(lexer); return true; }
      }
    }
    return false;
  }

  // FA/FE/FI/FO/FU (place tags) — recognized but typically skipped as extras
  if (valid_symbols[FA] && tolower(lexer->lookahead) == 'f') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'a') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // fa
    }
    return false;
  }
  if (valid_symbols[FE] && tolower(lexer->lookahead) == 'f') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // fe
    }
    return false;
  }
  if (valid_symbols[FI] && tolower(lexer->lookahead) == 'f') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // fi
    }
    return false;
  }
  if (valid_symbols[FO] && tolower(lexer->lookahead) == 'f') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // fo
    }
    return false;
  }
  if (valid_symbols[FU] && tolower(lexer->lookahead) == 'f') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'u') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // fu
    }
    return false;
  }

  // COI family (vocative heads)
  // Support common heads: coi, co'o, fi'i, je'e, ki'e, mi'e, mu'o, ta'a, be'e, vi'o, re'i, ju'i, pe'u
  if (valid_symbols[COI]) {
    int32_t la = tolower(lexer->lookahead);
    if (la == 'c') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'o') {
        lexer->advance(lexer, false);
        int32_t n = tolower(lexer->lookahead);
        if (n == 'i') { // coi
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true;
        }
        if (n == '\'') { // co'
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'o') { // co'o
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true;
          }
        }
      }
      return false;
    } else if (la == 'f') {
      // fi'i
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'i') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true;
          }
        }
      }
      return false;
    } else if (la == 'j') {
      // je'e
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'e') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'e') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true;
          }
        }
      }
      return false;
    } else if (la == 'k') {
      // ki'e
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'e') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true;
          }
        }
      }
      return false;
    } else if (la == 'm') {
      // mi'e / mu'o
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'e') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // mi'e
          }
        }
      } else if (tolower(lexer->lookahead) == 'u') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'o') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // mu'o
          }
        }
      }
      return false;
    } else if (la == 't') {
      // ta'a
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'a') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'a') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true;
          }
        }
      }
      return false;
    } else if (la == 'b') {
      // be'e
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'e') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'e') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true;
          }
        }
      }
      return false;
    } else if (la == 'v') {
      // vi'o
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'o') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true;
          }
        }
      }
      return false;
    } else if (la == 'r') {
      // re'i
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'e') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'i') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true;
          }
        }
      }
      return false;
    } else if (la == 'j') {
      // ju'i
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'u') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'i') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true;
          }
        }
      }
      return false;
    } else if (la == 'p') {
      // pe'u
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'e') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'u') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true;
          }
        }
      }
      return false;
    }
  }

  // MAU ("ma'u")
  if (valid_symbols[MAU] && tolower(lexer->lookahead) == 'm') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'a') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // MAU
        }
      }
    }
    return false;
  }

  // be / bei / be'o
  if ((valid_symbols[BE] || valid_symbols[BEI] || valid_symbols[BEHO]) && tolower(lexer->lookahead) == 'b') {
    lexer->advance(lexer, false);
    int32_t c = tolower(lexer->lookahead);
    if (c == 'e') {
      lexer->advance(lexer, false);
      // be'i? (not here); handle bei, be'o
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        if (valid_symbols[BEI]) return true; // bei
        return false;
      }
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'o') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          if (valid_symbols[BEHO]) return true; // be'o
          return false;
        }
        return false;
      }
      lexer->mark_end(lexer);
      if (valid_symbols[BE]) return true; // be
    }
    return false;
  }

  // co (tanru inversion)
  if (valid_symbols[CO] && tolower(lexer->lookahead) == 'c') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // co
    }
    return false;
  }

  // NIU ("ni'u")
  if (valid_symbols[NIU] && tolower(lexer->lookahead) == 'n') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // NIU
        }
      }
    }
    return false;
  }

  // mex_operator: arithmetic set su'i, vu'u, pi'i, fa'u, fe'a, fe'i, te'a, ge'a; comparators du, and basic inequalities me'i (<) and za'u (>). Also accept ma'u/ni'u here when used infix.
  if (valid_symbols[MEX_OPERATOR]) {
    int32_t la = tolower(lexer->lookahead);
    if (la == 's') {
      // su'i
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'u') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'i') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // su'i
          }
        }
      }
      return false;
  } else if (la == 'v') {
      // vu'u
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'u') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'u') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // vu'u
          }
        }
      }
      return false;
    } else if (la == 'p') {
      // pi'i
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == '\'') {
          lexer->advance(lexer, false);
          if (tolower(lexer->lookahead) == 'i') {
            lexer->advance(lexer, false);
            lexer->mark_end(lexer);
            return true; // pi'i
          }
        }
      }
      return false;
  } else if (la == 'f') {
        // fe'a / fe'i / fa'u
        lexer->advance(lexer, false);
        int32_t n1 = tolower(lexer->lookahead);
        if (n1 == 'e') {
          // fe'a or fe'i
          lexer->advance(lexer, false);
          if (lexer->lookahead == '\'') {
            lexer->advance(lexer, false);
            int32_t n2 = tolower(lexer->lookahead);
            if (n2 == 'a' || n2 == 'i') {
              lexer->advance(lexer, false);
              lexer->mark_end(lexer);
              return true; // fe'a or fe'i
            }
          }
        } else if (n1 == 'a') {
          // fa'u
          lexer->advance(lexer, false);
          if (lexer->lookahead == '\'') {
            lexer->advance(lexer, false);
            if (tolower(lexer->lookahead) == 'u') {
              lexer->advance(lexer, false);
              lexer->mark_end(lexer);
              return true; // fa'u
            }
          }
        }
        return false;
  } else if (la == 't') {
        // te'a
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'e') {
          lexer->advance(lexer, false);
          if (lexer->lookahead == '\'') {
            lexer->advance(lexer, false);
            if (tolower(lexer->lookahead) == 'a') {
              lexer->advance(lexer, false);
              lexer->mark_end(lexer);
              return true; // te'a
            }
          }
        }
        return false;
  } else if (la == 'g') {
        // ge'a
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'e') {
          lexer->advance(lexer, false);
          if (lexer->lookahead == '\'') {
            lexer->advance(lexer, false);
            if (tolower(lexer->lookahead) == 'a') {
              lexer->advance(lexer, false);
              lexer->mark_end(lexer);
              return true; // ge'a
            }
          }
        }
        return false;
      } else if (la == 'd') {
        // du
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // du
        }
        return false;
      } else if (la == 'm') {
        // me'i (<)
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'e') {
          lexer->advance(lexer, false);
          if (lexer->lookahead == '\'') {
            lexer->advance(lexer, false);
            if (tolower(lexer->lookahead) == 'i') {
              lexer->advance(lexer, false);
              lexer->mark_end(lexer);
              return true; // me'i
            }
          }
        }
        return false;
      } else if (la == 'z') {
        // za'u (>)
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'a') {
          lexer->advance(lexer, false);
          if (lexer->lookahead == '\'') {
            lexer->advance(lexer, false);
            if (tolower(lexer->lookahead) == 'u') {
              lexer->advance(lexer, false);
              lexer->mark_end(lexer);
              return true; // za'u
            }
          }
        }
        return false;
  }
  }

  // Fallback to WORD/CMENE/BRIVLA with cmene internal pause handling
  if (valid_symbols[WORD] || valid_symbols[CMENE] || valid_symbols[BRIVLA]) {
    if ((is_word_char(lexer->lookahead) || (valid_symbols[CMENE] && iswalpha(lexer->lookahead))) && !lexer->eof(lexer)) {
      // Buffer the word, allowing cmene-internal pauses of the form .C (dot followed by consonant)
      Scanner *scanner = (Scanner *)payload;
      scanner->word_len = 0;
      bool saw_internal_pause = false;
      for (;;) {
        if (is_word_char(lexer->lookahead)) {
          if (scanner->word_len >= scanner->word_cap) {
            scanner->word_cap *= 2;
            scanner->word_buffer = realloc(scanner->word_buffer, scanner->word_cap);
          }
          int32_t ch = lexer->lookahead;
          if (ch >= 'A' && ch <= 'Z') ch = (int32_t)tolower(ch);
          scanner->word_buffer[scanner->word_len++] = (char)ch;
          lexer->advance(lexer, false);
        } else if (valid_symbols[CMENE] && lexer->lookahead == '.') {
          // Peek next; allow dot only if followed by consonant letter, and don't include dot in buffer
          lexer->advance(lexer, false); // consume '.'
          if (!iswalpha(lexer->lookahead)) {
            // Dot not followed by a letter: invalid internal pause for cmene
            break;
          }
          int32_t nxt = tolower(lexer->lookahead);
          if (!isC((char)nxt)) {
            // Not a consonant -> stop, will classify the segment before '.'
            break;
          }
          saw_internal_pause = true;
          // continue without adding '.'; next loop iteration will add the consonant
        } else {
          break;
        }
        if (lexer->eof(lexer)) break;
      }
      scanner->word_buffer[scanner->word_len] = 0;
      lexer->mark_end(lexer);

      // If we saw an internal pause, only allow CMENE classification; otherwise classify normally
      if (valid_symbols[CMENE] && iscmene(scanner->word_buffer)) {
        return true; // CMENE
      } else if (saw_internal_pause && valid_symbols[CMENE]) {
        // Optionally tolerate cmene ending in a vowel if the name contains an internal pause
        size_t nlen = scanner->word_len;
        if (nlen > 0 && isV(scanner->word_buffer[nlen-1])) {
          return true; // CMENE (final vowel variant when marked)
        }
      } else if (!saw_internal_pause && valid_symbols[BRIVLA] && isbrivla(scanner->word_buffer)) {
        return true; // BRIVLA
      } else if (!saw_internal_pause && valid_symbols[WORD]) {
        return true; // WORD
      }
    }
  }

  return false;
}
