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
#define yyparse tngparse
#define yylex   tnglex
#define yyerror tngerror
#define yylval  tnglval
#define yychar  tngchar
#define yydebug tngdebug
#define yynerrs tngnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     REAL = 259,
     STRING = 260,
     ANGDEGREE = 261,
     SEXSTR = 262,
     EOF_ = 263,
     B1950_ = 264,
     BACKGROUND_ = 265,
     BOX_ = 266,
     BLACK_ = 267,
     BLUE_ = 268,
     CIRCLE_ = 269,
     CYAN_ = 270,
     DATE_ = 271,
     DEBUG_ = 272,
     DEGREES_ = 273,
     ECLIPTIC_ = 274,
     ELLIPSE_ = 275,
     FILENAME_ = 276,
     FK4_ = 277,
     FK5_ = 278,
     FORMAT_ = 279,
     GALACTIC_ = 280,
     GREEN_ = 281,
     HMS_ = 282,
     ICRS_ = 283,
     J2000_ = 284,
     LINE_ = 285,
     MAGENTA_ = 286,
     OFF_ = 287,
     ON_ = 288,
     PHYSICAL_ = 289,
     PIXELS_ = 290,
     POINT_ = 291,
     POLYGON_ = 292,
     RED_ = 293,
     SOURCE_ = 294,
     TEXT_ = 295,
     VERSION_ = 296,
     WHITE_ = 297,
     YELLOW_ = 298
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define ANGDEGREE 261
#define SEXSTR 262
#define EOF_ 263
#define B1950_ 264
#define BACKGROUND_ 265
#define BOX_ 266
#define BLACK_ 267
#define BLUE_ 268
#define CIRCLE_ 269
#define CYAN_ 270
#define DATE_ 271
#define DEBUG_ 272
#define DEGREES_ 273
#define ECLIPTIC_ 274
#define ELLIPSE_ 275
#define FILENAME_ 276
#define FK4_ 277
#define FK5_ 278
#define FORMAT_ 279
#define GALACTIC_ 280
#define GREEN_ 281
#define HMS_ 282
#define ICRS_ 283
#define J2000_ 284
#define LINE_ 285
#define MAGENTA_ 286
#define OFF_ 287
#define ON_ 288
#define PHYSICAL_ 289
#define PIXELS_ 290
#define POINT_ 291
#define POLYGON_ 292
#define RED_ 293
#define SOURCE_ 294
#define TEXT_ 295
#define VERSION_ 296
#define WHITE_ 297
#define YELLOW_ 298




/* Copy the first part of user declarations.  */
#line 10 "frame/tngparser.Y"

#define YYDEBUG 1

#define FITSPTR (fr->findFits())
#define DISCARD_(x) {yyclearin; tngDiscard(x);}

#include <math.h>
#include <string.h>
#include <iostream>

#include "base.h"
#include "fitsimage.h"
#include "basemarker.h"

#undef yyFlexLexer
#define yyFlexLexer tngFlexLexer
#include <FlexLexer.h>

extern int tnglex(void*, tngFlexLexer*);
extern void tngerror(Base*, tngFlexLexer*, const char*);
extern void tngDiscard(int);

static Coord::CoordSystem globalSystem;
static Coord::SkyFrame globalSky;
static Coord::CoordSystem localSystem;
static Coord::SkyFrame localSky;

static unsigned short globalProps;
static unsigned short localProps;

static char globalColor[32];
static char localColor[32];

static int dash[] = {8,3};
static int fill_ =0;

static char globalFont[32];

static char globalText[80];
static char localText[80];

static char localComment[80];

static List<Vertex> polylist;
static List<Tag> taglist;
static List<CallBack> cblist;

