%{
// this part is copied to the beginning of the parser 
/*
* 基于BISON的C语言Parser
* 用于语法检查
* Author: Kangrui Cen
*/
#include <stdio.h>
#include "lang.h"
#include "lexer.h"
void yyerror(char *);
int yylex(void);
struct def_list * root;
%}

%union {
void * none;
unsigned int n;
char * i;
struct type * t;
struct expr * e;
struct expr_list * expr_l;
struct cmd * c;
struct simple_cmd * sc;
struct def * d;
struct def_list * d_l;
struct var_list * v_l;
struct var_dec * vd;
struct var_dec_list  *vd_l;
struct enum_list * enum_l;
struct Case * ca;
struct Case_list * ca_list;
struct field_dec * fd;
struct field_dec_list * fd_l;
struct Afuncdef * afd;
struct ASepdef * asd;
struct RAssertion * ra;
struct RA_list * ra_list;
}

// Terminals
%token <n> NAT
%token <i> ID __RETURN
%token <none> ';' ':' '(' ')' '{' '}' '[' ']' '+' '-' '*' '/' '%' '<' '>' '^' '!' '|' '&' '~' '=' '.' ','
%token <none> TM_FIELDOFPTR SIZEOF
%token <none> LE GE EQ NE AND OR SHL SHR INCREASE DECREASE
%token <none> TM_COMMENT COMMENT_HEADER COMMENT_TAIL
%token <none> ADD_EQ SUB_EQ MUL_EQ DIV_EQ MOD_EQ BAND_EQ BOR_EQ XOR_EQ SHL_EQ SHR_EQ
%token <none> WITH REQUIRE ENSURE
%token <none> FORALL EXISTS TM_INV LET
%token <none> VOID CHAR INT INT64 U8 UINT UINT64
%token <none> TM_IF TM_ELSE TM_WHILE TM_DO TM_SWITCH TM_CASE TM_DEFAULT TM_FOR TM_CONTINUE TM_BREAK TM_RETURN
%token <none> TM_STRUCT TM_UNION TM_ENUM TM_NEWLINE

// Nonterminals
%type <d_l> NT_WHOLE
%type <d_l> DEF_LIST
%type <d> DEF
%type <c> CMD_LIST CMD_OR_COMMENT CMDTYPE
%type <c> BLOCK // {...}, for solving shift/reduce conflicts
%type <sc> SIMPLECMD
%type <t> TYPE
%type <e> EXPRTYPE
%type <expr_l> EXPR_LIST
%type <v_l> VAR_LIST
%type <vd> VARDEC
%type <vd_l> VARDEC_LIST
%type <enum_l> ENUM_LIST
%type <ca> CASE_OR_DEFAULT
%type <ca_list> CASE_LIST
%type <fd> FIELD_DEC
%type <fd_l> FIELD_DEC_LIST
%type <afd> AFUNCDEF
%type <asd> ASEPDEF
%type <ra> RASSERTION
%type <ra_list> RA_LIST



// Priority

%nonassoc EXISTS FORALL ID
%nonassoc '=' ADD_EQ SUB_EQ MUL_EQ DIV_EQ MOD_EQ BAND_EQ BOR_EQ XOR_EQ SHL_EQ SHR_EQ
%left ','
%left OR
%left AND
%left '|'
%left '^'
%left '&'
%left EQ NE
%left '<' LE '>' GE 
%left SHL SHR
%left '+' '-'
%left '*' '/' '%'
%right INCREASE DECREASE '!' '~' SIZEOF
%left '.' TM_FIELDOFPTR
%left '(' ')' '{' '}' '[' ']'
%right ';'

%nonassoc TM_ELSE


%start NT_WHOLE

%%

NT_WHOLE:
  DEF_LIST{
    $$ = ($1);
    root = $$;
  }
;

DEF_LIST:
  {
    $$ = (DFLNil());
  }
| DEF DEF_LIST { 
    $$ = (DFLCons($1,$2));
  }
;

CMD_LIST:
  {
    $$ = NULL;
  }
| CMD_OR_COMMENT CMD_LIST  
  {
    $$ = (TSeq($1, $2));
  }
;

