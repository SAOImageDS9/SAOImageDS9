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
#define yyparse ciaoparse
#define yylex   ciaolex
#define yyerror ciaoerror
#define yylval  ciaolval
#define yychar  ciaochar
#define yydebug ciaodebug
#define yynerrs ciaonerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     REAL = 259,
     ANGDEGREE = 260,
     ARCMINUTE = 261,
     ARCSECOND = 262,
     SEXSTR = 263,
     HMSSTR = 264,
     DMSSTR = 265,
     EOF_ = 266,
     ANNULUS_ = 267,
     BOX_ = 268,
     CIRCLE_ = 269,
     DEBUG_ = 270,
     ELLIPSE_ = 271,
     FIELD_ = 272,
     OFF_ = 273,
     ON_ = 274,
     PIE_ = 275,
     POINT_ = 276,
     POLYGON_ = 277,
     RECTANGLE_ = 278,
     REGION_ = 279,
     ROTBOX_ = 280,
     SECTOR_ = 281,
     VERSION_ = 282
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define ANGDEGREE 260
#define ARCMINUTE 261
#define ARCSECOND 262
#define SEXSTR 263
#define HMSSTR 264
#define DMSSTR 265
#define EOF_ 266
#define ANNULUS_ 267
#define BOX_ 268
#define CIRCLE_ 269
#define DEBUG_ 270
#define ELLIPSE_ 271
#define FIELD_ 272
#define OFF_ 273
#define ON_ 274
#define PIE_ 275
#define POINT_ 276
#define POLYGON_ 277
#define RECTANGLE_ 278
#define REGION_ 279
#define ROTBOX_ 280
#define SECTOR_ 281
#define VERSION_ 282




/* Copy the first part of user declarations.  */
#line 10 "frame/ciaoparser.Y"

#define YYDEBUG 1

#define FITSPTR (fr->findFits())

#include <math.h>
#include <string.h>
#include <iostream>

#include "base.h"
#include "fitsimage.h"
#include "basemarker.h"

#undef yyFlexLexer
#define yyFlexLexer ciaoFlexLexer
#include <FlexLexer.h>

extern int ciaolex(void*, ciaoFlexLexer*);
extern void ciaoerror(Base*, ciaoFlexLexer*, const char*);

static char color[32];
static int dash[] = {8,3};
static int fill_ =0;
static const char *font = "helvetica 10 normal roman";
static const char *text = "";
static unsigned short props;

