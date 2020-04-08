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
#define yyparse enviparse
#define yylex   envilex
#define yyerror envierror
#define yylval  envilval
#define yychar  envichar
#define yydebug envidebug
#define yynerrs envinerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     EOF_ = 258,
     INT = 259,
     REAL = 260,
     STRING = 261,
     DEBUG_ = 262,
     ON_ = 263,
     OFF_ = 264,
     AVERAGE_ = 265,
     BAND_ = 266,
     BANDS_ = 267,
     BBL_ = 268,
     BIL_ = 269,
     BIP_ = 270,
     BSQ_ = 271,
     BYTE_ = 272,
     DATA_ = 273,
     DEFAULT_ = 274,
     DESCRIPTION_ = 275,
     ENVI_ = 276,
     FACTOR_ = 277,
     FRAME_ = 278,
     FILE_ = 279,
     FWHM_ = 280,
     GAIN_ = 281,
     HEADER_ = 282,
     INFO_ = 283,
     IGNORE_ = 284,
     INTERLEAVE_ = 285,
     LIMITS_ = 286,
     LINES_ = 287,
     MAJOR_ = 288,
     MAP_ = 289,
     MINOR_ = 290,
     NAMES_ = 291,
     OFFSET_ = 292,
     OFFSETS_ = 293,
     ORDER_ = 294,
     PIXEL_ = 295,
     PIXELS_ = 296,
     PLOT_ = 297,
     PROJECTION_ = 298,
     RANGE_ = 299,
     REFLECTANCE_ = 300,
     SAMPLES_ = 301,
     SCALE_ = 302,
     SCANNER_ = 303,
     SENSOR_ = 304,
     SIZE_ = 305,
     START_ = 306,
     STRETCH_ = 307,
     TITLES_ = 308,
     TYPE_ = 309,
     UNITS_ = 310,
     VALUE_ = 311,
     VALUES_ = 312,
     WAVELENGTH_ = 313
   };
#endif
/* Tokens.  */
#define EOF_ 258
#define INT 259
#define REAL 260
#define STRING 261
#define DEBUG_ 262
#define ON_ 263
#define OFF_ 264
#define AVERAGE_ 265
#define BAND_ 266
#define BANDS_ 267
#define BBL_ 268
#define BIL_ 269
#define BIP_ 270
#define BSQ_ 271
#define BYTE_ 272
#define DATA_ 273
#define DEFAULT_ 274
#define DESCRIPTION_ 275
#define ENVI_ 276
#define FACTOR_ 277
#define FRAME_ 278
#define FILE_ 279
#define FWHM_ 280
#define GAIN_ 281
#define HEADER_ 282
#define INFO_ 283
#define IGNORE_ 284
#define INTERLEAVE_ 285
#define LIMITS_ 286
#define LINES_ 287
#define MAJOR_ 288
#define MAP_ 289
#define MINOR_ 290
#define NAMES_ 291
#define OFFSET_ 292
#define OFFSETS_ 293
#define ORDER_ 294
#define PIXEL_ 295
#define PIXELS_ 296
#define PLOT_ 297
#define PROJECTION_ 298
#define RANGE_ 299
#define REFLECTANCE_ 300
#define SAMPLES_ 301
#define SCALE_ 302
#define SCANNER_ 303
#define SENSOR_ 304
#define SIZE_ 305
#define START_ 306
#define STRETCH_ 307
#define TITLES_ 308
#define TYPE_ 309
#define UNITS_ 310
#define VALUE_ 311
#define VALUES_ 312
#define WAVELENGTH_ 313




/* Copy the first part of user declarations.  */
#line 10 "enviparser.Y"

#define YYDEBUG 1

#define DISCARD_(x) {yyclearin; enviDiscard(x);}

#include "file.h"

#undef yyFlexLexer
#define yyFlexLexer enviFlexLexer
#include <FlexLexer.h>

extern int envilex(void*, enviFlexLexer*);
extern void envierror(FitsFile*, enviFlexLexer*, const char*);
extern void enviDiscard(int);