DEF:
  TYPE ID '(' VARDEC_LIST ')' AFUNCDEF '{' CMD_LIST '}' {
    $$ = (TFuncdef($1,$2,$4,$8,$6));
 }
| TYPE ID '(' VARDEC_LIST ')' '{' CMD_LIST '}' {
    $$ = (TFuncdef($1,$2,$4,$7,NULL));
  }
| TYPE ID '(' ')' AFUNCDEF '{' CMD_LIST '}' {
    $$ = (TFuncdef($1,$2,NULL,$7,$5));
  }
| TYPE ID '(' ')' '{' CMD_LIST '}' {
    $$ = (TFuncdef($1,$2,NULL,$6,NULL));
  }
| TYPE ID '(' VARDEC_LIST ')' AFUNCDEF ';' {
    $$ = (TFuncdec($1,$2,$4,$6));
  }
| TYPE ID '(' VARDEC_LIST ')' ';' {
    $$ = (TFuncdec($1,$2,$4,NULL));
  }
| TYPE ID '(' ')' AFUNCDEF ';' {
    $$ = (TFuncdec($1,$2,NULL,$5));
  }
| TYPE ID '(' ')' ';' {
    $$ = (TFuncdec($1,$2,NULL,NULL));
  }
| ASEPDEF {
    $$ = (TSepdef($1));
  }
| TM_UNION ID '{' FIELD_DEC_LIST '}' ';' {
    $$ = (TUniondef($2,$4));
  }
| TM_ENUM ID '{' ENUM_LIST '}' ';' {
    $$ = (TEnumdef($2,$4));
  }
| TM_STRUCT ID '{' FIELD_DEC_LIST '}' ';' {
    $$ = (TStructdef($2,$4));
  }
| VARDEC ';' {
    $$ = (TVarDecl_1($1));
  }
;

TYPE:
  VOID {
    $$ = (TBasic(T_VOID));
  }
| CHAR {
    $$ = (TBasic(T_CHAR));
  }
| U8 {
    $$ = (TBasic(T_U8));
  }
| INT {
    $$ = (TBasic(T_INT));
  }
| INT64 {
    $$ = (TBasic(T_INT64));
  }
| UINT {
    $$ = (TBasic(T_UINT));
  }
| UINT64 {
    $$ = (TBasic(T_UINT64));
  }
| TM_STRUCT ID {
    $$ = (TStruct($2));
  }
| TM_UNION ID {
    $$ = (TUnion($2));
  }
| TM_ENUM ID {
    $$ = (TEnum($2));
  }
| TYPE ID '[' EXPRTYPE ']' {
    $$ = (TArray($1,$2,$4));
  }
| TYPE '*' {
    $$ = (TPtr($1));
  }
;

CMD_OR_COMMENT:
  CMDTYPE {
    $$ = ($1);
  }
| TM_COMMENT RASSERTION TM_NEWLINE {
    $$ = (TComment($2));
  }
| COMMENT_HEADER RASSERTION COMMENT_TAIL {
    $$ = (TComment($2));
  }
;

BLOCK:
  '{' CMD_LIST '}' {
    $$ = ($2);
  }
;

CMDTYPE:
  BLOCK {
    $$ = ($1)
  }
| VARDEC ';' {
    $$ = (TVarDecl($1));
  }
| SIMPLECMD ';' {
    $$ = (TSimple($1));
  }
| TM_IF '(' EXPRTYPE ')' CMDTYPE {
    $$ = (TIf($3,$5,NULL));
  }
| TM_IF '(' EXPRTYPE ')' CMDTYPE TM_ELSE CMDTYPE {
    $$ = (TIf($3,$5,$7));
  }
| TM_WHILE '(' EXPRTYPE ')' CMDTYPE {
    $$ = (TWhile(NULL,$3,$5));
  }
| TM_DO CMDTYPE TM_WHILE EXPRTYPE ';' {
    $$ = (TDoWhile(NULL,$4,$2));
  }
| TM_COMMENT TM_INV RASSERTION TM_NEWLINE TM_WHILE '(' EXPRTYPE ')' CMDTYPE {
    $$ = (TWhile($3,$7,$9));
  }
