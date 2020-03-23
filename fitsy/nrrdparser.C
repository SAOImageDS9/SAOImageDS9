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
#define yyparse nrrdparse
#define yylex   nrrdlex
#define yyerror nrrderror
#define yylval  nrrdlval
#define yychar  nrrdchar
#define yydebug nrrddebug
#define yynerrs nrrdnerrs


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
     NRRD0001_ = 265,
     NRRD0002_ = 266,
     NRRD0003_ = 267,
     NRRD0004_ = 268,
     NRRD0005_ = 269,
     DATA_ = 270,
     FILE_ = 271,
     SPACE_ = 272,
     UNITS_ = 273,
     DIMENSIONS_ = 274,
     ORIGIN_ = 275,
     DIRECTIONS_ = 276,
     DIMENSION_ = 277,
     TYPE_ = 278,
     SIGNED_ = 279,
     UNSIGNED_ = 280,
     CHAR_ = 281,
     INT8_ = 282,
     INT8_T_ = 283,
     UCHAR_ = 284,
     UINT8_ = 285,
     UINT8_T_ = 286,
     SHORT_ = 287,
     INT_ = 288,
     INT16_ = 289,
     INT16_T_ = 290,
     USHORT_ = 291,
     UINT16_ = 292,
     UINT16_T_ = 293,
     INT32_ = 294,
     INT32_T_ = 295,
     UINT_ = 296,
     UINT32_ = 297,
     UINT32_T_ = 298,
     LONG_ = 299,
     LONGLONG_ = 300,
     INT64_ = 301,
     INT64_T_ = 302,
     ULONGLONG_ = 303,
     UINT64_ = 304,
     UINT64_T_ = 305,
     FLOAT_ = 306,
     DOUBLE_ = 307,
     BLOCK_ = 308,
     SIZE_ = 309,
     BLOCKSIZE_ = 310,
     ENCODING_ = 311,
     RAW_ = 312,
     TXT_ = 313,
     TEXT_ = 314,
     ASCII_ = 315,
     HEX_ = 316,
     GZ_ = 317,
     GZIP_ = 318,
     BZ2_ = 319,
     BZIP2_ = 320,
     ENDIAN_ = 321,
     BIG_ = 322,
     LITTLE_ = 323,
     CONTENT_ = 324,
     OLD_ = 325,
     MIN_ = 326,
     OLDMIN_ = 327,
     MAX_ = 328,
     OLDMAX_ = 329,
     SKIP_ = 330,
     LINE_ = 331,
     LINESKIP_ = 332,
     BYTE_ = 333,
     BYTESKIP_ = 334,
     NUMBER_ = 335,
     SAMPLE_ = 336,
     SAMPLEUNITS_ = 337,
     SIZES_ = 338,
     SPACINGS_ = 339,
     THICKNESSES_ = 340,
     AXIS_ = 341,
     MINS_ = 342,
     AXISMINS_ = 343,
     MAXS_ = 344,
     AXISMAXS_ = 345,
     CENTERS_ = 346,
     CENTERINGS_ = 347,
     CELL_ = 348,
     NODE_ = 349,
     NONE_ = 350,
     LABELS_ = 351,
     KINDS_ = 352,
     DOMAINS_ = 353
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
#define NRRD0001_ 265
#define NRRD0002_ 266
#define NRRD0003_ 267
#define NRRD0004_ 268
#define NRRD0005_ 269
#define DATA_ 270
#define FILE_ 271
#define SPACE_ 272
#define UNITS_ 273
#define DIMENSIONS_ 274
#define ORIGIN_ 275
#define DIRECTIONS_ 276
#define DIMENSION_ 277
#define TYPE_ 278
#define SIGNED_ 279
#define UNSIGNED_ 280
#define CHAR_ 281
#define INT8_ 282
#define INT8_T_ 283
#define UCHAR_ 284
#define UINT8_ 285
#define UINT8_T_ 286
#define SHORT_ 287
#define INT_ 288
#define INT16_ 289
#define INT16_T_ 290
#define USHORT_ 291
#define UINT16_ 292
#define UINT16_T_ 293
#define INT32_ 294
#define INT32_T_ 295
#define UINT_ 296
#define UINT32_ 297
#define UINT32_T_ 298
#define LONG_ 299
#define LONGLONG_ 300
#define INT64_ 301
#define INT64_T_ 302
#define ULONGLONG_ 303
#define UINT64_ 304
#define UINT64_T_ 305
#define FLOAT_ 306
#define DOUBLE_ 307
#define BLOCK_ 308
#define SIZE_ 309
#define BLOCKSIZE_ 310
#define ENCODING_ 311
#define RAW_ 312
#define TXT_ 313
#define TEXT_ 314
#define ASCII_ 315
#define HEX_ 316
#define GZ_ 317
#define GZIP_ 318
#define BZ2_ 319
#define BZIP2_ 320
#define ENDIAN_ 321
#define BIG_ 322
#define LITTLE_ 323
#define CONTENT_ 324
#define OLD_ 325
#define MIN_ 326
#define OLDMIN_ 327
#define MAX_ 328
#define OLDMAX_ 329
#define SKIP_ 330
#define LINE_ 331
#define LINESKIP_ 332
#define BYTE_ 333
#define BYTESKIP_ 334
#define NUMBER_ 335
#define SAMPLE_ 336
#define SAMPLEUNITS_ 337
#define SIZES_ 338
#define SPACINGS_ 339
#define THICKNESSES_ 340
#define AXIS_ 341
#define MINS_ 342
#define AXISMINS_ 343
#define MAXS_ 344
#define AXISMAXS_ 345
#define CENTERS_ 346
#define CENTERINGS_ 347
#define CELL_ 348
#define NODE_ 349
#define NONE_ 350
#define LABELS_ 351
#define KINDS_ 352
#define DOMAINS_ 353




