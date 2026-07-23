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
#define yyparse cbparse
#define yylex   cblex
#define yyerror cberror
#define yylval  cblval
#define yychar  cbchar
#define yydebug cbdebug
#define yynerrs cbnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     REAL = 259,
     STRING = 260,
     ADJUST_ = 261,
     BEGIN_ = 262,
     BIAS_ = 263,
     BW_ = 264,
     CHANNEL_ = 265,
     CMYK_ = 266,
     COLORMAP_ = 267,
     COLORBAR_ = 268,
     COLORSPACE_ = 269,
     CONTRAST_ = 270,
     CURSOR_ = 271,
     DEBUG_ = 272,
     DELETE_ = 273,
     EDIT_ = 274,
     END_ = 275,
     GET_ = 276,
     GRAY_ = 277,
     FALSE_ = 278,
     FILE_ = 279,
     HEIGHT_ = 280,
     HIDE_ = 281,
     HSV_ = 282,
     HLS_ = 283,
     ID_ = 284,
     INVERT_ = 285,
     ITT_ = 286,
     LEVEL_ = 287,
     LIST_ = 288,
     LOAD_ = 289,
     MACOSX_ = 290,
     MAP_ = 291,
     MOTION_ = 292,
     MULTICOLOR_ = 293,
     N_ = 294,
     NAME_ = 295,
     NO_ = 296,
     OFF_ = 297,
     ON_ = 298,
     POSTSCRIPT_ = 299,
     PRINT_ = 300,
     QUERY_ = 301,
     RESET_ = 302,
     RESOLUTION_ = 303,
     RGB_ = 304,
     SAVE_ = 305,
     SHOW_ = 306,
     TAG_ = 307,
     TRUE_ = 308,
     TYPE_ = 309,
     VALUE_ = 310,
     VAR_ = 311,
     VERSION_ = 312,
     WIDTH_ = 313,
     WIN32_ = 314,
     WINDOW_ = 315,
     Y_ = 316,
     YES_ = 317
   };
#endif
/* Tokens.  */
#define INT 258
#define REAL 259
#define STRING 260
#define ADJUST_ 261
#define BEGIN_ 262
#define BIAS_ 263
#define BW_ 264
#define CHANNEL_ 265
#define CMYK_ 266
#define COLORMAP_ 267
#define COLORBAR_ 268
#define COLORSPACE_ 269
#define CONTRAST_ 270
#define CURSOR_ 271
#define DEBUG_ 272
#define DELETE_ 273
#define EDIT_ 274
#define END_ 275
#define GET_ 276
#define GRAY_ 277
#define FALSE_ 278
#define FILE_ 279
#define HEIGHT_ 280
#define HIDE_ 281
#define HSV_ 282
#define HLS_ 283
#define ID_ 284
#define INVERT_ 285
#define ITT_ 286
#define LEVEL_ 287
#define LIST_ 288
#define LOAD_ 289
#define MACOSX_ 290
#define MAP_ 291
#define MOTION_ 292
#define MULTICOLOR_ 293
#define N_ 294
#define NAME_ 295
#define NO_ 296
#define OFF_ 297
#define ON_ 298
#define POSTSCRIPT_ 299
#define PRINT_ 300
#define QUERY_ 301
#define RESET_ 302
#define RESOLUTION_ 303
#define RGB_ 304
#define SAVE_ 305
#define SHOW_ 306
#define TAG_ 307
#define TRUE_ 308
#define TYPE_ 309
#define VALUE_ 310
#define VAR_ 311
#define VERSION_ 312
#define WIDTH_ 313
#define WIN32_ 314
#define WINDOW_ 315
#define Y_ 316
#define YES_ 317




/* Copy the first part of user declarations.  */
#line 10 "colorbar/parser.Y"

#define YYDEBUG 1

#include <stdlib.h>

#include "colorbarbase.h"

#undef yyFlexLexer
#define yyFlexLexer cbFlexLexer
#include <FlexLexer.h>