| TM_COMMENT TM_INV RASSERTION TM_NEWLINE TM_DO CMDTYPE TM_WHILE EXPRTYPE ';' {
    $$ = (TDoWhile($3,$8,$6));
  }
| TM_SWITCH EXPRTYPE '{' CASE_LIST '}' {
    $$ = (TSwitch($2,$4));
  }


| TM_COMMENT TM_INV RASSERTION TM_NEWLINE TM_FOR '(' SIMPLECMD ';' EXPRTYPE ';' SIMPLECMD ')' CMDTYPE {
    $$ = (TFor($3,$7,$9,$11,$13));
  }
| TM_COMMENT TM_INV RASSERTION TM_NEWLINE TM_FOR '(' SIMPLECMD ';' EXPRTYPE ';' ')' CMDTYPE {
    $$ = (TFor($3,$7,$9,NULL,$12));
  }
| TM_COMMENT TM_INV RASSERTION TM_NEWLINE TM_FOR '(' SIMPLECMD ';' ';' SIMPLECMD ')' CMDTYPE {
    $$ = (TFor($3,$7,NULL,$10,$12));
  }
| TM_COMMENT TM_INV RASSERTION TM_NEWLINE TM_FOR '(' SIMPLECMD ';' ';' ')' CMDTYPE {
    $$ = (TFor($3,$7,NULL,NULL,$11));
  }

| TM_COMMENT TM_INV RASSERTION TM_NEWLINE TM_FOR '(' ';' EXPRTYPE ';' SIMPLECMD ')' CMDTYPE {
    $$ = (TFor($3,NULL,$8,$10,$12));
  }
| TM_COMMENT TM_INV RASSERTION TM_NEWLINE TM_FOR '(' ';' EXPRTYPE ';' ')' CMDTYPE {
    $$ = (TFor($3,NULL,$8,NULL,$11));
  }
| TM_COMMENT TM_INV RASSERTION TM_NEWLINE TM_FOR '(' ';' ';' SIMPLECMD ')' CMDTYPE {
    $$ = (TFor($3,NULL,NULL,$9,$11));
  }
| TM_COMMENT TM_INV RASSERTION TM_NEWLINE TM_FOR '(' ';' ';' ')' CMDTYPE {
    $$ = (TFor($3,NULL,NULL,NULL,$10));
  }

| TM_FOR '(' SIMPLECMD ';' EXPRTYPE ';' SIMPLECMD ')' CMDTYPE {
    $$ = (TFor(NULL,$3,$5,$7,$9));
  }
| TM_FOR '(' SIMPLECMD ';' EXPRTYPE ';' ')' CMDTYPE {
    $$ = (TFor(NULL,$3,$5,NULL,$8));
  }
| TM_FOR '(' SIMPLECMD ';' ';' SIMPLECMD ')' CMDTYPE {
    $$ = (TFor(NULL,$3,NULL,$6,$8));
  }
| TM_FOR '(' SIMPLECMD ';' ';' ')' CMDTYPE {
    $$ = (TFor(NULL,$3,NULL,NULL,$7));
  }

| TM_FOR '(' ';' EXPRTYPE ';' SIMPLECMD ')' CMDTYPE {
    $$ = (TFor(NULL,NULL,$4,$6,$8));
  }
| TM_FOR '(' ';' EXPRTYPE ';' ')' CMDTYPE {
    $$ = (TFor(NULL,NULL,$4,NULL,$7));
  }
| TM_FOR '(' ';' ';' SIMPLECMD ')' CMDTYPE {
    $$ = (TFor(NULL,NULL,NULL,$5,$7));
  }
| TM_FOR '(' ';' ';' ')' CMDTYPE {
    $$ = (TFor(NULL,NULL,NULL,NULL,$6));
  }



| TM_BREAK ';' {
    $$ = (TBreak());
  }
| TM_CONTINUE ';' {
    $$ = (TContinue());
  }
| TM_RETURN EXPRTYPE ';' {
    $$ = (TReturn($2));
  }
| TM_RETURN ';' {
    $$ = (TReturn(NULL));
  }
| ';' {
  $$ = NULL;
}
;

SIMPLECMD:
  EXPRTYPE{
    $$ = (TComputation($1));
  }