static int numWave;
static float wave[MAXWAVES];



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
#line 30 "enviparser.Y"
{
#define ENVIPARSERSIZE 1024
  float real;
  int integer;
  char str[ENVIPARSERSIZE];
}
/* Line 193 of yacc.c.  */
#line 247 "enviparser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 260 "enviparser.C"

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
#define YYLAST   202

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  70
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  28
/* YYNRULES -- Number of rules.  */
#define YYNRULES  77
/* YYNRULES -- Number of states.  */
#define YYNSTATES  200

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      66,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      63,    64,     2,     2,    69,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    65,
       2,    59,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,    61,
      62,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    67,     2,    68,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    11,    14,    15,    18,    20,
      22,    26,    30,    34,    38,    43,    49,    55,    56,    62,
      67,    71,    72,    78,    83,    88,    93,    98,   103,   108,
     113,   119,   125,   131,   137,   138,   145,   150,   155,   156,
     161,   165,   169,   175,   181,   190,   191,   195,   197,   199,
     201,   203,   205,   207,   209,   211,   213,   215,   217,   220,
     224,   227,   229,   233,   237,   239,   243,   247,   249,   268,
     269,   274,   277,   280,   284,   288,   291,   293
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      71,     0,    -1,    -1,    72,    73,    -1,    73,    74,    81,
      -1,    74,    81,    -1,    -1,     7,    83,    -1,    79,    -1,
      21,    -1,    20,    59,    87,    -1,    46,    59,     4,    -1,
      32,    59,     4,    -1,    12,    59,     4,    -1,    27,    37,
      59,     4,    -1,    33,    23,    38,    59,    91,    -1,    35,
      23,    38,    59,    91,    -1,    -1,    24,    54,    59,    75,
       6,    -1,    18,    54,    59,    84,    -1,    30,    59,    85,
      -1,    -1,    49,    54,    59,    76,     6,    -1,    17,    39,
      59,    86,    -1,    60,    51,    59,    91,    -1,    61,    51,
      59,    91,    -1,    34,    28,    59,    93,    -1,    43,    28,
      59,    87,    -1,    19,    12,    59,    91,    -1,    58,    55,
      59,     6,    -1,    45,    47,    22,    59,    82,    -1,    62,
      42,    44,    59,    89,    -1,    62,    42,    10,    59,    89,
      -1,    62,    42,    53,    59,    87,    -1,    -1,    18,    29,
      57,    59,    77,     6,    -1,    40,    50,    59,    89,    -1,
      11,    36,    59,    87,    -1,    -1,    58,    59,    78,    95,
      -1,    25,    59,    87,    -1,    13,    59,    87,    -1,    18,
      26,    57,    59,    89,    -1,    18,    37,    57,    59,    89,
      -1,    48,    31,    63,    41,    64,    59,     4,     4,    -1,
      -1,    65,    80,     6,    -1,    66,    -1,     3,    -1,     5,
      -1,     4,    -1,     8,    -1,     9,    -1,     4,    -1,    16,
      -1,    15,    -1,    14,    -1,     4,    -1,    67,    68,    -1,
      67,    88,    68,    -1,    88,     6,    -1,     6,    -1,    67,
      90,    68,    -1,    90,    69,    82,    -1,    82,    -1,    67,
      92,    68,    -1,    92,    69,     4,    -1,     4,    -1,    67,
       6,    69,     4,    69,     4,    69,    82,    69,    82,    69,
      82,    69,    82,    69,     4,    94,    68,    -1,    -1,    69,
       6,    69,     6,    -1,    69,     6,    -1,    67,    68,    -1,
      67,    96,    68,    -1,    96,    69,    97,    -1,    96,    69,
      -1,    97,    -1,    82,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   102,   102,   102,   104,   105,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   119,   120,
     121,   122,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   134,   135,   136,   137,   137,
     138,   139,   140,   141,   142,   145,   145,   148,   149,   152,
     153,   156,   157,   160,   190,   191,   192,   195,   208,   209,
     212,   213,   216,   219,   220,   223,   226,   227,   230,   233,
     234,   235,   238,   244,   259,   260,   261,   264
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EOF_", "INT", "REAL", "STRING",
  "DEBUG_", "ON_", "OFF_", "AVERAGE_", "BAND_", "BANDS_", "BBL_", "BIL_",
  "BIP_", "BSQ_", "BYTE_", "DATA_", "DEFAULT_", "DESCRIPTION_", "ENVI_",
  "FACTOR_", "FRAME_", "FILE_", "FWHM_", "GAIN_", "HEADER_", "INFO_",
  "IGNORE_", "INTERLEAVE_", "LIMITS_", "LINES_", "MAJOR_", "MAP_",
  "MINOR_", "NAMES_", "OFFSET_", "OFFSETS_", "ORDER_", "PIXEL_", "PIXELS_",
  "PLOT_", "PROJECTION_", "RANGE_", "REFLECTANCE_", "SAMPLES_", "SCALE_",
  "SCANNER_", "SENSOR_", "SIZE_", "START_", "STRETCH_", "TITLES_", "TYPE_",
  "UNITS_", "VALUE_", "VALUES_", "WAVELENGTH_", "'='", "'X'", "'Y'", "'Z'",
  "'('", "')'", "';'", "'\\n'", "'{'", "'}'", "','", "$accept", "start",
  "@1", "commands", "command", "@2", "@3", "@4", "@5", "comment", "@6",
  "terminator", "numeric", "debug", "bitpix", "encoding", "endian",
  "liststr", "strings", "listnum", "numerics", "listint", "ints",
  "listmap", "listmapopt", "listwave", "aWaves", "aWave", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,    61,
      88,    89,    90,    40,    41,    59,    10,   123,   125,    44
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    70,    72,    71,    73,    73,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    75,    74,    74,
      74,    76,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    77,    74,    74,    74,    78,    74,
      74,    74,    74,    74,    74,    80,    79,    81,    81,    82,
      82,    83,    83,    84,    85,    85,    85,    86,    87,    87,
      88,    88,    89,    90,    90,    91,    92,    92,    93,    94,
      94,    94,    95,    95,    96,    96,    96,    97
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     2,     0,     2,     1,     1,
       3,     3,     3,     3,     4,     5,     5,     0,     5,     4,
       3,     0,     5,     4,     4,     4,     4,     4,     4,     4,
       5,     5,     5,     5,     0,     6,     4,     4,     0,     4,
       3,     3,     5,     5,     8,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     3,
       2,     1,     3,     3,     1,     3,     3,     1,    18,     0,
       4,     2,     2,     3,     3,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     6,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     9,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    45,     6,     0,     8,    51,    52,     7,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,    48,
      47,     5,     0,    13,     0,    41,     0,     0,     0,     0,
       0,     0,    10,    17,    40,     0,    56,    55,    54,    20,
      12,     0,     0,     0,     0,     0,     0,    11,     0,    21,
       0,     0,     0,     0,     0,     0,     0,    46,     4,    37,
      61,    58,     0,    57,    23,     0,    34,     0,    53,    19,
       0,    28,     0,    14,     0,     0,    26,     0,     0,    36,
      27,     0,     0,     0,    29,     0,    39,    24,    25,     0,
       0,     0,    60,    59,    42,     0,    43,    67,     0,    18,
      15,     0,    16,    50,    49,    64,     0,    30,     0,    22,
      72,    77,     0,    76,    32,    31,    33,    35,    65,     0,
       0,    62,     0,     0,    73,    75,    66,     0,    63,     0,
      74,     0,    44,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    69,     0,     0,    71,    68,     0,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    32,    33,   122,   133,   145,   101,    34,
      67,    71,   161,    37,   119,    89,   114,    75,   112,   129,
     156,   121,   148,   126,   195,   136,   162,   163
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -126
static const yytype_int16 yypact[] =
{
    -126,    24,    68,  -126,    -1,     1,    -6,    -3,     6,   -14,
      50,    40,  -126,    12,    45,    46,    51,    53,    82,    81,
      92,    69,    90,    73,    63,    93,    67,    -9,    72,    74,
      85,  -126,     9,    -2,  -126,  -126,  -126,  -126,    75,   127,
      65,    76,    79,    80,    83,    84,    86,    65,    87,    65,
      88,    62,   134,   101,    89,   103,    91,    94,   120,   140,
      95,    96,    97,  -126,    98,   100,     7,   143,    -2,  -126,
    -126,  -126,    65,  -126,     4,  -126,   147,   102,   104,   105,
     148,    99,  -126,  -126,  -126,   150,  -126,  -126,  -126,  -126,
    -126,   106,   107,   108,   109,    65,   110,  -126,   119,  -126,
     156,   111,    99,    99,   112,   113,   114,  -126,  -126,  -126,
    -126,  -126,     5,  -126,  -126,   109,  -126,   109,  -126,  -126,
     164,  -126,   169,  -126,    99,   171,  -126,    99,    14,  -126,
    -126,    14,   115,   174,  -126,     0,  -126,  -126,  -126,   109,
     109,    65,  -126,  -126,  -126,   175,  -126,  -126,   -37,  -126,
    -126,   116,  -126,  -126,  -126,  -126,    22,  -126,   123,  -126,
    -126,  -126,    28,  -126,  -126,  -126,  -126,  -126,  -126,   166,
     179,  -126,    14,   180,  -126,    14,  -126,   117,  -126,   183,
    -126,   184,  -126,   121,    14,   122,    14,   124,    14,   125,
      14,   126,   185,   128,   186,   130,   131,  -126,   190,  -126
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -126,  -126,  -126,  -126,   167,  -126,  -126,  -126,  -126,  -126,
    -126,   133,  -125,  -126,  -126,  -126,  -126,   -47,  -126,   -33,
    -126,   -89,  -126,  -126,  -126,  -126,  -126,    27
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -4
static const yytype_int16 yytable[] =
{
      82,    69,    84,   155,   153,   154,   157,    35,    36,    -3,
     110,   142,    42,   137,   138,    43,     4,   104,   153,   154,
       5,     6,     7,    44,     3,   109,     8,     9,    10,    11,
      12,   168,   169,    13,    14,   150,    15,    38,   152,    16,
      45,    17,    18,    19,    20,    41,    62,   178,   130,    21,
      63,   105,    22,    39,    23,    24,    40,    25,    26,   185,
     106,   187,    46,   189,    70,   191,    48,    27,   160,    28,
      29,    30,   111,   143,    31,     4,    86,    87,    88,     5,
       6,     7,   144,    50,   146,     8,     9,    10,    11,    12,
     171,   172,    13,    14,   166,    15,   174,   175,    16,    47,
      17,    18,    19,    20,    49,    53,   164,   165,    21,    54,
      51,    22,    52,    23,    24,    55,    25,    26,    57,    56,
      58,    61,    59,    64,    60,    65,    27,    66,    28,    29,
      30,    73,    74,    31,    72,    76,    77,    78,    90,    91,
      79,    93,    96,    80,    97,    81,    83,    85,    92,   107,
      94,   113,   118,    95,   123,    99,   100,   102,    98,   103,
     132,   115,   134,   116,   117,   124,   120,   127,   147,   131,
     176,   139,   140,   141,   125,   149,   128,   151,   135,   158,
     159,   167,   173,   177,   179,   170,   181,   182,   183,   193,
     184,   186,   196,   188,   190,   192,   199,   194,   197,    68,
     198,   108,   180
};

static const yytype_uint8 yycheck[] =
{
      47,     3,    49,   128,     4,     5,   131,     8,     9,     0,
       6,     6,    26,   102,   103,    29,     7,    10,     4,     5,
      11,    12,    13,    37,     0,    72,    17,    18,    19,    20,
      21,    68,    69,    24,    25,   124,    27,    36,   127,    30,
      54,    32,    33,    34,    35,    39,    55,   172,    95,    40,
      59,    44,    43,    59,    45,    46,    59,    48,    49,   184,
      53,   186,    12,   188,    66,   190,    54,    58,    68,    60,
      61,    62,    68,    68,    65,     7,    14,    15,    16,    11,
      12,    13,   115,    37,   117,    17,    18,    19,    20,    21,
      68,    69,    24,    25,   141,    27,    68,    69,    30,    59,
      32,    33,    34,    35,    59,    23,   139,   140,    40,    28,
      59,    43,    59,    45,    46,    23,    48,    49,    28,    50,
      47,    54,    59,    51,    31,    51,    58,    42,    60,    61,
      62,     4,    67,    65,    59,    59,    57,    57,     4,    38,
      57,    38,    22,    59,     4,    59,    59,    59,    59,     6,
      59,     4,     4,    59,     4,    59,    59,    59,    63,    59,
      41,    59,     6,    59,    59,    59,    67,    59,     4,    59,
       4,    59,    59,    59,    67,     6,    67,     6,    67,    64,
       6,     6,    59,     4,     4,    69,    69,     4,     4,     4,
      69,    69,     6,    69,    69,    69,     6,    69,    68,    32,
      69,    68,   175
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    71,    72,     0,     7,    11,    12,    13,    17,    18,
      19,    20,    21,    24,    25,    27,    30,    32,    33,    34,
      35,    40,    43,    45,    46,    48,    49,    58,    60,    61,
      62,    65,    73,    74,    79,     8,     9,    83,    36,    59,
      59,    39,    26,    29,    37,    54,    12,    59,    54,    59,
      37,    59,    59,    23,    28,    23,    50,    28,    47,    59,
      31,    54,    55,    59,    51,    51,    42,    80,    74,     3,
      66,    81,    59,     4,    67,    87,    59,    57,    57,    57,
      59,    59,    87,    59,    87,    59,    14,    15,    16,    85,
       4,    38,    59,    38,    59,    59,    22,     4,    63,    59,
      59,    78,    59,    59,    10,    44,    53,     6,    81,    87,
       6,    68,    88,     4,    86,    59,    59,    59,     4,    84,
      67,    91,    75,     4,    59,    67,    93,    59,    67,    89,
      87,    59,    41,    76,     6,    67,    95,    91,    91,    59,
      59,    59,     6,    68,    89,    77,    89,     4,    92,     6,
      91,     6,    91,     4,     5,    82,    90,    82,    64,     6,
      68,    82,    96,    97,    89,    89,    87,     6,    68,    69,
      69,    68,    69,    59,    68,    69,     4,     4,    82,     4,
      97,    69,     4,     4,    69,    82,    69,    82,    69,    82,
      69,    82,    69,     4,    69,    94,     6,    68,    69,     6
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
      yyerror (envi, ll, YY_("syntax error: cannot back up")); \
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
		  Type, Value, envi, ll); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, FitsFile* envi, enviFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, envi, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    FitsFile* envi;
    enviFlexLexer* ll;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (envi);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, FitsFile* envi, enviFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, envi, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    FitsFile* envi;
    enviFlexLexer* ll;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, envi, ll);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, FitsFile* envi, enviFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, envi, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    FitsFile* envi;
    enviFlexLexer* ll;
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
		       		       , envi, ll);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, envi, ll); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, FitsFile* envi, enviFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, envi, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    FitsFile* envi;
    enviFlexLexer* ll;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (envi);
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
int yyparse (FitsFile* envi, enviFlexLexer* ll);
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
yyparse (FitsFile* envi, enviFlexLexer* ll)
#else
int
yyparse (envi, ll)
    FitsFile* envi;
    enviFlexLexer* ll;
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
#line 102 "enviparser.Y"
    {envi->setpArch(FitsFile::BIG);}
    break;

  case 11:
