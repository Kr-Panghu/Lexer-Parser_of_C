/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NAT = 258,
     ID = 259,
     __RETURN = 260,
     TM_FIELDOFPTR = 261,
     SIZEOF = 262,
     LE = 263,
     GE = 264,
     EQ = 265,
     NE = 266,
     AND = 267,
     OR = 268,
     SHL = 269,
     SHR = 270,
     INCREASE = 271,
     DECREASE = 272,
     TM_COMMENT = 273,
     COMMENT_HEADER = 274,
     COMMENT_TAIL = 275,
     ADD_EQ = 276,
     SUB_EQ = 277,
     MUL_EQ = 278,
     DIV_EQ = 279,
     MOD_EQ = 280,
     BAND_EQ = 281,
     BOR_EQ = 282,
     XOR_EQ = 283,
     SHL_EQ = 284,
     SHR_EQ = 285,
     WITH = 286,
     REQUIRE = 287,
     ENSURE = 288,
     FORALL = 289,
     EXISTS = 290,
     TM_INV = 291,
     LET = 292,
     VOID = 293,
     CHAR = 294,
     INT = 295,
     INT64 = 296,
     U8 = 297,
     UINT = 298,
     UINT64 = 299,
     TM_IF = 300,
     TM_ELSE = 301,
     TM_WHILE = 302,
     TM_DO = 303,
     TM_SWITCH = 304,
     TM_CASE = 305,
     TM_DEFAULT = 306,
     TM_FOR = 307,
     TM_CONTINUE = 308,
     TM_BREAK = 309,
     TM_RETURN = 310,
     TM_STRUCT = 311,
     TM_UNION = 312,
     TM_ENUM = 313,
     TM_NEWLINE = 314
   };
#endif
/* Tokens.  */
#define NAT 258
#define ID 259
#define __RETURN 260
#define TM_FIELDOFPTR 261
#define SIZEOF 262
#define LE 263
#define GE 264
#define EQ 265
#define NE 266
#define AND 267
#define OR 268
#define SHL 269
#define SHR 270
#define INCREASE 271
#define DECREASE 272
#define TM_COMMENT 273
#define COMMENT_HEADER 274
#define COMMENT_TAIL 275
#define ADD_EQ 276
#define SUB_EQ 277
#define MUL_EQ 278
#define DIV_EQ 279
#define MOD_EQ 280
#define BAND_EQ 281
#define BOR_EQ 282
#define XOR_EQ 283
#define SHL_EQ 284
#define SHR_EQ 285
#define WITH 286
#define REQUIRE 287
#define ENSURE 288
#define FORALL 289
#define EXISTS 290
#define TM_INV 291
#define LET 292
#define VOID 293
#define CHAR 294
#define INT 295
#define INT64 296
#define U8 297
#define UINT 298
#define UINT64 299
#define TM_IF 300
#define TM_ELSE 301
#define TM_WHILE 302
#define TM_DO 303
#define TM_SWITCH 304
#define TM_CASE 305
#define TM_DEFAULT 306
#define TM_FOR 307
#define TM_CONTINUE 308
#define TM_BREAK 309
#define TM_RETURN 310
#define TM_STRUCT 311
#define TM_UNION 312
#define TM_ENUM 313
#define TM_NEWLINE 314




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 16 "lang.y"
{
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
/* Line 1529 of yacc.c.  */
#line 192 "parser.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

