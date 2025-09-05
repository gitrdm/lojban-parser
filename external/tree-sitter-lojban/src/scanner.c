// Basic external scanner for tree-sitter-lojban
// Emits simple tokens; will be expanded to bridge existing lexer.

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <wctype.h>
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
  // No state needed for basic tokens
} Scanner;

enum TokenType {
  WORD,
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
};

void *tree_sitter_lojban_external_scanner_create(void) {
  Scanner *scanner = calloc(1, sizeof(Scanner));
  return scanner;
}

void tree_sitter_lojban_external_scanner_destroy(void *payload) {
  free(payload);
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

bool tree_sitter_lojban_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  (void)payload;

  // Skip whitespace
  while (iswspace(lexer->lookahead)) {
    lexer->advance(lexer, false);
  }

  if (lexer->eof(lexer)) return false;

  // Check for specific tokens
  if (valid_symbols[LU] && lexer->lookahead == 'l') {
    lexer->advance(lexer, false);
    if (lexer->lookahead == 'u') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // LU
    }
    return false;
  }

  if (valid_symbols[LIHU] && lexer->lookahead == 'l') {
    lexer->advance(lexer, false);
    if (lexer->lookahead == 'i') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // LIHU
        }
      }
    }
    return false;
  }

  if (valid_symbols[TO] && lexer->lookahead == 't') {
    lexer->advance(lexer, false);
    if (lexer->lookahead == 'o') {
      lexer->advance(lexer, false);
      lexer->mark_end(lexer);
      return true; // TO
    }
    return false;
  }

  if (valid_symbols[TOI] && lexer->lookahead == 't') {
    lexer->advance(lexer, false);
    if (lexer->lookahead == 'o') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == 'i') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // TOI
      }
    }
    return false;
  }

  if (valid_symbols[SEI] && lexer->lookahead == 's') {
    lexer->advance(lexer, false);
    if (lexer->lookahead == 'e') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == 'i') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // SEI
      }
    }
    return false;
  }

  if (valid_symbols[SEU] && lexer->lookahead == 's') {
    lexer->advance(lexer, false);
    if (lexer->lookahead == 'e') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == '\'') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == 'u') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // SEU
        }
      }
    }
    return false;
  }

  if (valid_symbols[VUH_O] && lexer->lookahead == 'v') {
    lexer->advance(lexer, false);
    if (lexer->lookahead == 'u') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == 'h') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == 'O') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // VUH_O
        }
      }
    }
    return false;
  }

  if (valid_symbols[VUH_U] && lexer->lookahead == 'v') {
    lexer->advance(lexer, false);
    if (lexer->lookahead == 'u') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == 'h') {
        lexer->advance(lexer, false);
        if (lexer->lookahead == 'U') {
          lexer->advance(lexer, false);
          lexer->mark_end(lexer);
          return true; // VUH_U
        }
      }
    }
    return false;
  }

  if (valid_symbols[JOI] && lexer->lookahead == 'j') {
    lexer->advance(lexer, false);
    if (lexer->lookahead == 'o') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == 'i') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // JOI
      }
    }
    return false;
  }

  if (valid_symbols[JEK] && lexer->lookahead == 'j') {
    lexer->advance(lexer, false);
    if (lexer->lookahead == 'e') {
      lexer->advance(lexer, false);
      if (lexer->lookahead == 'k') {
        lexer->advance(lexer, false);
        lexer->mark_end(lexer);
        return true; // JEK
      }
    }
    return false;
  }

  // Fallback to WORD
  if (valid_symbols[WORD]) {
    while (!lexer->eof(lexer) && !iswspace(lexer->lookahead) && lexer->lookahead != '\'') {
      lexer->advance(lexer, false);
    }
    lexer->mark_end(lexer);
    return true;
  }

  return false;
}
