%{
	// this part is copied to the beginning of the parser 
	#include <stdio.h>
	#include "lang.h"
	#include "lexer.h"
	void yyerror(char *);
	int yylex(void);
    struct cmd * root;
%}

%union {
unsigned int n;
char * i;
struct expr * e;
struct cmd * c;
void * none;
}

// Terminals
%token <n> TM_NAT
%token <i> TM_IDENT
%token <none> TM_LEFT_PAREN TM_RIGHT_PAREN
%token <none> TM_VAR
%token <none> TM_PLUS
%token <none> TM_MUL

// Nonterminals
%type <e> NT_EXPR_E
%type <e> NT_EXPR_F
%type <e> NT_EXPR_G

%%

NT_EXPR_E:
  NT_EXPR_F
  {
    $$ = ($1);
  }
| NT_EXPR_E TM_PLUS NT_EXPR_F
  {
    $$ = (TPlus($1,$3));
  }
;

NT_EXPR_F:
  NT_EXPR_G
  {
    $$ = ($1);
  }
| NT_EXPR_F TM_MUL NT_EXPR_G
  {
    $$ = (TMult($1,$3));
  }
;

NT_EXPR_G:
  TM_LEFT_PAREN NT_EXPR_E TM_RIGHT_PAREN
  {
    $$ = ($2);
  }
| TM_IDENT
  {
    $$ = (TVar($1));
  }
| TM_NAT
  {
    $$ = (TConst($1));
  }
;

%%

void yyerror(char* s)
{
    fprintf(stderr , "%s\n",s);
}
