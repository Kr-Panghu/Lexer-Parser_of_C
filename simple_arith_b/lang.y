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
%type <e> NT_EXPR

// Priority
%left TM_PLUS
%left TM_MUL
%left TM_LEFT_PAREN TM_RIGHT_PAREN

%%

NT_EXPR:
  NT_EXPR TM_PLUS NT_EXPR
  {
    $$ = (TPlus($1,$3));
  }
| NT_EXPR TM_MUL NT_EXPR
  {
    $$ = (TMult($1,$3));
  }
| TM_IDENT
  {
    $$ = (TVar($1));
  }
| TM_LEFT_PAREN NT_EXPR TM_RIGHT_PAREN
  {
    $$ = ($2);
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
