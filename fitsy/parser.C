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
#define yyparse ffparse
#define yylex   fflex
#define yyerror fferror
#define yylval  fflval
#define yychar  ffchar
#define yydebug ffdebug
#define yynerrs ffnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     STRING = 259,
     ARCH_ = 260,
     ARRAY_ = 261,
     BIG_ = 262,
     BIGENDIAN_ = 263,
     BIN_ = 264,
     BINKEY_ = 265,
     BINCOL_ = 266,
     BITPIX_ = 267,
     COL_ = 268,
     DIM_ = 269,
     DIMS_ = 270,
     ECLIPTIC_ = 271,
     ENDIAN_ = 272,
     EQUATORIAL_ = 273,
     GALACTIC_ = 274,
     KEY_ = 275,
     LAYOUT_ = 276,
     LITTLE_ = 277,
     LITTLEENDIAN_ = 278,
     NESTED_ = 279,
     NORTH_ = 280,
     ORDER_ = 281,
     QUAD_ = 282,
     RING_ = 283,
     SKIP_ = 284,
     SOUTH_ = 285,
     SYSTEM_ = 286,
     UNKNOWN_ = 287,
     XDIM_ = 288,
     YDIM_ = 289,
     ZDIM_ = 290
   };
#endif
/* Tokens.  */
#define INT 258
#define STRING 259
#define ARCH_ 260
#define ARRAY_ 261
#define BIG_ 262
#define BIGENDIAN_ 263
#define BIN_ 264
#define BINKEY_ 265
#define BINCOL_ 266
#define BITPIX_ 267
#define COL_ 268
#define DIM_ 269
#define DIMS_ 270
#define ECLIPTIC_ 271
#define ENDIAN_ 272
#define EQUATORIAL_ 273
#define GALACTIC_ 274
#define KEY_ 275
#define LAYOUT_ 276
#define LITTLE_ 277
#define LITTLEENDIAN_ 278
#define NESTED_ 279
#define NORTH_ 280
#define ORDER_ 281
#define QUAD_ 282
#define RING_ 283
#define SKIP_ 284
#define SOUTH_ 285
#define SYSTEM_ 286
#define UNKNOWN_ 287
#define XDIM_ 288
#define YDIM_ 289
#define ZDIM_ 290




/* Copy the first part of user declarations.  */
#line 10 "parser.Y"

#define YYDEBUG 1

#define GOTOFILT(x) {yyclearin; ffFilter(x);}
#define GOTOARR(x) {yyclearin; ffArray(x);}

#include "file.h"
#include "hpx.h"

#undef yyFlexLexer
#define yyFlexLexer ffFlexLexer
#include <FlexLexer.h>

extern int fflex(void*, ffFlexLexer*);
extern void fferror(FitsFile*, ffFlexLexer*, const char*);

