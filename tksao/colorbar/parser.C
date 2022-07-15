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
     ID_ = 282,
     INVERT_ = 283,
     ITT_ = 284,
     LEVEL_ = 285,
     LIST_ = 286,
     LOAD_ = 287,
     MACOSX_ = 288,
     MAP_ = 289,
     MOTION_ = 290,
     N_ = 291,
     NAME_ = 292,
     NO_ = 293,
     OFF_ = 294,
     ON_ = 295,
     POSTSCRIPT_ = 296,
     PRINT_ = 297,
     QUERY_ = 298,
     RESET_ = 299,
     RESOLUTION_ = 300,
     RGB_ = 301,
     SAVE_ = 302,
     SHOW_ = 303,
     TAG_ = 304,
     TRUE_ = 305,
     TYPE_ = 306,
     VALUE_ = 307,
     VAR_ = 308,
     VERSION_ = 309,
     WIDTH_ = 310,
     WIN32_ = 311,
     WINDOW_ = 312,
     Y_ = 313,
     YES_ = 314
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
#define ID_ 282
#define INVERT_ 283
#define ITT_ 284
#define LEVEL_ 285
#define LIST_ 286
#define LOAD_ 287
#define MACOSX_ 288
#define MAP_ 289
#define MOTION_ 290
#define N_ 291
#define NAME_ 292
#define NO_ 293
#define OFF_ 294
#define ON_ 295
#define POSTSCRIPT_ 296
#define PRINT_ 297
#define QUERY_ 298
#define RESET_ 299
#define RESOLUTION_ 300
#define RGB_ 301
#define SAVE_ 302
#define SHOW_ 303
#define TAG_ 304
#define TRUE_ 305
#define TYPE_ 306
#define VALUE_ 307
#define VAR_ 308
#define VERSION_ 309
#define WIDTH_ 310
#define WIN32_ 311
#define WINDOW_ 312
#define Y_ 313
#define YES_ 314




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
  unsigned long ptr;
}
/* Line 193 of yacc.c.  */
#line 245 "colorbar/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 258 "colorbar/parser.C"

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
#define YYFINAL  98
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   143

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNRULES -- Number of states.  */
#define YYNSTATES  163

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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    60,    61,     2,
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
      55,    56,    57,    58,    59
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,    10,    13,    16,    19,    21,    24,
      27,    30,    33,    36,    39,    42,    45,    47,    51,    54,
      57,    59,    61,    64,    66,    68,    70,    72,    74,    76,
      78,    80,    82,    84,    86,    88,    90,    95,   104,   107,
     110,   111,   113,   114,   116,   118,   120,   122,   125,   129,
     133,   135,   137,   139,   141,   144,   147,   151,   154,   156,
     158,   159,   162,   164,   166,   167,   169,   171,   173,   176,
     179,   181,   184,   187,   190,   193,   197,   199,   201,   203,
     205,   207,   209,   212,   215,   218,   220,   222,   224,   226,
     229,   232,   235,   238,   243,   245,   246,   249,   254,   258,
     262,   264,   267,   270,   273,   276
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    17,    65,    -1,     6,    64,    64,    -1,
      13,    67,    -1,    12,    68,    -1,    21,    70,    -1,    26,
      -1,    28,    66,    -1,    29,    72,    -1,    31,    73,    -1,
      32,    74,    -1,    33,    76,    -1,    34,    77,    -1,    41,
      78,    -1,    43,    16,    -1,    44,    -1,    46,    10,     5,
      -1,    49,    80,    -1,    47,    83,    -1,    48,    -1,    54,
      -1,    56,    85,    -1,     4,    -1,     3,    -1,    40,    -1,
      39,    -1,     3,    -1,    59,    -1,    58,    -1,    40,    -1,
      50,    -1,    38,    -1,    36,    -1,    39,    -1,    23,    -1,
       3,    64,    64,     3,    -1,    46,    64,    64,    64,    64,
      64,    64,     3,    -1,    30,    69,    -1,    57,     5,    -1,
      -1,     3,    -1,    -1,     8,    -1,    13,    -1,    12,    -1,
      15,    -1,    24,    37,    -1,    24,    37,     3,    -1,    24,
      37,     5,    -1,    25,    -1,    27,    -1,    28,    -1,    37,
      -1,    37,     3,    -1,    46,    10,    -1,    52,     3,     3,
      -1,    49,    71,    -1,    51,    -1,    55,    -1,    -1,     3,
       3,    -1,     5,    -1,     3,    -1,    -1,    27,    -1,    37,
      -1,    29,    -1,    29,    27,    -1,    29,    37,    -1,     5,
      -1,     5,     5,    -1,    53,    75,    -1,    29,     5,    -1,
       5,     5,    -1,     5,     5,     5,    -1,    42,    -1,    60,
      -1,    61,    -1,    46,    -1,     5,    -1,     3,    -1,    14,
      79,    -1,    30,     3,    -1,    45,     3,    -1,     9,    -1,
      22,    -1,    46,    -1,    11,    -1,    18,    81,    -1,    19,
      82,    -1,    32,     5,    -1,    47,     5,    -1,     3,    64,
      64,     5,    -1,     5,    -1,    -1,     3,     3,    -1,     7,
       3,     3,     5,    -1,    35,     3,     3,    -1,    20,     3,
       3,    -1,     5,    -1,     3,     5,    -1,     5,     5,    -1,
      53,    84,    -1,     5,     5,    -1,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    98,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   121,   122,   125,   126,   129,   131,   132,
     133,   134,   136,   137,   138,   139,   142,   143,   147,   148,
     151,   152,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     175,   176,   179,   180,   183,   184,   185,   186,   187,   188,
     191,   192,   193,   194,   197,   198,   201,   208,   209,   210,
     211,   212,   215,   217,   218,   221,   222,   223,   224,   227,
     228,   229,   230,   231,   232,   235,   236,   239,   240,   241,
     244,   245,   246,   247,   250,   253
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
  "END_", "GET_", "GRAY_", "FALSE_", "FILE_", "HEIGHT_", "HIDE_", "ID_",
  "INVERT_", "ITT_", "LEVEL_", "LIST_", "LOAD_", "MACOSX_", "MAP_",
  "MOTION_", "N_", "NAME_", "NO_", "OFF_", "ON_", "POSTSCRIPT_", "PRINT_",
  "QUERY_", "RESET_", "RESOLUTION_", "RGB_", "SAVE_", "SHOW_", "TAG_",
  "TRUE_", "TYPE_", "VALUE_", "VAR_", "VERSION_", "WIDTH_", "WIN32_",
  "WINDOW_", "Y_", "YES_", "'a'", "'b'", "$accept", "command", "numeric",
  "debug", "yesno", "colorbar", "colormap", "colormaplevel", "get",
  "getTag", "itt", "list", "load", "loadVar", "macosx", "map",
  "postscript", "pscolorspace", "tag", "tagdelete", "tagedit", "save",
  "saveVar", "win32", 0
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
      97,    98
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    64,    64,    65,    65,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    70,    70,    70,    70,    70,
      71,    71,    72,    72,    73,    73,    73,    73,    73,    73,
      74,    74,    74,    74,    75,    75,    76,    77,    77,    77,
      77,    77,    78,    78,    78,    79,    79,    79,    79,    80,
      80,    80,    80,    80,    80,    81,    81,    82,    82,    82,
      83,    83,    83,    83,    84,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     3,     2,     2,     2,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     3,     2,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     8,     2,     2,
       0,     1,     0,     1,     1,     1,     1,     2,     3,     3,
       1,     1,     1,     1,     2,     2,     3,     2,     1,     1,
       0,     2,     1,     1,     0,     1,     1,     1,     2,     2,
       1,     2,     2,     2,     2,     3,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     2,
       2,     2,     2,     4,     1,     0,     2,     4,     3,     3,
       1,     2,     2,     2,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,    42,     7,     0,     0,    64,
       0,     0,     0,     0,     0,    16,     0,     0,    20,     0,
      21,     0,     0,    24,    23,     0,    40,     0,     5,     0,
       0,     4,    26,    25,     2,    43,    45,    44,    46,     0,
      50,    51,    52,    53,     0,    60,    58,     0,    59,     6,
      27,    35,    33,    32,    34,    30,    31,    29,    28,     8,
      63,    62,     9,    65,    67,    66,    10,    70,     0,     0,
      11,    76,    12,    81,    80,    79,    77,    78,    13,     0,
       0,     0,    14,    15,     0,     0,   100,     0,    19,     0,
      94,    95,     0,     0,     0,    18,   105,    22,     1,     3,
      41,    38,    39,     0,     0,    47,    54,    55,     0,    57,
       0,    68,    69,    71,    73,     0,    72,    85,    88,    86,
      87,    82,    83,    84,    17,   101,   102,     0,   103,     0,
       0,    89,     0,     0,     0,    90,    91,    92,     0,     0,
      48,    49,    61,    56,    74,   104,     0,    96,     0,     0,
       0,    36,     0,    75,    93,     0,    99,    98,     0,    97,
       0,     0,    37
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    22,    25,    34,    59,    31,    28,   101,    49,   109,
      62,    66,    70,   116,    72,    78,    82,   121,    95,   131,
     135,    88,   128,    97
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -35
static const yytype_int16 yypact[] =
{
      39,    33,    -8,     8,    36,    88,   -35,     3,    10,   -13,
      45,   -34,    -2,   -12,     9,   -35,     7,     4,   -35,    16,
     -35,   -14,    32,   -35,   -35,    33,    35,    41,   -35,    33,
      33,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,    29,
     -35,   -35,   -35,    66,    67,    78,   -35,    81,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,    -7,   -35,   -35,    84,    85,    86,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,     1,
      89,    91,   -35,   -35,    92,    94,    97,   100,   -35,    33,
     -35,   103,    20,   102,   104,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,    33,    33,    26,   -35,   -35,   105,   -35,
     107,   -35,   -35,   -35,   -35,   106,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   112,   -35,    33,
     115,   -35,   116,   117,   118,   -35,   -35,   -35,   119,    33,
     -35,   -35,   -35,   -35,   121,   -35,   123,   -35,   120,   126,
     127,   -35,    33,   -35,   -35,   131,   -35,   -35,    33,   -35,
      33,   128,   -35
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -35,   -35,   -25,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,   -35,
     -35,   -35,   -35,   -35
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      99,    73,    79,    74,   103,   104,    50,    85,    71,    86,
     117,    29,   118,    60,    63,    61,    64,    84,    80,    89,
     111,    90,    26,   119,    65,    83,    51,   132,    96,   140,
     112,   141,    98,    81,    91,    92,    23,    24,   100,    52,
     133,    53,    54,    55,    75,     1,   102,   120,    93,    27,
      67,     2,     3,    56,    30,   134,     4,    87,    76,    77,
       5,    57,    58,    94,   129,     6,   105,     7,     8,   106,
       9,    10,    11,    12,    68,    32,    33,   107,   138,   139,
      13,   108,    14,    15,   110,    16,    17,    18,    19,   113,
     114,   115,   122,    20,   123,    21,    35,   124,    69,   125,
      36,    37,   126,    38,   146,   127,   130,   136,   142,   137,
     143,   144,    39,    40,   152,    41,    42,   145,   147,   148,
     149,   150,   151,   155,     0,    43,   153,   158,   154,   156,
     157,   162,     0,   160,    44,   161,   159,    45,     0,    46,
      47,     0,     0,    48
};

