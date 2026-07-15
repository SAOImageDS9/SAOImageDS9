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
#define yyparse frparse
#define yylex   frlex
#define yyerror frerror
#define yylval  frlval
#define yychar  frchar
#define yydebug frdebug
#define yynerrs frnerrs


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     REAL = 258,
     INT = 259,
     STRING = 260,
     ANGDEGREE = 261,
     ANGRADIAN = 262,
     SEXSTR = 263,
     HMSSTR = 264,
     DMSSTR = 265,
     ABOUT_ = 266,
     AIP_ = 267,
     ALLOC_ = 268,
     ALLOCGZ_ = 269,
     ALIGN_ = 270,
     ALL_ = 271,
     ALT_ = 272,
     AMBIENT_ = 273,
     AMPLIFIER_ = 274,
     ANALYSIS_ = 275,
     ANGLE_ = 276,
     ANNULUS_ = 277,
     APPEND_ = 278,
     ARCMIN_ = 279,
     ARCSEC_ = 280,
     ARRAY_ = 281,
     ARROW_ = 282,
     ASINH_ = 283,
     AST_ = 284,
     AUTO_ = 285,
     AUX_ = 286,
     AVERAGE_ = 287,
     AXES_ = 288,
     AZIMUTH_ = 289,
     B1950_ = 290,
     BACK_ = 291,
     BACKGROUND_ = 292,
     BASE_ = 293,
     BBOX_ = 294,
     BEGIN_ = 295,
     BG_ = 296,
     BIG_ = 297,
     BIGENDIAN_ = 298,
     BIN_ = 299,
     BITPIX_ = 300,
     BLEND_ = 301,
     BLOCK_ = 302,
     BORDER_ = 303,
     BOTTOM_ = 304,
     BOX_ = 305,
     BOXANNULUS_ = 306,
     BOXCAR_ = 307,
     BOXCIRCLE_ = 308,
     BPANDA_ = 309,
     BUFFER_ = 310,
     BW_ = 311,
     CALLBACK_ = 312,
     CANVAS_ = 313,
     CATALOG_ = 314,
     CELESTIAL_ = 315,
     CENTER_ = 316,
     CENTROID_ = 317,
     CHANNEL_ = 318,
     CIRCLE_ = 319,
     CIAO_ = 320,
     CLEAR_ = 321,
     CLIP_ = 322,
     COLOR_ = 323,
     COLORBURN_ = 324,
     COLORDODGE_ = 325,
     COLORBAR_ = 326,
     COLORMAP_ = 327,
     COLORSCALE_ = 328,
     COLORSPACE_ = 329,
     COLS_ = 330,
     COLUMN_ = 331,
     COMMAND_ = 332,
     COMPASS_ = 333,
     COMPOSITE_ = 334,
     COMPRESS_ = 335,
     CONTOUR_ = 336,
     CONTRAST_ = 337,
     COORDINATES_ = 338,
     COPY_ = 339,
     COUNT_ = 340,
     CPANDA_ = 341,
     CREATE_ = 342,
     CROP_ = 343,
     CROSS_ = 344,
     CROSSHAIR_ = 345,
     CUBE_ = 346,
     CURSOR_ = 347,
     CUT_ = 348,
     CMYK_ = 349,
     DARKEN_ = 350,
     DASH_ = 351,
     DASHLIST_ = 352,
     DATA_ = 353,
     DATAMIN_ = 354,
     DATASEC_ = 355,
     DEBUG_ = 356,
     DEGREES_ = 357,
     DEFAULT_ = 358,
     DELETE_ = 359,
     DEPTH_ = 360,
     DETECTOR_ = 361,
     DIAMOND_ = 362,
     DIFFERENCE_ = 363,
     DIM_ = 364,
     DOWN_ = 365,
     DS9_ = 366,
     EDIT_ = 367,
     ECLIPTIC_ = 368,
     ELEVATION_ = 369,
     ELLIPTIC_ = 370,
     ELLIPSE_ = 371,
     ELLIPSEANNULUS_ = 372,
     END_ = 373,
     ENVI_ = 374,
     EPANDA_ = 375,
     EPSILON_ = 376,
     EQUATORIAL_ = 377,
     ERASE_ = 378,
     EXCLUSION_ = 379,
     EXT_ = 380,
     FADE_ = 381,
     FACTOR_ = 382,
     FALSE_ = 383,
     FILE_ = 384,
     FILL_ = 385,
     FILTER_ = 386,
     FIRST_ = 387,
     FIP_ = 388,
     FIT_ = 389,
     FITS_ = 390,
     FITSY_ = 391,
     FIXED_ = 392,
     FK4_ = 393,
     FK5_ = 394,
     FONT_ = 395,
     FORMAT_ = 396,
     FOOTPRINT_ = 397,
     FROM_ = 398,
     FRONT_ = 399,
     FULL_ = 400,
     FUNCTION_ = 401,
     GALACTIC_ = 402,
     GAUSSIAN_ = 403,
     GET_ = 404,
     GLOBAL_ = 405,
     GRAPHICS_ = 406,
     GRAY_ = 407,
     GRID_ = 408,
     GZ_ = 409,
     HANDLE_ = 410,
     HARDLIGHT_ = 411,
     HAS_ = 412,
     HEAD_ = 413,
     HEADER_ = 414,
     HEIGHT_ = 415,
     HIDE_ = 416,
     HIGHLITE_ = 417,
     HISTEQU_ = 418,
     HISTOGRAM_ = 419,
     HORIZONTAL_ = 420,
     HUE_ = 421,
     HSV_ = 422,
     HLS_ = 423,
     ICRS_ = 424,
     ID_ = 425,
     IIS_ = 426,
     IMAGE_ = 427,
     INCLUDE_ = 428,
     INCR_ = 429,
     INFO_ = 430,
     ITERATION_ = 431,
     IRAF_ = 432,
     IRAFMIN_ = 433,
     J2000_ = 434,
     KEY_ = 435,
     KEYWORD_ = 436,
     LABEL_ = 437,
     LAYER_ = 438,
     LAYERNO_ = 439,
     LAST_ = 440,
     LENGTH_ = 441,
     LEVEL_ = 442,
     LIGHTEN_ = 443,
     LITTLE_ = 444,
     LITTLEENDIAN_ = 445,
     LINE_ = 446,
     LINEAR_ = 447,
     LIST_ = 448,
     LOAD_ = 449,
     LOCAL_ = 450,
     LOG_ = 451,
     LUMINOSITY_ = 452,
     MACOSX_ = 453,
     MAGNIFIER_ = 454,
     MATCH_ = 455,
     MAP_ = 456,
     MARK_ = 457,
     MARKER_ = 458,
     MASK_ = 459,
     MEDIAN_ = 460,
     MESSAGE_ = 461,
     METHOD_ = 462,
     MINMAX_ = 463,
     MINOR_ = 464,
     MIP_ = 465,
     MMAP_ = 466,
     MMAPINCR_ = 467,
     MOSAIC_ = 468,
     MODE_ = 469,
     MOTION_ = 470,
     MULTICOLOR_ = 471,
     MULTIPLY_ = 472,
     MOVE_ = 473,
     NAME_ = 474,
     NAN_ = 475,
     NATIVE_ = 476,
     NAXES_ = 477,
     NEW_ = 478,
     NEXT_ = 479,
     NO_ = 480,
     NONE_ = 481,
     NORMAL_ = 482,
     NONNAN_ = 483,
     NONZERO_ = 484,
     NOW_ = 485,
     NRRD_ = 486,
     NUMBER_ = 487,
     OBJECT_ = 488,
     OFF_ = 489,
     ON_ = 490,
     ONLY_ = 491,
     OPTION_ = 492,
     ORIENT_ = 493,
     OVERLAY_ = 494,
     PAN_ = 495,
     PANNER_ = 496,
     PARSER_ = 497,
     PASTE_ = 498,
     PERF_ = 499,
     PHOTO_ = 500,
     PHYSICAL_ = 501,
     PIXEL_ = 502,
     PLOT2D_ = 503,
     PLOT3D_ = 504,
     POINT_ = 505,
     POINTER_ = 506,
     POLYGON_ = 507,
     POSTSCRIPT_ = 508,
     POW_ = 509,
     PRECISION_ = 510,
     PRINT_ = 511,
     PRESERVE_ = 512,
     PROJECTION_ = 513,
     PROPERTY_ = 514,
     PUBLICATION_ = 515,
     PROS_ = 516,
     QUERY_ = 517,
     RADIAL_ = 518,
     RADIUS_ = 519,
     RANGE_ = 520,
     REGION_ = 521,
     REPLACE_ = 522,
     RESAMPLE_ = 523,
     RESCAN_ = 524,
     RESET_ = 525,
     RESOLUTION_ = 526,
     RGB_ = 527,
     ROOT_ = 528,
     ROTATE_ = 529,
     RULER_ = 530,
     SAMPLE_ = 531,
     SAOIMAGE_ = 532,
     SAOTNG_ = 533,
     SAVE_ = 534,
     SATURATION_ = 535,
     SCALE_ = 536,
     SCAN_ = 537,
     SCIENTIFIC_ = 538,
     SCOPE_ = 539,
     SCREEN_ = 540,
     SEGMENT_ = 541,
     SELECT_ = 542,
     SET_ = 543,
     SEXAGESIMAL_ = 544,
     SHAPE_ = 545,
     SHADE_ = 546,
     SHARED_ = 547,
     SHIFT_ = 548,
     SHMID_ = 549,
     SHOW_ = 550,
     SIGMA_ = 551,
     SINH_ = 552,
     SIZE_ = 553,
     SLICE_ = 554,
     SMMAP_ = 555,
     SMOOTH_ = 556,
     SOFTLIGHT_ = 557,
     SOCKET_ = 558,
     SOCKETGZ_ = 559,
     SOURCE_ = 560,
     SQRT_ = 561,
     SQUARED_ = 562,
     SSHARED_ = 563,
     STATS_ = 564,
     STATUS_ = 565,
     STRENGTH_ = 566,
     SUM_ = 567,
     SYNC_ = 568,
     SYSTEM_ = 569,
     TABLE_ = 570,
     TAG_ = 571,
     TEMPLATE_ = 572,
     TEXT_ = 573,
     THREADS_ = 574,
     THREED_ = 575,
     THRESHOLD_ = 576,
     THICK_ = 577,
     TOP_ = 578,
     TRANSPARENCY_ = 579,
     TO_ = 580,
     TOGGLE_ = 581,
     TOPHAT_ = 582,
     TRUE_ = 583,
     TYPE_ = 584,
     UNDO_ = 585,
     UNHIGHLITE_ = 586,
     UNLOAD_ = 587,
     UNSELECT_ = 588,
     UPDATE_ = 589,
     UP_ = 590,
     USER_ = 591,
     VALUE_ = 592,
     VAR_ = 593,
     VIEW_ = 594,
     VECTOR_ = 595,
     VERSION_ = 596,
     VERTEX_ = 597,
     VERTICAL_ = 598,
     WARP_ = 599,
     WCS_ = 600,
     WCSA_ = 601,
     WCSB_ = 602,
     WCSC_ = 603,
     WCSD_ = 604,
     WCSE_ = 605,
     WCSF_ = 606,
     WCSG_ = 607,
     WCSH_ = 608,
     WCSI_ = 609,
     WCSJ_ = 610,
     WCSK_ = 611,
     WCSL_ = 612,
     WCSM_ = 613,
     WCSN_ = 614,
     WCSO_ = 615,
     WCSP_ = 616,
     WCSQ_ = 617,
     WCSR_ = 618,
     WCSS_ = 619,
     WCST_ = 620,
     WCSU_ = 621,
     WCSV_ = 622,
     WCSW_ = 623,
     WCSX_ = 624,
     WCSY_ = 625,
     WCSZ_ = 626,
     WCS0_ = 627,
     WFPC2_ = 628,
     WIDTH_ = 629,
     WIN32_ = 630,
     XML_ = 631,
     XY_ = 632,
     YES_ = 633,
     ZERO_ = 634,
     ZMAX_ = 635,
     ZSCALE_ = 636,
     ZOOM_ = 637
   };
#endif
/* Tokens.  */
#define REAL 258
#define INT 259
#define STRING 260
#define ANGDEGREE 261
#define ANGRADIAN 262
#define SEXSTR 263
#define HMSSTR 264
#define DMSSTR 265
#define ABOUT_ 266
#define AIP_ 267
#define ALLOC_ 268
#define ALLOCGZ_ 269
#define ALIGN_ 270
#define ALL_ 271
#define ALT_ 272
#define AMBIENT_ 273
#define AMPLIFIER_ 274
#define ANALYSIS_ 275
#define ANGLE_ 276
#define ANNULUS_ 277
#define APPEND_ 278
#define ARCMIN_ 279
#define ARCSEC_ 280
#define ARRAY_ 281
#define ARROW_ 282
#define ASINH_ 283
#define AST_ 284
#define AUTO_ 285
#define AUX_ 286
#define AVERAGE_ 287
#define AXES_ 288
#define AZIMUTH_ 289
#define B1950_ 290
#define BACK_ 291
#define BACKGROUND_ 292
#define BASE_ 293
#define BBOX_ 294
#define BEGIN_ 295
#define BG_ 296
#define BIG_ 297
#define BIGENDIAN_ 298
#define BIN_ 299
#define BITPIX_ 300
#define BLEND_ 301
#define BLOCK_ 302
#define BORDER_ 303
#define BOTTOM_ 304
#define BOX_ 305
#define BOXANNULUS_ 306
#define BOXCAR_ 307
#define BOXCIRCLE_ 308
#define BPANDA_ 309
#define BUFFER_ 310
#define BW_ 311
#define CALLBACK_ 312
#define CANVAS_ 313
#define CATALOG_ 314
#define CELESTIAL_ 315
#define CENTER_ 316
#define CENTROID_ 317
#define CHANNEL_ 318
#define CIRCLE_ 319
#define CIAO_ 320
#define CLEAR_ 321
#define CLIP_ 322
#define COLOR_ 323
#define COLORBURN_ 324
#define COLORDODGE_ 325
#define COLORBAR_ 326
#define COLORMAP_ 327
#define COLORSCALE_ 328
#define COLORSPACE_ 329
#define COLS_ 330
#define COLUMN_ 331
#define COMMAND_ 332
#define COMPASS_ 333
#define COMPOSITE_ 334
#define COMPRESS_ 335
#define CONTOUR_ 336
#define CONTRAST_ 337
#define COORDINATES_ 338
#define COPY_ 339
#define COUNT_ 340
#define CPANDA_ 341
#define CREATE_ 342
#define CROP_ 343
#define CROSS_ 344
#define CROSSHAIR_ 345
#define CUBE_ 346
#define CURSOR_ 347
#define CUT_ 348
#define CMYK_ 349
#define DARKEN_ 350
#define DASH_ 351
#define DASHLIST_ 352
#define DATA_ 353
#define DATAMIN_ 354
#define DATASEC_ 355
#define DEBUG_ 356
#define DEGREES_ 357
#define DEFAULT_ 358
#define DELETE_ 359
#define DEPTH_ 360
#define DETECTOR_ 361
#define DIAMOND_ 362
#define DIFFERENCE_ 363
#define DIM_ 364
#define DOWN_ 365
#define DS9_ 366
#define EDIT_ 367
#define ECLIPTIC_ 368
#define ELEVATION_ 369
#define ELLIPTIC_ 370
#define ELLIPSE_ 371
#define ELLIPSEANNULUS_ 372
#define END_ 373
#define ENVI_ 374
#define EPANDA_ 375
#define EPSILON_ 376
#define EQUATORIAL_ 377
#define ERASE_ 378
#define EXCLUSION_ 379
#define EXT_ 380
#define FADE_ 381
#define FACTOR_ 382
#define FALSE_ 383
#define FILE_ 384
#define FILL_ 385
#define FILTER_ 386
#define FIRST_ 387
#define FIP_ 388
#define FIT_ 389
#define FITS_ 390
#define FITSY_ 391
#define FIXED_ 392
#define FK4_ 393
#define FK5_ 394
#define FONT_ 395
#define FORMAT_ 396
#define FOOTPRINT_ 397
#define FROM_ 398
#define FRONT_ 399
#define FULL_ 400
#define FUNCTION_ 401
#define GALACTIC_ 402
#define GAUSSIAN_ 403
#define GET_ 404
#define GLOBAL_ 405
#define GRAPHICS_ 406
#define GRAY_ 407
#define GRID_ 408
#define GZ_ 409
#define HANDLE_ 410
#define HARDLIGHT_ 411
#define HAS_ 412
#define HEAD_ 413
#define HEADER_ 414
#define HEIGHT_ 415
#define HIDE_ 416
#define HIGHLITE_ 417
#define HISTEQU_ 418
#define HISTOGRAM_ 419
#define HORIZONTAL_ 420
#define HUE_ 421
#define HSV_ 422
#define HLS_ 423
#define ICRS_ 424
#define ID_ 425
#define IIS_ 426
#define IMAGE_ 427
#define INCLUDE_ 428
#define INCR_ 429
#define INFO_ 430
#define ITERATION_ 431
#define IRAF_ 432
#define IRAFMIN_ 433
#define J2000_ 434
#define KEY_ 435
#define KEYWORD_ 436
#define LABEL_ 437
#define LAYER_ 438
#define LAYERNO_ 439
#define LAST_ 440
#define LENGTH_ 441
#define LEVEL_ 442
#define LIGHTEN_ 443
#define LITTLE_ 444
#define LITTLEENDIAN_ 445
#define LINE_ 446
#define LINEAR_ 447
#define LIST_ 448
#define LOAD_ 449
#define LOCAL_ 450
#define LOG_ 451
#define LUMINOSITY_ 452
#define MACOSX_ 453
#define MAGNIFIER_ 454
#define MATCH_ 455
#define MAP_ 456
#define MARK_ 457
#define MARKER_ 458
#define MASK_ 459
#define MEDIAN_ 460
#define MESSAGE_ 461
#define METHOD_ 462
#define MINMAX_ 463
#define MINOR_ 464
#define MIP_ 465
#define MMAP_ 466
#define MMAPINCR_ 467
#define MOSAIC_ 468
#define MODE_ 469
#define MOTION_ 470
#define MULTICOLOR_ 471
#define MULTIPLY_ 472
#define MOVE_ 473
#define NAME_ 474
#define NAN_ 475
#define NATIVE_ 476
#define NAXES_ 477
#define NEW_ 478
#define NEXT_ 479
#define NO_ 480
#define NONE_ 481
#define NORMAL_ 482
#define NONNAN_ 483
#define NONZERO_ 484
#define NOW_ 485
#define NRRD_ 486
#define NUMBER_ 487
#define OBJECT_ 488
#define OFF_ 489
#define ON_ 490
#define ONLY_ 491
#define OPTION_ 492
#define ORIENT_ 493
#define OVERLAY_ 494
#define PAN_ 495
#define PANNER_ 496
#define PARSER_ 497
#define PASTE_ 498
#define PERF_ 499
#define PHOTO_ 500
#define PHYSICAL_ 501
#define PIXEL_ 502
#define PLOT2D_ 503
#define PLOT3D_ 504
#define POINT_ 505
#define POINTER_ 506
#define POLYGON_ 507
#define POSTSCRIPT_ 508
#define POW_ 509
#define PRECISION_ 510
#define PRINT_ 511
#define PRESERVE_ 512
#define PROJECTION_ 513
#define PROPERTY_ 514
#define PUBLICATION_ 515
#define PROS_ 516
#define QUERY_ 517
#define RADIAL_ 518
#define RADIUS_ 519
#define RANGE_ 520
#define REGION_ 521
#define REPLACE_ 522
#define RESAMPLE_ 523
#define RESCAN_ 524
#define RESET_ 525
#define RESOLUTION_ 526
#define RGB_ 527
#define ROOT_ 528
#define ROTATE_ 529
#define RULER_ 530
#define SAMPLE_ 531
#define SAOIMAGE_ 532
#define SAOTNG_ 533
#define SAVE_ 534
#define SATURATION_ 535
#define SCALE_ 536
#define SCAN_ 537
#define SCIENTIFIC_ 538
#define SCOPE_ 539
#define SCREEN_ 540
#define SEGMENT_ 541
#define SELECT_ 542
#define SET_ 543
#define SEXAGESIMAL_ 544
#define SHAPE_ 545
#define SHADE_ 546
#define SHARED_ 547
#define SHIFT_ 548
#define SHMID_ 549
#define SHOW_ 550
#define SIGMA_ 551
#define SINH_ 552
#define SIZE_ 553
#define SLICE_ 554
#define SMMAP_ 555
#define SMOOTH_ 556
#define SOFTLIGHT_ 557
#define SOCKET_ 558
#define SOCKETGZ_ 559
#define SOURCE_ 560
#define SQRT_ 561
#define SQUARED_ 562
#define SSHARED_ 563
#define STATS_ 564
#define STATUS_ 565
#define STRENGTH_ 566
#define SUM_ 567
#define SYNC_ 568
#define SYSTEM_ 569
#define TABLE_ 570
#define TAG_ 571
#define TEMPLATE_ 572
#define TEXT_ 573
#define THREADS_ 574
#define THREED_ 575
#define THRESHOLD_ 576
#define THICK_ 577
#define TOP_ 578
#define TRANSPARENCY_ 579
#define TO_ 580
#define TOGGLE_ 581
#define TOPHAT_ 582
#define TRUE_ 583
#define TYPE_ 584
#define UNDO_ 585
#define UNHIGHLITE_ 586
#define UNLOAD_ 587
#define UNSELECT_ 588
#define UPDATE_ 589
#define UP_ 590
#define USER_ 591
#define VALUE_ 592
#define VAR_ 593
#define VIEW_ 594
#define VECTOR_ 595
#define VERSION_ 596
#define VERTEX_ 597
#define VERTICAL_ 598
#define WARP_ 599
#define WCS_ 600
#define WCSA_ 601
#define WCSB_ 602
#define WCSC_ 603
#define WCSD_ 604
#define WCSE_ 605
#define WCSF_ 606
#define WCSG_ 607
#define WCSH_ 608
#define WCSI_ 609
#define WCSJ_ 610
#define WCSK_ 611
#define WCSL_ 612
#define WCSM_ 613
#define WCSN_ 614
#define WCSO_ 615
#define WCSP_ 616
#define WCSQ_ 617
#define WCSR_ 618
#define WCSS_ 619
#define WCST_ 620
#define WCSU_ 621
#define WCSV_ 622
#define WCSW_ 623
#define WCSX_ 624
#define WCSY_ 625
#define WCSZ_ 626
#define WCS0_ 627
#define WFPC2_ 628
#define WIDTH_ 629
#define WIN32_ 630
#define XML_ 631
#define XY_ 632
#define YES_ 633
#define ZERO_ 634
#define ZMAX_ 635
#define ZSCALE_ 636
#define ZOOM_ 637




/* Copy the first part of user declarations.  */
#line 10 "frame/parser.Y"

#define YYDEBUG 1

#include <math.h>
#include <string.h>
#include <iostream>

#include "util.h"
#include "base.h"
#include "frame3d.h"
#include "fitsimage.h"
#include "fitsmask.h"
#include "marker.h"

#undef yyFlexLexer
#define yyFlexLexer frFlexLexer
#include <FlexLexer.h>

extern int frlex(void*, frFlexLexer*);
extern void frerror(Base*, frFlexLexer*, const char*);

static Coord::CoordSystem currentCoord = Coord::IMAGE;
static Coord::SkyFrame currentSky = Coord::ICRS;

static unsigned short defaultProps = Marker::SELECT | Marker::HIGHLITE |
		Marker::EDIT | Marker::MOVE | Marker::ROTATE |
		Marker::DELETE | Marker::INCLUDE | Marker::SOURCE;
static unsigned short currentProps;
static char currentColor[16];
static int currentWidth;
static int currentDash[2];
static char currentFont[32];
static char currentText[80];

static List<Tag> taglist;
static List<CallBack> cblist;