extern int cblex(void*, cbFlexLexer*);
extern void cberror(ColorbarBase*, cbFlexLexer*, const char*);


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
#line 25 "colorbar/parser.Y"
{
#define CBBUFSIZE 1024
  float real;
  int integer;
  char str[CBBUFSIZE];
}
/* Line 193 of yacc.c.  */
#line 250 "colorbar/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 263 "colorbar/parser.C"

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
#define YYFINAL  109
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   214

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  116
/* YYNRULES -- Number of states.  */
#define YYNSTATES  199

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    63,    64,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    13,    16,    19,    21,    24,
      27,    30,    33,    36,    39,    42,    45,    47,    51,    55,
      59,    63,    66,    69,    71,    73,    76,    78,    80,    82,
      84,    86,    88,    90,    92,    94,    96,    98,   100,   102,
     107,   116,   125,   134,   138,   145,   148,   151,   152,   154,
     155,   157,   159,   161,   163,   166,   170,   174,   176,   178,
     180,   182,   185,   188,   191,   194,   198,   201,   203,   205,
     206,   209,   211,   213,   214,   216,   218,   220,   223,   226,
     228,   231,   234,   237,   240,   244,   246,   248,   250,   252,
     254,   256,   258,   260,   263,   266,   269,   271,   273,   275,
     277,   280,   283,   286,   289,   294,   296,   297,   300,   305,
     309,   313,   315,   318,   321,   324,   327
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      66,     0,    -1,    17,    68,    -1,     6,    67,    67,    -1,
      13,    70,    -1,    12,    71,    -1,    21,    73,    -1,    26,
      -1,    30,    69,    -1,    31,    75,    -1,    33,    76,    -1,
      34,    77,    -1,    35,    79,    -1,    36,    80,    -1,    44,
      81,    -1,    46,    16,    -1,    47,    -1,    49,    10,     5,
      -1,    27,    10,     5,    -1,    27,    10,    55,    -1,    28,
      10,     5,    -1,    52,    83,    -1,    50,    86,    -1,    51,
      -1,    57,    -1,    59,    88,    -1,     4,    -1,     3,    -1,
      43,    -1,    42,    -1,     3,    -1,    62,    -1,    61,    -1,
      43,    -1,    53,    -1,    41,    -1,    39,    -1,    42,    -1,
      23,    -1,     3,    67,    67,     3,    -1,    49,    67,    67,
      67,    67,    67,    67,     3,    -1,    27,    67,    67,    67,
      67,    67,    67,     3,    -1,    28,    67,    67,    67,    67,
      67,    67,     3,    -1,    38,     3,     5,    -1,    38,     3,
       3,     5,     5,     5,    -1,    32,    72,    -1,    60,     5,
      -1,    -1,     3,    -1,    -1,     8,    -1,    13,    -1,    12,
      -1,    15,    -1,    24,    40,    -1,    24,    40,     3,    -1,
      24,    40,     5,    -1,    25,    -1,    29,    -1,    30,    -1,
      40,    -1,    40,     3,    -1,    49,    10,    -1,    27,    10,
      -1,    28,    10,    -1,    55,     3,     3,    -1,    52,    74,
      -1,    54,    -1,    58,    -1,    -1,     3,     3,    -1,     5,
      -1,     3,    -1,    -1,    29,    -1,    40,    -1,    31,    -1,
      31,    29,    -1,    31,    40,    -1,     5,    -1,     5,     5,
      -1,    56,    78,    -1,    31,     5,    -1,     5,     5,    -1,
       5,     5,     5,    -1,    45,    -1,    63,    -1,    64,    -1,
       5,    -1,     3,    -1,    49,    -1,    27,    -1,    28,    -1,
      14,    82,    -1,    32,     3,    -1,    48,     3,    -1,     9,
      -1,    22,    -1,    49,    -1,    11,    -1,    18,    84,    -1,
      19,    85,    -1,    34,     5,    -1,    50,     5,    -1,     3,
      67,    67,     5,    -1,     5,    -1,    -1,     3,     3,    -1,
       7,     3,     3,     5,    -1,    37,     3,     3,    -1,    20,
       3,     3,    -1,     5,    -1,     3,     5,    -1,     5,     5,
      -1,    56,    87,    -1,     5,     5,    -1,    45,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   126,   127,   130,   131,
     134,   136,   137,   138,   139,   141,   142,   143,   144,   147,
     148,   150,   152,   154,   155,   159,   160,   163,   164,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   189,
     190,   193,   194,   197,   198,   199,   200,   201,   202,   205,
     206,   207,   208,   211,   212,   215,   222,   223,   224,   225,
     226,   227,   228,   231,   233,   234,   237,   238,   239,   240,
     243,   244,   245,   246,   247,   248,   251,   252,   255,   256,
     257,   260,   261,   262,   263,   266,   269
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "REAL", "STRING", "ADJUST_",
  "BEGIN_", "BIAS_", "BW_", "CHANNEL_", "CMYK_", "COLORMAP_", "COLORBAR_",
  "COLORSPACE_", "CONTRAST_", "CURSOR_", "DEBUG_", "DELETE_", "EDIT_",
  "END_", "GET_", "GRAY_", "FALSE_", "FILE_", "HEIGHT_", "HIDE_", "HSV_",
  "HLS_", "ID_", "INVERT_", "ITT_", "LEVEL_", "LIST_", "LOAD_", "MACOSX_",
  "MAP_", "MOTION_", "MULTICOLOR_", "N_", "NAME_", "NO_", "OFF_", "ON_",
  "POSTSCRIPT_", "PRINT_", "QUERY_", "RESET_", "RESOLUTION_", "RGB_",
  "SAVE_", "SHOW_", "TAG_", "TRUE_", "TYPE_", "VALUE_", "VAR_", "VERSION_",
  "WIDTH_", "WIN32_", "WINDOW_", "Y_", "YES_", "'a'", "'b'", "$accept",
  "command", "numeric", "debug", "yesno", "colorbar", "colormap",
  "colormaplevel", "get", "getTag", "itt", "list", "load", "loadVar",
  "macosx", "map", "postscript", "pscolorspace", "tag", "tagdelete",
  "tagedit", "save", "saveVar", "win32", 0
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
     315,   316,   317,    97,    98
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    69,    69,    69,    69,    69,    69,    69,    70,
      70,    70,    70,    70,    70,    71,    71,    72,    72,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    73,
      73,    73,    73,    73,    73,    73,    73,    73,    73,    74,
      74,    75,    75,    76,    76,    76,    76,    76,    76,    77,
      77,    77,    77,    78,    78,    79,    80,    80,    80,    80,
      80,    80,    80,    81,    81,    81,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    84,    84,    85,    85,
      85,    86,    86,    86,    86,    87,    88
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     3,     3,
       3,     2,     2,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       8,     8,     8,     3,     6,     2,     2,     0,     1,     0,
       1,     1,     1,     1,     2,     3,     3,     1,     1,     1,
       1,     2,     2,     2,     2,     3,     2,     1,     1,     0,
       2,     1,     1,     0,     1,     1,     1,     2,     2,     1,
       2,     2,     2,     2,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       2,     2,     2,     2,     4,     1,     0,     2,     4,     3,
       3,     1,     2,     2,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    49,     7,     0,     0,     0,
       0,    73,     0,     0,     0,     0,     0,    16,     0,     0,
      23,     0,    24,     0,     0,    27,    26,     0,    47,     0,
       5,     0,     0,     0,     0,     0,     4,    29,    28,     2,
      50,    52,    51,    53,     0,    57,     0,     0,    58,    59,
      60,     0,    69,    67,     0,    68,     6,     0,     0,    30,
      38,    36,    35,    37,    33,    34,    32,    31,     8,    72,
      71,     9,    74,    76,    75,    10,    79,     0,     0,    11,
      85,    12,    89,    88,    91,    92,    90,    86,    87,    13,
       0,     0,     0,    14,    15,     0,     0,   111,     0,    22,
       0,   105,   106,     0,     0,     0,    21,   116,    25,     1,
       3,    48,    45,    46,     0,     0,     0,     0,     0,    54,
      63,    64,    61,    62,     0,    66,     0,    18,    19,    20,
      77,    78,    80,    82,     0,    81,    96,    99,    97,    98,
      93,    94,    95,    17,   112,   113,     0,   114,     0,     0,
     100,     0,     0,     0,   101,   102,   103,     0,     0,     0,
       0,    43,     0,    55,    56,    70,    65,    83,   115,     0,
     107,     0,     0,     0,    39,     0,     0,     0,     0,    84,
     104,     0,   110,   109,     0,     0,     0,     0,   108,     0,
       0,    44,     0,     0,     0,     0,    41,    42,    40
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    24,    27,    39,    68,    36,    30,   112,    56,   125,
      71,    75,    79,   135,    81,    89,    93,   140,   106,   150,
     154,    99,   147,   108
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -39
static const yytype_int16 yypact[] =
{
     155,    34,   -17,    68,     2,    27,   -39,    23,    53,     7,
      14,    -8,    -3,   -38,    -2,    51,    -4,   -39,    56,     8,
     -39,    75,   -39,   -31,    29,   -39,   -39,    34,    38,    65,
     -39,    34,    34,    34,    69,    34,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,    35,   -39,    64,    74,   -39,   -39,
      83,    82,    94,   -39,    95,   -39,   -39,     4,    96,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -13,   -39,   -39,    97,    98,    99,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
       9,   102,   105,   -39,   -39,   106,   107,   108,   109,   -39,
      34,   -39,   112,    70,   111,   113,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,    34,    34,    34,    19,    34,    31,
     -39,   -39,   -39,   -39,   116,   -39,   117,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   118,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   119,   -39,    34,   123,
     -39,   124,   125,   126,   -39,   -39,   -39,   127,    34,    34,
     128,   -39,    34,   -39,   -39,   -39,   -39,   129,   -39,   131,
     -39,   134,   135,   136,   -39,    34,    34,   137,    34,   -39,
     -39,   138,   -39,   -39,    34,    34,   139,    34,   -39,    34,
      34,   -39,    34,   142,   143,   144,   -39,   -39,   -39
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -39,   -39,   -27,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,   -39,
     -39,   -39,   -39,   -39
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     110,    82,    76,    83,   114,   115,   116,    80,   118,   127,
      59,    96,    94,    97,   107,    28,   130,    69,   136,    70,
     137,    72,   160,    73,   161,    84,    85,   131,    77,   109,
      60,   138,    74,    57,   163,    40,   164,    25,    26,    41,
      42,   111,    43,    29,    37,    38,    61,    86,    62,    63,
      64,    44,    45,    78,    46,    47,    48,    49,   139,   128,
      65,    87,    88,    58,    98,    90,    95,    50,    66,    67,
     113,    31,   117,   148,   120,   119,    51,   151,   100,    52,
     101,    53,    54,    91,   121,    55,   122,   157,   158,   159,
     152,   162,   123,   102,   103,    32,    33,   124,   126,    92,
       0,   129,   132,   133,   134,   141,    34,   153,   142,   104,
       0,   143,   144,   145,   146,   149,   155,    35,   156,   165,
     166,   169,     0,   167,   168,   105,   170,   171,   172,   173,
     174,   175,   176,   177,   179,   178,   180,   181,   182,   183,
       0,     0,   186,   188,   191,   196,   197,   198,   184,   185,
       0,   187,     0,     0,     0,     0,     0,   189,   190,     0,
     192,     1,   193,   194,     0,   195,     0,     2,     3,     0,
       0,     0,     4,     0,     0,     0,     5,     0,     0,     0,
       0,     6,     7,     8,     0,     9,    10,     0,    11,    12,
      13,    14,     0,     0,     0,     0,     0,     0,     0,    15,
       0,    16,    17,     0,    18,    19,    20,    21,     0,     0,
       0,     0,    22,     0,    23
};