static const yytype_int16 yycheck[] =
{
      25,     3,    14,     5,    29,    30,     3,     3,    42,     5,
       9,     3,    11,     3,    27,     5,    29,    10,    30,     3,
      27,     5,    30,    22,    37,    16,    23,     7,    42,     3,
      37,     5,     0,    45,    18,    19,     3,     4,     3,    36,
      20,    38,    39,    40,    46,     6,     5,    46,    32,    57,
       5,    12,    13,    50,    46,    35,    17,    53,    60,    61,
      21,    58,    59,    47,    89,    26,    37,    28,    29,     3,
      31,    32,    33,    34,    29,    39,    40,    10,   103,   104,
      41,     3,    43,    44,     3,    46,    47,    48,    49,     5,
       5,     5,     3,    54,     3,    56,     8,     5,    53,     5,
      12,    13,     5,    15,   129,     5,     3,     5,     3,     5,
       3,     5,    24,    25,   139,    27,    28,     5,     3,     3,
       3,     3,     3,     3,    -1,    37,     5,   152,     5,     3,
       3,     3,    -1,   158,    46,   160,     5,    49,    -1,    51,
      52,    -1,    -1,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     6,    12,    13,    17,    21,    26,    28,    29,    31,
      32,    33,    34,    41,    43,    44,    46,    47,    48,    49,
      54,    56,    63,     3,     4,    64,    30,    57,    68,     3,
      46,    67,    39,    40,    65,     8,    12,    13,    15,    24,
      25,    27,    28,    37,    46,    49,    51,    52,    55,    70,
       3,    23,    36,    38,    39,    40,    50,    58,    59,    66,
       3,     5,    72,    27,    29,    37,    73,     5,    29,    53,
      74,    42,    76,     3,     5,    46,    60,    61,    77,    14,
      30,    45,    78,    16,    10,     3,     5,    53,    83,     3,
       5,    18,    19,    32,    47,    80,    42,    85,     0,    64,
       3,    69,     5,    64,    64,    37,     3,    10,     3,    71,
       3,    27,    37,     5,     5,     5,    75,     9,    11,    22,
      46,    79,     3,     3,     5,     5,     5,     5,    84,    64,
       3,    81,     7,    20,    35,    82,     5,     5,    64,    64,
       3,     5,     3,     3,     5,     5,    64,     3,     3,     3,
       3,     3,    64,     5,     5,     3,     3,     3,    64,     5,
      64,    64,     3
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
#line 99 "colorbar/parser.Y"
    {cb->adjustCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 7:
#line 103 "colorbar/parser.Y"
    {cb->hideCmd();;}
    break;

  case 8:
#line 104 "colorbar/parser.Y"
    {cb->invertCmd((yyvsp[(2) - (2)].integer) );;}
    break;

  case 15:
#line 111 "colorbar/parser.Y"
    {cb->queryCursorCmd();;}
    break;

  case 16:
#line 112 "colorbar/parser.Y"
    {cb->resetCmd();;}
    break;

  case 17:
#line 113 "colorbar/parser.Y"
    {cb->setRGBChannelCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 20:
#line 116 "colorbar/parser.Y"
    {cb->showCmd();;}
    break;

  case 21:
#line 117 "colorbar/parser.Y"
    {cb->msg("Colorbar 1.0");;}
    break;

  case 23:
#line 121 "colorbar/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 24:
#line 122 "colorbar/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 25:
#line 125 "colorbar/parser.Y"
    {yydebug=1;;}
    break;

  case 26:
#line 126 "colorbar/parser.Y"
    {yydebug=0;;}
    break;

  case 27:
#line 129 "colorbar/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 28:
#line 131 "colorbar/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 29:
#line 132 "colorbar/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 30:
#line 133 "colorbar/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 31:
#line 134 "colorbar/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 32:
#line 136 "colorbar/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 33:
#line 137 "colorbar/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 34:
#line 138 "colorbar/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 35:
#line 139 "colorbar/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 36:
#line 142 "colorbar/parser.Y"
    {cb->setColorbarCmd((yyvsp[(1) - (4)].integer), (yyvsp[(2) - (4)].real), (yyvsp[(3) - (4)].real), (yyvsp[(4) - (4)].integer));;}
    break;

  case 37:
#line 144 "colorbar/parser.Y"
    {cb->setColorbarCmd((yyvsp[(2) - (8)].real), (yyvsp[(3) - (8)].real), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].real), (yyvsp[(7) - (8)].real), (yyvsp[(8) - (8)].integer));;}
    break;

  case 39:
#line 148 "colorbar/parser.Y"
    {cb->setColormapWindowCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 40:
#line 151 "colorbar/parser.Y"
    {cb->setColormapLevelCmd();;}
    break;

  case 41:
#line 152 "colorbar/parser.Y"
    {cb->setColormapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 42:
#line 155 "colorbar/parser.Y"
    {cb->getCmd();;}
    break;

  case 43:
#line 156 "colorbar/parser.Y"
    {cb->getBiasCmd();;}
    break;

  case 44:
#line 157 "colorbar/parser.Y"
    {cb->getColorbarCmd();;}
    break;

  case 45:
#line 158 "colorbar/parser.Y"
    {cb->getColormapCmd();;}
    break;

  case 46:
#line 159 "colorbar/parser.Y"
    {cb->getContrastCmd();;}
    break;

  case 47:
#line 160 "colorbar/parser.Y"
    {cb->getCurrentFileNameCmd();;}
    break;

  case 48:
#line 161 "colorbar/parser.Y"
    {cb->getColormapFileNameCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 49:
#line 162 "colorbar/parser.Y"
    {cb->getColormapFileNameCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 50:
#line 163 "colorbar/parser.Y"
    {cb->getHeightCmd();;}
    break;

  case 51:
#line 164 "colorbar/parser.Y"
    {cb->getCurrentIDCmd();;}
    break;

  case 52:
#line 165 "colorbar/parser.Y"
    {cb->getInvertCmd();;}
    break;

  case 53:
#line 166 "colorbar/parser.Y"
    {cb->getCurrentNameCmd();;}
    break;

  case 54:
#line 167 "colorbar/parser.Y"
    {cb->getColormapNameCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 168 "colorbar/parser.Y"
    {cb->getRGBChannelCmd();;}
    break;

  case 56:
#line 169 "colorbar/parser.Y"
    {cb->getValueCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 58:
#line 171 "colorbar/parser.Y"
    {cb->getTypeCmd();;}
    break;

  case 59:
#line 172 "colorbar/parser.Y"
    {cb->getWidthCmd();;}
    break;

  case 60:
#line 175 "colorbar/parser.Y"
    {cb->getTagCmd();;}
    break;

  case 61:
#line 176 "colorbar/parser.Y"
    {cb->getTagCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 62:
#line 179 "colorbar/parser.Y"
    {;}
    break;

  case 63:
#line 180 "colorbar/parser.Y"
    {;}
    break;

  case 64:
#line 183 "colorbar/parser.Y"
    {cb->listNameCmd();;}
    break;

  case 65:
#line 184 "colorbar/parser.Y"
    {cb->listIDCmd();;}
    break;

  case 66:
#line 185 "colorbar/parser.Y"
    {cb->listNameCmd();;}
    break;

  case 67:
#line 186 "colorbar/parser.Y"
    {;}
    break;

  case 68:
#line 187 "colorbar/parser.Y"
    {;}
    break;

  case 69:
#line 188 "colorbar/parser.Y"
    {;}
    break;

  case 70:
#line 191 "colorbar/parser.Y"
    {cb->loadCmd((yyvsp[(1) - (1)].str),NULL);;}
    break;

  case 71:
#line 192 "colorbar/parser.Y"
    {cb->loadCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 73:
#line 194 "colorbar/parser.Y"
    {;}
    break;

  case 74:
#line 197 "colorbar/parser.Y"
    {cb->loadCmd((yyvsp[(1) - (2)].str),NULL,(yyvsp[(2) - (2)].str));;}
    break;

  case 75:
#line 198 "colorbar/parser.Y"
    {cb->loadCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 76:
#line 201 "colorbar/parser.Y"
    {
#ifdef MAC_OSX_TK
	cb->macosxPrintCmd();
#endif
	;}
    break;

  case 77:
#line 208 "colorbar/parser.Y"
    {cb->mapCmd("a");;}
    break;

  case 78:
#line 209 "colorbar/parser.Y"
    {cb->mapCmd("b");;}
    break;

  case 79:
#line 210 "colorbar/parser.Y"
    {cb->mapCmd("rgb");;}
    break;

  case 80:
#line 211 "colorbar/parser.Y"
    {cb->mapCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 81:
#line 212 "colorbar/parser.Y"
    {cb->mapCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 82:
#line 216 "colorbar/parser.Y"
    {cb->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 83:
#line 217 "colorbar/parser.Y"
    {cb->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 84:
#line 218 "colorbar/parser.Y"
    {cb->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 85:
#line 221 "colorbar/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 86:
#line 222 "colorbar/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 87:
#line 223 "colorbar/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 88:
#line 224 "colorbar/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 91:
#line 229 "colorbar/parser.Y"
    {cb->tagLoadCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 92:
#line 230 "colorbar/parser.Y"
    {cb->tagSaveCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 93:
#line 231 "colorbar/parser.Y"
    {cb->tagCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].str));;}
    break;

  case 94:
#line 232 "colorbar/parser.Y"
    {cb->tagCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 235 "colorbar/parser.Y"
    {cb->tagDeleteCmd();;}
    break;

  case 96:
#line 236 "colorbar/parser.Y"
    {cb->tagDeleteCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 97:
#line 239 "colorbar/parser.Y"
    {cb->tagEditBeginCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 98:
#line 240 "colorbar/parser.Y"
    {cb->tagEditMotionCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 99:
#line 241 "colorbar/parser.Y"
    {cb->tagEditEndCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 100:
#line 244 "colorbar/parser.Y"
    {cb->saveCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 101:
#line 245 "colorbar/parser.Y"
    {cb->saveCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 102:
#line 246 "colorbar/parser.Y"
    {cb->saveCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 104:
#line 250 "colorbar/parser.Y"
    {cb->saveVarCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 105:
#line 253 "colorbar/parser.Y"
    {
#ifdef _WIN32
	cb->win32PrintCmd();
#endif
	;}
    break;


/* Line 1267 of yacc.c.  */
#line 2053 "colorbar/parser.C"
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


#line 260 "colorbar/parser.Y"