char ff_filter[512];
extern void ffFilter(int);
extern void ffArray(int);



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
#line 32 "parser.Y"
{
  float real;
  int integer;
  char str[256];
  void* ptr;
}
/* Line 193 of yacc.c.  */
#line 203 "parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 216 "parser.C"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   250

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  56
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  121
/* YYNRULES -- Number of states.  */
#define YYNSTATES  203

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      38,    39,    45,     2,    40,     2,    55,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,     2,
       2,    46,     2,     2,    44,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    36,     2,    37,     2,     2,     2,     2,    47,     2,
      54,     2,    53,     2,     2,    50,     2,     2,    51,     2,
       2,     2,    41,     2,    52,    48,     2,    49,     2,     2,
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
      35
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    12,    15,    21,    25,    30,
      35,    38,    42,    46,    52,    56,    61,    66,    69,    73,
      77,    83,    86,    90,    94,    95,   104,   105,   109,   110,
     112,   116,   120,   123,   126,   131,   135,   141,   147,   155,
     159,   161,   165,   169,   175,   176,   178,   180,   184,   188,
     190,   194,   198,   200,   206,   210,   214,   216,   218,   222,
     226,   229,   231,   233,   235,   237,   243,   247,   255,   261,
     265,   267,   271,   275,   277,   281,   285,   289,   293,   297,
     301,   305,   309,   313,   315,   317,   319,   321,   323,   328,
     330,   332,   334,   336,   338,   340,   342,   344,   346,   350,
     356,   357,   360,   361,   363,   365,   369,   373,   375,   379,
     383,   387,   391,   395,   397,   399,   401,   403,   405,   407,
     409,   411
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      57,     0,    -1,    60,    -1,    60,    61,    -1,    60,    61,
      63,    -1,    60,    63,    -1,    60,    36,    62,    64,    37,
      -1,    60,    61,    71,    -1,    60,    61,    71,    63,    -1,
      60,    61,    63,    71,    -1,    60,    71,    -1,    60,    71,
      63,    -1,    60,    63,    71,    -1,    60,    36,    62,    72,
      37,    -1,    60,    61,    84,    -1,    60,    61,    84,    63,
      -1,    60,    61,    63,    84,    -1,    60,    84,    -1,    60,
      84,    63,    -1,    60,    63,    84,    -1,    60,    36,    62,
      84,    37,    -1,    60,    75,    -1,    60,    75,    63,    -1,
      60,    63,    75,    -1,    -1,    60,    36,     6,    58,    38,
      79,    39,    37,    -1,    -1,     1,    59,     4,    -1,    -1,
       4,    -1,    36,     4,    37,    -1,    36,     3,    37,    -1,
       4,    40,    -1,     3,    40,    -1,    36,    64,    65,    37,
      -1,    66,    40,    67,    -1,    66,    40,    67,    40,    70,
      -1,    66,    40,    67,    40,    69,    -1,    66,    40,    67,
      40,    70,    40,    69,    -1,    66,    40,    70,    -1,    68,
      -1,    68,    40,    70,    -1,    68,    40,    69,    -1,    68,
      40,    70,    40,    69,    -1,    -1,    41,    -1,    42,    -1,
       3,    43,     3,    -1,     3,    44,     3,    -1,    45,    -1,
       3,    43,     3,    -1,     3,    44,     3,    -1,    45,    -1,
       3,    44,     3,    44,     3,    -1,     3,    43,     3,    -1,
       3,    44,     3,    -1,    45,    -1,     3,    -1,    36,    72,
      37,    -1,    73,    46,    74,    -1,    73,    74,    -1,     9,
      -1,    10,    -1,    11,    -1,    20,    -1,    38,     4,    40,
       4,    39,    -1,     4,    40,     4,    -1,    38,     4,    40,
       4,    40,     4,    39,    -1,     4,    40,     4,    40,     4,
      -1,    38,     4,    39,    -1,     4,    -1,    36,    76,    37,
      -1,    76,    40,    77,    -1,    77,    -1,    33,    46,     3,
      -1,    34,    46,     3,    -1,    35,    46,     3,    -1,    14,
      46,     3,    -1,    15,    46,     3,    -1,    12,    46,     3,
      -1,    29,    46,     3,    -1,     5,    46,    78,    -1,    17,
      46,    78,    -1,    78,    -1,     7,    -1,     8,    -1,    22,
      -1,    23,    -1,    80,    81,    82,    83,    -1,    47,    -1,
      48,    -1,    49,    -1,    50,    -1,    51,    -1,    52,    -1,
      53,    -1,    54,    -1,     3,    -1,     3,    55,     3,    -1,
       3,    55,     3,    55,     3,    -1,    -1,    43,     3,    -1,
      -1,    51,    -1,    47,    -1,    36,    85,    37,    -1,    85,
      40,    86,    -1,    86,    -1,    31,    46,    87,    -1,    26,
      46,    88,    -1,    21,    46,    89,    -1,    13,    46,     3,
      -1,    27,    46,     3,    -1,    18,    -1,    19,    -1,    16,
      -1,    32,    -1,    28,    -1,    24,    -1,    18,    -1,    25,
      -1,    30,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    81,    81,    82,    83,    84,    85,    87,    88,    89,
      90,    91,    92,    93,    95,    96,    97,    98,    99,   100,
     101,   103,   104,   105,   106,   106,   108,   108,   112,   113,
     123,   124,   127,   128,   131,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   144,   145,   146,   149,   156,   158,
     166,   168,   170,   173,   180,   182,   184,   187,   190,   192,
     193,   196,   197,   198,   199,   202,   203,   204,   205,   206,
     207,   210,   213,   214,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   229,   230,   231,   232,   235,   238,
     239,   240,   241,   242,   243,   244,   245,   248,   249,   250,
     254,   255,   258,   259,   260,   263,   266,   267,   270,   271,
     272,   273,   274,   277,   278,   279,   280,   283,   284,   287,
     288,   289
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "STRING", "ARCH_", "ARRAY_",
  "BIG_", "BIGENDIAN_", "BIN_", "BINKEY_", "BINCOL_", "BITPIX_", "COL_",
  "DIM_", "DIMS_", "ECLIPTIC_", "ENDIAN_", "EQUATORIAL_", "GALACTIC_",
  "KEY_", "LAYOUT_", "LITTLE_", "LITTLEENDIAN_", "NESTED_", "NORTH_",
  "ORDER_", "QUAD_", "RING_", "SKIP_", "SOUTH_", "SYSTEM_", "UNKNOWN_",
  "XDIM_", "YDIM_", "ZDIM_", "'['", "']'", "'('", "')'", "','", "'p'",
  "'P'", "':'", "'@'", "'*'", "'='", "'b'", "'s'", "'u'", "'i'", "'l'",
  "'r'", "'f'", "'d'", "'.'", "$accept", "command", "@1", "@2", "filename",
  "ext", "extb", "sect", "sectb", "physical", "rangex", "rangey",
  "rangexy", "rangez", "block", "bin", "binb", "binword", "binkey", "arrs",
  "arrsb", "arr", "endian", "array", "atype", "adims", "askip", "aendian",
  "hpxs", "hpxsb", "hpx", "hpxSystem", "hpxOrder", "hpxLayout", 0
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
     285,   286,   287,   288,   289,   290,    91,    93,    40,    41,
      44,   112,    80,    58,    64,    42,    61,    98,   115,   117,
     105,   108,   114,   102,   100,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    56,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    57,    58,    57,    59,    57,    60,    60,
      61,    61,    62,    62,    63,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    65,    65,    65,    66,    66,    66,
      67,    67,    67,    68,    69,    69,    69,    70,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    74,    74,    74,
      74,    75,    76,    76,    77,    77,    77,    77,    77,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    79,    80,
      80,    80,    80,    80,    80,    80,    80,    81,    81,    81,
      82,    82,    83,    83,    83,    84,    85,    85,    86,    86,
      86,    86,    86,    87,    87,    87,    87,    88,    88,    89,
      89,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     3,     2,     5,     3,     4,     4,
       2,     3,     3,     5,     3,     4,     4,     2,     3,     3,
       5,     2,     3,     3,     0,     8,     0,     3,     0,     1,
       3,     3,     2,     2,     4,     3,     5,     5,     7,     3,
       1,     3,     3,     5,     0,     1,     1,     3,     3,     1,
       3,     3,     1,     5,     3,     3,     1,     1,     3,     3,
       2,     1,     1,     1,     1,     5,     3,     7,     5,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     5,
       0,     2,     0,     1,     1,     3,     3,     1,     3,     3,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    26,    29,     0,     2,     0,     1,     0,     3,     5,
      10,    21,    17,    27,     0,     0,     0,    24,    84,    85,
      61,    62,    63,     0,     0,     0,     0,     0,    64,     0,
      86,    87,     0,     0,     0,     0,     0,     0,     0,    49,
       0,    44,     0,    40,     0,     0,     0,    73,    83,     0,
     107,     0,     4,     7,    14,     0,    12,    23,    19,     0,
      11,    22,    18,    31,    33,     0,     0,    30,    32,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    45,
      46,     0,     0,     0,    58,    70,     0,     0,    60,    71,
       0,   105,     0,     0,     9,    16,     8,    15,    47,    48,
      81,     0,    79,   111,    77,    78,    82,   119,   120,   121,
     110,   118,   117,   109,   112,    80,   115,   113,   114,   116,
     108,    74,    75,    76,     6,    13,    20,    34,    57,    52,
      35,    39,    57,    56,    42,    41,     0,     0,    59,    72,
     106,     0,    89,    90,    91,    92,    93,    94,    95,    96,
       0,     0,     0,     0,     0,     0,     0,     0,    66,    69,
       0,    53,     0,    97,   100,    50,    51,    37,    36,    54,
      55,     0,    43,     0,     0,    25,     0,     0,   102,     0,
      68,    65,     0,    98,   101,   104,   103,    88,    38,     0,
       0,    67,    99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    70,     5,     4,     8,    40,     9,    41,    91,
      42,   140,    43,   144,   141,    10,    44,    45,    98,    11,
      46,    47,    48,   160,   161,   174,   188,   197,    12,    49,
      50,   130,   123,   120
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -114
static const yytype_int16 yypact[] =
{
      60,  -114,  -114,    10,    -9,    44,  -114,     8,    27,    29,
      45,    45,    45,  -114,   105,    49,    37,  -114,  -114,  -114,
    -114,  -114,  -114,    55,    68,    82,    92,    94,  -114,   119,
    -114,  -114,   123,   132,   136,   137,   147,   148,   149,  -114,
      59,    75,    52,   156,   160,    36,   110,  -114,  -114,   139,
    -114,    46,   162,    45,    45,    98,  -114,  -114,  -114,    -1,
    -114,  -114,  -114,  -114,  -114,   196,   197,  -114,  -114,    77,
     163,   199,   200,   201,   202,    77,    72,   102,   203,   204,
     152,   205,   206,   207,    79,    67,   174,   175,   176,  -114,
    -114,   177,    30,    33,  -114,   178,   211,    20,  -114,  -114,
     129,  -114,    67,   146,  -114,  -114,  -114,  -114,  -114,   172,
    -114,   138,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,   117,  -114,
     179,  -114,   131,  -114,  -114,   180,   213,   114,  -114,  -114,
    -114,   218,  -114,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
     183,   220,   221,   222,    33,   223,   224,    42,   188,  -114,
     225,  -114,   193,   181,   189,  -114,  -114,  -114,   191,  -114,
    -114,   131,  -114,   229,   141,  -114,   231,   232,    88,    42,
    -114,  -114,   233,   184,  -114,  -114,  -114,  -114,  -114,   208,
     235,  -114,  -114
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -114,  -114,  -114,  -114,  -114,  -114,  -114,    -7,   209,  -114,
    -114,  -114,  -114,  -113,   -93,     0,   210,  -114,   143,   234,
    -114,   142,   -43,  -114,  -114,  -114,  -114,  -114,    -2,  -114,
     144,  -114,  -114,  -114
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -29
static const yytype_int16 yytable[] =
{
     145,    52,    84,    60,    61,    62,    54,    58,    53,    56,
       6,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    95,    27,   110,     7,    28,    29,
      30,    31,   116,   138,    32,    33,   142,    34,    88,    35,
      95,    36,    37,    38,    39,   181,   106,   107,    13,    84,
     105,   177,   104,    39,   182,    20,    21,    22,    96,    24,
     -28,     1,    84,    51,     2,    55,    28,    29,    20,    21,
      22,   178,    32,    33,    96,   139,   198,    35,   143,    28,
      24,    59,    97,    69,    18,    19,    67,   143,    29,    68,
     117,    39,    92,    32,    33,    85,   -28,   118,    35,    30,
      31,    71,   119,    16,    39,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    72,    27,    89,    90,    28,    29,
      30,    31,    65,    66,    32,    33,   121,    34,    73,    35,
     122,    36,    37,    38,    16,   195,    18,    19,    74,   196,
      75,    23,    63,    25,    26,    64,    27,    99,    65,    66,
     100,    30,    31,   169,   170,    20,    21,    22,    34,    24,
     162,   163,    36,    37,    38,    76,    28,    29,   126,    77,
     127,   128,    32,    33,   165,   166,   101,    35,    78,   102,
     191,   192,    79,    80,   129,   152,   153,   154,   155,   156,
     157,   158,   159,    81,    82,    83,    93,    94,   103,   108,
     109,   111,   112,   113,   114,   115,   124,   125,   131,   132,
     133,   134,   135,   136,   137,   147,   151,   168,   146,   164,
     167,   171,   172,   173,   175,   176,   179,   180,   183,   184,
     185,   189,   187,   190,   193,   194,   186,   199,   202,   200,
     148,     0,   149,    57,     0,     0,   150,   201,     0,    86,
      87
};

static const yytype_int16 yycheck[] =
{
      93,     8,     3,    10,    11,    12,     8,     9,     8,     9,
       0,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,     4,    17,    69,    36,    20,    21,
      22,    23,    75,     3,    26,    27,     3,    29,    40,    31,
       4,    33,    34,    35,    45,     3,    53,    54,     4,     3,
      52,   164,    52,    45,   167,     9,    10,    11,    38,    13,
       0,     1,     3,    36,     4,    36,    20,    21,     9,    10,
      11,   164,    26,    27,    38,    45,   189,    31,    45,    20,
      13,    36,    46,    46,     7,     8,    37,    45,    21,    40,
      18,    45,    40,    26,    27,    36,    36,    25,    31,    22,
      23,    46,    30,     5,    45,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    46,    17,    41,    42,    20,    21,
      22,    23,    43,    44,    26,    27,    24,    29,    46,    31,
      28,    33,    34,    35,     5,    47,     7,     8,    46,    51,
      46,    12,    37,    14,    15,    40,    17,    37,    43,    44,
      40,    22,    23,    39,    40,     9,    10,    11,    29,    13,
      43,    44,    33,    34,    35,    46,    20,    21,    16,    46,
      18,    19,    26,    27,    43,    44,    37,    31,    46,    40,
      39,    40,    46,    46,    32,    47,    48,    49,    50,    51,
      52,    53,    54,    46,    46,    46,    40,    37,    36,     3,
       3,    38,     3,     3,     3,     3,     3,     3,     3,     3,
       3,    37,    37,    37,    37,     4,    44,     4,    40,    40,
      40,     3,    39,     3,     3,     3,     3,     3,    40,     4,
      37,    40,    43,     4,     3,     3,    55,     4,     3,    55,
      97,    -1,   100,     9,    -1,    -1,   102,    39,    -1,    40,
      40
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    57,    60,    59,     0,    36,    61,    63,
      71,    75,    84,     4,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    17,    20,    21,
      22,    23,    26,    27,    29,    31,    33,    34,    35,    45,
      62,    64,    66,    68,    72,    73,    76,    77,    78,    85,
      86,    36,    63,    71,    84,    36,    71,    75,    84,    36,
      63,    63,    63,    37,    40,    43,    44,    37,    40,    46,
      58,    46,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,     3,    36,    64,    72,    84,    41,
      42,    65,    40,    40,    37,     4,    38,    46,    74,    37,
      40,    37,    40,    36,    71,    84,    63,    63,     3,     3,
      78,    38,     3,     3,     3,     3,    78,    18,    25,    30,
      89,    24,    28,    88,     3,     3,    16,    18,    19,    32,
      87,     3,     3,     3,    37,    37,    37,    37,     3,    45,
      67,    70,     3,    45,    69,    70,    40,     4,    74,    77,
      86,    44,    47,    48,    49,    50,    51,    52,    53,    54,
      79,    80,    43,    44,    40,    43,    44,    40,     4,    39,
      40,     3,    39,     3,    81,     3,     3,    69,    70,     3,
       3,     3,    69,    40,     4,    37,    55,    43,    82,    40,
       4,    39,    40,     3,     3,    47,    51,    83,    69,     4,
      55,    39,     3
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
      yyerror (ff, ll, YY_("syntax error: cannot back up")); \
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
		  Type, Value, ff, ll); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, FitsFile* ff, ffFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, ff, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    FitsFile* ff;
    ffFlexLexer* ll;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (ff);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, FitsFile* ff, ffFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, ff, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    FitsFile* ff;
    ffFlexLexer* ll;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, ff, ll);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, FitsFile* ff, ffFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, ff, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    FitsFile* ff;
    ffFlexLexer* ll;
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
		       		       , ff, ll);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, ff, ll); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, FitsFile* ff, ffFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, ff, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    FitsFile* ff;
    ffFlexLexer* ll;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (ff);
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
int yyparse (FitsFile* ff, ffFlexLexer* ll);
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
yyparse (FitsFile* ff, ffFlexLexer* ll)
#else
int
yyparse (ff, ll)
    FitsFile* ff;
    ffFlexLexer* ll;
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
        case 24:
#line 106 "parser.Y"
    {GOTOARR(0);}
    break;

  case 26:
#line 108 "parser.Y"
    {GOTOFILT(0);}
    break;

  case 27:
#line 109 "parser.Y"
    {ff->setValid(1);ff->setpFilter(ff_filter);;}
    break;

  case 29:
#line 113 "parser.Y"
    {ff->setpName((yyvsp[(1) - (1)].str));;}
    break;

  case 30:
#line 123 "parser.Y"
    {ff->setpExt((yyvsp[(2) - (3)].str));;}
    break;

  case 31:
#line 124 "parser.Y"
    {ff->setpIndex((yyvsp[(2) - (3)].integer));;}
    break;

  case 32:
#line 127 "parser.Y"
    {ff->setpExt((yyvsp[(1) - (2)].str));;}
    break;

  case 33:
#line 128 "parser.Y"
    {ff->setpIndex((yyvsp[(1) - (2)].integer));;}
    break;

  case 44:
#line 144 "parser.Y"
    {ff->setpcoord(0);;}
    break;

  case 45:
#line 145 "parser.Y"
    {ff->setpcoord(1);;}
    break;

  case 46:
#line 146 "parser.Y"
    {ff->setpcoord(1);;}
    break;

  case 47:
#line 150 "parser.Y"
    {
	  // this is not a mistake
	  // need to fool parser into processing "xy0:xy1,block"
	  ff->setpxmin((yyvsp[(1) - (3)].integer)); ff->setpxmax((yyvsp[(3) - (3)].integer)); ff->setpxvalid(1);
	  ff->setpymin((yyvsp[(1) - (3)].integer)); ff->setpymax((yyvsp[(3) - (3)].integer)); ff->setpyvalid(1);
	;}
    break;

  case 48:
#line 157 "parser.Y"
    {ff->setpxmin((yyvsp[(3) - (3)].integer)-(yyvsp[(1) - (3)].integer)/2); ff->setpxmax((yyvsp[(3) - (3)].integer)+(yyvsp[(1) - (3)].integer)/2); ff->setpxvalid(1);;}
    break;

  case 49:
#line 159 "parser.Y"
    {
	  // this is not a mistake
	  // need to fool parser into processing "*,block"
	  ff->setpxvalid(0); ff->setpyvalid(0);
	;}
    break;

  case 50:
#line 167 "parser.Y"
    {ff->setpymin((yyvsp[(1) - (3)].integer)); ff->setpymax((yyvsp[(3) - (3)].integer)); ff->setpyvalid(1);;}
    break;

  case 51:
#line 169 "parser.Y"
    {ff->setpymin((yyvsp[(3) - (3)].integer)-(yyvsp[(1) - (3)].integer)/2); ff->setpymax((yyvsp[(3) - (3)].integer)+(yyvsp[(1) - (3)].integer)/2); ff->setpyvalid(1);;}
    break;

  case 52:
#line 170 "parser.Y"
    {ff->setpyvalid(0);;}
    break;

  case 53:
#line 174 "parser.Y"
    {
	  ff->setpxmin((yyvsp[(3) - (5)].integer)-(yyvsp[(1) - (5)].integer)/2); ff->setpxmax((yyvsp[(3) - (5)].integer)+(yyvsp[(1) - (5)].integer)/2); ff->setpxvalid(1);
	  ff->setpymin((yyvsp[(5) - (5)].integer)-(yyvsp[(1) - (5)].integer)/2); ff->setpymax((yyvsp[(5) - (5)].integer)+(yyvsp[(1) - (5)].integer)/2); ff->setpyvalid(1);
 	;}
    break;

  case 54:
#line 181 "parser.Y"
    {ff->setpzmin((yyvsp[(1) - (3)].integer)); ff->setpzmax((yyvsp[(3) - (3)].integer)); ff->setpzvalid(1);;}
    break;

  case 55:
#line 183 "parser.Y"
    {ff->setpzmin((yyvsp[(3) - (3)].integer)-(yyvsp[(1) - (3)].integer)/2); ff->setpzmax((yyvsp[(3) - (3)].integer)+(yyvsp[(1) - (3)].integer)/2); ff->setpzvalid(1);;}
    break;

  case 56:
#line 184 "parser.Y"
    {ff->setpzvalid(0);;}
    break;

  case 57:
#line 187 "parser.Y"
    {ff->setpblock((yyvsp[(1) - (1)].integer)); ff->setpbvalid(1);;}
    break;

  case 65:
#line 202 "parser.Y"
    {ff->setpBinXY((yyvsp[(2) - (5)].str),(yyvsp[(4) - (5)].str));;}
    break;

  case 66:
#line 203 "parser.Y"
    {ff->setpBinXY((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 67:
#line 204 "parser.Y"
    {ff->setpBinXYZ((yyvsp[(2) - (7)].str),(yyvsp[(4) - (7)].str),(yyvsp[(6) - (7)].str));;}
    break;

  case 68:
#line 205 "parser.Y"
    {ff->setpBinXYZ((yyvsp[(1) - (5)].str),(yyvsp[(3) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 69:
#line 206 "parser.Y"
    {ff->setpBinZ((yyvsp[(2) - (3)].str));;}
    break;

  case 70:
#line 207 "parser.Y"
    {ff->setpBinZ((yyvsp[(1) - (1)].str));;}
    break;

  case 74:
#line 217 "parser.Y"
    {ff->setpWidth((yyvsp[(3) - (3)].integer));;}
    break;

  case 75:
#line 218 "parser.Y"
    {ff->setpHeight((yyvsp[(3) - (3)].integer));;}
    break;

  case 76:
#line 219 "parser.Y"
    {ff->setpDepth((yyvsp[(3) - (3)].integer));;}
    break;

  case 77:
#line 220 "parser.Y"
    {ff->setpWidth((yyvsp[(3) - (3)].integer));ff->setpHeight((yyvsp[(3) - (3)].integer));;}
    break;

  case 78:
#line 221 "parser.Y"
    {ff->setpWidth((yyvsp[(3) - (3)].integer));ff->setpHeight((yyvsp[(3) - (3)].integer));;}
    break;

  case 79:
#line 222 "parser.Y"
    {ff->setpBitpix((yyvsp[(3) - (3)].integer));;}
    break;

  case 80:
#line 223 "parser.Y"
    {ff->setpSkip((yyvsp[(3) - (3)].integer));;}
    break;

  case 81:
#line 224 "parser.Y"
    {ff->setpArch((FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 82:
#line 225 "parser.Y"
    {ff->setpArch((FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 83:
#line 226 "parser.Y"
    {ff->setpArch((FitsFile::ArchType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 84:
#line 229 "parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 85:
#line 230 "parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 86:
#line 231 "parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 87:
#line 232 "parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 89:
#line 238 "parser.Y"
    {ff->setpBitpix(8);;}
    break;

  case 90:
#line 239 "parser.Y"
    {ff->setpBitpix(16);;}
    break;

  case 91:
#line 240 "parser.Y"
    {ff->setpBitpix(-16);;}
    break;

  case 92:
#line 241 "parser.Y"
    {ff->setpBitpix(32);;}
    break;

  case 93:
#line 242 "parser.Y"
    {ff->setpBitpix(64);;}
    break;

  case 94:
#line 243 "parser.Y"
    {ff->setpBitpix(-32);;}
    break;

  case 95:
#line 244 "parser.Y"
    {ff->setpBitpix(-32);;}
    break;

  case 96:
#line 245 "parser.Y"
    {ff->setpBitpix(-64);;}
    break;

  case 97:
#line 248 "parser.Y"
    {ff->setpWidth((yyvsp[(1) - (1)].integer));ff->setpHeight((yyvsp[(1) - (1)].integer));;}
    break;

  case 98:
#line 249 "parser.Y"
    {ff->setpWidth((yyvsp[(1) - (3)].integer));ff->setpHeight((yyvsp[(3) - (3)].integer));;}
    break;

  case 99:
#line 251 "parser.Y"
    {ff->setpWidth((yyvsp[(1) - (5)].integer));ff->setpHeight((yyvsp[(3) - (5)].integer));ff->setpDepth((yyvsp[(5) - (5)].integer));;}
    break;

  case 101:
#line 255 "parser.Y"
    {ff->setpSkip((yyvsp[(2) - (2)].integer));;}
    break;

  case 103:
#line 259 "parser.Y"
    {ff->setpArch(FitsFile::LITTLE);;}
    break;

  case 104:
#line 260 "parser.Y"
    {ff->setpArch(FitsFile::BIG);;}
    break;

  case 111:
#line 273 "parser.Y"
    {ff->setpHPXColumn((yyvsp[(3) - (3)].integer));;}
    break;

  case 112:
#line 274 "parser.Y"
    {ff->setpHPXQuad((yyvsp[(3) - (3)].integer));;}
    break;

  case 113:
#line 277 "parser.Y"
    {ff->setpHPXSystem(FitsHPX::EQU);;}
    break;

  case 114:
#line 278 "parser.Y"
    {ff->setpHPXSystem(FitsHPX::GAL);;}
    break;

  case 115:
#line 279 "parser.Y"
    {ff->setpHPXSystem(FitsHPX::ECL);;}
    break;

  case 116:
#line 280 "parser.Y"
    {ff->setpHPXSystem(FitsHPX::UNKNOWN);;}
    break;

  case 117:
#line 283 "parser.Y"
    {ff->setpHPXOrder(FitsHPX::RING);;}
    break;

  case 118:
#line 284 "parser.Y"
    {ff->setpHPXOrder(FitsHPX::NESTED);;}
    break;

  case 119:
#line 287 "parser.Y"
    {ff->setpHPXLayout(FitsHPX::EQUATOR);;}
    break;

  case 120:
#line 288 "parser.Y"
    {ff->setpHPXLayout(FitsHPX::NORTH);;}
    break;

  case 121:
#line 289 "parser.Y"
    {ff->setpHPXLayout(FitsHPX::SOUTH);;}
    break;


/* Line 1267 of yacc.c.  */
#line 1979 "parser.C"
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
      yyerror (ff, ll, YY_("syntax error"));
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
	    yyerror (ff, ll, yymsg);
	  }
	else
	  {
	    yyerror (ff, ll, YY_("syntax error"));
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
		      yytoken, &yylval, ff, ll);
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
		  yystos[yystate], yyvsp, ff, ll);
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
  yyerror (ff, ll, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, ff, ll);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, ff, ll);
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


#line 292 "parser.Y"


