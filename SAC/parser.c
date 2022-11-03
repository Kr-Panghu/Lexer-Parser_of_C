/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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




/* Copy the first part of user declarations.  */
#line 1 "lang.y"

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


/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

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
/* Line 193 of yacc.c.  */
#line 254 "parser.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 267 "parser.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  24
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2297

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  83
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNRULES -- Number of states.  */
#define YYNSTATES  429

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    22,     2,     2,     2,    18,    24,     2,
       8,     9,    16,    14,    28,    15,    27,    17,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     7,     6,
      19,    26,    20,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    12,     2,    13,    21,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    10,    23,    11,    25,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    10,    13,    23,    32,
      41,    49,    57,    64,    71,    77,    79,    86,    93,   100,
     103,   105,   107,   109,   111,   113,   115,   117,   120,   123,
     126,   132,   135,   137,   141,   145,   149,   151,   154,   157,
     163,   171,   177,   183,   193,   203,   209,   223,   236,   249,
     261,   274,   286,   298,   309,   319,   328,   337,   345,   354,
     362,   370,   377,   380,   383,   387,   390,   392,   394,   398,
     402,   406,   410,   414,   418,   422,   426,   430,   434,   438,
     441,   444,   447,   450,   453,   455,   459,   461,   465,   467,
     470,   473,   476,   479,   483,   487,   491,   495,   499,   503,
     507,   511,   515,   519,   523,   527,   531,   535,   539,   543,
     547,   551,   556,   560,   565,   568,   571,   576,   581,   585,
     589,   591,   595,   596,   599,   604,   608,   610,   614,   623,
     630,   640,   650,   651,   654,   658,   659,   662,   664,   668,
     672,   674,   676,   678,   683,   687,   691,   695,   699,   703,
     707,   711,   715,   719,   723,   727,   731,   735,   739,   743,
     747,   751,   755,   758,   761,   764,   767,   770,   773,   778,
     783,   787,   791,   796
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      84,     0,    -1,    85,    -1,    -1,    87,    85,    -1,    -1,
      89,    86,    -1,    88,     4,     8,    94,     9,   100,    10,
      86,    11,    -1,    88,     4,     8,    94,     9,    10,    86,
      11,    -1,    88,     4,     8,     9,   100,    10,    86,    11,
      -1,    88,     4,     8,     9,    10,    86,    11,    -1,    88,
       4,     8,    94,     9,   100,     6,    -1,    88,     4,     8,
      94,     9,     6,    -1,    88,     4,     8,     9,   100,     6,
      -1,    88,     4,     8,     9,     6,    -1,   101,    -1,    80,
       4,    10,   102,    11,     6,    -1,    81,     4,    10,    99,
      11,     6,    -1,    79,     4,    10,   102,    11,     6,    -1,
      93,     6,    -1,    61,    -1,    62,    -1,    65,    -1,    63,
      -1,    64,    -1,    66,    -1,    67,    -1,    79,     4,    -1,
      80,     4,    -1,    81,     4,    -1,    88,     4,    12,    95,
      13,    -1,    88,    16,    -1,    91,    -1,    41,   106,    82,
      -1,    42,   106,    43,    -1,    10,    86,    11,    -1,    90,
      -1,    93,     6,    -1,    92,     6,    -1,    68,     8,    95,
       9,    91,    -1,    68,     8,    95,     9,    91,    69,    91,
      -1,    70,     8,    95,     9,    91,    -1,    71,    91,    70,
      95,     6,    -1,    41,    59,   106,    82,    70,     8,    95,
       9,    91,    -1,    41,    59,   106,    82,    71,    91,    70,
      95,     6,    -1,    72,    95,    10,    97,    11,    -1,    41,
      59,   106,    82,    75,     8,    92,     6,    95,     6,    92,
       9,    91,    -1,    41,    59,   106,    82,    75,     8,    92,
       6,    95,     6,     9,    91,    -1,    41,    59,   106,    82,
      75,     8,    92,     6,     6,    92,     9,    91,    -1,    41,
      59,   106,    82,    75,     8,    92,     6,     6,     9,    91,
      -1,    41,    59,   106,    82,    75,     8,     6,    95,     6,
      92,     9,    91,    -1,    41,    59,   106,    82,    75,     8,
       6,    95,     6,     9,    91,    -1,    41,    59,   106,    82,
      75,     8,     6,     6,    92,     9,    91,    -1,    41,    59,
     106,    82,    75,     8,     6,     6,     9,    91,    -1,    75,
       8,    92,     6,    95,     6,    92,     9,    91,    -1,    75,
       8,    92,     6,    95,     6,     9,    91,    -1,    75,     8,
      92,     6,     6,    92,     9,    91,    -1,    75,     8,    92,
       6,     6,     9,    91,    -1,    75,     8,     6,    95,     6,
      92,     9,    91,    -1,    75,     8,     6,    95,     6,     9,
      91,    -1,    75,     8,     6,     6,    92,     9,    91,    -1,
      75,     8,     6,     6,     9,    91,    -1,    77,     6,    -1,
      76,     6,    -1,    78,    95,     6,    -1,    78,     6,    -1,
       6,    -1,    95,    -1,    95,    26,    95,    -1,    95,    44,
      95,    -1,    95,    45,    95,    -1,    95,    46,    95,    -1,
      95,    47,    95,    -1,    95,    48,    95,    -1,    95,    49,
      95,    -1,    95,    50,    95,    -1,    95,    51,    95,    -1,
      95,    52,    95,    -1,    95,    53,    95,    -1,    39,    95,
      -1,    40,    95,    -1,    95,    39,    -1,    95,    40,    -1,
      88,     4,    -1,    93,    -1,    94,    28,    93,    -1,     3,
      -1,     8,    95,     9,    -1,     4,    -1,    15,    95,    -1,
      14,    95,    -1,    22,    95,    -1,    25,    95,    -1,    95,
      14,    95,    -1,    95,    15,    95,    -1,    95,    16,    95,
      -1,    95,    17,    95,    -1,    95,    18,    95,    -1,    95,
      19,    95,    -1,    95,    20,    95,    -1,    95,    31,    95,
      -1,    95,    32,    95,    -1,    95,    33,    95,    -1,    95,
      34,    95,    -1,    95,    35,    95,    -1,    95,    36,    95,
      -1,    95,    24,    95,    -1,    95,    23,    95,    -1,    95,
      21,    95,    -1,    95,    37,    95,    -1,    95,    38,    95,
      -1,     4,     8,    96,     9,    -1,     4,     8,     9,    -1,
      30,     8,    88,     9,    -1,    16,    95,    -1,    24,    95,
      -1,     8,    88,     9,    95,    -1,    95,    12,    95,    13,
      -1,    95,    27,     4,    -1,    95,    29,     4,    -1,    95,
      -1,    95,    28,    96,    -1,    -1,    98,    97,    -1,    73,
      95,     7,    86,    -1,    74,     7,    86,    -1,     4,    -1,
       4,    28,    99,    -1,    42,    54,   104,    55,   106,    56,
     106,    43,    -1,    42,    55,   106,    56,   106,    43,    -1,
      42,    60,     4,     8,    96,     9,    26,   106,    43,    -1,
      41,    60,     4,     8,    96,     9,    26,   106,    82,    -1,
      -1,   103,   102,    -1,    88,     4,     6,    -1,    -1,     4,
     104,    -1,   106,    -1,   106,    28,   105,    -1,     8,   106,
       9,    -1,     3,    -1,     5,    -1,     4,    -1,     4,     8,
     105,     9,    -1,   106,    14,   106,    -1,   106,    15,   106,
      -1,   106,    16,   106,    -1,   106,    17,   106,    -1,   106,
      18,   106,    -1,   106,    19,   106,    -1,   106,    20,   106,
      -1,   106,    31,   106,    -1,   106,    32,   106,    -1,   106,
      33,   106,    -1,   106,    34,   106,    -1,   106,    35,   106,
      -1,   106,    36,   106,    -1,   106,    24,   106,    -1,   106,
      23,   106,    -1,   106,    21,   106,    -1,   106,    37,   106,
      -1,   106,    38,   106,    -1,    15,   106,    -1,    14,   106,
      -1,    22,   106,    -1,    25,   106,    -1,    16,   106,    -1,
      24,   106,    -1,     8,    88,     9,   106,    -1,   106,    12,
     106,    13,    -1,   106,    27,     4,    -1,   106,    29,     4,
      -1,    57,     4,    28,   106,    -1,    58,     4,    28,   106,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   108,   108,   115,   118,   124,   127,   134,   137,   140,
     143,   146,   149,   152,   155,   158,   161,   164,   167,   170,
     176,   179,   182,   185,   188,   191,   194,   197,   200,   203,
     206,   209,   215,   218,   221,   227,   233,   236,   239,   242,
     245,   248,   251,   254,   257,   260,   265,   268,   271,   274,
     278,   281,   284,   287,   291,   294,   297,   300,   304,   307,
     310,   313,   319,   322,   325,   328,   331,   337,   340,   343,
     346,   349,   352,   355,   358,   361,   364,   367,   370,   373,
     376,   379,   382,   389,   395,   398,   405,   408,   411,   414,
     417,   420,   423,   426,   429,   432,   435,   438,   441,   444,
     447,   450,   453,   456,   459,   462,   465,   468,   471,   474,
     477,   480,   483,   486,   489,   492,   495,   498,   501,   504,
     510,   513,   519,   522,   528,   531,   537,   540,   546,   549,
     555,   558,   564,   567,   573,   579,   582,   588,   591,   597,
     600,   603,   606,   609,   612,   615,   618,   621,   624,   627,
     630,   633,   636,   639,   642,   645,   648,   651,   654,   657,
     660,   663,   666,   669,   672,   675,   678,   681,   684,   687,
     690,   693,   696,   699
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NAT", "ID", "__RETURN", "';'", "':'",
  "'('", "')'", "'{'", "'}'", "'['", "']'", "'+'", "'-'", "'*'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'!'", "'|'", "'&'", "'~'", "'='", "'.'",
  "','", "TM_FIELDOFPTR", "SIZEOF", "LE", "GE", "EQ", "NE", "AND", "OR",
  "SHL", "SHR", "INCREASE", "DECREASE", "TM_COMMENT", "COMMENT_HEADER",
  "COMMENT_TAIL", "ADD_EQ", "SUB_EQ", "MUL_EQ", "DIV_EQ", "MOD_EQ",
  "BAND_EQ", "BOR_EQ", "XOR_EQ", "SHL_EQ", "SHR_EQ", "WITH", "REQUIRE",
  "ENSURE", "FORALL", "EXISTS", "TM_INV", "LET", "VOID", "CHAR", "INT",
  "INT64", "U8", "UINT", "UINT64", "TM_IF", "TM_ELSE", "TM_WHILE", "TM_DO",
  "TM_SWITCH", "TM_CASE", "TM_DEFAULT", "TM_FOR", "TM_CONTINUE",
  "TM_BREAK", "TM_RETURN", "TM_STRUCT", "TM_UNION", "TM_ENUM",
  "TM_NEWLINE", "$accept", "NT_WHOLE", "DEF_LIST", "CMD_LIST", "DEF",
  "TYPE", "CMD_OR_COMMENT", "BLOCK", "CMDTYPE", "SIMPLECMD", "VARDEC",
  "VARDEC_LIST", "EXPRTYPE", "EXPR_LIST", "CASE_LIST", "CASE_OR_DEFAULT",
  "ENUM_LIST", "AFUNCDEF", "ASEPDEF", "FIELD_DEC_LIST", "FIELD_DEC",
  "VAR_LIST", "RA_LIST", "RASSERTION", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,    59,    58,    40,    41,
     123,   125,    91,    93,    43,    45,    42,    47,    37,    60,
      62,    94,    33,   124,    38,   126,    61,    46,    44,   261,
     262,   263,   264,   265,   266,   267,   268,   269,   270,   271,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    83,    84,    85,    85,    86,    86,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    87,
      88,    88,    88,    88,    88,    88,    88,    88,    88,    88,
      88,    88,    89,    89,    89,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    94,    94,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     101,   101,   102,   102,   103,   104,   104,   105,   105,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,     0,     2,     9,     8,     8,
       7,     7,     6,     6,     5,     1,     6,     6,     6,     2,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       5,     2,     1,     3,     3,     3,     1,     2,     2,     5,
       7,     5,     5,     9,     9,     5,    13,    12,    12,    11,
      12,    11,    11,    10,     9,     8,     8,     7,     8,     7,
       7,     6,     2,     2,     3,     2,     1,     1,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     2,     2,     2,     1,     3,     1,     3,     1,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     4,     3,     4,     2,     2,     4,     4,     3,     3,
       1,     3,     0,     2,     4,     3,     1,     3,     8,     6,
       9,     9,     0,     2,     3,     0,     2,     1,     3,     3,
       1,     1,     1,     4,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     4,     4,
       3,     3,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,    20,    21,    23,    24,    22,    25,    26,
       0,     0,     0,     0,     2,     3,     0,     0,    15,     0,
       0,    27,    28,    29,     1,     4,    83,    31,    19,     0,
       0,   132,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   132,     0,   126,     0,     0,     0,    84,
       0,    86,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,     0,     0,    27,    28,    29,     0,     0,
     133,     0,     0,     0,    14,     5,     0,     0,    83,     0,
       0,     0,     0,     0,    90,    89,   114,    91,   115,    92,
       0,     0,    30,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   134,    18,    16,   127,
      17,    66,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,    36,    32,     0,
       0,    67,   135,     0,    13,     5,    12,     5,     0,    85,
     112,     0,     0,     0,    87,     0,     0,    93,    94,    95,
      96,    97,    98,    99,   108,   107,   106,   118,   119,   100,
     101,   102,   103,   104,   105,   109,   110,   121,     0,     0,
       0,    79,    80,   140,   142,   141,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    63,    62,    65,     0,    10,     6,
      38,    37,     0,    81,    82,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   135,     0,     0,     0,     0,
      11,     5,   111,   116,   113,   117,     0,     0,    35,     0,
       0,     0,   163,   162,   166,   164,   167,   165,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,    34,     0,     0,     0,   122,     0,     0,
      64,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,   136,     0,     0,     9,     8,     0,   131,   130,
       0,   137,     0,   139,     0,     0,     0,     0,   144,   145,
     146,   147,   148,   149,   150,   159,   158,   157,   170,   171,
     151,   152,   153,   154,   155,   156,   160,   161,     0,     0,
       0,     0,     0,     0,   122,     0,     0,     0,     0,     0,
       7,   143,     0,   168,   172,   173,     0,     0,     0,   169,
      39,    41,    42,     0,     5,    45,   123,     0,     0,     0,
       0,     0,     0,   129,   138,     0,     0,     0,     0,     5,
     125,    61,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    40,   124,    60,    59,     0,    57,     0,
       0,     0,   128,     0,     0,     0,     0,     0,    58,    56,
      55,     0,    43,    44,     0,     0,     0,     0,     0,    54,
      53,     0,     0,     0,     0,     0,     0,    52,    51,     0,
      49,     0,     0,     0,    50,    48,    47,     0,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    13,    14,   135,    15,    48,   136,   137,   138,   139,
     140,    50,   141,    63,   333,   334,    46,    77,    18,    42,
      43,   226,   300,   301
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -200
static const yytype_int16 yypact[] =
{
      90,   -22,   -19,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
      83,    96,    97,   102,  -200,    90,    35,   109,  -200,   105,
     106,   119,   124,   127,  -200,  -200,     4,  -200,  -200,   108,
     136,   -32,   -32,   145,    60,  1727,  1727,  1727,   146,   155,
     161,   103,   156,   -32,   162,   138,   163,     1,   104,  -200,
      -1,  -200,   164,   535,  1727,  1727,  1727,  1727,  1727,  1727,
     167,  1746,  1773,   170,   189,  -200,  -200,  -200,    30,   188,
    -200,   200,   145,   203,  -200,   360,   -40,    73,   199,     3,
     -32,   212,    82,  1450,   288,   288,    25,    25,  2151,    25,
     -32,  1727,  -200,  1727,  1727,  1727,  1727,  1727,  1727,  1727,
    1727,  1727,  1727,   172,   209,  1727,  1727,  1727,  1727,  1727,
    1727,  1727,  1727,  1727,   192,   193,  -200,  -200,  -200,  -200,
    -200,  -200,   360,  1727,  1727,    89,   669,   214,   216,   439,
    1727,   217,   223,   224,   389,   220,   360,  -200,  -200,   226,
     232,   744,   236,   669,  -200,   360,  -200,   360,   152,  -200,
    -200,   238,   199,  1727,  -200,   126,  1800,   288,   288,    25,
      25,    25,   256,   256,  2097,  2043,  2151,  -200,  -200,   256,
     256,  2205,  2205,  1989,  1935,   185,   185,  -200,   669,   669,
     241,  1881,  1881,  -200,   252,  -200,   467,   669,   669,   669,
     669,   669,   669,   257,   260,   669,   552,  1301,  1727,  1727,
     208,   205,  1599,   795,  -200,  -200,  -200,  1076,  -200,  -200,
    -200,  -200,  1727,  -200,  -200,  1727,  1727,  1727,  1727,  1727,
    1727,  1727,  1727,  1727,  1727,   236,   221,   685,   267,   268,
    -200,   360,  -200,  -200,  -200,  -200,   606,  1331,  -200,   669,
     129,  1480,   663,   663,    28,    28,  2178,    28,   253,   254,
     633,   669,   669,   669,   669,   669,   669,   669,   669,   669,
     669,   669,   280,   282,   669,   669,   669,   669,   669,   669,
     669,   669,  -200,  -200,  1510,  1540,  1727,     7,  1635,   283,
    -200,  1881,  1881,  1881,  1881,  1881,  1881,  1881,  1881,  1881,
    1881,  1881,  -200,   669,   669,  -200,  -200,   281,  -200,  -200,
     290,  1827,   669,  -200,   669,   669,   120,  1854,   663,   663,
      28,    28,    28,  2259,  2259,  2124,  2070,  2178,  -200,  -200,
    2259,  2259,  2232,  2232,  2016,  1962,   338,   338,   439,   439,
    1109,  1727,   284,   296,     7,   823,  1142,  1658,   716,  1361,
    -200,  -200,   669,  -200,  1908,  1908,   293,   439,   300,  -200,
     240,  -200,  -200,  1393,   360,  -200,  -200,   439,   301,   851,
     879,  1175,   669,  -200,  -200,  1727,   242,   907,   439,   360,
    -200,  -200,   439,   439,   302,   439,   304,   935,  1420,  1570,
    1727,  1681,   308,  -200,  -200,  -200,  -200,   439,  -200,   439,
     439,   307,  -200,   439,  1208,   963,  1241,  1704,  -200,  -200,
    -200,   439,  -200,  -200,   439,   320,   991,  1019,  1274,  -200,
    -200,   439,   439,   330,   439,   331,  1047,  -200,  -200,   439,
    -200,   439,   439,   332,  -200,  -200,  -200,   439,  -200
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -200,  -200,   327,  -119,  -200,    53,  -200,  -200,  -124,  -199,
      10,  -200,   -35,   -31,     9,  -200,   272,   269,  -200,    85,
    -200,   122,    15,    67
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      61,    62,    62,   180,   279,   201,    64,    74,    79,   146,
      17,    75,    34,   147,   142,   143,    35,   209,    83,    84,
      85,    86,    87,    88,    89,    17,   228,    80,   229,     3,
       4,     5,     6,     7,     8,     9,   116,    91,    19,    26,
     251,    20,    35,    76,    49,    76,    62,    38,    39,    40,
     151,    27,   103,    16,   104,   262,   156,   263,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,    16,    47,
     169,   170,   171,   172,   173,   174,   175,   176,    62,   144,
     331,   332,   177,   145,    41,    41,   152,    21,   181,   182,
     149,   153,   183,   184,   185,   202,    41,   186,    27,   207,
      22,    23,    24,   187,   188,   189,    82,    68,    78,    29,
      30,   190,   297,   191,   192,    28,    36,    44,   233,    27,
      27,     3,     4,     5,     6,     7,     8,     9,    70,    31,
     152,     1,     2,   152,    32,   234,   358,    33,   302,    38,
      39,    40,    27,   155,    37,    27,   193,   194,   195,    45,
      65,     3,     4,     5,     6,     7,     8,     9,   230,    66,
     374,   376,   231,   274,   275,    67,    72,    69,   382,    10,
      11,    12,    81,    71,    73,    90,   167,   281,   391,   114,
     282,   283,   284,   285,   286,   287,   288,   289,   290,   291,
     346,   347,   196,   197,   117,   348,   405,    91,   115,    93,
      94,    95,    96,    97,   350,   351,   118,   413,   415,   120,
     227,    35,   103,   168,   104,    51,    52,   423,   178,   179,
      53,   150,   198,   366,   199,   203,    54,    55,    56,   204,
     205,   208,   210,   371,    57,   370,    58,    59,   211,   240,
     225,   330,    60,   336,   383,   236,   237,   232,   385,   386,
     384,   388,   238,   241,   242,   243,   244,   245,   246,   247,
     239,   248,   250,   398,   249,   399,   400,   195,    91,   402,
      93,    94,    95,    96,    97,   276,   293,   409,   295,   296,
     410,   304,   305,   103,   318,   104,   319,   417,   418,   337,
     420,   354,   340,   111,   112,   424,   353,   425,   426,   341,
      91,   365,   361,   428,    95,    96,    97,   355,   367,   368,
     372,   387,   380,   389,   397,   103,   401,   104,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   411,
     379,   320,   321,   322,   323,   324,   325,   326,   327,   419,
     421,   427,    25,   356,   119,   394,   396,   292,   148,     0,
     251,     0,   252,   253,   254,   255,   256,   364,     0,     0,
     338,   339,   408,    51,    52,   262,   121,   263,    53,   343,
     122,   344,   345,     0,    54,    55,    56,     0,     0,     0,
       0,     0,    57,     0,    58,    59,     0,     0,     0,     0,
      60,     0,    51,    52,     0,   206,     0,    53,     0,   123,
     124,   125,   126,    54,    55,    56,     0,     0,     0,     0,
       0,    57,     0,    58,    59,     0,     0,     0,     0,    60,
       0,     3,     4,     5,     6,     7,     8,     9,   127,   378,
     128,   129,   130,     0,     0,   131,   132,   133,   134,    38,
      39,    40,    51,    52,     0,   121,     0,    53,     0,   122,
       0,     0,     0,    54,    55,    56,     0,     0,     0,     0,
       0,    57,     0,    58,    59,     0,     0,     0,     0,    60,
     183,   184,   185,     0,     0,   186,     0,     0,   123,   124,
     200,   187,   188,   189,     0,     0,     0,     0,     0,   190,
       0,   191,   192,     0,     0,     0,     0,     0,     0,     0,
       3,     4,     5,     6,     7,     8,     9,   127,     0,   128,
     129,   130,     0,     0,   131,   132,   133,   134,    38,    39,
      40,     0,     0,     0,   193,   194,     0,     0,     3,     4,
       5,     6,     7,     8,     9,     0,     0,     0,    51,    52,
       0,     0,     0,    53,     0,     0,    38,    39,    40,    54,
      55,    56,     0,     0,     0,     0,     0,    57,     0,    58,
      59,     0,     0,     0,   251,    60,   252,   253,   254,   255,
     256,   257,   258,   259,     0,   260,   261,     0,     0,   262,
       0,   263,     0,   264,   265,   266,   267,   268,   269,   270,
     271,     0,     0,     0,     0,     0,     3,     4,     5,     6,
       7,     8,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,    39,    40,     0,   251,     0,
     252,   253,   254,   255,   256,   257,   258,   259,     0,   260,
     261,     0,     0,   262,   272,   263,     0,   264,   265,   266,
     267,   268,   269,   270,   271,   251,     0,   252,   253,   254,
     255,   256,   257,   258,   259,     0,   260,   261,     0,     0,
     262,     0,   263,     0,   264,   265,   266,   267,   268,   269,
     270,   271,   183,   184,   185,   251,     0,   186,     0,   254,
     255,   256,     0,   187,   188,   189,     0,     0,   298,     0,
     262,   190,   263,   191,   192,     0,     0,   251,     0,   252,
     253,   254,   255,   256,   257,   258,   259,     0,   260,   261,
       0,     0,   262,     0,   263,   306,   264,   265,   266,   267,
     268,   269,   270,   271,     0,     0,   193,   194,   251,     0,
     252,   253,   254,   255,   256,   257,   258,   259,     0,   260,
     261,   294,     0,   262,     0,   263,     0,   264,   265,   266,
     267,   268,   269,   270,   271,     0,    91,     0,    93,    94,
      95,    96,    97,    98,    99,   100,     0,   101,   102,     0,
     212,   103,   362,   104,     0,   105,   106,   107,   108,   109,
     110,   111,   112,   213,   214,     0,     0,     0,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,    51,    52,
       0,   278,     0,    53,     0,     0,     0,     0,     0,    54,
      55,    56,     0,     0,     0,     0,     0,    57,     0,    58,
      59,     0,     0,     0,     0,    60,    51,    52,     0,     0,
       0,    53,   357,     0,   123,   124,     0,    54,    55,    56,
       0,     0,     0,     0,     0,    57,     0,    58,    59,     0,
       0,     0,     0,    60,    51,    52,     0,     0,     0,    53,
     373,     0,   123,   124,     0,    54,    55,    56,     0,     0,
       0,     0,     0,    57,     0,    58,    59,     0,     0,     0,
       0,    60,    51,    52,     0,     0,     0,    53,   375,     0,
     123,   124,     0,    54,    55,    56,     0,     0,     0,     0,
       0,    57,     0,    58,    59,     0,     0,     0,     0,    60,
      51,    52,     0,   381,     0,    53,     0,     0,   123,   124,
       0,    54,    55,    56,     0,     0,     0,     0,     0,    57,
       0,    58,    59,     0,     0,     0,     0,    60,    51,    52,
       0,     0,     0,    53,   390,     0,   123,   124,     0,    54,
      55,    56,     0,     0,     0,     0,     0,    57,     0,    58,
      59,     0,     0,     0,     0,    60,    51,    52,     0,     0,
       0,    53,   404,     0,   123,   124,     0,    54,    55,    56,
       0,     0,     0,     0,     0,    57,     0,    58,    59,     0,
       0,     0,     0,    60,    51,    52,     0,     0,     0,    53,
     412,     0,   123,   124,     0,    54,    55,    56,     0,     0,
       0,     0,     0,    57,     0,    58,    59,     0,     0,     0,
       0,    60,    51,    52,     0,     0,     0,    53,   414,     0,
     123,   124,     0,    54,    55,    56,     0,     0,     0,     0,
       0,    57,     0,    58,    59,     0,     0,     0,     0,    60,
      51,    52,     0,     0,     0,    53,   422,     0,   123,   124,
       0,    54,    55,    56,     0,     0,     0,     0,     0,    57,
       0,    58,    59,     0,     0,     0,     0,    60,     0,     0,
       0,     0,   280,     0,     0,     0,   123,   124,    91,     0,
      93,    94,    95,    96,    97,    98,    99,   100,     0,   101,
     102,     0,     0,   103,     0,   104,     0,   105,   106,   107,
     108,   109,   110,   111,   112,   352,     0,     0,     0,     0,
       0,    91,     0,    93,    94,    95,    96,    97,    98,    99,
     100,     0,   101,   102,     0,     0,   103,     0,   104,     0,
     105,   106,   107,   108,   109,   110,   111,   112,   359,     0,
       0,     0,     0,     0,    91,     0,    93,    94,    95,    96,
      97,    98,    99,   100,     0,   101,   102,     0,     0,   103,
       0,   104,     0,   105,   106,   107,   108,   109,   110,   111,
     112,   377,     0,     0,     0,     0,     0,    91,     0,    93,
      94,    95,    96,    97,    98,    99,   100,     0,   101,   102,
       0,     0,   103,     0,   104,     0,   105,   106,   107,   108,
     109,   110,   111,   112,   403,     0,     0,     0,     0,     0,
      91,     0,    93,    94,    95,    96,    97,    98,    99,   100,
       0,   101,   102,     0,     0,   103,     0,   104,     0,   105,
     106,   107,   108,   109,   110,   111,   112,   406,     0,     0,
       0,     0,     0,    91,     0,    93,    94,    95,    96,    97,
      98,    99,   100,     0,   101,   102,     0,     0,   103,     0,
     104,     0,   105,   106,   107,   108,   109,   110,   111,   112,
     416,     0,     0,     0,     0,     0,    91,     0,    93,    94,
      95,    96,    97,    98,    99,   100,     0,   101,   102,     0,
       0,   103,     0,   104,     0,   105,   106,   107,   108,   109,
     110,   111,   112,   251,     0,   252,   253,   254,   255,   256,
     257,   258,   259,     0,   260,   261,     0,     0,   262,     0,
     263,     0,   264,   265,   266,   267,   268,   269,   270,   271,
       0,     0,     0,   251,   273,   252,   253,   254,   255,   256,
     257,   258,   259,     0,   260,   261,     0,     0,   262,     0,
     263,     0,   264,   265,   266,   267,   268,   269,   270,   271,
       0,     0,     0,   251,   299,   252,   253,   254,   255,   256,
     257,   258,   259,     0,   260,   261,     0,     0,   262,     0,
     263,     0,   264,   265,   266,   267,   268,   269,   270,   271,
     369,     0,     0,     0,   363,    91,     0,    93,    94,    95,
      96,    97,    98,    99,   100,     0,   101,   102,     0,     0,
     103,     0,   104,     0,   105,   106,   107,   108,   109,   110,
     111,   112,   251,     0,   252,   253,   254,   255,   256,   257,
     258,   259,     0,   260,   261,     0,     0,   262,     0,   263,
       0,   264,   265,   266,   267,   268,   269,   270,   271,   154,
       0,     0,    91,   392,    93,    94,    95,    96,    97,    98,
      99,   100,     0,   101,   102,     0,     0,   103,     0,   104,
       0,   105,   106,   107,   108,   109,   110,   111,   112,   303,
       0,     0,   251,     0,   252,   253,   254,   255,   256,   257,
     258,   259,     0,   260,   261,     0,     0,   262,     0,   263,
       0,   264,   265,   266,   267,   268,   269,   270,   271,   328,
       0,     0,    91,     0,    93,    94,    95,    96,    97,    98,
      99,   100,     0,   101,   102,     0,     0,   103,     0,   104,
       0,   105,   106,   107,   108,   109,   110,   111,   112,   329,
       0,     0,    91,     0,    93,    94,    95,    96,    97,    98,
      99,   100,     0,   101,   102,     0,     0,   103,     0,   104,
       0,   105,   106,   107,   108,   109,   110,   111,   112,   393,
       0,     0,    91,     0,    93,    94,    95,    96,    97,    98,
      99,   100,     0,   101,   102,     0,     0,   103,     0,   104,
       0,   105,   106,   107,   108,   109,   110,   111,   112,   277,
       0,    91,     0,    93,    94,    95,    96,    97,    98,    99,
     100,     0,   101,   102,     0,     0,   103,     0,   104,     0,
     105,   106,   107,   108,   109,   110,   111,   112,    51,    52,
       0,   335,     0,    53,     0,     0,     0,     0,     0,    54,
      55,    56,     0,     0,     0,     0,     0,    57,     0,    58,
      59,    51,    52,     0,   360,    60,    53,     0,     0,     0,
       0,     0,    54,    55,    56,     0,     0,     0,     0,     0,
      57,     0,    58,    59,    51,    52,     0,   395,    60,    53,
       0,     0,     0,     0,     0,    54,    55,    56,     0,     0,
       0,     0,     0,    57,     0,    58,    59,    51,    52,     0,
     407,    60,    53,     0,     0,     0,     0,     0,    54,    55,
      56,     0,     0,     0,     0,     0,    57,     0,    58,    59,
      51,    52,     0,     0,    60,    53,     0,     0,     0,     0,
       0,    54,    55,    56,     0,     0,     0,     0,     0,    57,
       0,    58,    59,     0,     0,     0,     0,    60,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,     0,   101,
     102,     0,     0,   103,     0,   104,     0,   105,   106,   107,
     108,   109,   110,   111,   112,    91,     0,    93,    94,    95,
      96,    97,    98,    99,   100,     0,   101,   102,     0,     0,
     103,   113,   104,     0,   105,   106,   107,   108,   109,   110,
     111,   112,    91,   235,    93,    94,    95,    96,    97,    98,
      99,   100,     0,   101,   102,     0,     0,   103,     0,   104,
       0,   105,   106,   107,   108,   109,   110,   111,   112,   251,
       0,   252,   253,   254,   255,   256,   257,   258,   259,     0,
     260,   261,     0,     0,   262,   342,   263,     0,   264,   265,
     266,   267,   268,   269,   270,   271,   251,   349,   252,   253,
     254,   255,   256,   257,   258,   259,     0,   260,   261,     0,
       0,   262,     0,   263,     0,   264,   265,   266,   267,   268,
     269,   270,   271,    91,     0,    93,    94,    95,    96,    97,
      98,    99,   100,     0,   101,   102,     0,     0,   103,     0,
     104,     0,   105,   106,   107,   108,   109,   110,   111,   112,
     251,     0,   252,   253,   254,   255,   256,   257,   258,   259,
       0,   260,   261,     0,     0,   262,     0,   263,     0,   264,
     265,   266,   267,   268,   269,   270,   271,    91,     0,    93,
      94,    95,    96,    97,    98,    99,   100,     0,   101,   102,
       0,     0,   103,     0,   104,     0,   105,   106,   107,   108,
     109,     0,   111,   112,   251,     0,   252,   253,   254,   255,
     256,   257,   258,   259,     0,   260,   261,     0,     0,   262,
       0,   263,     0,   264,   265,   266,   267,   268,     0,   270,
     271,    91,     0,    93,    94,    95,    96,    97,    98,    99,
     100,     0,   101,   102,     0,     0,   103,     0,   104,     0,
     105,   106,   107,   108,     0,     0,   111,   112,   251,     0,
     252,   253,   254,   255,   256,   257,   258,   259,     0,   260,
     261,     0,     0,   262,     0,   263,     0,   264,   265,   266,
     267,     0,     0,   270,   271,    91,     0,    93,    94,    95,
      96,    97,    98,    99,   100,     0,     0,   102,     0,     0,
     103,     0,   104,     0,   105,   106,   107,   108,     0,     0,
     111,   112,   251,     0,   252,   253,   254,   255,   256,   257,
     258,   259,     0,     0,   261,     0,     0,   262,     0,   263,
       0,   264,   265,   266,   267,     0,     0,   270,   271,    91,
       0,    93,    94,    95,    96,    97,    98,    99,     0,     0,
       0,   102,     0,     0,   103,     0,   104,     0,   105,   106,
     107,   108,     0,     0,   111,   112,   251,     0,   252,   253,
     254,   255,   256,   257,   258,     0,     0,     0,   261,     0,
       0,   262,     0,   263,     0,   264,   265,   266,   267,     0,
       0,   270,   271,    91,     0,    93,    94,    95,    96,    97,
      98,    99,     0,     0,     0,     0,     0,     0,   103,     0,
     104,     0,   105,   106,   107,   108,     0,     0,   111,   112,
     251,     0,   252,   253,   254,   255,   256,   257,   258,     0,
       0,     0,     0,     0,     0,   262,     0,   263,     0,   264,
     265,   266,   267,     0,     0,   270,   271,    91,     0,    93,
      94,    95,    96,    97,    98,    99,     0,     0,     0,     0,
       0,     0,   103,     0,   104,     0,   105,   106,     0,     0,
       0,     0,   111,   112,   251,     0,   252,   253,   254,   255,
     256,   257,   258,     0,     0,     0,     0,     0,     0,   262,
       0,   263,     0,   264,   265,     0,     0,     0,     0,   270,
     271,   251,     0,   252,   253,   254,   255,   256,     0,     0,
       0,     0,     0,     0,     0,     0,   262,     0,   263,     0,
       0,     0,     0,     0,     0,     0,   270,   271
};