/* Copy the first part of user declarations.  */
#line 10 "nrrdparser.Y"

#define YYDEBUG 1

#define DISCARD_(x) {yyclearin; nrrdDiscard(x);}

#include "file.h"

#undef yyFlexLexer
#define yyFlexLexer nrrdFlexLexer
#include <FlexLexer.h>

extern int nrrdlex(void*, nrrdFlexLexer*);
extern void nrrderror(FitsFile*, nrrdFlexLexer*, const char*);
extern void nrrdDiscard(int);

int dim;



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
#line 29 "nrrdparser.Y"
{
#define NRRDPARSERSIZE 256
  float real;
  int integer;
  char str[NRRDPARSERSIZE];
}
/* Line 193 of yacc.c.  */
#line 326 "nrrdparser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 339 "nrrdparser.C"

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
#define YYLAST   245

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  102
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  152
/* YYNRULES -- Number of states.  */
#define YYNSTATES  240

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   353

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     101,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,   100,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    99,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     7,    11,    14,    15,    18,    20,
      22,    27,    30,    34,    38,    40,    44,    48,    49,    54,
      58,    62,    64,    66,    68,    70,    74,    78,    82,    86,
      91,    95,   100,   104,   108,   112,   116,   120,   124,   126,
     128,   130,   132,   134,   135,   139,   141,   143,   145,   147,
     149,   151,   152,   156,   160,   161,   166,   167,   172,   173,
     178,   180,   182,   184,   186,   188,   190,   192,   194,   196,
     198,   200,   202,   205,   207,   209,   211,   214,   216,   218,
     220,   223,   226,   230,   232,   234,   236,   239,   243,   245,
     247,   249,   252,   254,   256,   258,   261,   263,   265,   267,
     270,   274,   278,   283,   285,   287,   289,   293,   298,   300,
     302,   307,   311,   313,   315,   317,   319,   321,   323,   325,
     327,   329,   331,   333,   338,   342,   347,   351,   356,   360,
     365,   369,   372,   374,   376,   379,   381,   384,   386,   389,
     391,   394,   396,   399,   401,   403,   405,   407,   410,   412,
     415,   417,   420
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     103,     0,    -1,    -1,   104,   105,    -1,   105,   106,   111,
      -1,   106,   111,    -1,    -1,     7,   113,    -1,   108,    -1,
     109,    -1,    15,    16,    99,     6,    -1,    17,   114,    -1,
      22,    99,     4,    -1,    23,    99,   119,    -1,   128,    -1,
      56,    99,   129,    -1,    66,    99,   130,    -1,    -1,    69,
      99,   107,     6,    -1,    71,    99,   112,    -1,    73,    99,
     112,    -1,   131,    -1,   132,    -1,   133,    -1,   134,    -1,
      80,    99,     6,    -1,    83,    99,   135,    -1,    84,    99,
     137,    -1,    85,    99,   138,    -1,    86,    87,    99,   139,
      -1,    88,    99,   139,    -1,    86,    89,    99,   140,    -1,
      90,    99,   140,    -1,    91,    99,   141,    -1,    92,    99,
     141,    -1,    96,    99,   143,    -1,    18,    99,   144,    -1,
      97,    99,   145,    -1,    10,    -1,    11,    -1,    12,    -1,
      13,    -1,    14,    -1,    -1,   100,   110,     6,    -1,   101,
      -1,     3,    -1,     5,    -1,     4,    -1,     8,    -1,     9,
      -1,    -1,    99,   115,     6,    -1,    22,    99,     4,    -1,
      -1,    18,    99,   116,     6,    -1,    -1,    20,    99,   117,
       6,    -1,    -1,    21,    99,   118,     6,    -1,   120,    -1,
     121,    -1,   122,    -1,   123,    -1,   124,    -1,   125,    -1,
     126,    -1,   127,    -1,    51,    -1,    52,    -1,    53,    -1,
      26,    -1,    24,    26,    -1,    27,    -1,    28,    -1,    29,
      -1,    25,    26,    -1,    30,    -1,    31,    -1,    32,    -1,
      32,    33,    -1,    24,    32,    -1,    24,    32,    33,    -1,
      34,    -1,    35,    -1,    36,    -1,    25,    32,    -1,    25,
      32,    33,    -1,    37,    -1,    38,    -1,    33,    -1,    24,
      33,    -1,    39,    -1,    40,    -1,    41,    -1,    25,    33,
      -1,    42,    -1,    43,    -1,    45,    -1,    44,    44,    -1,
      44,    44,    33,    -1,    24,    44,    44,    -1,    24,    44,
      44,    33,    -1,    46,    -1,    47,    -1,    48,    -1,    25,
      44,    44,    -1,    25,    44,    44,    33,    -1,    49,    -1,
      50,    -1,    53,    54,    99,     4,    -1,    55,    99,     4,
      -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,
      -1,    62,    -1,    63,    -1,    64,    -1,    65,    -1,    67,
      -1,    68,    -1,    70,    71,    99,   112,    -1,    72,    99,
     112,    -1,    70,    73,    99,   112,    -1,    74,    99,   112,
      -1,    76,    75,    99,     4,    -1,    77,    99,     4,    -1,
      78,    75,    99,     4,    -1,    79,    99,     4,    -1,   135,
     136,    -1,   136,    -1,     4,    -1,   137,   112,    -1,   112,
      -1,   138,   112,    -1,   112,    -1,   139,   112,    -1,   112,
      -1,   140,   112,    -1,   112,    -1,   141,   142,    -1,   142,
      -1,    93,    -1,    94,    -1,    95,    -1,   143,     6,    -1,
       6,    -1,   144,     6,    -1,     6,    -1,   145,     6,    -1,
       6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   168,   168,   168,   171,   172,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   186,   187,
     188,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   208,   209,
     210,   211,   212,   215,   215,   218,   219,   222,   223,   226,
     227,   230,   230,   231,   232,   232,   233,   233,   234,   234,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   250,   251,   252,   253,   256,   257,   258,   259,   262,
     263,   264,   265,   266,   267,   270,   271,   272,   273,   274,
     277,   278,   279,   280,   283,   284,   285,   286,   289,   290,
     291,   292,   293,   294,   295,   298,   299,   300,   301,   302,
     305,   306,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   320,   321,   324,   325,   328,   329,   332,   333,   336,
     337,   340,   341,   344,   361,   362,   365,   366,   369,   370,
     373,   374,   377,   378,   381,   382,   383,   386,   387,   390,
     391,   394,   395
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "EOF_", "INT", "REAL", "STRING",
  "DEBUG_", "ON_", "OFF_", "NRRD0001_", "NRRD0002_", "NRRD0003_",
  "NRRD0004_", "NRRD0005_", "DATA_", "FILE_", "SPACE_", "UNITS_",
  "DIMENSIONS_", "ORIGIN_", "DIRECTIONS_", "DIMENSION_", "TYPE_",
  "SIGNED_", "UNSIGNED_", "CHAR_", "INT8_", "INT8_T_", "UCHAR_", "UINT8_",
  "UINT8_T_", "SHORT_", "INT_", "INT16_", "INT16_T_", "USHORT_", "UINT16_",
  "UINT16_T_", "INT32_", "INT32_T_", "UINT_", "UINT32_", "UINT32_T_",
  "LONG_", "LONGLONG_", "INT64_", "INT64_T_", "ULONGLONG_", "UINT64_",
  "UINT64_T_", "FLOAT_", "DOUBLE_", "BLOCK_", "SIZE_", "BLOCKSIZE_",
  "ENCODING_", "RAW_", "TXT_", "TEXT_", "ASCII_", "HEX_", "GZ_", "GZIP_",
  "BZ2_", "BZIP2_", "ENDIAN_", "BIG_", "LITTLE_", "CONTENT_", "OLD_",
  "MIN_", "OLDMIN_", "MAX_", "OLDMAX_", "SKIP_", "LINE_", "LINESKIP_",
  "BYTE_", "BYTESKIP_", "NUMBER_", "SAMPLE_", "SAMPLEUNITS_", "SIZES_",
  "SPACINGS_", "THICKNESSES_", "AXIS_", "MINS_", "AXISMINS_", "MAXS_",
  "AXISMAXS_", "CENTERS_", "CENTERINGS_", "CELL_", "NODE_", "NONE_",
  "LABELS_", "KINDS_", "DOMAINS_", "':'", "'#'", "'\\n'", "$accept",
  "start", "@1", "commands", "command", "@2", "magic", "comment", "@3",
  "terminator", "numeric", "debug", "space", "@4", "@5", "@6", "@7",
  "type", "char", "uchar", "short", "ushort", "int", "uint", "long",
  "ulong", "block", "encoding", "endian", "oldmin", "oldmax", "lineskip",
  "byteskip", "sizes", "size", "spacings", "thicknesses", "axismins",
  "axismaxs", "centers", "center", "labels", "units", "kinds", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,    58,
      35,    10
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   102,   104,   103,   105,   105,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   107,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   108,   108,
     108,   108,   108,   110,   109,   111,   111,   112,   112,   113,
     113,   115,   114,   114,   116,   114,   117,   114,   118,   114,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   120,   120,   120,   120,   121,   121,   121,   121,   122,
     122,   122,   122,   122,   122,   123,   123,   123,   123,   123,
     124,   124,   124,   124,   125,   125,   125,   125,   126,   126,
     126,   126,   126,   126,   126,   127,   127,   127,   127,   127,
     128,   128,   129,   129,   129,   129,   129,   129,   129,   129,
     129,   130,   130,   131,   131,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   137,   137,   138,   138,   139,   139,
     140,   140,   141,   141,   142,   142,   142,   143,   143,   144,
     144,   145,   145
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     3,     2,     0,     2,     1,     1,
       4,     2,     3,     3,     1,     3,     3,     0,     4,     3,
       3,     1,     1,     1,     1,     3,     3,     3,     3,     4,
       3,     4,     3,     3,     3,     3,     3,     3,     1,     1,
       1,     1,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     0,     3,     3,     0,     4,     0,     4,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     2,     1,     1,     1,
       2,     2,     3,     1,     1,     1,     2,     3,     1,     1,
       1,     2,     1,     1,     1,     2,     1,     1,     1,     2,
       3,     3,     4,     1,     1,     1,     3,     4,     1,     1,
       4,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     3,     4,     3,     4,     3,     4,
       3,     2,     1,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     6,     1,     0,    38,    39,    40,    41,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      43,     6,     0,     8,     9,    14,    21,    22,    23,    24,
      49,    50,     7,     0,     0,     0,     0,     0,    51,    11,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    46,    45,     5,     0,    54,    56,    58,     0,
       0,   150,    36,    12,     0,     0,    71,    73,    74,    75,
      77,    78,    79,    90,    83,    84,    85,    88,    89,    92,
      93,    94,    96,    97,     0,    98,   103,   104,   105,   108,
     109,    68,    69,    70,    13,    60,    61,    62,    63,    64,
      65,    66,    67,     0,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,    15,   121,   122,    16,     0,     0,
       0,    48,    47,    19,   124,    20,   126,     0,   128,     0,
     130,    25,   133,    26,   132,   135,    27,   137,    28,     0,
       0,   139,    30,   141,    32,   144,   145,   146,    33,   143,
      34,   148,    35,   152,    37,    44,     4,    10,     0,     0,
       0,    53,    52,   149,    72,    81,    91,     0,    76,    86,
      95,     0,    80,    99,   110,    18,   123,   125,   127,   129,
     131,   134,   136,    29,    31,   138,   140,   142,   147,   151,
      55,    57,    59,    82,   101,    87,   106,   100,   102,   107
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    41,    42,   158,    43,    44,    90,    94,
     181,    52,    59,   100,   198,   199,   200,   134,   135,   136,
     137,   138,   139,   140,   141,   142,    45,   154,   157,    46,
      47,    48,    49,   173,   174,   176,   178,   182,   184,   188,
     189,   192,   102,   194
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -138
static const yytype_int16 yypact[] =
{
    -138,     4,   145,  -138,    79,  -138,  -138,  -138,  -138,  -138,
      52,   -13,   -36,   -28,   -16,    31,    -4,    -3,    -2,    -1,
     -25,     0,     2,     6,     8,    34,    12,    53,    16,    30,
      35,    37,    41,   -37,    42,    43,    46,    49,    50,    51,
    -138,    47,     3,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,    62,    65,    66,    67,    70,  -138,  -138,
     116,   142,    -8,    71,   147,    17,    24,  -138,    72,    73,
      89,    89,    89,    89,    74,   170,    76,   172,   171,   174,
      89,    89,    80,    81,    89,    89,   -81,   -81,   175,   176,
     177,     3,  -138,  -138,  -138,   178,  -138,  -138,  -138,   181,
     180,  -138,   182,  -138,    23,    40,  -138,  -138,  -138,  -138,
    -138,  -138,   154,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,   146,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,   185,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,   186,    89,
      89,  -138,  -138,  -138,  -138,  -138,  -138,   187,  -138,   189,
    -138,  -138,  -138,   174,  -138,  -138,    89,  -138,    89,    89,
      89,  -138,    89,  -138,    89,  -138,  -138,  -138,   -81,  -138,
     -81,  -138,   188,  -138,   190,  -138,  -138,  -138,   191,   193,
     196,  -138,  -138,  -138,  -138,   162,  -138,   159,  -138,   173,
    -138,   160,  -138,   179,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,    89,    89,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,   194,  -138,   199,  -138,  -138,  -138
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -138,  -138,  -138,  -138,   164,  -138,  -138,  -138,  -138,   117,
     -70,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,  -138,
    -138,  -138,  -138,  -138,    36,  -138,  -138,    28,    33,   123,
    -137,  -138,  -138,  -138
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -4
static const yytype_int16 yytable[] =
{
     163,   164,   165,   166,     3,    54,    92,    55,    56,    57,
     175,   177,   185,   186,   187,   183,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,    68,    -3,    69,   204,
      82,   227,    83,   227,     4,   205,   206,     5,     6,     7,
       8,     9,    10,    60,    11,    12,   208,   207,    53,    13,
      14,    61,   209,   210,   145,   146,   147,   148,   149,   150,
     151,   152,   153,    62,   211,    63,    58,    50,    51,   216,
     217,   155,   156,   161,   162,    64,    65,    66,    67,    70,
      15,    71,    16,    17,    93,    72,   221,    73,   222,    74,
     183,    75,   225,    18,   226,    77,    19,    20,    21,    22,
      23,    24,   101,    25,    26,    27,    28,    29,    76,    78,
      30,    31,    32,    33,    79,    34,    80,    35,    36,    37,
      81,    84,    85,    38,    39,    86,   103,    40,    87,    88,
      89,   144,     4,   225,   226,     5,     6,     7,     8,     9,
      10,    95,    11,    12,    96,    97,    98,    13,    14,    99,
     143,   159,   160,   167,   168,   169,   170,   171,   172,   179,
     180,   191,   193,   195,   197,   201,   202,   212,   203,   214,
     213,   218,   215,   219,   228,   233,   229,   230,    15,   231,
      16,    17,   232,   234,   236,    91,   235,   223,   196,   220,
     190,    18,   237,   224,    19,    20,    21,    22,    23,    24,
       0,    25,    26,    27,    28,    29,     0,   238,    30,    31,
      32,    33,   239,    34,     0,    35,    36,    37,     0,     0,
       0,    38,    39,     0,     0,    40
};

static const yytype_int16 yycheck[] =
{
      70,    71,    72,    73,     0,    18,     3,    20,    21,    22,
      80,    81,    93,    94,    95,    85,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    71,     0,    73,    26,
      87,   188,    89,   190,     7,    32,    33,    10,    11,    12,
      13,    14,    15,    99,    17,    18,    26,    44,    16,    22,
      23,    99,    32,    33,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    99,    44,    54,    99,     8,     9,   159,
     160,    67,    68,     4,     5,    99,    99,    99,    99,    99,
      53,    99,    55,    56,   101,    99,   176,    99,   178,    75,
     180,    99,   182,    66,   184,    99,    69,    70,    71,    72,
      73,    74,     6,    76,    77,    78,    79,    80,    75,    99,
      83,    84,    85,    86,    99,    88,    99,    90,    91,    92,
      99,    99,    99,    96,    97,    99,     4,   100,    99,    99,
      99,     4,     7,   223,   224,    10,    11,    12,    13,    14,
      15,    99,    17,    18,    99,    99,    99,    22,    23,    99,
      99,    99,    99,    99,     4,    99,     4,     6,     4,    99,
      99,     6,     6,     6,     6,     4,     6,    33,     6,     4,
      44,     4,     6,     4,     6,    33,     6,     6,    53,     6,
      55,    56,     6,    44,    44,    41,    33,   179,    91,   173,
      87,    66,    33,   180,    69,    70,    71,    72,    73,    74,
      -1,    76,    77,    78,    79,    80,    -1,    33,    83,    84,
      85,    86,    33,    88,    -1,    90,    91,    92,    -1,    -1,
      -1,    96,    97,    -1,    -1,   100
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   103,   104,     0,     7,    10,    11,    12,    13,    14,
      15,    17,    18,    22,    23,    53,    55,    56,    66,    69,
      70,    71,    72,    73,    74,    76,    77,    78,    79,    80,
      83,    84,    85,    86,    88,    90,    91,    92,    96,    97,
     100,   105,   106,   108,   109,   128,   131,   132,   133,   134,
       8,     9,   113,    16,    18,    20,    21,    22,    99,   114,
      99,    99,    99,    54,    99,    99,    99,    99,    71,    73,
      99,    99,    99,    99,    75,    99,    75,    99,    99,    99,
      99,    99,    87,    89,    99,    99,    99,    99,    99,    99,
     110,   106,     3,   101,   111,    99,    99,    99,    99,    99,
     115,     6,   144,     4,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   119,   120,   121,   122,   123,   124,
     125,   126,   127,    99,     4,    57,    58,    59,    60,    61,
      62,    63,    64,    65,   129,    67,    68,   130,   107,    99,
      99,     4,     5,   112,   112,   112,   112,    99,     4,    99,
       4,     6,     4,   135,   136,   112,   137,   112,   138,    99,
      99,   112,   139,   112,   140,    93,    94,    95,   141,   142,
     141,     6,   143,     6,   145,     6,   111,     6,   116,   117,
     118,     4,     6,     6,    26,    32,    33,    44,    26,    32,
      33,    44,    33,    44,     4,     6,   112,   112,     4,     4,
     136,   112,   112,   139,   140,   112,   112,   142,     6,     6,
       6,     6,     6,    33,    44,    33,    44,    33,    33,    33
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
      yyerror (nrrd, ll, YY_("syntax error: cannot back up")); \
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
		  Type, Value, nrrd, ll); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, FitsFile* nrrd, nrrdFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, nrrd, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    FitsFile* nrrd;
    nrrdFlexLexer* ll;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (nrrd);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, FitsFile* nrrd, nrrdFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, nrrd, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    FitsFile* nrrd;
    nrrdFlexLexer* ll;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, nrrd, ll);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, FitsFile* nrrd, nrrdFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, nrrd, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    FitsFile* nrrd;
    nrrdFlexLexer* ll;
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
		       		       , nrrd, ll);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, nrrd, ll); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, FitsFile* nrrd, nrrdFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, nrrd, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    FitsFile* nrrd;
    nrrdFlexLexer* ll;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (nrrd);
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
int yyparse (FitsFile* nrrd, nrrdFlexLexer* ll);
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
yyparse (FitsFile* nrrd, nrrdFlexLexer* ll)
#else
int
yyparse (nrrd, ll)
    FitsFile* nrrd;
    nrrdFlexLexer* ll;
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
#line 168 "nrrdparser.Y"
    {dim=0; nrrd->setpArch(FitsFile::BIG);;}
    break;

  case 17:
#line 186 "nrrdparser.Y"
    {DISCARD_(1);}
    break;

  case 43:
#line 215 "nrrdparser.Y"
    {DISCARD_(1);}
    break;

  case 46:
#line 219 "nrrdparser.Y"
    {YYACCEPT;;}
    break;

  case 47:
#line 222 "nrrdparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 48:
#line 223 "nrrdparser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 49:
#line 226 "nrrdparser.Y"
    {yydebug=1;;}
    break;

  case 50:
#line 227 "nrrdparser.Y"
    {yydebug=0;;}
    break;

  case 51:
#line 230 "nrrdparser.Y"
    {DISCARD_(1);}
    break;

  case 54:
#line 232 "nrrdparser.Y"
    {DISCARD_(1);}
    break;

  case 56:
#line 233 "nrrdparser.Y"
    {DISCARD_(1);}
    break;

  case 58:
#line 234 "nrrdparser.Y"
    {DISCARD_(1);}
    break;

  case 60:
#line 237 "nrrdparser.Y"
    {nrrd->setpBitpix(8);;}
    break;

  case 61:
#line 238 "nrrdparser.Y"
    {nrrd->setpBitpix(8);;}
    break;

  case 62:
#line 239 "nrrdparser.Y"
    {nrrd->setpBitpix(16);;}
    break;

  case 63:
#line 240 "nrrdparser.Y"
    {nrrd->setpBitpix(16);;}
    break;

  case 64:
#line 241 "nrrdparser.Y"
    {nrrd->setpBitpix(32);;}
    break;

  case 65:
#line 242 "nrrdparser.Y"
    {nrrd->setpBitpix(32);;}
    break;

  case 66:
#line 243 "nrrdparser.Y"
    {nrrd->setpBitpix(64);;}
    break;

  case 67:
#line 244 "nrrdparser.Y"
    {nrrd->setpBitpix(64);;}
    break;

  case 68:
#line 245 "nrrdparser.Y"
    {nrrd->setpBitpix(-32);;}
    break;

  case 69:
#line 246 "nrrdparser.Y"
    {nrrd->setpBitpix(-64);;}
    break;

  case 112:
#line 309 "nrrdparser.Y"
    {nrrd->setpEncoding(FitsFile::RAW);;}
    break;

  case 113:
#line 310 "nrrdparser.Y"
    {nrrd->setpEncoding(FitsFile::ASCII);;}
    break;

  case 114:
#line 311 "nrrdparser.Y"
    {nrrd->setpEncoding(FitsFile::ASCII);;}
    break;

  case 115:
#line 312 "nrrdparser.Y"
    {nrrd->setpEncoding(FitsFile::ASCII);;}
    break;

  case 116:
#line 313 "nrrdparser.Y"
    {nrrd->setpEncoding(FitsFile::HEX);;}
    break;

  case 117:
#line 314 "nrrdparser.Y"
    {nrrd->setpEncoding(FitsFile::GZIP);;}
    break;

  case 118:
#line 315 "nrrdparser.Y"
    {nrrd->setpEncoding(FitsFile::GZIP);;}
    break;

  case 119:
#line 316 "nrrdparser.Y"
    {nrrd->setpEncoding(FitsFile::BZ2);;}
    break;

  case 120:
#line 317 "nrrdparser.Y"
    {nrrd->setpEncoding(FitsFile::BZ2);;}
    break;

  case 121:
#line 320 "nrrdparser.Y"
    {nrrd->setpArch(FitsFile::BIG);;}
    break;

  case 122:
#line 321 "nrrdparser.Y"
    {nrrd->setpArch(FitsFile::LITTLE);;}
    break;

  case 133:
#line 345 "nrrdparser.Y"
    {
	  switch (dim) {
	  case 0:
	    nrrd->setpWidth((yyvsp[(1) - (1)].integer));
	    break;
	  case 1:
	    nrrd->setpHeight((yyvsp[(1) - (1)].integer));
	    break;
	  case 2:
	    nrrd->setpDepth((yyvsp[(1) - (1)].integer));
	    break;
	  }
	  dim++;
	;}
    break;


/* Line 1267 of yacc.c.  */
#line 1981 "nrrdparser.C"
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
      yyerror (nrrd, ll, YY_("syntax error"));
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
	    yyerror (nrrd, ll, yymsg);
	  }
	else
	  {
	    yyerror (nrrd, ll, YY_("syntax error"));
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
		      yytoken, &yylval, nrrd, ll);
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
		  yystos[yystate], yyvsp, nrrd, ll);
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
  yyerror (nrrd, ll, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, nrrd, ll);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, nrrd, ll);
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


#line 398 "nrrdparser.Y"


