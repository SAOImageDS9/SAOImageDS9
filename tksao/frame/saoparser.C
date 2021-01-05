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
#define YYPURE 1

/* Using locations.  */
#define YYLSP_NEEDED 0

/* Substitute the variable and function names.  */
#define yyparse saoparse
#define yylex   saolex
#define yyerror saoerror
#define yylval  saolval
#define yychar  saochar
#define yydebug saodebug
#define yynerrs saonerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     REAL = 259,
     STRING = 260,
     EOF_ = 261,
     ANNULUS_ = 262,
     BOX_ = 263,
     CIRCLE_ = 264,
     DEBUG_ = 265,
     ELLIPSE_ = 266,
     N_ = 267,
     OFF_ = 268,
     ON_ = 269,
     POINT_ = 270,
     POLYGON_ = 271,
     ROTBOX_ = 272,
     VERSION_ = 273
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define EOF_ 261
#define ANNULUS_ 262
#define BOX_ 263
#define CIRCLE_ 264
#define DEBUG_ 265
#define ELLIPSE_ 266
#define N_ 267
#define OFF_ 268
#define ON_ 269
#define POINT_ 270
#define POLYGON_ 271
#define ROTBOX_ 272
#define VERSION_ 273




/* Copy the first part of user declarations.  */
#line 10 "frame/saoparser.Y"

#define YYDEBUG 1

#define FITSPTR (fr->findFits())
#define DISCARD_(x) {yyclearin; saoDiscard(x);}

#include <math.h>
#include <string.h>
#include <iostream>

#include "base.h"
#include "fitsimage.h"
#include "basemarker.h"

#undef yyFlexLexer
#define yyFlexLexer saoFlexLexer
#include <FlexLexer.h>

extern int saolex(void*, saoFlexLexer*);
extern void saoerror(Base*, saoFlexLexer*, const char*);
extern void saoDiscard(int);

static unsigned short globalProps;
static unsigned short localProps;

static char color[32];
static int dash[] = {8,3};
static int fill_ =0;
static const char *font = "helvetica 10 normal roman";
static const char *text = "";

static char localComment[80];

static List<Vertex> polylist;
static List<Tag> taglist;
static List<CallBack> cblist;

static double aAnnuli[MAXANNULI];
static Vector aVector[MAXANNULI];
static int aNum;
static int aStatus;
static Vector aCenter;
static double aAngle;
static unsigned short aProps;
static char aComment[80];