static void setProps(unsigned short* props, unsigned short prop, int value);
static Coord::CoordSystem checkWCSSystem();
static Coord::SkyFrame checkWCSSky();


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
#line 62 "frame/tngparser.Y"
{
#define TNGBUFSIZE 2048
  double real;
  int integer;
  char str[TNGBUFSIZE];
  double vector[3];
}
/* Line 193 of yacc.c.  */
#line 250 "frame/tngparser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 263 "frame/tngparser.C"

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
#define YYLAST   135

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  82
/* YYNRULES -- Number of states.  */
#define YYNSTATES  145

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   298

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      44,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,    51,     2,     2,     2,     2,
      47,    48,     2,    49,    46,    50,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    45,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,    10,    13,    14,    17,    19,    23,
      25,    27,    29,    31,    33,    35,    37,    39,    40,    42,
      43,    45,    46,    48,    49,    51,    53,    55,    57,    61,
      63,    67,    71,    75,    77,    79,    81,    83,    85,    87,
      89,    90,    91,    92,    94,    96,   104,   114,   124,   132,
     138,   139,   148,   149,   156,   160,   162,   164,   169,   170,
     176,   177,   183,   184,   188,   189,   192,   195,   198,   201,
     204,   207,   210,   213,   216,   219,   220,   224,   227,   230,
     232,   237,   238
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      54,     0,    -1,    70,    55,    -1,    55,    56,    57,    -1,
      56,    57,    -1,    -1,    17,    59,    -1,    41,    -1,    71,
      72,    73,    -1,    78,    -1,    44,    -1,    45,    -1,     8,
      -1,     4,    -1,     3,    -1,    33,    -1,    32,    -1,    -1,
      46,    -1,    -1,    47,    -1,    -1,    48,    -1,    -1,    64,
      -1,    58,    -1,     6,    -1,    58,    -1,    58,    60,    58,
      -1,     7,    -1,    67,    60,    67,    -1,    58,    60,    58,
      -1,     6,    60,     6,    -1,    22,    -1,     9,    -1,    23,
      -1,    29,    -1,    28,    -1,    25,    -1,    19,    -1,    -1,
      -1,    -1,    49,    -1,    50,    -1,    14,    61,    68,    60,
      65,    62,    82,    -1,    20,    61,    68,    60,    66,    60,
      63,    62,    82,    -1,    11,    61,    68,    60,    66,    60,
      63,    62,    82,    -1,    30,    61,    68,    60,    68,    62,
      82,    -1,    36,    61,    68,    62,    82,    -1,    -1,    40,
      61,    68,    60,     5,    62,    74,    82,    -1,    -1,    37,
      75,    61,    76,    62,    82,    -1,    76,    60,    77,    -1,
      77,    -1,    68,    -1,    51,    24,    52,    84,    -1,    -1,
      51,    21,    52,    79,     5,    -1,    -1,    51,    16,    52,
      80,     5,    -1,    -1,    51,    81,     5,    -1,    -1,    51,
      42,    -1,    51,    12,    -1,    51,    38,    -1,    51,    26,
      -1,    51,    13,    -1,    51,    15,    -1,    51,    31,    -1,
      51,    43,    -1,    51,    39,    -1,    51,    10,    -1,    -1,
      51,    83,     5,    -1,    27,    85,    -1,    18,    85,    -1,
      35,    -1,    35,    47,    34,    48,    -1,    -1,    47,    69,
      48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   128,   128,   131,   132,   135,   136,   137,   138,   139,
     142,   143,   144,   147,   148,   151,   152,   155,   156,   159,
     160,   163,   164,   167,   168,   171,   172,   175,   178,   187,
     190,   204,   211,   221,   222,   223,   224,   225,   226,   227,
     230,   244,   263,   264,   265,   268,   273,   278,   283,   290,
     295,   295,   301,   301,   307,   308,   311,   314,   315,   315,
     316,   316,   317,   317,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   334,   339,   339,   342,   343,   344,
     345,   349,   353
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "REAL", "STRING", "ANGDEGREE",
  "SEXSTR", "EOF_", "B1950_", "BACKGROUND_", "BOX_", "BLACK_", "BLUE_",
  "CIRCLE_", "CYAN_", "DATE_", "DEBUG_", "DEGREES_", "ECLIPTIC_",
  "ELLIPSE_", "FILENAME_", "FK4_", "FK5_", "FORMAT_", "GALACTIC_",
  "GREEN_", "HMS_", "ICRS_", "J2000_", "LINE_", "MAGENTA_", "OFF_", "ON_",
  "PHYSICAL_", "PIXELS_", "POINT_", "POLYGON_", "RED_", "SOURCE_", "TEXT_",
  "VERSION_", "WHITE_", "YELLOW_", "'\\n'", "';'", "','", "'('", "')'",
  "'+'", "'-'", "'#'", "':'", "$accept", "start", "commands", "command",
  "terminator", "numeric", "debug", "sp", "bp", "ep", "optangle", "angle",
  "value", "vvalue", "sexagesimal", "coord", "skyFrame", "initGlobal",
  "initLocal", "include", "shape", "@1", "@2", "polyNodes", "polyNode",
  "generalComment", "@3", "@4", "@5", "shapeComment", "@6", "tngFormat",
  "tngWCS", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,    10,    59,    44,    40,    41,    43,
      45,    35,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    53,    54,    55,    55,    56,    56,    56,    56,    56,
      57,    57,    57,    58,    58,    59,    59,    60,    60,    61,
      61,    62,    62,    63,    63,    64,    64,    65,    66,    67,
      68,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      70,    71,    72,    72,    72,    73,    73,    73,    73,    73,
      74,    73,    75,    73,    76,    76,    77,    78,    79,    78,
      80,    78,    81,    78,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    83,    82,    84,    84,    84,
      84,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     0,     2,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     0,
       1,     0,     1,     0,     1,     1,     1,     1,     3,     1,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       0,     0,     0,     1,     1,     7,     9,     9,     7,     5,
       0,     8,     0,     6,     3,     1,     1,     4,     0,     5,
       0,     5,     0,     3,     0,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     0,     3,     2,     2,     1,
       4,     0,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      40,     0,    41,     1,     0,     7,    62,    41,     0,    42,
       9,    16,    15,     6,     0,     0,     0,     0,     0,    12,
      10,    11,     4,    43,    44,     0,    60,    58,     0,    63,
       3,    19,    19,    19,    19,    19,    52,    19,     8,     0,
       0,    81,    81,    79,    57,    20,     0,     0,     0,     0,
       0,    19,     0,    61,    59,     0,    78,    77,     0,    14,
      13,    17,    29,    17,    17,    17,    17,    17,    17,    21,
       0,    17,    34,    39,    33,    35,    38,    37,    36,     0,
       0,    18,     0,     0,     0,     0,     0,     0,     0,    22,
      64,    56,    17,    55,     0,    82,    80,    32,    31,    30,
      17,    17,    27,    21,    17,    21,    75,    49,     0,    64,
      21,     0,    23,    64,    23,    64,    74,    66,    69,    70,
      68,    71,    67,    73,    65,    72,     0,    54,    53,    50,
      28,    26,    25,    21,    24,    45,    21,    48,    76,    64,
      64,    64,    51,    47,    46
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     7,     8,    22,    63,    13,    82,    46,    90,
     133,   134,   103,   101,    64,    91,    79,     2,     9,    25,
      38,   139,    51,    92,    93,    10,    40,    39,    17,   107,
     126,    44,    56
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -91
static const yytype_int8 yypact[] =
{
     -91,     1,     8,   -91,    79,   -91,    -2,     0,     3,    72,
     -91,   -91,   -91,   -91,   -49,   -42,   -40,    16,     3,   -91,
     -91,   -91,   -91,   -91,   -91,    73,   -91,   -91,    80,   -91,
     -91,   -23,   -23,   -23,   -23,   -23,   -91,   -23,   -91,    26,
      28,    -7,    -7,    13,   -91,   -91,    82,    82,    82,    82,
      82,   -23,    82,   -91,   -91,    95,   -91,   -91,    23,   -91,
     -91,     4,   -91,     4,     4,     4,     4,     4,     4,    18,
      82,     4,   -91,   -91,   -91,   -91,   -91,   -91,   -91,    21,
      25,   -91,    76,   122,    85,   122,   122,   122,    82,   -91,
      65,   -91,    10,   -91,   114,   -91,   -91,   -91,   -91,   -91,
       4,     4,   -91,    18,     4,    18,    52,   -91,    82,    65,
      18,   122,    93,    65,    93,    65,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,   -91,   -91,   123,   -91,   -91,   -91,
     -91,   -91,   -91,    18,   -91,   -91,    18,   -91,   -91,    65,
      65,    65,   -91,   -91,   -91
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -91,   -91,   -91,   120,   111,    -6,   -91,   -29,   -28,   -90,
      17,   -91,   -91,    43,    48,   -20,   -91,   -91,   -91,   -91,
     -91,   -91,   -91,   -91,    27,   -91,   -91,   -91,   -91,   -39,
     -91,   -91,    91
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -22
static const yytype_int16 yytable[] =
{
      -2,     3,   109,    26,    47,    48,    49,    50,    -5,    52,
      27,    19,    28,   113,    14,   115,    -5,     4,   -21,    15,
     129,    29,    16,    70,    45,     4,    65,    66,    67,    68,
      69,    53,    71,    54,    83,    84,    85,    86,    87,    88,
      55,     5,    94,   140,    -5,    -5,   141,    20,    21,     5,
      81,     6,    -5,    -5,   -21,   -21,    81,    80,    89,     6,
      58,   -21,   116,   108,   117,   118,    89,   119,   105,    95,
     128,   111,   112,    96,   135,   114,   137,    98,   120,   100,
     102,   100,    97,   121,    31,    59,    60,    32,    61,    62,
     122,   123,    62,    33,   124,   125,    59,    60,    41,   131,
     142,   143,   144,    34,    72,   130,   132,    42,   132,    35,
      36,    11,    12,    37,    73,    43,   106,    74,    75,   110,
      76,    23,    24,    77,    78,    59,    60,    18,   138,    30,
     104,   136,    99,    57,     0,   127
};

static const yytype_int16 yycheck[] =
{
       0,     0,    92,    52,    32,    33,    34,    35,     8,    37,
      52,     8,    52,   103,    16,   105,     8,    17,     8,    21,
     110,     5,    24,    51,    47,    17,    46,    47,    48,    49,
      50,     5,    52,     5,    63,    64,    65,    66,    67,    68,
      47,    41,    71,   133,    44,    45,   136,    44,    45,    41,
      46,    51,    44,    45,    44,    45,    46,    34,    48,    51,
      47,    51,    10,    92,    12,    13,    48,    15,    88,    48,
     109,   100,   101,    48,   113,   104,   115,    83,    26,    85,
      86,    87,     6,    31,    11,     3,     4,    14,     6,     7,
      38,    39,     7,    20,    42,    43,     3,     4,    18,     6,
     139,   140,   141,    30,     9,   111,   112,    27,   114,    36,
      37,    32,    33,    40,    19,    35,    51,    22,    23,     5,
      25,    49,    50,    28,    29,     3,     4,     7,     5,    18,
      87,   114,    84,    42,    -1,   108
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    54,    70,     0,    17,    41,    51,    55,    56,    71,
      78,    32,    33,    59,    16,    21,    24,    81,    56,     8,
      44,    45,    57,    49,    50,    72,    52,    52,    52,     5,
      57,    11,    14,    20,    30,    36,    37,    40,    73,    80,
      79,    18,    27,    35,    84,    47,    61,    61,    61,    61,
      61,    75,    61,     5,     5,    47,    85,    85,    47,     3,
       4,     6,     7,    58,    67,    68,    68,    68,    68,    68,
      61,    68,     9,    19,    22,    23,    25,    28,    29,    69,
      34,    46,    60,    60,    60,    60,    60,    60,    60,    48,
      62,    68,    76,    77,    60,    48,    48,     6,    58,    67,
      58,    66,    58,    65,    66,    68,    51,    82,    60,    62,
       5,    60,    60,    62,    60,    62,    10,    12,    13,    15,
      26,    31,    38,    39,    42,    43,    83,    77,    82,    62,
      58,     6,    58,    63,    64,    82,    63,    82,     5,    74,
      62,    62,    82,    82,    82
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, tngFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    tngFlexLexer* ll;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, tngFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    tngFlexLexer* ll;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, Base* fr, tngFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, fr, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    Base* fr;
    tngFlexLexer* ll;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Base* fr, tngFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, fr, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    Base* fr;
    tngFlexLexer* ll;
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
int yyparse (Base* fr, tngFlexLexer* ll);
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
yyparse (Base* fr, tngFlexLexer* ll)
#else
int
yyparse (fr, ll)
    Base* fr;
    tngFlexLexer* ll;
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
        case 7:
#line 137 "frame/tngparser.Y"
    {cerr << "SAOtng" << endl;;}
    break;

  case 12:
#line 144 "frame/tngparser.Y"
    {YYACCEPT;;}
    break;

  case 13:
#line 147 "frame/tngparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 14:
#line 148 "frame/tngparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 15:
#line 151 "frame/tngparser.Y"
    {yydebug=1;;}
    break;

  case 16:
#line 152 "frame/tngparser.Y"
    {yydebug=0;;}
    break;

  case 23:
#line 167 "frame/tngparser.Y"
    {(yyval.real) = 0;;}
    break;

  case 24:
#line 168 "frame/tngparser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 25:
#line 171 "frame/tngparser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 26:
#line 172 "frame/tngparser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 27:
#line 175 "frame/tngparser.Y"
    {(yyval.real) = FITSPTR->mapLenToRef((yyvsp[(1) - (1)].real),Coord::IMAGE);;}
    break;

  case 28:
#line 179 "frame/tngparser.Y"
    {
	  Vector r = FITSPTR->mapLenToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), Coord::IMAGE);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 29:
#line 187 "frame/tngparser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 30:
#line 191 "frame/tngparser.Y"
    {
	  Vector r;
	  Coord::CoordSystem sys = checkWCSSystem();
	  Coord::SkyFrame sky = checkWCSSky();
	  if (sky == Coord::GALACTIC || sky == Coord::ECLIPTIC) 
	    r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), sys, sky);
	  else
	    r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real)*360./24.,(yyvsp[(3) - (3)].real)), sys, sky);

	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 31:
#line 205 "frame/tngparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)), localSystem, localSky);
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 32:
#line 212 "frame/tngparser.Y"
    {
	  Vector r = FITSPTR->mapToRef(Vector((yyvsp[(1) - (3)].real),(yyvsp[(3) - (3)].real)),
	    checkWCSSystem(), checkWCSSky());
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 33:
#line 221 "frame/tngparser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 34:
#line 222 "frame/tngparser.Y"
    {(yyval.integer) = Coord::FK4;;}
    break;

  case 35:
#line 223 "frame/tngparser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 36:
#line 224 "frame/tngparser.Y"
    {(yyval.integer) = Coord::FK5;;}
    break;

  case 37:
#line 225 "frame/tngparser.Y"
    {(yyval.integer) = Coord::ICRS;;}
    break;

  case 38:
#line 226 "frame/tngparser.Y"
    {(yyval.integer) = Coord::GALACTIC;;}
    break;

  case 39:
#line 227 "frame/tngparser.Y"
    {(yyval.integer) = Coord::ECLIPTIC;;}
    break;

  case 40:
#line 230 "frame/tngparser.Y"
    {
	  // global properties
	  globalSystem = Coord::IMAGE;
	  globalSky = Coord::FK5;
	  globalProps =
	    Marker::SELECT | Marker::EDIT | Marker::MOVE |
	    Marker::ROTATE | Marker::DELETE | Marker::HIGHLITE |
	    Marker::INCLUDE | Marker::SOURCE;
	  strcpy(globalColor,"green");
	  strcpy(globalFont,"helvetica 10 normal roman");
	  strcpy(globalText,"");
	;}
    break;

  case 41:
#line 244 "frame/tngparser.Y"
    {
	  // reset maperr flag
	  maperr =0;

	  // global properties
	  localSystem = globalSystem;
	  localSky = globalSky;
	  localProps = globalProps;
	  if (fr->useMarkerColor())
	    strcpy(localColor,fr->markerColor());
	  else
	    strcpy(localColor,globalColor);
	  strcpy(localText,globalText);
	  strcpy(localComment,"");

	  strcpy(globalText,"");
	;}
    break;

  case 42:
#line 263 "frame/tngparser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 43:
#line 264 "frame/tngparser.Y"
    {setProps(&localProps, Marker::INCLUDE, 1);;}
    break;

  case 44:
#line 265 "frame/tngparser.Y"
    {setProps(&localProps, Marker::INCLUDE, 0);;}
    break;

  case 45:
#line 269 "frame/tngparser.Y"
    {fr->createCircleCmd(Vector((yyvsp[(3) - (7)].vector)), (yyvsp[(5) - (7)].real), fill_,
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);;}
    break;

  case 46:
#line 274 "frame/tngparser.Y"
    {fr->createEllipseCmd(Vector((yyvsp[(3) - (9)].vector)), Vector((yyvsp[(5) - (9)].vector)), (yyvsp[(7) - (9)].real), fill_,
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);;}
    break;

  case 47:
#line 279 "frame/tngparser.Y"
    {fr->createBoxCmd(Vector((yyvsp[(3) - (9)].vector)), Vector((yyvsp[(5) - (9)].vector)), (yyvsp[(7) - (9)].real), fill_,
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);;}
    break;

  case 48:
#line 284 "frame/tngparser.Y"
    {fr->createLineCmd(Vector((yyvsp[(3) - (7)].vector)),
	    Vector((yyvsp[(5) - (7)].vector)),
	    0,0,
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);;}
    break;

  case 49:
#line 291 "frame/tngparser.Y"
    {fr->createPointCmd(Vector((yyvsp[(3) - (5)].vector)), Point::BOXCIRCLE, POINTSIZE, 
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);;}
    break;

  case 50:
#line 295 "frame/tngparser.Y"
    {strncpy(localText,(yyvsp[(5) - (6)].str),80);;}
    break;

  case 51:
#line 296 "frame/tngparser.Y"
    {fr->createTextCmd(Vector((yyvsp[(3) - (8)].vector)),
	    0, 1,
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);;}
    break;

  case 52:
#line 301 "frame/tngparser.Y"
    {polylist.deleteAll();;}
    break;

  case 53:
#line 302 "frame/tngparser.Y"
    {fr->createPolygonCmd(polylist, fill_,
	    localColor,dash,1,globalFont,localText,
	    localProps,localComment,taglist,cblist);;}
    break;

  case 56:
#line 311 "frame/tngparser.Y"
    {polylist.append(new Vertex((yyvsp[(1) - (1)].vector)));;}
    break;

  case 58:
#line 315 "frame/tngparser.Y"
    {DISCARD_(0);;}
    break;

  case 60:
#line 316 "frame/tngparser.Y"
    {DISCARD_(0);;}
    break;

  case 62:
#line 317 "frame/tngparser.Y"
    {DISCARD_(1);;}
    break;

  case 63:
#line 317 "frame/tngparser.Y"
    {strncpy(globalText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 65:
#line 321 "frame/tngparser.Y"
    {strcpy(localColor,"white");;}
    break;

  case 66:
#line 322 "frame/tngparser.Y"
    {strcpy(localColor,"black");;}
    break;

  case 67:
#line 323 "frame/tngparser.Y"
    {strcpy(localColor,"red");;}
    break;

  case 68:
#line 324 "frame/tngparser.Y"
    {strcpy(localColor,"green");;}
    break;

  case 69:
#line 325 "frame/tngparser.Y"
    {strcpy(localColor,"blue");;}
    break;

  case 70:
#line 326 "frame/tngparser.Y"
    {strcpy(localColor,"cyan");;}
    break;

  case 71:
#line 327 "frame/tngparser.Y"
    {strcpy(localColor,"magenta");;}
    break;

  case 72:
#line 328 "frame/tngparser.Y"
    {strcpy(localColor,"yellow");;}
    break;

  case 73:
#line 330 "frame/tngparser.Y"
    {
	  strcpy(localColor,"green");
	  setProps(&localProps,Marker::SOURCE,1);
	;}
    break;

  case 74:
#line 335 "frame/tngparser.Y"
    {
	  strcpy(localColor,"red");
	  setProps(&localProps,Marker::SOURCE,0);
	;}
    break;

  case 75:
#line 339 "frame/tngparser.Y"
    {DISCARD_(1);;}
    break;

  case 76:
#line 339 "frame/tngparser.Y"
    {strncpy(localComment,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 79:
#line 344 "frame/tngparser.Y"
    {globalSystem = localSystem = Coord::IMAGE;;}
    break;

  case 80:
#line 345 "frame/tngparser.Y"
    {globalSystem = localSystem = Coord::IMAGE;;}
    break;

  case 81:
#line 349 "frame/tngparser.Y"
    {
	    globalSystem = localSystem = Coord::WCS;
	    globalSky = localSky = Coord::FK5;
	  ;}
    break;

  case 82:
#line 354 "frame/tngparser.Y"
    {
	    globalSystem = localSystem = Coord::WCS;
	    globalSky = localSky = (Coord::SkyFrame)(yyvsp[(2) - (3)].integer);
	  ;}
    break;


/* Line 1267 of yacc.c.  */
#line 1979 "frame/tngparser.C"
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


#line 360 "frame/tngparser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

static Coord::CoordSystem checkWCSSystem()
{
  switch (localSystem) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
    return Coord::WCS;
  default:
    return localSystem;
  }
}

static Coord::SkyFrame checkWCSSky()
{
  switch (localSystem) {
  case Coord::IMAGE:
  case Coord::PHYSICAL:
    return Coord::FK5;
  default:
   return localSky;
  }
}

