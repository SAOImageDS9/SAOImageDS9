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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 29 "nrrdparser.Y"
{
#define NRRDPARSERSIZE 256
  float real;
  int integer;
  char str[NRRDPARSERSIZE];
}
/* Line 1529 of yacc.c.  */
#line 252 "nrrdparser.H"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