static List<Vertex> polylist;
static List<Tag> taglist;
static List<CallBack> cblist;

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
#line 44 "frame/ciaoparser.Y"
{
#define CIAOBUFSIZE 2048
  double real;
  int integer;
  char str[CIAOBUFSIZE];
  double vector[3];
}
/* Line 193 of yacc.c.  */
#line 200 "frame/ciaoparser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 213 "frame/ciaoparser.C"

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
#define YYLAST   148

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNRULES -- Number of states.  */
#define YYNSTATES  135

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   282

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      28,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    34,     2,     2,     2,     2,    30,     2,
      36,    37,    29,    32,    35,    33,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    31,     2,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,    11,    14,    15,    18,    20,
      24,    26,    28,    30,    31,    33,    35,    37,    39,    41,
      44,    46,    48,    50,    52,    54,    56,    58,    60,    61,
      63,    65,    67,    69,    71,    75,    79,    83,    87,    89,
      91,    93,    97,   101,   105,   109,   117,   123,   126,   132,
     140,   143,   155,   159,   160,   165,   171,   174,   177,   185,
     192,   196,   198
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      39,     0,    -1,    -1,    40,    41,    -1,    41,    42,    43,
      -1,    42,    43,    -1,    -1,    15,    46,    -1,    27,    -1,
      50,    44,    58,    -1,    49,    -1,    28,    -1,    11,    -1,
      -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    29,    -1,    34,    -1,     4,    -1,     3,    -1,
      19,    -1,    18,    -1,    35,    -1,    36,    -1,    37,    -1,
      -1,    45,    -1,    45,    -1,     5,    -1,     6,    -1,     7,
      -1,    45,    47,    45,    -1,     5,    47,     5,    -1,     6,
      47,     6,    -1,     7,    47,     7,    -1,     8,    -1,     9,
      -1,    10,    -1,    45,    47,    45,    -1,    54,    47,    54,
      -1,    55,    47,    56,    -1,     5,    47,     5,    -1,    12,
      48,    57,    47,    52,    47,    52,    -1,    13,    48,    57,
      47,    53,    -1,    13,    60,    -1,    14,    48,    57,    47,
      52,    -1,    16,    48,    57,    47,    53,    47,    51,    -1,
      17,    48,    -1,    20,    48,    57,    47,    52,    47,    52,
      47,    51,    47,    51,    -1,    21,    48,    57,    -1,    -1,
      22,    59,    48,    61,    -1,    23,    48,    57,    47,    57,
      -1,    24,    48,    -1,    25,    60,    -1,    26,    48,    57,
      47,    51,    47,    51,    -1,    48,    57,    47,    53,    47,
      51,    -1,    61,    47,    62,    -1,    62,    -1,    57,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,    94,    99,   100,   103,   104,   105,   106,
     109,   110,   111,   114,   115,   116,   117,   118,   119,   120,
     121,   124,   125,   128,   129,   132,   135,   138,   141,   152,
     155,   156,   157,   158,   161,   168,   175,   182,   191,   194,
     197,   200,   207,   214,   221,   230,   235,   240,   241,   246,
     251,   252,   257,   262,   262,   267,   274,   275,   276,   279,
     286,   287,   290
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "REAL", "ANGDEGREE", "ARCMINUTE",
  "ARCSECOND", "SEXSTR", "HMSSTR", "DMSSTR", "EOF_", "ANNULUS_", "BOX_",
  "CIRCLE_", "DEBUG_", "ELLIPSE_", "FIELD_", "OFF_", "ON_", "PIE_",
  "POINT_", "POLYGON_", "RECTANGLE_", "REGION_", "ROTBOX_", "SECTOR_",
  "VERSION_", "'\\n'", "'*'", "'&'", "'|'", "'+'", "'-'", "'!'", "','",
  "'('", "')'", "$accept", "start", "@1", "commands", "command",
  "terminator", "include", "numeric", "debug", "sp", "bp", "ep", "init",
  "angle", "value", "vvalue", "sexagesimal", "hms", "dms", "coord",
  "shape", "@2", "rotbox", "polyNodes", "polyNode", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    10,    42,
      38,   124,    43,    45,    33,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    38,    40,    39,    41,    41,    42,    42,    42,    42,
      43,    43,    43,    44,    44,    44,    44,    44,    44,    44,
      44,    45,    45,    46,    46,    47,    48,    49,    50,    51,
      52,    52,    52,    52,    53,    53,    53,    53,    54,    55,
      56,    57,    57,    57,    57,    58,    58,    58,    58,    58,
      58,    58,    58,    59,    58,    58,    58,    58,    58,    60,
      61,    61,    62
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     2,     0,     2,     1,     3,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     1,     1,
       1,     3,     3,     3,     3,     7,     5,     2,     5,     7,
       2,    11,     3,     0,     4,     5,     2,     2,     7,     6,
       3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,    28,     1,     0,     8,    28,     0,    13,    24,
      23,     7,     0,    12,    11,    27,     5,    10,    14,    15,
      16,    17,    18,    20,     0,     4,    19,     0,     0,     0,
       0,     0,     0,     0,    53,     0,     0,     0,     0,     9,
      26,     0,     0,    47,     0,     0,    50,     0,     0,     0,
       0,    56,     0,    57,     0,    22,    21,     0,    38,    39,
       0,     0,     0,     0,     0,     0,     0,     0,    52,     0,
       0,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    62,    54,    61,     0,     0,     0,    44,
      41,    42,    40,    43,    31,    32,    33,    30,     0,     0,
       0,     0,     0,    46,    48,     0,     0,     0,    55,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      60,     0,    45,    35,    36,    37,    34,    59,    49,     0,
      58,     0,     0,     0,    51
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     2,     6,     7,    16,    24,    60,    11,   117,
      41,    17,     8,   111,    98,   103,    61,    62,    93,    83,
      39,    49,    43,    84,    85
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -71
static const yytype_int16 yypact[] =
{
     -71,    12,    49,   -71,   -17,   -71,    73,    59,   104,   -71,
     -71,   -71,    59,   -71,   -71,   -71,   -71,   -71,   -71,   -71,
     -71,   -71,   -71,   -13,   106,   -71,   -71,   -12,   -12,   -12,
     -12,   -12,   -12,   -12,   -71,   -12,   -12,   -12,   -12,   -71,
     -71,    31,    31,   -71,    31,    31,   -71,    31,    31,   -12,
      31,   -71,    31,   -71,    31,   -71,   -71,   -16,   -71,   -71,
     -16,   -16,   -16,   -16,   -16,   -16,   -16,   -16,   -71,    31,
     -16,   -16,   -16,   -71,    21,    18,    15,    23,   136,   141,
     136,   141,   136,   -71,   -16,   -71,    31,   141,    18,   -71,
     -71,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -16,   -16,
     -16,   -16,   -16,   -16,   -71,   -16,   -16,    31,   -71,   -16,
     -71,   -16,   136,    41,    45,    40,    18,    18,    18,   136,
     -71,    18,   -71,   -71,   -71,   -71,   -71,   -71,   -71,   -16,
     -71,    18,   -16,    18,   -71
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -71,   -71,   -71,   -71,    68,    77,   -71,   -50,   -71,   -57,
      76,   -71,   -71,   -39,   -62,   -70,     4,   -71,   -71,    11,
     -71,   -71,    48,   -71,   -14
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -7
static const yytype_int16 yytable[] =
{
      74,     9,    10,    75,    76,    77,    78,    79,    80,    81,
      82,   105,     3,    86,    87,    88,    26,   109,   104,    73,
     106,    55,    56,    58,    40,    90,    89,   107,    97,   102,
      97,   102,    97,    92,    55,    56,    57,   102,   110,    58,
      59,   112,   113,   114,   115,   116,   123,   125,   118,   119,
     122,   124,    63,    64,   121,    65,    66,   129,    67,    68,
      -6,    70,    97,    71,     4,    72,   126,   110,   110,    97,
      13,   110,   131,    -3,    12,   133,     5,    -6,   127,   128,
      91,   110,   130,   110,    -6,    53,    -6,    14,     4,    25,
       0,     0,   132,   120,   134,     0,    15,   108,     0,     0,
       5,    -6,     0,     0,    42,    44,    45,    46,    47,    48,
      -6,    50,    51,    52,    54,     0,     0,     0,    27,    28,
      29,     0,    30,    31,     0,    69,    32,    33,    34,    35,
      36,    37,    38,    18,    19,    20,    21,    22,    23,    55,
      56,    94,    95,    96,    55,    56,    99,   100,   101
};

static const yytype_int16 yycheck[] =
{
      57,    18,    19,    60,    61,    62,    63,    64,    65,    66,
      67,    81,     0,    70,    71,    72,    29,    87,    80,    35,
      82,     3,     4,     8,    36,    75,     5,    84,    78,    79,
      80,    81,    82,    10,     3,     4,     5,    87,    88,     8,
       9,    98,    99,   100,   101,   102,     5,     7,   105,   106,
     112,     6,    41,    42,   111,    44,    45,   119,    47,    48,
      11,    50,   112,    52,    15,    54,   116,   117,   118,   119,
      11,   121,   129,     0,     6,   132,    27,    28,   117,   118,
      76,   131,   121,   133,    11,    37,    37,    28,    15,    12,
      -1,    -1,   131,   107,   133,    -1,    37,    86,    -1,    -1,
      27,    28,    -1,    -1,    28,    29,    30,    31,    32,    33,
      37,    35,    36,    37,    38,    -1,    -1,    -1,    12,    13,
      14,    -1,    16,    17,    -1,    49,    20,    21,    22,    23,
      24,    25,    26,    29,    30,    31,    32,    33,    34,     3,
       4,     5,     6,     7,     3,     4,     5,     6,     7
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    39,    40,     0,    15,    27,    41,    42,    50,    18,
      19,    46,    42,    11,    28,    37,    43,    49,    29,    30,
      31,    32,    33,    34,    44,    43,    29,    12,    13,    14,
      16,    17,    20,    21,    22,    23,    24,    25,    26,    58,
      36,    48,    48,    60,    48,    48,    48,    48,    48,    59,
      48,    48,    48,    60,    48,     3,     4,     5,     8,     9,
      45,    54,    55,    57,    57,    57,    57,    57,    57,    48,
      57,    57,    57,    35,    47,    47,    47,    47,    47,    47,
      47,    47,    47,    57,    61,    62,    47,    47,    47,     5,
      45,    54,    10,    56,     5,     6,     7,    45,    52,     5,
       6,     7,    45,    53,    52,    53,    52,    47,    57,    53,
      45,    51,    47,    47,    47,    47,    47,    47,    47,    47,
      62,    47,    52,     5,     6,     7,    45,    51,    51,    52,
      51,    47,    51,    47,    51
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, ciaoFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    ciaoFlexLexer* ll;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, ciaoFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    ciaoFlexLexer* ll;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, Base* fr, ciaoFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, fr, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    Base* fr;
    ciaoFlexLexer* ll;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Base* fr, ciaoFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, fr, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    Base* fr;
    ciaoFlexLexer* ll;
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
int yyparse (Base* fr, ciaoFlexLexer* ll);
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
yyparse (Base* fr, ciaoFlexLexer* ll)
#else
int
yyparse (fr, ll)
    Base* fr;
    ciaoFlexLexer* ll;
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
#line 94 "frame/ciaoparser.Y"
    {
  strcpy(color, fr->markerColor());
 ;}
    break;

  case 8:
#line 105 "frame/ciaoparser.Y"
    {cerr << "CIAO Regions File 1.0" << endl;;}
    break;

  case 12:
#line 111 "frame/ciaoparser.Y"
    {YYACCEPT;;}
    break;

  case 18:
#line 119 "frame/ciaoparser.Y"
    {setProps(&props, Marker::INCLUDE, 0);;}
    break;

  case 19:
#line 120 "frame/ciaoparser.Y"
    {setProps(&props, Marker::INCLUDE, 0);;}
    break;

  case 20:
#line 121 "frame/ciaoparser.Y"
    {setProps(&props, Marker::INCLUDE, 0);;}
    break;

  case 21:
#line 124 "frame/ciaoparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 22:
#line 125 "frame/ciaoparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 23:
#line 128 "frame/ciaoparser.Y"
    {yydebug=1;;}
    break;

  case 24:
#line 129 "frame/ciaoparser.Y"
    {yydebug=0;;}
    break;

  case 28:
#line 141 "frame/ciaoparser.Y"
    {
	  // reset maperr flag
	  maperr =0;

	  props =
	    Marker::SELECT | Marker::EDIT | Marker::MOVE |
	    Marker::ROTATE | Marker::DELETE | Marker::HIGHLITE |
	    Marker::INCLUDE | Marker::SOURCE;
	;}
    break;

  case 29:
#line 152 "frame/ciaoparser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 30:
#line 155 "frame/ciaoparser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::PHYSICAL);;}
    break;

  case 31:
#line 156 "frame/ciaoparser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::WCS, Coord::DEGREE);;}
    break;

  case 32:
#line 157 "frame/ciaoparser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::WCS, Coord::ARCMIN);;}
    break;

  case 33:
#line 158 "frame/ciaoparser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real), Coord::WCS, Coord::ARCSEC);;}
    break;

  case 34:
#line 162 "frame/ciaoparser.Y"
    {
	  Vector rr = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = rr[0];
	  (yyval.vector)[1] = rr[1];
	  (yyval.vector)[2] = rr[2];
	;}
    break;

  case 35:
#line 169 "frame/ciaoparser.Y"
    {
	  Vector rr= FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::WCS,Coord::DEGREE);
	  (yyval.vector)[0] = rr[0];
	  (yyval.vector)[1] = rr[1];
	  (yyval.vector)[2] = rr[2];
	;}
    break;

  case 36:
#line 176 "frame/ciaoparser.Y"
    {
	  Vector rr = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::WCS, Coord::ARCMIN);
	  (yyval.vector)[0] = rr[0];
	  (yyval.vector)[1] = rr[1];
	  (yyval.vector)[2] = rr[2];
	;}
    break;

  case 37:
#line 183 "frame/ciaoparser.Y"
    {
	  Vector rr = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::WCS, Coord::ARCSEC);
	  (yyval.vector)[0] = rr[0];
	  (yyval.vector)[1] = rr[1];
	  (yyval.vector)[2] = rr[2];
	;}
    break;

  case 38:
#line 191 "frame/ciaoparser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 39:
#line 194 "frame/ciaoparser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 40:
#line 197 "frame/ciaoparser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 41:
#line 201 "frame/ciaoparser.Y"
    {
	  Vector rr = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::PHYSICAL);
	  (yyval.vector)[0] = rr[0];
	  (yyval.vector)[1] = rr[1];
	  (yyval.vector)[2] = rr[2];
	;}
    break;

  case 42:
#line 208 "frame/ciaoparser.Y"
    {
	  Vector rr = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real)*360./24.,(yyvsp[(3) - (3)].real)), Coord::WCS,Coord::FK5);
	  (yyval.vector)[0] = rr[0];
	  (yyval.vector)[1] = rr[1];
	  (yyval.vector)[2] = rr[2];
	;}
    break;

  case 43:
#line 215 "frame/ciaoparser.Y"
    {
	  Vector rr = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::WCS, Coord::FK5);
	  (yyval.vector)[0] = rr[0];
	  (yyval.vector)[1] = rr[1];
	  (yyval.vector)[2] = rr[2];
	;}
    break;

  case 44:
#line 222 "frame/ciaoparser.Y"
    {
	  Vector rr = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::WCS, Coord::FK5);
	  (yyval.vector)[0] = rr[0];
	  (yyval.vector)[1] = rr[1];
	  (yyval.vector)[2] = rr[2];
	;}
    break;

  case 45:
#line 231 "frame/ciaoparser.Y"
    {
	  fr->createAnnulusCmd(Vector((yyvsp[(3) - (7)].vector)), (yyvsp[(5) - (7)].real), (yyvsp[(7) - (7)].real), 1,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	;}
    break;

  case 46:
#line 236 "frame/ciaoparser.Y"
    {
	  fr->createBoxCmd(Vector((yyvsp[(3) - (5)].vector)), (yyvsp[(5) - (5)].vector), 0, fill_,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	;}
    break;

  case 48:
#line 242 "frame/ciaoparser.Y"
    {
	  fr->createCircleCmd(Vector((yyvsp[(3) - (5)].vector)), (yyvsp[(5) - (5)].real), fill_,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	;}
    break;

  case 49:
#line 247 "frame/ciaoparser.Y"
    {
	  fr->createEllipseCmd(Vector((yyvsp[(3) - (7)].vector)), Vector((yyvsp[(5) - (7)].vector)), (yyvsp[(7) - (7)].real), fill_,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	;}
    break;

  case 50:
#line 251 "frame/ciaoparser.Y"
    {/* not supported */;}
    break;

  case 51:
#line 253 "frame/ciaoparser.Y"
    {
	  fr->createCpandaCmd(Vector((yyvsp[(3) - (11)].vector)), (yyvsp[(9) - (11)].real), (yyvsp[(11) - (11)].real), 1, (yyvsp[(5) - (11)].real), (yyvsp[(7) - (11)].real), 1,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	;}
    break;

  case 52:
#line 258 "frame/ciaoparser.Y"
    {
	  fr->createPointCmd(Vector((yyvsp[(3) - (3)].vector)), Point::BOXCIRCLE, POINTSIZE, 
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	;}
    break;

  case 53:
#line 262 "frame/ciaoparser.Y"
    {polylist.deleteAll();;}
    break;

  case 54:
#line 263 "frame/ciaoparser.Y"
    {
	  fr->createPolygonCmd(polylist, fill_,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	;}
    break;

  case 55:
#line 268 "frame/ciaoparser.Y"
    { 
	  Vector cc = (Vector((yyvsp[(5) - (5)].vector))-Vector((yyvsp[(3) - (5)].vector)))/2.+Vector((yyvsp[(3) - (5)].vector));
	  Vector wh = Vector((yyvsp[(5) - (5)].vector))-Vector((yyvsp[(3) - (5)].vector));
	  fr->createBoxCmd(cc, wh, 0, fill_,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	;}
    break;

  case 56:
#line 274 "frame/ciaoparser.Y"
    {/* not supported */;}
    break;

  case 58:
#line 276 "frame/ciaoparser.Y"
    {/* not supported */;}
    break;

  case 59:
#line 280 "frame/ciaoparser.Y"
    {
	  fr->createBoxCmd(Vector((yyvsp[(2) - (6)].vector)), Vector((yyvsp[(4) - (6)].vector)), (yyvsp[(6) - (6)].real), fill_,
	  color,dash,1,font,text,props,NULL,taglist,cblist);
	;}
    break;

  case 62:
#line 290 "frame/ciaoparser.Y"
    {polylist.append(new Vertex((yyvsp[(1) - (1)].vector)));;}
    break;


/* Line 1267 of yacc.c.  */
#line 1816 "frame/ciaoparser.C"
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


#line 293 "frame/ciaoparser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