static void setProps(unsigned short* props, unsigned short prop, int value);



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
#line 60 "frame/saoparser.Y"
{
#define SAOBUFSIZE 2048
  double real;
  int integer;
  char str[SAOBUFSIZE];
  double vector[3];
}
/* Line 193 of yacc.c.  */
#line 198 "frame/saoparser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 211 "frame/saoparser.C"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   160

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  30
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNRULES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   273

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      19,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    28,     2,    29,     2,     2,    27,     2,
      22,    23,     2,    25,    21,    26,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    20,
       2,    24,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     9,    13,    16,    17,    20,    22,
      26,    28,    30,    32,    34,    36,    38,    40,    42,    43,
      45,    46,    48,    49,    51,    52,    54,    56,    58,    62,
      66,    70,    71,    72,    73,    75,    77,    85,    95,    96,
     109,   121,   131,   150,   160,   170,   189,   195,   196,   203,
     207,   209,   211,   215,   217,   219,   220,   221,   225,   227,
     228
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      31,     0,    -1,    -1,    32,    47,    33,    57,    -1,    33,
      34,    35,    -1,    34,    35,    -1,    -1,    10,    37,    -1,
      18,    -1,    48,    49,    50,    -1,    58,    -1,    19,    -1,
      20,    -1,     6,    -1,     4,    -1,     3,    -1,    14,    -1,
      13,    -1,    -1,    21,    -1,    -1,    22,    -1,    -1,    23,
      -1,    -1,    42,    -1,    36,    -1,    36,    -1,    36,    38,
      36,    -1,    12,    24,     3,    -1,    36,    38,    36,    -1,
      -1,    -1,    -1,    25,    -1,    26,    -1,     9,    39,    46,
      38,    43,    40,    60,    -1,     7,    39,    46,    38,    43,
      38,    43,    40,    60,    -1,    -1,     7,    39,    46,    38,
      43,    38,    43,    38,    51,    55,    40,    60,    -1,     7,
      39,    46,    38,    43,    38,    43,    38,    45,    40,    60,
      -1,    11,    39,    46,    38,    44,    38,    41,    40,    60,
      -1,    11,    39,    46,    38,    44,    38,    41,    40,    27,
      28,    11,    39,    46,    38,    44,    38,    41,    40,    -1,
       8,    39,    46,    38,    44,    38,    41,    40,    60,    -1,
      17,    39,    46,    38,    44,    38,    41,    40,    60,    -1,
       8,    39,    46,    38,    44,    38,    41,    40,    27,    28,
       8,    39,    46,    38,    44,    38,    41,    40,    -1,    15,
      39,    46,    40,    60,    -1,    -1,    16,    52,    39,    53,
      40,    60,    -1,    53,    38,    54,    -1,    54,    -1,    46,
      -1,    55,    38,    56,    -1,    56,    -1,    43,    -1,    -1,
      -1,    29,    59,     5,    -1,    57,    -1,    -1,    29,    61,
       5,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    98,    98,    98,   103,   104,   107,   108,   109,   110,
     111,   114,   115,   116,   119,   120,   123,   124,   127,   128,
     131,   132,   135,   136,   139,   140,   143,   146,   149,   158,
     161,   170,   178,   186,   187,   188,   191,   194,   198,   198,
     207,   213,   227,   234,   248,   251,   258,   262,   262,   267,
     268,   271,   274,   275,   278,   282,   309,   309,   312,   313,
     313
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "REAL", "STRING", "EOF_",
  "ANNULUS_", "BOX_", "CIRCLE_", "DEBUG_", "ELLIPSE_", "N_", "OFF_", "ON_",
  "POINT_", "POLYGON_", "ROTBOX_", "VERSION_", "'\\n'", "';'", "','",
  "'('", "')'", "'='", "'+'", "'-'", "'&'", "'!'", "'#'", "$accept",
  "start", "@1", "commands", "command", "terminator", "numeric", "debug",
  "sp", "bp", "ep", "optangle", "angle", "value", "vvalue", "numberof",
  "coord", "initGlobal", "initLocal", "include", "shape", "@2", "@3",
  "polyNodes", "polyNode", "aRads", "aRad", "processAnnulus",
  "generalComment", "@4", "shapeComment", "@5", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,    10,
      59,    44,    40,    41,    61,    43,    45,    38,    33,    35
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    30,    32,    31,    33,    33,    34,    34,    34,    34,
      34,    35,    35,    35,    36,    36,    37,    37,    38,    38,
      39,    39,    40,    40,    41,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    49,    49,    50,    50,    51,    50,
      50,    50,    50,    50,    50,    50,    50,    52,    50,    53,
      53,    54,    55,    55,    56,    57,    59,    58,    60,    61,
      60
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     3,     2,     0,     2,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       0,     1,     0,     1,     0,     1,     1,     1,     3,     3,
       3,     0,     0,     0,     1,     1,     7,     9,     0,    12,
      11,     9,    18,     9,     9,    18,     5,     0,     6,     3,
       1,     1,     3,     1,     1,     0,     0,     3,     1,     0,
       4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,    31,     1,    32,     0,     8,    56,    32,     0,
      33,    10,    17,    16,     7,     0,     0,     3,    13,    11,
      12,     5,    34,    35,     0,    57,     4,    20,    20,    20,
      20,    20,    47,    20,     9,    21,     0,     0,     0,     0,
       0,    20,     0,    15,    14,    18,    18,    18,    18,    18,
      22,     0,    18,    19,     0,     0,     0,     0,     0,    23,
      55,    51,    22,    50,     0,    30,    27,    18,    18,    18,
      22,    18,    59,    58,    46,     0,    55,    18,     0,     0,
      24,    55,    24,     0,    49,    48,    24,    22,    28,    26,
      22,    25,    36,    22,    55,    22,    38,    55,    55,    55,
      60,    55,     0,    22,     0,    37,     0,    43,     0,    41,
      44,     0,    55,    54,    22,    53,     0,     0,    29,    40,
       0,    55,    20,    20,    52,    39,     0,     0,    18,    18,
       0,     0,    18,    18,    24,    24,    22,    22,    45,    42
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     8,     9,    21,    45,    14,    54,    36,
      60,    90,    91,   113,    69,   103,    61,     4,    10,    24,
      34,   104,    41,    62,    63,   114,   115,    73,    11,    15,
      74,    83
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -72
static const yytype_int16 yypact[] =
{
     -72,    21,   -72,   -72,   119,    17,   -72,   -72,   116,    16,
      31,   -72,   -72,   -72,   -72,    19,    16,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,   135,   -72,   -72,    10,    10,    10,
      10,    10,   -72,    10,   -72,   -72,    69,    69,    69,    69,
      69,    10,    69,   -72,   -72,    20,    20,    20,    20,    20,
      26,    69,    20,   -72,    69,    69,    69,    69,    69,   -72,
      33,   -72,    56,   -72,    69,   -72,   -72,    20,    20,    20,
      26,    20,   -72,   -72,   -72,    69,    33,    20,    69,    69,
      69,    33,    69,    61,   -72,   -72,    69,   137,   -72,   -72,
      26,   -72,   -72,    26,   -72,    26,    58,    33,    -2,    -1,
     -72,    33,    52,    26,    69,   -72,    50,   -72,    53,   -72,
     -72,    79,    33,   -72,    56,   -72,    75,    73,   -72,   -72,
      69,    33,    10,    10,   -72,   -72,    69,    69,    20,    20,
      69,    69,    20,    20,    69,    69,    26,    26,   -72,   -72
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -72,   -72,   -72,   -72,    78,    71,   -11,   -72,   -29,   -28,
      18,   -71,   -72,   -41,    -3,   -72,   -30,   -72,   -72,   -72,
     -72,   -72,   -72,   -72,    14,   -72,   -22,    -4,   -72,   -72,
     -47,   -72
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -56
static const yytype_int16 yytable[] =
{
      37,    38,    39,    40,    17,    42,    46,    47,    48,    49,
      50,    93,    52,    51,    67,    95,    70,    55,    56,    57,
      58,     3,    18,    64,    25,   106,   108,    72,    72,    85,
      12,    13,    35,    75,    92,    19,    20,    87,    78,    79,
      80,    53,    82,    65,    66,    68,    66,    68,    86,    59,
     105,   107,   109,    68,   110,    71,    22,    23,    96,   -18,
     -18,    77,    72,   136,   137,   119,    94,    66,    88,    89,
     102,    89,    43,    44,   125,    89,   111,    53,   116,    59,
      76,   117,   118,   122,   123,   120,    16,    26,    81,    84,
     100,     0,     0,    66,   126,   127,   128,   129,   124,   130,
     131,     0,     0,   134,   135,    97,     0,     0,    98,    66,
       0,    99,     0,   101,     0,     0,   -55,     0,     0,    68,
      68,   112,    -6,    89,    89,    -6,     5,   132,   133,     5,
       0,     0,   121,     0,     6,    -6,    -6,     6,    -6,    -6,
     -18,   -18,    27,    28,    29,     7,    30,     0,     7,   -18,
      31,    32,    33,     0,   138,   139,     0,     0,    53,     0,
      59
};

static const yytype_int16 yycheck[] =
{
      28,    29,    30,    31,     8,    33,    36,    37,    38,    39,
      40,    82,    42,    41,    55,    86,    57,    46,    47,    48,
      49,     0,     6,    52,     5,    27,    27,    29,    29,    76,
      13,    14,    22,    62,    81,    19,    20,    78,    67,    68,
      69,    21,    71,    54,    55,    56,    57,    58,    77,    23,
      97,    98,    99,    64,   101,    58,    25,    26,    87,     3,
       4,    64,    29,   134,   135,   112,     5,    78,    79,    80,
      12,    82,     3,     4,   121,    86,    24,    21,    28,    23,
      62,    28,     3,     8,    11,   114,     8,    16,    70,    75,
      94,    -1,    -1,   104,   122,   123,   126,   127,   120,   128,
     129,    -1,    -1,   132,   133,    87,    -1,    -1,    90,   120,
      -1,    93,    -1,    95,    -1,    -1,     0,    -1,    -1,   130,
     131,   103,     6,   134,   135,     6,    10,   130,   131,    10,
      -1,    -1,   114,    -1,    18,    19,    20,    18,    19,    20,
       3,     4,     7,     8,     9,    29,    11,    -1,    29,    12,
      15,    16,    17,    -1,   136,   137,    -1,    -1,    21,    -1,
      23
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    32,     0,    47,    10,    18,    29,    33,    34,
      48,    58,    13,    14,    37,    59,    34,    57,     6,    19,
      20,    35,    25,    26,    49,     5,    35,     7,     8,     9,
      11,    15,    16,    17,    50,    22,    39,    39,    39,    39,
      39,    52,    39,     3,     4,    36,    46,    46,    46,    46,
      46,    39,    46,    21,    38,    38,    38,    38,    38,    23,
      40,    46,    53,    54,    38,    36,    36,    43,    36,    44,
      43,    44,    29,    57,    60,    38,    40,    44,    38,    38,
      38,    40,    38,    61,    54,    60,    38,    43,    36,    36,
      41,    42,    60,    41,     5,    41,    38,    40,    40,    40,
      57,    40,    12,    45,    51,    60,    27,    60,    27,    60,
      60,    24,    40,    43,    55,    56,    28,    28,     3,    60,
      38,    40,     8,    11,    56,    60,    39,    39,    46,    46,
      38,    38,    44,    44,    38,    38,    41,    41,    40,    40
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
      yyerror (fr, ll, YY_("syntax error: cannot back up")); \
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
# define YYLEX yylex (&yylval, YYLEX_PARAM)
#else
# define YYLEX yylex (&yylval, ll)
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
		  Type, Value, fr, ll); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, saoFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    saoFlexLexer* ll;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (fr);
  YYUSE (ll);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, saoFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    saoFlexLexer* ll;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, Base* fr, saoFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, fr, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    Base* fr;
    saoFlexLexer* ll;
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
		       		       , fr, ll);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, fr, ll); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Base* fr, saoFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, fr, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    Base* fr;
    saoFlexLexer* ll;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (fr);
  YYUSE (ll);

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
int yyparse (Base* fr, saoFlexLexer* ll);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */






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
yyparse (Base* fr, saoFlexLexer* ll)
#else
int
yyparse (fr, ll)
    Base* fr;
    saoFlexLexer* ll;