| EXPRTYPE '=' EXPRTYPE{
    $$ = (TAsgn(T_ASSIGN,$1,$3));
  }
| EXPRTYPE ADD_EQ EXPRTYPE{
    $$ = (TAsgn(T_ADD_ASSIGN,$1,$3));
  }
| EXPRTYPE SUB_EQ EXPRTYPE{
    $$ = (TAsgn(T_SUB_ASSIGN,$1,$3));
  }
| EXPRTYPE MUL_EQ EXPRTYPE{
    $$ = (TAsgn(T_MUL_ASSIGN,$1,$3));
  }
| EXPRTYPE DIV_EQ EXPRTYPE{
    $$ = (TAsgn(T_DIV_ASSIGN,$1,$3));
  }
| EXPRTYPE MOD_EQ EXPRTYPE{
    $$ = (TAsgn(T_MOD_ASSIGN,$1,$3));
  }
| EXPRTYPE BAND_EQ EXPRTYPE{
    $$ = (TAsgn(T_BAND_ASSIGN,$1,$3));
  }
| EXPRTYPE BOR_EQ EXPRTYPE{
    $$ = (TAsgn(T_BOR_ASSIGN,$1,$3));
  }
| EXPRTYPE XOR_EQ EXPRTYPE{
    $$ = (TAsgn(T_XOR_ASSIGN,$1,$3));
  }
| EXPRTYPE SHL_EQ EXPRTYPE{
    $$ = (TAsgn(T_SHL_ASSIGN,$1,$3));
  }
| EXPRTYPE SHR_EQ EXPRTYPE{
    $$ = (TAsgn(T_SHR_ASSIGN,$1,$3));
  }
| INCREASE EXPRTYPE{
    $$ = (TIncDec(T_INC_F,$2));
  }
| DECREASE EXPRTYPE{
    $$ = (TIncDec(T_DEC_F,$2));
  }
| EXPRTYPE INCREASE{
    $$ = (TIncDec(T_INC_B,$1));
  }
| EXPRTYPE DECREASE{
    $$ = (TIncDec(T_DEC_B,$1));
  }
;


VARDEC:
  TYPE ID {
    $$ = (TVarDecl_2($1,$2));
  }
;

VARDEC_LIST:
  VARDEC {
    $$ = (VDLCons($1,VDLNil()));
  }
| VARDEC_LIST ',' VARDEC {
    $$ = (VDLCons($3,$1));
  }
;


EXPRTYPE:
  NAT {
    $$ = (TConst($1));
  }
| '(' EXPRTYPE ')' {
    $$ = ($2);
  }
| ID {
    $$ = (TVar($1));
  }
| '-' EXPRTYPE {
    $$ = (TUnop(T_UMINUS,$2));
  }
| '+' EXPRTYPE {
    $$ = (TUnop(T_UPLUS,$2));
  }
| '!' EXPRTYPE {
    $$ = (TUnop(T_NOTBOOL,$2));
  }
| '~' EXPRTYPE {
    $$ = (TUnop(T_NOTINT,$2));
  }
| EXPRTYPE '+' EXPRTYPE {
    $$ = (TBinop(T_PLUS,$1,$3));
  }
| EXPRTYPE '-' EXPRTYPE {
    $$ = (TBinop(T_MINUS,$1,$3));
  }
| EXPRTYPE '*' EXPRTYPE {
    $$ = (TBinop(T_MUL,$1,$3));
  }
| EXPRTYPE '/' EXPRTYPE {
    $$ = (TBinop(T_DIV,$1,$3));
  }
| EXPRTYPE '%' EXPRTYPE {
    $$ = (TBinop(T_MOD,$1,$3));
  }
| EXPRTYPE '<' EXPRTYPE {
    $$ = (TBinop(T_LT,$1,$3));
  }
| EXPRTYPE '>' EXPRTYPE {
    $$ = (TBinop(T_GT,$1,$3));
  }
| EXPRTYPE LE EXPRTYPE {
    $$ = (TBinop(T_LE,$1,$3));
  }
| EXPRTYPE GE EXPRTYPE {
    $$ = (TBinop(T_GE,$1,$3));
  }