static const yytype_int16 yycheck[] =
{
      27,     3,     5,     5,    31,    32,    33,    45,    35,     5,
       3,     3,    16,     5,    45,    32,    29,     3,     9,     5,
      11,    29,     3,    31,     5,    27,    28,    40,    31,     0,
      23,    22,    40,    10,     3,     8,     5,     3,     4,    12,
      13,     3,    15,    60,    42,    43,    39,    49,    41,    42,
      43,    24,    25,    56,    27,    28,    29,    30,    49,    55,
      53,    63,    64,    10,    56,    14,    10,    40,    61,    62,
       5,     3,     3,   100,    10,    40,    49,     7,     3,    52,
       5,    54,    55,    32,    10,    58,     3,   114,   115,   116,
      20,   118,    10,    18,    19,    27,    28,     3,     3,    48,
      -1,     5,     5,     5,     5,     3,    38,    37,     3,    34,
      -1,     5,     5,     5,     5,     3,     5,    49,     5,     3,
       3,   148,    -1,     5,     5,    50,     3,     3,     3,     3,
       3,   158,   159,     5,     5,   162,     5,     3,     3,     3,
      -1,    -1,     5,     5,     5,     3,     3,     3,   175,   176,
      -1,   178,    -1,    -1,    -1,    -1,    -1,   184,   185,    -1,
     187,     6,   189,   190,    -1,   192,    -1,    12,    13,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    21,    -1,    -1,    -1,
      -1,    26,    27,    28,    -1,    30,    31,    -1,    33,    34,
      35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      -1,    46,    47,    -1,    49,    50,    51,    52,    -1,    -1,
      -1,    -1,    57,    -1,    59
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    12,    13,    17,    21,    26,    27,    28,    30,
      31,    33,    34,    35,    36,    44,    46,    47,    49,    50,
      51,    52,    57,    59,    66,     3,     4,    67,    32,    60,
      71,     3,    27,    28,    38,    49,    70,    42,    43,    68,
       8,    12,    13,    15,    24,    25,    27,    28,    29,    30,
      40,    49,    52,    54,    55,    58,    73,    10,    10,     3,
      23,    39,    41,    42,    43,    53,    61,    62,    69,     3,
       5,    75,    29,    31,    40,    76,     5,    31,    56,    77,
      45,    79,     3,     5,    27,    28,    49,    63,    64,    80,
      14,    32,    48,    81,    16,    10,     3,     5,    56,    86,
       3,     5,    18,    19,    34,    50,    83,    45,    88,     0,
      67,     3,    72,     5,    67,    67,    67,     3,    67,    40,
      10,    10,     3,    10,     3,    74,     3,     5,    55,     5,
      29,    40,     5,     5,     5,    78,     9,    11,    22,    49,
      82,     3,     3,     5,     5,     5,     5,    87,    67,     3,
      84,     7,    20,    37,    85,     5,     5,    67,    67,    67,
       3,     5,    67,     3,     5,     3,     3,     5,     5,    67,
       3,     3,     3,     3,     3,    67,    67,     5,    67,     5,
       5,     3,     3,     3,    67,    67,     5,    67,     5,    67,
      67,     5,    67,    67,    67,    67,     3,     3,     3
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
      yyerror (cb, ll, YY_("syntax error: cannot back up")); \
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
		  Type, Value, cb, ll); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, ColorbarBase* cb, cbFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, cb, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    ColorbarBase* cb;
    cbFlexLexer* ll;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (cb);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, ColorbarBase* cb, cbFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, cb, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    ColorbarBase* cb;
    cbFlexLexer* ll;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep, cb, ll);
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, ColorbarBase* cb, cbFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, cb, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    ColorbarBase* cb;
    cbFlexLexer* ll;
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
		       		       , cb, ll);
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule, cb, ll); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, ColorbarBase* cb, cbFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, cb, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    ColorbarBase* cb;
    cbFlexLexer* ll;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (cb);
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
int yyparse (ColorbarBase* cb, cbFlexLexer* ll);
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
yyparse (ColorbarBase* cb, cbFlexLexer* ll)
#else
int
yyparse (cb, ll)
    ColorbarBase* cb;
    cbFlexLexer* ll;
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
        case 3:
#line 101 "colorbar/parser.Y"
    {cb->adjustCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 7:
#line 105 "colorbar/parser.Y"
    {cb->hideCmd();;}
    break;

  case 8:
#line 106 "colorbar/parser.Y"
    {cb->invertCmd((yyvsp[(2) - (2)].integer) );;}
    break;

  case 15:
#line 113 "colorbar/parser.Y"
    {cb->queryCursorCmd();;}
    break;

  case 16:
#line 114 "colorbar/parser.Y"
    {cb->resetCmd();;}
    break;

  case 17:
#line 115 "colorbar/parser.Y"
    {cb->setRGBChannelCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 18:
#line 116 "colorbar/parser.Y"
    {cb->setHSVChannelCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 19:
#line 117 "colorbar/parser.Y"
    {cb->setHSVChannelCmd("value");;}
    break;

  case 20:
#line 118 "colorbar/parser.Y"
    {cb->setHLSChannelCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 23:
#line 121 "colorbar/parser.Y"
    {cb->showCmd();;}
    break;

  case 24:
#line 122 "colorbar/parser.Y"
    {cb->msg("Colorbar 1.0");;}
    break;

  case 26:
#line 126 "colorbar/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 27:
#line 127 "colorbar/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 28:
#line 130 "colorbar/parser.Y"
    {yydebug=1;;}
    break;

  case 29:
#line 131 "colorbar/parser.Y"
    {yydebug=0;;}
    break;

  case 30:
#line 134 "colorbar/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 31:
#line 136 "colorbar/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 32:
#line 137 "colorbar/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 33:
#line 138 "colorbar/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 34:
#line 139 "colorbar/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 35:
#line 141 "colorbar/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 36:
#line 142 "colorbar/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 37:
#line 143 "colorbar/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 38:
#line 144 "colorbar/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 39:
#line 147 "colorbar/parser.Y"
    {cb->setColorbarCmd((yyvsp[(1) - (4)].integer), (yyvsp[(2) - (4)].real), (yyvsp[(3) - (4)].real), (yyvsp[(4) - (4)].integer));;}
    break;

  case 40:
#line 149 "colorbar/parser.Y"
    {cb->setColorbarCmd((yyvsp[(2) - (8)].real), (yyvsp[(3) - (8)].real), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].real), (yyvsp[(7) - (8)].real), (yyvsp[(8) - (8)].integer));;}
    break;

  case 41:
#line 151 "colorbar/parser.Y"
    {cb->setColorbarCmd((yyvsp[(2) - (8)].real), (yyvsp[(3) - (8)].real), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].real), (yyvsp[(7) - (8)].real), (yyvsp[(8) - (8)].integer));;}
    break;

  case 42:
#line 153 "colorbar/parser.Y"
    {cb->setColorbarCmd((yyvsp[(2) - (8)].real), (yyvsp[(3) - (8)].real), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].real), (yyvsp[(7) - (8)].real), (yyvsp[(8) - (8)].integer));;}
    break;

  case 43:
#line 154 "colorbar/parser.Y"
    {cb->setMultiColorCmd((yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].str));;}
    break;

  case 44:
#line 156 "colorbar/parser.Y"
    {cb->setMultiColorCmd((yyvsp[(2) - (6)].integer), (yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].str), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 46:
#line 160 "colorbar/parser.Y"
    {cb->setColormapWindowCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 47:
#line 163 "colorbar/parser.Y"
    {cb->setColormapLevelCmd();;}
    break;

  case 48:
#line 164 "colorbar/parser.Y"
    {cb->setColormapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 49:
#line 167 "colorbar/parser.Y"
    {cb->getCmd();;}
    break;

  case 50:
#line 168 "colorbar/parser.Y"
    {cb->getBiasCmd();;}
    break;

  case 51:
#line 169 "colorbar/parser.Y"
    {cb->getColorbarCmd();;}
    break;

  case 52:
#line 170 "colorbar/parser.Y"
    {cb->getColormapCmd();;}
    break;

  case 53:
#line 171 "colorbar/parser.Y"
    {cb->getContrastCmd();;}
    break;

  case 54:
#line 172 "colorbar/parser.Y"
    {cb->getCurrentFileNameCmd();;}
    break;

  case 55:
#line 173 "colorbar/parser.Y"
    {cb->getColormapFileNameCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 56:
#line 174 "colorbar/parser.Y"
    {cb->getColormapFileNameCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 57:
#line 175 "colorbar/parser.Y"
    {cb->getHeightCmd();;}
    break;

  case 58:
#line 176 "colorbar/parser.Y"
    {cb->getCurrentIDCmd();;}
    break;

  case 59:
#line 177 "colorbar/parser.Y"
    {cb->getInvertCmd();;}
    break;

  case 60:
#line 178 "colorbar/parser.Y"
    {cb->getCurrentNameCmd();;}
    break;

  case 61:
#line 179 "colorbar/parser.Y"
    {cb->getColormapNameCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 62:
#line 180 "colorbar/parser.Y"
    {cb->getRGBChannelCmd();;}
    break;

  case 63:
#line 181 "colorbar/parser.Y"
    {cb->getHSVChannelCmd();;}
    break;

  case 64:
#line 182 "colorbar/parser.Y"
    {cb->getHLSChannelCmd();;}
    break;

  case 65:
#line 183 "colorbar/parser.Y"
    {cb->getValueCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 67:
#line 185 "colorbar/parser.Y"
    {cb->getTypeCmd();;}
    break;

  case 68:
#line 186 "colorbar/parser.Y"
    {cb->getWidthCmd();;}
    break;

  case 69:
#line 189 "colorbar/parser.Y"
    {cb->getTagCmd();;}
    break;

  case 70:
#line 190 "colorbar/parser.Y"
    {cb->getTagCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 71:
#line 193 "colorbar/parser.Y"
    {;}
    break;

  case 72:
#line 194 "colorbar/parser.Y"
    {;}
    break;

  case 73:
#line 197 "colorbar/parser.Y"
    {cb->listNameCmd();;}
    break;

  case 74:
#line 198 "colorbar/parser.Y"
    {cb->listIDCmd();;}
    break;

  case 75:
#line 199 "colorbar/parser.Y"
    {cb->listNameCmd();;}
    break;

  case 76:
#line 200 "colorbar/parser.Y"
    {;}
    break;

  case 77:
#line 201 "colorbar/parser.Y"
    {;}
    break;

  case 78:
#line 202 "colorbar/parser.Y"
    {;}
    break;

  case 79:
#line 205 "colorbar/parser.Y"
    {cb->loadCmd((yyvsp[(1) - (1)].str),NULL);;}
    break;

  case 80:
#line 206 "colorbar/parser.Y"
    {cb->loadCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 82:
#line 208 "colorbar/parser.Y"
    {;}
    break;

  case 83:
#line 211 "colorbar/parser.Y"
    {cb->loadCmd((yyvsp[(1) - (2)].str),NULL,(yyvsp[(2) - (2)].str));;}
    break;

  case 84:
#line 212 "colorbar/parser.Y"
    {cb->loadCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 85:
#line 215 "colorbar/parser.Y"
    {
#ifdef MAC_OSX_TK
	cb->macosxPrintCmd();
#endif
	;}
    break;

  case 86:
#line 222 "colorbar/parser.Y"
    {cb->mapCmd("a");;}
    break;

  case 87:
#line 223 "colorbar/parser.Y"
    {cb->mapCmd("b");;}
    break;

  case 88:
#line 224 "colorbar/parser.Y"
    {cb->mapCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 89:
#line 225 "colorbar/parser.Y"
    {cb->mapCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 90:
#line 226 "colorbar/parser.Y"
    {cb->mapCmd("rgb");;}
    break;

  case 91:
#line 227 "colorbar/parser.Y"
    {cb->mapCmd("hsv");;}
    break;

  case 92:
#line 228 "colorbar/parser.Y"
    {cb->mapCmd("hls");;}
    break;

  case 93:
#line 232 "colorbar/parser.Y"
    {cb->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 94:
#line 233 "colorbar/parser.Y"
    {cb->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 95:
#line 234 "colorbar/parser.Y"
    {cb->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 96:
#line 237 "colorbar/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 97:
#line 238 "colorbar/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 98:
#line 239 "colorbar/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 99:
#line 240 "colorbar/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 102:
#line 245 "colorbar/parser.Y"
    {cb->tagLoadCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 103:
#line 246 "colorbar/parser.Y"
    {cb->tagSaveCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 104:
#line 247 "colorbar/parser.Y"
    {cb->tagCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].str));;}
    break;

  case 105:
#line 248 "colorbar/parser.Y"
    {cb->tagCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 106:
#line 251 "colorbar/parser.Y"
    {cb->tagDeleteCmd();;}
    break;

  case 107:
#line 252 "colorbar/parser.Y"
    {cb->tagDeleteCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 108:
#line 255 "colorbar/parser.Y"
    {cb->tagEditBeginCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 109:
#line 256 "colorbar/parser.Y"
    {cb->tagEditMotionCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 110:
#line 257 "colorbar/parser.Y"
    {cb->tagEditEndCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 111:
#line 260 "colorbar/parser.Y"
    {cb->saveCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 112:
#line 261 "colorbar/parser.Y"
    {cb->saveCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 113:
#line 262 "colorbar/parser.Y"
    {cb->saveCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 115:
#line 266 "colorbar/parser.Y"
    {cb->saveVarCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 116:
#line 269 "colorbar/parser.Y"
    {
#ifdef _WIN32
	cb->win32PrintCmd();
#endif
	;}
    break;


/* Line 1267 of yacc.c.  */
#line 2145 "colorbar/parser.C"
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
      yyerror (cb, ll, YY_("syntax error"));
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
	    yyerror (cb, ll, yymsg);
	  }
	else
	  {
	    yyerror (cb, ll, YY_("syntax error"));
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
		      yytoken, &yylval, cb, ll);
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
		  yystos[yystate], yyvsp, cb, ll);
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
  yyerror (cb, ll, YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, cb, ll);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, cb, ll);
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


#line 276 "colorbar/parser.Y"