#endif
#endif
{
  /* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;

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
#line 98 "frame/saoparser.Y"
    {
  strcpy(color, fr->markerColor());
 ;}
    break;

  case 8:
#line 109 "frame/saoparser.Y"
    {cerr << "SAOimage" << endl;;}
    break;

  case 13:
#line 116 "frame/saoparser.Y"
    {YYACCEPT;;}
    break;

  case 14:
#line 119 "frame/saoparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 15:
#line 120 "frame/saoparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 16:
#line 123 "frame/saoparser.Y"
    {yydebug=1;;}
    break;

  case 17:
#line 124 "frame/saoparser.Y"
    {yydebug=0;;}
    break;

  case 24:
#line 139 "frame/saoparser.Y"
    {(yyval.real) = 0;;}
    break;

  case 25:
#line 140 "frame/saoparser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 26:
#line 143 "frame/saoparser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 27:
#line 146 "frame/saoparser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::IMAGE);;}
    break;

  case 28:
#line 150 "frame/saoparser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 29:
#line 158 "frame/saoparser.Y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer);;}
    break;

  case 30:
#line 162 "frame/saoparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 31:
#line 170 "frame/saoparser.Y"
    {
	  globalProps =
	    Marker::SELECT | Marker::EDIT | Marker::MOVE |
	    Marker::ROTATE | Marker::DELETE | Marker::HIGHLITE |
	    Marker::INCLUDE | Marker::SOURCE;
	;}
    break;

  case 32:
#line 178 "frame/saoparser.Y"
    {
	    // reset maperr flag
	    maperr =0;

	    localProps = globalProps;
	  ;}
    break;

  case 33:
#line 186 "frame/saoparser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 34:
#line 187 "frame/saoparser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 35:
#line 188 "frame/saoparser.Y"
    {setProps(&localProps, Marker::INCLUDE, 0);;}
    break;

  case 36:
#line 192 "frame/saoparser.Y"
    {fr->createCircleCmd(Vector((yyvsp[(3) - (7)].vector)), (yyvsp[(5) - (7)].real), fill_,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);;}
    break;

  case 37:
#line 195 "frame/saoparser.Y"
    {fr->createAnnulusCmd(Vector((yyvsp[(3) - (9)].vector)),
	    (yyvsp[(5) - (9)].real),(yyvsp[(7) - (9)].real),1,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);;}
    break;

  case 38:
#line 198 "frame/saoparser.Y"
    {aNum=2;;}
    break;

  case 39:
#line 200 "frame/saoparser.Y"
    {
	  aAnnuli[0] = (yyvsp[(5) - (12)].real);
	  aAnnuli[1] = (yyvsp[(7) - (12)].real);
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (12)].vector)),
	    aNum,aAnnuli,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);
	;}
    break;

  case 40:
#line 208 "frame/saoparser.Y"
    {fr->createAnnulusCmd(Vector((yyvsp[(3) - (11)].vector)),
	    (yyvsp[(5) - (11)].real),(yyvsp[(7) - (11)].real),(yyvsp[(9) - (11)].integer),
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);;}
    break;

  case 41:
#line 214 "frame/saoparser.Y"
    {
	  // for ellipse annulus
	  aStatus = 1;
	  aCenter = Vector((yyvsp[(3) - (9)].vector));
	  aAngle = (yyvsp[(7) - (9)].real);
	  aVector[0] = Vector((yyvsp[(5) - (9)].vector));
	  aNum = 1;
	  strncpy(aComment,localComment,80);
	  aProps = localProps;

	  fr->createEllipseCmd(Vector((yyvsp[(3) - (9)].vector)), Vector((yyvsp[(5) - (9)].vector)), (yyvsp[(7) - (9)].real), fill_,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);
	;}
    break;

  case 42:
#line 229 "frame/saoparser.Y"
    {	
	  aStatus = 2;
	  aVector[aNum++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 43:
#line 235 "frame/saoparser.Y"
    {
	  // for box annulus
	  aStatus = 3;
	  aCenter = Vector((yyvsp[(3) - (9)].vector));
	  aAngle = (yyvsp[(7) - (9)].real);
	  aVector[0] = Vector((yyvsp[(5) - (9)].vector));
	  aNum = 1;
	  strncpy(aComment,localComment,80);
	  aProps = localProps;

	  fr->createBoxCmd(Vector((yyvsp[(3) - (9)].vector)), Vector((yyvsp[(5) - (9)].vector)), (yyvsp[(7) - (9)].real), fill_,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);
	;}
    break;

  case 44:
#line 249 "frame/saoparser.Y"
    {fr->createBoxCmd(Vector((yyvsp[(3) - (9)].vector)), Vector((yyvsp[(5) - (9)].vector)), (yyvsp[(7) - (9)].real), fill_,
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);;}
    break;

  case 45:
#line 253 "frame/saoparser.Y"
    {	
	  aStatus = 4;
	  aVector[aNum++] = Vector((yyvsp[(5) - (18)].vector));
	;}
    break;

  case 46:
#line 259 "frame/saoparser.Y"
    {fr->createPointCmd(Vector((yyvsp[(3) - (5)].vector)), Point::BOXCIRCLE, POINTSIZE, 
	    color,dash,1,font,text,localProps,localComment,taglist,cblist);;}
    break;

  case 47:
#line 262 "frame/saoparser.Y"
    {polylist.deleteAll();;}
    break;

  case 48:
#line 263 "frame/saoparser.Y"
    {fr->createPolygonCmd(polylist, fill_,
	      color,dash,1,font,text,localProps,localComment,taglist,cblist);;}
    break;

  case 51:
#line 271 "frame/saoparser.Y"
    {polylist.append(new Vertex((yyvsp[(1) - (1)].vector)));;}
    break;

  case 54:
#line 278 "frame/saoparser.Y"
    {aAnnuli[aNum++] = (yyvsp[(1) - (1)].real);;}
    break;

  case 55:
#line 282 "frame/saoparser.Y"
    {
	  switch (aStatus) {
	  case 0: // do nothing
	    break;
	  case 1: // we found just an ellipse, do nothing
	    break;
	  case 2: // ok we have an ellipse annulus
	    fr->markerDeleteLastCmd(); // delete the previous ellipse
	    fr->createEllipseAnnulusCmd(aCenter,
	      aNum,aVector,
	      aAngle,
	      color,dash,1,font,text,aProps,aComment,taglist,cblist);
	    break;
	  case 3: // we found just a box, do nothing
	    break;
	  case 4: // ok, we have a box annulus
	    fr->markerDeleteLastCmd(); // delete the previous box
	    fr->createBoxAnnulusCmd(aCenter,
	      aNum,aVector,
	      aAngle,
	      color,dash,1,font,text,aProps,aComment,taglist,cblist);
	    break;
	  }
	  aStatus = 0;
	;}
    break;

  case 56:
#line 309 "frame/saoparser.Y"
    {DISCARD_(1);;}
    break;

  case 59:
#line 313 "frame/saoparser.Y"
    {DISCARD_(0);;}
    break;

  case 60:
#line 314 "frame/saoparser.Y"
    {strncpy(localComment,(yyvsp[(3) - (4)].str),80);;}
    break;


/* Line 1267 of yacc.c.  */
#line 1818 "frame/saoparser.C"
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
      yyerror (fr, ll, YY_("syntax error"));
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
	    yyerror (fr, ll, yymsg);
	  }
	else
	  {
	    yyerror (fr, ll, YY_("syntax error"));
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
		      yytoken, &yylval, fr, ll);
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
		  yystos[yystate], yyvsp, fr, ll);
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
  yyerror (fr, ll, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, fr, ll);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, fr, ll);
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


#line 317 "frame/saoparser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