static const yytype_int16 yycheck[] =
{
      35,    36,    37,   122,   203,   129,    37,     6,     9,     6,
       0,    10,     8,    10,    54,    55,    12,   136,    53,    54,
      55,    56,    57,    58,    59,    15,   145,    28,   147,    61,
      62,    63,    64,    65,    66,    67,     6,    12,    60,     4,
      12,    60,    12,    42,    34,    42,    81,    79,    80,    81,
      81,    16,    27,     0,    29,    27,    91,    29,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,    15,     9,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     6,
      73,    74,   113,    10,    31,    32,     4,     4,   123,   124,
      80,     9,     3,     4,     5,   130,    43,     8,    16,   134,
       4,     4,     0,    14,    15,    16,    53,     4,     4,     4,
       4,    22,   231,    24,    25,     6,     8,    32,   153,    16,
      16,    61,    62,    63,    64,    65,    66,    67,    43,    10,
       4,    41,    42,     4,    10,     9,   335,    10,     9,    79,
      80,    81,    16,    90,     8,    16,    57,    58,    59,     4,
       4,    61,    62,    63,    64,    65,    66,    67,     6,     4,
     359,   360,    10,   198,   199,     4,    28,    11,   367,    79,
      80,    81,     8,    11,    11,     8,     4,   212,   377,     9,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
      70,    71,   125,   126,     6,    75,   395,    12,     9,    14,
      15,    16,    17,    18,   328,   329,     6,   406,   407,     6,
     143,    12,    27,     4,    29,     3,     4,   416,    26,    26,
       8,     9,     8,   347,     8,     8,    14,    15,    16,     6,
       6,    11,     6,   357,    22,   354,    24,    25,     6,   186,
       4,   276,    30,   278,   368,   178,   179,     9,   372,   373,
     369,   375,    11,   186,   187,   188,   189,   190,   191,   192,
       8,     4,   195,   387,     4,   389,   390,    59,    12,   393,
      14,    15,    16,    17,    18,    70,    55,   401,    11,    11,
     404,    28,    28,    27,     4,    29,     4,   411,   412,     6,
     414,     7,    11,    37,    38,   419,   331,   421,   422,     9,
      12,     8,   337,   427,    16,    17,    18,    11,     8,    69,
       9,     9,    70,     9,     6,    27,     9,    29,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   261,     9,
     365,   264,   265,   266,   267,   268,   269,   270,   271,     9,
       9,     9,    15,   334,    72,   380,   381,   225,    79,    -1,
      12,    -1,    14,    15,    16,    17,    18,   342,    -1,    -1,
     293,   294,   397,     3,     4,    27,     6,    29,     8,   302,
      10,   304,   305,    -1,    14,    15,    16,    -1,    -1,    -1,
      -1,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,
      30,    -1,     3,     4,    -1,     6,    -1,     8,    -1,    39,
      40,    41,    42,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,    30,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,   362,
      70,    71,    72,    -1,    -1,    75,    76,    77,    78,    79,
      80,    81,     3,     4,    -1,     6,    -1,     8,    -1,    10,
      -1,    -1,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,    30,
       3,     4,     5,    -1,    -1,     8,    -1,    -1,    39,    40,
      41,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    -1,    70,
      71,    72,    -1,    -1,    75,    76,    77,    78,    79,    80,
      81,    -1,    -1,    -1,    57,    58,    -1,    -1,    61,    62,
      63,    64,    65,    66,    67,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,     8,    -1,    -1,    79,    80,    81,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    22,    -1,    24,
      25,    -1,    -1,    -1,    12,    30,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    -1,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    80,    81,    -1,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    82,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    -1,    -1,
      27,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,     3,     4,     5,    12,    -1,     8,    -1,    16,
      17,    18,    -1,    14,    15,    16,    -1,    -1,    82,    -1,
      27,    22,    29,    24,    25,    -1,    -1,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    29,    82,    31,    32,    33,    34,
      35,    36,    37,    38,    -1,    -1,    57,    58,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    56,    -1,    27,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    -1,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      26,    27,    56,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     3,     4,
      -1,     6,    -1,     8,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    22,    -1,    24,
      25,    -1,    -1,    -1,    -1,    30,     3,     4,    -1,    -1,
      -1,     8,     9,    -1,    39,    40,    -1,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    24,    25,    -1,
      -1,    -1,    -1,    30,     3,     4,    -1,    -1,    -1,     8,
       9,    -1,    39,    40,    -1,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,
      -1,    30,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      39,    40,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,    30,
       3,     4,    -1,     6,    -1,     8,    -1,    -1,    39,    40,
      -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    30,     3,     4,
      -1,    -1,    -1,     8,     9,    -1,    39,    40,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    22,    -1,    24,
      25,    -1,    -1,    -1,    -1,    30,     3,     4,    -1,    -1,
      -1,     8,     9,    -1,    39,    40,    -1,    14,    15,    16,
      -1,    -1,    -1,    -1,    -1,    22,    -1,    24,    25,    -1,
      -1,    -1,    -1,    30,     3,     4,    -1,    -1,    -1,     8,
       9,    -1,    39,    40,    -1,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    24,    25,    -1,    -1,    -1,
      -1,    30,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      39,    40,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,
      -1,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,    30,
       3,     4,    -1,    -1,    -1,     8,     9,    -1,    39,    40,
      -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    30,    -1,    -1,
      -1,    -1,     6,    -1,    -1,    -1,    39,    40,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,     6,    -1,    -1,    -1,    -1,
      -1,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,     6,    -1,
      -1,    -1,    -1,    -1,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,     6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,     6,    -1,    -1,    -1,    -1,    -1,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,     6,    -1,    -1,
      -1,    -1,    -1,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
       6,    -1,    -1,    -1,    -1,    -1,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    12,    43,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      -1,    -1,    -1,    12,    43,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
       7,    -1,    -1,    -1,    43,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    -1,    -1,
      27,    -1,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,     9,
      -1,    -1,    12,    43,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,     9,
      -1,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,     9,
      -1,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,     9,
      -1,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,     9,
      -1,    -1,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    10,
      -1,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,     3,     4,
      -1,     6,    -1,     8,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    -1,    -1,    -1,    -1,    -1,    22,    -1,    24,
      25,     3,     4,    -1,     6,    30,     8,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,
      22,    -1,    24,    25,     3,     4,    -1,     6,    30,     8,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    -1,    -1,
      -1,    -1,    -1,    22,    -1,    24,    25,     3,     4,    -1,
       6,    30,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    -1,    -1,    -1,    -1,    -1,    22,    -1,    24,    25,
       3,     4,    -1,    -1,    30,     8,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    -1,    -1,    -1,    -1,    -1,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    30,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    23,    24,    -1,    -1,
      27,    28,    29,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,
      -1,    31,    32,    33,    34,    35,    36,    37,    38,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      23,    24,    -1,    -1,    27,    28,    29,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    -1,    23,    24,    -1,
      -1,    27,    -1,    29,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    -1,    23,    24,    -1,    -1,    27,    -1,
      29,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      -1,    23,    24,    -1,    -1,    27,    -1,    29,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    -1,    23,    24,
      -1,    -1,    27,    -1,    29,    -1,    31,    32,    33,    34,
      35,    -1,    37,    38,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    -1,    23,    24,    -1,    -1,    27,
      -1,    29,    -1,    31,    32,    33,    34,    35,    -1,    37,
      38,    12,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    -1,    23,    24,    -1,    -1,    27,    -1,    29,    -1,
      31,    32,    33,    34,    -1,    -1,    37,    38,    12,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    -1,    23,
      24,    -1,    -1,    27,    -1,    29,    -1,    31,    32,    33,
      34,    -1,    -1,    37,    38,    12,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    -1,    -1,    24,    -1,    -1,
      27,    -1,    29,    -1,    31,    32,    33,    34,    -1,    -1,
      37,    38,    12,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    -1,    -1,    24,    -1,    -1,    27,    -1,    29,
      -1,    31,    32,    33,    34,    -1,    -1,    37,    38,    12,
      -1,    14,    15,    16,    17,    18,    19,    20,    -1,    -1,
      -1,    24,    -1,    -1,    27,    -1,    29,    -1,    31,    32,
      33,    34,    -1,    -1,    37,    38,    12,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    24,    -1,
      -1,    27,    -1,    29,    -1,    31,    32,    33,    34,    -1,
      -1,    37,    38,    12,    -1,    14,    15,    16,    17,    18,
      19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,
      29,    -1,    31,    32,    33,    34,    -1,    -1,    37,    38,
      12,    -1,    14,    15,    16,    17,    18,    19,    20,    -1,
      -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    -1,    31,
      32,    33,    34,    -1,    -1,    37,    38,    12,    -1,    14,
      15,    16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    29,    -1,    31,    32,    -1,    -1,
      -1,    -1,    37,    38,    12,    -1,    14,    15,    16,    17,
      18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    29,    -1,    31,    32,    -1,    -1,    -1,    -1,    37,
      38,    12,    -1,    14,    15,    16,    17,    18,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    27,    -1,    29,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    37,    38
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    41,    42,    61,    62,    63,    64,    65,    66,    67,
      79,    80,    81,    84,    85,    87,    88,    93,   101,    60,
      60,     4,     4,     4,     0,    85,     4,    16,     6,     4,
       4,    10,    10,    10,     8,    12,     8,     8,    79,    80,
      81,    88,   102,   103,   102,     4,    99,     9,    88,    93,
      94,     3,     4,     8,    14,    15,    16,    22,    24,    25,
      30,    95,    95,    96,    96,     4,     4,     4,     4,    11,
     102,    11,    28,    11,     6,    10,    42,   100,     4,     9,
      28,     8,    88,    95,    95,    95,    95,    95,    95,    95,
       8,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    23,    24,    27,    29,    31,    32,    33,    34,    35,
      36,    37,    38,    28,     9,     9,     6,     6,     6,    99,
       6,     6,    10,    39,    40,    41,    42,    68,    70,    71,
      72,    75,    76,    77,    78,    86,    89,    90,    91,    92,
      93,    95,    54,    55,     6,    10,     6,    10,   100,    93,
       9,    96,     4,     9,     9,    88,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,     4,     4,    95,
      95,    95,    95,    95,    95,    95,    95,    96,    26,    26,
      86,    95,    95,     3,     4,     5,     8,    14,    15,    16,
      22,    24,    25,    57,    58,    59,   106,   106,     8,     8,
      41,    91,    95,     8,     6,     6,     6,    95,    11,    86,
       6,     6,    26,    39,    40,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     4,   104,   106,    86,    86,
       6,    10,     9,    95,     9,    13,   106,   106,    11,     8,
      88,   106,   106,   106,   106,   106,   106,   106,     4,     4,
     106,    12,    14,    15,    16,    17,    18,    19,    20,    21,
      23,    24,    27,    29,    31,    32,    33,    34,    35,    36,
      37,    38,    82,    43,    95,    95,    70,    10,     6,    92,
       6,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,   104,    55,    56,    11,    11,    86,    82,    43,
     105,   106,     9,     9,    28,    28,    82,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,     4,     4,
     106,   106,   106,   106,   106,   106,   106,   106,     9,     9,
      95,    73,    74,    97,    98,     6,    95,     6,   106,   106,
      11,     9,    28,   106,   106,   106,    70,    71,    75,    13,
      91,    91,     6,    95,     7,    11,    97,     9,    92,     6,
       6,    95,    56,    43,   105,     8,    91,     8,    69,     7,
      86,    91,     9,     9,    92,     9,    92,     6,   106,    95,
      70,     6,    92,    91,    86,    91,    91,     9,    91,     9,
       9,    92,    43,     9,    95,     6,    95,     6,    91,    91,
      91,     9,    91,     6,     9,    92,     6,     6,    95,    91,
      91,     9,     9,    92,     9,    92,     6,    91,    91,     9,
      91,     9,     9,    92,    91,    91,    91,     9,    91
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;


	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),

		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;


      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 108 "lang.y"
    {
    (yyval.d_l) = ((yyvsp[(1) - (1)].d_l));
    root = (yyval.d_l);
  ;}
    break;

  case 3:
#line 115 "lang.y"
    {
    (yyval.d_l) = (DFLNil());
  ;}
    break;

  case 4:
#line 118 "lang.y"
    { 
    (yyval.d_l) = (DFLCons((yyvsp[(1) - (2)].d),(yyvsp[(2) - (2)].d_l)));
  ;}
    break;

  case 5:
#line 124 "lang.y"
    {
    (yyval.c) = NULL;
  ;}
    break;

  case 6:
#line 128 "lang.y"
    {
    (yyval.c) = (TSeq((yyvsp[(1) - (2)].c), (yyvsp[(2) - (2)].c)));
  ;}
    break;

  case 7:
#line 134 "lang.y"
    {
    (yyval.d) = (TFuncdef((yyvsp[(1) - (9)].t),(yyvsp[(2) - (9)].i),(yyvsp[(4) - (9)].vd_l),(yyvsp[(8) - (9)].c),(yyvsp[(6) - (9)].afd)));
 ;}
    break;

  case 8:
#line 137 "lang.y"
    {
    (yyval.d) = (TFuncdef((yyvsp[(1) - (8)].t),(yyvsp[(2) - (8)].i),(yyvsp[(4) - (8)].vd_l),(yyvsp[(7) - (8)].c),NULL));
  ;}
    break;

  case 9:
#line 140 "lang.y"
    {
    (yyval.d) = (TFuncdef((yyvsp[(1) - (8)].t),(yyvsp[(2) - (8)].i),NULL,(yyvsp[(7) - (8)].c),(yyvsp[(5) - (8)].afd)));
  ;}
    break;

  case 10:
#line 143 "lang.y"
    {
    (yyval.d) = (TFuncdef((yyvsp[(1) - (7)].t),(yyvsp[(2) - (7)].i),NULL,(yyvsp[(6) - (7)].c),NULL));
  ;}
    break;

  case 11:
#line 146 "lang.y"
    {
    (yyval.d) = (TFuncdec((yyvsp[(1) - (7)].t),(yyvsp[(2) - (7)].i),(yyvsp[(4) - (7)].vd_l),(yyvsp[(6) - (7)].afd)));
  ;}
    break;

  case 12:
#line 149 "lang.y"
    {
    (yyval.d) = (TFuncdec((yyvsp[(1) - (6)].t),(yyvsp[(2) - (6)].i),(yyvsp[(4) - (6)].vd_l),NULL));
  ;}
    break;

  case 13:
#line 152 "lang.y"
    {
    (yyval.d) = (TFuncdec((yyvsp[(1) - (6)].t),(yyvsp[(2) - (6)].i),NULL,(yyvsp[(5) - (6)].afd)));
  ;}
    break;

  case 14:
#line 155 "lang.y"
    {
    (yyval.d) = (TFuncdec((yyvsp[(1) - (5)].t),(yyvsp[(2) - (5)].i),NULL,NULL));
  ;}
    break;

  case 15:
#line 158 "lang.y"
    {
    (yyval.d) = (TSepdef((yyvsp[(1) - (1)].asd)));
  ;}
    break;

  case 16:
#line 161 "lang.y"
    {
    (yyval.d) = (TUniondef((yyvsp[(2) - (6)].i),(yyvsp[(4) - (6)].fd_l)));
  ;}
    break;

  case 17:
#line 164 "lang.y"
    {
    (yyval.d) = (TEnumdef((yyvsp[(2) - (6)].i),(yyvsp[(4) - (6)].enum_l)));
  ;}
    break;

  case 18:
#line 167 "lang.y"
    {
    (yyval.d) = (TStructdef((yyvsp[(2) - (6)].i),(yyvsp[(4) - (6)].fd_l)));
  ;}
    break;

  case 19:
#line 170 "lang.y"
    {
    (yyval.d) = (TVarDecl_1((yyvsp[(1) - (2)].vd)));
  ;}
    break;

  case 20:
#line 176 "lang.y"
    {
    (yyval.t) = (TBasic(T_VOID));
  ;}
    break;

  case 21:
