%option noyywrap yylineno
%option outfile="lexer.c" header-file="lexer.h"
%s COMMENT
%{
/*
* 基于Flex的C语言Lexer
* Author: Kangrui Cen
*/
#include "lang.h"
#include "parser.h"
%}

%%

0|[1-9][0-9]* {
    yylval.n = build_nat(yytext, yyleng);
    return NAT;
}


"void" { return VOID; }
"char" { return CHAR; }
"int" { return INT; }
"long long" { return INT64; }
"unsigned char" { return U8; }
"unsigned int" { return UINT; }
"unsigned long long" { return UINT64; }

"if" { return TM_IF; }
"else" { return TM_ELSE; }
"while" { return TM_WHILE; }
"do" { return TM_DO; }
"switch" { return TM_SWITCH; }
"case" { return TM_CASE; }
"default" { return TM_DEFAULT; }
"for" { return TM_FOR; }
"continue" { return TM_CONTINUE; }
"break" { return TM_BREAK; }
"return" { return TM_RETURN; }

"struct" { return TM_STRUCT; }
"union" { return TM_UNION; }
"enum" { return TM_ENUM; }

"With" { return WITH; }
"Require" { return REQUIRE; }
"Ensure" { return ENSURE; }
"__return" { return __RETURN;}
"forall" { return FORALL; }
"exists" { return EXISTS; }
"Inv" { return TM_INV; }
"Let" { return LET; }
"sizeof" { return SIZEOF; }

[_A-Za-z][_A-Za-z0-9]* {
    yylval.i = new_str(yytext, yyleng);
    return ID;
}

";" { return ';'; }
":" { return ':'; }
"(" { return '('; }
")" { return ')'; }
"{" { return '{'; }
"}" { return '}'; }
"[" { return '['; }
"]" { return ']'; }
"+" { return '+'; }
"-" { return '-'; }
"*" { return '*'; }
"/" { return '/'; }
"%" { return '%'; }
"<" { return '<'; }
">" { return '>'; }
"^" { return '^'; }
"!" { return '!'; }
"|" { return '|'; }
"&" { return '&'; }
"~" { return '~'; }
"=" { return '='; }
"." { return '.'; }
"," { return ','; }

"<=" { return LE; }
">=" { return GE; }
"==" { return EQ; }
"!=" { return NE; }
"&&" { return AND; }
"||" { return OR; }
"<<" { return SHL; }
">>" { return SHR; }
"->" { return TM_FIELDOFPTR; }

"++" { return INCREASE; }
"--" { return DECREASE; }

"//@" {BEGIN(COMMENT);return TM_COMMENT;}
"/*@" { return COMMENT_HEADER; }
"*/" { return COMMENT_TAIL; }

"+=" { return ADD_EQ; }
"-=" { return SUB_EQ; }
"*=" { return MUL_EQ; }
"/=" { return DIV_EQ; }
"%=" { return MOD_EQ; }
"&=" { return BAND_EQ; }
"|=" { return BOR_EQ; } 
"^=" { return XOR_EQ; }
"<<=" { return SHL_EQ; }
">>=" { return SHR_EQ; }

<COMMENT>\n {BEGIN(INITIAL); return TM_NEWLINE;}

[ \t\n\r]    { };

.   {printf("%s",yytext);
     return -1; }
%%
