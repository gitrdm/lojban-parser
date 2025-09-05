// Stub external scanner for tree-sitter-lojban
// Will be implemented to bridge existing lexer/preparser compounds.

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Tree-sitter external scanner interface
typedef struct TSLexer {
  int32_t lookahead;
  void (*advance)(struct TSLexer *, bool);
  void (*mark_end)(struct TSLexer *);
  uint32_t (*get_column)(struct TSLexer *);
  bool (*is_at_included_range_start)(struct TSLexer *);
  bool (*eof)(struct TSLexer *);
} TSLexer;

void *tree_sitter_lojban_external_scanner_create(void) { return NULL; }
void tree_sitter_lojban_external_scanner_destroy(void *payload) { (void)payload; }
void tree_sitter_lojban_external_scanner_reset(void *payload) { (void)payload; }

unsigned tree_sitter_lojban_external_scanner_serialize(void *payload, char *buffer) {
  (void)payload; (void)buffer; return 0;
}

void tree_sitter_lojban_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  (void)payload; (void)buffer; (void)length;
}

bool tree_sitter_lojban_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  (void)payload; (void)lexer; (void)valid_symbols; return false;
}