#line 179 "lang.y"
    {
    (yyval.t) = (TBasic(T_CHAR));
  ;}
    break;

  case 22:
#line 182 "lang.y"
    {
    (yyval.t) = (TBasic(T_U8));
  ;}
    break;

  case 23:
#line 185 "lang.y"
    {
    (yyval.t) = (TBasic(T_INT));
  ;}
    break;

  case 24:
#line 188 "lang.y"
    {
    (yyval.t) = (TBasic(T_INT64));
  ;}
    break;

  case 25:
#line 191 "lang.y"
    {
    (yyval.t) = (TBasic(T_UINT));
  ;}
    break;

  case 26:
#line 194 "lang.y"
    {
    (yyval.t) = (TBasic(T_UINT64));
  ;}
    break;

  case 27:
#line 197 "lang.y"
    {
    (yyval.t) = (TStruct((yyvsp[(2) - (2)].i)));
  ;}
    break;

  case 28:
#line 200 "lang.y"
    {
    (yyval.t) = (TUnion((yyvsp[(2) - (2)].i)));
  ;}
    break;

  case 29:
#line 203 "lang.y"
    {
    (yyval.t) = (TEnum((yyvsp[(2) - (2)].i)));
  ;}
    break;

  case 30:
#line 206 "lang.y"
    {
    (yyval.t) = (TArray((yyvsp[(1) - (5)].t),(yyvsp[(2) - (5)].i),(yyvsp[(4) - (5)].e)));
  ;}
    break;

  case 31:
#line 209 "lang.y"
    {
    (yyval.t) = (TPtr((yyvsp[(1) - (2)].t)));
  ;}
    break;

  case 32:
#line 215 "lang.y"
    {
    (yyval.c) = ((yyvsp[(1) - (1)].c));
  ;}
    break;

  case 33:
#line 218 "lang.y"
    {
    (yyval.c) = (TComment((yyvsp[(2) - (3)].ra)));
  ;}
    break;

  case 34:
#line 221 "lang.y"
    {
    (yyval.c) = (TComment((yyvsp[(2) - (3)].ra)));
  ;}
    break;

  case 35:
#line 227 "lang.y"
    {
    (yyval.c) = ((yyvsp[(2) - (3)].c));
  ;}
    break;

  case 36:
#line 233 "lang.y"
    {
    (yyval.c) = ((yyvsp[(1) - (1)].c))
  ;}
    break;

  case 37:
#line 236 "lang.y"
    {
    (yyval.c) = (TVarDecl((yyvsp[(1) - (2)].vd)));
  ;}
    break;

  case 38:
#line 239 "lang.y"
    {
    (yyval.c) = (TSimple((yyvsp[(1) - (2)].sc)));
  ;}
    break;

  case 39:
#line 242 "lang.y"
    {
    (yyval.c) = (TIf((yyvsp[(3) - (5)].e),(yyvsp[(5) - (5)].c),NULL));
  ;}
    break;

  case 40:
#line 245 "lang.y"
    {
    (yyval.c) = (TIf((yyvsp[(3) - (7)].e),(yyvsp[(5) - (7)].c),(yyvsp[(7) - (7)].c)));
  ;}
    break;

  case 41:
#line 248 "lang.y"
    {
    (yyval.c) = (TWhile(NULL,(yyvsp[(3) - (5)].e),(yyvsp[(5) - (5)].c)));
  ;}
    break;

  case 42:
#line 251 "lang.y"
    {
    (yyval.c) = (TDoWhile(NULL,(yyvsp[(4) - (5)].e),(yyvsp[(2) - (5)].c)));
  ;}
    break;

  case 43:
#line 254 "lang.y"
    {
    (yyval.c) = (TWhile((yyvsp[(3) - (9)].ra),(yyvsp[(7) - (9)].e),(yyvsp[(9) - (9)].c)));
  ;}
    break;

  case 44:
#line 257 "lang.y"
    {
    (yyval.c) = (TDoWhile((yyvsp[(3) - (9)].ra),(yyvsp[(8) - (9)].e),(yyvsp[(6) - (9)].c)));
  ;}
    break;

  case 45:
#line 260 "lang.y"
    {
    (yyval.c) = (TSwitch((yyvsp[(2) - (5)].e),(yyvsp[(4) - (5)].ca_list)));
  ;}
    break;

  case 46:
#line 265 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(3) - (13)].ra),(yyvsp[(7) - (13)].sc),(yyvsp[(9) - (13)].e),(yyvsp[(11) - (13)].sc),(yyvsp[(13) - (13)].c)));
  ;}
    break;

  case 47:
#line 268 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(3) - (12)].ra),(yyvsp[(7) - (12)].sc),(yyvsp[(9) - (12)].e),NULL,(yyvsp[(12) - (12)].c)));
  ;}
    break;

  case 48:
#line 271 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(3) - (12)].ra),(yyvsp[(7) - (12)].sc),NULL,(yyvsp[(10) - (12)].sc),(yyvsp[(12) - (12)].c)));
  ;}
    break;

  case 49:
#line 274 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(3) - (11)].ra),(yyvsp[(7) - (11)].sc),NULL,NULL,(yyvsp[(11) - (11)].c)));
  ;}
    break;

  case 50:
#line 278 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(3) - (12)].ra),NULL,(yyvsp[(8) - (12)].e),(yyvsp[(10) - (12)].sc),(yyvsp[(12) - (12)].c)));
  ;}
    break;

  case 51:
#line 281 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(3) - (11)].ra),NULL,(yyvsp[(8) - (11)].e),NULL,(yyvsp[(11) - (11)].c)));
  ;}
    break;

  case 52:
#line 284 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(3) - (11)].ra),NULL,NULL,(yyvsp[(9) - (11)].sc),(yyvsp[(11) - (11)].c)));
  ;}
    break;

  case 53:
#line 287 "lang.y"
    {
    (yyval.c) = (TFor((yyvsp[(3) - (10)].ra),NULL,NULL,NULL,(yyvsp[(10) - (10)].c)));
  ;}
    break;

  case 54:
#line 291 "lang.y"
    {
    (yyval.c) = (TFor(NULL,(yyvsp[(3) - (9)].sc),(yyvsp[(5) - (9)].e),(yyvsp[(7) - (9)].sc),(yyvsp[(9) - (9)].c)));
  ;}
    break;

  case 55:
#line 294 "lang.y"
    {
    (yyval.c) = (TFor(NULL,(yyvsp[(3) - (8)].sc),(yyvsp[(5) - (8)].e),NULL,(yyvsp[(8) - (8)].c)));
  ;}
    break;

  case 56:
#line 297 "lang.y"
    {
    (yyval.c) = (TFor(NULL,(yyvsp[(3) - (8)].sc),NULL,(yyvsp[(6) - (8)].sc),(yyvsp[(8) - (8)].c)));
  ;}
    break;

  case 57:
#line 300 "lang.y"
    {
    (yyval.c) = (TFor(NULL,(yyvsp[(3) - (7)].sc),NULL,NULL,(yyvsp[(7) - (7)].c)));
  ;}
    break;

  case 58:
#line 304 "lang.y"
    {
    (yyval.c) = (TFor(NULL,NULL,(yyvsp[(4) - (8)].e),(yyvsp[(6) - (8)].sc),(yyvsp[(8) - (8)].c)));
  ;}
    break;

  case 59:
#line 307 "lang.y"
    {
    (yyval.c) = (TFor(NULL,NULL,(yyvsp[(4) - (7)].e),NULL,(yyvsp[(7) - (7)].c)));
  ;}
    break;

  case 60:
#line 310 "lang.y"
    {
    (yyval.c) = (TFor(NULL,NULL,NULL,(yyvsp[(5) - (7)].sc),(yyvsp[(7) - (7)].c)));
  ;}
    break;

  case 61:
#line 313 "lang.y"
    {
    (yyval.c) = (TFor(NULL,NULL,NULL,NULL,(yyvsp[(6) - (6)].c)));
  ;}
    break;

  case 62:
#line 319 "lang.y"
    {
    (yyval.c) = (TBreak());
  ;}
    break;

  case 63:
#line 322 "lang.y"
    {
    (yyval.c) = (TContinue());
  ;}
    break;

  case 64:
#line 325 "lang.y"
    {
    (yyval.c) = (TReturn((yyvsp[(2) - (3)].e)));
  ;}
    break;

  case 65:
#line 328 "lang.y"
    {
    (yyval.c) = (TReturn(NULL));
  ;}
    break;

  case 66:
#line 331 "lang.y"
    {
  (yyval.c) = NULL;
;}
    break;

  case 67:
#line 337 "lang.y"
    {
    (yyval.sc) = (TComputation((yyvsp[(1) - (1)].e)));
  ;}
    break;

  case 68:
#line 340 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 69:
#line 343 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_ADD_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 70:
#line 346 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_SUB_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 71:
#line 349 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_MUL_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 72:
#line 352 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_DIV_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 73:
#line 355 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_MOD_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 74:
#line 358 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_BAND_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 75:
#line 361 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_BOR_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 76:
#line 364 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_XOR_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 77:
#line 367 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_SHL_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 78:
#line 370 "lang.y"
    {
    (yyval.sc) = (TAsgn(T_SHR_ASSIGN,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 79:
#line 373 "lang.y"
    {
    (yyval.sc) = (TIncDec(T_INC_F,(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 80:
#line 376 "lang.y"
    {
    (yyval.sc) = (TIncDec(T_DEC_F,(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 81:
#line 379 "lang.y"
    {
    (yyval.sc) = (TIncDec(T_INC_B,(yyvsp[(1) - (2)].e)));
  ;}
    break;

  case 82:
#line 382 "lang.y"
    {
    (yyval.sc) = (TIncDec(T_DEC_B,(yyvsp[(1) - (2)].e)));
  ;}
    break;

  case 83:
#line 389 "lang.y"
    {
    (yyval.vd) = (TVarDecl_2((yyvsp[(1) - (2)].t),(yyvsp[(2) - (2)].i)));
  ;}
    break;

  case 84:
#line 395 "lang.y"
    {
    (yyval.vd_l) = (VDLCons((yyvsp[(1) - (1)].vd),VDLNil()));
  ;}
    break;

  case 85:
#line 398 "lang.y"
    {
    (yyval.vd_l) = (VDLCons((yyvsp[(3) - (3)].vd),(yyvsp[(1) - (3)].vd_l)));
  ;}
    break;

  case 86:
#line 405 "lang.y"
    {
    (yyval.e) = (TConst((yyvsp[(1) - (1)].n)));
  ;}
    break;

  case 87:
#line 408 "lang.y"
    {
    (yyval.e) = ((yyvsp[(2) - (3)].e));
  ;}
    break;

  case 88:
#line 411 "lang.y"
    {
    (yyval.e) = (TVar((yyvsp[(1) - (1)].i)));
  ;}
    break;

  case 89:
#line 414 "lang.y"
    {
    (yyval.e) = (TUnop(T_UMINUS,(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 90:
#line 417 "lang.y"
    {
    (yyval.e) = (TUnop(T_UPLUS,(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 91:
#line 420 "lang.y"
    {
    (yyval.e) = (TUnop(T_NOTBOOL,(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 92:
#line 423 "lang.y"
    {
    (yyval.e) = (TUnop(T_NOTINT,(yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 93:
#line 426 "lang.y"
    {
    (yyval.e) = (TBinop(T_PLUS,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 94:
#line 429 "lang.y"
    {
    (yyval.e) = (TBinop(T_MINUS,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 95:
#line 432 "lang.y"
    {
    (yyval.e) = (TBinop(T_MUL,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 96:
#line 435 "lang.y"
    {
    (yyval.e) = (TBinop(T_DIV,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 97:
#line 438 "lang.y"
    {
    (yyval.e) = (TBinop(T_MOD,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 98:
#line 441 "lang.y"
    {
    (yyval.e) = (TBinop(T_LT,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 99:
#line 444 "lang.y"
    {
    (yyval.e) = (TBinop(T_GT,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 100:
#line 447 "lang.y"
    {
    (yyval.e) = (TBinop(T_LE,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 101:
#line 450 "lang.y"
    {
    (yyval.e) = (TBinop(T_GE,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 102:
#line 453 "lang.y"
    {
    (yyval.e) = (TBinop(T_EQ,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 103:
#line 456 "lang.y"
    {
    (yyval.e) = (TBinop(T_NE,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 104:
#line 459 "lang.y"
    {
    (yyval.e) = (TBinop(T_AND,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 105:
#line 462 "lang.y"
    {
    (yyval.e) = (TBinop(T_OR,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 106:
#line 465 "lang.y"
    {
    (yyval.e) = (TBinop(T_BAND,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 107:
#line 468 "lang.y"
    {
    (yyval.e) = (TBinop(T_BOR,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 108:
#line 471 "lang.y"
    {
    (yyval.e) = (TBinop(T_XOR,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 109:
#line 474 "lang.y"
    {
    (yyval.e) = (TBinop(T_SHL,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 110:
#line 477 "lang.y"
    {
    (yyval.e) = (TBinop(T_SHR,(yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].e)));
  ;}
    break;

  case 111:
#line 480 "lang.y"
    {
    (yyval.e) = (TCall((yyvsp[(1) - (4)].i),(yyvsp[(3) - (4)].expr_l)));
  ;}
    break;

  case 112:
#line 483 "lang.y"
    {
    (yyval.e) = (TCall((yyvsp[(1) - (3)].i),ELNil()));
  ;}
    break;

  case 113:
#line 486 "lang.y"
    {
    (yyval.e) = (TSizeofType((yyvsp[(3) - (4)].t)));
  ;}
    break;

  case 114:
#line 489 "lang.y"
    {
    (yyval.e) = (TDeref((yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 115:
#line 492 "lang.y"
    {
    (yyval.e) = (TAddress((yyvsp[(2) - (2)].e)));
  ;}
    break;

  case 116:
#line 495 "lang.y"
    {
    (yyval.e) = (TCast((yyvsp[(2) - (4)].t),(yyvsp[(4) - (4)].e)));
  ;}
    break;

  case 117:
#line 498 "lang.y"
    {
    (yyval.e) = (TIndex((yyvsp[(1) - (4)].e),(yyvsp[(3) - (4)].e)));
  ;}
    break;

  case 118:
#line 501 "lang.y"
    {
    (yyval.e) = (TFieldof((yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].i)));
  ;}
    break;

  case 119:
#line 504 "lang.y"
    {
    (yyval.e) = (TFieldofptr((yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].i)));
  ;}
    break;

  case 120:
#line 510 "lang.y"
    {
    (yyval.expr_l) = (ELCons((yyvsp[(1) - (1)].e),ELNil()));
  ;}
    break;

  case 121:
#line 513 "lang.y"
    {
    (yyval.expr_l) = (ELCons((yyvsp[(1) - (3)].e),(yyvsp[(3) - (3)].expr_l)));
  ;}
    break;

  case 122:
#line 519 "lang.y"
    {
    (yyval.ca_list) = (CLNil());
  ;}
    break;

  case 123:
#line 522 "lang.y"
    {
    (yyval.ca_list) = (CLCons((yyvsp[(1) - (2)].ca),(yyvsp[(2) - (2)].ca_list)));
  ;}
    break;

  case 124:
#line 528 "lang.y"
    {
    (yyval.ca) = (TCase((yyvsp[(2) - (4)].e),(yyvsp[(4) - (4)].c)));
  ;}
    break;

  case 125:
#line 531 "lang.y"
    {
    (yyval.ca) = (TDefault((yyvsp[(3) - (3)].c)));
  ;}
    break;

  case 126:
#line 537 "lang.y"
    {
    (yyval.enum_l) = (ENLCons((yyvsp[(1) - (1)].i),ENLNil()));
  ;}
    break;

  case 127:
#line 540 "lang.y"
    {
    (yyval.enum_l) = (ENLCons((yyvsp[(1) - (3)].i),(yyvsp[(3) - (3)].enum_l)));
  ;}
    break;

  case 128:
#line 546 "lang.y"
    {
    (yyval.afd) = (TAfuncdef((yyvsp[(3) - (8)].v_l),(yyvsp[(5) - (8)].ra),(yyvsp[(7) - (8)].ra)));
  ;}
    break;

  case 129:
#line 549 "lang.y"
    {
    (yyval.afd) = (TAfuncdef(NULL,(yyvsp[(3) - (6)].ra),(yyvsp[(5) - (6)].ra)));
  ;}
    break;

  case 130:
#line 555 "lang.y"
    {
    (yyval.asd) = (TAsepdef((yyvsp[(3) - (9)].i),(yyvsp[(5) - (9)].expr_l),(yyvsp[(8) - (9)].ra)));
  ;}
    break;

  case 131:
#line 558 "lang.y"
    {  
    (yyval.asd) = (TAsepdef((yyvsp[(3) - (9)].i),(yyvsp[(5) - (9)].expr_l),(yyvsp[(8) - (9)].ra)));
  ;}
    break;

  case 132:
#line 564 "lang.y"
    {
    (yyval.fd_l) = (FDLNil());
  ;}
    break;

  case 133:
#line 567 "lang.y"
    {
    (yyval.fd_l) = (FDLCons((yyvsp[(1) - (2)].fd),(yyvsp[(2) - (2)].fd_l)));
  ;}
    break;

  case 134:
#line 573 "lang.y"
    {
    (yyval.fd) = (TFieldDec((yyvsp[(1) - (3)].t),(yyvsp[(2) - (3)].i)));
  ;}
    break;

  case 135:
#line 579 "lang.y"
    {
    (yyval.v_l) = (VLNil());
  ;}
    break;

  case 136:
#line 582 "lang.y"
    {
    (yyval.v_l) = (VLCons((yyvsp[(1) - (2)].i),(yyvsp[(2) - (2)].v_l)));
  ;}
    break;

  case 137:
#line 588 "lang.y"
    {
    (yyval.ra_list) = (RALCons((yyvsp[(1) - (1)].ra),RALNil()));
  ;}
    break;

  case 138:
#line 591 "lang.y"
    {
    (yyval.ra_list) = (RALCons((yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra_list)));
  ;}
    break;

  case 139:
#line 597 "lang.y"
    {
    (yyval.ra) = ((yyvsp[(2) - (3)].ra));
  ;}
    break;

  case 140:
#line 600 "lang.y"
    {
    (yyval.ra) = (RAConst((yyvsp[(1) - (1)].n)));
  ;}
    break;

  case 141:
#line 603 "lang.y"
    {
    (yyval.ra) = (RAVar((yyvsp[(1) - (1)].i)));
  ;}
    break;

  case 142:
#line 606 "lang.y"
    {
    (yyval.ra) = (RAVar((yyvsp[(1) - (1)].i)));
  ;}
    break;

  case 143:
#line 609 "lang.y"
    {
    (yyval.ra) = (RACall((yyvsp[(1) - (4)].i),(yyvsp[(3) - (4)].ra_list)));
  ;}
    break;

  case 144:
#line 612 "lang.y"
    {
    (yyval.ra) = (RABinop(T_PLUS,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 145:
#line 615 "lang.y"
    {
    (yyval.ra) = (RABinop(T_MINUS,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 146:
#line 618 "lang.y"
    {
    (yyval.ra) = (RABinop(T_MUL,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 147:
#line 621 "lang.y"
    {
    (yyval.ra) = (RABinop(T_DIV,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 148:
#line 624 "lang.y"
    {
    (yyval.ra) = (RABinop(T_MOD,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 149:
#line 627 "lang.y"
    {
    (yyval.ra) = (RABinop(T_LT,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 150:
#line 630 "lang.y"
    {
    (yyval.ra) = (RABinop(T_GT,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 151:
#line 633 "lang.y"
    {
    (yyval.ra) = (RABinop(T_LE,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 152:
#line 636 "lang.y"
    {
    (yyval.ra) = (RABinop(T_GE,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 153:
#line 639 "lang.y"
    {
    (yyval.ra) = (RABinop(T_EQ,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 154:
#line 642 "lang.y"
    {
    (yyval.ra) = (RABinop(T_NE,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 155:
#line 645 "lang.y"
    {
    (yyval.ra) = (RABinop(T_AND,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 156:
#line 648 "lang.y"
    {
    (yyval.ra) = (RABinop(T_OR,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 157:
#line 651 "lang.y"
    {
    (yyval.ra) = (RABinop(T_BAND,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 158:
#line 654 "lang.y"
    {
    (yyval.ra) = (RABinop(T_BOR,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 159:
#line 657 "lang.y"
    {
    (yyval.ra) = (RABinop(T_XOR,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 160:
#line 660 "lang.y"
    {
    (yyval.ra) = (RABinop(T_SHL,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 161:
#line 663 "lang.y"
    {
    (yyval.ra) = (RABinop(T_SHR,(yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].ra)));
  ;}
    break;

  case 162:
#line 666 "lang.y"
    {
    (yyval.ra) = (RAUnop(T_UMINUS,(yyvsp[(2) - (2)].ra)));
  ;}
    break;

  case 163:
#line 669 "lang.y"
    {
    (yyval.ra) = (RAUnop(T_UPLUS,(yyvsp[(2) - (2)].ra)));
  ;}
    break;

  case 164:
#line 672 "lang.y"
    {
    (yyval.ra) = (RAUnop(T_NOTBOOL,(yyvsp[(2) - (2)].ra)));
  ;}
    break;

  case 165:
#line 675 "lang.y"
    {
    (yyval.ra) = (RAUnop(T_NOTINT,(yyvsp[(2) - (2)].ra)));
  ;}
    break;

  case 166:
#line 678 "lang.y"
    {
    (yyval.ra) = (RADeref((yyvsp[(2) - (2)].ra)));
  ;}
    break;

  case 167:
#line 681 "lang.y"
    {
    (yyval.ra) = (RAAddress((yyvsp[(2) - (2)].ra)));
  ;}
    break;

  case 168:
#line 684 "lang.y"
    {
    (yyval.ra) = (RACast((yyvsp[(2) - (4)].t),(yyvsp[(4) - (4)].ra)));
  ;}
    break;

  case 169:
#line 687 "lang.y"
    {
    (yyval.ra) = (RAIndex((yyvsp[(1) - (4)].ra),(yyvsp[(3) - (4)].ra)));
  ;}
    break;

  case 170:
#line 690 "lang.y"
    {
    (yyval.ra) = (RAFieldof((yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].i)));
  ;}
    break;

  case 171:
#line 693 "lang.y"
    {
    (yyval.ra) = (RAFieldofptr((yyvsp[(1) - (3)].ra),(yyvsp[(3) - (3)].i)));
  ;}
    break;

  case 172:
#line 696 "lang.y"
    {
    (yyval.ra) = (RAQfop(A_FORALL,(yyvsp[(2) - (4)].i),(yyvsp[(4) - (4)].ra)));
  ;}
    break;

  case 173:
#line 699 "lang.y"
    {
    (yyval.ra) = (RAQfop(A_EXISTS,(yyvsp[(2) - (4)].i),(yyvsp[(4) - (4)].ra)));
  ;}
    break;


/* Line 1267 of yacc.c.  */
#line 3415 "parser.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse look-ahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 706 "lang.y"



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