#line 113 "enviparser.Y"
    {envi->setpWidth((yyvsp[(3) - (3)].integer));;}
    break;

  case 12:
#line 114 "enviparser.Y"
    {envi->setpHeight((yyvsp[(3) - (3)].integer));;}
    break;

  case 13:
#line 115 "enviparser.Y"
    {envi->setpDepth((yyvsp[(3) - (3)].integer));;}
    break;

  case 14:
#line 116 "enviparser.Y"
    {envi->setpSkip((yyvsp[(4) - (4)].integer));;}
    break;

  case 17:
#line 119 "enviparser.Y"
    {DISCARD_(1);}
    break;

  case 21:
#line 122 "enviparser.Y"
    {DISCARD_(1);}
    break;

  case 34:
#line 134 "enviparser.Y"
    {DISCARD_(1);}
    break;

  case 38:
#line 137 "enviparser.Y"
    {numWave=0;;}
    break;

  case 45:
#line 145 "enviparser.Y"
    {DISCARD_(1);}
    break;

  case 48:
#line 149 "enviparser.Y"
    {YYACCEPT;;}
    break;

  case 49:
#line 152 "enviparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 50:
#line 153 "enviparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 51:
#line 156 "enviparser.Y"
    {yydebug=1;;}
    break;

  case 52:
#line 157 "enviparser.Y"
    {yydebug=0;;}
    break;

  case 53:
#line 161 "enviparser.Y"
    {
	  switch((yyvsp[(1) - (1)].integer)) {
	  case 1:
	    {envi->setpBitpix(8);}
	    break;
	  case 2:
	    {envi->setpBitpix(16);}
	    break;
	  case 12:
	    {envi->setpBitpix(-16);}
	    break;
	  case 3:
	    {envi->setpBitpix(32);}
	    break;
	  case 14:
	    {envi->setpBitpix(64);}
	    break;
	  case 4:
	    {envi->setpBitpix(-32);}
	    break;
	  case 5:
	    {envi->setpBitpix(-64);}
	    break;
	  default:
	    break;
	  }
	;}
    break;

  case 54:
#line 190 "enviparser.Y"
    {envi->setpEncoding(FitsFile::BSQ);;}
    break;

  case 55:
#line 191 "enviparser.Y"
    {envi->setpEncoding(FitsFile::BIP);;}
    break;

  case 56:
#line 192 "enviparser.Y"
    {envi->setpEncoding(FitsFile::BIL);;}
    break;

  case 57:
#line 196 "enviparser.Y"
    {
	  switch((yyvsp[(1) - (1)].integer)) {
	  case 0:
	    {envi->setpArch(FitsFile::LITTLE);}
	    break;
	  case 1:
	    {envi->setpArch(FitsFile::BIG);}
	    break;
	  }
	;}
    break;

  case 72:
#line 239 "enviparser.Y"
    {
	  envi->setpCRPIX3(1);
	  envi->setpCRVAL3(1);
	  envi->setpCDELT3(1);
	;}
    break;

  case 73:
#line 245 "enviparser.Y"
    {
	  if (numWave>=2) {
	    envi->setpCRPIX3(1);
	    envi->setpCRVAL3(wave[0]);
	    envi->setpCDELT3((wave[numWave-1]-wave[0])/(numWave-1));
	  }
	  else {
	    envi->setpCRPIX3(1);
	    envi->setpCRVAL3(1);
	    envi->setpCDELT3(1);
	  }
	;}
    break;

  case 77:
#line 265 "enviparser.Y"
    {
	  if (numWave < MAXWAVES)
	    wave[numWave++] = (yyvsp[(1) - (1)].real);
	;}
    break;


/* Line 1267 of yacc.c.  */
#line 1802 "enviparser.C"
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
      yyerror (envi, ll, YY_("syntax error"));
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
	    yyerror (envi, ll, yymsg);
	  }
	else
	  {
	    yyerror (envi, ll, YY_("syntax error"));
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
		      yytoken, &yylval, envi, ll);
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
		  yystos[yystate], yyvsp, envi, ll);
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
  yyerror (envi, ll, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, envi, ll);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, envi, ll);
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


#line 271 "enviparser.Y"


