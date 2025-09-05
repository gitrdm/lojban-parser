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
  SEU,
  VUH_O,
  VUH_U,
  JOI,
  JEK,
  BO,
  KE,
  JEK_BO,
  JOI_BO,
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
  (void)payload;
}

unsigned tree_sitter_lojban_external_scanner_serialize(void *payload, char *buffer) {
  (void)payload; (void)buffer;
  return 0;
}

void tree_sitter_lojban_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  (void)payload; (void)buffer; (void)length;
}

static int isC(char c) {
  return (c >= 'b' && c <= 'd') || (c >= 'f' && c <= 'g') || (c >= 'j' && c <= 'n') || (c >= 'p' && c <= 'r') || (c >= 's' && c <= 'z');
}

static int isV(char c) {
  return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

static inline int is_ws_or_pause(int32_t ch) {
  return iswspace(ch) || ch == '.'; // Treat '.' as a pause (space)
}

static inline int is_word_char(int32_t ch) {
  // Lojban words include letters and apostrophe
  return iswalpha(ch) || ch == '\'';
}

static int iscmene(const char *p) {
  size_t len = strlen(p);
  if (len == 0 || !isC(p[len-1])) return 0;
  // Simple check, no bad sequences for now
  return 1;
}

static int isbrivla(const char *p) {
  int lastC = 0;
  for (const char *q = p; *q; q++) {
    if (*q == 'y' || *q == '\'') continue;
    else if (isC(*q) && lastC) return 1;
    else if (isC(*q)) lastC = 1;
    else lastC = 0;
  }
  return 0;
}

bool tree_sitter_lojban_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = (Scanner *)payload;

  // Skip whitespace
  while (is_ws_or_pause(lexer->lookahead) && !lexer->eof(lexer)) {
    lexer->advance(lexer, false);
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
      return true; // LU
    }
    return false;
  }

  // li'u (lihU)
  if (valid_symbols[LIHU] && tolower(lexer->lookahead) == 'l') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'i') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // LIHU
        }
      }
    }
    return false;
  }

  // to
  if (valid_symbols[TO] && tolower(lexer->lookahead) == 't') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // TO
    }
    return false;
  }

  // toi
  if (valid_symbols[TOI] && tolower(lexer->lookahead) == 't') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'o') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'i') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
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

  // jek: recognize 'je' (or 'je bo' as JEK_BO)
  if ((valid_symbols[JEK] || valid_symbols[JEK_BO]) && tolower(lexer->lookahead) == 'j') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'e') {
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
          return true; // VUH_O
        }
      }
    }
    return false;
  }

  // vuhU
  if (valid_symbols[VUH_U] && tolower(lexer->lookahead) == 'v') {
    lexer->advance(lexer, false);
    if (tolower(lexer->lookahead) == 'u') {
      lexer->advance(lexer, false);
      if (tolower(lexer->lookahead) == 'h') {
        lexer->advance(lexer, false);
        if (tolower(lexer->lookahead) == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // VUH_U
        }
      }
    }
    return false;
  }

  // Fallback to WORD
  if (valid_symbols[WORD] || valid_symbols[CMENE] || valid_symbols[BRIVLA]) {
    if (is_word_char(lexer->lookahead) && !lexer->eof(lexer)) {
      // Buffer the word
      Scanner *scanner = (Scanner *)payload;
      scanner->word_len = 0;
      do {
        if (scanner->word_len >= scanner->word_cap) {
          scanner->word_cap *= 2;
          scanner->word_buffer = realloc(scanner->word_buffer, scanner->word_cap);
        }
        // Lower-case into buffer for classification; keep apostrophes
        int32_t ch = lexer->lookahead;
        if (ch >= 'A' && ch <= 'Z') ch = (int32_t)tolower(ch);
        scanner->word_buffer[scanner->word_len++] = (char)ch;
        lexer->advance(lexer, false);
      } while (!lexer->eof(lexer) && is_word_char(lexer->lookahead));
      scanner->word_buffer[scanner->word_len] = 0;
      lexer->mark_end(lexer);

      // Classify
      if (valid_symbols[CMENE] && iscmene(scanner->word_buffer)) {
        return true; // CMENE
      } else if (valid_symbols[BRIVLA] && isbrivla(scanner->word_buffer)) {
        return true; // BRIVLA
      } else if (valid_symbols[WORD]) {
        return true; // WORD
      }
    }
  }

  return false;
}
