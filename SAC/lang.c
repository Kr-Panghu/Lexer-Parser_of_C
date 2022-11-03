#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lang.h"

// struct type {
//   enum DeclType t;
//   union {
//     struct {enum BasicType ty;} BASIC;
//     struct {char *name;} STRUCT;
//     struct {char *name;} UNION;
//     struct {char *name;} ENUM;
//     struct {struct type *ty;} PTR;
//     struct {struct type *ty; struct expr *size;} ARRAY;
//   } d;
// };

struct type * new_type(){
  struct type * res = (struct type *) malloc(sizeof(struct type));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  return res;
}

struct type * TBasic(enum BasicType ty){
  struct type * res = new_type();
  res -> t = T_BASIC;
  res -> d.BASIC.ty = ty;
  return res;
}
struct type * TStruct(char *name){
  struct type * res = new_type();
  res -> t = T_STRUCT;
  res -> d.STRUCT.name = name;
  return res;
}
struct type * TUnion(char *name){
  struct type * res = new_type();
  res -> t = T_UNION;
  res -> d.UNION.name = name;
  return res;
}
struct type * TEnum(char *name){
  struct type * res = new_type();
  res -> t = T_ENUM;
  res -> d.ENUM.name = name;
  return res;
}
struct type * TPtr(struct type *ty){
  struct type * res = new_type();
  res -> t = T_PTR;
  res -> d.PTR.ty = ty;
  return res;
}
struct type * TArray(struct type *ty, char * name, struct expr *size){
  struct type * res = new_type();
  res -> t = T_ARRAY;
  res -> d.ARRAY.ty = ty;
  res -> d.ARRAY.name = name;
  res -> d.ARRAY.size = size;
  return res;
}

struct expr * new_expr_ptr() {
  struct expr * res = (struct expr *) malloc(sizeof(struct expr));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  return res;
}

struct cmd * new_cmd_ptr() {
  struct cmd * res = (struct cmd *) malloc(sizeof(struct cmd));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  return res;
}

struct expr * TConst(unsigned int value) {
  struct expr * res = new_expr_ptr();
  res -> t = T_CONST;
  res -> d.CONST.value = value;
  return res;
}
struct expr * TVar(char * name) {
  struct expr * res = new_expr_ptr();
  res -> t = T_VAR;
  res -> d.VAR.name = name;
  return res;
}
struct expr * TBinop(enum BinOpType op, struct expr * left, struct expr * right) {
  struct expr * res = new_expr_ptr();
  res -> t = T_BINOP;
  res -> d.BINOP.op = op;
  res -> d.BINOP.left = left;
  res -> d.BINOP.right = right;
  return res;
}
struct expr * TUnop(enum UnOpType op, struct expr * arg) {
  struct expr * res = new_expr_ptr();
  res -> t = T_UNOP;
  res -> d.UNOP.op = op;
  res -> d.UNOP.arg = arg;
  return res;
}
struct expr * TDeref(struct expr * arg) {
  struct expr * res = new_expr_ptr();
  res -> t = T_DEREF;
  res -> d.DEREF.arg = arg;
  return res;
}
struct expr * TAddress(struct expr * arg){
  struct expr * res = new_expr_ptr();
  res -> t = T_ADDRES;
  res -> d.ADDRES.arg = arg;
  return res;
}
struct expr * TCast(struct type *ty, struct expr *arg){ //类型转换
  struct expr * res = new_expr_ptr();
  res -> t = T_CAST;
  res -> d.CAST.ty = ty;
  res -> d.CAST.arg = arg;
  return res;
}
struct expr * TCall(char * name, struct expr_list * args){ //函数调用
  struct expr * res = new_expr_ptr();
  res -> t = T_CALL;
  res -> d.CALL.name = name;
  res -> d.CALL.args = args;
  return res;
}
struct expr * TSizeofType(struct type * ty){
  struct expr * res = new_expr_ptr();
  res -> t = T_SIZEOFTYPE;
  res -> d.SIZEOFTYPE.ty = ty;
  return res;
}
struct expr * TIndex(struct expr *arg, struct expr *pos){
  struct expr * res = new_expr_ptr();
  res -> t = T_INDEX;
  res -> d.INDEX.arg = arg;
  res -> d.INDEX.pos = pos;
  return res;
}
struct expr * TFieldof(struct expr *arg, char *name){
  struct expr * res = new_expr_ptr();
  res -> t = T_FIELDOF;
  res -> d.FIELDOF.arg = arg;
  res -> d.FIELDOF.name = name;
  return res;
}
struct expr * TFieldofptr(struct expr *arg, char *name){
  struct expr * res = new_expr_ptr();
  res -> t = T_FIELDOFPTR;
  res -> d.FIELDOFPTR.arg = arg;
  res -> d.FIELDOFPTR.name = name;
  return res;
}


// struct cmd * TDecl(char * name) {
//   struct cmd * res = new_cmd_ptr();
//   res -> t = T_DECL;
//   res -> d.DECL.name = name;
//   return res;
// }

// struct cmd * TAsgn(struct expr * left, struct expr * right) {
//   struct cmd * res = new_cmd_ptr();
//   res -> t = T_ASGN;
//   res -> d.ASGN.left = left;
//   res -> d.ASGN.right = right;
//   return res;
// }