| EXPRTYPE EQ EXPRTYPE {
    $$ = (TBinop(T_EQ,$1,$3));
  }
| EXPRTYPE NE EXPRTYPE {
    $$ = (TBinop(T_NE,$1,$3));
  }
| EXPRTYPE AND EXPRTYPE {
    $$ = (TBinop(T_AND,$1,$3));
  }
| EXPRTYPE OR EXPRTYPE {
    $$ = (TBinop(T_OR,$1,$3));
  }
| EXPRTYPE '&' EXPRTYPE {
    $$ = (TBinop(T_BAND,$1,$3));
  }
| EXPRTYPE '|' EXPRTYPE {
    $$ = (TBinop(T_BOR,$1,$3));
  }
| EXPRTYPE '^' EXPRTYPE {
    $$ = (TBinop(T_XOR,$1,$3));
  }
| EXPRTYPE SHL EXPRTYPE {
    $$ = (TBinop(T_SHL,$1,$3));
  }
| EXPRTYPE SHR EXPRTYPE {
    $$ = (TBinop(T_SHR,$1,$3));
  }
| ID '(' EXPR_LIST ')' {
    $$ = (TCall($1,$3));
  }
| ID '(' ')' {
    $$ = (TCall($1,ELNil()));
  }
| SIZEOF '(' TYPE ')' {
    $$ = (TSizeofType($3));
  }
| '*' EXPRTYPE {
    $$ = (TDeref($2));
  }
| '&' EXPRTYPE {
    $$ = (TAddress($2));
  }
| '(' TYPE ')' EXPRTYPE {
    $$ = (TCast($2,$4));
  }
| EXPRTYPE '[' EXPRTYPE ']' {
    $$ = (TIndex($1,$3));
  }
| EXPRTYPE '.' ID {
    $$ = (TFieldof($1,$3));
  }
| EXPRTYPE TM_FIELDOFPTR ID {
    $$ = (TFieldofptr($1,$3));
  }
;

EXPR_LIST:
  EXPRTYPE {
    $$ = (ELCons($1,ELNil()));
  }
| EXPRTYPE ',' EXPR_LIST {
    $$ = (ELCons($1,$3));
  }
;

CASE_LIST:
  {
    $$ = (CLNil());
  }
| CASE_OR_DEFAULT CASE_LIST {
    $$ = (CLCons($1,$2));
  }
;

CASE_OR_DEFAULT:
  TM_CASE EXPRTYPE ':' CMD_LIST {
    $$ = (TCase($2,$4));
  }
| TM_DEFAULT ':' CMD_LIST {
    $$ = (TDefault($3));
  }
;

ENUM_LIST: //enum{a,b,c}
  ID {
    $$ = (ENLCons($1,ENLNil()));
  }
| ID ',' ENUM_LIST {
    $$ = (ENLCons($1,$3));
  }
;

AFUNCDEF:
  COMMENT_HEADER WITH VAR_LIST REQUIRE RASSERTION ENSURE RASSERTION COMMENT_TAIL {
    $$ = (TAfuncdef($3,$5,$7));
  }
| COMMENT_HEADER REQUIRE RASSERTION ENSURE RASSERTION COMMENT_TAIL {
    $$ = (TAfuncdef(NULL,$3,$5));
  }
;

ASEPDEF:
  COMMENT_HEADER LET ID '(' EXPR_LIST ')' '=' RASSERTION COMMENT_TAIL {
    $$ = (TAsepdef($3,$5,$8));
  }
| TM_COMMENT LET ID '(' EXPR_LIST ')' '=' RASSERTION TM_NEWLINE {  
    $$ = (TAsepdef($3,$5,$8));
  }
;

FIELD_DEC_LIST:
  {
    $$ = (FDLNil());
  }
| FIELD_DEC FIELD_DEC_LIST {
    $$ = (FDLCons($1,$2));
  }
;

FIELD_DEC:
  TYPE ID ';' {
    $$ = (TFieldDec($1,$2));
  }
;

VAR_LIST:
  {
    $$ = (VLNil());
  }
| ID VAR_LIST{
    $$ = (VLCons($1,$2));
  }
;

RA_LIST:
  RASSERTION {
    $$ = (RALCons($1,RALNil()));
  }