static unsigned short propQMask;
static unsigned short propQValue;

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
#line 53 "frame/parser.Y"
{
#define FRBUFSIZE 4096
  char chr;
  char str[FRBUFSIZE];
  int integer;
  double real;
  double vector[3];
  int dash[2];
}
/* Line 193 of yacc.c.  */
#line 921 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 934 "frame/parser.C"

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
#define YYFINAL  400
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5789

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  387
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  241
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1404
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3058

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   637

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint16 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   386,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   384,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   385,   383,
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
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   242,   243,   244,
     245,   246,   247,   248,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     9,    13,    17,    20,    22,    24,
      27,    31,    34,    37,    40,    43,    46,    49,    52,    55,
      58,    61,    64,    67,    69,    72,    76,    79,    82,    85,
      89,    92,    95,    98,   101,   105,   108,   111,   114,   118,
     121,   124,   127,   130,   133,   136,   138,   142,   145,   148,
     151,   153,   156,   159,   162,   164,   167,   169,   172,   175,
     178,   181,   183,   185,   187,   190,   193,   196,   199,   202,
     205,   208,   211,   214,   217,   219,   221,   223,   225,   227,
     229,   231,   233,   235,   236,   239,   242,   244,   246,   247,
     249,   251,   253,   255,   257,   259,   261,   264,   267,   270,
     273,   275,   277,   279,   281,   283,   285,   287,   289,   291,
     293,   295,   297,   299,   301,   303,   305,   307,   309,   311,
     313,   315,   317,   319,   321,   323,   325,   327,   329,   331,
     333,   335,   337,   339,   341,   343,   344,   346,   348,   350,
     352,   354,   355,   357,   359,   361,   363,   365,   367,   369,
     371,   373,   375,   377,   379,   381,   383,   385,   387,   389,
     391,   393,   395,   397,   399,   401,   403,   405,   407,   409,
     411,   413,   414,   416,   418,   420,   422,   424,   426,   428,
     429,   431,   433,   434,   436,   438,   440,   441,   443,   445,
     446,   448,   450,   451,   453,   455,   456,   458,   460,   462,
     464,   466,   468,   470,   471,   473,   475,   477,   479,   481,
     483,   485,   486,   488,   490,   492,   493,   495,   497,   499,
     501,   503,   506,   509,   512,   515,   518,   521,   524,   527,
     530,   533,   535,   538,   541,   544,   546,   549,   551,   554,
     556,   559,   561,   564,   567,   574,   577,   582,   585,   588,
     591,   595,   598,   601,   603,   606,   608,   611,   616,   622,
     625,   629,   635,   642,   644,   646,   648,   656,   668,   677,
     690,   692,   695,   698,   700,   702,   705,   708,   711,   714,
     718,   722,   725,   728,   730,   732,   734,   736,   738,   740,
     742,   745,   748,   751,   753,   757,   760,   763,   766,   772,
     782,   792,   802,   810,   812,   815,   817,   823,   833,   843,
     853,   861,   863,   866,   869,   872,   875,   878,   881,   895,
     909,   922,   935,   937,   938,   940,   942,   947,   954,   956,
     958,   960,   962,   964,   966,   968,   970,   972,   977,   981,
     986,   987,   994,  1003,  1006,  1010,  1014,  1018,  1019,  1024,
    1029,  1034,  1039,  1043,  1047,  1049,  1053,  1059,  1064,  1069,
    1073,  1076,  1077,  1079,  1081,  1083,  1085,  1087,  1091,  1092,
    1095,  1098,  1101,  1104,  1107,  1110,  1113,  1116,  1119,  1122,
    1125,  1128,  1131,  1134,  1136,  1139,  1142,  1145,  1150,  1154,
    1157,  1160,  1163,  1166,  1169,  1171,  1175,  1178,  1181,  1184,
    1187,  1189,  1192,  1201,  1204,  1206,  1209,  1211,  1214,  1216,
    1221,  1225,  1228,  1230,  1238,  1247,  1255,  1264,  1266,  1268,
    1270,  1273,  1275,  1277,  1280,  1282,  1283,  1286,  1289,  1291,
    1292,  1295,  1298,  1300,  1302,  1305,  1308,  1311,  1313,  1315,
    1317,  1319,  1321,  1323,  1324,  1326,  1329,  1331,  1336,  1342,
    1343,  1346,  1348,  1354,  1357,  1360,  1362,  1364,  1366,  1369,
    1371,  1374,  1376,  1378,  1379,  1381,  1383,  1384,  1386,  1392,
    1399,  1403,  1410,  1414,  1416,  1420,  1422,  1424,  1426,  1430,
    1437,  1445,  1451,  1454,  1456,  1462,  1467,  1469,  1473,  1474,
    1476,  1479,  1481,  1486,  1488,  1491,  1493,  1496,  1500,  1503,
    1505,  1508,  1510,  1515,  1518,  1520,  1522,  1526,  1528,  1531,
    1535,  1538,  1539,  1541,  1543,  1548,  1551,  1552,  1554,  1558,
    1563,  1568,  1569,  1571,  1573,  1575,  1577,  1580,  1583,  1586,
    1589,  1591,  1593,  1595,  1597,  1599,  1601,  1603,  1604,  1606,
    1608,  1610,  1612,  1614,  1616,  1618,  1620,  1622,  1624,  1626,
    1628,  1630,  1632,  1635,  1637,  1640,  1642,  1645,  1648,  1651,
    1654,  1656,  1658,  1661,  1663,  1664,  1666,  1668,  1671,  1672,
    1674,  1675,  1677,  1678,  1680,  1681,  1683,  1684,  1686,  1687,
    1690,  1693,  1694,  1696,  1699,  1701,  1708,  1714,  1716,  1718,
    1720,  1723,  1726,  1729,  1731,  1733,  1735,  1737,  1740,  1742,
    1744,  1746,  1749,  1751,  1753,  1755,  1758,  1761,  1764,  1765,
    1767,  1768,  1770,  1772,  1774,  1776,  1778,  1780,  1782,  1784,
    1787,  1790,  1793,  1795,  1798,  1802,  1804,  1807,  1810,  1815,
    1821,  1823,  1834,  1836,  1839,  1843,  1847,  1850,  1853,  1856,
    1859,  1862,  1865,  1868,  1873,  1878,  1883,  1887,  1891,  1897,
    1902,  1907,  1912,  1916,  1920,  1924,  1928,  1932,  1936,  1939,
    1942,  1947,  1951,  1955,  1959,  1963,  1968,  1973,  1978,  1983,
    1989,  1994,  2001,  2009,  2014,  2019,  2025,  2028,  2032,  2036,
    2040,  2044,  2048,  2052,  2056,  2059,  2063,  2067,  2071,  2075,
    2080,  2084,  2090,  2097,  2101,  2105,  2110,  2114,  2118,  2122,
    2126,  2130,  2136,  2140,  2144,  2149,  2153,  2156,  2159,  2161,
    2165,  2170,  2175,  2180,  2185,  2190,  2197,  2202,  2207,  2213,
    2218,  2223,  2228,  2233,  2239,  2244,  2251,  2259,  2264,  2269,
    2275,  2281,  2287,  2293,  2299,  2305,  2313,  2319,  2325,  2332,
    2337,  2342,  2347,  2352,  2357,  2364,  2369,  2374,  2380,  2386,
    2392,  2398,  2404,  2411,  2417,  2425,  2434,  2440,  2446,  2453,
    2457,  2461,  2465,  2469,  2474,  2478,  2484,  2491,  2495,  2499,
    2504,  2508,  2512,  2516,  2520,  2524,  2530,  2534,  2538,  2543,
    2548,  2553,  2557,  2563,  2568,  2573,  2576,  2580,  2587,  2594,
    2596,  2598,  2600,  2603,  2606,  2609,  2613,  2617,  2620,  2633,
    2636,  2639,  2641,  2645,  2650,  2653,  2654,  2658,  2660,  2663,
    2666,  2669,  2672,  2675,  2680,  2685,  2690,  2694,  2699,  2705,
    2714,  2721,  2731,  2738,  2746,  2757,  2769,  2782,  2792,  2798,
    2805,  2809,  2815,  2821,  2828,  2834,  2839,  2849,  2860,  2872,
    2882,  2889,  2896,  2903,  2910,  2917,  2924,  2931,  2938,  2945,
    2953,  2961,  2964,  2969,  2974,  2979,  2984,  2990,  2995,  3000,
    3006,  3012,  3016,  3021,  3026,  3031,  3039,  3049,  3056,  3067,
    3079,  3092,  3102,  3106,  3109,  3113,  3119,  3127,  3132,  3136,
    3140,  3147,  3155,  3163,  3168,  3173,  3183,  3188,  3192,  3197,
    3205,  3213,  3216,  3220,  3224,  3228,  3233,  3236,  3239,  3244,
    3255,  3259,  3261,  3265,  3268,  3271,  3274,  3277,  3281,  3287,
    3292,  3298,  3301,  3304,  3307,  3310,  3314,  3317,  3320,  3323,
    3327,  3330,  3334,  3339,  3343,  3347,  3354,  3359,  3362,  3366,
    3369,  3372,  3377,  3381,  3385,  3388,  3392,  3394,  3397,  3399,
    3402,  3405,  3408,  3410,  3412,  3414,  3416,  3419,  3421,  3424,
    3427,  3429,  3432,  3435,  3437,  3440,  3442,  3444,  3446,  3448,
    3450,  3452,  3454,  3456,  3457,  3459,  3462,  3465,  3468,  3472,
    3478,  3486,  3494,  3501,  3508,  3515,  3522,  3528,  3535,  3542,
    3549,  3556,  3563,  3570,  3577,  3589,  3597,  3605,  3613,  3623,
    3633,  3644,  3657,  3670,  3673,  3676,  3680,  3685,  3690,  3695,
    3696,  3698,  3700,  3705,  3710,  3712,  3714,  3716,  3718,  3720,
    3722,  3724,  3726,  3729,  3731,  3733,  3735,  3739,  3743,  3752,
    3759,  3770,  3778,  3786,  3792,  3795,  3798,  3802,  3807,  3813,
    3819,  3825,  3829,  3834,  3840,  3846,  3852,  3858,  3861,  3865,
    3869,  3875,  3879,  3883,  3887,  3892,  3898,  3904,  3910,  3916,
    3920,  3925,  3931,  3937,  3940,  3943,  3947,  3953,  3960,  3967,
    3971,  3975,  3982,  3988,  3994,  3997,  4001,  4005,  4011,  4018,
    4022,  4025,  4028,  4032,  4035,  4039,  4042,  4046,  4052,  4059,
    4062,  4065,  4068,  4070,  4075,  4080,  4082,  4085,  4088,  4091,
    4094,  4097,  4100,  4103,  4107,  4110,  4114,  4117,  4121,  4123,
    4125,  4127,  4129,  4131,  4132,  4135,  4136,  4139,  4140,  4142,
    4143,  4144,  4146,  4148,  4150,  4152,  4154,  4162,  4171,  4174,
    4181,  4184,  4191,  4194,  4198,  4201,  4203,  4205,  4209,  4213,
    4215,  4220,  4223,  4225,  4229,  4233,  4238,  4242,  4246,  4250,
    4252,  4254,  4256,  4258,  4260,  4262,  4264,  4266,  4268,  4270,
    4272,  4274,  4276,  4278,  4280,  4283,  4284,  4285,  4288,  4295,
    4303,  4306,  4308,  4312,  4314,  4318,  4320,  4322,  4324,  4327,
    4330,  4332,  4336,  4337,  4338,  4341,  4344,  4346,  4350,  4356,
    4357,  4359,  4361,  4364,  4367,  4371,  4374,  4378,  4381,  4385,
    4388,  4392,  4394,  4397,  4399,  4402,  4404,  4407,  4409,  4412,
    4414,  4417,  4419,  4422,  4424,  4427,  4429,  4432,  4435,  4439,
    4442,  4445,  4448,  4451,  4453,  4455,  4457,  4459,  4464,  4467,
    4471,  4475,  4478,  4482,  4485,  4488,  4491,  4495,  4499,  4503,
    4506,  4510,  4512,  4516,  4520,  4522,  4525,  4528,  4531,  4534,
    4544,  4551,  4553,  4555,  4557,  4559,  4562,  4565,  4569,  4573,
    4575,  4578,  4582,  4586,  4588,  4591,  4593,  4595,  4597,  4599,
    4601,  4603,  4606,  4609,  4614,  4617,  4620,  4623,  4626,  4629,
    4634,  4637,  4640,  4643,  4646,  4649,  4654,  4656,  4659,  4662,
    4665,  4669,  4671,  4673,  4675,  4678,  4681,  4684,  4687,  4690,
    4694,  4698,  4702,  4706,  4710,  4714,  4716,  4719,  4722,  4725,
    4729,  4732,  4736,  4740,  4744,  4748,  4752,  4756,  4759,  4762,
    4765,  4768,  4771,  4774,  4777,  4780,  4783,  4786,  4789,  4792,
    4795,  4798,  4802,  4806,  4810,  4813,  4816,  4819,  4823,  4827,
    4831,  4834,  4837,  4840,  4843,  4846,  4849,  4853,  4857,  4861,
    4864,  4867,  4870,  4873,  4876,  4879,  4883,  4887,  4891,  4894,
    4897,  4900,  4903,  4906,  4909,  4912,  4915,  4918,  4922,  4926,
    4930,  4935,  4942,  4945,  4947,  4949,  4951,  4953,  4955,  4956,
    4962,  4964,  4971,  4975,  4977,  4980,  4983,  4986,  4990,  4994,
    4997,  5000,  5003,  5006,  5009,  5012,  5016,  5019,  5022,  5026,
    5028,  5032,  5037,  5040,  5042,  5045,  5051,  5058,  5065,  5068,
    5070,  5073,  5076,  5082,  5089
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     388,     0,    -1,   101,   390,    -1,    44,   424,    -1,    41,
      68,     5,    -1,    41,    68,   391,    -1,    47,   429,    -1,
      61,    -1,    66,    -1,    67,   431,    -1,    71,   316,     5,
      -1,    72,   436,    -1,    73,   438,    -1,    81,   439,    -1,
      88,   448,    -1,    90,   450,    -1,    91,   451,    -1,   100,
     391,    -1,   126,   453,    -1,   136,   454,    -1,   149,   455,
      -1,   153,   506,    -1,   157,   509,    -1,   161,    -1,   162,
     391,    -1,   162,    68,     5,    -1,   167,   592,    -1,   168,
     591,    -1,   171,   515,    -1,   177,    15,     4,    -1,   194,
     518,    -1,   198,   536,    -1,   199,   537,    -1,   200,   538,
      -1,   203,   554,   539,    -1,   204,   575,    -1,   183,   574,
      -1,   216,   590,    -1,   220,    68,     5,    -1,   238,   576,
      -1,   240,   577,    -1,   241,   580,    -1,   262,    92,    -1,
     255,   582,    -1,   253,   581,    -1,   270,    -1,   266,   554,
     584,    -1,   272,   589,    -1,   274,   593,    -1,   279,   595,
      -1,   295,    -1,   301,   616,    -1,   319,     4,    -1,   320,
     417,    -1,   332,    -1,   334,   618,    -1,   341,    -1,   344,
     620,    -1,   345,   621,    -1,   375,   625,    -1,   382,   626,
      -1,     3,    -1,     4,    -1,   391,    -1,   213,   391,    -1,
     242,   391,    -1,   244,   391,    -1,   345,   391,    -1,    44,
     391,    -1,    47,   391,    -1,    80,   391,    -1,    88,   391,
      -1,   154,   391,    -1,   272,   391,    -1,     4,    -1,   378,
      -1,   383,    -1,   235,    -1,   328,    -1,   225,    -1,   384,
      -1,   234,    -1,   128,    -1,    -1,   273,    38,    -1,   145,
      38,    -1,   273,    -1,   145,    -1,    -1,   394,    -1,   389,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,   395,   395,    -1,   396,   397,    -1,   397,   397,    -1,
     389,   389,    -1,   172,    -1,   246,    -1,   106,    -1,    19,
      -1,   400,    -1,   345,    -1,   346,    -1,   347,    -1,   348,
      -1,   349,    -1,   350,    -1,   351,    -1,   352,    -1,   353,
      -1,   354,    -1,   355,    -1,   356,    -1,   357,    -1,   358,
      -1,   359,    -1,   360,    -1,   361,    -1,   362,    -1,   363,
      -1,   364,    -1,   365,    -1,   366,    -1,   367,    -1,   368,
      -1,   369,    -1,   370,    -1,   371,    -1,   372,    -1,    58,
      -1,   241,    -1,    -1,   379,    -1,   229,    -1,   220,    -1,
     228,    -1,   265,    -1,    -1,   305,    -1,   217,    -1,   285,
      -1,   239,    -1,    95,    -1,   188,    -1,    70,    -1,    69,
      -1,   156,    -1,   302,    -1,   108,    -1,   124,    -1,   166,
      -1,   280,    -1,    68,    -1,   197,    -1,   192,    -1,   196,
      -1,   254,    -1,   306,    -1,   307,    -1,    28,    -1,   297,
      -1,   163,    -1,    30,    -1,   282,    -1,   276,    -1,    99,
      -1,   178,    -1,    -1,   138,    -1,    35,    -1,   139,    -1,
     179,    -1,   169,    -1,   147,    -1,   113,    -1,    -1,   102,
      -1,   289,    -1,    -1,   102,    -1,    24,    -1,    25,    -1,
      -1,   294,    -1,   180,    -1,    -1,    16,    -1,   174,    -1,
      -1,   172,    -1,   204,    -1,    -1,    64,    -1,    50,    -1,
     107,    -1,    89,    -1,   385,    -1,    27,    -1,    53,    -1,
      -1,     4,    -1,    86,    -1,   164,    -1,   248,    -1,   249,
      -1,   263,    -1,   309,    -1,    -1,    32,    -1,   312,    -1,
     205,    -1,    -1,   221,    -1,    42,    -1,    43,    -1,   189,
      -1,   190,    -1,   339,   423,    -1,    48,   420,    -1,    78,
     421,    -1,   162,   422,    -1,   207,   587,    -1,    37,   588,
      -1,   291,   418,    -1,   281,   389,    -1,   313,     4,    -1,
     321,   389,    -1,   391,    -1,    18,   389,    -1,   311,   389,
      -1,   227,   419,    -1,   391,    -1,   311,   389,    -1,   391,
      -1,    68,     5,    -1,   391,    -1,    68,     5,    -1,   391,
      -1,    68,     5,    -1,   389,   389,    -1,   250,   389,   389,
     389,   389,   389,    -1,    11,   425,    -1,    75,     5,     5,
       5,    -1,   105,     4,    -1,   127,   426,    -1,   146,   427,
      -1,    55,   298,     4,    -1,   325,   428,    -1,   131,     5,
      -1,    61,    -1,   389,   389,    -1,   389,    -1,   389,   389,
      -1,   389,    11,   389,   389,    -1,   389,   389,    11,   389,
     389,    -1,   325,   389,    -1,   325,   389,   389,    -1,   325,
     389,    11,   389,   389,    -1,   325,   389,   389,    11,   389,
     389,    -1,    32,    -1,   312,    -1,   134,    -1,   389,   389,
      11,    61,     5,     5,     5,    -1,   389,   389,     4,   389,
     389,    11,    61,     5,     5,     5,     5,    -1,   389,   389,
      11,   389,   389,     5,     5,     5,    -1,   389,   389,     4,
     389,   389,    11,   389,   389,     5,     5,     5,     5,    -1,
     389,    -1,   389,   389,    -1,   325,   430,    -1,   134,    -1,
     389,    -1,   389,   389,    -1,   284,   432,    -1,   214,   433,
      -1,   208,   434,    -1,   336,   389,   389,    -1,   336,   220,
     220,    -1,   381,   435,    -1,   257,   391,    -1,   150,    -1,
     195,    -1,   389,    -1,   208,    -1,   381,    -1,   380,    -1,
     336,    -1,     4,   405,    -1,   214,   405,    -1,   276,     4,
      -1,   269,    -1,   389,     4,     4,    -1,    82,   389,    -1,
     276,     4,    -1,   191,     4,    -1,     4,   389,   389,     4,
       4,    -1,   272,   389,   389,   389,   389,   389,   389,     4,
       4,    -1,   167,   389,   389,   389,   389,   389,   389,     4,
       4,    -1,   168,   389,   389,   389,   389,   389,   389,     4,
       4,    -1,   216,     4,     4,     5,     5,     5,     4,    -1,
      40,    -1,   215,   437,    -1,   118,    -1,     4,   389,   389,
       4,     4,    -1,   272,   389,   389,   389,   389,   389,   389,
       4,     4,    -1,   167,   389,   389,   389,   389,   389,   389,
       4,     4,    -1,   168,   389,   389,   389,   389,   389,   389,
       4,     4,    -1,   216,     4,     4,     5,     5,     5,     4,
      -1,   404,    -1,   196,   389,    -1,    87,   440,    -1,   104,
     441,    -1,   194,   442,    -1,   243,   446,    -1,   279,   447,
      -1,     5,     4,     4,   445,     4,     4,   404,   389,   443,
     444,   389,   389,     5,    -1,     5,     4,     4,   445,     4,
       4,   404,   389,   389,   444,   389,   389,     5,    -1,     5,
       4,     4,   445,     4,     4,   404,   389,   443,   389,   389,
       5,    -1,     5,     4,     4,   445,     4,     4,   404,   389,
     389,   389,   389,     5,    -1,   252,    -1,    -1,    31,    -1,
       5,    -1,     5,     5,     4,   391,    -1,     5,     4,   391,
       5,   399,   406,    -1,   208,    -1,   381,    -1,   380,    -1,
     336,    -1,   150,    -1,   195,    -1,   301,    -1,    47,    -1,
       5,    -1,     5,     5,     4,   391,    -1,     5,   399,   406,
      -1,    31,     5,   399,   406,    -1,    -1,   389,   389,   389,
     389,   399,   406,    -1,    61,   398,   399,   406,   389,   389,
     399,   408,    -1,   320,   449,    -1,    40,   389,   389,    -1,
     215,   389,   389,    -1,   118,   389,   389,    -1,    -1,   389,
     389,   399,   406,    -1,    40,   389,   389,     4,    -1,   215,
     389,   389,     4,    -1,   118,   389,   389,     4,    -1,   401,
     389,   389,    -1,   399,   406,   398,    -1,   391,    -1,   344,
     389,   389,    -1,    40,   215,   401,   389,   389,    -1,   215,
     401,   389,   389,    -1,    40,   215,   399,   398,    -1,   215,
     399,   398,    -1,    33,     4,    -1,    -1,    32,    -1,   312,
      -1,   205,    -1,   389,    -1,    66,    -1,   157,   125,     5,
      -1,    -1,    41,    68,    -1,    44,   458,    -1,    47,   460,
      -1,    67,   461,    -1,    72,   465,    -1,    71,   464,    -1,
      73,   467,    -1,    81,   469,    -1,    83,   472,    -1,    88,
     473,    -1,    90,   474,    -1,    92,   476,    -1,    91,   475,
      -1,    98,   477,    -1,   100,    -1,   135,   481,    -1,   153,
     487,    -1,   162,    68,    -1,   164,     5,     5,     4,    -1,
     165,    93,   456,    -1,   167,   495,    -1,   168,   494,    -1,
     171,   479,    -1,   175,   478,    -1,   177,    15,    -1,   208,
      -1,   203,   554,   548,    -1,   204,   489,    -1,   183,   488,
      -1,   216,   493,    -1,   220,    68,    -1,   238,    -1,   240,
     491,    -1,   247,   315,   401,   389,   389,     4,     4,     5,
      -1,   272,   492,    -1,   274,    -1,   301,   496,    -1,   319,
      -1,   320,   497,    -1,   329,    -1,   337,   401,   389,   389,
      -1,   343,    93,   457,    -1,   345,   504,    -1,   382,    -1,
       5,     5,   389,   389,   401,     4,   452,    -1,     5,     5,
     389,   389,   399,   406,     4,   452,    -1,     5,     5,   389,
     389,   401,     4,   452,    -1,     5,     5,   389,   389,   399,
     406,     4,   452,    -1,   105,    -1,   127,    -1,   146,    -1,
      55,   298,    -1,    92,    -1,   131,    -1,    75,   459,    -1,
     193,    -1,    -1,   208,     5,    -1,   109,     5,    -1,   127,
      -1,    -1,   443,   444,    -1,   389,   444,    -1,   284,    -1,
     214,    -1,   208,   462,    -1,   336,   187,    -1,   381,   463,
      -1,   257,    -1,   214,    -1,   276,    -1,    82,    -1,   276,
      -1,   191,    -1,    -1,   316,    -1,   187,   466,    -1,     4,
      -1,     4,   401,   389,   389,    -1,     4,   389,   389,   404,
     389,    -1,    -1,   187,   468,    -1,   196,    -1,     4,   389,
     389,   404,   389,    -1,   399,   406,    -1,    67,   470,    -1,
      68,    -1,    96,    -1,   187,    -1,   232,   187,    -1,   207,
      -1,    73,   471,    -1,   301,    -1,   374,    -1,    -1,   214,
      -1,   284,    -1,    -1,   196,    -1,   389,   389,   399,   406,
     407,    -1,   401,   389,   389,   399,   406,   407,    -1,   399,
     406,   407,    -1,    61,   399,   406,   407,   399,   408,    -1,
     320,   399,   406,    -1,   401,    -1,   399,   406,   407,    -1,
     310,    -1,    33,    -1,   401,    -1,   399,   406,   407,    -1,
     399,   406,   398,   389,   389,     5,    -1,     4,   399,   406,
     398,   389,   389,     5,    -1,   401,   389,   389,     4,     4,
      -1,     5,   392,    -1,    67,    -1,   401,   389,   389,     5,
     392,    -1,     4,     4,     4,     4,    -1,    92,    -1,   129,
     219,   480,    -1,    -1,     4,    -1,   389,   389,    -1,   222,
      -1,    61,   399,   406,   407,    -1,    85,    -1,   105,   484,
      -1,    45,    -1,   125,   482,    -1,   129,   219,   485,    -1,
     159,   483,    -1,   160,    -1,   233,   219,    -1,   298,    -1,
     298,   399,   406,   408,    -1,   299,   486,    -1,   374,    -1,
       4,    -1,   401,   389,   389,    -1,     4,    -1,   181,     5,
      -1,     4,   181,     5,    -1,   345,     4,    -1,    -1,     4,
      -1,   392,    -1,   392,   401,   389,   389,    -1,   392,     4,
      -1,    -1,     4,    -1,   143,   172,   399,    -1,   143,   172,
       4,   399,    -1,   325,   172,   389,   399,    -1,    -1,   237,
      -1,   338,    -1,    85,    -1,   184,    -1,    68,   490,    -1,
      46,   490,    -1,   324,   490,    -1,   339,   490,    -1,    68,
      -1,   202,    -1,   265,    -1,   314,    -1,   324,    -1,    85,
      -1,    46,    -1,    -1,     4,    -1,   257,    -1,    63,    -1,
     314,    -1,   339,    -1,   314,    -1,    63,    -1,   314,    -1,
     339,    -1,    63,    -1,   314,    -1,   339,    -1,   146,    -1,
     264,    -1,   264,   209,    -1,   296,    -1,   296,   209,    -1,
      21,    -1,   339,   503,    -1,    48,   500,    -1,    78,   501,
      -1,   162,   502,    -1,   207,    -1,    37,    -1,   291,   498,
      -1,   281,    -1,    -1,    18,    -1,   311,    -1,   227,   499,
      -1,    -1,   311,    -1,    -1,    68,    -1,    -1,    68,    -1,
      -1,    68,    -1,    -1,   250,    -1,    -1,    15,   505,    -1,
     219,   400,    -1,    -1,   251,    -1,    87,   507,    -1,   104,
      -1,   399,   406,   407,   508,     5,     5,    -1,   399,   406,
     407,   508,     5,    -1,    20,    -1,   260,    -1,    19,    -1,
      41,    68,    -1,    44,   510,    -1,    81,   511,    -1,    88,
      -1,    99,    -1,   100,    -1,   106,    -1,   135,   512,    -1,
     153,    -1,   171,    -1,   178,    -1,   203,   513,    -1,   246,
      -1,   172,    -1,   301,    -1,   314,   399,    -1,   345,   514,
      -1,    76,     5,    -1,    -1,    31,    -1,    -1,    44,    -1,
      91,    -1,   213,    -1,   162,    -1,   287,    -1,   243,    -1,
     330,    -1,   399,    -1,    60,   399,    -1,   122,   399,    -1,
     192,   399,    -1,    17,    -1,   320,   399,    -1,   223,     4,
       4,    -1,   123,    -1,   206,     5,    -1,    92,   517,    -1,
     288,   129,   219,   516,    -1,   288,     4,     4,     4,     4,
      -1,   334,    -1,   345,   389,   389,   389,   389,   389,   389,
     389,   389,     4,    -1,     5,    -1,     5,     4,    -1,     4,
       4,    58,    -1,     4,     4,   399,    -1,   214,   391,    -1,
      26,   519,    -1,   119,   521,    -1,   135,   522,    -1,   174,
     535,    -1,   231,   533,    -1,   245,   534,    -1,     5,    13,
       5,   411,    -1,     5,    14,     5,   411,    -1,     5,    63,
       5,   411,    -1,     5,   211,   411,    -1,     5,   212,   411,
      -1,     5,   292,   409,     4,   411,    -1,     5,   303,     4,
     411,    -1,     5,   304,     4,   411,    -1,     5,   338,     5,
     411,    -1,   272,    91,   520,    -1,   168,    91,   520,    -1,
     167,    91,   520,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    63,     5,    -1,     5,   211,    -1,     5,
     212,    -1,     5,   292,   409,     4,    -1,     5,   303,     4,
      -1,     5,   304,     4,    -1,     5,   338,     5,    -1,     5,
       5,   300,    -1,     5,    13,     5,   411,    -1,     5,    14,
       5,   411,    -1,     5,    63,     5,   411,    -1,     5,   211,
     410,   411,    -1,     5,     5,   300,   410,   411,    -1,     5,
     212,   410,   411,    -1,     5,   292,   409,     4,   410,   411,
      -1,     5,   308,   409,     4,     4,   410,   411,    -1,     5,
     303,     4,   411,    -1,     5,   304,     4,   411,    -1,     5,
     338,     5,   410,   411,    -1,   299,   523,    -1,   125,    91,
     524,    -1,   272,   172,   532,    -1,   272,    91,   531,    -1,
     168,   172,   532,    -1,   168,    91,   531,    -1,   167,   172,
     532,    -1,   167,    91,   531,    -1,   213,   525,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    63,     5,
      -1,     5,   211,   410,    -1,     5,     5,   300,   410,    -1,
       5,   212,   410,    -1,     5,   292,   409,     4,   410,    -1,
       5,   308,   409,     4,     4,   410,    -1,     5,   303,     4,
      -1,     5,   304,     4,    -1,     5,   338,     5,   410,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    63,
       5,    -1,     5,   211,   410,    -1,     5,   212,   410,    -1,
       5,   292,   409,     4,   410,    -1,     5,   303,     4,    -1,
       5,   304,     4,    -1,     5,   338,     5,   410,    -1,   172,
     177,   526,    -1,   177,   527,    -1,   172,   528,    -1,   530,
      -1,   172,   373,   529,    -1,     5,    13,     5,   411,    -1,
       5,    14,     5,   411,    -1,     5,    63,     5,   411,    -1,
       5,   211,   410,   411,    -1,     5,   212,   410,   411,    -1,
       5,   292,   409,     4,   410,   411,    -1,     5,   303,     4,
     411,    -1,     5,   304,     4,   411,    -1,     5,   338,     5,
     410,   411,    -1,     5,    13,     5,   411,    -1,     5,    14,
       5,   411,    -1,     5,    63,     5,   411,    -1,     5,   211,
     410,   411,    -1,     5,     5,   300,   410,   411,    -1,     5,
     212,   410,   411,    -1,     5,   292,   409,     4,   410,   411,
      -1,     5,   308,   409,     4,     4,   410,   411,    -1,     5,
     303,     4,   411,    -1,     5,   304,     4,   411,    -1,     5,
     338,     5,   410,   411,    -1,   400,     5,    13,     5,   411,
      -1,   400,     5,    14,     5,   411,    -1,   400,     5,    63,
       5,   411,    -1,   400,     5,   211,   410,   411,    -1,   400,
       5,   212,   410,   411,    -1,   400,     5,   292,   409,     4,
     410,   411,    -1,   400,     5,   303,     4,   411,    -1,   400,
       5,   304,     4,   411,    -1,   400,     5,   338,     5,   410,
     411,    -1,     5,    13,     5,   411,    -1,     5,    14,     5,
     411,    -1,     5,    63,     5,   411,    -1,     5,   211,   410,
     411,    -1,     5,   212,   410,   411,    -1,     5,   292,   409,
       4,   410,   411,    -1,     5,   303,     4,   411,    -1,     5,
     304,     4,   411,    -1,     5,   338,     5,   410,   411,    -1,
     400,     5,    13,     5,   411,    -1,   400,     5,    14,     5,
     411,    -1,   400,     5,    63,     5,   411,    -1,   400,     5,
     211,   410,   411,    -1,   400,     5,     5,   300,   410,   411,
      -1,   400,     5,   212,   410,   411,    -1,   400,     5,   292,
     409,     4,   410,   411,    -1,   400,     5,   308,   409,     4,
       4,   410,   411,    -1,   400,     5,   303,     4,   411,    -1,
     400,     5,   304,     4,   411,    -1,   400,     5,   338,     5,
     410,   411,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    63,     5,    -1,     5,   211,   410,    -1,     5,
       5,   300,   410,    -1,     5,   212,   410,    -1,     5,   292,
     409,     4,   410,    -1,     5,   308,   409,     4,     4,   410,
      -1,     5,   303,     4,    -1,     5,   304,     4,    -1,     5,
     338,     5,   410,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    63,     5,    -1,     5,   211,   410,    -1,
       5,   212,   410,    -1,     5,   292,   409,     4,   410,    -1,
       5,   303,     4,    -1,     5,   304,     4,    -1,     5,   338,
       5,   410,    -1,     5,    13,     5,   411,    -1,     5,    63,
       5,   411,    -1,     5,   211,   411,    -1,     5,   292,   409,
       4,   411,    -1,     5,   303,     4,   411,    -1,     5,   338,
       5,   411,    -1,     5,     5,    -1,   299,     5,     5,    -1,
      98,     4,     4,     4,     4,     4,    -1,   208,     4,     4,
       4,     4,     4,    -1,   118,    -1,   256,    -1,   391,    -1,
     151,   391,    -1,    92,   391,    -1,    68,     5,    -1,     5,
       4,     4,    -1,   334,   389,   389,    -1,   382,   389,    -1,
       5,     5,   400,   406,     5,     5,   400,   406,   389,   400,
     408,     5,    -1,    62,   542,    -1,    68,     5,    -1,    84,
      -1,    77,   547,     5,    -1,    77,   547,   338,     5,    -1,
      79,   104,    -1,    -1,    87,   540,   543,    -1,    93,    -1,
     104,   545,    -1,   112,   546,    -1,   121,     4,    -1,   140,
       5,    -1,   162,    16,    -1,   162,   236,   389,   389,    -1,
     162,   326,   389,   389,    -1,     4,    20,   414,   391,    -1,
       4,    21,   394,    -1,     4,    21,   394,   401,    -1,     4,
      21,   394,   399,   406,    -1,     4,    22,   264,   389,   389,
       4,   399,   408,    -1,     4,    22,   264,     5,   399,   408,
      -1,     4,    51,   264,   389,   389,   389,     4,   399,   408,
      -1,     4,    51,   264,     5,   399,   408,    -1,     4,    50,
     264,   389,   389,   399,   408,    -1,     4,    54,   112,   394,
     394,     4,   389,   389,   389,     4,    -1,     4,    54,   112,
     394,   394,     4,   389,   389,   389,     4,   401,    -1,     4,
      54,   112,   394,   394,     4,   389,   389,   389,     4,   399,
     406,    -1,     4,    54,   112,     5,     5,   399,   406,   399,
     408,    -1,     4,    57,   541,     5,     5,    -1,     4,    64,
     264,   389,   399,   408,    -1,     4,    68,     5,    -1,     4,
      78,    27,   391,   391,    -1,     4,    78,   182,     5,     5,
      -1,     4,    78,   264,   389,   399,   408,    -1,     4,    78,
     314,   399,   406,    -1,     4,    79,   150,   391,    -1,     4,
      86,   112,   394,   394,     4,   389,   389,     4,    -1,     4,
      86,   112,   394,   394,     4,   389,   389,     4,   401,    -1,
       4,    86,   112,   394,   394,     4,   389,   389,     4,   399,
     406,    -1,     4,    86,   112,     5,     5,   399,   406,   399,
     408,    -1,     4,    87,    22,   264,   389,   389,    -1,     4,
      87,    51,   264,   389,   389,    -1,     4,    87,    54,    21,
     389,   389,    -1,     4,    87,    54,   264,   389,   389,    -1,
       4,    87,   117,   264,   389,   389,    -1,     4,    87,   120,
      21,   389,   389,    -1,     4,    87,   120,   264,   389,   389,
      -1,     4,    87,    86,    21,   389,   389,    -1,     4,    87,
      86,   264,   389,   389,    -1,     4,    87,   252,   342,     4,
     389,   389,    -1,     4,    87,   286,   342,     4,   389,   389,
      -1,     4,   104,    -1,     4,   104,    22,     4,    -1,     4,
     104,    51,     4,    -1,     4,   104,    54,     4,    -1,     4,
     104,   117,     4,    -1,     4,   104,    57,   541,     5,    -1,
       4,   104,   120,     4,    -1,     4,   104,    86,     4,    -1,
       4,   104,   252,   342,     4,    -1,     4,   104,   286,   342,
       4,    -1,     4,   104,   316,    -1,     4,   104,   316,     5,
      -1,     4,   104,   316,     4,    -1,     4,   112,    40,     4,
      -1,     4,   116,   264,   389,   389,   399,   408,    -1,     4,
     117,   264,   389,   389,   389,     4,   399,   408,    -1,     4,
     117,   264,     5,   399,   408,    -1,     4,   120,   112,   394,
     394,     4,   389,   389,   389,     4,    -1,     4,   120,   112,
     394,   394,     4,   389,   389,   389,     4,   401,    -1,     4,
     120,   112,   394,   394,     4,   389,   389,   389,     4,   399,
     406,    -1,     4,   120,   112,     5,     5,   399,   406,   399,
     408,    -1,     4,   140,     5,    -1,     4,   162,    -1,     4,
     162,   236,    -1,     4,   191,    27,   391,   391,    -1,     4,
     191,   250,   399,   406,   398,   398,    -1,     4,   218,   389,
     389,    -1,     4,   218,   144,    -1,     4,   218,    36,    -1,
       4,   218,   325,   399,   406,   398,    -1,     4,   252,   270,
     389,   389,   399,   408,    -1,     4,   286,   270,   389,   389,
     399,   408,    -1,     4,   250,   290,   412,    -1,     4,   250,
     298,     4,    -1,     4,   258,   399,   406,   398,   398,   389,
     399,   408,    -1,     4,   259,   560,   391,    -1,     4,   274,
      40,    -1,     4,   275,   141,     5,    -1,     4,   275,   250,
     399,   406,   398,   398,    -1,     4,   275,   314,   399,   406,
     399,   408,    -1,     4,   287,    -1,     4,   287,   236,    -1,
       4,   316,     5,    -1,     4,   318,     5,    -1,     4,   318,
     274,   391,    -1,     4,   331,    -1,     4,   333,    -1,     4,
     340,    27,   391,    -1,     4,   340,   250,   399,   406,   398,
     399,   408,   389,   394,    -1,     4,   374,     4,    -1,   180,
      -1,   180,   389,   389,    -1,   193,   555,    -1,   194,   556,
      -1,   218,   557,    -1,   257,   391,    -1,   259,   560,   391,
      -1,   259,   560,   391,   389,   389,    -1,   274,    40,   389,
     389,    -1,   274,   215,   389,   389,     4,    -1,   274,   118,
      -1,   279,   564,    -1,   287,   565,    -1,   295,   566,    -1,
       5,    68,     5,    -1,     5,    84,    -1,     5,   104,    -1,
       5,    93,    -1,     5,   140,     5,    -1,     5,   162,    -1,
       5,   162,   236,    -1,     5,   218,   389,   389,    -1,     5,
     218,   144,    -1,     5,   218,    36,    -1,     5,   218,   325,
     399,   406,   398,    -1,     5,   259,   560,   391,    -1,     5,
     287,    -1,     5,   287,   236,    -1,     5,   331,    -1,     5,
     333,    -1,   316,   112,     5,     5,    -1,   316,   104,     5,
      -1,   316,   104,    16,    -1,   316,     5,    -1,   316,   334,
       5,    -1,   243,    -1,   243,   399,    -1,   330,    -1,   331,
      16,    -1,   333,    16,    -1,   374,     4,    -1,   287,    -1,
     333,    -1,   162,    -1,   331,    -1,    40,   218,    -1,   218,
      -1,   118,   218,    -1,    40,   112,    -1,   112,    -1,   118,
     112,    -1,    40,   274,    -1,   274,    -1,   118,   274,    -1,
     104,    -1,   318,    -1,    68,    -1,   374,    -1,   259,    -1,
     140,    -1,   180,    -1,   334,    -1,    -1,     4,    -1,    30,
     391,    -1,   264,   389,    -1,   176,     4,    -1,   237,     4,
     389,    -1,    64,   389,   389,   389,   561,    -1,   116,   389,
     389,   389,   389,   393,   561,    -1,    50,   389,   389,   389,
     389,   393,   561,    -1,   252,   389,   389,   389,   389,   561,
      -1,   286,   389,   389,   389,   389,   561,    -1,   191,   389,
     389,   389,   389,   561,    -1,   340,   389,   389,   389,   389,
     561,    -1,   318,   389,   389,   393,   561,    -1,    64,   250,
     389,   389,   413,   561,    -1,    50,   250,   389,   389,   413,
     561,    -1,   107,   250,   389,   389,   413,   561,    -1,    89,
     250,   389,   389,   413,   561,    -1,   385,   250,   389,   389,
     413,   561,    -1,    27,   250,   389,   389,   413,   561,    -1,
      53,   250,   389,   389,   413,   561,    -1,   275,   389,   389,
     389,   389,   399,   406,   399,   408,     5,   561,    -1,    78,
     389,   389,   389,   399,   406,   561,    -1,   258,   389,   389,
     389,   389,   389,   561,    -1,    22,   389,   389,   389,   389,
       4,   561,    -1,   117,   389,   389,   389,   389,   389,     4,
     393,   561,    -1,    51,   389,   389,   389,   389,   389,     4,
     393,   561,    -1,    86,   389,   389,   394,   394,     4,   389,
     389,     4,   561,    -1,   120,   389,   389,   394,   394,     4,
     389,   389,   389,     4,   393,   561,    -1,    54,   389,   389,
     394,   394,     4,   389,   389,   389,     4,   393,   561,    -1,
      79,   561,    -1,   317,   544,    -1,     5,   389,   389,    -1,
     338,     5,   389,   389,    -1,   389,   389,   338,     5,    -1,
       5,   399,   406,   398,    -1,    -1,   287,    -1,    16,    -1,
      40,   389,   389,     4,    -1,   215,   389,   389,     4,    -1,
     118,    -1,   111,    -1,   376,    -1,    65,    -1,   278,    -1,
     277,    -1,   261,    -1,   377,    -1,    62,   549,    -1,    68,
      -1,   140,    -1,   121,    -1,   155,   389,   389,    -1,   170,
     389,   389,    -1,     4,    20,    86,     5,     5,     5,   399,
       4,    -1,     4,    20,   164,     5,     5,     4,    -1,     4,
      20,   248,     5,     5,     5,     5,   399,   406,   415,    -1,
       4,    20,   249,     5,     5,   399,   415,    -1,     4,    20,
     263,     5,     5,     5,   399,    -1,     4,    20,   309,   399,
     406,    -1,   170,    16,    -1,     4,    21,    -1,     4,    21,
     401,    -1,     4,    21,   399,   406,    -1,     4,    22,   264,
     399,   408,    -1,     4,    51,   264,   399,   408,    -1,     4,
      50,   264,   399,   408,    -1,     4,    54,    21,    -1,     4,
      54,    21,   401,    -1,     4,    54,    21,   399,   406,    -1,
       4,    54,   264,   399,   408,    -1,     4,    61,   399,   406,
     407,    -1,     4,    64,   264,   399,   408,    -1,     4,    68,
      -1,     4,    78,    27,    -1,     4,    78,   182,    -1,     4,
      78,   264,   399,   408,    -1,     4,    78,   314,    -1,     4,
      79,   150,    -1,     4,    86,    21,    -1,     4,    86,    21,
     401,    -1,     4,    86,    21,   399,   406,    -1,     4,    86,
     264,   399,   408,    -1,     4,   116,   264,   399,   408,    -1,
       4,   117,   264,   399,   408,    -1,     4,   120,    21,    -1,
       4,   120,    21,   401,    -1,     4,   120,    21,   399,   406,
      -1,     4,   120,   264,   399,   408,    -1,     4,   140,    -1,
       4,   162,    -1,     4,   191,    27,    -1,     4,   191,   186,
     399,   408,    -1,     4,   191,   250,   399,   406,   407,    -1,
       4,   201,   186,   389,   399,   408,    -1,     4,   250,   290,
      -1,     4,   250,   298,    -1,     4,   258,   250,   399,   406,
     407,    -1,     4,   258,   186,   399,   408,    -1,     4,   258,
     322,   399,   408,    -1,     4,   259,    -1,     4,   259,   560,
      -1,     4,   275,   141,    -1,     4,   275,   186,   399,   408,
      -1,     4,   275,   250,   399,   406,   407,    -1,     4,   275,
     314,    -1,     4,   287,    -1,     4,   316,    -1,     4,   316,
       4,    -1,     4,   318,    -1,     4,   318,   274,    -1,     4,
     329,    -1,     4,   340,    27,    -1,     4,   340,   186,   399,
     408,    -1,     4,   340,   250,   399,   406,   407,    -1,     4,
     374,    -1,   162,   550,    -1,   162,   232,    -1,   232,    -1,
     252,   286,   389,   389,    -1,   286,   286,   389,   389,    -1,
     257,    -1,   259,   560,    -1,   287,   551,    -1,   287,   232,
      -1,   295,   552,    -1,     5,    68,    -1,     5,   140,    -1,
       5,   170,    -1,     5,   259,   560,    -1,     5,   316,    -1,
       5,   316,   232,    -1,   316,    16,    -1,   316,   103,   219,
      -1,   374,    -1,    30,    -1,   264,    -1,   176,    -1,   237,
      -1,    -1,   389,   389,    -1,    -1,   389,   389,    -1,    -1,
     318,    -1,    -1,    -1,   251,    -1,   266,    -1,   336,    -1,
      59,    -1,   142,    -1,   547,   399,   406,   407,   391,   562,
     569,    -1,   287,   547,   399,   406,   407,   391,   562,   569,
      -1,   547,     5,    -1,   547,     5,     4,     5,   399,   406,
      -1,   547,     4,    -1,   547,     4,     4,     5,   399,   406,
      -1,   135,     5,    -1,   135,     5,     5,    -1,   389,   389,
      -1,   144,    -1,    36,    -1,    40,   389,   389,    -1,   215,
     389,   389,    -1,   118,    -1,   325,   399,   406,   398,    -1,
     558,   559,    -1,   559,    -1,   560,   386,   391,    -1,    68,
     386,     5,    -1,    97,   386,     4,     4,    -1,   374,   386,
       4,    -1,   140,   386,     5,    -1,   318,   386,     5,    -1,
     572,    -1,   573,    -1,   226,    -1,   287,    -1,   162,    -1,
      96,    -1,   137,    -1,   112,    -1,   218,    -1,   274,    -1,
     104,    -1,   173,    -1,   305,    -1,   130,    -1,   553,    -1,
     553,   558,    -1,    -1,    -1,   563,   567,    -1,     5,   547,
     399,   406,   407,   391,    -1,   287,     5,   547,   399,   406,
     407,   391,    -1,   317,     5,    -1,    16,    -1,   236,   389,
     389,    -1,   326,    -1,   326,   389,   389,    -1,   132,    -1,
     185,    -1,   391,    -1,   318,   391,    -1,   567,   568,    -1,
     568,    -1,   560,   386,   391,    -1,    -1,    -1,   570,   571,
      -1,   571,   572,    -1,   572,    -1,   316,   386,     5,    -1,
      57,   386,   541,     5,     5,    -1,    -1,    87,    -1,     4,
      -1,   184,     4,    -1,    68,     5,    -1,     4,    68,     5,
      -1,    46,   403,    -1,     4,    46,   403,    -1,   324,   389,
      -1,     4,   324,   389,    -1,   339,   391,    -1,     4,   339,
     391,    -1,   295,    -1,     4,   295,    -1,   161,    -1,     4,
     161,    -1,   104,    -1,     4,   104,    -1,   335,    -1,     4,
     335,    -1,   110,    -1,     4,   110,    -1,   323,    -1,     4,
     323,    -1,    49,    -1,     4,    49,    -1,    66,    -1,    68,
       5,    -1,   202,   402,    -1,   265,   389,   389,    -1,   314,
     399,    -1,   324,   389,    -1,    46,   403,    -1,   202,     4,
      -1,   385,    -1,   383,    -1,   377,    -1,   226,    -1,   389,
     389,   389,   389,    -1,   389,   389,    -1,   401,   389,   389,
      -1,   399,   406,   398,    -1,   325,   578,    -1,    39,   389,
     389,    -1,   215,   579,    -1,   257,   391,    -1,   389,   389,
      -1,   401,   389,   389,    -1,   399,   406,   398,    -1,    40,
     389,   389,    -1,   389,   389,    -1,   118,   389,   389,    -1,
     391,    -1,   345,   400,   406,    -1,     5,     4,     4,    -1,
     334,    -1,    74,   583,    -1,   187,     4,    -1,   271,     4,
      -1,   281,   389,    -1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,    -1,     4,     4,     4,     4,     4,     4,
      -1,    56,    -1,   152,    -1,   272,    -1,    94,    -1,   162,
     585,    -1,   287,   586,    -1,    40,   389,   389,    -1,   215,
     389,   389,    -1,   118,    -1,   293,   118,    -1,    40,   389,
     389,    -1,   215,   389,   389,    -1,   118,    -1,   293,   118,
      -1,   210,    -1,    12,    -1,   133,    -1,   226,    -1,    34,
      -1,   114,    -1,    63,     5,    -1,   314,   399,    -1,   339,
       4,     4,     4,    -1,   314,   399,    -1,    63,     5,    -1,
      63,   166,    -1,    63,   280,    -1,   314,   399,    -1,   339,
       4,     4,     4,    -1,    63,     5,    -1,    63,   166,    -1,
      63,   280,    -1,    63,   337,    -1,   314,   399,    -1,   339,
       4,     4,     4,    -1,   389,    -1,   389,   102,    -1,   215,
     594,    -1,   325,   389,    -1,   325,   389,   102,    -1,    40,
      -1,   389,    -1,   118,    -1,    26,   596,    -1,   135,   597,
      -1,   231,   614,    -1,   119,   615,    -1,   245,     5,    -1,
     129,     5,   416,    -1,    63,     5,   416,    -1,   303,     4,
     416,    -1,   272,    91,   604,    -1,   168,    91,   607,    -1,
     167,    91,   610,    -1,   598,    -1,   172,   598,    -1,   315,
     599,    -1,   299,   600,    -1,   125,    91,   601,    -1,   213,
     602,    -1,   272,   172,   605,    -1,   272,    91,   606,    -1,
     168,   172,   608,    -1,   168,    91,   609,    -1,   167,   172,
     611,    -1,   167,    91,   612,    -1,   268,   613,    -1,   129,
       5,    -1,    63,     5,    -1,   303,     4,    -1,   129,     5,
      -1,    63,     5,    -1,   303,     4,    -1,   129,     5,    -1,
      63,     5,    -1,   303,     4,    -1,   129,     5,    -1,    63,
       5,    -1,   303,     4,    -1,   172,   603,    -1,   129,     5,
       4,    -1,    63,     5,     4,    -1,   303,     4,     4,    -1,
     129,     5,    -1,    63,     5,    -1,   303,     4,    -1,   129,
       5,   416,    -1,    63,     5,   416,    -1,   303,     4,   416,
      -1,   129,     5,    -1,    63,     5,    -1,   303,     4,    -1,
     129,     5,    -1,    63,     5,    -1,   303,     4,    -1,   129,
       5,   416,    -1,    63,     5,   416,    -1,   303,     4,   416,
      -1,   129,     5,    -1,    63,     5,    -1,   303,     4,    -1,
     129,     5,    -1,    63,     5,    -1,   303,     4,    -1,   129,
       5,   416,    -1,    63,     5,   416,    -1,   303,     4,   416,
      -1,   129,     5,    -1,    63,     5,    -1,   303,     4,    -1,
     129,     5,    -1,    63,     5,    -1,   303,     4,    -1,   129,
       5,    -1,    63,     5,    -1,   303,     4,    -1,   129,     5,
     416,    -1,    63,     5,   416,    -1,   303,     4,   416,    -1,
     129,     5,     5,   416,    -1,   617,     4,     4,   389,   389,
     394,    -1,   617,     4,    -1,   104,    -1,    52,    -1,   327,
      -1,   148,    -1,   115,    -1,    -1,     4,   389,   389,   389,
     389,    -1,   230,    -1,   230,     4,   389,   389,   389,   389,
      -1,   135,   299,   619,    -1,     4,    -1,     4,     4,    -1,
     389,   399,    -1,   389,   389,    -1,   325,   389,   389,    -1,
     400,   406,   407,    -1,    15,   624,    -1,   270,     4,    -1,
     267,   623,    -1,    23,   622,    -1,     4,     4,    -1,     4,
       5,    -1,   318,     4,     5,    -1,     4,     4,    -1,     4,
       5,    -1,   318,     4,     5,    -1,     4,    -1,     4,   400,
     406,    -1,   325,     4,   400,   406,    -1,   251,    66,    -1,
     256,    -1,   389,   389,    -1,   389,   389,    11,   389,   389,
      -1,   389,   389,    11,   401,   389,   389,    -1,   389,   389,
      11,   399,   406,   398,    -1,   325,   627,    -1,   134,    -1,
     134,   389,    -1,   389,   389,    -1,   389,   389,    11,   389,
     389,    -1,   389,   389,    11,   401,   389,   389,    -1,   389,
     389,    11,   399,   406,   398,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   492,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   518,   519,
     520,   521,   522,   523,   524,   525,   526,   527,   528,   529,
     530,   531,   532,   533,   534,   535,   536,   537,   538,   539,
     540,   541,   542,   543,   544,   545,   546,   547,   548,   549,
     550,   553,   554,   557,   558,   559,   560,   561,   562,   563,
     564,   565,   566,   567,   570,   572,   573,   574,   575,   577,
     578,   579,   580,   583,   584,   585,   586,   587,   590,   591,
     594,   595,   596,   599,   602,   605,   608,   620,   627,   634,
     642,   643,   644,   645,   646,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   669,   670,   671,   672,   673,
     674,   675,   676,   679,   680,   683,   684,   685,   686,   687,
     688,   691,   692,   693,   694,   695,   696,   697,   698,   699,
     700,   701,   702,   703,   704,   705,   706,   707,   710,   711,
     712,   713,   714,   715,   716,   717,   720,   721,   722,   723,
     724,   727,   728,   729,   730,   731,   732,   733,   734,   737,
     738,   739,   742,   743,   744,   745,   748,   749,   750,   753,
     754,   755,   758,   759,   760,   763,   764,   765,   766,   767,
     768,   769,   770,   773,   774,   777,   778,   779,   780,   781,
     782,   785,   786,   787,   788,   791,   792,   793,   794,   795,
     796,   799,   800,   801,   802,   803,   804,   805,   806,   807,
     808,   812,   813,   814,   815,   818,   819,   822,   823,   826,
     827,   830,   831,   834,   835,   839,   840,   841,   842,   843,
     844,   845,   846,   849,   850,   853,   854,   855,   857,   859,
     860,   861,   863,   867,   868,   871,   872,   874,   877,   879,
     885,   886,   887,   890,   891,   892,   895,   896,   897,   898,
     899,   900,   901,   907,   908,   911,   912,   913,   914,   915,
     918,   919,   920,   921,   924,   925,   930,   935,   942,   944,
     946,   948,   950,   952,   953,   954,   957,   959,   961,   963,
     965,   968,   969,   972,   973,   974,   975,   976,   979,   982,
     985,   991,   997,  1000,  1001,  1004,  1005,  1006,  1013,  1014,
    1015,  1016,  1019,  1020,  1023,  1024,  1027,  1028,  1031,  1033,
    1037,  1038,  1041,  1043,  1044,  1045,  1046,  1049,  1050,  1052,
    1053,  1054,  1057,  1059,  1061,  1062,  1064,  1066,  1068,  1070,
    1074,  1077,  1078,  1079,  1080,  1083,  1084,  1087,  1090,  1091,
    1092,  1093,  1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,
    1102,  1103,  1104,  1105,  1106,  1107,  1108,  1109,  1110,  1111,
    1112,  1113,  1114,  1115,  1116,  1117,  1118,  1119,  1120,  1121,
    1122,  1123,  1124,  1126,  1127,  1128,  1129,  1130,  1131,  1132,
    1134,  1135,  1136,  1139,  1141,  1145,  1147,  1151,  1152,  1153,
    1154,  1155,  1156,  1157,  1158,  1161,  1162,  1163,  1166,  1169,
    1170,  1172,  1174,  1175,  1176,  1177,  1178,  1179,  1186,  1187,
    1190,  1191,  1192,  1195,  1196,  1199,  1202,  1203,  1205,  1209,
    1210,  1211,  1214,  1218,  1220,  1221,  1222,  1223,  1224,  1225,
    1226,  1227,  1228,  1231,  1232,  1233,  1236,  1237,  1240,  1242,
    1250,  1252,  1254,  1258,  1259,  1261,  1264,  1267,  1268,  1272,
    1274,  1277,  1282,  1283,  1284,  1288,  1289,  1290,  1293,  1294,
    1295,  1298,  1299,  1301,  1302,  1303,  1304,  1305,  1306,  1307,
    1308,  1309,  1310,  1312,  1313,  1316,  1317,  1320,  1321,  1322,
    1323,  1326,  1327,  1330,  1332,  1335,  1339,  1340,  1341,  1343,
    1345,  1349,  1350,  1351,  1354,  1355,  1356,  1357,  1358,  1359,
    1362,  1363,  1364,  1365,  1366,  1367,  1368,  1371,  1372,  1375,
    1378,  1379,  1380,  1383,  1386,  1387,  1388,  1391,  1392,  1393,
    1396,  1397,  1398,  1399,  1400,  1401,  1404,  1405,  1406,  1407,
    1408,  1409,  1410,  1411,  1414,  1415,  1416,  1417,  1420,  1421,
    1424,  1425,  1428,  1429,  1432,  1433,  1436,  1437,  1440,  1441,
    1442,  1445,  1446,  1449,  1450,  1453,  1456,  1464,  1465,  1468,
    1469,  1470,  1471,  1472,  1473,  1474,  1475,  1476,  1477,  1478,
    1479,  1480,  1481,  1482,  1483,  1484,  1485,  1488,  1491,  1492,
    1495,  1496,  1497,  1498,  1501,  1502,  1503,  1504,  1507,  1508,
    1509,  1510,  1511,  1512,  1515,  1516,  1517,  1518,  1519,  1520,
    1522,  1523,  1528,  1529,  1532,  1534,  1536,  1539,  1540,  1541,
    1542,  1543,  1544,  1547,  1549,  1551,  1553,  1554,  1556,  1558,
    1560,  1562,  1564,  1565,  1566,  1569,  1570,  1571,  1572,  1573,
    1574,  1576,  1577,  1578,  1581,  1584,  1586,  1588,  1590,  1592,
    1594,  1596,  1598,  1601,  1603,  1605,  1607,  1608,  1609,  1610,
    1611,  1612,  1613,  1614,  1615,  1618,  1619,  1620,  1621,  1622,
    1623,  1624,  1626,  1628,  1629,  1630,  1633,  1634,  1635,  1636,
    1637,  1638,  1640,  1641,  1642,  1645,  1646,  1647,  1648,  1649,
    1652,  1655,  1658,  1661,  1664,  1667,  1670,  1673,  1676,  1681,
    1684,  1687,  1690,  1693,  1696,  1699,  1702,  1705,  1708,  1711,
    1716,  1719,  1722,  1725,  1728,  1731,  1734,  1737,  1740,  1745,
    1747,  1749,  1751,  1753,  1755,  1760,  1762,  1764,  1768,  1771,
    1774,  1777,  1780,  1783,  1786,  1789,  1792,  1795,  1798,  1803,
    1804,  1805,  1806,  1807,  1808,  1809,  1811,  1813,  1814,  1815,
    1818,  1819,  1820,  1821,  1822,  1823,  1825,  1826,  1827,  1830,
    1832,  1834,  1835,  1837,  1839,  1843,  1844,  1847,  1848,  1849,
    1852,  1855,  1856,  1857,  1858,  1859,  1860,  1861,  1864,  1872,
    1873,  1874,  1875,  1877,  1879,  1880,  1880,  1881,  1882,  1883,
    1884,  1885,  1887,  1888,  1890,  1893,  1896,  1897,  1898,  1901,
    1904,  1907,  1911,  1914,  1917,  1920,  1924,  1929,  1934,  1936,
    1938,  1939,  1941,  1943,  1945,  1947,  1948,  1950,  1952,  1956,
    1961,  1963,  1965,  1967,  1969,  1971,  1973,  1975,  1977,  1979,
    1981,  1984,  1985,  1987,  1989,  1990,  1992,  1994,  1995,  1996,
    1998,  2000,  2001,  2002,  2004,  2005,  2008,  2012,  2015,  2018,
    2022,  2027,  2033,  2034,  2035,  2037,  2038,  2042,  2044,  2045,
    2046,  2049,  2052,  2055,  2057,  2059,  2064,  2067,  2068,  2069,
    2072,  2076,  2077,  2079,  2080,  2081,  2083,  2084,  2086,  2087,
    2092,  2094,  2095,  2097,  2098,  2099,  2100,  2101,  2102,  2104,
    2106,  2108,  2109,  2110,  2112,  2114,  2115,  2116,  2117,  2118,
    2119,  2120,  2121,  2122,  2123,  2124,  2126,  2128,  2129,  2130,
    2131,  2133,  2134,  2135,  2136,  2137,  2139,  2140,  2141,  2142,
    2143,  2144,  2147,  2148,  2149,  2150,  2151,  2152,  2153,  2154,
    2155,  2156,  2157,  2158,  2159,  2160,  2161,  2162,  2163,  2164,
    2165,  2166,  2167,  2170,  2171,  2172,  2173,  2174,  2175,  2183,
    2190,  2199,  2208,  2215,  2222,  2230,  2238,  2245,  2250,  2255,
    2260,  2265,  2270,  2275,  2281,  2291,  2301,  2311,  2318,  2328,
    2338,  2347,  2359,  2372,  2377,  2380,  2382,  2384,  2389,  2393,
    2394,  2395,  2401,  2403,  2405,  2408,  2409,  2410,  2411,  2412,
    2413,  2414,  2417,  2418,  2419,  2420,  2421,  2422,  2424,  2426,
    2428,  2430,  2432,  2434,  2437,  2438,  2439,  2440,  2442,  2445,
    2447,  2449,  2450,  2451,  2453,  2456,  2459,  2461,  2462,  2463,
    2464,  2466,  2467,  2468,  2469,  2470,  2472,  2474,  2476,  2479,
    2480,  2481,  2483,  2486,  2487,  2488,  2489,  2491,  2494,  2498,
    2499,  2500,  2503,  2506,  2508,  2509,  2510,  2511,  2513,  2516,
    2517,  2519,  2520,  2521,  2522,  2523,  2525,  2526,  2528,  2531,
    2532,  2533,  2534,  2535,  2537,  2539,  2540,  2541,  2542,  2544,
    2546,  2547,  2548,  2549,  2550,  2551,  2553,  2554,  2556,  2559,
    2560,  2561,  2562,  2565,  2566,  2569,  2570,  2573,  2574,  2577,
    2590,  2591,  2595,  2596,  2600,  2601,  2604,  2608,  2614,  2616,
    2619,  2621,  2624,  2626,  2630,  2631,  2632,  2633,  2634,  2635,
    2636,  2640,  2641,  2644,  2645,  2646,  2647,  2648,  2649,  2650,
    2651,  2654,  2655,  2656,  2657,  2658,  2659,  2660,  2661,  2662,
    2663,  2664,  2665,  2668,  2669,  2672,  2673,  2673,  2676,  2678,
    2680,  2683,  2684,  2685,  2686,  2687,  2688,  2691,  2692,  2695,
    2696,  2699,  2703,  2704,  2704,  2707,  2708,  2711,  2714,  2718,
    2719,  2720,  2721,  2722,  2723,  2724,  2725,  2726,  2727,  2728,
    2729,  2731,  2732,  2733,  2734,  2735,  2736,  2737,  2738,  2739,
    2740,  2741,  2742,  2743,  2744,  2747,  2748,  2749,  2750,  2751,
    2752,  2753,  2754,  2760,  2761,  2762,  2763,  2766,  2768,  2769,
    2774,  2776,  2777,  2778,  2779,  2782,  2783,  2788,  2792,  2793,
    2794,  2797,  2798,  2803,  2804,  2807,  2809,  2810,  2811,  2816,
    2818,  2824,  2825,  2826,  2827,  2830,  2831,  2834,  2836,  2838,
    2839,  2842,  2844,  2845,  2846,  2849,  2850,  2851,  2854,  2855,
    2856,  2859,  2860,  2861,  2864,  2868,  2869,  2870,  2871,  2872,
    2875,  2876,  2877,  2878,  2879,  2880,  2883,  2884,  2885,  2886,
    2887,  2890,  2891,  2892,  2895,  2896,  2897,  2898,  2899,  2902,
    2904,  2906,  2908,  2909,  2910,  2913,  2914,  2915,  2916,  2917,
    2918,  2919,  2920,  2921,  2922,  2923,  2924,  2925,  2928,  2929,
    2930,  2933,  2934,  2935,  2938,  2939,  2940,  2943,  2944,  2945,
    2948,  2949,  2950,  2951,  2954,  2955,  2956,  2959,  2961,  2963,
    2967,  2968,  2969,  2972,  2973,  2974,  2977,  2979,  2981,  2985,
    2986,  2987,  2990,  2991,  2992,  2995,  2997,  2999,  3003,  3004,
    3005,  3008,  3009,  3010,  3013,  3014,  3015,  3018,  3020,  3022,
    3026,  3030,  3032,  3037,  3040,  3041,  3042,  3043,  3046,  3047,
    3050,  3052,  3054,  3057,  3058,  3059,  3062,  3063,  3066,  3068,
    3069,  3070,  3071,  3074,  3075,  3076,  3079,  3080,  3081,  3084,
    3085,  3090,  3092,  3095,  3102,  3103,  3105,  3110,  3112,  3115,
    3116,  3117,  3118,  3120,  3125
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "REAL", "INT", "STRING", "ANGDEGREE",
  "ANGRADIAN", "SEXSTR", "HMSSTR", "DMSSTR", "ABOUT_", "AIP_", "ALLOC_",
  "ALLOCGZ_", "ALIGN_", "ALL_", "ALT_", "AMBIENT_", "AMPLIFIER_",
  "ANALYSIS_", "ANGLE_", "ANNULUS_", "APPEND_", "ARCMIN_", "ARCSEC_",
  "ARRAY_", "ARROW_", "ASINH_", "AST_", "AUTO_", "AUX_", "AVERAGE_",
  "AXES_", "AZIMUTH_", "B1950_", "BACK_", "BACKGROUND_", "BASE_", "BBOX_",
  "BEGIN_", "BG_", "BIG_", "BIGENDIAN_", "BIN_", "BITPIX_", "BLEND_",
  "BLOCK_", "BORDER_", "BOTTOM_", "BOX_", "BOXANNULUS_", "BOXCAR_",
  "BOXCIRCLE_", "BPANDA_", "BUFFER_", "BW_", "CALLBACK_", "CANVAS_",
  "CATALOG_", "CELESTIAL_", "CENTER_", "CENTROID_", "CHANNEL_", "CIRCLE_",
  "CIAO_", "CLEAR_", "CLIP_", "COLOR_", "COLORBURN_", "COLORDODGE_",
  "COLORBAR_", "COLORMAP_", "COLORSCALE_", "COLORSPACE_", "COLS_",
  "COLUMN_", "COMMAND_", "COMPASS_", "COMPOSITE_", "COMPRESS_", "CONTOUR_",
  "CONTRAST_", "COORDINATES_", "COPY_", "COUNT_", "CPANDA_", "CREATE_",
  "CROP_", "CROSS_", "CROSSHAIR_", "CUBE_", "CURSOR_", "CUT_", "CMYK_",
  "DARKEN_", "DASH_", "DASHLIST_", "DATA_", "DATAMIN_", "DATASEC_",
  "DEBUG_", "DEGREES_", "DEFAULT_", "DELETE_", "DEPTH_", "DETECTOR_",
  "DIAMOND_", "DIFFERENCE_", "DIM_", "DOWN_", "DS9_", "EDIT_", "ECLIPTIC_",
  "ELEVATION_", "ELLIPTIC_", "ELLIPSE_", "ELLIPSEANNULUS_", "END_",
  "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_", "ERASE_", "EXCLUSION_",
  "EXT_", "FADE_", "FACTOR_", "FALSE_", "FILE_", "FILL_", "FILTER_",
  "FIRST_", "FIP_", "FIT_", "FITS_", "FITSY_", "FIXED_", "FK4_", "FK5_",
  "FONT_", "FORMAT_", "FOOTPRINT_", "FROM_", "FRONT_", "FULL_",
  "FUNCTION_", "GALACTIC_", "GAUSSIAN_", "GET_", "GLOBAL_", "GRAPHICS_",
  "GRAY_", "GRID_", "GZ_", "HANDLE_", "HARDLIGHT_", "HAS_", "HEAD_",
  "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_", "HISTOGRAM_",
  "HORIZONTAL_", "HUE_", "HSV_", "HLS_", "ICRS_", "ID_", "IIS_", "IMAGE_",
  "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_", "IRAFMIN_",
  "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LAYER_", "LAYERNO_", "LAST_",
  "LENGTH_", "LEVEL_", "LIGHTEN_", "LITTLE_", "LITTLEENDIAN_", "LINE_",
  "LINEAR_", "LIST_", "LOAD_", "LOCAL_", "LOG_", "LUMINOSITY_", "MACOSX_",
  "MAGNIFIER_", "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_", "MEDIAN_",
  "MESSAGE_", "METHOD_", "MINMAX_", "MINOR_", "MIP_", "MMAP_", "MMAPINCR_",
  "MOSAIC_", "MODE_", "MOTION_", "MULTICOLOR_", "MULTIPLY_", "MOVE_",
  "NAME_", "NAN_", "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_", "NONE_",
  "NORMAL_", "NONNAN_", "NONZERO_", "NOW_", "NRRD_", "NUMBER_", "OBJECT_",
  "OFF_", "ON_", "ONLY_", "OPTION_", "ORIENT_", "OVERLAY_", "PAN_",
  "PANNER_", "PARSER_", "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_", "PIXEL_",
  "PLOT2D_", "PLOT3D_", "POINT_", "POINTER_", "POLYGON_", "POSTSCRIPT_",
  "POW_", "PRECISION_", "PRINT_", "PRESERVE_", "PROJECTION_", "PROPERTY_",
  "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_", "RADIUS_", "RANGE_",
  "REGION_", "REPLACE_", "RESAMPLE_", "RESCAN_", "RESET_", "RESOLUTION_",
  "RGB_", "ROOT_", "ROTATE_", "RULER_", "SAMPLE_", "SAOIMAGE_", "SAOTNG_",
  "SAVE_", "SATURATION_", "SCALE_", "SCAN_", "SCIENTIFIC_", "SCOPE_",
  "SCREEN_", "SEGMENT_", "SELECT_", "SET_", "SEXAGESIMAL_", "SHAPE_",
  "SHADE_", "SHARED_", "SHIFT_", "SHMID_", "SHOW_", "SIGMA_", "SINH_",
  "SIZE_", "SLICE_", "SMMAP_", "SMOOTH_", "SOFTLIGHT_", "SOCKET_",
  "SOCKETGZ_", "SOURCE_", "SQRT_", "SQUARED_", "SSHARED_", "STATS_",
  "STATUS_", "STRENGTH_", "SUM_", "SYNC_", "SYSTEM_", "TABLE_", "TAG_",
  "TEMPLATE_", "TEXT_", "THREADS_", "THREED_", "THRESHOLD_", "THICK_",
  "TOP_", "TRANSPARENCY_", "TO_", "TOGGLE_", "TOPHAT_", "TRUE_", "TYPE_",
  "UNDO_", "UNHIGHLITE_", "UNLOAD_", "UNSELECT_", "UPDATE_", "UP_",
  "USER_", "VALUE_", "VAR_", "VIEW_", "VECTOR_", "VERSION_", "VERTEX_",
  "VERTICAL_", "WARP_", "WCS_", "WCSA_", "WCSB_", "WCSC_", "WCSD_",
  "WCSE_", "WCSF_", "WCSG_", "WCSH_", "WCSI_", "WCSJ_", "WCSK_", "WCSL_",
  "WCSM_", "WCSN_", "WCSO_", "WCSP_", "WCSQ_", "WCSR_", "WCSS_", "WCST_",
  "WCSU_", "WCSV_", "WCSW_", "WCSX_", "WCSY_", "WCSZ_", "WCS0_", "WFPC2_",
  "WIDTH_", "WIN32_", "XML_", "XY_", "YES_", "ZERO_", "ZMAX_", "ZSCALE_",
  "ZOOM_", "'Y'", "'N'", "'X'", "'='", "$accept", "command", "numeric",
  "debug", "yesno", "fileNameType", "optangle", "angle", "sexagesimal",
  "hms", "dms", "coord", "coordSystem", "wcsSystem", "internalSystem",
  "maskType", "maskBlend", "scaleType", "minmaxMode", "skyFrame",
  "skyFormat", "skyDist", "shmType", "incrLoad", "layerType", "pointShape",
  "pointSize", "analysisTask", "analysisMethod", "endian", "threed",
  "threedShade", "threedShadeNormal", "threedBorder", "threedCompass",
  "threedHighlite", "threedView", "bin", "binAbout", "binFactor",
  "binFunction", "binTo", "block", "blockTo", "clip", "clipScope",
  "clipMode", "clipMinMax", "clipZScale", "colormap", "colormapMotion",
  "colorscale", "contour", "contourCreate", "contourDelete", "contourLoad",
  "contourClipMode", "contourClipScope", "contourMethod", "contourPaste",
  "contourSave", "crop", "crop3d", "crosshair", "cube", "cutMethod",
  "fade", "fitsy", "get", "getHorzCut", "getVertCut", "getBin",
  "getBinCols", "getBlock", "getClip", "getClipMinMax", "getClipZScale",
  "getColorbar", "getColorMap", "getColorMapLevel", "getColorScale",
  "getColorScaleLevel", "getContour", "getContourClip",
  "getContourColorScale", "getCoord", "getCrop", "getCrosshair", "getCube",
  "getCursor", "getData", "getInfo", "getiis", "getIISFileName", "getFits",
  "getFitsExt", "getFitsHeader", "getFitsDepth", "getFitsFileName",
  "getFitsSlice", "getGrid", "getLayer", "getMask", "layerRef", "getPan",
  "getRGB", "getMultiColor", "getHLS", "getHSV", "getSmooth", "getThreed",
  "getThreedShade", "getThreedShadeNormal", "getThreedBorder",
  "getThreedCompass", "getThreedHighlite", "getThreedView", "getWCS",
  "getWCSAlign", "grid", "gridCreate", "gridType", "has", "hasBin",
  "hasContour", "hasFits", "hasMarker", "hasWCS", "iis", "iisSetFileName",
  "iiscursor", "load", "loadArr", "loadArrayRGBCube", "loadENVI",
  "loadFits", "loadFitsSlice", "loadFitsExtCube", "loadFitsMosaic",
  "loadFitsMosaicImageIRAF", "loadFitsMosaicIRAF",
  "loadFitsMosaicImageWCS", "loadFitsMosaicImageWFPC2",
  "loadFitsMosaicWCS", "loadFitsRGBCube", "loadFitsRGBImage", "loadNRRD",
  "loadPhoto", "loadIncr", "macosx", "magnifier", "match", "marker", "@1",
  "markerCallBack", "markerCentroid", "markerCreate",
  "markerCreateTemplate", "markerDelete", "markerEdit", "markerFormat",
  "markerGet", "markerGetCentroid", "markerGetHighlite", "markerGetSelect",
  "markerGetShow", "markerInitProp", "markerLayer", "markerList",
  "markerLoad", "markerMoveSelected", "markerProps", "markerProp",
  "markerProperty", "markerProperties", "markerQuery", "@2", "markerSave",
  "markerSelect", "markerShow", "queries", "query", "markerTags", "@3",
  "tags", "tag", "callback", "layer", "mask", "orient", "pan", "panTo",
  "panMotion", "panner", "postscript", "precision", "pscolorspace",
  "region", "regionHighlite", "regionSelect", "renderMethod",
  "renderBackground", "rgb", "multicolor", "hls", "hsv", "rotate",
  "rotateMotion", "save", "saveArray", "saveFits", "saveFitsImage",
  "saveFitsTable", "saveFitsSlice", "saveFitsExtCube", "saveFitsMosaic",
  "saveFitsMosaicImage", "saveArrayRGBCube", "saveFitsRGBImage",
  "saveFitsRGBCube", "saveArrayHLSCube", "saveFitsHLSImage",
  "saveFitsHLSCube", "saveArrayHSVCube", "saveFitsHSVImage",
  "saveFitsHSVCube", "saveFitsResample", "saveNRRD", "saveENVI", "smooth",
  "smoothFunction", "update", "updateFitsSlice", "warp", "wcs",
  "wcsAppend", "wcsReplace", "wcsAlign", "win32", "zoom", "zoomTo", 0
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
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   557,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   569,   570,   571,   572,   573,   574,
     575,   576,   577,   578,   579,   580,   581,   582,   583,   584,
     585,   586,   587,   588,   589,   590,   591,   592,   593,   594,
     595,   596,   597,   598,   599,   600,   601,   602,   603,   604,
     605,   606,   607,   608,   609,   610,   611,   612,   613,   614,
     615,   616,   617,   618,   619,   620,   621,   622,   623,   624,
     625,   626,   627,   628,   629,   630,   631,   632,   633,   634,
     635,   636,   637,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   387,   388,   388,   388,   388,   388,   388,   388,   388,
     388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
     388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
     388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
     388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
     388,   388,   388,   388,   388,   388,   388,   388,   388,   388,
     388,   389,   389,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   392,   392,   392,   392,   392,   393,   393,
     394,   394,   394,   395,   396,   397,   398,   398,   398,   398,
     399,   399,   399,   399,   399,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     400,   400,   400,   401,   401,   402,   402,   402,   402,   402,
     402,   403,   403,   403,   403,   403,   403,   403,   403,   403,
     403,   403,   403,   403,   403,   403,   403,   403,   404,   404,
     404,   404,   404,   404,   404,   404,   405,   405,   405,   405,
     405,   406,   406,   406,   406,   406,   406,   406,   406,   407,
     407,   407,   408,   408,   408,   408,   409,   409,   409,   410,
     410,   410,   411,   411,   411,   412,   412,   412,   412,   412,
     412,   412,   412,   413,   413,   414,   414,   414,   414,   414,
     414,   415,   415,   415,   415,   416,   416,   416,   416,   416,
     416,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   418,   418,   418,   418,   419,   419,   420,   420,   421,
     421,   422,   422,   423,   423,   424,   424,   424,   424,   424,
     424,   424,   424,   425,   425,   426,   426,   426,   426,   426,
     426,   426,   426,   427,   427,   428,   428,   428,   428,   428,
     429,   429,   429,   430,   430,   430,   431,   431,   431,   431,
     431,   431,   431,   432,   432,   433,   433,   433,   433,   433,
     434,   434,   434,   434,   435,   435,   435,   435,   436,   436,
     436,   436,   436,   436,   436,   436,   437,   437,   437,   437,
     437,   438,   438,   439,   439,   439,   439,   439,   440,   440,
     440,   440,   440,   441,   441,   442,   442,   442,   443,   443,
     443,   443,   444,   444,   445,   445,   446,   446,   447,   447,
     448,   448,   448,   448,   448,   448,   448,   449,   449,   449,
     449,   449,   450,   450,   450,   450,   450,   450,   450,   450,
     451,   452,   452,   452,   452,   453,   453,   454,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   455,   455,   455,   455,   455,   455,   455,
     455,   455,   455,   456,   456,   457,   457,   458,   458,   458,
     458,   458,   458,   458,   458,   459,   459,   459,   460,   461,
     461,   461,   461,   461,   461,   461,   461,   461,   462,   462,
     463,   463,   463,   464,   464,   465,   466,   466,   466,   467,
     467,   467,   468,   469,   469,   469,   469,   469,   469,   469,
     469,   469,   469,   470,   470,   470,   471,   471,   472,   472,
     473,   473,   473,   474,   474,   474,   475,   476,   476,   477,
     477,   477,   478,   478,   478,   479,   479,   479,   480,   480,
     480,   481,   481,   481,   481,   481,   481,   481,   481,   481,
     481,   481,   481,   481,   481,   482,   482,   483,   483,   483,
     483,   484,   484,   485,   485,   485,   486,   486,   486,   486,
     486,   487,   487,   487,   488,   488,   488,   488,   488,   488,
     489,   489,   489,   489,   489,   489,   489,   490,   490,   491,
     492,   492,   492,   493,   494,   494,   494,   495,   495,   495,
     496,   496,   496,   496,   496,   496,   497,   497,   497,   497,
     497,   497,   497,   497,   498,   498,   498,   498,   499,   499,
     500,   500,   501,   501,   502,   502,   503,   503,   504,   504,
     504,   505,   505,   506,   506,   507,   507,   508,   508,   509,
     509,   509,   509,   509,   509,   509,   509,   509,   509,   509,
     509,   509,   509,   509,   509,   509,   509,   510,   511,   511,
     512,   512,   512,   512,   513,   513,   513,   513,   514,   514,
     514,   514,   514,   514,   515,   515,   515,   515,   515,   515,
     515,   515,   516,   516,   517,   517,   517,   518,   518,   518,
     518,   518,   518,   519,   519,   519,   519,   519,   519,   519,
     519,   519,   519,   519,   519,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   521,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   522,   522,   522,   522,   522,
     522,   522,   522,   522,   522,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   525,   525,   525,   525,   525,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   527,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   529,
     529,   529,   529,   529,   529,   529,   529,   529,   530,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   530,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   531,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   533,
     533,   533,   533,   533,   533,   534,   534,   535,   535,   535,
     536,   537,   537,   537,   537,   537,   537,   537,   538,   539,
     539,   539,   539,   539,   539,   540,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   539,   539,   539,   539,   539,   539,   539,   539,
     539,   539,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   541,   541,   541,   541,   541,   541,   541,
     541,   541,   541,   542,   542,   542,   542,   542,   542,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   544,   544,   544,   544,   545,
     545,   545,   546,   546,   546,   547,   547,   547,   547,   547,
     547,   547,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   548,
     548,   548,   548,   548,   548,   548,   548,   548,   548,   549,
     549,   549,   549,   550,   550,   551,   551,   552,   552,   553,
     554,   554,   554,   554,   554,   554,   555,   555,   556,   556,
     556,   556,   556,   556,   557,   557,   557,   557,   557,   557,
     557,   558,   558,   559,   559,   559,   559,   559,   559,   559,
     559,   560,   560,   560,   560,   560,   560,   560,   560,   560,
     560,   560,   560,   561,   561,   562,   563,   562,   564,   564,
     564,   565,   565,   565,   565,   565,   565,   566,   566,   567,
     567,   568,   569,   570,   569,   571,   571,   572,   573,   574,
     574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
     574,   574,   574,   574,   574,   574,   574,   574,   574,   574,
     574,   574,   574,   574,   574,   575,   575,   575,   575,   575,
     575,   575,   575,   576,   576,   576,   576,   577,   577,   577,
     577,   577,   577,   577,   577,   578,   578,   578,   579,   579,
     579,   580,   580,   580,   580,   581,   581,   581,   581,   582,
     582,   583,   583,   583,   583,   584,   584,   585,   585,   585,
     585,   586,   586,   586,   586,   587,   587,   587,   588,   588,
     588,   589,   589,   589,   590,   591,   591,   591,   591,   591,
     592,   592,   592,   592,   592,   592,   593,   593,   593,   593,
     593,   594,   594,   594,   595,   595,   595,   595,   595,   596,
     596,   596,   596,   596,   596,   597,   597,   597,   597,   597,
     597,   597,   597,   597,   597,   597,   597,   597,   598,   598,
     598,   599,   599,   599,   600,   600,   600,   601,   601,   601,
     602,   602,   602,   602,   603,   603,   603,   604,   604,   604,
     605,   605,   605,   606,   606,   606,   607,   607,   607,   608,
     608,   608,   609,   609,   609,   610,   610,   610,   611,   611,
     611,   612,   612,   612,   613,   613,   613,   614,   614,   614,
     615,   616,   616,   616,   617,   617,   617,   617,   618,   618,
     618,   618,   618,   619,   619,   619,   620,   620,   621,   621,
     621,   621,   621,   622,   622,   622,   623,   623,   623,   624,
     624,   624,   624,   625,   626,   626,   626,   626,   626,   627,
     627,   627,   627,   627,   627
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     3,     2,     2,     2,     3,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     2,
       2,     2,     2,     2,     2,     1,     3,     2,     2,     2,
       1,     2,     2,     2,     1,     2,     1,     2,     2,     2,
       2,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     2,     1,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     0,
       1,     1,     0,     1,     1,     1,     0,     1,     1,     0,
       1,     1,     0,     1,     1,     0,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     0,     1,     1,     1,     0,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     2,     6,     2,     4,     2,     2,     2,
       3,     2,     2,     1,     2,     1,     2,     4,     5,     2,
       3,     5,     6,     1,     1,     1,     7,    11,     8,    12,
       1,     2,     2,     1,     1,     2,     2,     2,     2,     3,
       3,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     1,     3,     2,     2,     2,     5,     9,
       9,     9,     7,     1,     2,     1,     5,     9,     9,     9,
       7,     1,     2,     2,     2,     2,     2,     2,    13,    13,
      12,    12,     1,     0,     1,     1,     4,     6,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     4,     3,     4,
       0,     6,     8,     2,     3,     3,     3,     0,     4,     4,
       4,     4,     3,     3,     1,     3,     5,     4,     4,     3,
       2,     0,     1,     1,     1,     1,     1,     3,     0,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     2,     2,     4,     3,     2,
       2,     2,     2,     2,     1,     3,     2,     2,     2,     2,
       1,     2,     8,     2,     1,     2,     1,     2,     1,     4,
       3,     2,     1,     7,     8,     7,     8,     1,     1,     1,
       2,     1,     1,     2,     1,     0,     2,     2,     1,     0,
       2,     2,     1,     1,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     0,     1,     2,     1,     4,     5,     0,
       2,     1,     5,     2,     2,     1,     1,     1,     2,     1,
       2,     1,     1,     0,     1,     1,     0,     1,     5,     6,
       3,     6,     3,     1,     3,     1,     1,     1,     3,     6,
       7,     5,     2,     1,     5,     4,     1,     3,     0,     1,
       2,     1,     4,     1,     2,     1,     2,     3,     2,     1,
       2,     1,     4,     2,     1,     1,     3,     1,     2,     3,
       2,     0,     1,     1,     4,     2,     0,     1,     3,     4,
       4,     0,     1,     1,     1,     1,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     2,     2,     2,     2,
       1,     1,     2,     1,     0,     1,     1,     2,     0,     1,
       0,     1,     0,     1,     0,     1,     0,     1,     0,     2,
       2,     0,     1,     2,     1,     6,     5,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     2,     2,     2,     0,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     1,     2,     3,     1,     2,     2,     4,     5,
       1,    10,     1,     2,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     4,     4,     4,     3,     3,     5,     4,
       4,     4,     3,     3,     3,     3,     3,     3,     2,     2,
       4,     3,     3,     3,     3,     4,     4,     4,     4,     5,
       4,     6,     7,     4,     4,     5,     2,     3,     3,     3,
       3,     3,     3,     3,     2,     3,     3,     3,     3,     4,
       3,     5,     6,     3,     3,     4,     3,     3,     3,     3,
       3,     5,     3,     3,     4,     3,     2,     2,     1,     3,
       4,     4,     4,     4,     4,     6,     4,     4,     5,     4,
       4,     4,     4,     5,     4,     6,     7,     4,     4,     5,
       5,     5,     5,     5,     5,     7,     5,     5,     6,     4,
       4,     4,     4,     4,     6,     4,     4,     5,     5,     5,
       5,     5,     6,     5,     7,     8,     5,     5,     6,     3,
       3,     3,     3,     4,     3,     5,     6,     3,     3,     4,
       3,     3,     3,     3,     3,     5,     3,     3,     4,     4,
       4,     3,     5,     4,     4,     2,     3,     6,     6,     1,
       1,     1,     2,     2,     2,     3,     3,     2,    12,     2,
       2,     1,     3,     4,     2,     0,     3,     1,     2,     2,
       2,     2,     2,     4,     4,     4,     3,     4,     5,     8,
       6,     9,     6,     7,    10,    11,    12,     9,     5,     6,
       3,     5,     5,     6,     5,     4,     9,    10,    11,     9,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       7,     2,     4,     4,     4,     4,     5,     4,     4,     5,
       5,     3,     4,     4,     4,     7,     9,     6,    10,    11,
      12,     9,     3,     2,     3,     5,     7,     4,     3,     3,
       6,     7,     7,     4,     4,     9,     4,     3,     4,     7,
       7,     2,     3,     3,     3,     4,     2,     2,     4,    10,
       3,     1,     3,     2,     2,     2,     2,     3,     5,     4,
       5,     2,     2,     2,     2,     3,     2,     2,     2,     3,
       2,     3,     4,     3,     3,     6,     4,     2,     3,     2,
       2,     4,     3,     3,     2,     3,     1,     2,     1,     2,
       2,     2,     1,     1,     1,     1,     2,     1,     2,     2,
       1,     2,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     2,     2,     2,     3,     5,
       7,     7,     6,     6,     6,     6,     5,     6,     6,     6,
       6,     6,     6,     6,    11,     7,     7,     7,     9,     9,
      10,    12,    12,     2,     2,     3,     4,     4,     4,     0,
       1,     1,     4,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     3,     3,     8,     6,
      10,     7,     7,     5,     2,     2,     3,     4,     5,     5,
       5,     3,     4,     5,     5,     5,     5,     2,     3,     3,
       5,     3,     3,     3,     4,     5,     5,     5,     5,     3,
       4,     5,     5,     2,     2,     3,     5,     6,     6,     3,
       3,     6,     5,     5,     2,     3,     3,     5,     6,     3,
       2,     2,     3,     2,     3,     2,     3,     5,     6,     2,
       2,     2,     1,     4,     4,     1,     2,     2,     2,     2,
       2,     2,     2,     3,     2,     3,     2,     3,     1,     1,
       1,     1,     1,     0,     2,     0,     2,     0,     1,     0,
       0,     1,     1,     1,     1,     1,     7,     8,     2,     6,
       2,     6,     2,     3,     2,     1,     1,     3,     3,     1,
       4,     2,     1,     3,     3,     4,     3,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     0,     0,     2,     6,     7,
       2,     1,     3,     1,     3,     1,     1,     1,     2,     2,
       1,     3,     0,     0,     2,     2,     1,     3,     5,     0,
       1,     1,     2,     2,     3,     2,     3,     2,     3,     2,
       3,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     2,     3,     2,
       2,     2,     2,     1,     1,     1,     1,     4,     2,     3,
       3,     2,     3,     2,     2,     2,     3,     3,     3,     2,
       3,     1,     3,     3,     1,     2,     2,     2,     2,     9,
       6,     1,     1,     1,     1,     2,     2,     3,     3,     1,
       2,     3,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     2,     2,     4,     2,     2,     2,     2,     2,     4,
       2,     2,     2,     2,     2,     4,     1,     2,     2,     2,
       3,     1,     1,     1,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     2,     3,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     2,     2,     2,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       4,     6,     2,     1,     1,     1,     1,     1,     0,     5,
       1,     6,     3,     1,     2,     2,     2,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     2,     2,     3,     1,
       3,     4,     2,     1,     2,     5,     6,     6,     2,     1,
       2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   340,     0,     0,     0,     0,     0,     0,   368,     0,
       0,    23,     0,     0,     0,     0,     0,  1179,     0,     0,
       0,     0,  1110,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1110,    45,     0,     0,     0,    50,     0,     0,
       0,    54,  1368,    56,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     3,    61,
      62,     0,   270,     6,     0,     0,     0,     0,     0,     0,
       9,     0,     0,   303,   305,     0,     0,     0,     0,     0,
      11,   163,   165,   158,   159,   160,   164,   161,   162,   311,
      12,     0,   323,     0,     0,     0,    13,     0,     0,     0,
       0,   347,     0,    14,    74,   103,     0,   133,   102,    82,
     100,     0,    79,    81,    77,   134,   101,    78,     0,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,    75,    76,    80,
     354,   171,   104,     0,    15,     0,    16,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     2,    63,
     366,   365,    18,     0,    19,     0,     0,     0,   429,   443,
       0,   449,     0,     0,     0,     0,     0,     0,     0,   383,
       0,   521,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1110,     0,   394,     0,     0,   400,     0,     0,     0,
     404,     0,   406,     0,   408,     0,     0,   578,   412,    20,
       0,   584,    21,   589,     0,     0,   608,   593,   594,   595,
     596,   610,   598,   599,   603,   600,     0,   602,   604,     0,
       0,    22,     0,    24,     0,     0,     0,    26,     0,     0,
       0,    27,     0,   625,     0,     0,     0,   630,     0,    28,
       0,  1181,   141,  1203,     0,  1180,  1195,  1199,  1193,     0,
    1191,  1201,     0,  1197,     0,    36,     0,     0,     0,     0,
       0,     0,    30,   790,    31,     0,     0,     0,     0,     0,
       0,   791,    32,     0,    33,  1114,  1115,  1111,  1112,  1113,
       0,   141,  1205,     0,   135,     0,     0,     0,    35,     0,
      37,     0,  1216,  1215,  1214,  1213,    39,     0,     0,     0,
       0,     0,   171,     0,    40,     0,  1234,     0,  1231,    41,
       0,     0,     0,     0,    44,     0,    43,    42,     0,     0,
       0,     0,    47,     0,     0,  1276,    48,     0,     0,     0,
       0,     0,    49,  1364,  1363,  1367,  1366,  1365,    51,     0,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    53,     0,     0,  1370,    55,     0,     0,    57,     0,
       0,     0,     0,   171,    58,  1393,    59,     0,     0,    60,
       1,     4,     5,   253,     0,   245,     0,     0,   247,     0,
     255,   248,   252,   263,   264,   249,   265,     0,   251,   273,
     274,   272,   271,     0,     0,   293,     0,   278,   286,   289,
     288,   287,   285,   277,   282,   283,   284,   276,     0,     0,
       0,     0,     0,     0,   281,    10,     0,     0,     0,     0,
       0,     0,     0,     0,   304,     0,     0,   312,     0,   322,
     313,   324,   314,   325,   315,   336,   316,     0,     0,   317,
       0,    93,    94,    95,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   343,     0,     0,     0,     0,
       0,   173,   178,   172,   174,   177,   176,   175,     0,     0,
     360,    68,    69,    70,    71,    72,    64,    65,    66,    73,
      67,     0,   369,     0,   425,   421,   417,   418,   422,   419,
     424,   370,   428,   371,   328,   433,   437,   432,   331,   330,
     329,     0,     0,   372,   444,   374,     0,   373,     0,   451,
     375,   463,   455,   466,   456,   457,   459,     0,   461,   462,
     171,   376,     0,     0,   377,     0,     0,   171,   378,   475,
     171,   473,   379,   476,   381,   171,   477,   380,     0,   171,
       0,   382,   495,     0,   493,   511,     0,     0,     0,   499,
     491,     0,   501,   516,   504,   384,   522,   523,   385,   386,
       0,     0,   547,   548,   549,   389,   544,   545,   546,   390,
       0,   486,     0,   391,    83,   483,     0,   392,   393,   537,
     537,   524,   525,   537,   537,   397,     0,   536,   530,   535,
     531,   532,   533,   534,   396,   543,   398,   399,   539,   401,
       0,   540,   541,   542,   403,   555,   550,   551,   553,   405,
     561,   570,   572,   574,   560,   563,   564,   576,   407,     0,
       0,   581,     0,   411,   171,   583,   590,     0,   591,   609,
     592,   611,   612,   613,   597,   614,   616,   615,   617,   601,
     605,   622,     0,     0,     0,     0,   618,   606,    25,  1270,
    1271,  1272,  1273,  1274,     0,  1265,  1266,  1267,  1268,     0,
       0,     0,   627,   626,     0,     0,     0,     0,    29,   141,
    1204,     0,  1196,  1200,  1194,  1192,  1202,     0,  1198,     0,
     156,   149,   148,   146,   152,   153,   150,   154,   147,   157,
     143,   145,   155,   144,   151,   142,  1185,  1183,  1182,  1187,
    1189,     0,     0,     0,     0,   637,     0,   638,     0,     0,
       0,     0,     0,     0,     0,   639,     0,   789,     0,   640,
       0,   641,     0,     0,   642,     0,   794,   793,   792,     0,
     797,     0,     0,     0,   963,     0,     0,     0,   801,   805,
     807,   999,     0,     0,     0,     0,   901,     0,     0,     0,
     936,     0,     0,     0,     0,     0,     0,     0,   938,     0,
       0,     0,    34,  1211,  1206,  1212,   138,   139,   137,   140,
     136,  1207,     0,  1209,  1210,  1264,    38,     0,     0,     0,
       0,  1223,  1224,     0,   171,     0,  1221,  1218,     0,     0,
       0,   171,  1241,  1244,  1242,  1243,  1235,  1236,  1237,  1238,
       0,     0,     0,    46,  1261,  1262,     0,  1281,  1283,  1282,
    1278,  1279,  1277,     0,     0,     0,     0,     0,     0,  1284,
       0,  1287,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1285,  1295,     0,     0,     0,  1286,
    1288,  1362,  1259,  1260,  1258,   226,     0,   237,   222,     0,
     239,   223,     0,   241,   224,  1256,  1257,  1255,   225,   228,
       0,     0,     0,   231,   227,   229,   230,     0,     0,   221,
       0,     0,     0,     0,  1376,  1389,     0,     0,  1379,     0,
       0,  1382,     0,     0,  1381,  1380,   179,  1399,     0,  1398,
    1394,   254,   250,     0,   259,     0,   256,     0,   275,   166,
     169,   170,   168,   167,   290,   291,   292,   280,   279,   295,
     297,   296,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   171,     0,   344,
      99,    96,    97,    98,   171,   346,   345,     0,     0,     0,
       0,     0,     0,     0,   359,     0,   355,   353,   352,   367,
     420,     0,     0,   423,   438,   439,   434,   435,   440,   442,
     441,   436,   332,   333,   431,   430,   446,   445,     0,   450,
     464,   465,   454,   467,   460,   458,   453,     0,     0,   171,
     171,   179,   179,   179,   171,     0,     0,   171,   512,   494,
     505,     0,   496,    83,   507,     0,     0,   498,   500,   171,
     517,     0,     0,   503,     0,     0,   388,     0,   488,    87,
      86,   482,     0,   538,   527,   526,   528,   529,     0,     0,
       0,  1013,  1015,  1014,     0,  1103,     0,  1082,     0,  1085,
       0,     0,  1105,  1107,     0,  1098,   395,     0,   552,   554,
     571,   557,   573,   558,   575,   559,   565,   568,   566,   562,
     577,   556,     0,     0,   410,   582,   579,   580,   179,   607,
     619,   620,   621,   623,     0,     0,     0,   636,   624,     0,
       0,     0,  1186,  1184,  1188,  1190,     0,     0,     0,   192,
     192,   186,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   189,   189,   186,     0,     0,   186,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   684,   708,
       0,     0,     0,   676,     0,     0,     0,     0,   192,   186,
       0,     0,   785,     0,   795,   796,   171,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     851,     0,     0,     0,     0,     0,   873,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   891,     0,     0,   896,
     897,     0,     0,     0,   916,   918,   917,     0,   920,     0,
       0,   927,   929,   930,   964,     0,     0,     0,     0,   799,
     800,  1007,  1005,  1010,  1009,  1008,  1006,  1011,     0,   804,
       0,  1001,  1000,   808,     0,  1004,     0,   809,   810,   811,
     812,     0,     0,     0,     0,     0,   903,     0,     0,   904,
    1126,     0,  1129,  1125,     0,     0,     0,   905,   937,   906,
    1144,  1149,  1146,  1152,  1145,  1143,  1150,  1147,  1141,  1148,
    1142,  1151,     0,     0,   911,     0,     0,     0,     0,   912,
    1161,  1165,  1166,     0,  1163,   913,     0,  1167,   914,   934,
       0,     0,     0,   939,   940,   941,  1208,  1222,     0,     0,
    1229,  1225,     0,     0,     0,  1220,  1219,  1233,  1232,     0,
       0,  1249,     0,     0,  1245,     0,  1253,     0,     0,  1246,
       0,  1280,   215,   215,     0,     0,     0,   215,     0,  1309,
       0,  1308,     0,     0,     0,     0,  1296,     0,     0,     0,
       0,  1300,     0,     0,     0,  1307,     0,     0,     0,     0,
       0,  1298,  1310,     0,     0,     0,  1297,   215,   215,   215,
       0,   238,   240,   242,   232,     0,   235,   234,   233,     0,
     243,     0,    62,     0,  1372,     0,  1377,   171,  1392,     0,
    1383,  1384,     0,  1386,  1387,     0,   180,   181,  1378,  1400,
    1401,     0,   246,     0,   260,     0,     0,     0,     0,   294,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   338,   171,     0,     0,     0,     0,
     171,     0,   358,     0,   357,   427,   426,     0,     0,     0,
     171,     0,   179,   472,   470,   474,   478,     0,     0,     0,
     179,     0,   513,   497,     0,   508,   510,   182,     0,     0,
     387,     0,     0,    62,     0,   487,    85,    84,     0,     0,
    1025,     0,     0,     0,     0,     0,     0,  1037,     0,     0,
       0,     0,     0,     0,  1053,  1054,     0,     0,     0,     0,
    1064,     0,  1070,  1071,  1073,  1075,     0,  1079,  1090,  1091,
    1092,     0,  1094,  1099,  1101,  1102,  1100,  1012,     0,  1081,
       0,  1080,  1024,     0,     0,  1086,     0,  1088,     0,  1087,
    1108,  1089,  1096,     0,     0,   569,   567,   409,     0,     0,
    1275,  1269,   634,   635,     0,   632,   628,     0,   192,   192,
     192,   193,   194,   646,   647,   188,   187,     0,   192,   192,
     192,     0,   654,   653,   652,   664,   189,   192,   192,   192,
     190,   191,   192,   192,     0,   192,   192,     0,   189,     0,
     677,     0,   683,     0,   682,   681,   680,     0,     0,     0,
     707,     0,   706,     0,   679,   678,     0,     0,     0,     0,
     189,   189,   186,     0,     0,   186,     0,     0,     0,   192,
     192,   781,     0,   192,   192,   786,     0,   205,   206,   207,
     208,   209,   210,     0,    91,    92,    90,   816,     0,     0,
       0,     0,     0,   957,   955,   950,     0,   960,   944,   961,
     947,   959,   953,   942,   956,   945,   943,   962,   958,     0,
       0,   830,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   861,     0,     0,     0,     0,
     872,   874,     0,     0,   879,   878,     0,     0,   195,     0,
       0,   171,     0,   887,     0,     0,     0,     0,   892,   893,
     894,     0,     0,     0,   900,   915,   919,   921,   924,   923,
       0,     0,     0,   928,   965,   967,     0,   966,   802,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1109,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   806,     0,     0,     0,     0,   902,
       0,   171,  1122,  1120,  1118,     0,     0,   171,  1124,   907,
       0,     0,     0,     0,  1160,     0,     0,  1168,   932,   933,
       0,   935,  1228,  1230,  1227,  1226,  1217,     0,     0,     0,
    1250,     0,     0,  1254,  1263,   217,   218,   219,   220,   216,
    1290,  1289,     0,     0,     0,  1294,     0,     0,     0,  1293,
       0,     0,     0,  1292,  1291,   215,     0,     0,     0,  1299,
       0,     0,     0,  1306,     0,     0,     0,  1305,     0,     0,
       0,  1304,     0,     0,     0,  1303,     0,     0,     0,     0,
       0,  1320,     0,  1355,  1354,  1356,     0,     0,     0,  1302,
       0,     0,     0,  1301,  1315,  1314,  1316,  1312,  1311,  1313,
    1358,  1357,  1359,     0,   236,     0,     0,  1374,  1375,     0,
    1390,   171,  1385,  1388,     0,     0,   171,     0,     0,     0,
     257,     0,     0,     0,     0,   298,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   335,   334,     0,     0,   326,
     337,   339,     0,   349,   351,   350,   348,   171,   356,     0,
       0,     0,   179,   171,     0,     0,     0,     0,   492,   506,
     515,     0,   509,   184,   185,   183,   502,     0,   518,     0,
       0,   485,   490,    83,     0,     0,     0,     0,     0,     0,
     171,  1026,     0,     0,     0,  1031,     0,   171,     0,  1038,
    1039,     0,  1041,  1042,  1043,     0,     0,     0,  1049,     0,
    1055,     0,     0,     0,  1059,  1060,     0,     0,     0,  1065,
    1066,     0,     0,  1069,  1072,  1074,  1076,     0,     0,  1093,
    1095,  1016,  1104,  1017,     0,     0,  1106,  1097,     0,     0,
     587,   588,     0,   629,   633,     0,   643,   644,   645,   192,
     649,   650,   651,     0,     0,     0,   658,   659,   186,     0,
       0,     0,   192,   665,   666,   667,   668,   670,   189,   673,
     674,     0,   192,     0,     0,     0,   189,   189,   186,     0,
       0,     0,     0,     0,     0,     0,   189,   189,   186,     0,
       0,   186,     0,     0,     0,     0,   189,   189,   186,     0,
       0,     0,     0,   705,     0,   709,     0,     0,     0,     0,
       0,   189,   189,   186,     0,     0,   186,     0,     0,     0,
       0,     0,   189,   189,   186,     0,     0,   186,     0,   189,
     685,   686,   687,   688,   690,     0,   693,   694,     0,   189,
       0,     0,   779,   780,   192,   783,   784,     0,   815,   171,
     817,     0,     0,     0,     0,     0,     0,     0,   949,   946,
     952,   951,   948,   954,     0,     0,     0,     0,     0,   171,
     835,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   852,   853,   854,     0,   858,   855,
     857,     0,     0,   863,   862,   864,     0,     0,     0,     0,
       0,     0,   171,   171,   877,   201,   197,   202,   196,   199,
     198,   200,   883,   884,     0,     0,   886,   888,   171,   171,
       0,   895,   898,   171,   171,   922,   926,   968,   803,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1153,
     993,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   994,     0,     0,     0,     0,
       0,   813,   814,   171,   179,  1123,     0,     0,  1127,  1128,
       0,     0,   909,     0,   171,     0,  1162,  1164,   931,     0,
    1247,  1248,  1251,  1252,   215,   215,   215,   215,   215,   215,
     215,   215,   215,  1360,  1318,  1317,  1319,  1352,  1351,  1353,
    1349,  1348,  1350,  1343,  1342,  1344,  1340,  1339,  1341,  1322,
    1321,  1325,  1324,  1326,  1323,  1334,  1333,  1335,  1331,  1330,
    1332,     0,     0,  1369,     0,  1391,     0,   171,     0,  1395,
       0,     0,   261,     0,   258,     0,     0,     0,     0,     0,
     306,     0,     0,     0,     0,     0,     0,     0,   171,     0,
     341,   159,     0,   447,     0,   468,   179,   182,     0,     0,
     481,     0,   519,   520,     0,   484,     0,     0,     0,     0,
       0,   171,  1027,   182,   182,   182,   171,  1032,   182,   179,
     182,   182,   171,  1044,   182,   182,   182,   171,  1050,   182,
     182,   171,     0,   182,   171,   182,   182,   171,   182,   171,
    1083,  1084,     0,     0,   586,     0,   648,   655,   656,   657,
       0,   661,   662,   663,   669,   192,   189,   675,   696,   697,
     698,   699,   700,     0,   702,   703,   189,   189,   759,   760,
     761,   762,   764,     0,   767,   768,     0,   189,   770,   771,
     772,   773,   774,     0,   776,   777,   189,     0,     0,     0,
     189,   189,   186,     0,     0,     0,     0,     0,     0,   189,
     189,   186,     0,     0,     0,     0,     0,     0,   189,   189,
     186,     0,     0,     0,   189,   192,   192,   192,   192,   192,
       0,   192,   192,     0,   189,   189,   192,   192,   192,   192,
     192,     0,   192,   192,     0,   189,   689,   189,     0,   695,
       0,     0,   782,     0,   818,   182,     0,     0,   182,     0,
       0,     0,   828,   182,   831,   832,   182,   834,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   856,   859,   860,     0,   182,     0,     0,     0,   875,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1154,  1132,     0,  1139,
    1140,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   171,     0,     0,    88,     0,     0,  1002,
    1003,   179,     0,     0,     0,  1130,   908,   910,   179,   171,
    1240,  1346,  1345,  1347,  1337,  1336,  1338,  1328,  1327,  1329,
    1361,     0,  1371,  1402,     0,     0,  1397,  1396,   262,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   302,     0,
       0,   327,   182,   448,   452,   469,   471,     0,   479,   514,
     171,     0,     0,     0,     0,     0,     0,  1023,  1028,  1030,
    1029,  1033,  1034,  1035,  1036,  1040,  1045,  1046,  1047,  1048,
    1051,  1052,  1056,   179,   182,  1062,   179,  1063,  1067,   179,
    1077,   179,     0,   171,     0,   585,     0,   660,   671,   192,
     189,   704,   763,   189,     0,   769,   189,   778,   192,   192,
     192,   192,   192,     0,   192,   192,   189,   192,   192,   192,
     192,   192,     0,   192,   192,   189,   192,   192,   192,   192,
     192,     0,   192,   192,   189,   192,   719,   720,   721,   722,
     724,   189,   727,   728,     0,   192,   192,   748,   749,   750,
     751,   753,   189,   756,   757,     0,   192,   691,   189,   787,
     788,   171,   820,     0,   182,   822,     0,   171,     0,   829,
     833,   171,     0,   840,   841,   842,   843,   847,   848,   844,
     845,   846,     0,     0,   182,   867,     0,   171,     0,     0,
     880,   182,     0,     0,   182,   182,     0,   925,     0,   203,
     203,     0,     0,   203,     0,   203,  1109,     0,     0,     0,
       0,     0,     0,     0,     0,  1131,     0,     0,   203,   203,
       0,     0,     0,     0,     0,     0,     0,     0,   995,     0,
       0,     0,  1109,    89,     0,   203,     0,  1156,   171,   171,
       0,   179,     0,   244,  1404,  1403,     0,     0,   266,     0,
       0,     0,     0,     0,   310,     0,     0,     0,   342,   480,
       0,   361,     0,  1019,     0,   211,     0,  1057,  1058,  1061,
    1068,  1078,   402,     0,   361,     0,   672,   701,   765,   189,
     775,   710,   711,   712,   713,   714,   189,   716,   717,   192,
     739,   740,   741,   742,   743,   189,   745,   746,   192,   730,
     731,   732,   733,   734,   189,   736,   737,   192,   723,   192,
     189,   729,   752,   192,   189,   758,   692,     0,   182,   823,
       0,     0,     0,     0,     0,   849,   850,   865,     0,     0,
       0,   876,   881,     0,   889,   890,   882,   182,     0,   204,
    1109,  1109,    88,     0,  1109,     0,  1109,   969,   171,     0,
    1134,     0,  1137,  1177,  1138,  1136,  1133,     0,  1109,  1109,
      88,     0,     0,  1109,  1109,     0,     0,  1109,   998,   996,
     997,   976,  1109,  1109,  1156,  1172,     0,  1121,  1119,  1158,
       0,     0,     0,     0,   268,   300,   301,     0,     0,     0,
     299,     0,   361,   362,   364,   363,   413,     0,     0,   212,
     214,   213,  1021,  1022,   361,   415,     0,   766,   192,   718,
     192,   747,   192,   738,   725,   192,   754,   192,     0,   819,
     182,   182,     0,   182,     0,   182,   182,     0,   182,     0,
    1109,   982,   978,  1109,     0,   983,     0,   977,  1109,     0,
    1135,     0,   980,   979,  1109,     0,     0,   974,   972,  1109,
     171,   973,   975,   981,  1172,  1116,     0,     0,  1157,  1170,
    1159,  1239,     0,     0,   308,   309,   307,   328,   331,   329,
       0,     0,   414,  1018,   171,   416,   631,   715,   744,   735,
     726,   755,   182,   821,   827,     0,   839,   836,   866,   871,
       0,   885,     0,   987,   971,    88,     0,   985,  1178,     0,
     970,    88,     0,   986,     0,  1117,  1174,  1176,     0,  1169,
       0,     0,     0,     0,     0,     0,   211,     0,   824,   171,
     837,   868,   899,  1109,     0,     0,  1109,     0,   182,  1175,
    1171,   267,     0,     0,     0,     0,     0,  1020,   798,   171,
     825,   838,   171,   869,   989,     0,  1109,   988,     0,     0,
     269,   321,     0,   320,     0,   826,   870,    88,   990,    88,
    1109,   319,   318,  1109,  1109,   984,   992,   991
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,  1596,   178,   160,  1041,  2722,  2723,   475,   476,
     477,   478,   161,   162,   163,   801,   726,    99,   934,   498,
    1378,  1886,  1527,  1542,  1523,  2122,  2830,  1593,  2892,  1760,
     381,   894,  1357,   878,   881,   884,   899,    68,   405,   411,
     415,   418,    73,   421,    80,   437,   433,   427,   444,    90,
     454,   100,   106,   460,   462,   464,   532,   994,  1857,   466,
     469,   113,   485,   164,   166,  2886,   182,   184,   229,  1036,
    1084,   521,   983,   523,   533,   986,   991,   535,   537,   997,
     540,   999,   551,  1002,  1004,   554,   558,   562,   564,   567,
     571,   607,   603,  1445,   585,  1022,  1027,  1019,  1433,  1033,
     588,   615,   624,  1044,   629,   634,   626,   599,   595,   639,
     648,  1079,  1506,  1071,  1073,  1075,  1081,   653,  1086,   232,
     655,  1952,   251,   658,   660,   664,   669,   677,   269,  1516,
     692,   292,   735,  1532,   737,   745,  1143,  1550,  1138,  2013,
    1562,  1560,  2015,  1139,  1552,  1554,   751,   754,   749,   294,
     302,   304,   792,  1220,  1619,  1209,  1714,  2165,  1223,  1227,
    1218,  1066,  1487,  1491,  1499,  1501,  2149,   310,  1236,  1239,
    1247,  2476,  2477,  2478,  2150,  2865,  2866,  1269,  1275,  1278,
    2948,  2949,  2945,  2946,  2996,  2479,  2480,   285,   318,   326,
     334,   816,   811,   339,   344,   346,   826,   833,  1304,  1309,
     888,   875,   352,   320,   261,   257,   356,   840,   362,   849,
     864,   865,  1346,  1341,  1779,  1331,  1801,  1773,  1813,  1809,
    1769,  1795,  1791,  1765,  1787,  1783,  1335,   869,   851,   368,
     369,   385,  1364,   388,   394,   911,   914,   908,   396,   399,
     919
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2795
static const yytype_int16 yypact[] =
{
    5191,    51,   106,    40, -2795, -2795,   965,  -162,  1408,   986,
    1051,   260,   762,   137,   435,    46,   550,    41,  5407,    80,
    2223, -2795,    85,   -10,    -8,  1089,   161,   613,  1232,   -64,
     224,   288,   650,  1140,  -105,   352,   812,  3728,   227,   654,
     544,   454,   650, -2795,    72,    32,  1337, -2795,   -12,   571,
    1106, -2795,   522, -2795,    42,  1543,   334,   126,   601,   231,
     635,   342,   648,   701,   147,   728,     1,   165, -2795, -2795,
   -2795,   625,   676, -2795,   385,    17,   435,    -9,   162,    67,
   -2795,   731,   676, -2795, -2795,   676,   676,   641,   737,   676,
   -2795, -2795, -2795, -2795,   676, -2795, -2795, -2795, -2795, -2795,
   -2795,    43,   716,   746,   790,   174, -2795,   676,  1749,   676,
     676,  1551,   676, -2795, -2795, -2795,   552, -2795, -2795, -2795,
   -2795,  4657, -2795, -2795, -2795, -2795, -2795, -2795,   676, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795,  1496, -2795,   676, -2795,   834, -2795, -2795,   435,   435,
     435,   435,   435,   435,   435,   435,   435,   435, -2795, -2795,
   -2795, -2795, -2795,   686, -2795,   788,  1681,   759,   128,   558,
     715,   -25,  4137,   632,  4710,  4498,   855,  4657,  3758, -2795,
    1882,  -115,   839,   928,   861,    76,   177,  1059,   779,   941,
     501,   650,  1367, -2795,   649,   907, -2795,   725,   675,   206,
   -2795,   280, -2795,   541, -2795,   443,   914,   408, -2795, -2795,
    4786, -2795, -2795, -2795,   932,   933,   991, -2795, -2795, -2795,
   -2795,    53, -2795, -2795, -2795, -2795,   920, -2795, -2795,  4786,
    4268, -2795,  1012, -2795,    25,  4786,  1054, -2795,    11,  4786,
    1069, -2795,    70, -2795,  1050,  1072,   119, -2795,   676, -2795,
    1084,  1265,  2707, -2795,  1086, -2795, -2795, -2795, -2795,  1093,
   -2795, -2795,   676, -2795,   435, -2795,    36,  1096,   551,   534,
    1098,    27, -2795, -2795, -2795,  1101,  1132,   435,   435,   676,
     676, -2795, -2795,  1134, -2795, -2795, -2795, -2795, -2795, -2795,
    3697,  2707, -2795,  1145,    21,   676,  4786,   676, -2795,  4786,
   -2795,  1160, -2795, -2795, -2795, -2795, -2795,   676,  1211,   435,
    3327,   676,  1496,   676, -2795,  1170, -2795,  5408, -2795, -2795,
     619,  1173,  1176,   676, -2795,  1186, -2795, -2795,   343,  1195,
    4786,  1198, -2795,  1475,   676,  1102, -2795,  1181,  1087,  2004,
     441,  1208, -2795, -2795, -2795, -2795, -2795, -2795, -2795,  1214,
   -2795,   480,   129,   264,   290,    68,   676,   110,  1238,   676,
     143, -2795,   676,   926,  1268, -2795,   676,   676, -2795,    83,
      15,    48,  1275,  1496, -2795, -2795, -2795,   662,   676, -2795,
   -2795, -2795, -2795, -2795,   676, -2795,  1292,  1312, -2795,   676,
     823, -2795, -2795, -2795, -2795, -2795, -2795,   676, -2795, -2795,
     676, -2795, -2795,   583,   583, -2795,  1315, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,  1104,   676,
     676,  1317,  1330,  1332, -2795, -2795,   676,   676,   676,   676,
     676,   676,  1340,   676, -2795,  1341,   676, -2795,  1346, -2795,
   -2795, -2795, -2795,   980, -2795,  1336, -2795,  4786,  1348, -2795,
     676, -2795, -2795, -2795,   676,  1349,  1358,  1358,  4786,   676,
     676,   676,   676,   676,   676, -2795,   676,  4657,  1749,   676,
     676, -2795, -2795, -2795, -2795, -2795, -2795, -2795,  1749,   676,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795,  1365, -2795,  1073,    99, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795,  -118, -2795, -2795, -2795,  1189, -2795,
     450,   605,   605, -2795, -2795, -2795,  1375, -2795,  1382, -2795,
   -2795,   -58, -2795,  1194, -2795, -2795, -2795,  1212, -2795, -2795,
    1496, -2795,   676,   676, -2795,  4786,  4786,  1496, -2795, -2795,
    1496, -2795, -2795, -2795, -2795,  1496, -2795, -2795,  4786,  1496,
     676, -2795, -2795,  4786, -2795,  1389,   513,  1179,     2, -2795,
   -2795,  1182,  4786,    14, -2795, -2795, -2795, -2795, -2795, -2795,
    1399,  1404, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
    1407, -2795,  1201, -2795,   -51, -2795,   676, -2795, -2795,  1417,
    1417, -2795, -2795,  1417,  1417, -2795,  1021, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
     443, -2795, -2795, -2795, -2795, -2795, -2795,  1220,  1246, -2795,
   -2795,  1391,  1392,  1397, -2795, -2795,    49,  1218, -2795,   676,
    1466,  1222,  5408, -2795,  1496, -2795, -2795,  1469, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795,  4786,  4786,  4786,  4786, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795,  1478, -2795, -2795, -2795, -2795,  1479,
    1482,   435, -2795, -2795,  1498,  1499,  1287,   676, -2795,  2707,
   -2795,  1523, -2795, -2795, -2795, -2795, -2795,   676, -2795,   435,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795,   960,  1438,  1439,  1441, -2795,  1530, -2795,   568,  1447,
      73,   486,  4622,   560,  1535, -2795,  1539, -2795,  1541, -2795,
     259, -2795,  1544,  1545, -2795,  1547, -2795, -2795, -2795,   676,
   -2795,  5408,  4621,  1910,   553,  1548,   453,  1442, -2795, -2795,
   -2795,    22,    60,  1552,  1556,   204,   676,   793,   816,    62,
    4786,   435,  1827,   735,    24,   389,   294,    12, -2795,  1532,
    1554,  1559, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795,   676, -2795, -2795, -2795, -2795,   676,   676,   676,
     676, -2795, -2795,   676,  1496,   676, -2795,   676,  1749,   676,
    1568,  1496, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
    1569,   616,   627, -2795, -2795, -2795,  1570, -2795, -2795, -2795,
   -2795,  1481, -2795,  1573,  1576,  1495,  1503,  1507,  1595, -2795,
    1597, -2795,  1600,  1516,  1603,   600,   712,   608,   707,   629,
     733,   636,  1607,   699, -2795, -2795,  1609,  1610,  1614, -2795,
   -2795,  1615, -2795, -2795, -2795, -2795,  1617, -2795, -2795,  1622,
   -2795, -2795,  1625, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
     676,   399,   676, -2795, -2795, -2795, -2795,   676,   676, -2795,
     676,  1028,   676,   676, -2795,  5408,  1565,  1616, -2795,  1061,
    1629, -2795,  1261,  1632, -2795, -2795,   431,   676,   676, -2795,
    1628, -2795, -2795,  1636,   927,   676,  1635,   843, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795,  1644,  1646,   676,   676,   676,   676,   676,  1647,
     676,  1650,   676,  1648,   435,  1655,  1656,  1496,  4786, -2795,
   -2795, -2795, -2795, -2795,  1496, -2795, -2795,   676,   676,   676,
    4786,   676,  1749,   676, -2795,   676, -2795, -2795, -2795, -2795,
   -2795,  1657,  1665, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795,   632, -2795,   676, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795,  4786,   676,  1496,
    1496,   431,   431,   431,  1496,  1749,   676,  1496, -2795, -2795,
   -2795,   676, -2795,   -51,  1480,  1668,  1670, -2795, -2795,  1496,
   -2795,  1505,  1510, -2795,  1675,  1679, -2795,  1682,  1233,  1659,
    1660, -2795,   676, -2795, -2795, -2795, -2795, -2795,  4271,   576,
     898, -2795, -2795, -2795,   676,   252,  1223, -2795,  1409, -2795,
    1827,  1424,   368,  1398,   121, -2795, -2795,   676, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795,  1374, -2795, -2795,
   -2795, -2795,   676,  1712, -2795, -2795, -2795, -2795,   431, -2795,
   -2795, -2795, -2795, -2795,  1715,  1736,  4859, -2795, -2795,  1737,
    1738,   676, -2795, -2795, -2795, -2795,  1739,  1742,  1745,   -17,
     -17,    -5,  1747,  1750,  1757,  1758,  1758,  1758,  1455,  1465,
    1766,  1767,  1769,    69,    69,    -5,  1772,  1773,    -5,  1782,
    1783,  1784,  1785,  1784,  1785,  4819,  1797,  1798, -2795, -2795,
    1784,  1785,   574, -2795,  1774,  1800,  1801,  1802,   -17,    -5,
    1805,  1806, -2795,  1809, -2795, -2795,  1496,  1316,  1731,  1553,
    1555,  1557,  1693,  1163,  1560,  1810,   246,  1666,  1706,   747,
     569,  1788,  1561,  1566,  1717,  1828,  1601,    20,   107,   -56,
    1572,  4786,  1827,  1808,   -68,  1580,  1604,  1847,    96, -2795,
   -2795,   240,  1850,  1851, -2795, -2795, -2795,  1852,  1624,   109,
    1827,  1626, -2795, -2795, -2795,   435,  1854,  1857,   676, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,    10, -2795,
     671, -2795, -2795, -2795,   676, -2795,   676, -2795, -2795, -2795,
   -2795,   676,   676,   676,   453,  4786, -2795,  1858,  1283, -2795,
   -2795,   676, -2795, -2795,   676,  4786,   676, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795,   435,   676, -2795,   676,   453,  1860,  1861, -2795,
   -2795, -2795, -2795,   676,   676, -2795,   435, -2795, -2795, -2795,
     191,  1863,  1864, -2795, -2795, -2795, -2795, -2795,   676,   676,
   -2795, -2795,  1749,   676,   676, -2795, -2795, -2795, -2795,  1866,
     676, -2795,   676,  1753, -2795,   676, -2795,   676,  1759, -2795,
    1871, -2795,  1318,  1318,   781,   789,   833,  1318,  1874, -2795,
     863, -2795,   895,   908,   943,   958, -2795,  1875,  1876,   971,
    1872, -2795,  1877,  1878,  1880, -2795,   973,  1015,  1881,  1920,
    1922, -2795, -2795,  1923,  1924,  1926, -2795,  1318,  1318,  1318,
     676, -2795, -2795, -2795, -2795,   676, -2795, -2795, -2795,   676,
   -2795,   676,   976,  4786, -2795,   676, -2795,  1496, -2795,  5408,
   -2795, -2795,  1927, -2795, -2795,  1929, -2795, -2795, -2795, -2795,
    1925,  3327, -2795,   676,  1933,   676,   676,   676,  1025, -2795,
    1931,   676,   676,  1934,   676,   676,  1935,   676,  1940,   676,
     101,  1942,   435,   435, -2795,  1496,   676,  1944,  1945,  1946,
    1496,  4786, -2795,   676, -2795, -2795, -2795,   676,   676,   676,
    1496,  4786,   431, -2795, -2795, -2795, -2795,  1749,   676,  1947,
     431,   676,   527, -2795,  1948, -2795, -2795,   687,  3900,   676,
   -2795,   676,  1952,  1885,   676, -2795, -2795, -2795,  1953,  1476,
    4657,  1696,  1697,  1698,    38,  4786,  1699, -2795,   329,  1815,
      39,  1702,  1704,   209, -2795, -2795,    35,  1786,   306,  -123,
    1827,   653, -2795,  1965,  1701, -2795,    88, -2795, -2795, -2795,
   -2795,  1827,  1744, -2795, -2795, -2795, -2795, -2795,   676, -2795,
     676, -2795, -2795,   676,   676, -2795,   676, -2795,   676, -2795,
   -2795, -2795, -2795,  1751,   676, -2795, -2795, -2795,   676,   242,
   -2795, -2795, -2795, -2795,  1967,  1973, -2795,   676,   -17,   -17,
     -17, -2795, -2795, -2795, -2795, -2795, -2795,  1976,   -17,   -17,
     -17,  1036, -2795, -2795, -2795, -2795,    69,   -17,   -17,   -17,
   -2795, -2795,   -17,   -17,  1977,   -17,   -17,  1978,    69,  1154,
   -2795,   856, -2795,  1206, -2795, -2795, -2795,  1979,  1980,  1981,
   -2795,  1196, -2795,  1219, -2795, -2795,  1690,  1986,  1988,  1990,
      69,    69,    -5,  1992,  1993,    -5,  1994,  2002,  2006,   -17,
     -17, -2795,  2008,   -17,   -17, -2795,  2010, -2795, -2795, -2795,
   -2795, -2795, -2795,   435, -2795, -2795, -2795,  4657,  1153,   676,
    1251,  1777,   575, -2795, -2795, -2795,   867, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,  2011,
     676, -2795,   435,  2012,   676,  4786,   435,  1789,  1734,  1755,
     218,   233,  1756,   239,  1671,  1680,  2017,  2019,  2021,  1163,
    2022,  2023,  2025,  1688,  1691,  1301,  2028,   676,  1513,  1794,
   -2795, -2795,   435,  4786, -2795, -2795,  4786,   676,    31,  2030,
     676,  1496,   435, -2795,  2031,  4786,  4786,   676, -2795, -2795,
   -2795,   435,   435,  4786, -2795, -2795, -2795, -2795, -2795, -2795,
    4786,   676,   435, -2795, -2795, -2795,   676, -2795, -2795,  2034,
     676,  1796,   169,   676,  1799,   676,   185,   676, -2795,   676,
    1807,  1811,   676,   676,   676,   676,   676,   676,   676,   676,
      23,   676,   676,  1813, -2795,   676,   676,   676,   676, -2795,
    4786,  1496,  2039,  2043,  2047,   676,   676,  1496, -2795,   676,
     676,   676,  4786,   453, -2795,   676,   676, -2795, -2795, -2795,
    2050, -2795, -2795, -2795, -2795, -2795, -2795,  2048,   676,   676,
   -2795,   676,   676, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795,  2051,  2053,  2060, -2795,  2061,  2063,  2065, -2795,
    2066,  2068,  2072, -2795, -2795,  1318,  2073,  2074,  2085, -2795,
    2086,  2087,  2090, -2795,  2091,  2092,  2094, -2795,  2095,  2097,
    2102, -2795,  2103,  2104,  2106, -2795,  2107,  2108,  2111,  2112,
    2109, -2795,  2114, -2795, -2795, -2795,  2115,  2118,  2120, -2795,
    2121,  2125,  2127, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795,   676, -2795,   676,   676, -2795, -2795,   676,
   -2795,  1496, -2795, -2795,  3327,   676,  1496,   676,   676,   676,
   -2795,   676,   676,  2129,   676, -2795,   676,   676,  2131,   676,
     676,  2141,   676,  2142,   676, -2795, -2795,  2156,  4786, -2795,
   -2795, -2795,   676, -2795, -2795, -2795, -2795,  1496, -2795,  1414,
     676,  1414,   431,  1496,  4786,   676,   676,  2158, -2795, -2795,
   -2795,   676, -2795, -2795, -2795, -2795, -2795,  4786, -2795,  4786,
     676, -2795, -2795,   -51,  2161,  2163,  2165,  2168,  2174,  4786,
    1496, -2795,  4786,  4786,  4786,  4657,  4786,  1496,  4786, -2795,
   -2795,  4786, -2795, -2795,  4657,  4786,  4786,  4786,  4657,  4786,
   -2795,  4786,  4786,   676, -2795, -2795,  4786,  4786,  4786, -2795,
   -2795,  4786,  4786, -2795, -2795, -2795, -2795,  4786,  4786, -2795,
   -2795, -2795, -2795, -2795,   676,   676, -2795, -2795,  2178,   676,
   -2795, -2795,  2179, -2795, -2795,   676, -2795, -2795, -2795,   -17,
   -2795, -2795, -2795,  2180,  2181,  2182, -2795, -2795,    -5,  2184,
    2185,  2187,   -17, -2795, -2795, -2795, -2795, -2795,    69, -2795,
   -2795,  2186,   -17,  2188,  2189,  2190,    69,    69,    -5,  2192,
    2196,  2198,  1735,  2199,  2200,  2201,    69,    69,    -5,  2197,
    2203,    -5,  2204,  2205,  2207,  2208,    69,    69,    -5,  2211,
    2212,  2213,  1221, -2795,  1309, -2795,  1426,  1765,  2216,  2217,
    2218,    69,    69,    -5,  2221,  2222,    -5,  2227,  1770,  2231,
    2239,  2242,    69,    69,    -5,  2224,  2246,    -5,  2247,    69,
   -2795, -2795, -2795, -2795, -2795,  2250, -2795, -2795,  2251,    69,
    2253,  2254, -2795, -2795,   -17, -2795, -2795,  2255, -2795,  1496,
   -2795,  4786,   676,   676,  4786,   676,  2257,  1731, -2795, -2795,
   -2795, -2795, -2795, -2795,  2258,  4786,   435,  2261,  4786,  1496,
   -2795,  2264,  1731,   676,   676,   676,   676,   676,   676,   676,
     676,   676,  2267,  2269, -2795, -2795, -2795,  2270, -2795, -2795,
   -2795,  2273,  2274, -2795, -2795, -2795,   676,  4786,   676,  2276,
    1731,   435,  1496,  1496, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795,   676,  1749, -2795, -2795,  1496,  1496,
     676, -2795, -2795,  1496,  1496, -2795, -2795, -2795, -2795,   676,
     676,   676,   676,   676,   676,   676,   676,   676,   676,  2633,
   -2795,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676,   676,  2195,  2277,   676, -2795,   676,   676,   676,  2279,
    2280, -2795, -2795,  1496,   431, -2795,  2281,  2282, -2795, -2795,
    1749,   676, -2795,  2284,  1496,  4786, -2795, -2795, -2795,  2285,
   -2795, -2795, -2795, -2795,  1318,  1318,  1318,  1318,  1318,  1318,
    1318,  1318,  1318, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795,  1731,   676, -2795,   676, -2795,   676,  1496,   676, -2795,
    1749,   676, -2795,   676, -2795,  2079,  2286,  2289,   676,   676,
   -2795,   676,   676,  2290,   676,  2292,   676,  2294,  1496,  4786,
   -2795, -2795,   676, -2795,   676, -2795,   431,   687,   676,  2295,
   -2795,   676, -2795, -2795,  4657, -2795,  2297,  2300,  2303,  2304,
    2305,  1496, -2795,   687,   687,   687,  1496, -2795,   687,   431,
     687,   687,  1496, -2795,   687,   687,   687,  1496, -2795,   687,
     687,  1496,  4786,   687,  1496,   687,   687,  1496,   687,  1496,
   -2795, -2795,  2309,  4657,  2310,   676, -2795, -2795, -2795, -2795,
    2312, -2795, -2795, -2795, -2795,   -17,    69, -2795, -2795, -2795,
   -2795, -2795, -2795,  2313, -2795, -2795,    69,    69, -2795, -2795,
   -2795, -2795, -2795,  2314, -2795, -2795,  2316,    69, -2795, -2795,
   -2795, -2795, -2795,  2317, -2795, -2795,    69,  2319,  2323,  2325,
      69,    69,    -5,  2327,  2329,  2333,  2334,  2335,  2336,    69,
      69,    -5,  2330,  2338,  2342,  2343,  2346,  2349,    69,    69,
      -5,  2339,  2351,  2352,    69,   -17,   -17,   -17,   -17,   -17,
    2356,   -17,   -17,  2357,    69,    69,   -17,   -17,   -17,   -17,
     -17,  2358,   -17,   -17,  2359,    69, -2795,    69,  2360, -2795,
    2361,  2364, -2795,  5408, -2795,   687,  2365,  4786,   687,   676,
    4786,  2366, -2795,   687, -2795, -2795,   687, -2795,  4786,  2367,
     676,   676,   676,   676,   676,   676,   676,   676,   676,   676,
     676, -2795, -2795, -2795,  4786,   687,   676,  4786,  2368, -2795,
    1749,  1749,  4786,  1749,  1749,  4786,  4786,  1749,  1749,   676,
     676,   676,   676,   676,   676,  1731,   676,   676,   676,  1709,
    1713,  1721,  1733,  1822,  1888,  1899,  2633, -2795,  1904, -2795,
   -2795,  1731,   676,   676,   676,   676,  1731,   676,   676,   676,
     676,   676,   676,  1496,   676,  1787,  1731,   676,   676, -2795,
   -2795,   431,   435,  4786,  4786, -2795, -2795, -2795,   431,  1496,
    2369, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795,   676, -2795, -2795,  1749,   676, -2795, -2795, -2795,  1092,
    2370,  2372,  2374,  2375,   676,   676,  2376,   676, -2795,  2377,
    1414, -2795,   687, -2795, -2795, -2795, -2795,  2378, -2795, -2795,
    1496,  2380,  2383,  2381,  2384,  4786,  2387, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795,   431,   687, -2795,   431, -2795, -2795,   431,
   -2795,   431,  2388,  1496,  2396, -2795,   676, -2795, -2795,   -17,
      69, -2795, -2795,    69,  2398, -2795,    69, -2795,   -17,   -17,
     -17,   -17,   -17,  2399,   -17,   -17,    69,   -17,   -17,   -17,
     -17,   -17,  2400,   -17,   -17,    69,   -17,   -17,   -17,   -17,
     -17,  2401,   -17,   -17,    69,   -17, -2795, -2795, -2795, -2795,
   -2795,    69, -2795, -2795,  2402,   -17,   -17, -2795, -2795, -2795,
   -2795, -2795,    69, -2795, -2795,  2403,   -17, -2795,    69, -2795,
   -2795,  1496, -2795,  4786,   687, -2795,  2404,  1496,   676, -2795,
   -2795,  1496,   676, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795,   676,   676,   687, -2795,  2405,  1496,   676,  1749,
   -2795,   687,   676,  1749,   687,   687,  4786, -2795,   676,  2406,
    2406,   676,   676,  2406,  1731,  2406, -2795,  4786,  1163,  2407,
    2409,  2410,  2412,  2413,  2415, -2795,   435,  1731,  2406,  2406,
     676,   676,  1731,   676,   676,   676,   676,   676, -2795,  1749,
     676,  2416, -2795, -2795,   676,  2406,   435,     7,  1496,  1496,
     435,   431,  2418, -2795, -2795, -2795,  2419,   676, -2795,  2420,
    2436,  2440,  2441,  2442, -2795,  2445,  2448,   676, -2795, -2795,
    2449,     5,  4786, -2795,  2457,    56,  4786, -2795, -2795, -2795,
   -2795, -2795, -2795,  2462,     5,   676, -2795, -2795, -2795,    69,
   -2795, -2795, -2795, -2795, -2795, -2795,    69, -2795, -2795,   -17,
   -2795, -2795, -2795, -2795, -2795,    69, -2795, -2795,   -17, -2795,
   -2795, -2795, -2795, -2795,    69, -2795, -2795,   -17, -2795,   -17,
      69, -2795, -2795,   -17,    69, -2795, -2795,   676,   687, -2795,
    4786,  4786,   676,  4786,   676, -2795, -2795, -2795,  4786,  4786,
     676, -2795, -2795,  4786, -2795, -2795, -2795,   687,  2463, -2795,
   -2795, -2795,  1731,   676, -2795,  2464, -2795, -2795,  1496,  2465,
   -2795,  2467, -2795, -2795, -2795, -2795, -2795,  2468, -2795, -2795,
    1731,   676,  2469, -2795, -2795,   676,  4786, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795,     7,  1761,  1827, -2795, -2795, -2795,
     435,  2470,  2471,  2473, -2795, -2795, -2795,  2479,  2486,  2488,
   -2795,    74,     5, -2795, -2795, -2795, -2795,  2489,  4786, -2795,
   -2795, -2795, -2795, -2795,     5, -2795,  2492, -2795,   -17, -2795,
     -17, -2795,   -17, -2795, -2795,   -17, -2795,   -17,  5408, -2795,
     687,   687,   676,   687,  2493,   687,   687,   676,   687,   676,
   -2795, -2795, -2795, -2795,  2494, -2795,   676, -2795, -2795,  2495,
   -2795,   676, -2795, -2795, -2795,  2497,   676, -2795, -2795, -2795,
    1496, -2795, -2795, -2795,  1761, -2795,  1867,  1913,  1827, -2795,
   -2795, -2795,  2498,  2500, -2795, -2795, -2795, -2795, -2795, -2795,
     698,   698, -2795, -2795,  1496, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795,   687, -2795, -2795,  2502, -2795,  4657, -2795, -2795,
    2503, -2795,  1731, -2795, -2795,  1731,   676, -2795, -2795,   676,
   -2795,  1731,   676, -2795,  4786, -2795,  1867, -2795,   435, -2795,
    2504,  2505,   676,   676,   676,   676,    56,  2506,  4657,  1496,
   -2795,  4657, -2795, -2795,   676,  2508, -2795,   676,   687, -2795,
   -2795, -2795,  2509,  2510,   676,  2511,   676, -2795, -2795,  1496,
   -2795, -2795,  1496, -2795, -2795,  2513, -2795, -2795,  2515,  2518,
   -2795, -2795,  2520, -2795,  2522, -2795, -2795,  1731, -2795,  1731,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2795, -2795,    -3, -2795,   366, -1018, -1987, -1127,  1839, -2795,
     850,  -449,  1724,   -54,    19, -2795,  -300, -1857,  1932,  1210,
    -989,   341, -1007,  1542,   807, -2795, -1037, -2795,  -632, -1154,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795,  -499,  -522, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -1695, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795,  -395, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795,   215, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795,  -216,  -181, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -1637, -2795, -2795, -2795, -2795, -2795,
    -774, -2795, -2795, -2795, -2795, -2795, -2795,   542, -2795, -2795,
   -2795, -2795,   -65,  -773, -1387,  -450, -2795, -2795, -2795, -2795,
   -2795,  -528,  -521, -2795, -2795, -2794, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795,  1618, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795, -2795,
   -2795
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1374
static const yytype_int16 yytable[] =
{
      72,   393,  2097,  1235,  1238,  1432,  1024, -1155,   112,  1262,
     995,   793,  2262,   181,  2264,  1688,   685,  1279,  1030,   909,
      69,    70,  1424,  1425,  1426,   795,    69,    70,  2162,  1266,
     679,  1597,   752,   413,   331,    69,    70,  2883,  1221,   974,
     363,   731,   355,    69,    70,    69,    70,  1652,   458,   977,
     114,   387,   912,   254,   398,   258,   333,   404,  2115,  1905,
    1914,   410,  1920,  1926,   417,    69,    70,  1076,   420,   422,
      69,    70,   432,  1664,   690,   439,   443,    69,    70,   446,
     885,  2116,   447,   448,  2117,  1540,   456,   905,  2889,   114,
     168,   457,   364,   169,  1039,  2118,   984,   661,  1240,  1509,
    1224,  1670,  1241,   365,   470,   474,   479,   480,   484,   486,
      69,    70,    69,    70,   114,  1936,  1280,    60,  1544,    59,
    2119,  1547,   586,   695,  1281,   490,   170,  1927,   890,    69,
      70,    69,    70,   114,   171,   349,   366,  1502,  2120,   592,
     489,   435,  1582,  1654,   662,  1678,    69,    70,  1855,   440,
      69,    70,  2997,   252,    81,  1521,  1000,  1031,   985,  1761,
     499,    61,   538,  1774,  1131,    69,    70,   230,    69,    70,
     165,   539,    69,    70,   119,  1525,   270,   686,  1225,   467,
    1242,    62,  1665,  1025,   231,   531,   436,  1522,    69,    70,
     552,   680,   293,  1820,  1821,  1822,  1738,   876,   183,  1928,
     172,   886,  3019,   732,   733,   468,  1243,  1739,   981,   319,
    2884,    63,   553,   119,   561,  1045,   566,   570,  1046,  1047,
    1230,  1921,  1040,   587,  1503,   428,  1001,   606,   114,   295,
    1918,   114,   335,    64,  1658,   114,   401,    65,   119,  2085,
     596,   796,  1659,  1541,   649,  1132,  1666,   353,   696,   797,
     798,  1655,    66,  1679,  2087,    69,    70,   119,   441,   173,
    2090,  2890,  1950,    69,    70,   697,   663,  1672,   114,   631,
    1653,   122,  1146,  1622,  1937,  1226,  1077,  1244,   887,   729,
     123,   124,  2957,   821,   691,  1922,   799,  1495,   174,  1526,
     175,   687,   296,   303,   114,   459,   759,   760,   114,   416,
     107,   635,  1906,  1915,   255,   681,   259,   982,   734,  1222,
     122,  1267,   802,   414,   804,   367,   297,  2885,   176,   123,
     124,   108,  1147, -1155,   807,   810,   753,   813,   817,   256,
     819,   260,   879,   910,   906,   122,   524,   891,  1938,  1032,
     829,  1268,   525,   442,   123,   124,  1282,  1026,  1689,   815,
     839,   841,   119,   429,   122,   119,  1909,   354,   882,   119,
    1078,  2163,   682,   123,   124,    71,   913,   386,  2891,  1295,
    1671,    69,    70,   889,   127,   298,   896,   898,   109,   900,
     167,   179,   438,   903,   904,   526,   350,  1245,   253,   423,
     593,   177,   119,   897,   918,   920,   301,   430,   431,  1102,
     800,   921,  1856,   114,   338,  1270,   924,   926,   907,  1662,
    2958,   351,   527,   127,   927,   594,  2121,   928,   119,  2141,
     321,   892,   119,   651,   157,   402,   636,  1682,  1623,   158,
     159,    67,  1656,  1874,  1680,  2146,   938,   939,   127,   114,
    1231,  1878,   434,   943,   944,   945,   946,   947,   948,   122,
     950,   397,   122,   952,   529,  2959,   122,   127,   123,   124,
    1720,   123,   124,   157,   528,   123,   124,   959,   158,   159,
    1148,   960,   409,  1919,  2067,   110,   965,   966,   967,   968,
     969,   970,  2086,   971,  1489,   474,   975,   976,   157,   122,
    1673,   597,  1732,   158,   159,   474,   978,  2088,   123,   124,
    2082,   117,  1951,  2091,   866,   831,   973,   157,   529,   530,
    1624,  1910,   158,   159,   872,   122,   598,  1020,  1211,   122,
     632,  1271,  2110,  1412,   123,   124,   382,   119,   123,   124,
    1232,  1880,   988,  1376,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   637,   633,   347,   609,   345,  1007,
    1008,  1149,   127,    69,    70,   127,   738,  1204,   299,   127,
    1625,   336,  1150,   119,  1212,  2045,  1428,  1016,  2048,   610,
     867,   117,   337,  1119,  1272,   370,   638,  1133,   640,  1566,
     111,  1120,  1121,  1205,   348,   117,   611,  1567,  1568,   641,
     395,  1636,   127,  1911,   873,  1021,  1924,  1151,  1087,   424,
    1497,   400,   157,  1042,  1925,   157,   300,   158,   159,   157,
     158,   159,  1276,   929,   158,   159,   180,   271,   127,   642,
    1637,  2203,   127,  1638,   122,  1273,  1639,   652,    69,    70,
     832,  1122,   746,   123,   124,    69,    70,  1569,    69,    70,
     406,   989,   157,  1912,  1478,   449,  1082,   158,   159,  1067,
     730,  1140,   747,   407,   425,  1640,  1300,   383,  1134,   272,
     122,   426,   273,   757,   758,    69,    70,  1305,   157,   123,
     124,   852,   157,   158,   159,   822,   739,   158,   159,    69,
      70,   274,   930,  2747,   125,   612,  1641,  2068,  1137,  1642,
     117,  1322,  1332,  1690,  1101,   812,   403,  1929,  1691,  1338,
     275,    69,    70,   643,  1104,   408,   874,  1156,  1939,   305,
    1355,  1883,  1884,   823,  1213,  1274,  1479,   276,   740,   741,
    1377,  1692,  1693,   277,  1694,  1695,   990,   127,   340,  1206,
    1214,  1215,  1141,   412,  1301,  1696,   445,   854,   877,   880,
     883,   455,   748,   893,   868,  1306,  1480,   461,   644,  1697,
    1698,   463,   384,   616,   125,   992,  1155,  1699,  1333,   419,
    1700,   931,  1343,   127,   742,  1339,   114,   487,   125,  1628,
    1327,   824,  1323,  1233,   278,  1263,  1246,   157,  1701,  1123,
    1124,   115,   158,   159,   604,  1570,  1571,  1702,  1703,  1885,
    1207,  1704,   306,  2069,  1930,   465,   917,   279,  1629,  1286,
     993,  1630,   116,  1324,  1287,  1288,  1289,  1290,   450,   451,
    1291,   511,  1293,   157,  1294,   474,  1296,  1208,   158,   159,
     117,  1643,   645,   743,  1336,   613,    69,    70,  1344,  1216,
    1217,  1302,   646,  1631,   925,  1481,  1328,   117,   500,  1931,
     614,   341,  1307,  1744,  1762,  2923,   605,  1387,   992,  2070,
     744,  1367,  1766,  1264,  1388,  1644,   512,   452,  1211,   932,
    1125,  1992,  1705,  2934,  1632,   933,  1572,  1633,   118,  1993,
    1994,  1126,  1127,   125,   534,  2275,  1128,  1573,  1574,  1329,
     647,  1211,  1575,  2265,  1325,  1645,   522,  1354,   563,  1358,
     119,   825,  1482,   993,  1359,  1360,  1770,  1361,  1363,  1365,
    1366,   307,   536,  1932,  1212,  1337,  1129,   589,   280,  1303,
    1763,   862,  1576,   453,  1379,  1380,   308,  1555,  1767,  1995,
    1308,  1384,  1385,  1706,  1564,   342,  1776,  1212,  1483,  1707,
      69,    70,  1334,   590,   120,   343,   281,   282,  1383,  1340,
    2421,  1391,  1392,  1393,  1394,  1395,  1708,  1397,   283,  1399,
    1265,  1237,   284,  1556,   591,  2429,   608,  1709,  1780,  2185,
    1565,  2320,  1771,   625,  1407,  1408,  1409,  1933,  1411,   474,
    1413,  1784,  1414,  1106,  1107,   627, -1373,   121,  1875,  2071,
    1827,  2333,   628,  2448,   954,   955,   309,   122,  1710,  1711,
     630,  2343,  1777,  1417,  2346,  1419,   123,   124,  3013,  1634,
     656,  2353,  1345,   125,  3016,  1421,  1788,   650,   126,   657,
    1330,  1712,   474,  1429,    91,  1418,  2390,   678,  1431,  2393,
     125,  1792,   659,  1108,  1781,  1048,  1049,  2401,    69,    70,
    2404,    69,  1362,  1635,  1798,  1444,  1806,  1785,   322,  1448,
    2511,  2512,  2513,  2514,  2515,  2516,  2517,  2518,  2519,  1963,
    1964,  1488,  1490,  1493,  1213,   693,  1713,  1097,   684,  1498,
    3053,  2839,  3054,   600,  1504,  1370,  1371,  1996,  1997,  2895,
    1214,  1215,  1789,   689,  1484,  1105,   694,  1213,  1810,  1507,
    1234,  1559,   665,  1050,  1764,  2072,  1843,  1793,   698,  1051,
     127,   727,  1768,  1214,  1215,    69,    70,   728,  1517,  1965,
    1799,   736,  1807,   750,  2520,   755,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,  1485,  1772,   756,   101,   761,
     157,  2073,  1052,   371,  1811,   158,   159,  1249,  1998,    92,
     794,   601,  1277,  2736,   372,   102,    69,    70,  2061,  1999,
    2000,  1053,  1486,   666,  2001,   806,  1778,  1983,  1984,  1216,
    1217,  1109,  1110,    74,   820,  1657,  1054,   827,    93,    75,
     828,   262,    94,  1055,   373,  2502,   311,  2962,   602,   323,
     830,  1056,  1216,  1217,  2002,   324,  1681,   325,  1782,  2965,
     834,  2017,   836,  1602,   842,  1687,   312,   667,   313,  2018,
    2019,  1786,   263,   870,    69,    70,   850,  1985,   871,  2003,
    2004,  1715,    76,  1716,  2028,   901,    69,    70,  1717,  1718,
    1719,  1603,  2029,  2030,  2357,  2358,    69,  1443,  1725,  1492,
      95,  1726,   895,  1728,   843,   103,  1790,  1966,  1967,    77,
     668,   808,  1111,  1057,    69,    70,  2064,  1356,   286,  2020,
    1730,  1794,  1731,  1112,  1113,  1373,  1374,  1604,   374,  2005,
    1735,  1736,   902,  1058,  1800,  1605,  1808,  2545,  1059,   915,
    1060,  1606,  2031,    96,  2359,  1742,  1743,  1723,  1724,   474,
    1745,  1746,    97,    98,   104,   264,   922,  1748,  1114,  1749,
    2563,    78,  1751,  1607,  1752,  2103,  2104,  1061,  1062,  2837,
     844,   699,   265,   375,   700,  1831,  1063,   923,  1812,   936,
    1401,   940,  2366,  2367,   937,  1608,   962,   963,  1968,   809,
     105,  1533,  1534,   701,   941,  2861,   942,  1064,  2694,  1969,
    1970,   956,   314,  1609,   949,   951,    79,  1823,   845,   846,
     953,   287,  1824,   958,  2707,  2603,  1825,   471,  1826,  2712,
    1755,  1756,  1829,   357,  2612,  1986,  1987,   288,   473,   702,
     979,   980,  2368,  2621,  1971,   703,   987,   266,  1835,   996,
    1838,  1610,  1840,  1841,  1842,  1844,   998,   376,  1846,  1847,
    1003,  1849,  1850,  1018,  1852,  1065,  1854,   377,  1023,  1005,
    1837,  1028,  1587,  1862,  1034,   315,   289,  2021,  2022,  1035,
    1868,  1037,    82,   617,  1869,  1870,  1871,  2006,  2007,   378,
    1038,  1043,  1611,   267,   474,  1876,   704,   379,  1879,  1068,
    2032,  2033,  2360,  2361,   268,   618,  1889,  1612,  1890,  2375,
    2376,  1892,    91,  2921,  2922,   380,  1988,  2925,    83,  2927,
    1613,  1881,   619,   847,   316,  1069,   358,  1989,  1990,  1070,
    1072,  2932,  2933,   290,   317,  1074,  2937,  2938,  1080,  1901,
    2941,  1083,   359,  1085,  1089,  2942,  2943,   291,    69,    70,
    1588,  1614,  1094,  1095,   848,  1941,  1096,  1942,  2023,  2377,
    1943,  1944,  1991,  1945,  1615,  1946,  1616,  1617,  2008,  2024,
    2025,  1948,  1098,  1099,  2026,  1949,  1100,  1757,  1758,  2009,
    2010,  2034,  2726,  2362,  1955,   837,    69,    70,  2107,  2730,
    2369,  2370,  2035,  2036,  2363,  2364,    84,  2037,  1103,  1115,
    1116,   491,  1117,  2983,  2027,  1118,  2984,  1618,  1130,  1759,
    1142,  2987,   818,  1144,  2011,  1145,  1219,  2990,  1283,  1152,
    1153,  1154,  2993,  1210,    69,    70,  1228,  2038,   389,  2365,
     705,  1229,  1894,  1285,  1589,  1590,   390,  2835,   360,   620,
    1284,  1684,  1297,  1299,  1310,    85,    86,    92,  1312,  1591,
    2847,  1313,   361,  1311,  2757,  2852,  1314,  2759,   706,   707,
    2760,   481,  2761,   838,  1315,  2062,  2063,  2065,  1316,  1317,
     708,  2371,  1318,   916,   709,  1319,    93,  1320,  1321,   492,
    2261,  1342,  2372,  2373,  1347,  1348,  2060,  2075,  1349,  1350,
    1369,  2078,  1351,    87,    88,  1592,  3034,  1352,  1729,  3037,
    1353,  1368,   621,  1372,   493,   494,  1375,  2378,  2379,  1381,
    1895,  1382,  1737,   495,  2106,  2108,  1386,  2374,  1389,  3048,
    1390,  1396,  1400,  2831,  2114,  1398,  2834,  2124,  2836,  1402,
    1403,  1434,  1415,  3055,  2130,   496,  3056,  3057,    95,   482,
    1416,  2848,  2849,  1435,  1436,   497,  2453,  1438,  2135,  1440,
      89,   622,  1439,  2137,  1441,  1505,  1442,  2139,  2863,  2142,
    2143,   623,  2145,  2147,  2148,  1494,  2151,  1446,  1447,  2154,
    2155,  2156,  2157,  2158,  2159,  2160,  2161,  2164,  2166,  2167,
    1496,    96,  2169,  2170,  2171,  2172,  1500,  1508,  2380,  1510,
      97,    98,  2178,  2179,  1896,  1897,  2181,  2182,  2183,  2381,
    2382,  2505,  2186,  2187,    69,    70,   513,  1594,  1595,  1898,
    1511,  1514,  2870,  1515,  1518,  2190,  2191,  1519,  2192,  2193,
    1520,  1528,    69,    70,  1529,  1535,   514,   471,   472,   473,
    1006,   332,  1530,  1531,  2383,  1536,   483,  1011,  1859,  1860,
    1012,  1537,  1538,   515,  1539,  1013,  1545,  1546,  1577,  1015,
      69,    70,  2066,  1594,  1595,  1899,   516,  1548,  1549,  1551,
    1553,  2526,    69,    70,  2081,  1594,  1595,    69,    70,  2109,
    1594,  1595,  1561,  1563,  1578,  1601,  1579,  1580,   517,  1583,
     391,  1584,   518,   392,  1585,  1621,  1626,  1598,  1627,  1599,
    2231,  1600,  2232,  2233,  1620,  1647,  2234,   519,  1646,  1649,
    1648,  2236,  2239,  1650,  2241,  2242,  2243,  1651,  2244,  2245,
    1668,  2247,  1660,  2248,  2249,   488,  2251,  2252,  1663,  2254,
    1667,  2256,  1669,  2238,  1674,  3012,  1675,  1676,  1685,  2259,
    1677,  1686,  1683,  1722,  1088,  1733,  1734,  2263,  1740,  1741,
    1747,  1750,  2268,  2269,   520,  1754,  1802,  1753,  2271,  1775,
    1796,  1797,  1803,  1804,  1805,  -489,  1814,  2274,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   550,  1524,   557,   560,
    2302,   565,   569,  1250,  2287,  1815,  1816,   572,  1817,  1818,
    1819,  1251,  1832,  2293,  1833,  1845,  1834,  2298,  1848,  1252,
    1851,  2310,  2311,   573,  1839,  1853,  2313,  1858,  1863,  1864,
    1865,  1877,  2315,  1882,   654,  1581,  1891,  1253,  1893,  2058,
    1902,  1903,  1904,  1908,  1254,  1913,  1916,   574,  1917,  1934,
    1947,  1953,  1923,   670,   676,  1935,  1940,  1954,  1193,   683,
    1959,  1978,  1981,   688,  2012,  2014,  2016,   575,  2076,  1255,
    2039,  2040,  2080,  2041,  1194,  2042,  2046,  2047,  2083,  2049,
    1256,  2679,  2680,  1195,  2682,  2683,  2050,   576,  2686,  2687,
    2051,   577,  2054,  2092,  1196,  2057,  2074,  2077,  2111,  2084,
    2089,  2094,  2093,  2095,  1292,  2096,  2098,  2099,  2126,  2100,
    2101,  1298,  2105,  2102,  2123,  2337,  2127,  2131,  2132,  2138,
     803,   578,   579,   805,  2175,  1257,  2140,  2176,  2136,  2144,
    1197,  2177,  2189,  1258,   814,  2188,  2194,  2152,  2195,  2416,
    2417,  2153,  2419,  2168,  2196,  2384,  2197,   852,  2198,  2199,
    2395,  2200,  1198,  2201,   835,  2734,  2202, -1173,  2204,  2205,
    2430,  2431,  2432,  2433,  2434,  2435,  2436,  2437,  2438,  2206,
    2529,  2207,  2208,  2947,  2209,  2698,  2210,  2211,  2212,  2699,
    2213,  1259,  2214,  2444,   580,  2446,  2215,  2700,  2216,  2217,
    2218,  2219,  2220,  2223,  1260,   581,  2221,  2222,  2224,  2701,
    2225,  2452,   474,  2226,  2227,  2721,  2228,  2456,  1199,   853,
    2229,  2230,  1261,   854,  2246,  2250,  2459,  2460,  2461,  2462,
    2463,  2464,  2465,  2466,  2467,  2468,  2253,  2255,  2481,  2482,
    2483,  2484,  2485,  2486,  2487,  2488,  2489,  2490,  2491,  2492,
    2257,  2495,  2270,  2496,  2497,  2498,  2276,  1404,  2277,  1200,
    2278,   855,   856,  2279,  1406,  2947,   857,   474,  2506,  2280,
     582,   583,  2312,  2473,  2314,  2317,  2318,  2319,  2321,  2322,
    2326,   957,  2323,  2328,  2329,  2330,  2334,  1201,    69,    70,
    2335,  2344,   964,  2336,  2338,  2339,  2340,  2345,  2702,  2347,
    2348,   972,  2349,  2350,   115,  2354,  2355,   858,  2356,  1422,
    1423,  2385,  2386,  2387,  1427,  2391,  2392,  1430,  2402,  2521,
    2821,  2522,  2394,  2523,  2824,  2525,  2396,   474,  2527,  1437,
    2528,  1202,   233,  1203,  2397,  2532,  2533,  2398,  2534,  2535,
    2403,  2537,  2405,  2539,  2407,  2408,   584,  2410,  2411,  2543,
    2413,  2544,  2420,  2422,   234,  2547,  2425,   235,  2549,  2428,
    2858,  2439,   859,  2440,  2703,  2441,   860,  2442,  2443,  1009,
    1010,  2447,  2494,  2499,  2500,  2704,  2503,  2504,  2507,  2510,
    2706,  2530,  1014,  2551,  2531,  2536,  2538,  1017,  2540,  2998,
    2548,   118,  2552,   861,   236,  2553,  1029,   862,  2554,  2555,
    2556,   237,  2586,  2582,   961,  2585,  2587,  2590,  2593,   863,
    2594,  2596,   238,   239,  2598,  1956,  1957,  1958,  2599,   240,
    2600,  2604,  2584,  2605,  2613,  1960,  1961,  1962,  2606,  2607,
    2608,  2609,  2614,  2622,  1973,  1974,  1975,  2615,  2616,  1976,
    1977,  2617,  1979,  1980,  2618,  2623,   935,  2624,   241,  2651,
    2631,  2634,  2642,  2645,  2648,  2649,  1586,   120,  2650,  2653,
    2658,  2662,  2678,  2732,  3027,  2738,   242,  2739,  2740,  2741,
    2744,  2746,  2961,  2749,  2751,  2753,  2052,  2053,  2752,  2754,
    2055,  2056,  2756,  2762,   243,   244,  1090,  1091,  1092,  1093,
    2764,   245,  2769,  2776,  2785,  2794,  2800,  2804,  2810,  2818,
    2829,  2705,  2840,  2841,  2944,  2842,  2656,  2843,  2844,  2845,
    2999,  2860,  2871,  2995,  2872,  2874,   246,  2663,  2664,  2665,
    2666,  2667,  2668,  2669,  2670,  2671,  2672,  2673,  3003,  3005,
    2875,   126,  2424,  2676,  2876,  2877,  2878,   474,   474,  2879,
     474,   474,  2880,  2882,   474,   474,  2688,  2689,  2690,  2691,
    2692,  2693,  2888,  2695,  2696,  2697,  2894,  2920,  2926,   247,
    2929,  2930,  2931,  2936,  2951,  1326,  2952,  2449,  2953,  2708,
    2709,  2710,  2711,  2954,  2713,  2714,  2715,  2716,  2717,  2718,
    2955,  2720,  2956,  2963,  2724,  2725,  2966,  2977,  2985,     0,
    2988,  2991,     0,  3000,  1248,  3001,  3008,  3011,     0,  3021,
    3022,  3028,  3036,     0,  3040,  3041,  3043,  3047,  2733,  3049,
       0,   474,  2735,  3050,   248,  3051,  2737,  3052,     0,     0,
       0,  2742,  2743,     0,  2745,     0,     0,   249,     0,     0,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   250,     0,
       0,     0,     0,     0,     0,     0,     0,  1830,     0,     0,
       0,     0,     0,  2765,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2546,     0,
       0,     0,     0,     0,     0,  1861,     0,     0,     0,     0,
    1866,     0,     0,     0,  2558,  2559,  2560,     0,     0,  2562,
    1872,  2564,  2565,     0,     0,  2567,  2568,  2569,     0,     0,
    2571,  2572,     0,     0,  2575,     0,  2577,  2578,     0,  2580,
       0,     0,     0,     0,     0,  2812,     0,     0,     0,  2814,
       0,     0,     0,     0,     0,     0,  1543,     0,     0,  2815,
    2816,     0,     0,     0,     0,  2820,   474,     0,     0,  2823,
     474,     0,  1405,     0,     0,  2828,     0,     0,  2832,  2833,
    2469,     0,     0,     0,  1410,     0,     0,     0,     0,     0,
       0,  2470,     0,     0,     0,     0,     0,  2850,  2851,     0,
    2853,  2854,  2855,  2856,  2857,     0,   474,  2859,     0,     0,
       0,  2862,     0,     0,     0,     0,     0,     0,     0,  1250,
    2471,  1420,     0,     0,  2873,     0,     0,  1251,     0,     0,
       0,     0,     0,     0,  2881,  1252,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2652,     0,     0,  2655,
       0,     0,  2896,  1253,  2659,     0,  2316,  2660,     0,     0,
    1254,     0,     0,  2472,     0,   710,   711,   712,     0,  2324,
       0,     0,     0,     0,     0,     0,  2675,     0,     0,  2327,
       0,     0,     0,     0,     0,  1255,     0,     0,     0,     0,
       0,     0,   713,     0,  2908,     0,  1256,     0,     0,  2912,
       0,  2914,     0,     0,     0,   714,     0,  2917,     0,     0,
    1513,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2924,   715,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2935,     0,
       0,  1257,  2939,     0,  2972,     0,     0,     0,     0,  1258,
       0,  2412,     0,   716,     0,     0,     0,     0,  2727,     0,
       0,  2125,     0,   717,     0,     0,     0,     0,  2960,     0,
       0,     0,     0,  2748,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   718,     0,     0,     0,     0,
       0,     0,     0,     0,   719,  1661,     0,  1259,     0,  2975,
       0,     0,     0,     0,  2980,  2758,  2982,     0,     0,     0,
    1260,     0,     0,  2986,   720,     0,     0,     0,  2989,     0,
       0,  2174,     0,  2992,     0,     0,     0,  2180,  1261,     0,
       0,     0,     0,     0,     0,     0,   721,     0,     0,  2473,
       0,  2474,     0,     0,     0,     0,     0,  3002,  3004,  1721,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1727,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3014,     0,     0,  3015,   722,     0,  3017,
       0,     0,   723,     0,     0,  2809,  3010,     0,     0,  3023,
    3024,  3025,  3026,     0,     0,     0,     0,  2475,     0,   724,
       0,  3035,   725,     0,  3038,  2817,     0,     0,     0,     0,
       0,  3042,  2822,  3044,     0,  2825,  2826,  3030,     0,     0,
    3033,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2235,     0,     0,     0,     0,  2240,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2846,     0,     0,     0,     0,  2260,  1972,     0,
       0,     0,     0,  2266,     0,     0,     0,  1828,     0,     0,
    1982,     0,  2864,     0,     0,     0,  2869,     0,     0,     0,
       0,     0,     0,     0,     0,  1836,     0,     0,     0,     0,
    2282,     0,  2043,  2044,     0,     0,     0,  2289,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2588,     0,     0,  1867,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1873,     0,     0,     0,  2909,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1888,     0,     0,     0,     0,     0,  2919,     0,
       0,     0,     0,     0,  1900,     0,     0,     0,     0,  1907,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2626,  2627,  2628,  2629,  2630,     0,  2632,  2633,
       0,     0,     0,  2637,  2638,  2639,  2640,  2641,     0,  2643,
    2644,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2950,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2973,  2974,     0,  2976,     0,  2978,  2979,     0,  2981,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2414,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2427,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3007,     0,     0,     0,     0,     0,     0,
       0,  2059,  2450,  2451,     0,     0,     0,     0,     0,     0,
      69,    70,     0,     0,     0,     0,     0,     0,  2454,  2455,
       0,     0,     0,  2457,  2458,     0,   115,     0,     0,  2079,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  3039,
       0,     0,     0,     0,  3020,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2112,     0,     0,
    2113,     0,     0,  2501,     0,   117,     0,     0,     0,  2128,
    2129,     0,     0,     0,  2508,     0,  2766,  2133,     0,     0,
       0,     0,     0,     0,  2134,  2771,  2772,  2773,  2774,  2775,
       0,  2777,  2778,     0,  2780,  2781,  2782,  2783,  2784,     0,
    2786,  2787,     0,  2789,  2790,  2791,  2792,  2793,     0,  2795,
    2796,     0,  2798,   118,     0,     0,     0,     0,     0,     0,
       0,     0,  2801,  2802,  2173,     0,     0,  2524,     0,     0,
       0,     0,     0,  2805,     0,     0,  2184,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2541,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2557,     0,     0,     0,     0,  2561,     0,     0,   120,
       0,     0,  2566,     0,     0,     0,     0,  2570,     0,     0,
       0,  2573,     0,     0,  2576,     0,     0,  2579,     0,  2581,
    2325,     0,     0,     0,     0,     0,     0,     0,  2331,  2332,
       0,     0,     0,     0,     0,     0,     0,     0,  2341,  2342,
       0,     0,     0,     0,     0,     0,     0,     0,  2351,  2352,
       0,     0,     0,     0,     0,     0,     0,     0,  2237,     0,
       0,     0,     0,  2388,  2389,     0,     0,     0,   125,     0,
       0,     0,     0,   126,  2399,  2400,     0,     0,     0,     0,
       0,  2406,  2258,     0,     0,     0,  2899,     0,     0,     0,
       0,  2409,     0,     0,     0,  2901,     0,     0,  2267,     0,
       0,     0,     0,     0,  2903,     0,  2904,     0,     0,     0,
    2906,  2272,     0,  2273,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2281,     0,     0,  2283,  2284,  2285,  2286,
    2288,     0,  2290,     0,     0,  2291,     0,     0,  2292,  2294,
    2295,  2296,  2297,  2299,     0,  2300,  2301,     0,     0,     0,
    2303,  2304,  2305,     0,     0,  2306,  2307,     0,     0,     0,
       0,  2308,  2309,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,   762,   763,  2719,     0,  2967,     0,  2968,     0,  2969,
       0,     0,  2970,     0,  2971,     0,     0,     0,     0,  2731,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    69,    70,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   115,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   764,
    2750,     0,   568,     0,     0,   765,     0,   327,     0,     0,
       0,     0,     0,     0,   766,     0,   767,   115,     0,     0,
       0,   768,     0,     0,   769,  2415,   117,     0,  2418,     0,
     770,     0,     0,  2763,     0,     0,     0,     0,     0,  2423,
       0,   771,  2426,     0,     0,     0,     0,     0,     0,   772,
       0,     0,     0,     0,     0,     0,   117,     0,   773,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2445,     0,     0,   118,     0,     0,   774,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   775,
       0,  2807,     0,     0,   118,     0,     0,  2811,  2589,     0,
       0,  2813,     0,     0,     0,     0,     0,   776,  2591,  2592,
       0,     0,     0,     0,     0,     0,  2493,  2819,     0,  2595,
     777,   778,     0,     0,     0,     0,     0,     0,  2597,     0,
     120,     0,  2601,  2602,  1887,     0,     0,     0,     0,  2509,
       0,  2610,  2611,     0,     0,   779,     0,     0,     0,   115,
    2619,  2620,     0,     0,     0,     0,  2625,     0,     0,     0,
     120,     0,     0,     0,     0,     0,  2635,  2636,  2867,  2868,
     780,     0,     0,   328,     0,     0,     0,  2646,     0,  2647,
       0,     0,     0,     0,   781,     0,   782,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
       0,   783,     0,     0,   126,     0,   784,     0,     0,     0,
       0,     0,     0,  2542,   785,   329,     0,     0,     0,     0,
       0,     0,   786,     0,     0,     0,     0,     0,  2550,   125,
       0,     0,     0,     0,   126,     0,   118,     0,     0,     0,
       0,     0,     0,   787,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2574,   788,   789,     0,
     790,     0,     0,     0,     0,     0,     0,  2583,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2928,     0,
       0,     0,     0,   330,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   791,   120,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,  2767,     0,     0,  2768,     0,     0,  2770,     0,
       0,  2654,     0,     0,  2657,     0,   126,     0,  2779,     0,
    2994,     0,  2661,     0,     0,     0,   115,  2788,     0,     0,
       0,     0,     0,     0,     0,     0,  2797,     0,  2674,     0,
       0,  2677,     0,  2799,  3006,     0,  2681,     0,     0,  2684,
    2685,     0,     0,     0,  2803,     0,     0,     0,     0,     0,
    2806,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   541,   542,     0,     0,     0,     0,
     543,     0,     0,     0,     0,     0,     0,     0,     0,  3031,
       0,     0,     0,     0,     0,     0,     0,  2728,  2729,     0,
       0,     0,     0,   544,     0,     0,     0,     0,     0,  3045,
       0,     0,  3046,   118,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     0,     0,     0,     0,     0,     0,  2755,
       0,     0,     0,     0,     0,   671,     0,   115,     0,     0,
       0,  1449,  1450,  1451,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
       0,  2897,     0,     0,     0,     0,     0,     0,  2898,     0,
       0,  1452,  1453,     0,   545,  1454,     0,  2900,   672,     0,
       0,     0,  1455,     0,     0,  1456,  2902,     0,     0,  1457,
       0,     0,  2905,     0,   546,     0,  2907,     0,     0,  1458,
    1459,     0,     0,     0,     0,     0,     0,  1460,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   547,
       0,     0,     0,     0,   118,     0,     0,  2808,     0,     0,
       0,     0,     0,   126,     0,     0,     0,  1461,  1462,     0,
     673,  1463,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2827,  1464,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2838,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1465,     0,     0,     0,     0,   548,     0,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     674,     0,  1466,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1467,     0,     0,     0,  2887,     0,     0,     0,
    2893,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,   549,     0,     0,   126,     0,     0,   115,     0,     0,
       0,  1468,     0,     0,     0,     0,     0,     0,     0,  1469,
    1470,     0,     0,     0,  2910,  2911,     0,  2913,     0,     0,
       0,     0,  2915,  2916,     0,     0,  1471,  2918,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,  1472,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2940,     0,     0,     0,     0,     0,     0,  1473,   675,  1474,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1475,     0,     0,     0,   118,     0,     0,     0,     0,     0,
       0,  1476,  2964,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,  1157,  1158,  1159,     0,  1477,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     120,  1160,  1161,     0,     0,  1162,   115,     0,  1163,     0,
       0,     0,     0,     0,     0,  1164,     0,     0,     0,  1165,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1166,
    1167,  3009,     0,     0,     0,     0,     0,  1168,  1169,     0,
       0,     0,     0,     0,     0,   117,     0,     0,  3018,     0,
       0,     0,     0,     0,     0,  1170,     0,     0,     0,   115,
       0,     0,  3029,  1171,     0,  3032,     0,  1172,  1173,   125,
       0,  1174,     0,     0,   126,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1175,     0,   118,     0,     0,     0,     0,     0,     0,
       0,   555,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1176,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1135,     0,     0,     0,     0,  1136,
       0,     0,     0,     0,     0,   115,     0,     0,   559,     0,
       0,     0,  1177,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1178,
       0,     0,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,  1179,     0,  1180,     0,     0,     0,     0,   115,  1181,
    1182,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   118,     0,     0,  1183,  1184,     0,   125,     0,
       0,     0,     0,   126,     0,     0,     0,  1185,  1186,     0,
       0,     0,     0,     0,     0,     0,     0,  1512,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1187,     0,  1188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1189,     0,  1190,     0,   126,     0,   120,     0,
       0,  1191,     0,     0,     0,   118,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,  1192,  1557,     0,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     556,   120,   126,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   126,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
       0,     0,     0,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,  1558,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,     1,     0,     0,     2,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     4,     0,     0,     0,     0,     5,     6,     0,
       0,     0,     7,     8,     9,     0,     0,     0,     0,     0,
       0,     0,    10,     0,     0,     0,     0,     0,     0,    11,
       0,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    15,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      18,     0,     0,     0,    19,     0,     0,     0,    20,     0,
       0,     0,    21,    22,     0,     0,     0,     0,    23,    24,
       0,     0,    25,     0,     0,     0,     0,     0,    26,     0,
       0,     0,     0,     0,    27,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    28,     0,     0,     0,    29,
      30,    31,     0,     0,    32,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    36,
       0,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,     0,    40,     0,   185,     0,
       0,   186,     0,    41,   187,     0,     0,    42,     0,     0,
       0,    43,     0,    44,     0,    45,     0,     0,     0,     0,
      46,     0,     0,     0,   188,     0,     0,     0,   189,   190,
     191,     0,     0,     0,     0,     0,    47,     0,   192,     0,
     193,     0,    48,     0,     0,   194,     0,   195,   196,   197,
       0,     0,     0,     0,     0,   198,     0,   199,     0,     0,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    51,     0,    52,     0,     0,     0,     0,
       0,     0,    53,     0,     0,    54,    55,     0,     0,     0,
       0,     0,   200,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     201,     0,     0,     0,     0,     0,    56,     0,     0,   202,
       0,   203,   204,    57,   205,   206,     0,     0,   207,     0,
       0,     0,   208,     0,   209,     0,     0,     0,     0,     0,
     210,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     211,   212,     0,     0,     0,   213,     0,     0,     0,     0,
       0,     0,     0,   214,     0,     0,     0,   215,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   216,     0,   217,     0,     0,
       0,     0,     0,     0,   218,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   219,
       0,   220,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   221,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   222,   223,     0,     0,
       0,     0,     0,     0,     0,     0,   224,     0,     0,     0,
       0,     0,     0,     0,   225,     0,     0,     0,     0,     0,
     226,     0,   227,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,   228
};

static const yytype_int16 yycheck[] =
{
       3,    55,  1639,   777,   778,  1023,     4,     0,    11,   782,
     532,   311,  1869,    16,  1871,     5,     5,     5,     4,     4,
       3,     4,  1011,  1012,  1013,     4,     3,     4,     5,     5,
       5,  1158,     5,    32,    37,     3,     4,    32,    16,   488,
      52,     5,    45,     3,     4,     3,     4,    27,     5,   498,
       4,    54,     4,    63,    57,    63,    37,    60,    27,    21,
      21,    64,    27,   186,    67,     3,     4,    18,    71,    72,
       3,     4,    75,   141,     4,    78,    79,     3,     4,    82,
      12,    50,    85,    86,    53,    16,    89,     4,    32,     4,
      44,    94,   104,    47,   145,    64,   214,    44,    36,  1088,
      40,     5,    40,   115,   107,   108,   109,   110,   111,   112,
       3,     4,     3,     4,     4,    27,   104,    11,  1125,    68,
      89,  1128,   237,     4,   112,   128,    80,   250,    18,     3,
       4,     3,     4,     4,    88,    63,   148,    16,   107,    63,
     121,   150,  1149,    36,    91,    36,     3,     4,    47,    82,
       3,     4,  2946,    68,   316,   172,   214,   143,   276,  1313,
     163,    55,   187,  1317,    91,     3,     4,    87,     3,     4,
      33,   196,     3,     4,   128,   180,    15,   166,   118,     5,
     118,    75,   250,   181,   104,   188,   195,   204,     3,     4,
     193,   166,   256,  1347,  1348,  1349,     5,    68,   157,   322,
     154,   133,  2996,   167,   168,    31,   144,    16,   109,   314,
     205,   105,   193,   128,   195,   610,   197,   198,   613,   614,
      16,   186,   273,   338,   103,   208,   284,   208,     4,     5,
      21,     4,     5,   127,   290,     4,     5,   131,   128,    21,
      63,   220,   298,   174,   225,   172,   314,   215,   129,   228,
     229,   144,   146,   144,    21,     3,     4,   128,   191,   213,
      21,   205,    20,     3,     4,   268,   213,    27,     4,    63,
     250,   225,    13,    27,   186,   215,   227,   215,   210,   282,
     234,   235,   208,   337,   214,   250,   265,  1060,   242,   294,
     244,   280,    68,     5,     4,   252,   299,   300,     4,   134,
      40,    21,   264,   264,   314,   280,   314,   208,   272,   287,
     225,   287,   315,   312,   317,   327,    92,   312,   272,   234,
     235,    61,    63,   316,   327,   328,   299,   330,   331,   339,
     333,   339,    68,   318,   251,   225,   208,   227,   250,   325,
     343,   317,   214,   276,   234,   235,   334,   345,   338,   330,
     353,   354,   128,   336,   225,   128,    27,   325,    68,   128,
     311,   338,   337,   234,   235,   325,   318,   325,   312,   818,
     274,     3,     4,   376,   328,   151,   379,   380,   118,   382,
      14,    15,   220,   386,   387,   257,   314,   325,    22,     4,
     314,   345,   128,   250,   397,   398,    30,   380,   381,   699,
     379,   404,   301,     4,    38,    16,   409,   410,   325,  1182,
     336,   339,   284,   328,   417,   339,   385,   420,   128,   250,
      68,   311,   128,    15,   378,    59,   146,  1200,   182,   383,
     384,   325,   325,  1422,   325,   250,   439,   440,   328,     4,
     236,  1430,    76,   446,   447,   448,   449,   450,   451,   225,
     453,   325,   225,   456,   380,   381,   225,   328,   234,   235,
    1234,   234,   235,   378,   336,   234,   235,   470,   383,   384,
     211,   474,   325,   264,  1601,   215,   479,   480,   481,   482,
     483,   484,   264,   486,   232,   488,   489,   490,   378,   225,
     250,   314,  1266,   383,   384,   498,   499,   264,   234,   235,
    1627,    58,   260,   264,    63,   162,   487,   378,   380,   381,
     264,   182,   383,   384,    34,   225,   339,     4,    65,   225,
     314,   132,  1649,   972,   234,   235,     4,   128,   234,   235,
     326,     4,    82,   102,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   264,   339,    92,    46,     4,   552,
     553,   292,   328,     3,     4,   328,     5,     4,   334,   328,
     314,   334,   303,   128,   111,  1572,  1015,   570,  1575,    68,
     129,    58,   345,     5,   185,     4,   296,    91,    37,     5,
     320,    13,    14,    30,    42,    58,    85,    13,    14,    48,
     256,    22,   328,   264,   114,   576,   290,   338,   652,   214,
     232,     0,   378,   606,   298,   378,   382,   383,   384,   378,
     383,   384,   318,    30,   383,   384,    66,     4,   328,    78,
      51,  1775,   328,    54,   225,   236,    57,   219,     3,     4,
     287,    63,    98,   234,   235,     3,     4,    63,     3,     4,
     298,   191,   378,   314,    68,     4,   649,   383,   384,   630,
     284,    91,   118,     5,   269,    86,    40,   135,   172,    46,
     225,   276,    49,   297,   298,     3,     4,    40,   378,   234,
     235,    63,   378,   383,   384,    56,   125,   383,   384,     3,
       4,    68,    99,  2540,   241,   184,   117,   112,   742,   120,
      58,    91,    63,    22,   697,   329,    61,  1470,    27,    63,
      87,     3,     4,   162,   707,     4,   226,   761,  1481,    59,
     311,    24,    25,    94,   261,   326,   140,   104,   167,   168,
     289,    50,    51,   110,    53,    54,   276,   328,    74,   176,
     277,   278,   172,     5,   118,    64,     5,   129,   372,   373,
     374,     4,   208,   377,   303,   118,   170,    31,   207,    78,
      79,     5,   230,   211,   241,   150,   759,    86,   129,   134,
      89,   178,    63,   328,   213,   129,     4,   215,   241,    22,
      63,   152,   172,   776,   161,    40,   779,   378,   107,   211,
     212,    19,   383,   384,     5,   211,   212,   116,   117,   102,
     237,   120,   142,   218,   141,     5,   134,   184,    51,   802,
     195,    54,    40,    91,   807,   808,   809,   810,   167,   168,
     813,   125,   815,   378,   817,   818,   819,   264,   383,   384,
      58,   252,   281,   272,    91,   324,     3,     4,   129,   376,
     377,   215,   291,    86,    11,   259,   129,    58,     4,   186,
     339,   187,   215,  1292,    63,  2832,    67,     4,   150,   274,
     299,   905,    63,   118,    11,   286,    68,   216,    65,   276,
     292,     5,   191,  2850,   117,   282,   292,   120,   106,    13,
      14,   303,   304,   241,   316,  1893,   308,   303,   304,   172,
     339,    65,   308,  1872,   172,   316,   127,   890,    33,   892,
     128,   272,   316,   195,   897,   898,    63,   900,   901,   902,
     903,   251,   187,   250,   111,   172,   338,    68,   295,   293,
     129,   303,   338,   272,   917,   918,   266,  1133,   129,    63,
     293,   924,   925,   252,  1140,   271,    63,   111,    30,   258,
       3,     4,   303,     5,   172,   281,   323,   324,    11,   303,
    2067,   944,   945,   946,   947,   948,   275,   950,   335,   952,
     215,   135,   339,  1134,    93,  2082,    15,   286,    63,  1733,
    1141,  1968,   129,   314,   967,   968,   969,   314,   971,   972,
     973,    63,   975,    13,    14,    68,     0,   215,  1427,   112,
       4,  1988,   257,  2110,     4,     5,   336,   225,   317,   318,
     315,  1998,   129,   996,  2001,   998,   234,   235,  2985,   252,
      68,  2008,   303,   241,  2991,  1008,    63,    93,   246,    76,
     303,   340,  1015,  1016,    28,   996,  2023,     5,  1021,  2026,
     241,    63,    31,    63,   129,     4,     5,  2034,     3,     4,
    2037,     3,     4,   286,    63,  1038,    63,   129,   226,  1042,
    2194,  2195,  2196,  2197,  2198,  2199,  2200,  2201,  2202,    13,
      14,  1054,  1055,  1056,   261,     5,   385,   691,     4,  1062,
    3047,  2698,  3049,     4,  1067,     4,     5,   211,   212,  2764,
     277,   278,   129,     4,   176,   709,     4,   261,    63,  1082,
     287,  1135,   162,    62,   303,   218,    61,   129,     4,    68,
     328,     5,   303,   277,   278,     3,     4,     4,  1101,    63,
     129,     5,   129,     5,  2231,     4,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   237,   303,     5,    87,     5,
     378,   274,   121,    37,   129,   383,   384,   781,   292,   163,
       5,    92,   786,    61,    48,   104,     3,     4,     5,   303,
     304,   140,   264,   243,   308,     5,   303,    13,    14,   376,
     377,   211,   212,   208,     4,  1178,   155,     4,   192,   214,
       4,    92,   196,   162,    78,  2174,    46,  2882,   129,   377,
       4,   170,   376,   377,   338,   383,  1199,   385,   303,  2894,
       5,     5,     4,    40,   102,  1208,    66,   287,    68,    13,
      14,   303,   123,     5,     3,     4,   129,    63,     4,    13,
      14,  1224,   257,  1226,     5,   299,     3,     4,  1231,  1232,
    1233,    68,    13,    14,    13,    14,     3,     4,  1241,    16,
     254,  1244,     4,  1246,    63,   194,   303,   211,   212,   284,
     330,    40,   292,   232,     3,     4,     5,   891,    26,    63,
    1263,   303,  1265,   303,   304,     4,     5,   104,   162,    63,
    1273,  1274,     4,   252,   303,   112,   303,  2266,   257,     4,
     259,   118,    63,   297,    63,  1288,  1289,     4,     5,  1292,
    1293,  1294,   306,   307,   243,   206,     4,  1300,   338,  1302,
    2289,   336,  1305,   140,  1307,     4,     5,   286,   287,  2696,
     129,    46,   223,   207,    49,  1369,   295,     5,   303,     4,
     954,     4,    13,    14,   220,   162,   476,   477,   292,   118,
     279,  1116,  1117,    68,     4,  2722,     4,   316,  2465,   303,
     304,     5,   202,   180,     4,     4,   381,  1350,   167,   168,
       4,   119,  1355,     5,  2481,  2362,  1359,     8,  1361,  2486,
      42,    43,  1365,    26,  2371,   211,   212,   135,    10,   104,
       5,   298,    63,  2380,   338,   110,   187,   288,  1381,     4,
    1383,   218,  1385,  1386,  1387,  1388,     4,   281,  1391,  1392,
     196,  1394,  1395,     4,  1397,   374,  1399,   291,   219,   187,
    1381,   219,    86,  1406,     5,   265,   174,   211,   212,     5,
    1413,     4,     4,    46,  1417,  1418,  1419,   211,   212,   313,
     219,     4,   259,   334,  1427,  1428,   161,   321,  1431,   209,
     211,   212,   211,   212,   345,    68,  1439,   274,  1441,    13,
      14,  1444,    28,  2830,  2831,   339,   292,  2834,    40,  2836,
     287,  1432,    85,   272,   314,   209,   119,   303,   304,    68,
      68,  2848,  2849,   231,   324,    68,  2853,  2854,   250,  1450,
    2857,     5,   135,   251,     5,  2862,  2863,   245,     3,     4,
     164,   318,     4,     4,   303,  1488,     4,  1490,   292,    63,
    1493,  1494,   338,  1496,   331,  1498,   333,   334,   292,   303,
     304,  1504,     4,     4,   308,  1508,   219,   189,   190,   303,
     304,   292,  2501,   292,  1517,    40,     3,     4,     5,  2508,
     211,   212,   303,   304,   303,   304,   118,   308,     5,    91,
      91,    35,    91,  2920,   338,     5,  2923,   374,    91,   221,
       5,  2928,   332,     4,   338,     4,   104,  2934,    16,     5,
       5,     4,  2939,     5,     3,     4,     4,   338,    15,   338,
     295,     5,    86,     4,   248,   249,    23,  2694,   231,   202,
      16,  1205,     4,     4,     4,   167,   168,   163,     5,   263,
    2707,     5,   245,   102,  2573,  2712,    91,  2576,   323,   324,
    2579,    40,  2581,   118,    91,  1598,  1599,  1600,    91,     4,
     335,   292,     5,   393,   339,     5,   192,    91,     5,   113,
     196,     4,   303,   304,     5,     5,  1597,  1620,     4,     4,
       4,  1624,     5,   215,   216,   309,  3013,     5,  1262,  3016,
       5,    66,   265,     4,   138,   139,     4,   211,   212,    11,
     164,     5,  1276,   147,  1647,  1648,    11,   338,     4,  3036,
       4,     4,     4,  2690,  1657,     5,  2693,  1660,  2695,     4,
       4,   181,     5,  3050,  1667,   169,  3053,  3054,   254,   118,
       5,  2708,  2709,     5,     4,   179,  2125,   172,  1681,     4,
     272,   314,   172,  1686,     5,   311,     4,  1690,  2725,  1692,
    1693,   324,  1695,  1696,  1697,   286,  1699,    38,    38,  1702,
    1703,  1704,  1705,  1706,  1707,  1708,  1709,  1710,  1711,  1712,
     286,   297,  1715,  1716,  1717,  1718,   318,     5,   292,     4,
     306,   307,  1725,  1726,   248,   249,  1729,  1730,  1731,   303,
     304,  2180,  1735,  1736,     3,     4,    55,     6,     7,   263,
       4,     4,  2731,     5,     5,  1748,  1749,     5,  1751,  1752,
       5,     4,     3,     4,     4,   300,    75,     8,     9,    10,
     550,    37,     5,     5,   338,   300,   215,   557,  1402,  1403,
     560,     5,     5,    92,     5,   565,     4,     4,     4,   569,
       3,     4,     5,     6,     7,   309,   105,     5,     5,     5,
       5,  2240,     3,     4,     5,     6,     7,     3,     4,     5,
       6,     7,     5,     5,     4,   112,     5,     5,   127,     4,
     267,     5,   131,   270,     5,     5,   150,   264,   112,   264,
    1823,   264,  1825,  1826,   264,   264,  1829,   146,    40,   112,
     264,  1834,  1835,     5,  1837,  1838,  1839,   236,  1841,  1842,
     236,  1844,   270,  1846,  1847,   121,  1849,  1850,    40,  1852,
     270,  1854,     5,  1834,     4,  2982,     5,     5,     4,  1862,
     236,     4,   236,     5,   654,     5,     5,  1870,     5,     5,
       4,   118,  1875,  1876,   193,     4,     4,   118,  1881,     5,
       5,     5,     5,     5,     4,     0,     5,  1890,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   192,  1110,   194,   195,
    1923,   197,   198,    96,  1905,     5,     4,    45,     5,     5,
       4,   104,     5,  1914,     5,     4,    11,  1918,     4,   112,
       5,  1944,  1945,    61,    11,     5,  1949,     5,     4,     4,
       4,     4,  1955,     5,   230,  1148,     4,   130,     5,  1593,
     264,   264,   264,   264,   137,   150,   264,    85,   264,     4,
     219,     4,   186,   249,   250,   274,   232,     4,    68,   255,
       4,     4,     4,   259,     5,     5,     5,   105,  1622,   162,
     300,     5,  1626,     5,    84,     5,     4,     4,   264,     5,
     173,  2450,  2451,    93,  2453,  2454,     4,   125,  2457,  2458,
       4,   129,     4,   342,   104,     5,     5,     5,  1652,   264,
     264,     4,   342,     4,   814,     4,     4,     4,  1662,     4,
     342,   821,     4,   342,     4,   300,     5,  1671,  1672,     5,
     316,   159,   160,   319,     5,   218,   250,     4,  1682,   250,
     140,     4,     4,   226,   330,     5,     5,   250,     5,  2062,
    2063,   250,  2065,   250,     4,   300,     5,    63,     5,     4,
     300,     5,   162,     5,   350,  2524,     4,   316,     5,     5,
    2083,  2084,  2085,  2086,  2087,  2088,  2089,  2090,  2091,     4,
      11,     5,     5,  2866,     4,   386,     5,     5,     4,   386,
       5,   274,     5,  2106,   222,  2108,     4,   386,     5,     5,
       4,     4,     4,     4,   287,   233,     5,     5,     4,   386,
       5,  2124,  2125,     5,     4,   338,     5,  2130,   218,   125,
       5,     4,   305,   129,     5,     4,  2139,  2140,  2141,  2142,
    2143,  2144,  2145,  2146,  2147,  2148,     5,     5,  2151,  2152,
    2153,  2154,  2155,  2156,  2157,  2158,  2159,  2160,  2161,  2162,
       4,  2164,     4,  2166,  2167,  2168,     5,   957,     5,   259,
       5,   167,   168,     5,   964,  2948,   172,  2180,  2181,     5,
     298,   299,     4,   316,     5,     5,     5,     5,     4,     4,
       4,   467,     5,     5,     5,     5,     4,   287,     3,     4,
       4,     4,   478,     5,     5,     5,     5,     4,   386,     5,
       5,   487,     5,     5,    19,     4,     4,   213,     5,  1009,
    1010,     5,     5,     5,  1014,     4,     4,  1017,     4,  2232,
    2679,  2234,     5,  2236,  2683,  2238,     5,  2240,  2241,  1029,
    2243,   331,    19,   333,     5,  2248,  2249,     5,  2251,  2252,
       4,  2254,     5,  2256,     4,     4,   374,     4,     4,  2262,
       5,  2264,     5,     5,    41,  2268,     5,    44,  2271,     5,
    2719,     4,   268,     4,   386,     5,   272,     4,     4,   555,
     556,     5,     5,     4,     4,   386,     5,     5,     4,     4,
     386,     5,   568,  2274,     5,     5,     4,   573,     4,   386,
       5,   106,     5,   299,    81,     5,   582,   303,     5,     5,
       5,    88,  2315,     4,   475,     5,     4,     4,     4,   315,
       4,     4,    99,   100,     5,  1518,  1519,  1520,     5,   106,
       5,     4,  2313,     4,     4,  1528,  1529,  1530,     5,     5,
       5,     5,     4,     4,  1537,  1538,  1539,     5,     5,  1542,
    1543,     5,  1545,  1546,     5,     4,   424,     5,   135,  2413,
       4,     4,     4,     4,     4,     4,  1156,   172,     4,     4,
       4,     4,     4,     4,  3006,     5,   153,     5,     4,     4,
       4,     4,  2881,     5,     4,     4,  1579,  1580,     5,     5,
    1583,  1584,     5,     5,   171,   172,   672,   673,   674,   675,
       4,   178,     4,     4,     4,     4,     4,     4,     4,     4,
       4,  2476,     5,     4,  2864,     5,  2419,     5,     5,     4,
    2948,     5,     4,  2944,     5,     5,   203,  2430,  2431,  2432,
    2433,  2434,  2435,  2436,  2437,  2438,  2439,  2440,  2960,  2961,
       4,   246,  2076,  2446,     4,     4,     4,  2450,  2451,     4,
    2453,  2454,     4,     4,  2457,  2458,  2459,  2460,  2461,  2462,
    2463,  2464,     5,  2466,  2467,  2468,     4,     4,     4,   246,
       5,     4,     4,     4,     4,   857,     5,  2111,     5,  2482,
    2483,  2484,  2485,     4,  2487,  2488,  2489,  2490,  2491,  2492,
       4,  2494,     4,     4,  2497,  2498,     4,     4,     4,    -1,
       5,     4,    -1,     5,   780,     5,     4,     4,    -1,     5,
       5,     5,     4,    -1,     5,     5,     5,     4,  2521,     4,
      -1,  2524,  2525,     5,   301,     5,  2529,     5,    -1,    -1,
      -1,  2534,  2535,    -1,  2537,    -1,    -1,   314,    -1,    -1,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   345,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1367,    -1,    -1,
      -1,    -1,    -1,  2586,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2267,    -1,
      -1,    -1,    -1,    -1,    -1,  1405,    -1,    -1,    -1,    -1,
    1410,    -1,    -1,    -1,  2283,  2284,  2285,    -1,    -1,  2288,
    1420,  2290,  2291,    -1,    -1,  2294,  2295,  2296,    -1,    -1,
    2299,  2300,    -1,    -1,  2303,    -1,  2305,  2306,    -1,  2308,
      -1,    -1,    -1,    -1,    -1,  2658,    -1,    -1,    -1,  2662,
      -1,    -1,    -1,    -1,    -1,    -1,  1124,    -1,    -1,  2672,
    2673,    -1,    -1,    -1,    -1,  2678,  2679,    -1,    -1,  2682,
    2683,    -1,   958,    -1,    -1,  2688,    -1,    -1,  2691,  2692,
      57,    -1,    -1,    -1,   970,    -1,    -1,    -1,    -1,    -1,
      -1,    68,    -1,    -1,    -1,    -1,    -1,  2710,  2711,    -1,
    2713,  2714,  2715,  2716,  2717,    -1,  2719,  2720,    -1,    -1,
      -1,  2724,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,
      97,  1007,    -1,    -1,  2737,    -1,    -1,   104,    -1,    -1,
      -1,    -1,    -1,    -1,  2747,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2415,    -1,    -1,  2418,
      -1,    -1,  2765,   130,  2423,    -1,  1959,  2426,    -1,    -1,
     137,    -1,    -1,   140,    -1,    68,    69,    70,    -1,  1972,
      -1,    -1,    -1,    -1,    -1,    -1,  2445,    -1,    -1,  1982,
      -1,    -1,    -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,
      -1,    -1,    95,    -1,  2807,    -1,   173,    -1,    -1,  2812,
      -1,  2814,    -1,    -1,    -1,   108,    -1,  2820,    -1,    -1,
    1096,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2833,   124,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2851,    -1,
      -1,   218,  2855,    -1,  2908,    -1,    -1,    -1,    -1,   226,
      -1,  2054,    -1,   156,    -1,    -1,    -1,    -1,  2502,    -1,
      -1,  1661,    -1,   166,    -1,    -1,    -1,    -1,  2881,    -1,
      -1,    -1,    -1,  2542,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   188,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   197,  1181,    -1,   274,    -1,  2912,
      -1,    -1,    -1,    -1,  2917,  2574,  2919,    -1,    -1,    -1,
     287,    -1,    -1,  2926,   217,    -1,    -1,    -1,  2931,    -1,
      -1,  1721,    -1,  2936,    -1,    -1,    -1,  1727,   305,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   239,    -1,    -1,   316,
      -1,   318,    -1,    -1,    -1,    -1,    -1,  2960,  2961,  1235,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1245,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2986,    -1,    -1,  2989,   280,    -1,  2992,
      -1,    -1,   285,    -1,    -1,  2654,  2977,    -1,    -1,  3002,
    3003,  3004,  3005,    -1,    -1,    -1,    -1,   374,    -1,   302,
      -1,  3014,   305,    -1,  3017,  2674,    -1,    -1,    -1,    -1,
      -1,  3024,  2681,  3026,    -1,  2684,  2685,  3008,    -1,    -1,
    3011,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1831,    -1,    -1,    -1,    -1,  1836,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2706,    -1,    -1,    -1,    -1,  1867,  1536,    -1,
      -1,    -1,    -1,  1873,    -1,    -1,    -1,  1363,    -1,    -1,
    1548,    -1,  2726,    -1,    -1,    -1,  2730,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1381,    -1,    -1,    -1,    -1,
    1900,    -1,  1570,  1571,    -1,    -1,    -1,  1907,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2325,    -1,    -1,  1411,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1421,    -1,    -1,    -1,  2808,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1438,    -1,    -1,    -1,    -1,    -1,  2827,    -1,
      -1,    -1,    -1,    -1,  1450,    -1,    -1,    -1,    -1,  1455,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2385,  2386,  2387,  2388,  2389,    -1,  2391,  2392,
      -1,    -1,    -1,  2396,  2397,  2398,  2399,  2400,    -1,  2402,
    2403,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2870,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2910,  2911,    -1,  2913,    -1,  2915,  2916,    -1,  2918,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2059,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2079,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2972,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1597,  2112,  2113,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,    -1,    -1,    -1,  2128,  2129,
      -1,    -1,    -1,  2133,  2134,    -1,    19,    -1,    -1,  1625,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3018,
      -1,    -1,    -1,    -1,  2998,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1653,    -1,    -1,
    1656,    -1,    -1,  2173,    -1,    58,    -1,    -1,    -1,  1665,
    1666,    -1,    -1,    -1,  2184,    -1,  2589,  1673,    -1,    -1,
      -1,    -1,    -1,    -1,  1680,  2598,  2599,  2600,  2601,  2602,
      -1,  2604,  2605,    -1,  2607,  2608,  2609,  2610,  2611,    -1,
    2613,  2614,    -1,  2616,  2617,  2618,  2619,  2620,    -1,  2622,
    2623,    -1,  2625,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2635,  2636,  1720,    -1,    -1,  2237,    -1,    -1,
      -1,    -1,    -1,  2646,    -1,    -1,  1732,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2258,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2281,    -1,    -1,    -1,    -1,  2286,    -1,    -1,   172,
      -1,    -1,  2292,    -1,    -1,    -1,    -1,  2297,    -1,    -1,
      -1,  2301,    -1,    -1,  2304,    -1,    -1,  2307,    -1,  2309,
    1978,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1986,  1987,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1996,  1997,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2006,  2007,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1834,    -1,
      -1,    -1,    -1,  2021,  2022,    -1,    -1,    -1,   241,    -1,
      -1,    -1,    -1,   246,  2032,  2033,    -1,    -1,    -1,    -1,
      -1,  2039,  1858,    -1,    -1,    -1,  2779,    -1,    -1,    -1,
      -1,  2049,    -1,    -1,    -1,  2788,    -1,    -1,  1874,    -1,
      -1,    -1,    -1,    -1,  2797,    -1,  2799,    -1,    -1,    -1,
    2803,  1887,    -1,  1889,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1899,    -1,    -1,  1902,  1903,  1904,  1905,
    1906,    -1,  1908,    -1,    -1,  1911,    -1,    -1,  1914,  1915,
    1916,  1917,  1918,  1919,    -1,  1921,  1922,    -1,    -1,    -1,
    1926,  1927,  1928,    -1,    -1,  1931,  1932,    -1,    -1,    -1,
      -1,  1937,  1938,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
      -1,     4,     5,  2493,    -1,  2898,    -1,  2900,    -1,  2902,
      -1,    -1,  2905,    -1,  2907,    -1,    -1,    -1,    -1,  2509,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,
    2550,    -1,     4,    -1,    -1,    68,    -1,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    77,    -1,    79,    19,    -1,    -1,
      -1,    84,    -1,    -1,    87,  2061,    58,    -1,  2064,    -1,
      93,    -1,    -1,  2583,    -1,    -1,    -1,    -1,    -1,  2075,
      -1,   104,  2078,    -1,    -1,    -1,    -1,    -1,    -1,   112,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,   121,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2107,    -1,    -1,   106,    -1,    -1,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,  2651,    -1,    -1,   106,    -1,    -1,  2657,  2326,    -1,
      -1,  2661,    -1,    -1,    -1,    -1,    -1,   180,  2336,  2337,
      -1,    -1,    -1,    -1,    -1,    -1,  2162,  2677,    -1,  2347,
     193,   194,    -1,    -1,    -1,    -1,    -1,    -1,  2356,    -1,
     172,    -1,  2360,  2361,     4,    -1,    -1,    -1,    -1,  2185,
      -1,  2369,  2370,    -1,    -1,   218,    -1,    -1,    -1,    19,
    2378,  2379,    -1,    -1,    -1,    -1,  2384,    -1,    -1,    -1,
     172,    -1,    -1,    -1,    -1,    -1,  2394,  2395,  2728,  2729,
     243,    -1,    -1,   215,    -1,    -1,    -1,  2405,    -1,  2407,
      -1,    -1,    -1,    -1,   257,    -1,   259,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   241,
      -1,   274,    -1,    -1,   246,    -1,   279,    -1,    -1,    -1,
      -1,    -1,    -1,  2259,   287,   257,    -1,    -1,    -1,    -1,
      -1,    -1,   295,    -1,    -1,    -1,    -1,    -1,  2274,   241,
      -1,    -1,    -1,    -1,   246,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2302,   330,   331,    -1,
     333,    -1,    -1,    -1,    -1,    -1,    -1,  2313,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2838,    -1,
      -1,    -1,    -1,   325,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   374,   172,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,    -1,    -1,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,    -1,  2590,    -1,    -1,  2593,    -1,    -1,  2596,    -1,
      -1,  2417,    -1,    -1,  2420,    -1,   246,    -1,  2606,    -1,
    2940,    -1,  2428,    -1,    -1,    -1,    19,  2615,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2624,    -1,  2444,    -1,
      -1,  2447,    -1,  2631,  2964,    -1,  2452,    -1,    -1,  2455,
    2456,    -1,    -1,    -1,  2642,    -1,    -1,    -1,    -1,    -1,
    2648,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    67,    68,    -1,    -1,    -1,    -1,
      73,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3009,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2503,  2504,    -1,
      -1,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,  3029,
      -1,    -1,  3032,   106,    -1,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,    -1,    -1,    -1,    -1,    -1,    -1,  2555,
      -1,    -1,    -1,    -1,    -1,    17,    -1,    19,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,  2769,    -1,    -1,    -1,    -1,    -1,    -1,  2776,    -1,
      -1,    50,    51,    -1,   187,    54,    -1,  2785,    60,    -1,
      -1,    -1,    61,    -1,    -1,    64,  2794,    -1,    -1,    68,
      -1,    -1,  2800,    -1,   207,    -1,  2804,    -1,    -1,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,
      -1,    -1,    -1,    -1,   106,    -1,    -1,  2653,    -1,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,   116,   117,    -1,
     122,   120,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2686,   140,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2697,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,   301,    -1,
     172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     192,    -1,   191,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   201,    -1,    -1,    -1,  2752,    -1,    -1,    -1,
    2756,    -1,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
      -1,   374,    -1,    -1,   246,    -1,    -1,    19,    -1,    -1,
      -1,   250,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   258,
     259,    -1,    -1,    -1,  2810,  2811,    -1,  2813,    -1,    -1,
      -1,    -1,  2818,  2819,    -1,    -1,   275,  2823,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,   287,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2856,    -1,    -1,    -1,    -1,    -1,    -1,   316,   320,   318,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,    -1,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,   340,  2888,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,    20,    21,    22,    -1,   374,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     172,    50,    51,    -1,    -1,    54,    19,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,  2977,    -1,    -1,    -1,    -1,    -1,    86,    87,    -1,
      -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,  2994,    -1,
      -1,    -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    19,
      -1,    -1,  3008,   112,    -1,  3011,    -1,   116,   117,   241,
      -1,   120,    -1,    -1,   246,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   140,    -1,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,   310,    -1,
      -1,    -1,   191,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,
      -1,    -1,    -1,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   250,    -1,   252,    -1,    -1,    -1,    -1,    19,   258,
     259,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   106,    -1,    -1,   274,   275,    -1,   241,    -1,
      -1,    -1,    -1,   246,    -1,    -1,    -1,   286,   287,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   316,    -1,   318,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   331,    -1,   333,    -1,   246,    -1,   172,    -1,
      -1,   340,    -1,    -1,    -1,   106,    -1,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   374,   177,    -1,    -1,    -1,
      -1,    -1,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     320,   172,   246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,    -1,
      -1,    -1,    -1,    -1,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,    41,    -1,    -1,    44,    -1,    -1,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    66,    67,    -1,
      -1,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,    88,
      -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     149,    -1,    -1,    -1,   153,    -1,    -1,    -1,   157,    -1,
      -1,    -1,   161,   162,    -1,    -1,    -1,    -1,   167,   168,
      -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,   177,    -1,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,    -1,   198,
     199,   200,    -1,    -1,   203,   204,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,
      -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   253,    -1,   255,    -1,    41,    -1,
      -1,    44,    -1,   262,    47,    -1,    -1,   266,    -1,    -1,
      -1,   270,    -1,   272,    -1,   274,    -1,    -1,    -1,    -1,
     279,    -1,    -1,    -1,    67,    -1,    -1,    -1,    71,    72,
      73,    -1,    -1,    -1,    -1,    -1,   295,    -1,    81,    -1,
      83,    -1,   301,    -1,    -1,    88,    -1,    90,    91,    92,
      -1,    -1,    -1,    -1,    -1,    98,    -1,   100,    -1,    -1,
     319,   320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   332,    -1,   334,    -1,    -1,    -1,    -1,
      -1,    -1,   341,    -1,    -1,   344,   345,    -1,    -1,    -1,
      -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     153,    -1,    -1,    -1,    -1,    -1,   375,    -1,    -1,   162,
      -1,   164,   165,   382,   167,   168,    -1,    -1,   171,    -1,
      -1,    -1,   175,    -1,   177,    -1,    -1,    -1,    -1,    -1,
     183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     203,   204,    -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   216,    -1,    -1,    -1,   220,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   238,    -1,   240,    -1,    -1,
      -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   272,
      -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   301,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   319,   320,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   337,    -1,    -1,    -1,    -1,    -1,
     343,    -1,   345,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   382
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    41,    44,    47,    61,    66,    67,    71,    72,    73,
      81,    88,    90,    91,   100,   101,   126,   136,   149,   153,
     157,   161,   162,   167,   168,   171,   177,   183,   194,   198,
     199,   200,   203,   204,   216,   220,   238,   240,   241,   253,
     255,   262,   266,   270,   272,   274,   279,   295,   301,   319,
     320,   332,   334,   341,   344,   345,   375,   382,   388,    68,
      11,    55,    75,   105,   127,   131,   146,   325,   424,     3,
       4,   325,   389,   429,   208,   214,   257,   284,   336,   381,
     431,   316,     4,    40,   118,   167,   168,   215,   216,   272,
     436,    28,   163,   192,   196,   254,   297,   306,   307,   404,
     438,    87,   104,   194,   243,   279,   439,    40,    61,   118,
     215,   320,   389,   448,     4,    19,    40,    58,   106,   128,
     172,   215,   225,   234,   235,   241,   246,   328,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   378,   383,   384,
     391,   399,   400,   401,   450,    33,   451,   391,    44,    47,
      80,    88,   154,   213,   242,   244,   272,   345,   390,   391,
      66,   389,   453,   157,   454,    41,    44,    47,    67,    71,
      72,    73,    81,    83,    88,    90,    91,    92,    98,   100,
     135,   153,   162,   164,   165,   167,   168,   171,   175,   177,
     183,   203,   204,   208,   216,   220,   238,   240,   247,   272,
     274,   301,   319,   320,   329,   337,   343,   345,   382,   455,
      87,   104,   506,    19,    41,    44,    81,    88,    99,   100,
     106,   135,   153,   171,   172,   178,   203,   246,   301,   314,
     345,   509,    68,   391,    63,   314,   339,   592,    63,   314,
     339,   591,    92,   123,   206,   223,   288,   334,   345,   515,
      15,     4,    46,    49,    68,    87,   104,   110,   161,   184,
     295,   323,   324,   335,   339,   574,    26,   119,   135,   174,
     231,   245,   518,   256,   536,     5,    68,    92,   151,   334,
     382,   391,   537,     5,   538,    59,   142,   251,   266,   336,
     554,    46,    66,    68,   202,   265,   314,   324,   575,   314,
     590,    68,   226,   377,   383,   385,   576,    39,   215,   257,
     325,   389,   399,   401,   577,     5,   334,   345,   391,   580,
      74,   187,   271,   281,   581,     4,   582,    92,   554,    63,
     314,   339,   589,   215,   325,   389,   593,    26,   119,   135,
     231,   245,   595,    52,   104,   115,   148,   327,   616,   617,
       4,    37,    48,    78,   162,   207,   281,   291,   313,   321,
     339,   417,     4,   135,   230,   618,   325,   389,   620,    15,
      23,   267,   270,   400,   621,   256,   625,   325,   389,   626,
       0,     5,   391,    61,   389,   425,   298,     5,     4,   325,
     389,   426,     5,    32,   312,   427,   134,   389,   428,   134,
     389,   430,   389,     4,   214,   269,   276,   434,   208,   336,
     380,   381,   389,   433,   391,   150,   195,   432,   220,   389,
      82,   191,   276,   389,   435,     5,   389,   389,   389,     4,
     167,   168,   216,   272,   437,     4,   389,   389,     5,   252,
     440,    31,   441,     5,   442,     5,   446,     5,    31,   447,
     389,     8,     9,    10,   389,   395,   396,   397,   398,   389,
     389,    40,   118,   215,   389,   449,   389,   215,   399,   401,
     389,    35,   113,   138,   139,   147,   169,   179,   406,   389,
       4,   391,   391,   391,   391,   391,   391,   391,   391,   391,
     391,   125,    68,    55,    75,    92,   105,   127,   131,   146,
     193,   458,   127,   460,   208,   214,   257,   284,   336,   380,
     381,   389,   443,   461,   316,   464,   187,   465,   187,   196,
     467,    67,    68,    73,    96,   187,   207,   232,   301,   374,
     399,   469,   389,   401,   472,    61,   320,   399,   473,   310,
     399,   401,   474,    33,   475,   399,   401,   476,     4,   399,
     401,   477,    45,    61,    85,   105,   125,   129,   159,   160,
     222,   233,   298,   299,   374,   481,   237,   338,   487,    68,
       5,    93,    63,   314,   339,   495,    63,   314,   339,   494,
       4,    92,   129,   479,     5,    67,   401,   478,    15,    46,
      68,    85,   184,   324,   339,   488,   554,    46,    68,    85,
     202,   265,   314,   324,   489,   314,   493,    68,   257,   491,
     315,    63,   314,   339,   492,    21,   146,   264,   296,   496,
      37,    48,    78,   162,   207,   281,   291,   339,   497,   401,
      93,    15,   219,   504,   399,   507,    68,    76,   510,    31,
     511,    44,    91,   213,   512,   162,   243,   287,   330,   513,
     399,    17,    60,   122,   192,   320,   399,   514,     5,     5,
     166,   280,   337,   399,     4,     5,   166,   280,   399,     4,
       4,   214,   517,     5,     4,     4,   129,   389,     4,    46,
      49,    68,   104,   110,   161,   295,   323,   324,   335,   339,
      68,    69,    70,    95,   108,   124,   156,   166,   188,   197,
     217,   239,   280,   285,   302,   305,   403,     5,     4,   389,
     391,     5,   167,   168,   272,   519,     5,   521,     5,   125,
     167,   168,   213,   272,   299,   522,    98,   118,   208,   535,
       5,   533,     5,   299,   534,     4,     5,   391,   391,   389,
     389,     5,     4,     5,    62,    68,    77,    79,    84,    87,
      93,   104,   112,   121,   140,   162,   180,   193,   194,   218,
     243,   257,   259,   274,   279,   287,   295,   316,   330,   331,
     333,   374,   539,   403,     5,     4,   220,   228,   229,   265,
     379,   402,   389,   399,   389,   399,     5,   389,    40,   118,
     389,   579,   391,   389,   399,   401,   578,   389,   406,   389,
       4,   400,    56,    94,   152,   272,   583,     4,     4,   389,
       4,   162,   287,   584,     5,   399,     4,    40,   118,   389,
     594,   389,   102,    63,   129,   167,   168,   272,   303,   596,
     129,   615,    63,   125,   129,   167,   168,   172,   213,   268,
     272,   299,   303,   315,   597,   598,    63,   129,   303,   614,
       5,     4,    34,   114,   226,   588,    68,   391,   420,    68,
     391,   421,    68,   391,   422,    12,   133,   210,   587,   389,
      18,   227,   311,   391,   418,     4,   389,   250,   389,   423,
     389,   299,     4,   389,   389,     4,   251,   325,   624,     4,
     318,   622,     4,   318,   623,     4,   406,   134,   389,   627,
     389,   389,     4,     5,   389,    11,   389,   389,   389,    30,
      99,   178,   276,   282,   405,   405,     4,   220,   389,   389,
       4,     4,     4,   389,   389,   389,   389,   389,   389,     4,
     389,     4,   389,     4,     4,     5,     5,   399,     5,   389,
     389,   395,   397,   397,   399,   389,   389,   389,   389,   389,
     389,   389,   399,   401,   398,   389,   389,   398,   389,     5,
     298,   109,   208,   459,   214,   276,   462,   187,    82,   191,
     276,   463,   150,   195,   444,   444,     4,   466,     4,   468,
     214,   284,   470,   196,   471,   187,   406,   389,   389,   399,
     399,   406,   406,   406,   399,   406,   389,   399,     4,   484,
       4,   401,   482,   219,     4,   181,   345,   483,   219,   399,
       4,   143,   325,   486,     5,     5,   456,     4,   219,   145,
     273,   392,   389,     4,   490,   490,   490,   490,     4,     5,
      62,    68,   121,   140,   155,   162,   170,   232,   252,   257,
     259,   286,   287,   295,   316,   374,   548,   401,   209,   209,
      68,   500,    68,   501,    68,   502,    18,   227,   311,   498,
     250,   503,   389,     5,   457,   251,   505,   400,   406,     5,
     399,   399,   399,   399,     4,     4,     4,   391,     4,     4,
     219,   389,   403,     5,   389,   391,    13,    14,    63,   211,
     212,   292,   303,   304,   338,    91,    91,    91,     5,     5,
      13,    14,    63,   211,   212,   292,   303,   304,   308,   338,
      91,    91,   172,    91,   172,   172,   177,   400,   525,   530,
      91,   172,     5,   523,     4,     4,    13,    63,   211,   292,
     303,   338,     5,     5,     4,   389,   400,    20,    21,    22,
      50,    51,    54,    57,    64,    68,    78,    79,    86,    87,
     104,   112,   116,   117,   120,   140,   162,   191,   218,   250,
     252,   258,   259,   274,   275,   286,   287,   316,   318,   331,
     333,   340,   374,    68,    84,    93,   104,   140,   162,   218,
     259,   287,   331,   333,     4,    30,   176,   237,   264,   542,
       5,    65,   111,   261,   277,   278,   376,   377,   547,   104,
     540,    16,   287,   545,    40,   118,   215,   546,     4,     5,
      16,   236,   326,   389,   287,   547,   555,   135,   547,   556,
      36,    40,   118,   144,   215,   325,   389,   557,   399,   391,
      96,   104,   112,   130,   137,   162,   173,   218,   226,   274,
     287,   305,   560,    40,   118,   215,     5,   287,   317,   564,
      16,   132,   185,   236,   326,   565,   318,   391,   566,     5,
     104,   112,   334,    16,    16,     4,   389,   389,   389,   389,
     389,   389,   406,   389,   389,   398,   389,     4,   406,     4,
      40,   118,   215,   293,   585,    40,   118,   215,   293,   586,
       4,   102,     5,     5,    91,    91,    91,     4,     5,     5,
      91,     5,    91,   172,    91,   172,   598,    63,   129,   172,
     303,   602,    63,   129,   303,   613,    91,   172,    63,   129,
     303,   600,     4,    63,   129,   303,   599,     5,     5,     4,
       4,     5,     5,     5,   389,   311,   391,   419,   389,   389,
     389,   389,     4,   389,   619,   389,   389,   400,    66,     4,
       4,     5,     4,     4,     5,     4,   102,   289,   407,   389,
     389,    11,     5,    11,   389,   389,    11,     4,    11,     4,
       4,   389,   389,   389,   389,   389,     4,   389,     5,   389,
       4,   391,     4,     4,   406,   399,   406,   389,   389,   389,
     399,   389,   398,   389,   389,     5,     5,   389,   401,   389,
     399,   389,   406,   406,   407,   407,   407,   406,   398,   389,
     406,   389,   392,   485,   181,     5,     4,   406,   172,   172,
       4,     5,     4,     4,   389,   480,    38,    38,   389,    20,
      21,    22,    50,    51,    54,    61,    64,    68,    78,    79,
      86,   116,   117,   120,   140,   162,   191,   201,   250,   258,
     259,   275,   287,   316,   318,   329,   340,   374,    68,   140,
     170,   259,   316,    30,   176,   237,   264,   549,   389,   232,
     389,   550,    16,   389,   286,   560,   286,   232,   389,   551,
     318,   552,    16,   103,   389,   311,   499,   389,     5,   407,
       4,     4,    58,   399,     4,     5,   516,   389,     5,     5,
       5,   172,   204,   411,   411,   180,   294,   409,     4,     4,
       5,     5,   520,   520,   520,   300,   300,     5,     5,     5,
      16,   174,   410,   410,   409,     4,     4,   409,     5,     5,
     524,     5,   531,     5,   532,   531,   532,   177,   373,   400,
     528,     5,   527,     5,   531,   532,     5,    13,    14,    63,
     211,   212,   292,   303,   304,   308,   338,     4,     4,     5,
       5,   411,   409,     4,     5,     5,   406,    86,   164,   248,
     249,   263,   309,   414,     6,     7,   389,   394,   264,   264,
     264,   112,    40,    68,   104,   112,   118,   140,   162,   180,
     218,   259,   274,   287,   318,   331,   333,   334,   374,   541,
     264,     5,    27,   182,   264,   314,   150,   112,    22,    51,
      54,    86,   117,   120,   252,   286,    22,    51,    54,    57,
      86,   117,   120,   252,   286,   316,    40,   264,   264,   112,
       5,   236,    27,   250,    36,   144,   325,   389,   290,   298,
     270,   399,   560,    40,   141,   250,   314,   270,   236,     5,
       5,   274,    27,   250,     4,     5,     5,   236,    36,   144,
     325,   389,   560,   236,   391,     4,     4,   389,     5,   338,
      22,    27,    50,    51,    53,    54,    64,    78,    79,    86,
      89,   107,   116,   117,   120,   191,   252,   258,   275,   286,
     317,   318,   340,   385,   543,   389,   389,   389,   389,   389,
     547,   399,     5,     4,     5,   389,   389,   399,   389,   391,
     389,   389,   547,     5,     5,   389,   389,   391,     5,    16,
       5,     5,   389,   389,   398,   389,   389,     4,   389,   389,
     118,   389,   389,   118,     4,    42,    43,   189,   190,   221,
     416,   416,    63,   129,   303,   610,    63,   129,   303,   607,
      63,   129,   303,   604,   416,     5,    63,   129,   303,   601,
      63,   129,   303,   612,    63,   129,   303,   611,    63,   129,
     303,   609,    63,   129,   303,   608,     5,     5,    63,   129,
     303,   603,     4,     5,     5,     4,    63,   129,   303,   606,
      63,   129,   303,   605,     5,     5,     4,     5,     5,     4,
     416,   416,   416,   389,   389,   389,   389,     4,   399,   389,
     406,   400,     5,     5,    11,   389,   399,   401,   389,    11,
     389,   389,   389,    61,   389,     4,   389,   389,     4,   389,
     389,     5,   389,     5,   389,    47,   301,   445,     5,   391,
     391,   406,   389,     4,     4,     4,   406,   399,   389,   389,
     389,   389,   406,   399,   407,   398,   389,     4,   407,   389,
       4,   401,     5,    24,    25,   102,   408,     4,   399,   389,
     389,     4,   389,     5,    86,   164,   248,   249,   263,   309,
     399,   401,   264,   264,   264,    21,   264,   399,   264,    27,
     182,   264,   314,   150,    21,   264,   264,   264,    21,   264,
      27,   186,   250,   186,   290,   298,   186,   250,   322,   560,
     141,   186,   250,   314,     4,   274,    27,   186,   250,   560,
     232,   389,   389,   389,   389,   389,   389,   219,   389,   389,
      20,   260,   508,     4,     4,   389,   411,   411,   411,     4,
     411,   411,   411,    13,    14,    63,   211,   212,   292,   303,
     304,   338,   410,   411,   411,   411,   411,   411,     4,   411,
     411,     4,   410,    13,    14,    63,   211,   212,   292,   303,
     304,   338,     5,    13,    14,    63,   211,   212,   292,   303,
     304,   308,   338,    13,    14,    63,   211,   212,   292,   303,
     304,   338,     5,   526,     5,   529,     5,     5,    13,    14,
      63,   211,   212,   292,   303,   304,   308,   338,     5,    13,
      14,    63,   211,   212,   292,   303,   304,   308,   338,   300,
       5,     5,     5,   410,   410,   409,     4,     4,   409,     5,
       4,     4,   411,   411,     4,   411,   411,     5,   391,   399,
     401,     5,   389,   389,     5,   389,     5,   394,   112,   218,
     274,   112,   218,   274,     5,   389,   391,     5,   389,   399,
     391,     5,   394,   264,   264,    21,   264,    21,   264,   264,
      21,   264,   342,   342,     4,     4,     4,   541,     4,     4,
       4,   342,   342,     4,     5,     4,   389,     5,   389,     5,
     394,   391,   399,   399,   389,    27,    50,    53,    64,    89,
     107,   385,   412,     4,   389,   406,   391,     5,   399,   399,
     389,   391,   391,   399,   399,   389,   391,   389,     5,   389,
     250,   250,   389,   389,   250,   389,   250,   389,   389,   553,
     561,   389,   250,   250,   389,   389,   389,   389,   389,   389,
     389,   389,     5,   338,   389,   544,   389,   389,   250,   389,
     389,   389,   389,   399,   406,     5,     4,     4,   389,   389,
     406,   389,   389,   389,   399,   547,   389,   389,     5,     4,
     389,   389,   389,   389,     5,     5,     4,     5,     5,     4,
       5,     5,     4,   416,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     5,     5,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     4,     5,     5,
       4,   389,   389,   389,   389,   406,   389,   399,   401,   389,
     406,   389,   389,   389,   389,   389,     5,   389,   389,   389,
       4,   389,   389,     5,   389,     5,   389,     4,   399,   389,
     406,   196,   404,   389,   404,   407,   406,   399,   389,   389,
       4,   389,   399,   399,   389,   392,     5,     5,     5,     5,
       5,   399,   406,   399,   399,   399,   399,   401,   399,   406,
     399,   399,   399,   401,   399,   399,   399,   399,   401,   399,
     399,   399,   389,   399,   399,   399,   399,   399,   399,   399,
     389,   389,     4,   389,     5,   389,   411,     5,     5,     5,
     409,     4,     4,     5,   411,   410,     4,   411,     5,     5,
       5,   410,   410,   409,     4,     4,     5,   300,     5,     5,
       5,   410,   410,   409,     4,     4,   409,     5,     5,     5,
       5,   410,   410,   409,     4,     4,     5,    13,    14,    63,
     211,   212,   292,   303,   304,   338,    13,    14,    63,   211,
     212,   292,   303,   304,   338,    13,    14,    63,   211,   212,
     292,   303,   304,   338,   300,     5,     5,     5,   410,   410,
     409,     4,     4,   409,     5,   300,     5,     5,     5,   410,
     410,   409,     4,     4,   409,     5,   410,     4,     4,   410,
       4,     4,   411,     5,   406,   399,   389,   389,   399,   389,
       5,   394,     5,   399,   391,     5,   399,   406,     5,   394,
     389,   389,   389,   389,   389,   389,   389,   389,   389,     4,
       4,     5,     4,     4,   389,   399,   389,     5,   394,   391,
     406,   406,   389,   398,   406,   406,   389,   406,   406,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,    57,
      68,    97,   140,   316,   318,   374,   558,   559,   560,   572,
     573,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   399,     5,   389,   389,   389,   389,     4,
       4,   406,   407,     5,     5,   398,   389,     4,   406,   399,
       4,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     394,   389,   389,   389,   406,   389,   398,   389,   389,    11,
       5,     5,   389,   389,   389,   389,     5,   389,     4,   389,
       4,   406,   399,   389,   389,   407,   408,   389,     5,   389,
     399,   401,     5,     5,     5,     5,     5,   406,   408,   408,
     408,   406,   408,   407,   408,   408,   406,   408,   408,   408,
     406,   408,   408,   406,   399,   408,   406,   408,   408,   406,
     408,   406,     4,   399,   401,     5,   389,     4,   411,   410,
       4,   410,   410,     4,     4,   410,     4,   410,     5,     5,
       5,   410,   410,   409,     4,     4,     5,     5,     5,     5,
     410,   410,   409,     4,     4,     5,     5,     5,     5,   410,
     410,   409,     4,     4,     5,   410,   411,   411,   411,   411,
     411,     4,   411,   411,     4,   410,   410,   411,   411,   411,
     411,   411,     4,   411,   411,     4,   410,   410,     4,     4,
       4,   400,   408,     4,   399,   408,   389,   399,     4,   408,
     408,   399,     4,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   399,   408,   389,   399,     4,   398,
     398,   399,   398,   398,   399,   399,   398,   398,   389,   389,
     389,   389,   389,   389,   394,   389,   389,   389,   386,   386,
     386,   386,   386,   386,   386,   559,   386,   394,   389,   389,
     389,   389,   394,   389,   389,   389,   389,   389,   389,   406,
     389,   338,   393,   394,   389,   389,   407,   391,   399,   399,
     407,   406,     4,   389,   398,   389,    61,   389,     5,     5,
       4,     4,   389,   389,     4,   389,     4,   404,   408,     5,
     406,     4,     5,     4,     5,   399,     5,   407,   408,   407,
     407,   407,     5,   406,     4,   389,   411,   410,   410,     4,
     410,   411,   411,   411,   411,   411,     4,   411,   411,   410,
     411,   411,   411,   411,   411,     4,   411,   411,   410,   411,
     411,   411,   411,   411,     4,   411,   411,   410,   411,   410,
       4,   411,   411,   410,     4,   411,   410,   406,   399,   408,
       4,   406,   389,   406,   389,   389,   389,   408,     4,   406,
     389,   398,   408,   389,   398,   408,   408,   399,   389,     4,
     413,   413,   389,   389,   413,   394,   413,   561,   399,   541,
       5,     4,     5,     5,     5,     4,   391,   394,   413,   413,
     389,   389,   394,   389,   389,   389,   389,   389,   398,   389,
       5,   561,   389,   413,   391,   562,   563,   406,   406,   391,
     407,     4,     5,   389,     5,     4,     4,     4,     4,     4,
       4,   389,     4,    32,   205,   312,   452,   399,     5,    32,
     205,   312,   415,   399,     4,   452,   389,   410,   410,   411,
     410,   411,   410,   411,   411,   410,   411,   410,   389,   408,
     399,   399,   389,   399,   389,   399,   399,   389,   399,   408,
       4,   561,   561,   393,   389,   561,     4,   561,   406,     5,
       4,     4,   561,   561,   393,   389,     4,   561,   561,   389,
     399,   561,   561,   561,   562,   569,   570,   560,   567,   568,
     391,     4,     5,     5,     4,     4,     4,   208,   336,   381,
     389,   443,   452,     4,   399,   452,     4,   411,   411,   411,
     411,   411,   400,   408,   408,   389,   408,     4,   408,   408,
     389,   408,   389,   561,   561,     4,   389,   561,     5,   389,
     561,     4,   389,   561,   406,   569,   571,   572,   386,   568,
       5,     5,   389,   444,   389,   444,   406,   408,     4,   399,
     401,     4,   394,   393,   389,   389,   393,   389,   399,   572,
     391,     5,     5,   389,   389,   389,   389,   415,     5,   399,
     401,   406,   399,   401,   561,   389,     4,   561,   389,   408,
       5,     5,   389,     5,   389,   406,   406,     4,   561,     4,
       5,     5,     5,   393,   393,   561,   561,   561
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, frFlexLexer* ll)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    frFlexLexer* ll;
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, Base* fr, frFlexLexer* ll)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, fr, ll)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    Base* fr;
    frFlexLexer* ll;
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
yy_reduce_print (YYSTYPE *yyvsp, int yyrule, Base* fr, frFlexLexer* ll)
#else
static void
yy_reduce_print (yyvsp, yyrule, fr, ll)
    YYSTYPE *yyvsp;
    int yyrule;
    Base* fr;
    frFlexLexer* ll;
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, Base* fr, frFlexLexer* ll)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, fr, ll)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    Base* fr;
    frFlexLexer* ll;
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
int yyparse (Base* fr, frFlexLexer* ll);
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
yyparse (Base* fr, frFlexLexer* ll)
#else
int
yyparse (fr, ll)
    Base* fr;
    frFlexLexer* ll;
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
        case 4:
#line 494 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 495 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 497 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 498 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 500 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 507 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 513 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 514 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 515 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 519 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 528 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 532 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 535 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 50:
#line 540 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 52:
#line 542 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 54:
#line 544 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 56:
#line 546 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 61:
#line 553 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 62:
#line 554 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 63:
#line 557 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 558 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 559 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 560 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 561 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 562 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 563 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 564 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 565 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 566 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 567 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 570 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 75:
#line 572 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 573 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 574 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 575 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 577 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 578 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 579 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 580 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 583 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 84:
#line 584 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 585 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 86:
#line 586 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 87:
#line 587 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 88:
#line 590 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 89:
#line 591 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 594 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 91:
#line 595 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 596 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 93:
#line 599 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 602 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 605 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 609 "frame/parser.Y"
    {
	  Vector r;
	  if (currentSky == Coord::GALACTIC || currentSky == Coord::ECLIPTIC)
	    r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  else
	    r = Vector((yyvsp[(1) - (2)].real)*360./24.,(yyvsp[(2) - (2)].real));

	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 97:
#line 621 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 98:
#line 628 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 635 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 100:
#line 642 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 101:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 102:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 103:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 104:
#line 646 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 105:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 106:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 107:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 108:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 109:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 110:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 111:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 112:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 113:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 114:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 115:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 116:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 117:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 118:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 119:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 120:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 121:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 122:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 123:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 124:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 125:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 126:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 127:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 128:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 129:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 130:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 131:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 132:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 133:
#line 679 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 134:
#line 680 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 135:
#line 683 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 684 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 137:
#line 685 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 138:
#line 686 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 139:
#line 687 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 140:
#line 688 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 141:
#line 691 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 142:
#line 692 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 693 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 144:
#line 694 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 145:
#line 695 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 146:
#line 696 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 147:
#line 697 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 148:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 149:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 150:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 151:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 152:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 153:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 154:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 155:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 156:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 157:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 158:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 159:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 160:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 161:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 162:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 163:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 164:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 165:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 166:
#line 720 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 167:
#line 721 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 722 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 169:
#line 723 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 170:
#line 724 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 171:
#line 727 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 172:
#line 728 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 173:
#line 729 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 730 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 175:
#line 731 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 732 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 177:
#line 733 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 178:
#line 734 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 179:
#line 737 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 180:
#line 738 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 739 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 182:
#line 742 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 183:
#line 743 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 744 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 185:
#line 745 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 186:
#line 748 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 187:
#line 749 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 750 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 189:
#line 753 "frame/parser.Y"
    {;}
    break;

  case 190:
#line 754 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 755 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 758 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 193:
#line 759 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 760 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 195:
#line 763 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 196:
#line 764 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 197:
#line 765 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 198:
#line 766 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 199:
#line 767 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 200:
#line 768 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 201:
#line 769 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 202:
#line 770 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 203:
#line 773 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 204:
#line 774 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 205:
#line 777 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 206:
#line 778 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 207:
#line 779 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 208:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 209:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 210:
#line 782 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 211:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 212:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 213:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 214:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 215:
#line 791 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 216:
#line 792 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 217:
#line 793 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 218:
#line 794 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 219:
#line 795 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 220:
#line 796 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 225:
#line 803 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 226:
#line 804 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 228:
#line 806 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 229:
#line 807 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 230:
#line 809 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 231:
#line 812 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 232:
#line 813 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 233:
#line 814 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 235:
#line 818 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 236:
#line 819 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 237:
#line 822 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 238:
#line 823 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 239:
#line 826 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 240:
#line 827 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 241:
#line 830 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 242:
#line 831 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 243:
#line 834 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 244:
#line 836 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 246:
#line 840 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 247:
#line 841 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 250:
#line 844 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 252:
#line 846 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 253:
#line 849 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 254:
#line 850 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 255:
#line 853 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 854 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 257:
#line 856 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 258:
#line 858 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 259:
#line 859 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 860 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 261:
#line 862 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 262:
#line 864 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 263:
#line 867 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 264:
#line 868 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 265:
#line 871 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 266:
#line 873 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 267:
#line 876 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 268:
#line 878 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 269:
#line 881 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 270:
#line 885 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 271:
#line 886 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 273:
#line 890 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 274:
#line 891 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 275:
#line 892 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 279:
#line 898 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 280:
#line 899 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 282:
#line 902 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 283:
#line 907 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 284:
#line 908 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 285:
#line 911 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 286:
#line 912 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 287:
#line 913 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 288:
#line 914 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 289:
#line 915 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 290:
#line 918 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 291:
#line 919 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 292:
#line 920 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 293:
#line 921 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 294:
#line 924 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 295:
#line 926 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 296:
#line 931 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 297:
#line 936 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 298:
#line 943 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 299:
#line 945 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 300:
#line 947 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 301:
#line 949 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 302:
#line 951 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 306:
#line 958 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 307:
#line 960 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 308:
#line 962 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 309:
#line 964 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 310:
#line 966 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 311:
#line 968 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 312:
#line 969 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 318:
#line 980 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 319:
#line 983 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 320:
#line 986 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 321:
#line 992 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 322:
#line 997 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 323:
#line 1000 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 324:
#line 1001 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 325:
#line 1004 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 326:
#line 1005 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 327:
#line 1007 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 328:
#line 1013 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 329:
#line 1014 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 330:
#line 1015 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 331:
#line 1016 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 332:
#line 1019 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 333:
#line 1020 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 334:
#line 1023 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 335:
#line 1024 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 336:
#line 1027 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 337:
#line 1028 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 338:
#line 1032 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 339:
#line 1034 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 340:
#line 1037 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 341:
#line 1039 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 342:
#line 1042 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 344:
#line 1044 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 345:
#line 1045 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 346:
#line 1046 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 347:
#line 1049 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 348:
#line 1051 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 349:
#line 1052 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 350:
#line 1053 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 351:
#line 1054 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 352:
#line 1058 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 353:
#line 1060 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 354:
#line 1061 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 355:
#line 1062 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 356:
#line 1065 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 357:
#line 1067 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 358:
#line 1069 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 359:
#line 1071 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 360:
#line 1074 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 361:
#line 1077 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 362:
#line 1078 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 363:
#line 1079 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 364:
#line 1080 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 365:
#line 1083 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 366:
#line 1084 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 367:
#line 1087 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 368:
#line 1090 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 369:
#line 1091 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 383:
#line 1105 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 386:
#line 1108 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 387:
#line 1109 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 393:
#line 1115 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 394:
#line 1116 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 399:
#line 1121 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 400:
#line 1122 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 402:
#line 1125 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 404:
#line 1127 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 406:
#line 1129 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 408:
#line 1131 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 409:
#line 1133 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 412:
#line 1136 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 413:
#line 1140 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 414:
#line 1142 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 415:
#line 1146 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 416:
#line 1148 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 417:
#line 1151 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 418:
#line 1152 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 419:
#line 1153 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 420:
#line 1154 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 421:
#line 1155 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 422:
#line 1156 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 424:
#line 1158 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 425:
#line 1161 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 426:
#line 1162 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 427:
#line 1163 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 428:
#line 1166 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 429:
#line 1169 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 430:
#line 1171 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 431:
#line 1173 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 432:
#line 1174 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 433:
#line 1175 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 435:
#line 1177 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 437:
#line 1180 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 438:
#line 1186 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 439:
#line 1187 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 440:
#line 1190 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 441:
#line 1191 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 442:
#line 1192 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 443:
#line 1195 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 444:
#line 1196 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 446:
#line 1202 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 447:
#line 1204 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 448:
#line 1206 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 449:
#line 1209 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 451:
#line 1211 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 452:
#line 1215 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 453:
#line 1219 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 455:
#line 1221 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 456:
#line 1222 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 457:
#line 1223 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 458:
#line 1224 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 459:
#line 1225 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 461:
#line 1227 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 462:
#line 1228 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 463:
#line 1231 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 464:
#line 1232 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 465:
#line 1233 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 466:
#line 1236 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 467:
#line 1237 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 468:
#line 1241 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 469:
#line 1243 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 470:
#line 1251 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 471:
#line 1253 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 472:
#line 1255 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 473:
#line 1258 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1260 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 475:
#line 1261 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 476:
#line 1264 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 477:
#line 1267 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 478:
#line 1269 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 479:
#line 1273 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 480:
#line 1275 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 481:
#line 1278 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 482:
#line 1282 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 483:
#line 1283 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 484:
#line 1285 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 485:
#line 1288 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 486:
#line 1289 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 488:
#line 1293 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 489:
#line 1294 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 490:
#line 1295 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 491:
#line 1298 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 492:
#line 1300 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 493:
#line 1301 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 495:
#line 1303 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 499:
#line 1307 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 500:
#line 1308 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 501:
#line 1309 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 502:
#line 1311 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 504:
#line 1313 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 505:
#line 1316 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 506:
#line 1318 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 507:
#line 1320 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 508:
#line 1321 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 509:
#line 1322 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 510:
#line 1323 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 511:
#line 1326 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 512:
#line 1327 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 513:
#line 1331 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 514:
#line 1333 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 515:
#line 1336 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 516:
#line 1339 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 517:
#line 1340 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 518:
#line 1342 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 519:
#line 1344 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 520:
#line 1346 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 521:
#line 1349 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 522:
#line 1350 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 523:
#line 1351 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 524:
#line 1354 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 525:
#line 1355 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 526:
#line 1356 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 527:
#line 1357 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 528:
#line 1358 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 529:
#line 1359 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 530:
#line 1362 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 531:
#line 1363 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 532:
#line 1364 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 533:
#line 1365 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 534:
#line 1366 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 535:
#line 1367 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 536:
#line 1368 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 537:
#line 1371 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 538:
#line 1372 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 539:
#line 1375 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 540:
#line 1378 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 541:
#line 1379 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 542:
#line 1380 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 543:
#line 1383 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 544:
#line 1386 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 545:
#line 1387 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 546:
#line 1388 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 547:
#line 1391 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 548:
#line 1392 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 549:
#line 1393 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 550:
#line 1396 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 551:
#line 1397 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 552:
#line 1398 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 553:
#line 1399 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 554:
#line 1400 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 555:
#line 1401 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 560:
#line 1408 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 561:
#line 1409 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 563:
#line 1411 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 564:
#line 1414 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 565:
#line 1415 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 566:
#line 1416 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 568:
#line 1420 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 569:
#line 1421 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 570:
#line 1424 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 571:
#line 1425 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 572:
#line 1428 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 573:
#line 1429 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 574:
#line 1432 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 575:
#line 1433 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 576:
#line 1436 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 577:
#line 1437 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 578:
#line 1440 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 580:
#line 1442 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 581:
#line 1445 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 582:
#line 1446 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 584:
#line 1450 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 585:
#line 1454 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 586:
#line 1457 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 587:
#line 1464 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 588:
#line 1465 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 589:
#line 1468 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 590:
#line 1469 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 593:
#line 1472 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 594:
#line 1473 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 595:
#line 1474 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 596:
#line 1475 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 598:
#line 1477 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 599:
#line 1478 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 600:
#line 1479 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 602:
#line 1481 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 603:
#line 1482 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 604:
#line 1483 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 605:
#line 1484 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 607:
#line 1488 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 608:
#line 1491 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 609:
#line 1492 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 610:
#line 1495 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 611:
#line 1496 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 612:
#line 1497 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 613:
#line 1498 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 614:
#line 1501 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 615:
#line 1502 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 616:
#line 1503 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 617:
#line 1504 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 618:
#line 1507 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 619:
#line 1508 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 620:
#line 1509 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 621:
#line 1510 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 622:
#line 1511 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 623:
#line 1512 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 624:
#line 1515 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 625:
#line 1516 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 626:
#line 1517 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 629:
#line 1521 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 630:
#line 1522 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 631:
#line 1525 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 632:
#line 1528 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 633:
#line 1529 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 634:
#line 1533 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 635:
#line 1535 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 636:
#line 1536 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 643:
#line 1548 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1550 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1552 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1553 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 647:
#line 1555 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 648:
#line 1557 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1559 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1561 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1563 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1569 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 656:
#line 1570 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 657:
#line 1571 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 658:
#line 1572 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 659:
#line 1573 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 660:
#line 1575 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 661:
#line 1576 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1577 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1578 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 664:
#line 1581 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 665:
#line 1585 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1587 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 667:
#line 1589 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1591 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1593 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1595 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1597 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 672:
#line 1599 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 673:
#line 1602 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1604 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1606 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 685:
#line 1618 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1619 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1620 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1621 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1622 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 690:
#line 1623 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1625 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 692:
#line 1627 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 693:
#line 1628 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1629 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1630 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 696:
#line 1633 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1634 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1635 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1636 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1637 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1639 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 702:
#line 1640 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1641 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1642 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 710:
#line 1653 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1656 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1659 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 713:
#line 1662 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1668 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 716:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1674 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1677 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 719:
#line 1682 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1685 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1688 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 722:
#line 1691 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 723:
#line 1694 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 724:
#line 1697 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1700 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 726:
#line 1703 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 727:
#line 1706 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 728:
#line 1709 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 729:
#line 1712 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 730:
#line 1717 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 731:
#line 1720 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 732:
#line 1723 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 733:
#line 1726 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 734:
#line 1729 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 735:
#line 1732 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 736:
#line 1735 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1738 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 738:
#line 1741 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 739:
#line 1746 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1748 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1750 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1752 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1754 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1756 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 745:
#line 1761 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1763 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1765 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 748:
#line 1769 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 749:
#line 1772 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 750:
#line 1775 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 751:
#line 1778 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1781 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1784 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1787 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 755:
#line 1790 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 756:
#line 1793 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1796 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1799 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 759:
#line 1803 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 760:
#line 1804 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 761:
#line 1805 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 762:
#line 1806 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 763:
#line 1807 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 764:
#line 1808 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 765:
#line 1810 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 766:
#line 1812 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 767:
#line 1813 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 768:
#line 1814 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 769:
#line 1815 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 770:
#line 1818 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 771:
#line 1819 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 772:
#line 1820 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 773:
#line 1821 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 774:
#line 1822 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 775:
#line 1824 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 776:
#line 1825 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 777:
#line 1826 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 778:
#line 1827 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 779:
#line 1831 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1833 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1834 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 782:
#line 1836 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1838 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1840 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1843 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 786:
#line 1844 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 787:
#line 1847 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 788:
#line 1848 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 789:
#line 1849 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 790:
#line 1852 "frame/parser.Y"
    {;}
    break;

  case 791:
#line 1855 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 792:
#line 1856 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 793:
#line 1857 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 794:
#line 1858 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 795:
#line 1859 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 796:
#line 1860 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 797:
#line 1861 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 798:
#line 1865 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 800:
#line 1873 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 801:
#line 1874 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 802:
#line 1876 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 803:
#line 1878 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 804:
#line 1879 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 805:
#line 1880 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 807:
#line 1881 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 810:
#line 1884 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 811:
#line 1885 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 812:
#line 1887 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 813:
#line 1889 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 814:
#line 1891 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 815:
#line 1894 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1896 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 817:
#line 1897 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 818:
#line 1899 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 819:
#line 1902 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 820:
#line 1905 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 821:
#line 1909 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 822:
#line 1912 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 823:
#line 1915 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 824:
#line 1918 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 825:
#line 1922 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 826:
#line 1926 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 827:
#line 1931 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 828:
#line 1935 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 829:
#line 1937 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 830:
#line 1938 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 831:
#line 1940 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 832:
#line 1942 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 833:
#line 1944 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 834:
#line 1946 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 835:
#line 1947 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 836:
#line 1949 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 837:
#line 1951 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 838:
#line 1954 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 839:
#line 1958 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 840:
#line 1962 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 841:
#line 1964 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 842:
#line 1966 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 843:
#line 1968 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 844:
#line 1970 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 845:
#line 1972 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 846:
#line 1974 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 847:
#line 1976 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 848:
#line 1978 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 849:
#line 1980 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 850:
#line 1982 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 851:
#line 1984 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 852:
#line 1986 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 853:
#line 1988 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 854:
#line 1989 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 855:
#line 1991 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 856:
#line 1993 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 857:
#line 1994 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 858:
#line 1995 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 859:
#line 1997 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 860:
#line 1999 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 861:
#line 2000 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 862:
#line 2001 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 863:
#line 2002 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 864:
#line 2004 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 865:
#line 2006 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 866:
#line 2010 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 867:
#line 2013 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 868:
#line 2016 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 869:
#line 2020 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 870:
#line 2024 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 871:
#line 2029 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 872:
#line 2033 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 873:
#line 2034 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 874:
#line 2035 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 875:
#line 2037 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 876:
#line 2039 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 877:
#line 2043 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 878:
#line 2044 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 879:
#line 2045 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 880:
#line 2047 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 881:
#line 2050 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 882:
#line 2053 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 883:
#line 2056 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 884:
#line 2057 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 885:
#line 2061 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 886:
#line 2065 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 887:
#line 2067 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 888:
#line 2068 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 889:
#line 2070 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 890:
#line 2073 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 891:
#line 2076 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 892:
#line 2077 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 893:
#line 2079 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 894:
#line 2080 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 895:
#line 2081 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 896:
#line 2083 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 897:
#line 2084 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 898:
#line 2086 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 899:
#line 2089 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 900:
#line 2092 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 901:
#line 2094 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 902:
#line 2095 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 906:
#line 2100 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 907:
#line 2101 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 908:
#line 2103 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 909:
#line 2105 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 910:
#line 2107 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 911:
#line 2108 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 915:
#line 2114 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 916:
#line 2115 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 917:
#line 2116 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 918:
#line 2117 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 919:
#line 2118 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 920:
#line 2119 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 921:
#line 2120 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 922:
#line 2121 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 923:
#line 2122 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 924:
#line 2123 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 925:
#line 2125 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 926:
#line 2127 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 927:
#line 2128 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 928:
#line 2129 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 929:
#line 2130 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 930:
#line 2131 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 931:
#line 2133 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 932:
#line 2134 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 933:
#line 2135 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 934:
#line 2136 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 935:
#line 2137 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 936:
#line 2139 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 937:
#line 2140 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 938:
#line 2141 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 939:
#line 2142 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 940:
#line 2143 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 941:
#line 2144 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 942:
#line 2147 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 943:
#line 2148 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 944:
#line 2149 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 945:
#line 2150 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 946:
#line 2151 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 947:
#line 2152 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 948:
#line 2153 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 949:
#line 2154 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 950:
#line 2155 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 951:
#line 2156 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 952:
#line 2157 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 953:
#line 2158 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 954:
#line 2159 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 955:
#line 2160 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 956:
#line 2161 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 957:
#line 2162 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 958:
#line 2163 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 959:
#line 2164 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 960:
#line 2165 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 961:
#line 2166 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 962:
#line 2167 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 963:
#line 2170 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 964:
#line 2171 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 965:
#line 2172 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 966:
#line 2173 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 967:
#line 2174 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 968:
#line 2176 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 969:
#line 2186 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 970:
#line 2194 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 971:
#line 2203 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 972:
#line 2211 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 973:
#line 2218 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 974:
#line 2225 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 975:
#line 2233 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 976:
#line 2241 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 977:
#line 2246 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 978:
#line 2251 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 979:
#line 2256 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 980:
#line 2261 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 981:
#line 2266 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 982:
#line 2271 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 983:
#line 2276 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 984:
#line 2285 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 985:
#line 2295 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 986:
#line 2305 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 987:
#line 2314 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 988:
#line 2322 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 989:
#line 2332 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 990:
#line 2342 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 991:
#line 2352 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 992:
#line 2364 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 993:
#line 2373 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 995:
#line 2381 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 996:
#line 2383 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 997:
#line 2385 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 998:
#line 2390 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 999:
#line 2393 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1000:
#line 2394 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1001:
#line 2395 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1002:
#line 2402 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1003:
#line 2404 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1004:
#line 2405 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1005:
#line 2408 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1006:
#line 2409 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1007:
#line 2410 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1008:
#line 2411 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1009:
#line 2412 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1010:
#line 2413 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1011:
#line 2414 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1013:
#line 2418 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1014:
#line 2419 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1015:
#line 2420 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1016:
#line 2421 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1017:
#line 2422 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1018:
#line 2425 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1019:
#line 2427 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1020:
#line 2429 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1021:
#line 2431 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1022:
#line 2433 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1023:
#line 2435 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1024:
#line 2437 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1025:
#line 2438 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1026:
#line 2439 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1027:
#line 2441 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1028:
#line 2443 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1029:
#line 2446 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1030:
#line 2448 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1031:
#line 2449 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1032:
#line 2450 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1033:
#line 2452 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1034:
#line 2454 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1035:
#line 2457 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1036:
#line 2460 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1037:
#line 2461 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1038:
#line 2462 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1039:
#line 2463 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1040:
#line 2465 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1041:
#line 2466 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1042:
#line 2467 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1043:
#line 2468 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1044:
#line 2469 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1045:
#line 2471 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1046:
#line 2473 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1047:
#line 2475 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1048:
#line 2477 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1049:
#line 2479 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1050:
#line 2480 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1051:
#line 2482 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1052:
#line 2484 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1053:
#line 2486 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1054:
#line 2487 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1055:
#line 2488 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1056:
#line 2490 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1057:
#line 2492 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1058:
#line 2495 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1059:
#line 2498 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1060:
#line 2499 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1061:
#line 2501 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1062:
#line 2504 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1063:
#line 2507 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1064:
#line 2508 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1065:
#line 2509 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1066:
#line 2510 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1067:
#line 2512 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1068:
#line 2514 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1069:
#line 2516 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1070:
#line 2517 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1071:
#line 2519 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1072:
#line 2520 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1073:
#line 2521 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1074:
#line 2522 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1075:
#line 2523 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1076:
#line 2525 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1077:
#line 2527 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1078:
#line 2529 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1079:
#line 2531 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1081:
#line 2533 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1082:
#line 2534 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1083:
#line 2536 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1084:
#line 2538 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1085:
#line 2539 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1086:
#line 2540 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1088:
#line 2542 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1090:
#line 2546 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1091:
#line 2547 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1092:
#line 2548 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1093:
#line 2549 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1094:
#line 2550 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1095:
#line 2551 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1096:
#line 2553 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1097:
#line 2554 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1098:
#line 2556 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1099:
#line 2559 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1100:
#line 2560 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1101:
#line 2561 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1102:
#line 2562 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1103:
#line 2565 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1104:
#line 2566 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1105:
#line 2569 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1106:
#line 2570 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1107:
#line 2573 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1108:
#line 2574 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1109:
#line 2577 "frame/parser.Y"
    {
	  strncpy(currentFont, "helvetica 10 normal roman", 32);
	  strncpy(currentColor, "green", 16);
	  currentDash[0] = 8;
	  currentDash[1] = 3;
	  currentWidth = 1;
	  strncpy(currentText, "", 80);
	  currentProps = defaultProps;
	  taglist.deleteAll();
	  cblist.deleteAll();
	;}
    break;

  case 1110:
#line 2590 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1111:
#line 2591 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1112:
#line 2595 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1113:
#line 2596 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1114:
#line 2600 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1115:
#line 2601 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1116:
#line 2606 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1117:
#line 2610 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1118:
#line 2615 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1119:
#line 2617 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1120:
#line 2620 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1121:
#line 2622 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1122:
#line 2625 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1123:
#line 2627 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1124:
#line 2630 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1125:
#line 2631 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1126:
#line 2632 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1127:
#line 2633 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1128:
#line 2634 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1129:
#line 2635 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1130:
#line 2637 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1133:
#line 2644 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1134:
#line 2645 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1135:
#line 2646 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1136:
#line 2647 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1137:
#line 2648 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1138:
#line 2649 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1141:
#line 2654 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1142:
#line 2655 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1143:
#line 2656 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1144:
#line 2657 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1145:
#line 2658 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1146:
#line 2659 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1147:
#line 2660 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1148:
#line 2661 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1149:
#line 2662 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1150:
#line 2663 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1151:
#line 2664 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1152:
#line 2665 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1155:
#line 2672 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1156:
#line 2673 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1158:
#line 2677 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1159:
#line 2679 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1160:
#line 2680 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1161:
#line 2683 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1162:
#line 2684 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1163:
#line 2685 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1164:
#line 2686 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1165:
#line 2687 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1166:
#line 2688 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1167:
#line 2691 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1168:
#line 2692 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1171:
#line 2700 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1172:
#line 2703 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1173:
#line 2704 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1177:
#line 2711 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1178:
#line 2714 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1179:
#line 2718 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1180:
#line 2719 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1181:
#line 2720 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1182:
#line 2721 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1183:
#line 2722 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1184:
#line 2723 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1185:
#line 2724 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1186:
#line 2725 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1187:
#line 2726 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1188:
#line 2727 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1189:
#line 2728 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1190:
#line 2729 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2731 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1192:
#line 2732 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1193:
#line 2733 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1194:
#line 2734 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1195:
#line 2735 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1196:
#line 2736 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1197:
#line 2737 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1198:
#line 2738 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1199:
#line 2739 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1200:
#line 2740 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1201:
#line 2741 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1202:
#line 2742 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1203:
#line 2743 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1204:
#line 2744 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1205:
#line 2747 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1206:
#line 2748 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2749 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1208:
#line 2750 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1209:
#line 2751 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2752 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1211:
#line 2753 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2754 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1213:
#line 2760 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1214:
#line 2761 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1215:
#line 2762 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1216:
#line 2763 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1217:
#line 2767 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1218:
#line 2768 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1219:
#line 2770 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1220:
#line 2775 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1222:
#line 2777 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1224:
#line 2779 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2782 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1226:
#line 2784 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1227:
#line 2789 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1228:
#line 2792 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1229:
#line 2793 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1230:
#line 2794 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1231:
#line 2797 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1232:
#line 2799 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1233:
#line 2803 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1234:
#line 2804 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1235:
#line 2808 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2809 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1237:
#line 2810 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2811 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1239:
#line 2817 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1240:
#line 2818 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1241:
#line 2824 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1242:
#line 2825 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1243:
#line 2826 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1244:
#line 2827 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1247:
#line 2835 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1248:
#line 2837 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1249:
#line 2838 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1250:
#line 2839 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1251:
#line 2843 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1252:
#line 2844 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1253:
#line 2845 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1254:
#line 2846 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1255:
#line 2849 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1256:
#line 2850 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1257:
#line 2851 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1258:
#line 2854 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1259:
#line 2855 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1260:
#line 2856 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1261:
#line 2859 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1262:
#line 2860 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1263:
#line 2861 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1264:
#line 2865 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1265:
#line 2868 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1266:
#line 2869 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1267:
#line 2870 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1268:
#line 2871 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1269:
#line 2872 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1270:
#line 2875 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1271:
#line 2876 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1272:
#line 2877 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1273:
#line 2878 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1274:
#line 2879 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1275:
#line 2880 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1276:
#line 2883 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1277:
#line 2884 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1279:
#line 2886 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1280:
#line 2887 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1281:
#line 2890 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1282:
#line 2891 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1283:
#line 2892 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1288:
#line 2899 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1289:
#line 2903 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1290:
#line 2905 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1291:
#line 2907 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1308:
#line 2928 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1309:
#line 2929 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1310:
#line 2930 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1311:
#line 2933 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1312:
#line 2934 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1313:
#line 2935 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1314:
#line 2938 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1315:
#line 2939 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1316:
#line 2940 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1317:
#line 2943 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1318:
#line 2944 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1319:
#line 2945 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1321:
#line 2949 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1322:
#line 2950 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1323:
#line 2951 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1324:
#line 2954 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1325:
#line 2955 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1326:
#line 2956 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1327:
#line 2960 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1328:
#line 2962 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1329:
#line 2964 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1330:
#line 2967 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1331:
#line 2968 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1332:
#line 2969 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1333:
#line 2972 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1334:
#line 2973 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1335:
#line 2974 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1336:
#line 2978 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1337:
#line 2980 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1338:
#line 2982 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1339:
#line 2985 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1340:
#line 2986 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1341:
#line 2987 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1342:
#line 2990 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1343:
#line 2991 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1344:
#line 2992 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1345:
#line 2996 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1346:
#line 2998 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1347:
#line 3000 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1348:
#line 3003 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1349:
#line 3004 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1350:
#line 3005 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1351:
#line 3008 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1352:
#line 3009 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1353:
#line 3010 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1354:
#line 3013 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1355:
#line 3014 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1356:
#line 3015 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1357:
#line 3019 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1358:
#line 3021 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1359:
#line 3023 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1360:
#line 3027 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1361:
#line 3031 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1362:
#line 3033 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1363:
#line 3037 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1364:
#line 3040 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1365:
#line 3041 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1366:
#line 3042 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1367:
#line 3043 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1368:
#line 3046 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1369:
#line 3048 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1370:
#line 3050 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1371:
#line 3053 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1373:
#line 3057 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1374:
#line 3058 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1375:
#line 3059 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1376:
#line 3062 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1377:
#line 3063 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1378:
#line 3067 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1380:
#line 3069 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1383:
#line 3074 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1384:
#line 3075 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1385:
#line 3076 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1386:
#line 3079 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1387:
#line 3080 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1388:
#line 3081 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1389:
#line 3084 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1390:
#line 3086 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1391:
#line 3091 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1392:
#line 3092 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1393:
#line 3095 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1394:
#line 3102 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1395:
#line 3104 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1396:
#line 3106 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1397:
#line 3111 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1399:
#line 3115 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1400:
#line 3116 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1401:
#line 3117 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1402:
#line 3119 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1403:
#line 3121 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1404:
#line 3126 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11789 "frame/parser.C"
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


#line 3130 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