struct cmd * TVarDecl(struct var_dec *decl){ //var_dec
  struct cmd * res = new_cmd_ptr();
  res -> t = T_VARDECL;
  res -> d.VARDECL.decl = decl;
  return res;
}
struct def * TVarDecl_1(struct var_dec * vdec){
  struct def * res = (struct def *) malloc(sizeof(struct def));
  if (res == NULL){
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> t = VARDECL;
  res -> d.VARDECL.decl = vdec;
  return res;
}
struct cmd * TSimple(struct simple_cmd *scmd){
  struct cmd * res = new_cmd_ptr();
  res -> t = T_SIMPLE;
  res -> d.SIMPLE.scmd = scmd; //simple_cmd
  return res;
}
struct cmd * TSeq(struct cmd * left, struct cmd * right) {
  struct cmd * res = new_cmd_ptr();
  res -> t = T_SEQ;
  res -> d.SEQ.left = left;
  res -> d.SEQ.right = right;
  return res;
}
struct cmd * TIf(struct expr * cond, struct cmd * left, struct cmd * right) {
  struct cmd * res = new_cmd_ptr();
  res -> t = T_IF;
  res -> d.IF.cond = cond;
  res -> d.IF.left = left;
  res -> d.IF.right = right;
  return res;
}
struct cmd * TSwitch(struct expr *cond, struct Case_list * body){ //case_list
  struct cmd * res = new_cmd_ptr();
  res -> t = T_SWITCH;
  res -> d.SWITCH.cond = cond;
  res -> d.SWITCH.body = body;
  return res;
}
struct cmd * TWhile(struct RAssertion *inv, struct expr * cond, struct cmd * body){
  struct cmd * res = new_cmd_ptr();
  res -> t = T_WHILE;
  res -> d.WHILE.inv = inv;
  res -> d.WHILE.cond = cond;
  res -> d.WHILE.body = body;
  return res;
}
struct cmd * TDoWhile(struct RAssertion *inv, struct expr * cond, struct cmd * body){
  struct cmd * res = new_cmd_ptr();
  res -> t = T_DOWHILE;
  res -> d.DOWHILE.inv = inv;
  res -> d.DOWHILE.cond = cond;
  res -> d.DOWHILE.body = body;
  return res;
}
struct cmd * TFor(struct RAssertion *inv, struct simple_cmd *init, struct expr *cond, struct simple_cmd *incr, struct cmd *body){
  struct cmd * res = new_cmd_ptr();
  res -> t = T_FOR;
  res -> d.FOR.inv = inv;
  res -> d.FOR.init = init;
  res -> d.FOR.cond = cond;
  res -> d.FOR.incr = incr;
  res -> d.FOR.body = body;
  return res;
}
struct cmd * TBreak(){
  struct cmd * res = new_cmd_ptr();
  res -> t = T_BREAK;
  res -> d.BREAK.none = NULL;
  return res;
}
struct cmd * TContinue(){
  struct cmd * res = new_cmd_ptr();
  res -> t = T_CONTINUE;
  res -> d.CONTINUE.none = NULL;
  return res;
}
struct cmd * TReturn(struct expr *arg){
  struct cmd * res = new_cmd_ptr();
  res -> t = T_RETURN;
  res -> d.RETURN.arg = arg;
  return res;
}
struct cmd * TComment(struct RAssertion *asrt){
  struct cmd * res = new_cmd_ptr();
  res -> t = T_COMMENT;
  res -> d.COMMENT.asrt = asrt; //assertion
  return res;
}






// struct expr_list {
//   struct expr * head;
//   struct expr_list * tail;
// };
struct expr_list * new_expr_list(){
  struct expr_list * res = (struct expr_list *) malloc(sizeof(struct expr_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  return res;
}
struct expr_list * ELNil(){
  struct expr_list * res = new_expr_list();
  res -> head = NULL;
  res -> tail = NULL;
  return res;
}
struct expr_list * ELCons(struct expr * head, struct expr_list * tail){
  struct expr_list * res = new_expr_list();
  res -> head = head;
  res -> tail = tail;
  return res;
}



// struct Afuncdef{
//   struct var_list *with; 
//   struct RAssertion *pre; 
//   struct RAssertion *post;
// }; // function specification

// struct ASepdef{
//   char *name;
//   struct var_list *vars;
//   struct RAssertion *conditions;
// }; // annotation for sep declartion
struct Afuncdef * TAfuncdef (struct var_list *with, struct RAssertion *pre, struct RAssertion *post){
  struct Afuncdef * res = (struct Afuncdef *) malloc(sizeof(struct Afuncdef));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> with = with;
  res -> pre = pre;
  res -> post = post;
  return res;
}
struct ASepdef * TAsepdef (char *name, struct expr_list *vars, struct RAssertion *conditions){
  struct ASepdef * res = (struct ASepdef *) malloc(sizeof(struct ASepdef));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> name = name;
  res -> vars = vars;
  res -> conditions = conditions;
  return res;
}




// struct def {
//   enum DefType t;
//   union {
//     struct {struct type *ty; char *name; struct expr_list *args; struct cmd * body; struct Afuncdef *funspec;} FUNCDEF;
//     struct {struct type *ty; char *name; struct expr_list *args; struct Afuncdef *funspec;} FUNCDEC; 
//     struct {struct ASepdef *sepdef;} SEPDEF;  //断言谓词定义
//     struct {char *name; struct field_dec_list *union_def;} UNIONDEF;
//     struct {char *name; struct enum_list *enum_def;} ENUMDEF;
//     struct {char *name; struct field_dec_list  *struct_def;} STRUCTDEF;
//   } d;
// };
struct def * new_def(){
  struct def * res = (struct def *) malloc(sizeof(struct def));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  return res;
}
struct def * TFuncdef(struct type *ty, char *name, struct var_dec_list *args, struct cmd * body, struct Afuncdef *funspec){
  struct def * res = new_def();
  res -> t = T_FUNCDEF;
  res -> d.FUNCDEF.ty = ty;
  res -> d.FUNCDEF.name = name;
  res -> d.FUNCDEF.args = args;
  res -> d.FUNCDEF.body = body;
  res -> d.FUNCDEF.funspec = funspec;
  return res;
}
struct def * TFuncdec(struct type *ty, char *name, struct var_dec_list *args, struct Afuncdef *funspec){
  struct def * res = new_def();
  res -> t = T_FUNCDEC;
  res -> d.FUNCDEC.ty = ty;
  res -> d.FUNCDEC.name = name;
  res -> d.FUNCDEC.args = args;
  res -> d.FUNCDEC.funspec = funspec;
  return res;
}
struct def * TSepdef(struct ASepdef *sepdef){
  struct def * res = new_def();
  res -> t = T_SEPDEF;
  res -> d.SEPDEF.sepdef = sepdef; //separation definition
  return res;
}
struct def * TUniondef(char * name, struct field_dec_list * union_def){
  struct def * res = new_def();
  res -> t = T_UNIONDEF;
  res -> d.UNIONDEF.name = name;
  res -> d.UNIONDEF.union_def = union_def;
  return res;
}
struct def * TEnumdef(char * name, struct enum_list * enum_def){
  struct def * res = new_def();
  res -> t = T_ENUMDEF;
  res -> d.ENUMDEF.name = name;
  res -> d.ENUMDEF.enum_def = enum_def;
  return res;
}
struct def * TStructdef(char * name, struct field_dec_list * struct_def){
  struct def * res = new_def();
  res -> t = T_STRUCTDEF;
  res -> d.STRUCTDEF.name = name;
  res -> d.STRUCTDEF.struct_def = struct_def;
  return res;
}





// struct field_dec_list {
//   struct field_dec * head;
//   struct field_dec_list * tail;
// };
struct field_dec_list * FDLNil(){
  struct field_dec_list * res = (struct field_dec_list *) malloc(sizeof(struct field_dec_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> head = NULL;
  res -> tail = NULL;
  return res;
}
struct field_dec_list * FDLCons(struct field_dec * head, struct field_dec_list * tail){
  struct field_dec_list * res = (struct field_dec_list *) malloc(sizeof(struct field_dec_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> head = head;
  res -> tail = tail;
  return res;
}
struct field_dec * TFieldDec(struct type *ty, char *field_name){
  struct field_dec * res = (struct field_dec *) malloc(sizeof(struct field_dec));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> ty = ty;
  res -> field_name = field_name;
  return res;
}
struct var_dec * TVarDecl_2(struct type *ty, char *name){
  struct var_dec *res = (struct var_dec *) malloc(sizeof(struct var_dec));
  res-> ty = ty;
  res-> name = name;
  return res;
}




// struct def_list {
//   struct def *head;
//   struct def_list * tail;
// };
struct def_list * DFLNil(){
  struct def_list * res = (struct def_list *) malloc(sizeof(struct def_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> head = NULL;
  res -> tail = NULL;
  return res;
}
struct def_list * DFLCons(struct def * head, struct def_list * tail){
  struct def_list * res = (struct def_list *) malloc(sizeof(struct def_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> head = head;
  res -> tail = tail;
  return res;
}





// struct enum_list {
//   char *name;
//   struct enum_list * tail;
// };
struct enum_list * ENLNil(){
  struct enum_list * res = (struct enum_list *) malloc(sizeof(struct enum_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> name = NULL;  // ???
  res -> tail = NULL;
  return res;
}
struct enum_list * ENLCons(char *name, struct enum_list *tail){
  struct enum_list * res = (struct enum_list *) malloc(sizeof(struct enum_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> name = name;
  res -> tail = tail;
  return res;
}





// struct simple_cmd {
//   enum SimpleCmdType t;
//   union {
//     struct {struct expr *arg;} COMPUTATION;
//     struct {enum AssignType op; struct expr *left; struct expr *right;} ASGN;
//     struct {enum IncDecType op; struct expr *arg;} INCDEC; 
//   } d;
// };
struct simple_cmd * new_simple_cmd(){
  struct simple_cmd * res = (struct simple_cmd *) malloc(sizeof(struct simple_cmd));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  return res;
}
struct simple_cmd * TComputation (struct expr *arg){
  struct simple_cmd * res = new_simple_cmd();
  res -> t = T_COMPUTATION;
  res -> d.COMPUTATION.arg = arg;
  return res;
}
struct simple_cmd * TAsgn(enum AssignType op, struct expr *left, struct expr *right){
  struct simple_cmd * res = new_simple_cmd();
  res -> t = T_ASGN;
  res -> d.ASGN.op = op; //option
  res -> d.ASGN.left = left;
  res -> d.ASGN.right = right;
  return res;
}
struct simple_cmd * TIncDec (enum IncDecType op, struct expr *arg){
  struct simple_cmd * res = new_simple_cmd();
  res -> t = T_INCDEC;
  res -> d.INCDEC.op = op;
  res -> d.INCDEC.arg = arg;
  return res;
}




// struct Case {
//   enum CaseType t;
//   union {
//     struct {struct expr *cond; struct cmd *body;} CASE;
//     struct {struct cmd *body;} DEFAULT; 
//   } d;
// };
struct Case * TCase(struct expr *cond, struct cmd *body){
  struct Case * res = (struct Case *) malloc(sizeof(struct Case));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> t = T_CASE;
  res -> d.CASE.cond = cond;
  res -> d.CASE.body = body;
  return res;
}
struct Case * TDefault(struct cmd *body){
  struct Case * res = (struct Case *) malloc(sizeof(struct Case));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> t = T_DEFAULT;
  res -> d.DEFAULT.body = body;
  return res;
}



// struct Case_list{
//   struct Case *head;
//   struct Case_list *tail;
// };
struct Case_list * CLNil(){
  struct Case_list * res = (struct Case_list *) malloc(sizeof(struct Case_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> head = NULL;
  res -> tail = NULL;
  return res;
}
struct Case_list * CLCons(struct Case * head, struct Case_list * tail){
  struct Case_list * res = (struct Case_list *) malloc(sizeof(struct Case_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> head = head;
  res -> tail = tail;
  return res;
}



// struct var_list {
//   char * head;
//   struct var_list * tail;
// };
struct var_list * VLNil(){
  struct var_list * res = (struct var_list *) malloc(sizeof(struct var_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> head = NULL;
  res -> tail = NULL;
  return res;
}
struct var_list * VLCons(char * head, struct var_list * tail){
  struct var_list * res = (struct var_list *) malloc(sizeof(struct var_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> head = head;
  res -> tail = tail;
  return res;
}




// struct RAssertion{ //断言
//   enum RAssertionType t;
//   union {
//     struct {unsigned int value; } RACONST;
//     struct {char * name; } RAVAR;
//     struct {enum BinOpType op; struct RAssertion * left; struct RAssertion * right; } RABINOP;
//     struct {enum UnOpType op; struct RAssertion * arg; } RAUNOP;
//     struct {struct RAssertion *arg;} RADEREF;     
//     struct {struct RAssertion *arg;} RAADDRES;
//     struct {struct type *ty; struct RAssertion * arg; } RACAST;
//     struct {char *name; struct RA_list * args;} RACALL;
//     struct {struct RAssertion *arg; struct RAssertion *pos;} RAINDEX;
//     struct {struct RAssertion *arg; char *name;} RAFIELDOF;
//     struct {struct RAssertion *arg; char *name;} RAFIELDOFPTR;
//     struct {enum LogicQuantifierType op; char *name; struct RAssertion *arg;} RAQFOP;
//   } d;
// };
struct RAssertion * new_RAssertion(){
  struct RAssertion * res = (struct RAssertion *) malloc(sizeof(struct RAssertion));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  return res;
}
struct RAssertion * RAConst(unsigned int value){
  struct RAssertion * res = new_RAssertion();
  res -> t = RA_CONST;
  res -> d.RACONST.value = value;
  return res;
}
struct RAssertion * RAVar(char * name){
  struct RAssertion * res = new_RAssertion();
  res -> t = RA_VAR;
  res -> d.RAVAR.name = name;
  return res;
}
struct RAssertion * RABinop(enum BinOpType op, struct RAssertion * left, struct RAssertion * right){
  struct RAssertion * res = new_RAssertion();
  res -> t = RA_BINOP;
  res -> d.RABINOP.op = op;
  res -> d.RABINOP.left = left;
  res -> d.RABINOP.right = right;
  return res;
}
struct RAssertion * RAUnop(enum UnOpType op, struct RAssertion * arg){
  struct RAssertion * res = new_RAssertion();
  res -> t = RA_UNOP;
  res -> d.RAUNOP.op = op;
  res -> d.RAUNOP.arg = arg;
  return res;
}
struct RAssertion * RADeref(struct RAssertion * arg){
  struct RAssertion * res = new_RAssertion();
  res -> t = RA_DEREF;    // *e
  res -> d.RADEREF.arg = arg;
  return res;
}
struct RAssertion * RAAddress(struct RAssertion * arg){
  struct RAssertion * res = new_RAssertion();
  res -> t = RA_ADDRES;     // &e
  res -> d.RAADDRES.arg = arg;
  return res;
}
struct RAssertion * RACast(struct type *ty, struct RAssertion *arg){
  struct RAssertion * res = new_RAssertion();
  res -> t = RA_CAST;
  res -> d.RACAST.ty = ty;
  res -> d.RACAST.arg = arg;
  return res;
}
struct RAssertion * RACall(char * name, struct RA_list * args){
  struct RAssertion * res = new_RAssertion();
  res -> t = RA_CALL;
  res -> d.RACALL.name = name;
  res -> d.RACALL.args = args;
  return res;
}
struct RAssertion * RAIndex(struct RAssertion *arg, struct RAssertion *pos){
  struct RAssertion * res = new_RAssertion();
  res -> t = RA_INDEX; // a[i]
  res -> d.RAINDEX.arg = arg;
  res -> d.RAINDEX.pos = pos;
  return res;
}
struct RAssertion * RAFieldof(struct RAssertion *arg, char *name){
  struct RAssertion * res = new_RAssertion();
  res -> t = RA_FIELDOF;   // a.t
  res -> d.RAFIELDOF.arg = arg;
  res -> d.RAFIELDOF.name = name;
  return res;
}
struct RAssertion * RAFieldofptr(struct RAssertion *arg, char *name){
  struct RAssertion * res = new_RAssertion();
  res -> t = RA_FIELDOFPTR;   // a->t
  res -> d.RAFIELDOFPTR.arg = arg;
  res -> d.RAFIELDOFPTR.name = name;
  return res;
}
struct RAssertion * RAQfop (enum LogicQuantifierType op, char *name, struct RAssertion *arg){
  struct RAssertion * res = new_RAssertion();
  res -> t = RA_QFOP;  //logic quantifier option
  res -> d.RAQFOP.op = op;
  res -> d.RAQFOP.name = name;
  res -> d.RAQFOP.arg = arg;
  return res;
}



// struct RA_list {
//   struct RAssertion *head;
//   struct RA_list *tail;
// };
struct RA_list * RALNil(){
  struct RA_list * res = (struct RA_list *) malloc(sizeof(struct RA_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> head = NULL;
  res -> tail = NULL;
  return res;
}
struct RA_list * RALCons(struct RAssertion * head, struct RA_list * tail){
  struct RA_list * res = (struct RA_list *) malloc(sizeof(struct RA_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  res -> head = head;
  res -> tail = tail;
  return res;
}
struct var_dec_list * VDLNil(){
  struct var_dec_list * res = (struct var_dec_list *) malloc(sizeof(struct var_dec_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);  
  }
  res -> head = NULL;
  res -> tail = NULL;
  return res;
}
struct var_dec_list * VDLCons(struct var_dec * head, struct var_dec_list * tail){
  struct var_dec_list * res = (struct var_dec_list *) malloc(sizeof(struct var_dec_list));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);  
  }
  res -> head = head;
  res -> tail = tail;
  return res;
}

void print_UnOp(enum UnOpType op) {
  if(!op) return;
  switch (op) {
  case T_UMINUS:      // -
    printf("UMINUS");
    break;
  case T_UPLUS:       // +
    printf("UPLUS");
    break;
  case T_NOTBOOL:     // !
    printf("NOT");
    break;
  case T_NOTINT:
    printf("NOTINT");
    break;
  }
}

void print_BinOp(enum BinOpType op) {
  if(!op) return;
  switch (op) {
  case T_PLUS:     // +
    printf("PLUS");
    break;
  case T_MINUS:    // -
    printf("MINUS");
    break;
  case T_MUL:      // *
    printf("MUL");
    break;
  case T_DIV:      // /
    printf("DIV");
    break;
  case T_MOD:      // %
    printf("MOD");
    break;
  case T_LT:       // <
    printf("LT");
    break;
  case T_GT:       // >
    printf("GT");
    break;
  case T_LE:       // <=
    printf("LE");
    break;
  case T_GE:       // >=
    printf("GE");
    break;
  case T_EQ:       // ==
    printf("EQ");
    break;
  case T_NE:       // !=
    printf("NE");
    break;
  case T_AND:      // &&
    printf("AND");
    break;
  case T_OR:       // ||
    printf("OR");
    break;
  case T_BAND:     // &
    printf("BAND");
    break;
  case T_BOR:      // |
    printf("BOR");
    break;
  case T_XOR:      // ^
    printf("XOR");
    break;
  case T_SHL:      // <<
    printf("SHIFT_LEFT");
    break;
  case T_SHR:      // >>
    printf("SHIFT_RIGHT");
    break;
  }
}

void print_expr(struct expr * e) {
  if(!e) return;
  switch (e -> t) {
  case T_CONST:
    printf("CONST(%d)", e -> d.CONST.value);
    break;
  case T_VAR:
    printf("VAR(%s)", e -> d.VAR.name);
    break;
  case T_BINOP:
    print_BinOp(e -> d.BINOP.op);
    printf("(");
    print_expr(e -> d.BINOP.left);
    printf(", ");
    print_expr(e -> d.BINOP.right);
    printf(")");
    break;
  case T_UNOP:
    print_UnOp(e -> d.UNOP.op);
    printf("(");
    print_expr(e -> d.UNOP.arg);
    printf(")");
    break;
  case T_DEREF:
    printf("DEREF(");
    print_expr(e -> d.DEREF.arg);
    printf(")");
    break;
  case T_ADDRES:
    printf("ADDRES(");
    print_expr(e -> d.ADDRES.arg);
    printf(")");
    break;
  case T_CAST:
    printf("CAST(");
    print_type(e -> d.CAST.ty);
    printf("("); print_expr(e -> d.CAST.arg); printf(")");
    printf(")");
    break;
  case T_CALL:
    printf("CALL(");
    printf("%s", e -> d.CALL.name);
    printf("("); print_expr_list(e -> d.CALL.args); printf(")");
    printf(")");
    break;
  case T_SIZEOFTYPE:
    printf("SIZEOF(");
    print_type(e -> d.SIZEOFTYPE.ty);
    printf(")");
    break;
  case T_INDEX:
    printf("INDEX(");
    print_expr(e -> d.INDEX.arg);  //INDEX(VAR(x),POS)
    printf(", ");
    print_expr(e -> d.INDEX.pos);
    printf(")");
    break;
  case T_FIELDOF:
    printf("FIELDOF(");         //FIELDOF(VAR(x),name)   x.name
    print_expr(e -> d.FIELDOF.arg);
    printf(", ");
    printf("%s", e -> d.FIELDOF.name);
    printf(")");
    break;
  case T_FIELDOFPTR:
    printf("FIELDOFPTR(");       //FIELDOFPTR(PTR(x),name)  x -> name
    print_expr(e -> d. FIELDOFPTR.arg);
    printf(", ");
    printf("%s", e -> d.FIELDOFPTR.name);
    printf(")");
    break;
  }
}

void print_cmd(struct cmd * c) {
  if(!c) {
    printf("NONE");
    return;
  }
  switch (c -> t) {
  case T_VARDECL:
    printf("DECL(");
    printf("%s", c -> d.VARDECL.decl -> name);
    printf("(");
    print_type(c -> d.VARDECL.decl -> ty);
    printf(")");
    printf(")");
    break;
  case T_SIMPLE:
    printf("SIMPLE(");
    print_simple_cmd(c -> d.SIMPLE.scmd);
    printf(")");
    break;
  case T_SEQ:
    printf("SEQ(");
    print_cmd(c -> d.SEQ.left);
    printf(", ");
    print_cmd(c -> d.SEQ.right);
    printf(")");
    break;
  case T_IF:
    printf("IF(");
    print_expr(c -> d.IF.cond);
    printf(", ");
    print_cmd(c -> d.IF.left);
    if(c -> d.IF.right){
      printf(", ");
      print_cmd(c -> d.IF.right);
      printf(")");
    }
    else printf(")");
    break;
  case T_WHILE:
    printf("WHILE(");
    if(c -> d.WHILE.inv){
      print_RAssertion(c -> d.WHILE.inv); //INV(...)
      printf(", ");
    }
    print_expr(c -> d.WHILE.cond);
    printf(", ");
    print_cmd(c -> d.WHILE.body);
    printf(")");
    break;
  case T_SWITCH:
    printf("SWITCH(");
      print_expr(c -> d.SWITCH.cond);
      printf("(");
        print_case_list(c -> d.SWITCH.body);
      printf(")");
    printf(")");
    break;
  case T_DOWHILE:
    printf("DOWHILE(");
    if(c -> d.DOWHILE.inv){
      print_RAssertion(c -> d.WHILE.inv); //INV(...)
      printf(", ");
    }
    print_cmd(c -> d.DOWHILE.body);
    printf(", ");
    print_expr(c -> d.DOWHILE.cond);
    printf(")");
    break;
  case T_FOR:
    printf("FOR(");
    if(c -> d.FOR.inv){
      print_RAssertion(c -> d.WHILE.inv); //INV(...)
      printf(", ");
    }
    print_simple_cmd(c -> d.FOR.init); printf(", ");
    print_expr(c -> d.FOR.cond); printf(", ");
    print_simple_cmd(c -> d.FOR.incr); printf(", ");
    print_cmd(c -> d.FOR.body); 
    printf(")");
    break;
  case T_BREAK:
    printf("BREAK");
    break;
  case T_CONTINUE:
    printf("CONTINUE");
    break;
  case T_RETURN:
    printf("RETURN(");
    if(c -> d.RETURN.arg) print_expr(c -> d.RETURN.arg);
    printf(")");
    break;
  case T_COMMENT:
    printf("COMMENT(");
    print_RAssertion(c -> d.COMMENT.asrt);
    printf(")");
    break;
  }
}
void print_var_dec(struct var_dec *vd){
  if (!vd) return;
  printf("VARDEC(");
  print_type(vd -> ty);
  printf(" %s", vd -> name);
  printf(")");
}
void print_var_dec_list(struct var_dec_list *vdl){
  if (!vdl) return;
  print_var_dec(vdl -> head);
  if (vdl -> tail && vdl -> tail -> head) {
    printf(", ");
    print_var_dec_list(vdl -> tail);
  }
}

void print_def(struct def *decl) {
  if (!decl) return;
  switch (decl -> t) {
  case T_FUNCDEF:
    printf("FUNCDEF("); 
      print_type(decl -> d.FUNCDEF.ty); printf(" ");
      printf("%s", decl -> d.FUNCDEF.name); printf("(");
      print_var_dec_list(decl -> d.FUNCDEF.args); printf("), ");
      if(decl -> d.FUNCDEF.funspec && decl -> d.FUNCDEF.funspec -> pre) {
        // 格式为(WITH(...), REQUIRE(...), ENSURE(...))
        printf("(");
        if(decl -> d.FUNCDEF.funspec -> with){
          printf("WITH(");
          print_var_list(decl -> d.FUNCDEF.funspec -> with);
          printf("), ");
        }
        printf("REQUIRE(");
        if (decl -> d. FUNCDEF.funspec -> pre)
          print_RAssertion(decl -> d. FUNCDEF.funspec -> pre);
        else exit(1);
        printf("), ");

        printf("ENSURE(");
        if (decl -> d.FUNCDEF.funspec -> post)
          print_RAssertion(decl -> d.FUNCDEF.funspec -> post);
        else exit(1);
        printf(")), ");
      }
      print_cmd(decl -> d.FUNCDEF.body);
    printf(")");
    break;
  case T_FUNCDEC:
    //FUNDEC((WITH...),INT,getans,...)
    printf("FUNDEC(");
      print_type(decl -> d.FUNCDEC.ty); printf(" ");
      printf("%s(", decl -> d.FUNCDEC.name);
      print_var_dec_list(decl -> d.FUNCDEC.args);
      printf("), ");
      if(decl -> d.FUNCDEC.funspec && decl -> d.FUNCDEC.funspec -> pre){
        // 格式为(WITH(...),REQUIRE(...),ENSURE(...))
        printf("(");
        if(decl -> d.FUNCDEC.funspec -> with){
          printf("WITH(");
            printf("VAR_LIST(");
            print_var_list(decl -> d.FUNCDEC.funspec -> with);
            printf(")");
          printf("),");
        }
        printf("REQUIRE(");
        print_RAssertion(decl -> d. FUNCDEC.funspec -> pre);
        printf("),");
        printf("ENSURE(");
        print_RAssertion(decl -> d.FUNCDEC.funspec -> post);
        printf("))");
      }
    printf(")");
    break;
  case T_SEPDEF:
    printf("SEPDEF(");
      printf("%s", decl -> d.SEPDEF.sepdef -> name); printf(", ");
      printf("VAR_LIST(");
      print_expr_list(decl -> d.SEPDEF.sepdef -> vars); printf("),");
      print_RAssertion(decl -> d.SEPDEF.sepdef -> conditions);
    printf(")");
    break;
  case T_UNIONDEF:
    printf("UNIONDEF(");
      printf("%s", decl -> d.UNIONDEF.name); printf(", ");
      printf("FIELD_DEC_LIST(");
      print_field_dec_list(decl -> d.UNIONDEF.union_def);
      printf(")");
    printf(")");
    break;
  case T_ENUMDEF:
    printf("ENUMDEF(");
      printf("%s", decl -> d.ENUMDEF.name); printf(", ");
      printf("ENUM_LIST(");
      print_enum_list(decl -> d.ENUMDEF.enum_def);
      printf(")");
    printf(")");
    break;
  case T_STRUCTDEF:
    printf("STRUCTDEF(");
      printf("%s", decl -> d.STRUCTDEF.name); printf(", ");
      printf("FIELD_DEC_LIST(");
      print_field_dec_list(decl -> d.STRUCTDEF.struct_def);
      printf(")");
    printf(")");
    break;
  case VARDECL:
    printf("VARDECL(");
      print_type(decl -> d.VARDECL.decl -> ty);
      printf(", ");
      printf("%s", decl -> d.VARDECL.decl -> name);
    printf(")");
    break;
  }

}

unsigned int num = 1;
void print_def_list(struct def_list *decl) {
  if (!decl) {
    printf("-----Program runs completely!-----");
    return;
  }
  if (decl -> head) {
    printf("%u : ", num);
    print_def(decl -> head);
    printf("\n");
  }
  ++num;
  print_def_list(decl -> tail);
}

void print_expr_list(struct expr_list *exprl){
  if (!exprl) return;
  print_expr(exprl -> head);
  print_expr_list(exprl -> tail);
}

void print_enum_list(struct enum_list *enum_def){
  if (!enum_def) return;
  printf("%s", enum_def -> name);
  print_enum_list(enum_def -> tail);
}

void print_type(struct type *ty){
  if (!ty) return;
  switch (ty -> t) {
  case T_BASIC:
    switch (ty -> d.BASIC.ty) {
      case T_VOID:
        printf("VOID");
        break;
      case T_CHAR:
        printf("CHAR");
        break;
      case T_U8:
        printf("U8");
        break;
      case T_INT:
        printf("INT");
        break;
      case T_INT64:
        printf("INT64");
        break;
      case T_UINT:
        printf("UINT");
        break;
      case T_UINT64:
        printf("UINT64");
        break;
    }
    break;
  case T_STRUCT:
    printf("STRUCT(");
      printf("%s", ty -> d.STRUCT.name);
    printf(")");
    break;
  case T_UNION:
    printf("UNION(");
    printf("%s", ty -> d.UNION.name);
    printf(")");
    break;
  case T_ENUM:
    printf("ENUM(");
    printf("%s", ty -> d.ENUM.name);
    printf(")");
    break;
  case T_PTR:
    printf("PTR(");
      print_type(ty -> d.PTR.ty);
    printf(")");
    break;
  case T_ARRAY:
    printf("ARRAY(");
      print_type(ty -> d.ARRAY.ty); printf(", ");
      printf("SIZE("); print_expr(ty -> d.ARRAY.size); printf(")");
    printf(")");
    break;
  }
}

// void print_simple_cmd(struct simple_cmd *scmd){
//   switch (scmd -> t){
//   case T_COMPUTATION:
//     printf("COMPUTATION");
//     break;
//   case T_ASGN:
//     printf("ASGN");
//     break;
//   case T_INCDEC:
//     printf("INCDEC");
//     break;
//   }
// }

void print_simple_cmd(struct simple_cmd *scmd){
  if(!scmd) return;
  switch (scmd -> t) {
  case T_COMPUTATION:
    printf("COMPUTATION(");
    print_expr(scmd -> d.COMPUTATION.arg);
    printf(")");
    break;
  case T_ASGN:
    printf("ASGN(");
    switch(scmd -> d.ASGN.op){
      case T_ASSIGN:
        printf("=");
        break;
      case T_ADD_ASSIGN:
        printf("+=");
        break;
      case T_SUB_ASSIGN:
        printf("-=");
        break;
      case T_MUL_ASSIGN:
        printf("*=");
        break;  
      case T_DIV_ASSIGN:
        printf("/=");
        break;
      case T_MOD_ASSIGN:
        printf("%%=");
        break;
      case T_BAND_ASSIGN:
        printf("&=");
        break;
      case T_BOR_ASSIGN:
        printf("|=");
        break; 
      case T_XOR_ASSIGN:
        printf("^=");
        break;
      case T_SHL_ASSIGN:
        printf("<<=");
        break;
      case T_SHR_ASSIGN:
        printf(">>=");
        break; 
      }
    printf(", ");
    print_expr(scmd -> d.ASGN.left);
    printf(", ");
    print_expr(scmd -> d.ASGN.right);
    printf(")");
    break;
  case T_INCDEC:
    printf("INCDEC(");
    switch (scmd -> d.INCDEC.op)
    {
    case T_INC_F:
      printf("INC_F");
      break;
    case T_INC_B:
      printf("INC_B");
      break;
    case T_DEC_F:
      printf("DEC_F");
      break;
    case T_DEC_B:
      printf("DEC_B");
      break;
    }
    printf(", ");
    print_expr(scmd -> d.INCDEC.arg);
    printf(")");
    break;
  }
}

void print_RAssertion(struct RAssertion *inv){
  if (!inv) return;
  switch (inv -> t) {
  case RA_CONST:
    printf("RA_CONST(");
    printf("%u", inv -> d.RACONST.value);
    printf(")");
    break;
  case RA_VAR:
    printf("RA_VAR(");
    printf("%s", inv -> d.RAVAR.name);
    printf(")");
    break;
  case RA_BINOP:
    printf("RA_BINOP(");
      print_BinOp(inv -> d.RABINOP.op);
      printf(", ");
      print_RAssertion(inv -> d.RABINOP.left);
      printf(", ");
      print_RAssertion(inv -> d.RABINOP.right);
    printf(")");
    break;
  case RA_UNOP:
    printf("RA_UNOP(");
      print_UnOp(inv -> d.RAUNOP.op);
      printf(", ");
      print_RAssertion(inv -> d.RAUNOP.arg);
    printf(")");
    break;
  case RA_CAST:
    printf("RA_CAST(");
      print_type(inv -> d.RACAST.ty);
      printf(", ");
      print_RAssertion(inv -> d.RACAST.arg);
    printf(")");
    break;
  case RA_CALL:
    printf("RA_CALL(");
      printf("%s", inv -> d.RACALL.name);
      printf(", ");
      print_RA_list(inv -> d.RACALL.args);
    printf(")");
    break;
  case RA_DEREF:
    printf("RA_DEREF(");
      print_RAssertion(inv -> d.RADEREF.arg);
    printf(")");
    break;
  case RA_ADDRES:
    printf("RA_ADDRES(");
      print_RAssertion(inv -> d.RAADDRES.arg);
    printf(")");
    break;
  case RA_INDEX:
    printf("RA_INDEX(");
      print_RAssertion(inv -> d.RAINDEX.arg);
      printf(", ");
      print_RAssertion(inv -> d.RAINDEX.pos);
    printf(")");
    break;
  case RA_FIELDOF:
    printf("RA_FIELDOF(");
      print_RAssertion(inv -> d.RAFIELDOF.arg);
      printf(", ");
      printf("%s", inv -> d.RAFIELDOF.name);
    printf(")");
    break;    
  case RA_FIELDOFPTR:
    printf("RA_FIELDOFPTR(");
      print_RAssertion(inv -> d.RAFIELDOFPTR.arg);
      printf(", ");
      printf("%s", inv -> d.RAFIELDOFPTR.name);
    printf(")");
    break;
  case RA_QFOP:   //logic quantifier option
    printf("RA_QFOP(");
      if (inv -> d.RAQFOP.op == A_FORALL) {
          printf("FORALL ");
      }
      if (inv -> d.RAQFOP.op == A_EXISTS) {
          printf("EXISTS ");
      }
      printf("%s", inv -> d.RAQFOP.name);
      printf(", ");
      print_RAssertion(inv -> d.RAQFOP.arg);
    printf(")");
    break;
  }
}

void print_case(struct Case *cond){
  if (!cond) return;
  switch (cond -> t){
  case T_CASE:
    printf("CASE(");
      print_expr(cond -> d.CASE.cond);
      printf(", ");
      print_cmd(cond -> d.CASE.body);
    printf(")");
    break;
  case T_DEFAULT:
    printf("DEFAULT(");
      print_cmd(cond -> d.DEFAULT.body);
    printf(")");
    break;
  }
}

void print_case_list(struct Case_list *caselist){
  if (!caselist) return;
  print_case(caselist -> head);
  print_case_list(caselist -> tail);
}

void print_var_list(struct var_list *varl){
  if (!varl) return;
  printf("%s", varl -> head);
  print_var_list(varl -> tail);
}

void print_field_dec(struct field_dec *args){
  if (!args) return;
  print_type(args -> ty);
  printf(" ");
  printf("%s", args -> field_name);
}

void print_field_dec_list(struct field_dec_list *field_def){
  if(!field_def) return;
  print_field_dec(field_def -> head);
  if(field_def -> tail && field_def -> tail -> head) {
    printf(", ");
    print_field_dec_list(field_def -> tail);
  }
}

void print_RA_list(struct RA_list * args){
  if (!args) return;
  print_RAssertion(args -> head);
  print_RA_list(args -> tail);
}


unsigned int build_nat(char * c, int len) {
  int s = 0, i = 0;
  for (i = 0; i < len; ++i) {
    if (s > 429496729) {
      printf("We cannot handle natural numbers greater than 4294967295.\n");
      exit(0);
    }
    if (s == 429496729 && c[i] > '5') {
      printf("We cannot handle natural numbers greater than 4294967295.\n");
      exit(0);
    }
    s = s * 10 + (c[i] - '0');
  }
  return s;
}

char * new_str(char * str, int len) {
  char * res = (char *) malloc(sizeof(char) * (len + 1));
  if (res == NULL) {
    printf("Failure in malloc.\n");
    exit(0);
  }
  strcpy(res, str);
  return res;
}