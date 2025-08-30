/* Copyright 1992-2003 Logical Language Group Inc.
	Licensed under the Academic Free License version 2.0 */

#include <stdlib.h> // for free()

# include "lojban.h"

/* This module provides all output facilities.
Currently, all output is to stdout, but this is easy to change.
	print(tok) uses Lisp format, rprint(tok) uses Prolog format.
	tree(tok) uses portable tree format (one line per node).
*/

FILE *stream;

extern int singlemode;

static int level = 0;
static int outcolumn = 0;

# define LDELIM ("({<[" [level++ & 3])
# define RDELIM (")}>]" [--level & 3])

void
print(tok)
token *tok;
	{
	outcolumn = level = 0;
	print1(tok);
	fprintf(stream, "\n");
	}

void
print1(tok)
token *tok;
	{
	token *p;

tail_recursion:
	if (!tok) {
		need(4, stream);
		fprintf(stream, "NULL");
		}
	else if (tok->type == 0) {
		need(3, stream);
		fprintf(stream, "EOT");
		}
	else if (tok->text) {
		need(strlen(tok->text), stream);
		fprintf(stream, "%s", tok->text);
		}
	else if (!tok->downleft) {
		need(2, stream);
		fprintf(stream, "()");
		}
	else if (!singlemode && !tok->downleft->right) {
		tok = tok->downleft;
		goto tail_recursion;
		}
	else {
		for (p = tok->downleft; p; p = p->right) {
			need(1, stream);
			fprintf(stream, "%c",
				(p == tok->downleft) ? LDELIM : ' ');
			print1(p);
			}
		need(1, stream);
		fprintf(stream, "%c", RDELIM);
		}
	}

void
rprint(tok)
token *tok;
	{
	outcolumn = level = 0;
	rprint1(tok);
	fprintf(stream, ".\n");
	}

void
rprint1(tok)
token *tok;
	{
	token *p;
	char *rule;
	char *prule = NULL;

tail_recursion:
	if (tok && tok->type) {
		rule = rulename(tok->type);
		/* prologize into a writable buffer to avoid modifying string literals */
		if (rule) {
			int len = strlen(rule);
			prule = newstring(len + 1);
			memcheck(prule, "rule");
			for (int i = 0; i < len; i++) {
				char c = rule[i];
				if (c == '\'') c = 'h';
				if (!isalnum((unsigned char)c)) c = '_';
				prule[i] = c;
			}
			prule[len] = '\0';
		}
	} else {
		rule = NULL;
	}

	if (!tok) {
		need(4, stream);
		fprintf(stream, "NULL");
		}
	else if (tok->type == 0) {
		need(3, stream);
		fprintf(stream, "EOT");
		}
	else if (tok->text) {
		char *ptext = NULL;
		int tlen = strlen(tok->text);
		need(strlen(prule) + tlen + 2, stream);
		ptext = newstring(tlen + 1);
		memcheck(ptext, "text");
		strcpy(ptext, tok->text);
		prologize(ptext);
		downcase(ptext);
		fprintf(stream, "%s(%s)", prule, ptext);
		}
	else if (!tok->downleft) {
		need(strlen(prule) + 2, stream);
		fprintf(stream, "%s()", prule);
		}
	else if (!singlemode && !tok->downleft->right) {
		tok = tok->downleft;
		goto tail_recursion;
		}
	else {
		need(strlen(prule), stream);
		fprintf(stream, "%s", prule);
		for (p = tok->downleft; p; p = p->right) {
			need(1, stream);
			fprintf(stream, "%c",
				(p == tok->downleft) ? '(' : ',');
			rprint1(p);
			}
		need(1, stream);
		fprintf(stream, ")");
		}
	}

int magic = 0;

void
tree(tok)
token *tok;
	{
	magic = 0;
	tree1(tok);
	}

void
tree1(tok)
token *tok;
	{
	token *child;
	char *name;

	for (child = tok->downleft; child; child = child->right)
		tree1(child);
	name = rulename(tok->type);
# if 0
	if (tok->downleft && !tok->downleft->right) {
		tok->type = tok->downleft->type;
		return;
		}
# endif
	tok->type = ++magic;
	fprintf(stream, "%d\t%s", tok->type, name);
	if (tok->text)
		fprintf(stream, "\t%s", tok->text);
	else
		for (child = tok->downleft; child; child = child->right)
			fprintf(stream, "\t%d", child->type);
	fprintf(stream, "\n");
	}

void yprint1(token *tok, int level)
{
    token *child = NULL;
    int i = 0;

    if (tok->text) {
        for (i = 0; i < level; i++) {
            fprintf(stdout, "  ");
        }
        fprintf(stdout, "%s:\n", tok->text);
    }

    for (child = tok->downleft; child; child = child->right) {
        yprint1(child, level++);
    }
}

void yprint(token *tok)
{
    yprint1(tok, 0);
}

void
need(n, stream)
int n;
FILE *stream;
	{

	outcolumn += n;
	if (outcolumn >= MAXLINE) {
		fprintf(stream, "\n");
		outcolumn = n;
		}
	}

void
prologize(p)
char *p;
	{
	if (!p) return;
	while (*p) {
		unsigned char ch = (unsigned char)*p;
		if (ch == '\'') ch = 'h';
		if (!isalnum(ch)) ch = '_';
		*p = (char)ch;
		p++;
		}
	}

void
downcase(p)
char *p;
	{
	if (!p) return;
	while (*p) {
		unsigned char ch = (unsigned char)*p;
		*p++ = (char)tolower(ch);
	}
	}