| RASSERTION ',' RA_LIST {
    $$ = (RALCons($1,$3));
  }
;

RASSERTION:
  '(' RASSERTION ')' {
    $$ = ($2);
  }
| NAT {
    $$ = (RAConst($1));
  }
| __RETURN {
    $$ = (RAVar($1));
  }
| ID {
    $$ = (RAVar($1));
  }
| ID '(' RA_LIST ')' {
    $$ = (RACall($1,$3));
  }
| RASSERTION '+' RASSERTION {
    $$ = (RABinop(T_PLUS,$1,$3));
  }
| RASSERTION '-' RASSERTION {
    $$ = (RABinop(T_MINUS,$1,$3));
  }
| RASSERTION '*' RASSERTION {
    $$ = (RABinop(T_MUL,$1,$3));
  }
| RASSERTION '/' RASSERTION {
    $$ = (RABinop(T_DIV,$1,$3));
  }
| RASSERTION '%' RASSERTION {
    $$ = (RABinop(T_MOD,$1,$3));
  }
| RASSERTION '<' RASSERTION {
    $$ = (RABinop(T_LT,$1,$3));
  }
| RASSERTION '>' RASSERTION {
    $$ = (RABinop(T_GT,$1,$3));
  }
| RASSERTION LE RASSERTION {
    $$ = (RABinop(T_LE,$1,$3));
  }
| RASSERTION GE RASSERTION {
    $$ = (RABinop(T_GE,$1,$3));
  }
| RASSERTION EQ RASSERTION {
    $$ = (RABinop(T_EQ,$1,$3));
  }
| RASSERTION NE RASSERTION {
    $$ = (RABinop(T_NE,$1,$3));
  }
| RASSERTION AND RASSERTION {
    $$ = (RABinop(T_AND,$1,$3));
  }
| RASSERTION OR RASSERTION {
    $$ = (RABinop(T_OR,$1,$3));
  }
| RASSERTION '&' RASSERTION {
    $$ = (RABinop(T_BAND,$1,$3));
  }
| RASSERTION '|' RASSERTION {
    $$ = (RABinop(T_BOR,$1,$3));
  }
| RASSERTION '^' RASSERTION {
    $$ = (RABinop(T_XOR,$1,$3));
  }
| RASSERTION SHL RASSERTION {
    $$ = (RABinop(T_SHL,$1,$3));
  }
| RASSERTION SHR RASSERTION {
    $$ = (RABinop(T_SHR,$1,$3));
  }
| '-' RASSERTION {
    $$ = (RAUnop(T_UMINUS,$2));
  }
| '+' RASSERTION {
    $$ = (RAUnop(T_UPLUS,$2));
  }
| '!' RASSERTION {
    $$ = (RAUnop(T_NOTBOOL,$2));
  }
| '~' RASSERTION {
    $$ = (RAUnop(T_NOTINT,$2));
  }
| '*' RASSERTION {
    $$ = (RADeref($2));
  }
| '&' RASSERTION {
    $$ = (RAAddress($2));
  }
| '(' TYPE ')' RASSERTION {
    $$ = (RACast($2,$4));
  }
| RASSERTION '[' RASSERTION ']' {
    $$ = (RAIndex($1,$3));
  }
| RASSERTION '.' ID {
    $$ = (RAFieldof($1,$3));
  }
| RASSERTION TM_FIELDOFPTR ID {
    $$ = (RAFieldofptr($1,$3));
  }
| FORALL ID ',' RASSERTION {
    $$ = (RAQfop(A_FORALL,$2,$4));
  }
| EXISTS ID ',' RASSERTION {
    $$ = (RAQfop(A_EXISTS,$2,$4));
  }
;



%%


void yyerror(char *s){
	extern int yylineno;	// defined and maintained in lex
	extern char *yytext;	// defined and maintained in lex
	int len = strlen(yytext);
	int i;
	char buf[512]={0};
	for (i = 0; i < len; ++i)
	{
		sprintf(buf,"%s%d ",buf,yytext[i]);
	}
	fprintf(stderr, "ERROR: %s at symbol '%s' on line %d in source file\n", s, buf, yylineno);
	yyparse();
}