/* Copyright 1992-2003 Logical Language Group Inc.
	Licensed under the Academic Free License version 2.0 */

#include <stdlib.h> // for free()

# include "lojban.h"
# include <limits.h>
# include <stdint.h>

/* This module calls getword and lexes the result.  Its morphological
resolution is rather feeble: it can break up words consisting of compound
cmavo, but it assumes that brivla and cmene stand alone, without cmavo
clinging to the front of them.  This assumption holds for consciously
written Lojban text, although not for the results of a naive transcription
of Lojban speech.  It returns a pointer to a token object, which is
created from the free store.  See lojban.h for an explanation of this
object.
*/

token *
lex()
	{
	static char *word = NULL;
	token *result;
	char *p;

	result = newtoken();

	if (!word || *word == 0) {
		word = getword();
		if (!word) {
			result->type = 0;
			if (D_valsi)
				printf("valsi: end of text\n");
			return result;
			}
		}

	if (iscmene(word)) {
		result->type = CMENE_518;
		result->text = newstring(strlen(word) + 1);
		memcheck(result->text, "text");
		strcpy(result->text, word);
		word = NULL;
		}
	else if (isbrivla(word)) {
		result->type = BRIVLA_509;
		result->text = newstring(strlen(word) + 1);
		memcheck(result->text, "text");
		strcpy(result->text, word);
		word = NULL;
		}
	else {
		for (p = word + 1; *p; p++)
			if (isC(*p)) break;
		result->text = newstring(p - word + 1);
		memcheck(result->text, "text");
		strncpy(result->text, word, p - word);
		result->text[p-word] = 0;
		word = p;
		}
	if (D_valsi) {
		printf("valsi: ");
		print(result);
		}
	return result;
	}

int
iscmene(p)
char *p;
	{
	if (!isC(p[strlen(p)-1])) return 0;
	cmenecheck(p, "la");
	cmenecheck(p, "doi");
	cmenecheck(p, "h");
	cmenecheck(p, "w");
	cmenecheck(p, "q");
	return 1;
	}

void
cmenecheck(p, bad)
char *p; char *bad;
	{
	char *pos;
	int badlen;

	badlen = strlen(bad);

	for (pos = p;;) {
		pos = strchr(pos, bad[0]);
		if (!pos) break;
		if (strncmp(pos + 1, bad + 1, badlen - 1) == 0) break;
		pos++;
		}
	if (!pos) return;
	if (pos == p || isV(pos[-1])) {
		fprintf( stderr,
			"Illegal cmene %s at line %d, column %d: contains %s\n",
			p, line, column, bad);
	}
	}

int
isbrivla(p)
char *p;
	{
	int lastC;

	lastC = 0;
	for ( ; *p; p++) {
		if (*p == 'y' || *p == '\'') continue;
		else if (isC(*p) && lastC) return 1;
		else if (isC(*p)) lastC = 1;
		else lastC = 0;
		}
	return 0;
	}

char *
newstring(n)
int n;
	{
	/* Bump allocator for short-lived strings; allocate at least 'n' bytes,
	   rounded up to STRINGQUANTUM. Guard against overflow and OOM. */
	static char *master = NULL;
	static size_t size = 0; /* bytes remaining in current block */

	size_t need;
	size_t alloc;
	char *block;
	char *result;

	if (n <= 0) n = 1;
	need = (size_t) n;

	if (need > size) {
		/* Round up to the next multiple of STRINGQUANTUM */
		size_t q = (size_t)STRINGQUANTUM;
		alloc = need;
		if (q != 0) {
			size_t rem = alloc % q;
			if (rem) {
				size_t add = q - rem;
				if (add > SIZE_MAX - alloc) {
					fprintf(stderr, "String allocation overflow (need=%zu)\n", need);
					exit(1);
				}
				alloc += add;
			}
		}
		block = (char *) malloc(alloc);
		memcheck(block, "string");
		master = block;
		size = alloc;
		/* Track total string space; guard against long overflow */
		if (alloc > (size_t)LONG_MAX - (size_t)stringspace) {
			fprintf(stderr, "stringspace counter overflow (alloc=%zu)\n", alloc);
			/* still continue; but clamp to LONG_MAX to avoid wrap */
			stringspace = LONG_MAX;
		} else {
			stringspace += (long)alloc;
		}
	}
	result = master;
	master += need;
	size -= need;
	return result;
	}

void
memcheck(p, err)
char *p;
char *err;
	{
	if (!p) {
		fprintf(stderr, "Out of %s memory at line %d column %d\n",
			err, line, column);
		exit(1);
		}
	}
