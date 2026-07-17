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
     PIXMASK_ = 637,
     ZOOM_ = 638
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
#define PIXMASK_ 637
#define ZOOM_ 638




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
#line 923 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 936 "frame/parser.C"

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
#define YYFINAL  401
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5802

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  388
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  243
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1412
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3071

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   638

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
       2,   387,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   385,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   386,   384,
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
     375,   376,   377,   378,   379,   380,   381,   382,   383
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
    2805,  2809,  2815,  2821,  2828,  2834,  2839,  2844,  2854,  2865,
    2877,  2887,  2894,  2901,  2908,  2915,  2922,  2929,  2936,  2943,
    2950,  2958,  2966,  2969,  2974,  2979,  2984,  2989,  2995,  3000,
    3005,  3011,  3017,  3021,  3026,  3031,  3036,  3044,  3054,  3061,
    3072,  3084,  3097,  3107,  3111,  3114,  3118,  3124,  3132,  3137,
    3141,  3145,  3152,  3160,  3168,  3173,  3178,  3188,  3193,  3197,
    3202,  3210,  3218,  3221,  3225,  3229,  3233,  3238,  3241,  3244,
    3249,  3260,  3264,  3266,  3270,  3273,  3276,  3279,  3282,  3286,
    3292,  3297,  3303,  3306,  3309,  3312,  3315,  3319,  3322,  3325,
    3328,  3332,  3335,  3339,  3344,  3348,  3352,  3359,  3364,  3367,
    3371,  3374,  3377,  3382,  3386,  3390,  3393,  3397,  3399,  3402,
    3404,  3407,  3410,  3413,  3415,  3417,  3419,  3421,  3424,  3426,
    3429,  3432,  3434,  3437,  3440,  3442,  3445,  3447,  3449,  3451,
    3453,  3455,  3457,  3459,  3461,  3462,  3464,  3467,  3470,  3473,
    3477,  3483,  3491,  3499,  3506,  3513,  3520,  3527,  3533,  3540,
    3547,  3554,  3561,  3568,  3575,  3582,  3594,  3602,  3610,  3618,
    3628,  3638,  3649,  3662,  3675,  3679,  3682,  3683,  3685,  3689,
    3694,  3699,  3704,  3705,  3707,  3709,  3714,  3719,  3721,  3723,
    3725,  3727,  3729,  3731,  3733,  3735,  3738,  3740,  3742,  3744,
    3748,  3752,  3761,  3768,  3779,  3787,  3795,  3801,  3804,  3807,
    3811,  3816,  3822,  3828,  3834,  3838,  3843,  3849,  3855,  3861,
    3867,  3870,  3874,  3878,  3884,  3888,  3892,  3896,  3900,  3905,
    3911,  3917,  3923,  3929,  3933,  3938,  3944,  3950,  3953,  3956,
    3960,  3966,  3973,  3980,  3984,  3988,  3995,  4001,  4007,  4010,
    4014,  4018,  4024,  4031,  4035,  4038,  4041,  4045,  4048,  4052,
    4055,  4059,  4065,  4072,  4075,  4078,  4081,  4083,  4088,  4093,
    4095,  4098,  4101,  4104,  4107,  4110,  4113,  4116,  4120,  4123,
    4127,  4130,  4134,  4136,  4138,  4140,  4142,  4144,  4145,  4148,
    4149,  4152,  4153,  4155,  4156,  4157,  4159,  4161,  4163,  4165,
    4167,  4175,  4184,  4187,  4194,  4197,  4204,  4207,  4211,  4214,
    4216,  4218,  4222,  4226,  4228,  4233,  4236,  4238,  4242,  4246,
    4251,  4255,  4259,  4263,  4265,  4267,  4269,  4271,  4273,  4275,
    4277,  4279,  4281,  4283,  4285,  4287,  4289,  4291,  4293,  4296,
    4297,  4298,  4301,  4308,  4316,  4319,  4321,  4325,  4327,  4331,
    4333,  4335,  4337,  4340,  4343,  4345,  4349,  4350,  4351,  4354,
    4357,  4359,  4363,  4369,  4370,  4372,  4374,  4377,  4380,  4384,
    4387,  4391,  4394,  4398,  4401,  4405,  4407,  4410,  4412,  4415,
    4417,  4420,  4422,  4425,  4427,  4430,  4432,  4435,  4437,  4440,
    4442,  4445,  4448,  4452,  4455,  4458,  4461,  4464,  4466,  4468,
    4470,  4472,  4477,  4480,  4484,  4488,  4491,  4495,  4498,  4501,
    4504,  4508,  4512,  4516,  4519,  4523,  4525,  4529,  4533,  4535,
    4538,  4541,  4544,  4547,  4557,  4564,  4566,  4568,  4570,  4572,
    4575,  4578,  4582,  4586,  4588,  4591,  4595,  4599,  4601,  4604,
    4606,  4608,  4610,  4612,  4614,  4616,  4619,  4622,  4627,  4630,
    4633,  4636,  4639,  4642,  4647,  4650,  4653,  4656,  4659,  4662,
    4667,  4669,  4672,  4675,  4678,  4682,  4684,  4686,  4688,  4691,
    4694,  4697,  4700,  4703,  4706,  4709,  4712,  4715,  4719,  4723,
    4727,  4731,  4735,  4739,  4741,  4744,  4747,  4750,  4754,  4757,
    4761,  4765,  4769,  4773,  4777,  4781,  4784,  4787,  4790,  4793,
    4796,  4799,  4802,  4805,  4808,  4811,  4814,  4817,  4820,  4823,
    4827,  4831,  4835,  4838,  4841,  4844,  4848,  4852,  4856,  4859,
    4862,  4865,  4868,  4871,  4874,  4878,  4882,  4886,  4889,  4892,
    4895,  4898,  4901,  4904,  4908,  4912,  4916,  4919,  4922,  4925,
    4928,  4931,  4934,  4937,  4940,  4943,  4947,  4951,  4955,  4960,
    4967,  4970,  4972,  4974,  4976,  4978,  4980,  4981,  4987,  4989,
    4996,  5000,  5002,  5005,  5008,  5011,  5015,  5019,  5022,  5025,
    5028,  5031,  5034,  5037,  5041,  5044,  5047,  5051,  5053,  5057,
    5062,  5065,  5067,  5070,  5076,  5083,  5090,  5093,  5095,  5098,
    5101,  5107,  5114
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     389,     0,    -1,   101,   391,    -1,    44,   425,    -1,    41,
      68,     5,    -1,    41,    68,   392,    -1,    47,   430,    -1,
      61,    -1,    66,    -1,    67,   432,    -1,    71,   316,     5,
      -1,    72,   437,    -1,    73,   439,    -1,    81,   440,    -1,
      88,   449,    -1,    90,   451,    -1,    91,   452,    -1,   100,
     392,    -1,   126,   454,    -1,   136,   455,    -1,   149,   456,
      -1,   153,   507,    -1,   157,   510,    -1,   161,    -1,   162,
     392,    -1,   162,    68,     5,    -1,   167,   594,    -1,   168,
     593,    -1,   171,   516,    -1,   177,    15,     4,    -1,   194,
     519,    -1,   198,   537,    -1,   199,   538,    -1,   200,   539,
      -1,   203,   556,   540,    -1,   204,   577,    -1,   183,   576,
      -1,   216,   592,    -1,   220,    68,     5,    -1,   238,   578,
      -1,   240,   579,    -1,   241,   582,    -1,   262,    92,    -1,
     255,   584,    -1,   253,   583,    -1,   270,    -1,   266,   556,
     586,    -1,   272,   591,    -1,   274,   595,    -1,   279,   597,
      -1,   295,    -1,   301,   619,    -1,   319,     4,    -1,   320,
     418,    -1,   332,    -1,   334,   621,    -1,   341,    -1,   344,
     623,    -1,   345,   624,    -1,   375,   628,    -1,   383,   629,
      -1,     3,    -1,     4,    -1,   392,    -1,   213,   392,    -1,
     242,   392,    -1,   244,   392,    -1,   345,   392,    -1,    44,
     392,    -1,    47,   392,    -1,    80,   392,    -1,    88,   392,
      -1,   154,   392,    -1,   272,   392,    -1,     4,    -1,   378,
      -1,   384,    -1,   235,    -1,   328,    -1,   225,    -1,   385,
      -1,   234,    -1,   128,    -1,    -1,   273,    38,    -1,   145,
      38,    -1,   273,    -1,   145,    -1,    -1,   395,    -1,   390,
      -1,     6,    -1,     7,    -1,     8,    -1,     9,    -1,    10,
      -1,   396,   396,    -1,   397,   398,    -1,   398,   398,    -1,
     390,   390,    -1,   172,    -1,   246,    -1,   106,    -1,    19,
      -1,   401,    -1,   345,    -1,   346,    -1,   347,    -1,   348,
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
     107,    -1,    89,    -1,   386,    -1,    27,    -1,    53,    -1,
      -1,     4,    -1,    86,    -1,   164,    -1,   248,    -1,   249,
      -1,   263,    -1,   309,    -1,    -1,    32,    -1,   312,    -1,
     205,    -1,    -1,   221,    -1,    42,    -1,    43,    -1,   189,
      -1,   190,    -1,   339,   424,    -1,    48,   421,    -1,    78,
     422,    -1,   162,   423,    -1,   207,   589,    -1,    37,   590,
      -1,   291,   419,    -1,   281,   390,    -1,   313,     4,    -1,
     321,   390,    -1,   392,    -1,    18,   390,    -1,   311,   390,
      -1,   227,   420,    -1,   392,    -1,   311,   390,    -1,   392,
      -1,    68,     5,    -1,   392,    -1,    68,     5,    -1,   392,
      -1,    68,     5,    -1,   390,   390,    -1,   250,   390,   390,
     390,   390,   390,    -1,    11,   426,    -1,    75,     5,     5,
       5,    -1,   105,     4,    -1,   127,   427,    -1,   146,   428,
      -1,    55,   298,     4,    -1,   325,   429,    -1,   131,     5,
      -1,    61,    -1,   390,   390,    -1,   390,    -1,   390,   390,
      -1,   390,    11,   390,   390,    -1,   390,   390,    11,   390,
     390,    -1,   325,   390,    -1,   325,   390,   390,    -1,   325,
     390,    11,   390,   390,    -1,   325,   390,   390,    11,   390,
     390,    -1,    32,    -1,   312,    -1,   134,    -1,   390,   390,
      11,    61,     5,     5,     5,    -1,   390,   390,     4,   390,
     390,    11,    61,     5,     5,     5,     5,    -1,   390,   390,
      11,   390,   390,     5,     5,     5,    -1,   390,   390,     4,
     390,   390,    11,   390,   390,     5,     5,     5,     5,    -1,
     390,    -1,   390,   390,    -1,   325,   431,    -1,   134,    -1,
     390,    -1,   390,   390,    -1,   284,   433,    -1,   214,   434,
      -1,   208,   435,    -1,   336,   390,   390,    -1,   336,   220,
     220,    -1,   381,   436,    -1,   257,   392,    -1,   150,    -1,
     195,    -1,   390,    -1,   208,    -1,   381,    -1,   380,    -1,
     336,    -1,     4,   406,    -1,   214,   406,    -1,   276,     4,
      -1,   269,    -1,   390,     4,     4,    -1,    82,   390,    -1,
     276,     4,    -1,   191,     4,    -1,     4,   390,   390,     4,
       4,    -1,   272,   390,   390,   390,   390,   390,   390,     4,
       4,    -1,   167,   390,   390,   390,   390,   390,   390,     4,
       4,    -1,   168,   390,   390,   390,   390,   390,   390,     4,
       4,    -1,   216,     4,     4,     5,     5,     5,     4,    -1,
      40,    -1,   215,   438,    -1,   118,    -1,     4,   390,   390,
       4,     4,    -1,   272,   390,   390,   390,   390,   390,   390,
       4,     4,    -1,   167,   390,   390,   390,   390,   390,   390,
       4,     4,    -1,   168,   390,   390,   390,   390,   390,   390,
       4,     4,    -1,   216,     4,     4,     5,     5,     5,     4,
      -1,   405,    -1,   196,   390,    -1,    87,   441,    -1,   104,
     442,    -1,   194,   443,    -1,   243,   447,    -1,   279,   448,
      -1,     5,     4,     4,   446,     4,     4,   405,   390,   444,
     445,   390,   390,     5,    -1,     5,     4,     4,   446,     4,
       4,   405,   390,   390,   445,   390,   390,     5,    -1,     5,
       4,     4,   446,     4,     4,   405,   390,   444,   390,   390,
       5,    -1,     5,     4,     4,   446,     4,     4,   405,   390,
     390,   390,   390,     5,    -1,   252,    -1,    -1,    31,    -1,
       5,    -1,     5,     5,     4,   392,    -1,     5,     4,   392,
       5,   400,   407,    -1,   208,    -1,   381,    -1,   380,    -1,
     336,    -1,   150,    -1,   195,    -1,   301,    -1,    47,    -1,
       5,    -1,     5,     5,     4,   392,    -1,     5,   400,   407,
      -1,    31,     5,   400,   407,    -1,    -1,   390,   390,   390,
     390,   400,   407,    -1,    61,   399,   400,   407,   390,   390,
     400,   409,    -1,   320,   450,    -1,    40,   390,   390,    -1,
     215,   390,   390,    -1,   118,   390,   390,    -1,    -1,   390,
     390,   400,   407,    -1,    40,   390,   390,     4,    -1,   215,
     390,   390,     4,    -1,   118,   390,   390,     4,    -1,   402,
     390,   390,    -1,   400,   407,   399,    -1,   392,    -1,   344,
     390,   390,    -1,    40,   215,   402,   390,   390,    -1,   215,
     402,   390,   390,    -1,    40,   215,   400,   399,    -1,   215,
     400,   399,    -1,    33,     4,    -1,    -1,    32,    -1,   312,
      -1,   205,    -1,   390,    -1,    66,    -1,   157,   125,     5,
      -1,    -1,    41,    68,    -1,    44,   459,    -1,    47,   461,
      -1,    67,   462,    -1,    72,   466,    -1,    71,   465,    -1,
      73,   468,    -1,    81,   470,    -1,    83,   473,    -1,    88,
     474,    -1,    90,   475,    -1,    92,   477,    -1,    91,   476,
      -1,    98,   478,    -1,   100,    -1,   135,   482,    -1,   153,
     488,    -1,   162,    68,    -1,   164,     5,     5,     4,    -1,
     165,    93,   457,    -1,   167,   496,    -1,   168,   495,    -1,
     171,   480,    -1,   175,   479,    -1,   177,    15,    -1,   208,
      -1,   203,   556,   550,    -1,   204,   490,    -1,   183,   489,
      -1,   216,   494,    -1,   220,    68,    -1,   238,    -1,   240,
     492,    -1,   247,   315,   402,   390,   390,     4,     4,     5,
      -1,   272,   493,    -1,   274,    -1,   301,   497,    -1,   319,
      -1,   320,   498,    -1,   329,    -1,   337,   402,   390,   390,
      -1,   343,    93,   458,    -1,   345,   505,    -1,   383,    -1,
       5,     5,   390,   390,   402,     4,   453,    -1,     5,     5,
     390,   390,   400,   407,     4,   453,    -1,     5,     5,   390,
     390,   402,     4,   453,    -1,     5,     5,   390,   390,   400,
     407,     4,   453,    -1,   105,    -1,   127,    -1,   146,    -1,
      55,   298,    -1,    92,    -1,   131,    -1,    75,   460,    -1,
     193,    -1,    -1,   208,     5,    -1,   109,     5,    -1,   127,
      -1,    -1,   444,   445,    -1,   390,   445,    -1,   284,    -1,
     214,    -1,   208,   463,    -1,   336,   187,    -1,   381,   464,
      -1,   257,    -1,   214,    -1,   276,    -1,    82,    -1,   276,
      -1,   191,    -1,    -1,   316,    -1,   187,   467,    -1,     4,
      -1,     4,   402,   390,   390,    -1,     4,   390,   390,   405,
     390,    -1,    -1,   187,   469,    -1,   196,    -1,     4,   390,
     390,   405,   390,    -1,   400,   407,    -1,    67,   471,    -1,
      68,    -1,    96,    -1,   187,    -1,   232,   187,    -1,   207,
      -1,    73,   472,    -1,   301,    -1,   374,    -1,    -1,   214,
      -1,   284,    -1,    -1,   196,    -1,   390,   390,   400,   407,
     408,    -1,   402,   390,   390,   400,   407,   408,    -1,   400,
     407,   408,    -1,    61,   400,   407,   408,   400,   409,    -1,
     320,   400,   407,    -1,   402,    -1,   400,   407,   408,    -1,
     310,    -1,    33,    -1,   402,    -1,   400,   407,   408,    -1,
     400,   407,   399,   390,   390,     5,    -1,     4,   400,   407,
     399,   390,   390,     5,    -1,   402,   390,   390,     4,     4,
      -1,     5,   393,    -1,    67,    -1,   402,   390,   390,     5,
     393,    -1,     4,     4,     4,     4,    -1,    92,    -1,   129,
     219,   481,    -1,    -1,     4,    -1,   390,   390,    -1,   222,
      -1,    61,   400,   407,   408,    -1,    85,    -1,   105,   485,
      -1,    45,    -1,   125,   483,    -1,   129,   219,   486,    -1,
     159,   484,    -1,   160,    -1,   233,   219,    -1,   298,    -1,
     298,   400,   407,   409,    -1,   299,   487,    -1,   374,    -1,
       4,    -1,   402,   390,   390,    -1,     4,    -1,   181,     5,
      -1,     4,   181,     5,    -1,   345,     4,    -1,    -1,     4,
      -1,   393,    -1,   393,   402,   390,   390,    -1,   393,     4,
      -1,    -1,     4,    -1,   143,   172,   400,    -1,   143,   172,
       4,   400,    -1,   325,   172,   390,   400,    -1,    -1,   237,
      -1,   338,    -1,    85,    -1,   184,    -1,    68,   491,    -1,
      46,   491,    -1,   324,   491,    -1,   339,   491,    -1,    68,
      -1,   202,    -1,   265,    -1,   314,    -1,   324,    -1,    85,
      -1,    46,    -1,    -1,     4,    -1,   257,    -1,    63,    -1,
     314,    -1,   339,    -1,   314,    -1,    63,    -1,   314,    -1,
     339,    -1,    63,    -1,   314,    -1,   339,    -1,   146,    -1,
     264,    -1,   264,   209,    -1,   296,    -1,   296,   209,    -1,
      21,    -1,   339,   504,    -1,    48,   501,    -1,    78,   502,
      -1,   162,   503,    -1,   207,    -1,    37,    -1,   291,   499,
      -1,   281,    -1,    -1,    18,    -1,   311,    -1,   227,   500,
      -1,    -1,   311,    -1,    -1,    68,    -1,    -1,    68,    -1,
      -1,    68,    -1,    -1,   250,    -1,    -1,    15,   506,    -1,
     219,   401,    -1,    -1,   251,    -1,    87,   508,    -1,   104,
      -1,   400,   407,   408,   509,     5,     5,    -1,   400,   407,
     408,   509,     5,    -1,    20,    -1,   260,    -1,    19,    -1,
      41,    68,    -1,    44,   511,    -1,    81,   512,    -1,    88,
      -1,    99,    -1,   100,    -1,   106,    -1,   135,   513,    -1,
     153,    -1,   171,    -1,   178,    -1,   203,   514,    -1,   246,
      -1,   172,    -1,   301,    -1,   314,   400,    -1,   345,   515,
      -1,    76,     5,    -1,    -1,    31,    -1,    -1,    44,    -1,
      91,    -1,   213,    -1,   162,    -1,   287,    -1,   243,    -1,
     330,    -1,   400,    -1,    60,   400,    -1,   122,   400,    -1,
     192,   400,    -1,    17,    -1,   320,   400,    -1,   223,     4,
       4,    -1,   123,    -1,   206,     5,    -1,    92,   518,    -1,
     288,   129,   219,   517,    -1,   288,     4,     4,     4,     4,
      -1,   334,    -1,   345,   390,   390,   390,   390,   390,   390,
     390,   390,     4,    -1,     5,    -1,     5,     4,    -1,     4,
       4,    58,    -1,     4,     4,   400,    -1,   214,   392,    -1,
      26,   520,    -1,   119,   522,    -1,   135,   523,    -1,   174,
     536,    -1,   231,   534,    -1,   245,   535,    -1,     5,    13,
       5,   412,    -1,     5,    14,     5,   412,    -1,     5,    63,
       5,   412,    -1,     5,   211,   412,    -1,     5,   212,   412,
      -1,     5,   292,   410,     4,   412,    -1,     5,   303,     4,
     412,    -1,     5,   304,     4,   412,    -1,     5,   338,     5,
     412,    -1,   272,    91,   521,    -1,   168,    91,   521,    -1,
     167,    91,   521,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    63,     5,    -1,     5,   211,    -1,     5,
     212,    -1,     5,   292,   410,     4,    -1,     5,   303,     4,
      -1,     5,   304,     4,    -1,     5,   338,     5,    -1,     5,
       5,   300,    -1,     5,    13,     5,   412,    -1,     5,    14,
       5,   412,    -1,     5,    63,     5,   412,    -1,     5,   211,
     411,   412,    -1,     5,     5,   300,   411,   412,    -1,     5,
     212,   411,   412,    -1,     5,   292,   410,     4,   411,   412,
      -1,     5,   308,   410,     4,     4,   411,   412,    -1,     5,
     303,     4,   412,    -1,     5,   304,     4,   412,    -1,     5,
     338,     5,   411,   412,    -1,   299,   524,    -1,   125,    91,
     525,    -1,   272,   172,   533,    -1,   272,    91,   532,    -1,
     168,   172,   533,    -1,   168,    91,   532,    -1,   167,   172,
     533,    -1,   167,    91,   532,    -1,   213,   526,    -1,     5,
      13,     5,    -1,     5,    14,     5,    -1,     5,    63,     5,
      -1,     5,   211,   411,    -1,     5,     5,   300,   411,    -1,
       5,   212,   411,    -1,     5,   292,   410,     4,   411,    -1,
       5,   308,   410,     4,     4,   411,    -1,     5,   303,     4,
      -1,     5,   304,     4,    -1,     5,   338,     5,   411,    -1,
       5,    13,     5,    -1,     5,    14,     5,    -1,     5,    63,
       5,    -1,     5,   211,   411,    -1,     5,   212,   411,    -1,
       5,   292,   410,     4,   411,    -1,     5,   303,     4,    -1,
       5,   304,     4,    -1,     5,   338,     5,   411,    -1,   172,
     177,   527,    -1,   177,   528,    -1,   172,   529,    -1,   531,
      -1,   172,   373,   530,    -1,     5,    13,     5,   412,    -1,
       5,    14,     5,   412,    -1,     5,    63,     5,   412,    -1,
       5,   211,   411,   412,    -1,     5,   212,   411,   412,    -1,
       5,   292,   410,     4,   411,   412,    -1,     5,   303,     4,
     412,    -1,     5,   304,     4,   412,    -1,     5,   338,     5,
     411,   412,    -1,     5,    13,     5,   412,    -1,     5,    14,
       5,   412,    -1,     5,    63,     5,   412,    -1,     5,   211,
     411,   412,    -1,     5,     5,   300,   411,   412,    -1,     5,
     212,   411,   412,    -1,     5,   292,   410,     4,   411,   412,
      -1,     5,   308,   410,     4,     4,   411,   412,    -1,     5,
     303,     4,   412,    -1,     5,   304,     4,   412,    -1,     5,
     338,     5,   411,   412,    -1,   401,     5,    13,     5,   412,
      -1,   401,     5,    14,     5,   412,    -1,   401,     5,    63,
       5,   412,    -1,   401,     5,   211,   411,   412,    -1,   401,
       5,   212,   411,   412,    -1,   401,     5,   292,   410,     4,
     411,   412,    -1,   401,     5,   303,     4,   412,    -1,   401,
       5,   304,     4,   412,    -1,   401,     5,   338,     5,   411,
     412,    -1,     5,    13,     5,   412,    -1,     5,    14,     5,
     412,    -1,     5,    63,     5,   412,    -1,     5,   211,   411,
     412,    -1,     5,   212,   411,   412,    -1,     5,   292,   410,
       4,   411,   412,    -1,     5,   303,     4,   412,    -1,     5,
     304,     4,   412,    -1,     5,   338,     5,   411,   412,    -1,
     401,     5,    13,     5,   412,    -1,   401,     5,    14,     5,
     412,    -1,   401,     5,    63,     5,   412,    -1,   401,     5,
     211,   411,   412,    -1,   401,     5,     5,   300,   411,   412,
      -1,   401,     5,   212,   411,   412,    -1,   401,     5,   292,
     410,     4,   411,   412,    -1,   401,     5,   308,   410,     4,
       4,   411,   412,    -1,   401,     5,   303,     4,   412,    -1,
     401,     5,   304,     4,   412,    -1,   401,     5,   338,     5,
     411,   412,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    63,     5,    -1,     5,   211,   411,    -1,     5,
       5,   300,   411,    -1,     5,   212,   411,    -1,     5,   292,
     410,     4,   411,    -1,     5,   308,   410,     4,     4,   411,
      -1,     5,   303,     4,    -1,     5,   304,     4,    -1,     5,
     338,     5,   411,    -1,     5,    13,     5,    -1,     5,    14,
       5,    -1,     5,    63,     5,    -1,     5,   211,   411,    -1,
       5,   212,   411,    -1,     5,   292,   410,     4,   411,    -1,
       5,   303,     4,    -1,     5,   304,     4,    -1,     5,   338,
       5,   411,    -1,     5,    13,     5,   412,    -1,     5,    63,
       5,   412,    -1,     5,   211,   412,    -1,     5,   292,   410,
       4,   412,    -1,     5,   303,     4,   412,    -1,     5,   338,
       5,   412,    -1,     5,     5,    -1,   299,     5,     5,    -1,
      98,     4,     4,     4,     4,     4,    -1,   208,     4,     4,
       4,     4,     4,    -1,   118,    -1,   256,    -1,   392,    -1,
     151,   392,    -1,    92,   392,    -1,    68,     5,    -1,     5,
       4,     4,    -1,   334,   390,   390,    -1,   383,   390,    -1,
       5,     5,   401,   407,     5,     5,   401,   407,   390,   401,
     409,     5,    -1,    62,   543,    -1,    68,     5,    -1,    84,
      -1,    77,   549,     5,    -1,    77,   549,   338,     5,    -1,
      79,   104,    -1,    -1,    87,   541,   544,    -1,    93,    -1,
     104,   547,    -1,   112,   548,    -1,   121,     4,    -1,   140,
       5,    -1,   162,    16,    -1,   162,   236,   390,   390,    -1,
     162,   326,   390,   390,    -1,     4,    20,   415,   392,    -1,
       4,    21,   395,    -1,     4,    21,   395,   402,    -1,     4,
      21,   395,   400,   407,    -1,     4,    22,   264,   390,   390,
       4,   400,   409,    -1,     4,    22,   264,     5,   400,   409,
      -1,     4,    51,   264,   390,   390,   390,     4,   400,   409,
      -1,     4,    51,   264,     5,   400,   409,    -1,     4,    50,
     264,   390,   390,   400,   409,    -1,     4,    54,   112,   395,
     395,     4,   390,   390,   390,     4,    -1,     4,    54,   112,
     395,   395,     4,   390,   390,   390,     4,   402,    -1,     4,
      54,   112,   395,   395,     4,   390,   390,   390,     4,   400,
     407,    -1,     4,    54,   112,     5,     5,   400,   407,   400,
     409,    -1,     4,    57,   542,     5,     5,    -1,     4,    64,
     264,   390,   400,   409,    -1,     4,    68,     5,    -1,     4,
      78,    27,   392,   392,    -1,     4,    78,   182,     5,     5,
      -1,     4,    78,   264,   390,   400,   409,    -1,     4,    78,
     314,   400,   407,    -1,     4,    79,   150,   392,    -1,     4,
      79,   329,     5,    -1,     4,    86,   112,   395,   395,     4,
     390,   390,     4,    -1,     4,    86,   112,   395,   395,     4,
     390,   390,     4,   402,    -1,     4,    86,   112,   395,   395,
       4,   390,   390,     4,   400,   407,    -1,     4,    86,   112,
       5,     5,   400,   407,   400,   409,    -1,     4,    87,    22,
     264,   390,   390,    -1,     4,    87,    51,   264,   390,   390,
      -1,     4,    87,    54,    21,   390,   390,    -1,     4,    87,
      54,   264,   390,   390,    -1,     4,    87,   117,   264,   390,
     390,    -1,     4,    87,   120,    21,   390,   390,    -1,     4,
      87,   120,   264,   390,   390,    -1,     4,    87,    86,    21,
     390,   390,    -1,     4,    87,    86,   264,   390,   390,    -1,
       4,    87,   252,   342,     4,   390,   390,    -1,     4,    87,
     286,   342,     4,   390,   390,    -1,     4,   104,    -1,     4,
     104,    22,     4,    -1,     4,   104,    51,     4,    -1,     4,
     104,    54,     4,    -1,     4,   104,   117,     4,    -1,     4,
     104,    57,   542,     5,    -1,     4,   104,   120,     4,    -1,
       4,   104,    86,     4,    -1,     4,   104,   252,   342,     4,
      -1,     4,   104,   286,   342,     4,    -1,     4,   104,   316,
      -1,     4,   104,   316,     5,    -1,     4,   104,   316,     4,
      -1,     4,   112,    40,     4,    -1,     4,   116,   264,   390,
     390,   400,   409,    -1,     4,   117,   264,   390,   390,   390,
       4,   400,   409,    -1,     4,   117,   264,     5,   400,   409,
      -1,     4,   120,   112,   395,   395,     4,   390,   390,   390,
       4,    -1,     4,   120,   112,   395,   395,     4,   390,   390,
     390,     4,   402,    -1,     4,   120,   112,   395,   395,     4,
     390,   390,   390,     4,   400,   407,    -1,     4,   120,   112,
       5,     5,   400,   407,   400,   409,    -1,     4,   140,     5,
      -1,     4,   162,    -1,     4,   162,   236,    -1,     4,   191,
      27,   392,   392,    -1,     4,   191,   250,   400,   407,   399,
     399,    -1,     4,   218,   390,   390,    -1,     4,   218,   144,
      -1,     4,   218,    36,    -1,     4,   218,   325,   400,   407,
     399,    -1,     4,   252,   270,   390,   390,   400,   409,    -1,
       4,   286,   270,   390,   390,   400,   409,    -1,     4,   250,
     290,   413,    -1,     4,   250,   298,     4,    -1,     4,   258,
     400,   407,   399,   399,   390,   400,   409,    -1,     4,   259,
     562,   392,    -1,     4,   274,    40,    -1,     4,   275,   141,
       5,    -1,     4,   275,   250,   400,   407,   399,   399,    -1,
       4,   275,   314,   400,   407,   400,   409,    -1,     4,   287,
      -1,     4,   287,   236,    -1,     4,   316,     5,    -1,     4,
     318,     5,    -1,     4,   318,   274,   392,    -1,     4,   331,
      -1,     4,   333,    -1,     4,   340,    27,   392,    -1,     4,
     340,   250,   400,   407,   399,   400,   409,   390,   395,    -1,
       4,   374,     4,    -1,   180,    -1,   180,   390,   390,    -1,
     193,   557,    -1,   194,   558,    -1,   218,   559,    -1,   257,
     392,    -1,   259,   562,   392,    -1,   259,   562,   392,   390,
     390,    -1,   274,    40,   390,   390,    -1,   274,   215,   390,
     390,     4,    -1,   274,   118,    -1,   279,   566,    -1,   287,
     567,    -1,   295,   568,    -1,     5,    68,     5,    -1,     5,
      84,    -1,     5,   104,    -1,     5,    93,    -1,     5,   140,
       5,    -1,     5,   162,    -1,     5,   162,   236,    -1,     5,
     218,   390,   390,    -1,     5,   218,   144,    -1,     5,   218,
      36,    -1,     5,   218,   325,   400,   407,   399,    -1,     5,
     259,   562,   392,    -1,     5,   287,    -1,     5,   287,   236,
      -1,     5,   331,    -1,     5,   333,    -1,   316,   112,     5,
       5,    -1,   316,   104,     5,    -1,   316,   104,    16,    -1,
     316,     5,    -1,   316,   334,     5,    -1,   243,    -1,   243,
     400,    -1,   330,    -1,   331,    16,    -1,   333,    16,    -1,
     374,     4,    -1,   287,    -1,   333,    -1,   162,    -1,   331,
      -1,    40,   218,    -1,   218,    -1,   118,   218,    -1,    40,
     112,    -1,   112,    -1,   118,   112,    -1,    40,   274,    -1,
     274,    -1,   118,   274,    -1,   104,    -1,   318,    -1,    68,
      -1,   374,    -1,   259,    -1,   140,    -1,   180,    -1,   334,
      -1,    -1,     4,    -1,    30,   392,    -1,   264,   390,    -1,
     176,     4,    -1,   237,     4,   390,    -1,    64,   390,   390,
     390,   563,    -1,   116,   390,   390,   390,   390,   394,   563,
      -1,    50,   390,   390,   390,   390,   394,   563,    -1,   252,
     390,   390,   390,   390,   563,    -1,   286,   390,   390,   390,
     390,   563,    -1,   191,   390,   390,   390,   390,   563,    -1,
     340,   390,   390,   390,   390,   563,    -1,   318,   390,   390,
     394,   563,    -1,    64,   250,   390,   390,   414,   563,    -1,
      50,   250,   390,   390,   414,   563,    -1,   107,   250,   390,
     390,   414,   563,    -1,    89,   250,   390,   390,   414,   563,
      -1,   386,   250,   390,   390,   414,   563,    -1,    27,   250,
     390,   390,   414,   563,    -1,    53,   250,   390,   390,   414,
     563,    -1,   275,   390,   390,   390,   390,   400,   407,   400,
     409,     5,   563,    -1,    78,   390,   390,   390,   400,   407,
     563,    -1,   258,   390,   390,   390,   390,   390,   563,    -1,
      22,   390,   390,   390,   390,     4,   563,    -1,   117,   390,
     390,   390,   390,   390,     4,   394,   563,    -1,    51,   390,
     390,   390,   390,   390,     4,   394,   563,    -1,    86,   390,
     390,   395,   395,     4,   390,   390,     4,   563,    -1,   120,
     390,   390,   395,   395,     4,   390,   390,   390,     4,   394,
     563,    -1,    54,   390,   390,   395,   395,     4,   390,   390,
     390,     4,   394,   563,    -1,    79,   545,   563,    -1,   317,
     546,    -1,    -1,     4,    -1,     5,   390,   390,    -1,   338,
       5,   390,   390,    -1,   390,   390,   338,     5,    -1,     5,
     400,   407,   399,    -1,    -1,   287,    -1,    16,    -1,    40,
     390,   390,     4,    -1,   215,   390,   390,     4,    -1,   118,
      -1,   111,    -1,   376,    -1,    65,    -1,   278,    -1,   277,
      -1,   261,    -1,   377,    -1,    62,   551,    -1,    68,    -1,
     140,    -1,   121,    -1,   155,   390,   390,    -1,   170,   390,
     390,    -1,     4,    20,    86,     5,     5,     5,   400,     4,
      -1,     4,    20,   164,     5,     5,     4,    -1,     4,    20,
     248,     5,     5,     5,     5,   400,   407,   416,    -1,     4,
      20,   249,     5,     5,   400,   416,    -1,     4,    20,   263,
       5,     5,     5,   400,    -1,     4,    20,   309,   400,   407,
      -1,   170,    16,    -1,     4,    21,    -1,     4,    21,   402,
      -1,     4,    21,   400,   407,    -1,     4,    22,   264,   400,
     409,    -1,     4,    51,   264,   400,   409,    -1,     4,    50,
     264,   400,   409,    -1,     4,    54,    21,    -1,     4,    54,
      21,   402,    -1,     4,    54,    21,   400,   407,    -1,     4,
      54,   264,   400,   409,    -1,     4,    61,   400,   407,   408,
      -1,     4,    64,   264,   400,   409,    -1,     4,    68,    -1,
       4,    78,    27,    -1,     4,    78,   182,    -1,     4,    78,
     264,   400,   409,    -1,     4,    78,   314,    -1,     4,    79,
     150,    -1,     4,    79,   329,    -1,     4,    86,    21,    -1,
       4,    86,    21,   402,    -1,     4,    86,    21,   400,   407,
      -1,     4,    86,   264,   400,   409,    -1,     4,   116,   264,
     400,   409,    -1,     4,   117,   264,   400,   409,    -1,     4,
     120,    21,    -1,     4,   120,    21,   402,    -1,     4,   120,
      21,   400,   407,    -1,     4,   120,   264,   400,   409,    -1,
       4,   140,    -1,     4,   162,    -1,     4,   191,    27,    -1,
       4,   191,   186,   400,   409,    -1,     4,   191,   250,   400,
     407,   408,    -1,     4,   201,   186,   390,   400,   409,    -1,
       4,   250,   290,    -1,     4,   250,   298,    -1,     4,   258,
     250,   400,   407,   408,    -1,     4,   258,   186,   400,   409,
      -1,     4,   258,   322,   400,   409,    -1,     4,   259,    -1,
       4,   259,   562,    -1,     4,   275,   141,    -1,     4,   275,
     186,   400,   409,    -1,     4,   275,   250,   400,   407,   408,
      -1,     4,   275,   314,    -1,     4,   287,    -1,     4,   316,
      -1,     4,   316,     4,    -1,     4,   318,    -1,     4,   318,
     274,    -1,     4,   329,    -1,     4,   340,    27,    -1,     4,
     340,   186,   400,   409,    -1,     4,   340,   250,   400,   407,
     408,    -1,     4,   374,    -1,   162,   552,    -1,   162,   232,
      -1,   232,    -1,   252,   286,   390,   390,    -1,   286,   286,
     390,   390,    -1,   257,    -1,   259,   562,    -1,   287,   553,
      -1,   287,   232,    -1,   295,   554,    -1,     5,    68,    -1,
       5,   140,    -1,     5,   170,    -1,     5,   259,   562,    -1,
       5,   316,    -1,     5,   316,   232,    -1,   316,    16,    -1,
     316,   103,   219,    -1,   374,    -1,    30,    -1,   264,    -1,
     176,    -1,   237,    -1,    -1,   390,   390,    -1,    -1,   390,
     390,    -1,    -1,   318,    -1,    -1,    -1,   251,    -1,   266,
      -1,   336,    -1,    59,    -1,   142,    -1,   549,   400,   407,
     408,   392,   564,   571,    -1,   287,   549,   400,   407,   408,
     392,   564,   571,    -1,   549,     5,    -1,   549,     5,     4,
       5,   400,   407,    -1,   549,     4,    -1,   549,     4,     4,
       5,   400,   407,    -1,   135,     5,    -1,   135,     5,     5,
      -1,   390,   390,    -1,   144,    -1,    36,    -1,    40,   390,
     390,    -1,   215,   390,   390,    -1,   118,    -1,   325,   400,
     407,   399,    -1,   560,   561,    -1,   561,    -1,   562,   387,
     392,    -1,    68,   387,     5,    -1,    97,   387,     4,     4,
      -1,   374,   387,     4,    -1,   140,   387,     5,    -1,   318,
     387,     5,    -1,   574,    -1,   575,    -1,   226,    -1,   287,
      -1,   162,    -1,    96,    -1,   137,    -1,   112,    -1,   218,
      -1,   274,    -1,   104,    -1,   173,    -1,   305,    -1,   130,
      -1,   555,    -1,   555,   560,    -1,    -1,    -1,   565,   569,
      -1,     5,   549,   400,   407,   408,   392,    -1,   287,     5,
     549,   400,   407,   408,   392,    -1,   317,     5,    -1,    16,
      -1,   236,   390,   390,    -1,   326,    -1,   326,   390,   390,
      -1,   132,    -1,   185,    -1,   392,    -1,   318,   392,    -1,
     569,   570,    -1,   570,    -1,   562,   387,   392,    -1,    -1,
      -1,   572,   573,    -1,   573,   574,    -1,   574,    -1,   316,
     387,     5,    -1,    57,   387,   542,     5,     5,    -1,    -1,
      87,    -1,     4,    -1,   184,     4,    -1,    68,     5,    -1,
       4,    68,     5,    -1,    46,   404,    -1,     4,    46,   404,
      -1,   324,   390,    -1,     4,   324,   390,    -1,   339,   392,
      -1,     4,   339,   392,    -1,   295,    -1,     4,   295,    -1,
     161,    -1,     4,   161,    -1,   104,    -1,     4,   104,    -1,
     335,    -1,     4,   335,    -1,   110,    -1,     4,   110,    -1,
     323,    -1,     4,   323,    -1,    49,    -1,     4,    49,    -1,
      66,    -1,    68,     5,    -1,   202,   403,    -1,   265,   390,
     390,    -1,   314,   400,    -1,   324,   390,    -1,    46,   404,
      -1,   202,     4,    -1,   386,    -1,   384,    -1,   377,    -1,
     226,    -1,   390,   390,   390,   390,    -1,   390,   390,    -1,
     402,   390,   390,    -1,   400,   407,   399,    -1,   325,   580,
      -1,    39,   390,   390,    -1,   215,   581,    -1,   257,   392,
      -1,   390,   390,    -1,   402,   390,   390,    -1,   400,   407,
     399,    -1,    40,   390,   390,    -1,   390,   390,    -1,   118,
     390,   390,    -1,   392,    -1,   345,   401,   407,    -1,     5,
       4,     4,    -1,   334,    -1,    74,   585,    -1,   187,     4,
      -1,   271,     4,    -1,   281,   390,    -1,     4,     4,     4,
       4,     4,     4,     4,     4,     4,    -1,     4,     4,     4,
       4,     4,     4,    -1,    56,    -1,   152,    -1,   272,    -1,
      94,    -1,   162,   587,    -1,   287,   588,    -1,    40,   390,
     390,    -1,   215,   390,   390,    -1,   118,    -1,   293,   118,
      -1,    40,   390,   390,    -1,   215,   390,   390,    -1,   118,
      -1,   293,   118,    -1,   210,    -1,    12,    -1,   133,    -1,
     226,    -1,    34,    -1,   114,    -1,    63,     5,    -1,   314,
     400,    -1,   339,     4,     4,     4,    -1,   314,   400,    -1,
      63,     5,    -1,    63,   166,    -1,    63,   280,    -1,   314,
     400,    -1,   339,     4,     4,     4,    -1,    63,     5,    -1,
      63,   166,    -1,    63,   280,    -1,    63,   337,    -1,   314,
     400,    -1,   339,     4,     4,     4,    -1,   390,    -1,   390,
     102,    -1,   215,   596,    -1,   325,   390,    -1,   325,   390,
     102,    -1,    40,    -1,   390,    -1,   118,    -1,    26,   599,
      -1,   135,   600,    -1,   382,   598,    -1,   231,   617,    -1,
     119,   618,    -1,   245,     5,    -1,   129,     5,    -1,    63,
       5,    -1,   303,     4,    -1,   129,     5,   417,    -1,    63,
       5,   417,    -1,   303,     4,   417,    -1,   272,    91,   607,
      -1,   168,    91,   610,    -1,   167,    91,   613,    -1,   601,
      -1,   172,   601,    -1,   315,   602,    -1,   299,   603,    -1,
     125,    91,   604,    -1,   213,   605,    -1,   272,   172,   608,
      -1,   272,    91,   609,    -1,   168,   172,   611,    -1,   168,
      91,   612,    -1,   167,   172,   614,    -1,   167,    91,   615,
      -1,   268,   616,    -1,   129,     5,    -1,    63,     5,    -1,
     303,     4,    -1,   129,     5,    -1,    63,     5,    -1,   303,
       4,    -1,   129,     5,    -1,    63,     5,    -1,   303,     4,
      -1,   129,     5,    -1,    63,     5,    -1,   303,     4,    -1,
     172,   606,    -1,   129,     5,     4,    -1,    63,     5,     4,
      -1,   303,     4,     4,    -1,   129,     5,    -1,    63,     5,
      -1,   303,     4,    -1,   129,     5,   417,    -1,    63,     5,
     417,    -1,   303,     4,   417,    -1,   129,     5,    -1,    63,
       5,    -1,   303,     4,    -1,   129,     5,    -1,    63,     5,
      -1,   303,     4,    -1,   129,     5,   417,    -1,    63,     5,
     417,    -1,   303,     4,   417,    -1,   129,     5,    -1,    63,
       5,    -1,   303,     4,    -1,   129,     5,    -1,    63,     5,
      -1,   303,     4,    -1,   129,     5,   417,    -1,    63,     5,
     417,    -1,   303,     4,   417,    -1,   129,     5,    -1,    63,
       5,    -1,   303,     4,    -1,   129,     5,    -1,    63,     5,
      -1,   303,     4,    -1,   129,     5,    -1,    63,     5,    -1,
     303,     4,    -1,   129,     5,   417,    -1,    63,     5,   417,
      -1,   303,     4,   417,    -1,   129,     5,     5,   417,    -1,
     620,     4,     4,   390,   390,   395,    -1,   620,     4,    -1,
     104,    -1,    52,    -1,   327,    -1,   148,    -1,   115,    -1,
      -1,     4,   390,   390,   390,   390,    -1,   230,    -1,   230,
       4,   390,   390,   390,   390,    -1,   135,   299,   622,    -1,
       4,    -1,     4,     4,    -1,   390,   400,    -1,   390,   390,
      -1,   325,   390,   390,    -1,   401,   407,   408,    -1,    15,
     627,    -1,   270,     4,    -1,   267,   626,    -1,    23,   625,
      -1,     4,     4,    -1,     4,     5,    -1,   318,     4,     5,
      -1,     4,     4,    -1,     4,     5,    -1,   318,     4,     5,
      -1,     4,    -1,     4,   401,   407,    -1,   325,     4,   401,
     407,    -1,   251,    66,    -1,   256,    -1,   390,   390,    -1,
     390,   390,    11,   390,   390,    -1,   390,   390,    11,   402,
     390,   390,    -1,   390,   390,    11,   400,   407,   399,    -1,
     325,   630,    -1,   134,    -1,   134,   390,    -1,   390,   390,
      -1,   390,   390,    11,   390,   390,    -1,   390,   390,    11,
     402,   390,   390,    -1,   390,   390,    11,   400,   407,   399,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   494,   494,   495,   496,   497,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   518,   519,   520,   521,
     522,   523,   524,   525,   526,   527,   528,   529,   530,   531,
     532,   533,   534,   535,   536,   537,   538,   539,   540,   541,
     542,   543,   544,   545,   546,   547,   548,   549,   550,   551,
     552,   555,   556,   559,   560,   561,   562,   563,   564,   565,
     566,   567,   568,   569,   572,   574,   575,   576,   577,   579,
     580,   581,   582,   585,   586,   587,   588,   589,   592,   593,
     596,   597,   598,   601,   604,   607,   610,   622,   629,   636,
     644,   645,   646,   647,   648,   651,   652,   653,   654,   655,
     656,   657,   658,   659,   660,   661,   662,   663,   664,   665,
     666,   667,   668,   669,   670,   671,   672,   673,   674,   675,
     676,   677,   678,   681,   682,   685,   686,   687,   688,   689,
     690,   693,   694,   695,   696,   697,   698,   699,   700,   701,
     702,   703,   704,   705,   706,   707,   708,   709,   712,   713,
     714,   715,   716,   717,   718,   719,   722,   723,   724,   725,
     726,   729,   730,   731,   732,   733,   734,   735,   736,   739,
     740,   741,   744,   745,   746,   747,   750,   751,   752,   755,
     756,   757,   760,   761,   762,   765,   766,   767,   768,   769,
     770,   771,   772,   775,   776,   779,   780,   781,   782,   783,
     784,   787,   788,   789,   790,   793,   794,   795,   796,   797,
     798,   801,   802,   803,   804,   805,   806,   807,   808,   809,
     810,   814,   815,   816,   817,   820,   821,   824,   825,   828,
     829,   832,   833,   836,   837,   841,   842,   843,   844,   845,
     846,   847,   848,   851,   852,   855,   856,   857,   859,   861,
     862,   863,   865,   869,   870,   873,   874,   876,   879,   881,
     887,   888,   889,   892,   893,   894,   897,   898,   899,   900,
     901,   902,   903,   909,   910,   913,   914,   915,   916,   917,
     920,   921,   922,   923,   926,   927,   932,   937,   944,   946,
     948,   950,   952,   954,   955,   956,   959,   961,   963,   965,
     967,   970,   971,   974,   975,   976,   977,   978,   981,   984,
     987,   993,   999,  1002,  1003,  1006,  1007,  1008,  1015,  1016,
    1017,  1018,  1021,  1022,  1025,  1026,  1029,  1030,  1033,  1035,
    1039,  1040,  1043,  1045,  1046,  1047,  1048,  1051,  1052,  1054,
    1055,  1056,  1059,  1061,  1063,  1064,  1066,  1068,  1070,  1072,
    1076,  1079,  1080,  1081,  1082,  1085,  1086,  1089,  1092,  1093,
    1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,  1102,  1103,
    1104,  1105,  1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,
    1114,  1115,  1116,  1117,  1118,  1119,  1120,  1121,  1122,  1123,
    1124,  1125,  1126,  1128,  1129,  1130,  1131,  1132,  1133,  1134,
    1136,  1137,  1138,  1141,  1143,  1147,  1149,  1153,  1154,  1155,
    1156,  1157,  1158,  1159,  1160,  1163,  1164,  1165,  1168,  1171,
    1172,  1174,  1176,  1177,  1178,  1179,  1180,  1181,  1188,  1189,
    1192,  1193,  1194,  1197,  1198,  1201,  1204,  1205,  1207,  1211,
    1212,  1213,  1216,  1220,  1222,  1223,  1224,  1225,  1226,  1227,
    1228,  1229,  1230,  1233,  1234,  1235,  1238,  1239,  1242,  1244,
    1252,  1254,  1256,  1260,  1261,  1263,  1266,  1269,  1270,  1274,
    1276,  1279,  1284,  1285,  1286,  1290,  1291,  1292,  1295,  1296,
    1297,  1300,  1301,  1303,  1304,  1305,  1306,  1307,  1308,  1309,
    1310,  1311,  1312,  1314,  1315,  1318,  1319,  1322,  1323,  1324,
    1325,  1328,  1329,  1332,  1334,  1337,  1341,  1342,  1343,  1345,
    1347,  1351,  1352,  1353,  1356,  1357,  1358,  1359,  1360,  1361,
    1364,  1365,  1366,  1367,  1368,  1369,  1370,  1373,  1374,  1377,
    1380,  1381,  1382,  1385,  1388,  1389,  1390,  1393,  1394,  1395,
    1398,  1399,  1400,  1401,  1402,  1403,  1406,  1407,  1408,  1409,
    1410,  1411,  1412,  1413,  1416,  1417,  1418,  1419,  1422,  1423,
    1426,  1427,  1430,  1431,  1434,  1435,  1438,  1439,  1442,  1443,
    1444,  1447,  1448,  1451,  1452,  1455,  1458,  1466,  1467,  1470,
    1471,  1472,  1473,  1474,  1475,  1476,  1477,  1478,  1479,  1480,
    1481,  1482,  1483,  1484,  1485,  1486,  1487,  1490,  1493,  1494,
    1497,  1498,  1499,  1500,  1503,  1504,  1505,  1506,  1509,  1510,
    1511,  1512,  1513,  1514,  1517,  1518,  1519,  1520,  1521,  1522,
    1524,  1525,  1530,  1531,  1534,  1536,  1538,  1541,  1542,  1543,
    1544,  1545,  1546,  1549,  1551,  1553,  1555,  1556,  1558,  1560,
    1562,  1564,  1566,  1567,  1568,  1571,  1572,  1573,  1574,  1575,
    1576,  1578,  1579,  1580,  1583,  1586,  1588,  1590,  1592,  1594,
    1596,  1598,  1600,  1603,  1605,  1607,  1609,  1610,  1611,  1612,
    1613,  1614,  1615,  1616,  1617,  1620,  1621,  1622,  1623,  1624,
    1625,  1626,  1628,  1630,  1631,  1632,  1635,  1636,  1637,  1638,
    1639,  1640,  1642,  1643,  1644,  1647,  1648,  1649,  1650,  1651,
    1654,  1657,  1660,  1663,  1666,  1669,  1672,  1675,  1678,  1683,
    1686,  1689,  1692,  1695,  1698,  1701,  1704,  1707,  1710,  1713,
    1718,  1721,  1724,  1727,  1730,  1733,  1736,  1739,  1742,  1747,
    1749,  1751,  1753,  1755,  1757,  1762,  1764,  1766,  1770,  1773,
    1776,  1779,  1782,  1785,  1788,  1791,  1794,  1797,  1800,  1805,
    1806,  1807,  1808,  1809,  1810,  1811,  1813,  1815,  1816,  1817,
    1820,  1821,  1822,  1823,  1824,  1825,  1827,  1828,  1829,  1832,
    1834,  1836,  1837,  1839,  1841,  1845,  1846,  1849,  1850,  1851,
    1854,  1857,  1858,  1859,  1860,  1861,  1862,  1863,  1866,  1874,
    1875,  1876,  1877,  1879,  1881,  1882,  1882,  1883,  1884,  1885,
    1886,  1887,  1889,  1890,  1892,  1895,  1898,  1899,  1900,  1903,
    1906,  1909,  1913,  1916,  1919,  1922,  1926,  1931,  1936,  1938,
    1940,  1941,  1943,  1945,  1947,  1949,  1950,  1952,  1954,  1956,
    1960,  1965,  1967,  1969,  1971,  1973,  1975,  1977,  1979,  1981,
    1983,  1985,  1988,  1989,  1991,  1993,  1994,  1996,  1998,  1999,
    2000,  2002,  2004,  2005,  2006,  2008,  2009,  2012,  2016,  2019,
    2022,  2026,  2031,  2037,  2038,  2039,  2041,  2042,  2046,  2048,
    2049,  2050,  2053,  2056,  2059,  2061,  2063,  2068,  2071,  2072,
    2073,  2076,  2080,  2081,  2083,  2084,  2085,  2087,  2088,  2090,
    2091,  2096,  2098,  2099,  2101,  2102,  2103,  2104,  2105,  2106,
    2108,  2110,  2112,  2113,  2114,  2116,  2118,  2119,  2120,  2121,
    2122,  2123,  2124,  2125,  2126,  2127,  2128,  2130,  2132,  2133,
    2134,  2135,  2137,  2138,  2139,  2140,  2141,  2143,  2144,  2145,
    2146,  2147,  2148,  2151,  2152,  2153,  2154,  2155,  2156,  2157,
    2158,  2159,  2160,  2161,  2162,  2163,  2164,  2165,  2166,  2167,
    2168,  2169,  2170,  2171,  2174,  2175,  2176,  2177,  2178,  2179,
    2187,  2194,  2203,  2212,  2219,  2226,  2234,  2242,  2249,  2254,
    2259,  2264,  2269,  2274,  2279,  2285,  2295,  2305,  2315,  2322,
    2332,  2342,  2351,  2363,  2376,  2382,  2385,  2386,  2395,  2397,
    2399,  2404,  2408,  2409,  2410,  2416,  2418,  2420,  2423,  2424,
    2425,  2426,  2427,  2428,  2429,  2432,  2433,  2434,  2435,  2436,
    2437,  2439,  2441,  2443,  2445,  2447,  2449,  2452,  2453,  2454,
    2455,  2457,  2460,  2462,  2464,  2465,  2466,  2468,  2471,  2474,
    2476,  2477,  2478,  2479,  2481,  2482,  2483,  2484,  2485,  2486,
    2488,  2490,  2492,  2495,  2496,  2497,  2499,  2502,  2503,  2504,
    2505,  2507,  2510,  2514,  2515,  2516,  2519,  2522,  2524,  2525,
    2526,  2527,  2529,  2532,  2533,  2535,  2536,  2537,  2538,  2539,
    2541,  2542,  2544,  2547,  2548,  2549,  2550,  2551,  2553,  2555,
    2556,  2557,  2558,  2560,  2562,  2563,  2564,  2565,  2566,  2567,
    2569,  2570,  2572,  2575,  2576,  2577,  2578,  2581,  2582,  2585,
    2586,  2589,  2590,  2593,  2606,  2607,  2611,  2612,  2616,  2617,
    2620,  2624,  2630,  2632,  2635,  2637,  2640,  2642,  2646,  2647,
    2648,  2649,  2650,  2651,  2652,  2656,  2657,  2660,  2661,  2662,
    2663,  2664,  2665,  2666,  2667,  2670,  2671,  2672,  2673,  2674,
    2675,  2676,  2677,  2678,  2679,  2680,  2681,  2684,  2685,  2688,
    2689,  2689,  2692,  2694,  2696,  2699,  2700,  2701,  2702,  2703,
    2704,  2707,  2708,  2711,  2712,  2715,  2719,  2720,  2720,  2723,
    2724,  2727,  2730,  2734,  2735,  2736,  2737,  2738,  2739,  2740,
    2741,  2742,  2743,  2744,  2745,  2747,  2748,  2749,  2750,  2751,
    2752,  2753,  2754,  2755,  2756,  2757,  2758,  2759,  2760,  2763,
    2764,  2765,  2766,  2767,  2768,  2769,  2770,  2776,  2777,  2778,
    2779,  2782,  2784,  2785,  2790,  2792,  2793,  2794,  2795,  2798,
    2799,  2804,  2808,  2809,  2810,  2813,  2814,  2819,  2820,  2823,
    2825,  2826,  2827,  2832,  2834,  2840,  2841,  2842,  2843,  2846,
    2847,  2850,  2852,  2854,  2855,  2858,  2860,  2861,  2862,  2865,
    2866,  2867,  2870,  2871,  2872,  2875,  2876,  2877,  2880,  2884,
    2885,  2886,  2887,  2888,  2891,  2892,  2893,  2894,  2895,  2896,
    2899,  2900,  2901,  2902,  2903,  2906,  2907,  2908,  2911,  2912,
    2913,  2914,  2915,  2916,  2919,  2920,  2921,  2924,  2926,  2928,
    2930,  2931,  2932,  2935,  2936,  2937,  2938,  2939,  2940,  2941,
    2942,  2943,  2944,  2945,  2946,  2947,  2950,  2951,  2952,  2955,
    2956,  2957,  2960,  2961,  2962,  2965,  2966,  2967,  2970,  2971,
    2972,  2973,  2976,  2977,  2978,  2981,  2983,  2985,  2989,  2990,
    2991,  2994,  2995,  2996,  2999,  3001,  3003,  3007,  3008,  3009,
    3012,  3013,  3014,  3017,  3019,  3021,  3025,  3026,  3027,  3030,
    3031,  3032,  3035,  3036,  3037,  3040,  3042,  3044,  3048,  3052,
    3054,  3059,  3062,  3063,  3064,  3065,  3068,  3069,  3072,  3074,
    3076,  3079,  3080,  3081,  3084,  3085,  3088,  3090,  3091,  3092,
    3093,  3096,  3097,  3098,  3101,  3102,  3103,  3106,  3107,  3112,
    3114,  3117,  3124,  3125,  3127,  3132,  3134,  3137,  3138,  3139,
    3140,  3142,  3147
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
  "PIXMASK_", "ZOOM_", "'Y'", "'N'", "'X'", "'='", "$accept", "command",
  "numeric", "debug", "yesno", "fileNameType", "optangle", "angle",
  "sexagesimal", "hms", "dms", "coord", "coordSystem", "wcsSystem",
  "internalSystem", "maskType", "maskBlend", "scaleType", "minmaxMode",
  "skyFrame", "skyFormat", "skyDist", "shmType", "incrLoad", "layerType",
  "pointShape", "pointSize", "analysisTask", "analysisMethod", "endian",
  "threed", "threedShade", "threedShadeNormal", "threedBorder",
  "threedCompass", "threedHighlite", "threedView", "bin", "binAbout",
  "binFactor", "binFunction", "binTo", "block", "blockTo", "clip",
  "clipScope", "clipMode", "clipMinMax", "clipZScale", "colormap",
  "colormapMotion", "colorscale", "contour", "contourCreate",
  "contourDelete", "contourLoad", "contourClipMode", "contourClipScope",
  "contourMethod", "contourPaste", "contourSave", "crop", "crop3d",
  "crosshair", "cube", "cutMethod", "fade", "fitsy", "get", "getHorzCut",
  "getVertCut", "getBin", "getBinCols", "getBlock", "getClip",
  "getClipMinMax", "getClipZScale", "getColorbar", "getColorMap",
  "getColorMapLevel", "getColorScale", "getColorScaleLevel", "getContour",
  "getContourClip", "getContourColorScale", "getCoord", "getCrop",
  "getCrosshair", "getCube", "getCursor", "getData", "getInfo", "getiis",
  "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
  "getFitsDepth", "getFitsFileName", "getFitsSlice", "getGrid", "getLayer",
  "getMask", "layerRef", "getPan", "getRGB", "getMultiColor", "getHLS",
  "getHSV", "getSmooth", "getThreed", "getThreedShade",
  "getThreedShadeNormal", "getThreedBorder", "getThreedCompass",
  "getThreedHighlite", "getThreedView", "getWCS", "getWCSAlign", "grid",
  "gridCreate", "gridType", "has", "hasBin", "hasContour", "hasFits",
  "hasMarker", "hasWCS", "iis", "iisSetFileName", "iiscursor", "load",
  "loadArr", "loadArrayRGBCube", "loadENVI", "loadFits", "loadFitsSlice",
  "loadFitsExtCube", "loadFitsMosaic", "loadFitsMosaicImageIRAF",
  "loadFitsMosaicIRAF", "loadFitsMosaicImageWCS",
  "loadFitsMosaicImageWFPC2", "loadFitsMosaicWCS", "loadFitsRGBCube",
  "loadFitsRGBImage", "loadNRRD", "loadPhoto", "loadIncr", "macosx",
  "magnifier", "match", "marker", "@1", "markerCallBack", "markerCentroid",
  "markerCreate", "compositeOperation", "markerCreateTemplate",
  "markerDelete", "markerEdit", "markerFormat", "markerGet",
  "markerGetCentroid", "markerGetHighlite", "markerGetSelect",
  "markerGetShow", "markerInitProp", "markerLayer", "markerList",
  "markerLoad", "markerMoveSelected", "markerProps", "markerProp",
  "markerProperty", "markerProperties", "markerQuery", "@2", "markerSave",
  "markerSelect", "markerShow", "queries", "query", "markerTags", "@3",
  "tags", "tag", "callback", "layer", "mask", "orient", "pan", "panTo",
  "panMotion", "panner", "postscript", "precision", "pscolorspace",
  "region", "regionHighlite", "regionSelect", "renderMethod",
  "renderBackground", "rgb", "multicolor", "hls", "hsv", "rotate",
  "rotateMotion", "save", "savePixelMask", "saveArray", "saveFits",
  "saveFitsImage", "saveFitsTable", "saveFitsSlice", "saveFitsExtCube",
  "saveFitsMosaic", "saveFitsMosaicImage", "saveArrayRGBCube",
  "saveFitsRGBImage", "saveFitsRGBCube", "saveArrayHLSCube",
  "saveFitsHLSImage", "saveFitsHLSCube", "saveArrayHSVCube",
  "saveFitsHSVImage", "saveFitsHSVCube", "saveFitsResample", "saveNRRD",
  "saveENVI", "smooth", "smoothFunction", "update", "updateFitsSlice",
  "warp", "wcs", "wcsAppend", "wcsReplace", "wcsAlign", "win32", "zoom",
  "zoomTo", 0
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
     635,   636,   637,   638,    89,    78,    88,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   388,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   389,   389,   389,   389,   389,   389,   389,   389,   389,
     389,   390,   390,   391,   391,   391,   391,   391,   391,   391,
     391,   391,   391,   391,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   393,   393,   393,   393,   393,   394,   394,
     395,   395,   395,   396,   397,   398,   399,   399,   399,   399,
     400,   400,   400,   400,   400,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   401,   401,   401,   401,   401,   401,   401,
     401,   401,   401,   402,   402,   403,   403,   403,   403,   403,
     403,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   405,   405,
     405,   405,   405,   405,   405,   405,   406,   406,   406,   406,
     406,   407,   407,   407,   407,   407,   407,   407,   407,   408,
     408,   408,   409,   409,   409,   409,   410,   410,   410,   411,
     411,   411,   412,   412,   412,   413,   413,   413,   413,   413,
     413,   413,   413,   414,   414,   415,   415,   415,   415,   415,
     415,   416,   416,   416,   416,   417,   417,   417,   417,   417,
     417,   418,   418,   418,   418,   418,   418,   418,   418,   418,
     418,   419,   419,   419,   419,   420,   420,   421,   421,   422,
     422,   423,   423,   424,   424,   425,   425,   425,   425,   425,
     425,   425,   425,   426,   426,   427,   427,   427,   427,   427,
     427,   427,   427,   428,   428,   429,   429,   429,   429,   429,
     430,   430,   430,   431,   431,   431,   432,   432,   432,   432,
     432,   432,   432,   433,   433,   434,   434,   434,   434,   434,
     435,   435,   435,   435,   436,   436,   436,   436,   437,   437,
     437,   437,   437,   437,   437,   437,   438,   438,   438,   438,
     438,   439,   439,   440,   440,   440,   440,   440,   441,   441,
     441,   441,   441,   442,   442,   443,   443,   443,   444,   444,
     444,   444,   445,   445,   446,   446,   447,   447,   448,   448,
     449,   449,   449,   449,   449,   449,   449,   450,   450,   450,
     450,   450,   451,   451,   451,   451,   451,   451,   451,   451,
     452,   453,   453,   453,   453,   454,   454,   455,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   456,   456,   456,   456,   456,   456,   456,
     456,   456,   456,   457,   457,   458,   458,   459,   459,   459,
     459,   459,   459,   459,   459,   460,   460,   460,   461,   462,
     462,   462,   462,   462,   462,   462,   462,   462,   463,   463,
     464,   464,   464,   465,   465,   466,   467,   467,   467,   468,
     468,   468,   469,   470,   470,   470,   470,   470,   470,   470,
     470,   470,   470,   471,   471,   471,   472,   472,   473,   473,
     474,   474,   474,   475,   475,   475,   476,   477,   477,   478,
     478,   478,   479,   479,   479,   480,   480,   480,   481,   481,
     481,   482,   482,   482,   482,   482,   482,   482,   482,   482,
     482,   482,   482,   482,   482,   483,   483,   484,   484,   484,
     484,   485,   485,   486,   486,   486,   487,   487,   487,   487,
     487,   488,   488,   488,   489,   489,   489,   489,   489,   489,
     490,   490,   490,   490,   490,   490,   490,   491,   491,   492,
     493,   493,   493,   494,   495,   495,   495,   496,   496,   496,
     497,   497,   497,   497,   497,   497,   498,   498,   498,   498,
     498,   498,   498,   498,   499,   499,   499,   499,   500,   500,
     501,   501,   502,   502,   503,   503,   504,   504,   505,   505,
     505,   506,   506,   507,   507,   508,   508,   509,   509,   510,
     510,   510,   510,   510,   510,   510,   510,   510,   510,   510,
     510,   510,   510,   510,   510,   510,   510,   511,   512,   512,
     513,   513,   513,   513,   514,   514,   514,   514,   515,   515,
     515,   515,   515,   515,   516,   516,   516,   516,   516,   516,
     516,   516,   517,   517,   518,   518,   518,   519,   519,   519,
     519,   519,   519,   520,   520,   520,   520,   520,   520,   520,
     520,   520,   520,   520,   520,   521,   521,   521,   521,   521,
     521,   521,   521,   521,   522,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   523,   523,   523,   523,   524,   524,   524,   524,   524,
     524,   524,   524,   524,   524,   524,   525,   525,   525,   525,
     525,   525,   525,   525,   525,   526,   526,   526,   526,   526,
     527,   527,   527,   527,   527,   527,   527,   527,   527,   528,
     528,   528,   528,   528,   528,   528,   528,   528,   528,   528,
     529,   529,   529,   529,   529,   529,   529,   529,   529,   530,
     530,   530,   530,   530,   530,   530,   530,   530,   531,   531,
     531,   531,   531,   531,   531,   531,   531,   531,   531,   532,
     532,   532,   532,   532,   532,   532,   532,   532,   532,   532,
     533,   533,   533,   533,   533,   533,   533,   533,   533,   534,
     534,   534,   534,   534,   534,   535,   535,   536,   536,   536,
     537,   538,   538,   538,   538,   538,   538,   538,   539,   540,
     540,   540,   540,   540,   540,   541,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   540,   540,   540,   540,   540,   540,   540,
     540,   540,   540,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   543,   543,   543,   543,   543,   543,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   545,   545,   546,   546,
     546,   546,   547,   547,   547,   548,   548,   548,   549,   549,
     549,   549,   549,   549,   549,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   551,   551,   551,   551,   552,   552,   553,
     553,   554,   554,   555,   556,   556,   556,   556,   556,   556,
     557,   557,   558,   558,   558,   558,   558,   558,   559,   559,
     559,   559,   559,   559,   559,   560,   560,   561,   561,   561,
     561,   561,   561,   561,   561,   562,   562,   562,   562,   562,
     562,   562,   562,   562,   562,   562,   562,   563,   563,   564,
     565,   564,   566,   566,   566,   567,   567,   567,   567,   567,
     567,   568,   568,   569,   569,   570,   571,   572,   571,   573,
     573,   574,   575,   576,   576,   576,   576,   576,   576,   576,
     576,   576,   576,   576,   576,   576,   576,   576,   576,   576,
     576,   576,   576,   576,   576,   576,   576,   576,   576,   577,
     577,   577,   577,   577,   577,   577,   577,   578,   578,   578,
     578,   579,   579,   579,   579,   579,   579,   579,   579,   580,
     580,   580,   581,   581,   581,   582,   582,   582,   582,   583,
     583,   583,   583,   584,   584,   585,   585,   585,   585,   586,
     586,   587,   587,   587,   587,   588,   588,   588,   588,   589,
     589,   589,   590,   590,   590,   591,   591,   591,   592,   593,
     593,   593,   593,   593,   594,   594,   594,   594,   594,   594,
     595,   595,   595,   595,   595,   596,   596,   596,   597,   597,
     597,   597,   597,   597,   598,   598,   598,   599,   599,   599,
     599,   599,   599,   600,   600,   600,   600,   600,   600,   600,
     600,   600,   600,   600,   600,   600,   601,   601,   601,   602,
     602,   602,   603,   603,   603,   604,   604,   604,   605,   605,
     605,   605,   606,   606,   606,   607,   607,   607,   608,   608,
     608,   609,   609,   609,   610,   610,   610,   611,   611,   611,
     612,   612,   612,   613,   613,   613,   614,   614,   614,   615,
     615,   615,   616,   616,   616,   617,   617,   617,   618,   619,
     619,   619,   620,   620,   620,   620,   621,   621,   621,   621,
     621,   622,   622,   622,   623,   623,   624,   624,   624,   624,
     624,   625,   625,   625,   626,   626,   626,   627,   627,   627,
     627,   628,   629,   629,   629,   629,   629,   630,   630,   630,
     630,   630,   630
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
       3,     5,     5,     6,     5,     4,     4,     9,    10,    11,
       9,     6,     6,     6,     6,     6,     6,     6,     6,     6,
       7,     7,     2,     4,     4,     4,     4,     5,     4,     4,
       5,     5,     3,     4,     4,     4,     7,     9,     6,    10,
      11,    12,     9,     3,     2,     3,     5,     7,     4,     3,
       3,     6,     7,     7,     4,     4,     9,     4,     3,     4,
       7,     7,     2,     3,     3,     3,     4,     2,     2,     4,
      10,     3,     1,     3,     2,     2,     2,     2,     3,     5,
       4,     5,     2,     2,     2,     2,     3,     2,     2,     2,
       3,     2,     3,     4,     3,     3,     6,     4,     2,     3,
       2,     2,     4,     3,     3,     2,     3,     1,     2,     1,
       2,     2,     2,     1,     1,     1,     1,     2,     1,     2,
       2,     1,     2,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     2,     2,     2,     3,
       5,     7,     7,     6,     6,     6,     6,     5,     6,     6,
       6,     6,     6,     6,     6,    11,     7,     7,     7,     9,
       9,    10,    12,    12,     3,     2,     0,     1,     3,     4,
       4,     4,     0,     1,     1,     4,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     1,     3,
       3,     8,     6,    10,     7,     7,     5,     2,     2,     3,
       4,     5,     5,     5,     3,     4,     5,     5,     5,     5,
       2,     3,     3,     5,     3,     3,     3,     3,     4,     5,
       5,     5,     5,     3,     4,     5,     5,     2,     2,     3,
       5,     6,     6,     3,     3,     6,     5,     5,     2,     3,
       3,     5,     6,     3,     2,     2,     3,     2,     3,     2,
       3,     5,     6,     2,     2,     2,     1,     4,     4,     1,
       2,     2,     2,     2,     2,     2,     2,     3,     2,     3,
       2,     3,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     0,     1,     0,     0,     1,     1,     1,     1,     1,
       7,     8,     2,     6,     2,     6,     2,     3,     2,     1,
       1,     3,     3,     1,     4,     2,     1,     3,     3,     4,
       3,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     0,
       0,     2,     6,     7,     2,     1,     3,     1,     3,     1,
       1,     1,     2,     2,     1,     3,     0,     0,     2,     2,
       1,     3,     5,     0,     1,     1,     2,     2,     3,     2,
       3,     2,     3,     2,     3,     1,     2,     1,     2,     1,
       2,     1,     2,     1,     2,     1,     2,     1,     2,     1,
       2,     2,     3,     2,     2,     2,     2,     1,     1,     1,
       1,     4,     2,     3,     3,     2,     3,     2,     2,     2,
       3,     3,     3,     2,     3,     1,     3,     3,     1,     2,
       2,     2,     2,     9,     6,     1,     1,     1,     1,     2,
       2,     3,     3,     1,     2,     3,     3,     1,     2,     1,
       1,     1,     1,     1,     1,     2,     2,     4,     2,     2,
       2,     2,     2,     4,     2,     2,     2,     2,     2,     4,
       1,     2,     2,     2,     3,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       3,     3,     3,     1,     2,     2,     2,     3,     2,     3,
       3,     3,     3,     3,     3,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     4,     6,
       2,     1,     1,     1,     1,     1,     0,     5,     1,     6,
       3,     1,     2,     2,     2,     3,     3,     2,     2,     2,
       2,     2,     2,     3,     2,     2,     3,     1,     3,     4,
       2,     1,     2,     5,     6,     6,     2,     1,     2,     2,
       5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   340,     0,     0,     0,     0,     0,     0,   368,     0,
       0,    23,     0,     0,     0,     0,     0,  1183,     0,     0,
       0,     0,  1114,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1114,    45,     0,     0,     0,    50,     0,     0,
       0,    54,  1376,    56,     0,     0,     0,     0,     0,     0,
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
       0,  1114,     0,   394,     0,     0,   400,     0,     0,     0,
     404,     0,   406,     0,   408,     0,     0,   578,   412,    20,
       0,   584,    21,   589,     0,     0,   608,   593,   594,   595,
     596,   610,   598,   599,   603,   600,     0,   602,   604,     0,
       0,    22,     0,    24,     0,     0,     0,    26,     0,     0,
       0,    27,     0,   625,     0,     0,     0,   630,     0,    28,
       0,  1185,   141,  1207,     0,  1184,  1199,  1203,  1197,     0,
    1195,  1205,     0,  1201,     0,    36,     0,     0,     0,     0,
       0,     0,    30,   790,    31,     0,     0,     0,     0,     0,
       0,   791,    32,     0,    33,  1118,  1119,  1115,  1116,  1117,
       0,   141,  1209,     0,   135,     0,     0,     0,    35,     0,
      37,     0,  1220,  1219,  1218,  1217,    39,     0,     0,     0,
       0,     0,   171,     0,    40,     0,  1238,     0,  1235,    41,
       0,     0,     0,     0,    44,     0,    43,    42,     0,     0,
       0,     0,    47,     0,     0,  1280,    48,     0,     0,     0,
       0,     0,     0,    49,  1372,  1371,  1375,  1374,  1373,    51,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,  1378,    55,     0,     0,    57,
       0,     0,     0,     0,   171,    58,  1401,    59,     0,     0,
      60,     1,     4,     5,   253,     0,   245,     0,     0,   247,
       0,   255,   248,   252,   263,   264,   249,   265,     0,   251,
     273,   274,   272,   271,     0,     0,   293,     0,   278,   286,
     289,   288,   287,   285,   277,   282,   283,   284,   276,     0,
       0,     0,     0,     0,     0,   281,    10,     0,     0,     0,
       0,     0,     0,     0,     0,   304,     0,     0,   312,     0,
     322,   313,   324,   314,   325,   315,   336,   316,     0,     0,
     317,     0,    93,    94,    95,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   343,     0,     0,     0,
       0,     0,   173,   178,   172,   174,   177,   176,   175,     0,
       0,   360,    68,    69,    70,    71,    72,    64,    65,    66,
      73,    67,     0,   369,     0,   425,   421,   417,   418,   422,
     419,   424,   370,   428,   371,   328,   433,   437,   432,   331,
     330,   329,     0,     0,   372,   444,   374,     0,   373,     0,
     451,   375,   463,   455,   466,   456,   457,   459,     0,   461,
     462,   171,   376,     0,     0,   377,     0,     0,   171,   378,
     475,   171,   473,   379,   476,   381,   171,   477,   380,     0,
     171,     0,   382,   495,     0,   493,   511,     0,     0,     0,
     499,   491,     0,   501,   516,   504,   384,   522,   523,   385,
     386,     0,     0,   547,   548,   549,   389,   544,   545,   546,
     390,     0,   486,     0,   391,    83,   483,     0,   392,   393,
     537,   537,   524,   525,   537,   537,   397,     0,   536,   530,
     535,   531,   532,   533,   534,   396,   543,   398,   399,   539,
     401,     0,   540,   541,   542,   403,   555,   550,   551,   553,
     405,   561,   570,   572,   574,   560,   563,   564,   576,   407,
       0,     0,   581,     0,   411,   171,   583,   590,     0,   591,
     609,   592,   611,   612,   613,   597,   614,   616,   615,   617,
     601,   605,   622,     0,     0,     0,     0,   618,   606,    25,
    1274,  1275,  1276,  1277,  1278,     0,  1269,  1270,  1271,  1272,
       0,     0,     0,   627,   626,     0,     0,     0,     0,    29,
     141,  1208,     0,  1200,  1204,  1198,  1196,  1206,     0,  1202,
       0,   156,   149,   148,   146,   152,   153,   150,   154,   147,
     157,   143,   145,   155,   144,   151,   142,  1189,  1187,  1186,
    1191,  1193,     0,     0,     0,     0,   637,     0,   638,     0,
       0,     0,     0,     0,     0,     0,   639,     0,   789,     0,
     640,     0,   641,     0,     0,   642,     0,   794,   793,   792,
       0,   797,     0,     0,     0,   964,     0,     0,     0,   801,
     805,   807,  1002,     0,     0,     0,     0,   902,     0,     0,
       0,   937,     0,     0,     0,     0,     0,     0,     0,   939,
       0,     0,     0,    34,  1215,  1210,  1216,   138,   139,   137,
     140,   136,  1211,     0,  1213,  1214,  1268,    38,     0,     0,
       0,     0,  1227,  1228,     0,   171,     0,  1225,  1222,     0,
       0,     0,   171,  1245,  1248,  1246,  1247,  1239,  1240,  1241,
    1242,     0,     0,     0,    46,  1265,  1266,     0,  1285,  1287,
    1286,  1282,  1283,  1281,     0,     0,     0,     0,     0,     0,
    1288,     0,  1292,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1289,  1303,     0,     0,     0,
    1291,  1293,     0,     0,     0,  1290,  1370,  1263,  1264,  1262,
     226,     0,   237,   222,     0,   239,   223,     0,   241,   224,
    1260,  1261,  1259,   225,   228,     0,     0,     0,   231,   227,
     229,   230,     0,     0,   221,     0,     0,     0,     0,  1384,
    1397,     0,     0,  1387,     0,     0,  1390,     0,     0,  1389,
    1388,   179,  1407,     0,  1406,  1402,   254,   250,     0,   259,
       0,   256,     0,   275,   166,   169,   170,   168,   167,   290,
     291,   292,   280,   279,   295,   297,   296,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   171,     0,   344,    99,    96,    97,    98,   171,
     346,   345,     0,     0,     0,     0,     0,     0,     0,   359,
       0,   355,   353,   352,   367,   420,     0,     0,   423,   438,
     439,   434,   435,   440,   442,   441,   436,   332,   333,   431,
     430,   446,   445,     0,   450,   464,   465,   454,   467,   460,
     458,   453,     0,     0,   171,   171,   179,   179,   179,   171,
       0,     0,   171,   512,   494,   505,     0,   496,    83,   507,
       0,     0,   498,   500,   171,   517,     0,     0,   503,     0,
       0,   388,     0,   488,    87,    86,   482,     0,   538,   527,
     526,   528,   529,     0,     0,     0,  1016,  1018,  1017,     0,
    1107,     0,  1086,     0,  1089,     0,     0,  1109,  1111,     0,
    1102,   395,     0,   552,   554,   571,   557,   573,   558,   575,
     559,   565,   568,   566,   562,   577,   556,     0,     0,   410,
     582,   579,   580,   179,   607,   619,   620,   621,   623,     0,
       0,     0,   636,   624,     0,     0,     0,  1190,  1188,  1192,
    1194,     0,     0,     0,   192,   192,   186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   189,
     186,     0,     0,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   684,   708,     0,     0,     0,   676,     0,
       0,     0,     0,   192,   186,     0,     0,   785,     0,   795,
     796,   171,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   852,     0,     0,     0,     0,
       0,   874,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   892,     0,     0,   897,   898,     0,     0,     0,   917,
     919,   918,     0,   921,     0,     0,   928,   930,   931,   965,
       0,     0,     0,     0,   799,   800,  1010,  1008,  1013,  1012,
    1011,  1009,  1014,     0,   804,     0,  1004,  1003,   808,     0,
    1007,     0,   809,   810,   811,   812,     0,     0,     0,     0,
       0,   904,     0,     0,   905,  1130,     0,  1133,  1129,     0,
       0,     0,   906,   938,   907,  1148,  1153,  1150,  1156,  1149,
    1147,  1154,  1151,  1145,  1152,  1146,  1155,     0,     0,   912,
       0,     0,     0,     0,   913,  1165,  1169,  1170,     0,  1167,
     914,     0,  1171,   915,   935,     0,     0,     0,   940,   941,
     942,  1212,  1226,     0,     0,  1233,  1229,     0,     0,     0,
    1224,  1223,  1237,  1236,     0,     0,  1253,     0,     0,  1249,
       0,  1257,     0,     0,  1250,     0,  1284,   215,   215,     0,
       0,     0,   215,     0,  1317,     0,  1316,     0,     0,     0,
       0,  1304,     0,     0,     0,     0,  1308,     0,     0,     0,
    1315,     0,     0,     0,     0,     0,  1306,  1318,     0,     0,
       0,  1305,   215,   215,   215,  1295,  1294,  1296,     0,   238,
     240,   242,   232,     0,   235,   234,   233,     0,   243,     0,
      62,     0,  1380,     0,  1385,   171,  1400,     0,  1391,  1392,
       0,  1394,  1395,     0,   180,   181,  1386,  1408,  1409,     0,
     246,     0,   260,     0,     0,     0,     0,   294,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,   171,     0,     0,     0,     0,   171,     0,
     358,     0,   357,   427,   426,     0,     0,     0,   171,     0,
     179,   472,   470,   474,   478,     0,     0,     0,   179,     0,
     513,   497,     0,   508,   510,   182,     0,     0,   387,     0,
       0,    62,     0,   487,    85,    84,     0,     0,  1028,     0,
       0,     0,     0,     0,     0,  1040,     0,     0,     0,     0,
       0,     0,  1057,  1058,     0,     0,     0,     0,  1068,     0,
    1074,  1075,  1077,  1079,     0,  1083,  1094,  1095,  1096,     0,
    1098,  1103,  1105,  1106,  1104,  1015,     0,  1085,     0,  1084,
    1027,     0,     0,  1090,     0,  1092,     0,  1091,  1112,  1093,
    1100,     0,     0,   569,   567,   409,     0,     0,  1279,  1273,
     634,   635,     0,   632,   628,     0,   192,   192,   192,   193,
     194,   646,   647,   188,   187,     0,   192,   192,   192,     0,
     654,   653,   652,   664,   189,   192,   192,   192,   190,   191,
     192,   192,     0,   192,   192,     0,   189,     0,   677,     0,
     683,     0,   682,   681,   680,     0,     0,     0,   707,     0,
     706,     0,   679,   678,     0,     0,     0,     0,   189,   189,
     186,     0,     0,   186,     0,     0,     0,   192,   192,   781,
       0,   192,   192,   786,     0,   205,   206,   207,   208,   209,
     210,     0,    91,    92,    90,   816,     0,     0,     0,     0,
       0,   958,   956,   951,     0,   961,   945,   962,   948,   960,
     954,   943,   957,   946,   944,   963,   959,     0,     0,   830,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   862,     0,     0,     0,     0,   873,
     875,     0,     0,   880,   879,     0,     0,   195,     0,     0,
     171,     0,   888,     0,     0,     0,     0,   893,   894,   895,
       0,     0,     0,   901,   916,   920,   922,   925,   924,     0,
       0,     0,   929,   966,   968,     0,   967,   802,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   996,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   806,     0,     0,     0,     0,   903,     0,
     171,  1126,  1124,  1122,     0,     0,   171,  1128,   908,     0,
       0,     0,     0,  1164,     0,     0,  1172,   933,   934,     0,
     936,  1232,  1234,  1231,  1230,  1221,     0,     0,     0,  1254,
       0,     0,  1258,  1267,   217,   218,   219,   220,   216,  1298,
    1297,     0,     0,     0,  1302,     0,     0,     0,  1301,     0,
       0,     0,  1300,  1299,   215,     0,     0,     0,  1307,     0,
       0,     0,  1314,     0,     0,     0,  1313,     0,     0,     0,
    1312,     0,     0,     0,  1311,     0,     0,     0,     0,     0,
    1328,     0,  1363,  1362,  1364,     0,     0,     0,  1310,     0,
       0,     0,  1309,  1323,  1322,  1324,  1320,  1319,  1321,  1366,
    1365,  1367,     0,   236,     0,     0,  1382,  1383,     0,  1398,
     171,  1393,  1396,     0,     0,   171,     0,     0,     0,   257,
       0,     0,     0,     0,   298,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   335,   334,     0,     0,   326,   337,
     339,     0,   349,   351,   350,   348,   171,   356,     0,     0,
       0,   179,   171,     0,     0,     0,     0,   492,   506,   515,
       0,   509,   184,   185,   183,   502,     0,   518,     0,     0,
     485,   490,    83,     0,     0,     0,     0,     0,     0,   171,
    1029,     0,     0,     0,  1034,     0,   171,     0,  1041,  1042,
       0,  1044,  1045,  1046,  1047,     0,     0,     0,  1053,     0,
    1059,     0,     0,     0,  1063,  1064,     0,     0,     0,  1069,
    1070,     0,     0,  1073,  1076,  1078,  1080,     0,     0,  1097,
    1099,  1019,  1108,  1020,     0,     0,  1110,  1101,     0,     0,
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
     817,     0,     0,     0,     0,     0,     0,     0,   950,   947,
     953,   952,   949,   955,     0,     0,     0,     0,     0,   171,
     835,   836,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   853,   854,   855,     0,   859,
     856,   858,     0,     0,   864,   863,   865,     0,     0,     0,
       0,     0,     0,   171,   171,   878,   201,   197,   202,   196,
     199,   198,   200,   884,   885,     0,     0,   887,   889,   171,
     171,     0,   896,   899,   171,   171,   923,   927,   969,   803,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     997,  1113,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   995,     0,     0,     0,
       0,     0,   813,   814,   171,   179,  1127,     0,     0,  1131,
    1132,     0,     0,   910,     0,   171,     0,  1166,  1168,   932,
       0,  1251,  1252,  1255,  1256,   215,   215,   215,   215,   215,
     215,   215,   215,   215,  1368,  1326,  1325,  1327,  1360,  1359,
    1361,  1357,  1356,  1358,  1351,  1350,  1352,  1348,  1347,  1349,
    1330,  1329,  1333,  1332,  1334,  1331,  1342,  1341,  1343,  1339,
    1338,  1340,     0,     0,  1377,     0,  1399,     0,   171,     0,
    1403,     0,     0,   261,     0,   258,     0,     0,     0,     0,
       0,   306,     0,     0,     0,     0,     0,     0,     0,   171,
       0,   341,   159,     0,   447,     0,   468,   179,   182,     0,
       0,   481,     0,   519,   520,     0,   484,     0,     0,     0,
       0,     0,   171,  1030,   182,   182,   182,   171,  1035,   182,
     179,   182,   182,   171,  1048,   182,   182,   182,   171,  1054,
     182,   182,   171,     0,   182,   171,   182,   182,   171,   182,
     171,  1087,  1088,     0,     0,   586,     0,   648,   655,   656,
     657,     0,   661,   662,   663,   669,   192,   189,   675,   696,
     697,   698,   699,   700,     0,   702,   703,   189,   189,   759,
     760,   761,   762,   764,     0,   767,   768,     0,   189,   770,
     771,   772,   773,   774,     0,   776,   777,   189,     0,     0,
       0,   189,   189,   186,     0,     0,     0,     0,     0,     0,
     189,   189,   186,     0,     0,     0,     0,     0,     0,   189,
     189,   186,     0,     0,     0,   189,   192,   192,   192,   192,
     192,     0,   192,   192,     0,   189,   189,   192,   192,   192,
     192,   192,     0,   192,   192,     0,   189,   689,   189,     0,
     695,     0,     0,   782,     0,   818,   182,     0,     0,   182,
       0,     0,     0,   828,   182,   831,   832,   182,   834,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   857,   860,   861,     0,   182,     0,     0,     0,
     876,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1157,   994,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   171,     0,     0,    88,     0,     0,
    1005,  1006,   179,     0,     0,     0,  1134,   909,   911,   179,
     171,  1244,  1354,  1353,  1355,  1345,  1344,  1346,  1336,  1335,
    1337,  1369,     0,  1379,  1410,     0,     0,  1405,  1404,   262,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   302,
       0,     0,   327,   182,   448,   452,   469,   471,     0,   479,
     514,   171,     0,     0,     0,     0,     0,     0,  1026,  1031,
    1033,  1032,  1036,  1037,  1038,  1039,  1043,  1049,  1050,  1051,
    1052,  1055,  1056,  1060,   179,   182,  1066,   179,  1067,  1071,
     179,  1081,   179,     0,   171,     0,   585,     0,   660,   671,
     192,   189,   704,   763,   189,     0,   769,   189,   778,   192,
     192,   192,   192,   192,     0,   192,   192,   189,   192,   192,
     192,   192,   192,     0,   192,   192,   189,   192,   192,   192,
     192,   192,     0,   192,   192,   189,   192,   719,   720,   721,
     722,   724,   189,   727,   728,     0,   192,   192,   748,   749,
     750,   751,   753,   189,   756,   757,     0,   192,   691,   189,
     787,   788,   171,   820,     0,   182,   822,     0,   171,     0,
     829,   833,   171,     0,   841,   842,   843,   844,   848,   849,
     845,   846,   847,     0,     0,   182,   868,     0,   171,     0,
       0,   881,   182,     0,     0,   182,   182,     0,   926,     0,
     203,   203,     0,     0,   203,     0,   203,  1113,     0,     0,
       0,     0,     0,     0,     0,     0,  1158,  1136,     0,  1143,
    1144,     0,   203,   203,     0,     0,     0,     0,     0,     0,
       0,     0,   998,     0,     0,     0,  1113,    89,     0,   203,
       0,  1160,   171,   171,     0,   179,     0,   244,  1412,  1411,
       0,     0,   266,     0,     0,     0,     0,     0,   310,     0,
       0,     0,   342,   480,     0,   361,     0,  1022,     0,   211,
       0,  1061,  1062,  1065,  1072,  1082,   402,     0,   361,     0,
     672,   701,   765,   189,   775,   710,   711,   712,   713,   714,
     189,   716,   717,   192,   739,   740,   741,   742,   743,   189,
     745,   746,   192,   730,   731,   732,   733,   734,   189,   736,
     737,   192,   723,   192,   189,   729,   752,   192,   189,   758,
     692,     0,   182,   823,     0,     0,     0,     0,     0,   850,
     851,   866,     0,     0,     0,   877,   882,     0,   890,   891,
     883,   182,     0,   204,  1113,  1113,    88,     0,  1113,     0,
    1113,   970,   171,     0,     0,     0,     0,     0,     0,     0,
    1135,     0,     0,  1113,  1113,    88,     0,     0,  1113,  1113,
       0,     0,  1113,  1001,   999,  1000,   977,  1113,  1113,  1160,
    1176,     0,  1125,  1123,  1162,     0,     0,     0,     0,   268,
     300,   301,     0,     0,     0,   299,     0,   361,   362,   364,
     363,   413,     0,     0,   212,   214,   213,  1024,  1025,   361,
     415,     0,   766,   192,   718,   192,   747,   192,   738,   725,
     192,   754,   192,     0,   819,   182,   182,     0,   182,     0,
     182,   182,     0,   182,     0,  1113,   983,   979,  1113,     0,
     984,     0,   978,  1113,     0,  1138,     0,  1141,  1181,  1142,
    1140,  1137,     0,   981,   980,  1113,     0,     0,   975,   973,
    1113,   171,   974,   976,   982,  1176,  1120,     0,     0,  1161,
    1174,  1163,  1243,     0,     0,   308,   309,   307,   328,   331,
     329,     0,     0,   414,  1021,   171,   416,   631,   715,   744,
     735,   726,   755,   182,   821,   827,     0,   840,   837,   867,
     872,     0,   886,     0,   988,   972,    88,     0,   986,     0,
    1139,     0,   971,    88,     0,   987,     0,  1121,  1178,  1180,
       0,  1173,     0,     0,     0,     0,     0,     0,   211,     0,
     824,   171,   838,   869,   900,  1113,     0,  1182,     0,  1113,
       0,   182,  1179,  1175,   267,     0,     0,     0,     0,     0,
    1023,   798,   171,   825,   839,   171,   870,   990,     0,  1113,
     989,     0,     0,   269,   321,     0,   320,     0,   826,   871,
      88,   991,    88,  1113,   319,   318,  1113,  1113,   985,   993,
     992
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,  1604,   178,   160,  1046,  2726,  2727,   476,   477,
     478,   479,   161,   162,   163,   802,   727,    99,   939,   499,
    1386,  1895,  1535,  1550,  1531,  2133,  2834,  1601,  2897,  1769,
     382,   899,  1365,   883,   886,   889,   904,    68,   406,   412,
     416,   419,    73,   422,    80,   438,   434,   428,   445,    90,
     455,   100,   106,   461,   463,   465,   533,   999,  1866,   467,
     470,   113,   486,   164,   166,  2891,   182,   184,   229,  1041,
    1089,   522,   988,   524,   534,   991,   996,   536,   538,  1002,
     541,  1004,   552,  1007,  1009,   555,   559,   563,   565,   568,
     572,   608,   604,  1453,   586,  1027,  1032,  1024,  1441,  1038,
     589,   616,   625,  1049,   630,   635,   627,   600,   596,   640,
     649,  1084,  1514,  1076,  1078,  1080,  1086,   654,  1091,   232,
     656,  1962,   251,   659,   661,   665,   670,   678,   269,  1524,
     693,   292,   736,  1540,   738,   746,  1148,  1558,  1143,  2023,
    1570,  1568,  2025,  1144,  1560,  1562,   752,   755,   750,   294,
     302,   304,   793,  1225,  1627,  1214,  1723,  2161,  2176,  1228,
    1232,  1223,  1071,  1495,  1499,  1507,  1509,  2480,   310,  1241,
    1244,  1252,  2706,  2707,  2708,  2481,  2870,  2871,  1274,  1280,
    1283,  2959,  2960,  2956,  2957,  3008,  2709,  2710,   285,   318,
     326,   334,   817,   812,   339,   344,   346,   827,   834,  1309,
    1314,   893,   880,   352,   320,   261,   257,   356,   841,   363,
     875,   850,   865,   866,  1351,  1346,  1788,  1336,  1810,  1782,
    1822,  1818,  1778,  1804,  1800,  1774,  1796,  1792,  1340,   870,
     852,   369,   370,   386,  1372,   389,   395,   916,   919,   913,
     397,   400,   924
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2751
static const yytype_int16 yypact[] =
{
    5202,   104,   518,    33, -2751, -2751,  1250,  -185,   990,   795,
    1311,    96,  1423,   108,   451,   192,  1069,    72,  5419,    57,
    2703, -2751,   141,   -33,   210,   996,   209,   868,  1158,   -15,
      28,   254,   561,   814,   -68,   430,  1075,  3070,    36,  1254,
     273,   420,   561, -2751,   365,    19,    91, -2751,   512,   538,
    1096, -2751,   426, -2751,    62,  3329,   362,    94,   635,    15,
    1120,   375,   658,   673,   118,   676,    20,   637, -2751, -2751,
   -2751,   698,   253, -2751,   577,   159,   451,   -21,    81,   542,
   -2751,   682,   253, -2751, -2751,   253,   253,   618,   755,   253,
   -2751, -2751, -2751, -2751,   253, -2751, -2751, -2751, -2751, -2751,
   -2751,    50,   716,   771,   779,   199, -2751,   253,  1624,   253,
     253,  1355,   253, -2751, -2751, -2751,   574, -2751, -2751, -2751,
   -2751,  4514, -2751, -2751, -2751, -2751, -2751, -2751,   253, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751,  1587, -2751,   253, -2751,   790, -2751, -2751,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451, -2751, -2751,
   -2751, -2751, -2751,   708, -2751,   782,  1744,   697,   400,   536,
     680,   401,  3972,   693,  4568,  4474,   843,  4514,  3389, -2751,
     609,  -145,   825,   893,   822,   427,   459,   554,   858,   903,
     544,   561,   565, -2751,   626,   877, -2751,   729,   641,   464,
   -2751,   523, -2751,  1135, -2751,   190,   899,    75, -2751, -2751,
    4870, -2751, -2751, -2751,   947,   956,  1010, -2751, -2751, -2751,
   -2751,   439, -2751, -2751, -2751, -2751,  1232, -2751, -2751,  4870,
    4105, -2751,  1022, -2751,   121,  4870,  1051, -2751,    51,  4870,
    1055, -2751,    74, -2751,  1058,  1078,    83, -2751,   253, -2751,
    1103,  1217,  2662, -2751,  1104, -2751, -2751, -2751, -2751,  1112,
   -2751, -2751,   253, -2751,   451, -2751,   597,  1124,   549,   760,
    1129,    22, -2751, -2751, -2751,  1139,  1143,   451,   451,   253,
     253, -2751, -2751,  1157, -2751, -2751, -2751, -2751, -2751, -2751,
    3020,  2662, -2751,  1163,    54,   253,  4870,   253, -2751,  4870,
   -2751,  1174, -2751, -2751, -2751, -2751, -2751,   253,  1474,   451,
    3160,   253,  1587,   253, -2751,  1186, -2751,  3513, -2751, -2751,
     901,  1193,  1200,   253, -2751,  1214, -2751, -2751,   -50,  1216,
    4870,  1220, -2751,  1523,   253,  1137, -2751,  1179,  1115,  2015,
     480,  1236,   571, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
    1243, -2751,   119,   207,   241,   361,    82,   253,   163,  1249,
     253,    45, -2751,   253,   961,  1260, -2751,   253,   253, -2751,
      34,    43,    73,  1265,  1587, -2751, -2751, -2751,  1017,   253,
   -2751, -2751, -2751, -2751, -2751,   253, -2751,  1267,  1269, -2751,
     253,   640, -2751, -2751, -2751, -2751, -2751, -2751,   253, -2751,
   -2751,   253, -2751, -2751,  1067,  1067, -2751,  1296, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,  1093,
     253,   253,  1325,  1329,  1340, -2751, -2751,   253,   253,   253,
     253,   253,   253,  1353,   253, -2751,  1359,   253, -2751,  1361,
   -2751, -2751, -2751, -2751,   633, -2751,  1284, -2751,  4870,  1366,
   -2751,   253, -2751, -2751, -2751,   253,  1393,  1398,  1398,  4870,
     253,   253,   253,   253,   253,   253, -2751,   253,  4514,  1624,
     253,   253, -2751, -2751, -2751, -2751, -2751, -2751, -2751,  1624,
     253, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751,  1405, -2751,  1122,   344, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751,   687, -2751, -2751, -2751,  1238,
   -2751,   -22,    49,    49, -2751, -2751, -2751,  1430, -2751,  1433,
   -2751, -2751,  -119, -2751,  1242, -2751, -2751, -2751,  1253, -2751,
   -2751,  1587, -2751,   253,   253, -2751,  4870,  4870,  1587, -2751,
   -2751,  1587, -2751, -2751, -2751, -2751,  1587, -2751, -2751,  4870,
    1587,   253, -2751, -2751,  4870, -2751,  1439,   517,  1226,     8,
   -2751, -2751,  1228,  4870,    58, -2751, -2751, -2751, -2751, -2751,
   -2751,  1443,  1445, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751,  1451, -2751,  1241, -2751,   -30, -2751,   253, -2751, -2751,
    1453,  1453, -2751, -2751,  1453,  1453, -2751,   466, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751,   190, -2751, -2751, -2751, -2751, -2751, -2751,  1262,  1274,
   -2751, -2751,  1394,  1401,  1408, -2751, -2751,    41,  1234, -2751,
     253,  1481,  1255,  3513, -2751,  1587, -2751, -2751,  1489, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751,  4870,  4870,  4870,  4870, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751,  1500, -2751, -2751, -2751, -2751,
    1504,  1506,   451, -2751, -2751,  1507,  1524,  1313,   253, -2751,
    2662, -2751,  1525, -2751, -2751, -2751, -2751, -2751,   253, -2751,
     451, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751,   919,  1446,  1448,  1459, -2751,  1531, -2751,   730,
    1464,    63,    80,  3417,   487,  1537, -2751,  1540, -2751,  1557,
   -2751,   437, -2751,  1559,  1560, -2751,  1562, -2751, -2751, -2751,
     253, -2751,  3513,  4477,  1730,  1041,  1568,   588,  1471, -2751,
   -2751, -2751,    47,   632,  1574,  1580,   187,   253,   567,   449,
     752,  4870,   451,  2598,   723,    21,   483,   337,    23, -2751,
    1567,  1575,  1589, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751,   253, -2751, -2751, -2751, -2751,   253,   253,
     253,   253, -2751, -2751,   253,  1587,   253, -2751,   253,  1624,
     253,  1593,  1587, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751,  1595,     5,     6, -2751, -2751, -2751,  1598, -2751, -2751,
   -2751, -2751,  1509, -2751,  1619,  1621,  1549,  1552,  1555,  1641,
   -2751,  1644, -2751,  1645,  1561,  1646,   510,   548,   603,    79,
     608,   699,   625,  1651,   709, -2751, -2751,  1656,  1665,  1652,
   -2751, -2751,  1669,  1670,  1684, -2751,  1685, -2751, -2751, -2751,
   -2751,  1686, -2751, -2751,  1688, -2751, -2751,  1689, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751,   253,   364,   253, -2751, -2751,
   -2751, -2751,   253,   253, -2751,   253,   727,   253,   253, -2751,
    3513,  1629,  1693, -2751,  1181,  1700, -2751,  1190,  1703, -2751,
   -2751,   -29,   253,   253, -2751,  1708, -2751, -2751,  1715,  1227,
     253,  1716,   599, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751,  1724,  1726,   253,
     253,   253,   253,   253,  1729,   253,  1733,   253,  1735,   451,
    1736,  1748,  1587,  4870, -2751, -2751, -2751, -2751, -2751,  1587,
   -2751, -2751,   253,   253,   253,  4870,   253,  1624,   253, -2751,
     253, -2751, -2751, -2751, -2751, -2751,  1754,  1755, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751,   693, -2751,   253, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751,  4870,   253,  1587,  1587,   -29,   -29,   -29,  1587,
    1624,   253,  1587, -2751, -2751, -2751,   253, -2751,   -30,  1548,
    1756,  1749, -2751, -2751,  1587, -2751,  1576,  1591, -2751,  1760,
    1791, -2751,  1761,  1322,  1759,  1762, -2751,   253, -2751, -2751,
   -2751, -2751, -2751,  2589,   769,   950, -2751, -2751, -2751,   253,
     107,   136, -2751,  1516, -2751,  2598,  1517,   300,  1486,    65,
   -2751, -2751,   253, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751,  1495, -2751, -2751, -2751, -2751,   253,  1804, -2751,
   -2751, -2751, -2751,   -29, -2751, -2751, -2751, -2751, -2751,  1807,
    1808,  4641, -2751, -2751,  1809,  1810,   253, -2751, -2751, -2751,
   -2751,  1811,  1812,  1813,   -38,   -38,   -52,  1817,  1818,  1819,
    1820,  1820,  1820,  1526,  1527,  1823,  1825,  1828,   131,   131,
     -52,  1834,  1850,   -52,  1852,  1854,  1856,  1858,  1856,  1858,
    4837,  1859,  1872, -2751, -2751,  1856,  1858,   948, -2751,  1874,
    1875,  1880,  1881,   -38,   -52,  1876,  1883, -2751,  1884, -2751,
   -2751,  1587,  1275,  1743,  1627,  1630,  1631,  1781,   819,  1633,
    1893,     2,   -62,  1787,  1788,  1815,  1862,  1639,  1640,  1794,
    1902,  1673,   175,   134,   267,  1642,  4870,  2598,  1870,   740,
    1643,  1675,  1909,    39, -2751, -2751,   189,  1911,  1913, -2751,
   -2751, -2751,  1916,  1680,   228,  2598,  1690, -2751, -2751, -2751,
     451,  1920,  1921,   253, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751,     4, -2751,   997, -2751, -2751, -2751,   253,
   -2751,   253, -2751, -2751, -2751, -2751,   253,   253,   253,   588,
    4870, -2751,  1922,  1334, -2751, -2751,   253, -2751, -2751,   253,
    4870,   253, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751,   451,   253, -2751,
     253,   588,  1923,  1924, -2751, -2751, -2751, -2751,   253,   253,
   -2751,   451, -2751, -2751, -2751,   857,  1926,  1928, -2751, -2751,
   -2751, -2751, -2751,   253,   253, -2751, -2751,  1624,   253,   253,
   -2751, -2751, -2751, -2751,  1932,   253, -2751,   253,  1821, -2751,
     253, -2751,   253,  1822, -2751,  1934, -2751,  1447,  1447,   732,
     757,   793,  1447,  1936, -2751,   897, -2751,   913,   933,   951,
     976, -2751,  1937,  1938,  1003,  1941, -2751,  1942,  1944,  1946,
   -2751,  1007,  1032,  1948,  1952,  1955, -2751, -2751,  1956,  1959,
    1961, -2751,  1447,  1447,  1447, -2751, -2751, -2751,   253, -2751,
   -2751, -2751, -2751,   253, -2751, -2751, -2751,   253, -2751,   253,
     555,  4870, -2751,   253, -2751,  1587, -2751,  3513, -2751, -2751,
    1963, -2751, -2751,  1964, -2751, -2751, -2751, -2751,  1935,  3160,
   -2751,   253,  1949,   253,   253,   253,  1488, -2751,  1962,   253,
     253,  1966,   253,   253,  1967,   253,  1968,   253,   -12,  1971,
     451,   451, -2751,  1587,   253,  1974,  1975,  1977,  1587,  4870,
   -2751,   253, -2751, -2751, -2751,   253,   253,   253,  1587,  4870,
     -29, -2751, -2751, -2751, -2751,  1624,   253,  1978,   -29,   253,
     756, -2751,  1982, -2751, -2751,  1087,  3361,   253, -2751,   253,
    1979,  1988,   253, -2751, -2751, -2751,  1985,  1367,  4514,  1707,
    1727,  1728,    29,  4870,  1734, -2751,    12,   313,    59,  1737,
    1738,   125, -2751, -2751,   408,  1814,   315,   860,  2598,   -28,
   -2751,  1989,  1723, -2751,   743, -2751, -2751, -2751, -2751,  2598,
    1767, -2751, -2751, -2751, -2751, -2751,   253, -2751,   253, -2751,
   -2751,   253,   253, -2751,   253, -2751,   253, -2751, -2751, -2751,
   -2751,  1784,   253, -2751, -2751, -2751,   253,    69, -2751, -2751,
   -2751, -2751,  2003,  2004, -2751,   253,   -38,   -38,   -38, -2751,
   -2751, -2751, -2751, -2751, -2751,  2005,   -38,   -38,   -38,  1162,
   -2751, -2751, -2751, -2751,   131,   -38,   -38,   -38, -2751, -2751,
     -38,   -38,  2006,   -38,   -38,  2007,   131,  1285, -2751,  1076,
   -2751,  1304, -2751, -2751, -2751,  2020,  2021,  2022, -2751,  1164,
   -2751,  1268, -2751, -2751,  1712,  2023,  2024,  2025,   131,   131,
     -52,  2029,  2030,   -52,  2031,  2033,  2035,   -38,   -38, -2751,
    2038,   -38,   -38, -2751,  2040, -2751, -2751, -2751, -2751, -2751,
   -2751,   451, -2751, -2751, -2751,  4514,  1402,   253,  1543,  1614,
     873, -2751, -2751, -2751,   924, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751,  2041,   253, -2751,
     451,  2042,   253,  4870,   451,  2044,  1674,  1771,  1779,   197,
     198,  1786,   269,  1709,  1710,  2049,  2050,  2052,   819,  2053,
    2054,  2055,  1718,  1720,  1347,  2060,   253,  1554,  1679, -2751,
   -2751,   451,  4870, -2751, -2751,  4870,   253,    66,  2061,   253,
    1587,   451, -2751,  2063,  4870,  4870,   253, -2751, -2751, -2751,
     451,   451,  4870, -2751, -2751, -2751, -2751, -2751, -2751,  4870,
     253,   451, -2751, -2751, -2751,   253, -2751, -2751,  2066,   253,
    1816,    67,   253,  1826,   253,   129,   253,  2069,   253,  1827,
    1830,   253,   253,   253,   253,   253,   253,   253,   253,    11,
     253,   253,  1831, -2751,   253,   253,   253,   253, -2751,  4870,
    1587,  2077,  2079,  2080,   253,   253,  1587, -2751,   253,   253,
     253,  4870,   588, -2751,   253,   253, -2751, -2751, -2751,  2081,
   -2751, -2751, -2751, -2751, -2751, -2751,  2083,   253,   253, -2751,
     253,   253, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751,  2084,  2085,  2096, -2751,  2097,  2098,  2100, -2751,  2102,
    2103,  2101, -2751, -2751,  1447,  2104,  2105,  2107, -2751,  2108,
    2110,  2113, -2751,  2114,  2115,  2117, -2751,  2118,  2119,  2122,
   -2751,  2120,  2123,  2125, -2751,  2126,  2130,  2131,  2132,  2135,
   -2751,  2137, -2751, -2751, -2751,  2138,  2140,  2142, -2751,  2152,
    2153,  2167, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751,   253, -2751,   253,   253, -2751, -2751,   253, -2751,
    1587, -2751, -2751,  3160,   253,  1587,   253,   253,   253, -2751,
     253,   253,  2168,   253, -2751,   253,   253,  2173,   253,   253,
    2174,   253,  2175,   253, -2751, -2751,  2177,  4870, -2751, -2751,
   -2751,   253, -2751, -2751, -2751, -2751,  1587, -2751,   902,   253,
     902,   -29,  1587,  4870,   253,   253,  2180, -2751, -2751, -2751,
     253, -2751, -2751, -2751, -2751, -2751,  4870, -2751,  4870,   253,
   -2751, -2751,   -30,  2181,  2185,  2186,  2187,  2190,  4870,  1587,
   -2751,  4870,  4870,  4870,  4514,  4870,  1587,  4870, -2751, -2751,
    4870, -2751, -2751, -2751,  4514,  4870,  4870,  4870,  4514,  4870,
   -2751,  4870,  4870,   253, -2751, -2751,  4870,  4870,  4870, -2751,
   -2751,  4870,  4870, -2751, -2751, -2751, -2751,  4870,  4870, -2751,
   -2751, -2751, -2751, -2751,   253,   253, -2751, -2751,  2192,   253,
   -2751, -2751,  2193, -2751, -2751,   253, -2751, -2751, -2751,   -38,
   -2751, -2751, -2751,  2194,  2195,  2196, -2751, -2751,   -52,  2198,
    2199,  2200,   -38, -2751, -2751, -2751, -2751, -2751,   131, -2751,
   -2751,  2202,   -38,  2206,  2207,  2209,   131,   131,   -52,  2203,
    2211,  2212,  1785,  2213,  2214,  2215,   131,   131,   -52,  2217,
    2218,   -52,  2220,  2221,  2222,  2224,   131,   131,   -52,  2219,
    2226,  2227,  1306, -2751,  1309, -2751,  1368,  1835,  2228,  2230,
    2231,   131,   131,   -52,  2233,  2235,   -52,  2236,  1842,  2238,
    2240,  2242,   131,   131,   -52,  2246,  2248,   -52,  2249,   131,
   -2751, -2751, -2751, -2751, -2751,  2251, -2751, -2751,  2254,   131,
    2257,  2259, -2751, -2751,   -38, -2751, -2751,  2260, -2751,  1587,
   -2751,  4870,   253,   253,  4870,   253,  2261,  1743, -2751, -2751,
   -2751, -2751, -2751, -2751,  2262,  4870,   451,  2263,  4870,  1587,
   -2751, -2751,  2264,  1743,   253,   253,   253,   253,   253,   253,
     253,   253,   253,  2267,  2269, -2751, -2751, -2751,  2270, -2751,
   -2751, -2751,  2274,  2276, -2751, -2751, -2751,   253,  4870,   253,
    2279,  1743,   451,  1587,  1587, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751,   253,  1624, -2751, -2751,  1587,
    1587,   253, -2751, -2751,  1587,  1587, -2751, -2751, -2751, -2751,
     253,   253,   253,   253,   253,   253,   253,   253,   253,   253,
   -2751, -2751,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253,   253,  2205,  2280,   253, -2751,   253,   253,   253,
    2282,  2284, -2751, -2751,  1587,   -29, -2751,  2285,  2286, -2751,
   -2751,  1624,   253, -2751,  2288,  1587,  4870, -2751, -2751, -2751,
    2289, -2751, -2751, -2751, -2751,  1447,  1447,  1447,  1447,  1447,
    1447,  1447,  1447,  1447, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751,  1743,   253, -2751,   253, -2751,   253,  1587,   253,
   -2751,  1624,   253, -2751,   253, -2751,  2111,  2290,  2291,   253,
     253, -2751,   253,   253,  2292,   253,  2294,   253,  2296,  1587,
    4870, -2751, -2751,   253, -2751,   253, -2751,   -29,  1087,   253,
    2297, -2751,   253, -2751, -2751,  4514, -2751,  2298,  2299,  2300,
    2301,  2302,  1587, -2751,  1087,  1087,  1087,  1587, -2751,  1087,
     -29,  1087,  1087,  1587, -2751,  1087,  1087,  1087,  1587, -2751,
    1087,  1087,  1587,  4870,  1087,  1587,  1087,  1087,  1587,  1087,
    1587, -2751, -2751,  2305,  4514,  2307,   253, -2751, -2751, -2751,
   -2751,  2306, -2751, -2751, -2751, -2751,   -38,   131, -2751, -2751,
   -2751, -2751, -2751, -2751,  2309, -2751, -2751,   131,   131, -2751,
   -2751, -2751, -2751, -2751,  2312, -2751, -2751,  2313,   131, -2751,
   -2751, -2751, -2751, -2751,  2315, -2751, -2751,   131,  2316,  2317,
    2319,   131,   131,   -52,  2321,  2323,  2324,  2326,  2327,  2328,
     131,   131,   -52,  2330,  2331,  2333,  2334,  2335,  2336,   131,
     131,   -52,  2338,  2339,  2340,   131,   -38,   -38,   -38,   -38,
     -38,  2342,   -38,   -38,  2344,   131,   131,   -38,   -38,   -38,
     -38,   -38,  2345,   -38,   -38,  2346,   131, -2751,   131,  2347,
   -2751,  2348,  2349, -2751,  3513, -2751,  1087,  2351,  4870,  1087,
     253,  4870,  2353, -2751,  1087, -2751, -2751,  1087, -2751,  4870,
    2354,   253,   253,   253,   253,   253,   253,   253,   253,   253,
     253,   253, -2751, -2751, -2751,  4870,  1087,   253,  4870,  2355,
   -2751,  1624,  1624,  4870,  1624,  1624,  4870,  4870,  1624,  1624,
     253,   253,   253,   253,   253,   253,  1743,   253,   253,   253,
    3184, -2751,  1743,   253,   253,   253,   253,  1743,   253,   253,
     253,   253,   253,   253,  1587,   253,  1750,  1743,   253,   253,
   -2751, -2751,   -29,   451,  4870,  4870, -2751, -2751, -2751,   -29,
    1587,  2358, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751,   253, -2751, -2751,  1624,   253, -2751, -2751, -2751,
    1578,  2359,  2360,  2362,  2363,   253,   253,  2364,   253, -2751,
    2368,   902, -2751,  1087, -2751, -2751, -2751, -2751,  2369, -2751,
   -2751,  1587,  2371,  2375,  2372,  2376,  4870,  2377, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751,   -29,  1087, -2751,   -29, -2751, -2751,
     -29, -2751,   -29,  2378,  1587,  2381, -2751,   253, -2751, -2751,
     -38,   131, -2751, -2751,   131,  2382, -2751,   131, -2751,   -38,
     -38,   -38,   -38,   -38,  2383,   -38,   -38,   131,   -38,   -38,
     -38,   -38,   -38,  2384,   -38,   -38,   131,   -38,   -38,   -38,
     -38,   -38,  2385,   -38,   -38,   131,   -38, -2751, -2751, -2751,
   -2751, -2751,   131, -2751, -2751,  2386,   -38,   -38, -2751, -2751,
   -2751, -2751, -2751,   131, -2751, -2751,  2387,   -38, -2751,   131,
   -2751, -2751,  1587, -2751,  4870,  1087, -2751,  2388,  1587,   253,
   -2751, -2751,  1587,   253, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751,   253,   253,  1087, -2751,  2389,  1587,   253,
    1624, -2751,  1087,   253,  1624,  1087,  1087,  4870, -2751,   253,
    2392,  2392,   253,   253,  2392,  1743,  2392, -2751,  4870,  1731,
    1740,  1798,  1829,  1844,  1866,  1887,  3184, -2751,  1914, -2751,
   -2751,  1743,  2392,  2392,   253,   253,  1743,   253,   253,   253,
     253,   253, -2751,  1624,   253,  2397, -2751, -2751,   253,  2392,
     451,    17,  1587,  1587,   451,   -29,  2393, -2751, -2751, -2751,
    2398,   253, -2751,  2399,  2402,  2404,  2405,  2406, -2751,  2407,
    2408,   253, -2751, -2751,  2409,    42,  4870, -2751,  2410,   181,
    4870, -2751, -2751, -2751, -2751, -2751, -2751,  2412,    42,   253,
   -2751, -2751, -2751,   131, -2751, -2751, -2751, -2751, -2751, -2751,
     131, -2751, -2751,   -38, -2751, -2751, -2751, -2751, -2751,   131,
   -2751, -2751,   -38, -2751, -2751, -2751, -2751, -2751,   131, -2751,
   -2751,   -38, -2751,   -38,   131, -2751, -2751,   -38,   131, -2751,
   -2751,   253,  1087, -2751,  4870,  4870,   253,  4870,   253, -2751,
   -2751, -2751,  4870,  4870,   253, -2751, -2751,  4870, -2751, -2751,
   -2751,  1087,  2413, -2751, -2751, -2751,  1743,   253, -2751,  2414,
   -2751, -2751,  1587,   819,  2415,  2417,  2418,  2419,  2420,  2422,
   -2751,   451,  2424, -2751, -2751,  1743,   253,  2425, -2751, -2751,
     253,  4870, -2751, -2751, -2751, -2751, -2751, -2751, -2751,    17,
    1796,  2598, -2751, -2751, -2751,   451,  2426,  2427,  2428, -2751,
   -2751, -2751,  2430,  2431,  2432, -2751,   202,    42, -2751, -2751,
   -2751, -2751,  2433,  4870, -2751, -2751, -2751, -2751, -2751,    42,
   -2751,  2448, -2751,   -38, -2751,   -38, -2751,   -38, -2751, -2751,
     -38, -2751,   -38,  3513, -2751,  1087,  1087,   253,  1087,  2452,
    1087,  1087,   253,  1087,   253, -2751, -2751, -2751, -2751,  2453,
   -2751,   253, -2751, -2751,  2455, -2751,  2459, -2751, -2751, -2751,
   -2751, -2751,   253, -2751, -2751, -2751,  2460,   253, -2751, -2751,
   -2751,  1587, -2751, -2751, -2751,  1796, -2751,  1894,  1933,  2598,
   -2751, -2751, -2751,  2468,  2472, -2751, -2751, -2751, -2751, -2751,
   -2751,  1161,  1161, -2751, -2751,  1587, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751,  1087, -2751, -2751,  2474, -2751,  4514, -2751,
   -2751,  2475, -2751,  1743, -2751, -2751,  1743,   253, -2751,  2479,
   -2751,   253, -2751,  1743,   253, -2751,  4870, -2751,  1894, -2751,
     451, -2751,  2486,  2488,   253,   253,   253,   253,   181,  2489,
    4514,  1587, -2751,  4514, -2751, -2751,   253, -2751,  2493, -2751,
     253,  1087, -2751, -2751, -2751,  2494,  2495,   253,  2496,   253,
   -2751, -2751,  1587, -2751, -2751,  1587, -2751, -2751,  2498, -2751,
   -2751,  2499,  2500, -2751, -2751,  2502, -2751,  2503, -2751, -2751,
    1743, -2751,  1743, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2751, -2751,    -3, -2751,   333, -1025, -1575, -1142,  1702, -2751,
     935,  -446,  1725,   -53,    30, -2751,  -306, -1874,  1772,  2121,
    -915, -2119, -1123,   -11,  1493, -2751,  -829, -2751,  -729, -1204,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751,  -558,  -522, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2077, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751,   556, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751,   308, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751,  -254,   -72, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -1647, -2751, -2751, -2751, -2751, -2751,
   -2751,  -754, -2751, -2751, -2751, -2751, -2751, -2751,   469, -2751,
   -2751, -2751, -2751,  -362,  -765, -1713,  -506, -2751, -2751, -2751,
   -2751, -2751,  -586,  -541, -2751, -2751, -2750, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751,  1564, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751, -2751,
   -2751, -2751, -2751
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1382
static const yytype_int16 yytable[] =
{
      72,  2108,   394,  1440,  2273,   794,  2275,  1552,   112,  1697,
    1555,  1000,  1029,   181,    69,    70,  2173, -1159,  1267,   114,
     402,  1605,    69,    70,  1240,  1243,  1271,   753,  1284,  1630,
     254,  1590,   114,   295,   331,  1864,    69,    70,   910,  1918,
     114,   335,   355,   979,  1679,  1305,  1310,   914,    69,    70,
    1914,   388,   414,   982,   399,   459,   686,   405,   796,  1081,
     993,   411,  1035,  1226,   418,    69,    70,   333,   421,   423,
      69,    70,   433,  1384,  2888,   440,   444,   917,   691,   447,
    1924,  1510,   448,   449,    69,    70,   457,   696,  1634,  1960,
     652,   458,   587,  2126,   890,  1005,   296,    69,    70,    69,
      70,  1432,  1433,  1434,   471,   475,   480,   481,   485,   487,
      69,    70,   832,  1940,  1770,  1044,  2127,   357,  1783,  2128,
     297,    69,    70,  1306,  1311,   491,   680,  1285,  1533,   436,
    2129,    81,    69,    70,  1529,  1286,   107,    69,    70,    69,
      70,   165,  1332,   119,   230,   114,  1928,  1548,  1829,  1830,
    1831,   490,  1500,   877,  1136,  2130,   119,   108,  1941,  2547,
     500,   231,    69,    70,   119,  1006,  1530,   114,  1511,   994,
    1663,  1138,    59,  2131,   437,  2559,  2560,  2561,  1517,   298,
    2563,   895,  2565,  2566,  1631,   532,  2568,  2569,  2570,  1030,
     553,  2572,  2573,   588,  1919,  2576,   114,  2578,  2579,   997,
    2581,  1036,  1661,  1235,   468,    69,    70,  3009,  1333,   252,
     358,   114,   697,  2894,   109,   891,  1681,   687,  2096,  2098,
    1307,  1312,  1942,   554,   270,   562,   359,   567,   571,   183,
     469,    69,    70,   878,   353,  1137,   168,   833,   607,   169,
     122,   293,  1534,  1045,   998,   114,   319,  2889,   117,   123,
     124,  1334,  1139,   122,   995,   650,    69,    70,  3032,   303,
    1385,   122,   123,   124,  1687,   698,  1632,  1635,  1082,   119,
     123,   124,   170,   258,   797,   881,  1920,   345,  1664,   730,
     171,   255,   798,   799,   822,   911,  1943,   681,   692,  1865,
    2101,   119,   892,  1915,   653,   902,   760,   761,  1308,  1313,
    1503,   439,   460,    69,    70,  1549,   256,  2653,  1272,   884,
    2656,   110,   803,  1680,   805,  2660,  1633,  2152,  2661,   800,
     119,   754,   360,  1925,   808,   811,  1921,   814,   818,  1961,
     820,   688,   415, -1159,  1227,   119,   361,  2676,  1273,  1497,
     830,   114,  1698,   127,   354,   879,   172,   167,   179,  2174,
     840,   842,  1083,  1031,  2890,   253,   127,  1287,    71,   912,
     816,   915,   299,   301,   127,   114,   122,   429,   114,   119,
     336,   338,  1688,  1300,   894,   123,   124,   901,   903,  2157,
     905,   337,  1335,  1037,   908,   909,  2895,   387,   122,  1929,
     896,   918,   403,   157,  1107,   923,   925,   123,   124,   158,
     159,   682,   926,    69,    70,   173,   157,   929,   931,   435,
    2968,   300,   158,   159,   157,   932,   111,   122,   933,   398,
     158,   159,  1671,  1236,  2752,  1662,   123,   124,   349,   887,
     383,   125,   122,   801,   174,  1930,   175,   943,   944,  1682,
    1691,   123,   124,   410,   948,   949,   950,   951,   952,   953,
    1151,   955,  2132,   986,   957,   114,  2762,  2055,   683,  1665,
    2058,  2097,  2099,  1922,   176,   119,   122,  2077,   964,   127,
    1053,  1054,   965,   362,   897,   123,   124,   970,   971,   972,
     973,   974,   975,   662,   976,  1729,   475,   980,   981,   119,
     593,   127,   119,  2896,  2093,   430,   475,   983,   321,  1275,
    1152,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   348,   347,  1237,  1216,  1883,  2121,  1741,   978,   157,
     127,  1025,   597,  1887,   259,   158,   159,   632,  1055,    60,
     663,  1420,  1505,  2102,  1056,   127,  2813,   177,  2969,   431,
     432,   157,   371,   867,   636,    69,    70,   158,   159,   260,
    1012,  1013,   987,  1689,   739, -1381,  2821,  1667,   601,  1836,
    1217,   384,   122,  2826,   364,  1668,  2829,  2830,  1021,   127,
     157,   123,   124,    61,  1436,   117,   158,   159,  1145,   119,
    2214,   424,   530,  2970,  1242,   157,   122,  1057,   539,   122,
     610,   158,   159,    62,  1931,   123,   124,   540,   123,   124,
    1092,  1327,   732,  1395,  1047,  1934,  1058,  1026,   525,   868,
    1396,   618,   611,  1935,   526,  1276,   365,   731,   396,   157,
     305,  1059,   450,    63,   441,   158,   159,   366,  1060,   612,
     758,   759,  1216,   619,   872,   401,  1061,   959,   960,  1329,
      69,    70,  1923,    69,    70,    64,   602,  1087,  1153,    65,
     620,   930,   664,  1216,   573,  1281,   385,   527,  1932,  1146,
     367,  1072,   813,   408,    66,   127,   853,  2751,  1277,   637,
     574,  1337,  1229,   407,   740,  1363,   122,   409,  1217,   350,
     617,   413,  1328,   603,   528,   123,   124,   446,  1343,   127,
    1142,  2900,   127,  2914,   575,  1106,    69,    70,  1062,  1217,
     873,    69,    70,   306,   351,  1109,   882,   885,   888,  1161,
    1218,   898,  2924,  1939,   576,   157,   741,   742,  1063,  1278,
    1330,   158,   159,  1064,  1949,  1065,  1219,  1220,   613,  1154,
      69,  1370,   855,   442,   577,  1124,   529,  1338,   578,   157,
    1155,   594,   157,  1125,  1126,   158,   159,   462,   158,   159,
    1230,   117,  1066,  1067,  1344,    69,    70,  1160,   125,   456,
    1889,  1068,   743,  1268,   733,   734,   595,   621,   579,   580,
    1946,   417,  1348,   598,  1238,  1156,   464,  1251,   633,   127,
     530,   531,  1069,   869,   466,   451,   452,   638,  1245,   488,
    1341,   425,  1246,  1127,   501,  1771,  2984,  2985,   599,  2987,
    1291,  2989,  2990,   634,  2992,  1292,  1293,  1294,  1295,  1279,
    2973,  1296,   307,  1298,   117,  1299,   475,  1301,   443,   639,
    1775,   744,  2976,    91,   523,  1221,  1222,   308,  1218,   157,
     622,   581,   420,   512,   453,   158,   159,  1486,  1349,   368,
    1070,  1269,   582,    67,  1219,  1220,   426,  1231,   745,  1218,
     513,  1753,   535,   427,  1239,  2331,  1779,  1375,   747,  1610,
     311,  1772,  1747,   605,  3019,  1219,  1220,   537,   614,   735,
    1247,  1342,   271,  1748,   874,  2344,   564,  2286,   748,   623,
     312,  1673,   313,   615,  1563,  2354,  1776,  1611,  2357,   624,
     454,  1572,  1362,   590,  1366,  2364,  1248,   309,   591,  1367,
    1368,   989,  1369,  1371,  1373,  1374,   863,   583,   584,  1487,
    2401,  1339,  3052,  2404,   272,   592,   117,   273,   609,  1387,
    1388,  2412,  1780,  1612,  2415,   606,  1392,  1393,  1345,  1947,
      91,  1613,  1111,  1112,   125,  2432,   274,  1614,  1270,  1488,
     626,  1128,  1129,  1221,  1222,   628,  1399,  1400,  1401,  1402,
    1403,  2440,  1405,  1574,  1407,   275,   631,   823,    92,  1615,
    1785,  1575,  1576,   990,  1221,  1222,  2276,  1249,   749,  1415,
    1416,  1417,   276,  1419,   475,  1421,  1789,  1422,   277,  2459,
    1491,  1616,  1113,   585,  2841,  2078,   629,    93,  2196,  1884,
    1674,    94,   651,  1948,    82,   824,  1793,   125,  1425,  1617,
    1427,  2512,  2513,  2514,  2515,  2516,  2517,  2518,  2519,  2520,
    1429,  1577,  1350,  2866,  1797,   657,   314,   475,  1437,  1699,
      69,    70,  1130,  1439,  1700,  1102,  1786,   679,  1489,   278,
      83,  1426,   658,  1131,  1132,  1773,  2081,  1618,  1133,  1801,
    1452,   660,  1790,  1110,  1456,  1209,  1936,  1701,  1702,    95,
    1703,  1704,   279,   825,  1675,   685,  1496,  1498,  1501,   690,
    1777,  1705,  1794,   694,  1506,    92,  1807,  1564,  1134,  1512,
    1815,  1210,    69,    70,  1573,  1706,  1707,  1250,  1619,   315,
    1798,  2002,   695,  1708,  1515,  1490,  1709,  1567,   262,  2003,
    2004,  2079,    96,  1620,    93,  1819,  1781,   934,  2272,   125,
    2521,    97,    98,  1525,  1710,  1802,  1621,   699,    84,   728,
    1937,  1892,  1893,  1711,  1712,  1254,   729,  1713,  1551,   263,
    1282,  2926,  2927,    69,    70,  2930,  1492,  2932,   316,   737,
    1114,  1115,  1808,   372,   751,   180,  1816,  1622,   317,  2005,
    2943,  2944,  2082,   756,   373,  2948,  2949,  2080,   757,  2952,
    1623,   922,  1624,  1625,  2953,  2954,    95,    85,    86,  1578,
    1579,  1820,   762,   280,    69,    70,   935,  1050,   795,  2027,
    1051,  1052,   641,   826,   374,  1973,  1974,  2028,  2029,   807,
    1666,   404,  1938,   642,   286,  1378,  1379,  1493,  1714,  1894,
     821,   281,   282,  1626,  1381,  1382,  2934,   828,  2083,    96,
    1787,  1690,   264,   283,   829,    87,    88,   284,    97,    98,
    1696,  1116,  2994,   643,  1494,  2995,  1791,  1211,   831,   265,
    2998,   835,  1117,  1118,   837,  1975,  1724,  2030,  1725,  1364,
      69,    70,  3002,  1726,  1727,  1728,  1795,  3005,  1391,   843,
    1580,   871,   844,  1734,   851,   936,  1735,   876,  1737,  1715,
    2604,  1581,  1582,   900,  1799,  1716,  1583,  1119,   375,  2613,
     906,  2928,    89,   700,   907,  1739,   701,  1740,  2622,   920,
    2503,   927,  1717,  2038,   928,  1744,  1745,   287,  1212,  1803,
    2945,  2039,  2040,  1718,   266,   702,  1584,  2006,  2007,   961,
    1751,  1752,  1409,   288,   475,  1754,  1755,   644,  1993,  1994,
     941,   322,  1757,   376,  1758,  1213,  1809,  1760,   845,  1761,
    1817,   997,  3047,   942,  1719,  1720,  3050,  2013,  2014,  2368,
    2369,   703,  2377,  2378,  1840,    69,  1451,   704,   340,   945,
     267,  2041,   289,   946,  2695,  1821,  3061,  1721,  1732,  1733,
    2711,   268,   645,   937,   947,  2716,   846,   847,  1995,   938,
    3068,  2114,  2115,  3069,  3070,  1832,   998,   954,    69,    70,
    1833,  1595,  2546,   956,  1834,   958,  1835,  2015,  2008,  2370,
    1838,   963,  2379,  1976,  1977,  2031,  2032,   377,   705,  2009,
    2010,  2386,  2387,  1722,  2011,  2564,  1844,   378,  1847,   290,
    1849,  1850,  1851,  1853,   666,   482,  1855,  1856,   101,  1858,
    1859,   472,  1861,   291,  1863,    69,    70,  2071,   474,   379,
     984,  1871,   967,   968,  2012,   102,   646,   380,  1877,  1846,
     985,  3025,  1878,  1879,  1880,   992,   647,   114,  3029,  1541,
    1542,  2388,   475,  1885,  1001,   381,  1888,  1003,  1008,  1596,
    1010,   341,   115,  1023,  1898,  1028,  1899,  1033,  1039,  1901,
    1040,   848,   323,  1903,  1978,  1042,  2033,  1048,    74,   324,
    1043,   325,  1075,   116,    75,  1979,  1980,  2034,  2035,  1077,
    1890,  1073,  2036,   483,   648,   667,  1079,    69,    70,  2042,
    2043,   117,   849,  1074,  1085,  3066,  1088,  3067,  1910,  1764,
    1765,    69,    70,  1951,  1094,  1952,  1996,  1997,  1953,  1954,
    1981,  1955,  2037,  1956,  1099,   103,  1090,    76,  1100,  1958,
    1101,  1103,   706,  1959,   809,  2016,  2017,  2371,  2372,   668,
    2380,  2381,  1965,  1597,  1598,   342,    69,    70,  1104,   118,
    1108,  1904,  1105,  1982,    77,   343,  1123,  1120,  1599,  1121,
     707,   708,  1147,  1693,  1149,  1992,    69,    70,  2074,  1852,
    1122,   119,   709,  2839,   104,  1135,   710,    69,    70,  2118,
    2044,  1150,   669,   838,  1157,  1158,  1159,  2053,  2054,  2852,
     484,  2045,  2046,  1215,  2857,  1224,  2047,  1998,  1233,  2389,
    2390,    69,    70,  1288,  1600,  1234,    78,  2730,  1999,  2000,
     105,  1289,   810,  1290,  2734,   120,  2018,  1302,  2373,  1304,
    1738,  2382,  1315,  2072,  2073,  2075,  2048,  2019,  2020,  2374,
    2375,  1316,  2383,  2384,  1746,  1905,  1906,    69,    70,  2076,
    1602,  1603,   492,  2001,  1317,  2085,  1318,    69,    70,  2088,
    1907,    79,   472,   473,   474,  2070,  1766,  1767,   121,  2740,
    1319,   839,  2021,  1320,  2376,  1322,  1321,  2385,   122,  1323,
    1324,  1326,  1325,  2117,  2119,  1347,  1354,   123,   124,  2761,
    2391,  1352,  2763,  2125,   125,  2764,  2135,  2765,  1768,   126,
    1353,  2392,  2393,  2141,  1355,  1356,  1908,    69,    70,  2092,
    1602,  1603,    69,    70,  2120,  1602,  1603,  2146,  1357,  1358,
    2464,  1359,  2148,  1360,  1361,  1376,  2150,  1377,  2153,  2154,
     493,  2156,  2158,  2159,  1380,  2162,  2394,  1383,  2165,  2166,
    2167,  2168,  2169,  2170,  2171,  2172,  2175,  2177,  2178,  1389,
    1390,  2180,  2181,  2182,  2183,   494,   495,  1394,  1397,  1442,
    1398,  2189,  2190,  1404,   496,  2192,  2193,  2194,  1406,  1408,
    1410,  2197,  2198,  1868,  1869,  2506,    69,    70,  1446,  1602,
    1603,   127,  1411,  1444,  2201,  2202,   497,  2203,  2204,  1423,
    1424,  1443,   332,  1447,  1448,  1450,   498,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,  1449,  1454,  1198,   514,
    1455,   157,  1502,  1504,  1508,  2527,  1513,   158,   159,  1516,
    1637,  1518,  1519,  1522,  1199,  1523,  1526,  1527,  1528,   515,
    2875,  1536,  1537,  1200,  1538,  1539,  1543,  1544,  1545,  2242,
    1546,  2243,  2244,  1547,  1201,  2245,   516,  1645,  1553,  1638,
    2247,  2250,  1639,  2252,  2253,  2254,   489,  2255,  2256,   517,
    2258,  3024,  2259,  2260,  1554,  2262,  2263,  1556,  2265,  1557,
    2267,  1559,  2835,  1561,  1569,  2838,  1646,  2840,  2270,  1647,
    1202,   518,  1648,  2249,  1640,   519,  2274,  1571,  1585,  1586,
    1591,  2279,  2280,  2853,  2854,  1587,  1588,  2282,  1592,  1593,
     520,  1606,  1203,  1609,  1607,  1608,  2285,  1628,  1629,  1636,
    2868,  1649,  1655,  1656,  1657,  1641,  1658,  1659,  1642,  1660,
    1672,  1677,  1669,  1676,  1678,  1683,  1686,   551,  1684,   558,
     561,  1685,   566,   570,  1694,  1695,  1692,  1731,  1742,  1743,
    2313,  1749,  1650,  1750,  2068,  1651,  1756,   521,  1763,  1759,
    1762,  1784,  1805,  1806,  2298,  1811,  1843,  1812,  1204,  1813,
    1814,  2321,  2322,  1823,  2304,   655,  2324,  1824,  2309,  1825,
    1848,  1826,  2326,  2086,  1827,  1828,  1854,  2090,  1841,  1842,
    1857,  1911,  1860,  1862,   671,   677,  1867,  2336,  1872,  1873,
     684,  1874,  1886,  1900,   689,  2342,  2343,  1891,  -489,  1205,
    1902,  1912,  1913,  1944,  2122,  2352,  2353,  1945,  1917,  1950,
    1933,  1926,  1927,  1957,  2137,  2362,  2363,  1963,  1964,  1969,
    1988,  1991,  2049,  2142,  2143,  2680,  2681,  1206,  2683,  2684,
    2399,  2400,  2687,  2688,  2147,  2022,  2024,  2026,  2050,  2051,
    2052,  2410,  2411,  2056,  2057,  2094,  2059,  2060,  2417,  2061,
    1643,   804,  2064,  2095,   806,  2067,  2084,  2087,  2420,  2091,
    2100,  2103,  2104,  2105,  2106,   815,  2107,  2109,  2110,  2111,
    2112,  1207,  2113,  1208,  2116,  2134,  2151,  1652,  2138,  2427,
    2428,  2149,  2430,  2160,  1644,   836,  2155,  2163,   853,  2738,
    2164,  2179,  2186,  2187,  2188,  2348,  2199,  2200,  2725,  2205,
    2206,  2441,  2442,  2443,  2444,  2445,  2446,  2447,  2448,  2449,
    2207,  1653,  2208,  2209,  2210,  2213,  2958,  2211,  2212,  2215,
    2216,  2217, -1177,  2218,  2455,  2219,  2457,  2220,  2843,  2221,
    2222,  2223,  2530,  2224,  2225,  2227,  2226,  2844,  2228,  2229,
    2230,  1654,  2463,   475,  2231,  2395,  2232,  2233,  2467,  2234,
     854,  2235,  2406,  2236,   855,  2237,  2238,  2470,  2471,  2472,
    2473,  2474,  2475,  2476,  2477,  2478,  2479,  2239,  2240,  2482,
    2483,  2484,  2485,  2486,  2487,  2488,  2489,  2490,  2491,  2492,
    2493,  2241,  2496,  2257,  2497,  2498,  2499,  2261,   966,  2264,
    2266,  2268,   856,   857,  2281,  2845,  2287,   858,   475,  2507,
    2288,  2289,  2290,   962,  2958,  2291,  2323,   940,  2325,  2328,
    2329,  2330,  2332,  2333,   969,  2334,  2337,  2345,    69,    70,
    2703,  2339,  2340,   977,  2341,  2346,  2846,  2347,  2349,  2350,
    2351,  2355,  2356,  2365,   115,  2358,  2359,  2360,   859,  2361,
    2366,  2847,  2367,  2396,  2825,  2397,  2398,  2402,  2828,  2403,
    2522,  2405,  2523,  2407,  2524,  2408,  2526,  2409,   475,  2528,
    2413,  2529,  2414,  2848,  2416,  2418,  2533,  2534,  2419,  2535,
    2536,  2421,  2538,  2422,  2540,  2424,  2431,  2433,  2436,  2439,
    2544,  2450,  2545,  2451,  2849,  2452,  2548,  2863,  2453,  2550,
    2454,  1014,  1015,   860,  2458,  2495,  2500,   861,  2501,  3040,
    2504,  2505,  2508,  2511,  1019,  2531,  2532,  2537,  2539,  1022,
    2541,  2851,  2549,  2553,  2554,  2555,  2556,  2557,  1034,  2583,
    2588,   118,  2586,  2591,   862,  2552,  2594,  2595,   863,  2597,
    3010,  2599,  2600,  2587,  2601,  2605,  2590,  2606,  2972,  2607,
     864,  2608,  2609,  2610,  2614,  2615,  2592,  2593,  2616,  2617,
    2618,  2619,  2623,  2624,  2850,  2625,  2632,  2596,  2635,  2643,
    2646,  2649,  2650,  2651,  2585,  2654,  2598,  2659,  2663,  2679,
    2602,  2603,  2736,  2955,  2742,  2743,  2744,  2745,  2748,  2611,
    2612,  2652,  2750,  3011,  2753,  2755,  2757,   120,  2620,  2621,
    2756,  2758,  2760,  2766,  2626,  2768,  2773,  2780,  2789,  2798,
    2804,  2808,  2814,  2822,  2636,  2637,  2833,  2876,  1095,  1096,
    1097,  1098,  2865,  2877,  2879,  2647,  2880,  2648,  2881,  2882,
    2883,  2884,  2885,  2887,  3007,  2893,  2899,  2925,  2931,  2435,
    2935,  2936,  1331,  2937,  2938,  2939,  2940,  2657,  2942,  2947,
    2962,     0,  2963,  2964,  2965,  2966,  2967,  2974,  2664,  2665,
    2666,  2667,  2668,  2669,  2670,  2671,  2672,  2673,  2674,  3015,
    3017,   126,  2977,   819,  2677,  2460,  2988,  2996,   475,   475,
    2999,   475,   475,  3000,  3003,   475,   475,  2689,  2690,  2691,
    2692,  2693,  2694,  3012,  2696,  2697,  2698,  3013,  3020,  3023,
    2712,  2713,  2714,  2715,  3027,  2717,  2718,  2719,  2720,  2721,
    2722,  3034,  2724,  3035,  3041,  2728,  2729,  3049,     0,  3053,
    3054,  3056,  3060,  3062,     0,  3063,  1253,  3064,  3065,     0,
       0,     0,     0,     0,     0,   921,     0,     0,     0,  2737,
       0,     0,   475,  2739,     0,     0,     0,  2741,     0,     0,
       0,     0,  2746,  2747,     0,  2749,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,     0,
    2771,     0,     0,  2772,  2769,     0,  2774,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2783,     0,     0,     0,
       0,     0,     0,     0,     0,  2792,     0,     0,  1532,  1457,
    1458,  1459,     0,     0,  2801,     0,     0,     0,     0,     0,
       0,  2803,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2807,     0,     0,     0,     0,     0,  2810,  1460,
    1461,     0,     0,  1462,     0,     0,  1589,     0,     0,     0,
    1463,     0,     0,  1464,     0,     0,  2816,  1465,     0,     0,
    2818,     0,     0,     0,     0,     0,     0,  1466,  1467,     0,
    2819,  2820,  1011,     0,     0,  1468,  2824,   475,     0,  1016,
    2827,   475,  1017,     0,     0,     0,  2832,  1018,  1413,  2836,
    2837,  1020,     0,     0,  1255,     0,     0,     0,     0,     0,
    1418,     0,  1256,     0,     0,  1469,  1470,     0,     0,  1471,
    1257,  2855,  2856,     0,  2858,  2859,  2860,  2861,  2862,     0,
     475,  2864,   233,     0,     0,  2867,     0,     0,  1258,  1472,
     711,   712,   713,     0,     0,  1259,     0,  1428,  2878,     0,
       0,     0,     0,     0,   234,     0,     0,   235,  2886,     0,
       0,  1473,     0,     0,     0,     0,     0,   714,     0,     0,
    1260,     0,  2902,     0,     0,     0,  2901,     0,     0,  2903,
     715,  1261,     0,     0,     0,     0,  1093,     0,  2905,     0,
    1474,     0,     0,     0,   236,     0,   716,  2907,     0,     0,
    1475,   237,     0,  2910,     0,     0,     0,  2912,     0,     0,
       0,     0,   238,   239,     0,     0,     0,     0,  2913,   240,
       0,     0,     0,  2917,     0,  2919,  1262,     0,   717,     0,
       0,  2922,     0,     0,  1263,     0,  1521,     0,   718,     0,
       0,     0,     0,     0,  2929,     0,  2731,     0,   241,  1476,
       0,     0,     0,     0,     0,     0,     0,  1477,  1478,     0,
     719,     0,     0,  2946,     0,     0,   242,  2950,     0,   720,
    2983,     0,     0,     0,  1479,     0,     0,     0,     0,     0,
       0,     0,  1264,     0,   243,   244,  1480,     0,     0,   721,
       0,   245,     0,  2971,     0,  1265,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   722,     0,  1266,     0,  1481,   246,  1482,     0,     0,
       0,  1670,     0,     0,  2986,     0,     0,     0,  1483,  2991,
       0,  2993,     0,     0,     0,     0,     0,     0,  2997,  1484,
       0,     0,     0,     0,     0,     0,  1297,     0,     0,  3001,
       0,     0,   723,  1303,  3004,     0,     0,   724,     0,   247,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1485,   725,  1730,     0,   726,  3014,  3016,
       0,     0,     0,     0,     0,  1736,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3026,     0,     0,     0,  3028,     0,
       0,  3030,     0,     0,   248,     0,     0,     0,     0,     0,
       0,  3036,  3037,  3038,  3039,     0,     0,   249,  3022,  1966,
    1967,  1968,     0,  3048,   763,   764,     0,  3051,     0,  1970,
    1971,  1972,     0,     0,  3055,     0,  3057,     0,  1983,  1984,
    1985,     0,     0,  1986,  1987,     0,  1989,  1990,   250,     0,
    3043,     0,     0,  3046,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2869,     0,     0,     0,  2874,     0,     0,
       0,     0,     0,    69,    70,     0,     0,     0,     0,     0,
    2062,  2063,   765,  1412,  2065,  2066,     0,     0,   766,   115,
    1414,     0,     0,     0,     0,     0,  1837,   767,     0,   768,
       0,     0,     0,     0,   769,     0,     0,   770,     0,   327,
       0,     0,     0,   771,  1845,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   772,     0,     0,     0,   117,     0,
       0,     0,   773,     0,     0,  1430,  1431,     0,     0,     0,
    1435,   774,     0,  1438,  1876,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1882,  1445,     0,     0,     0,     0,
     775,     0,     0,    69,    70,     0,     0,     0,     0,     0,
       0,  1897,     0,     0,     0,     0,   118,     0,     0,   115,
       0,     0,   776,  1909,  2941,     0,     0,     0,  1916,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     777,     0,     0,     0,     0,     0,     0,     0,  2961,     0,
       0,     0,     0,   778,   779,     0,     0,     0,   117,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   780,     0,
       0,  2699,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2700,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   781,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   782,     0,   783,
    1255,  2701,  1594,     0,     0,   328,     0,     0,  1256,     0,
       0,     0,     0,     0,   784,     0,  1257,     0,     0,   785,
       0,     0,     0,     0,     0,     0,     0,   786,     0,     0,
       0,   125,     0,     0,  1258,   787,   126,     0,     0,     0,
       0,  1259,     0,     0,  2702,     0,     0,   329,     0,     0,
    2069,     0,   120,     0,     0,     0,   788,     0,     0,     0,
       0,     0,     0,  3033,   390,     0,  1260,     0,     0,     0,
     789,   790,   391,   791,     0,     0,     0,  1261,  2089,     0,
       0,     0,     0,     0,     0,  1896,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,     0,     0,     0,  2123,     0,     0,
    2124,     0,     0,   569,   792,   330,     0,     0,     0,  2139,
    2140,   125,  1262,     0,     0,     0,   126,  2144,   115,     0,
    1263,     0,     0,     0,  2145,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     0,     0,     0,     0,   117,     0,     0,
       0,     0,     0,     0,  2184,     0,     0,     0,  1264,     0,
       0,     0,  2327,     0,     0,     0,  2195,   118,     0,     0,
       0,  1265,     0,     0,     0,  2335,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2338,     0,     0,     0,  1266,
       0,     0,     0,     0,     0,   118,  1839,     0,     0,     0,
    2703,     0,  2704,     0,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   120,  1870,     0,     0,     0,     0,  1875,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1881,
       0,     0,     0,     0,     0,     0,     0,  2423,  2705,     0,
       0,   120,     0,     0,     0,     0,     0,     0,  2248,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1140,
       0,     0,  2269,     0,  1141,     0,   392,     0,     0,   393,
       0,     0,     0,     0,     0,     0,     0,   126,  2278,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2283,     0,  2284,     0,     0,     0,     0,     0,     0,
     125,     0,     0,  2292,     0,   126,  2294,  2295,  2296,  2297,
    2299,     0,  2301,     0,     0,  2302,     0,     0,     0,  2303,
    2305,  2306,  2307,  2308,  2310,     0,  2311,  2312,     0,     0,
       0,  2314,  2315,  2316,     0,     0,  2317,  2318,     0,     0,
       0,     0,  2319,  2320,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,     0,     0,     0,     0,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,  2136,     0,     0,     0,     0,  2426,     0,     0,  2429,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2434,     0,     0,  2437,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2589,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2456,     0,     0,     0,     0,     0,     0,
       0,  2185,     0,     0,     0,     0,     0,  2191,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,  2627,
    2628,  2629,  2630,  2631,     0,  2633,  2634,     0,  2494,     0,
    2638,  2639,  2640,  2641,  2642,     0,  2644,  2645,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2510,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2246,     0,     0,     0,     0,  2251,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,     0,     0,     0,  2543,     0,  2271,     0,     0,
       0,     0,     0,  2277,     0,     0,     0,     0,     0,     0,
    2551,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2293,     0,     0,     0,     0,     0,     0,  2300,  2575,   542,
     543,     0,     0,     0,     0,   544,     0,     0,     0,  2584,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   545,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   118,     0,
       0,     0,     0,  2770,     0,     0,     0,     0,     0,     0,
       0,     0,  2775,  2776,  2777,  2778,  2779,     0,  2781,  2782,
       0,  2784,  2785,  2786,  2787,  2788,     0,  2790,  2791,     0,
    2793,  2794,  2795,  2796,  2797,     0,  2799,  2800,     0,  2802,
       0,     0,   672,     0,   115,     0,     0,     0,     0,  2805,
    2806,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2809,     0,     0,     0,   120,     0,     0,     0,     0,     0,
       0,     0,     0,  2655,     0,     0,  2658,     0,     0,   546,
       0,     0,     0,     0,  2662,   673,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   547,
    2675,     0,     0,  2678,     0,     0,     0,     0,  2682,     0,
    2425,  2685,  2686,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   548,     0,     0,     0,     0,     0,
    2438,   118,     0,     0,     0,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,   674,     0,  2732,
    2733,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2461,  2462,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2465,  2466,     0,     0,     0,  2468,  2469,     0,     0,     0,
       0,     0,     0,   549,     0,     0,  2904,   120,     0,     0,
       0,  2759,     0,     0,     0,  2906,     0,     0,     0,     0,
       0,     0,     0,     0,  2908,     0,  2909,   675,     0,     0,
    2911,     0,     0,     0,     0,  2502,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2509,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,   550,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2525,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2812,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2542,     0,     0,     0,     0,     0,  2978,     0,  2979,     0,
    2980,     0,     0,  2981,     0,  2982,     0,     0,     0,     0,
       0,     0,  2831,  2558,     0,     0,     0,     0,  2562,     0,
       0,     0,     0,  2842,  2567,   676,     0,     0,     0,  2571,
       0,     0,     0,  2574,     0,     0,  2577,     0,     0,  2580,
       0,  2582,     0,     0,     0,     0,     0,     0,     0,     0,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,     0,
       0,  2892,     0,     0,     0,  2898,     0,     0,     0,     0,
       0,     0,     0,   115,     0,     0,     0,  1162,  1163,  1164,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1165,  1166,     0,
       0,  1167,   117,   115,  1168,     0,     0,     0,     0,  2915,
    2916,  1169,  2918,     0,     0,  1170,     0,  2920,  2921,     0,
       0,     0,  2923,     0,     0,  1171,  1172,     0,     0,     0,
       0,     0,     0,  1173,  1174,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,     0,
     118,  1175,     0,     0,     0,     0,  2951,   115,     0,  1176,
       0,     0,     0,  1177,  1178,     0,     0,  1179,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2723,     0,  1180,  2975,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,   556,
       0,  2735,     0,     0,     0,     0,     0,     0,     0,  1181,
       0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     115,     0,     0,     0,     0,     0,     0,     0,  1182,     0,
       0,     0,  2754,     0,   118,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,     0,     0,     0,
       0,     0,     0,     0,     0,  1183,     0,     0,     0,  1520,
       0,     0,     0,     0,     0,  2767,     0,     0,     0,     0,
       0,     0,     0,  3021,     0,   125,     0,     0,     0,     0,
     126,     0,     0,     0,     0,     0,     0,  1184,     0,  1185,
       0,  3031,     0,     0,     0,  1186,  1187,     0,     0,     0,
     120,     0,     0,     0,     0,  3042,     0,   118,  3045,     0,
       0,  1188,  1189,     0,     0,   125,     0,     0,     0,     0,
     126,     0,     0,  1190,  1191,     0,     0,     0,     0,     0,
       0,     0,     0,  2811,     0,     0,     0,     0,     0,  2815,
       0,     0,     0,  2817,   560,     0,     0,     0,     0,     0,
       0,     0,     0,  1192,     0,  1193,     0,     0,     0,  2823,
       0,     0,     0,     0,     0,     0,     0,     0,  1194,     0,
    1195,     0,     0,   120,   126,     0,     0,  1196,     0,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,     0,
       0,  1197,     0,  2872,  2873,     0,     0,     0,     0,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   126,   557,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2933,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,  1565,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3006,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3018,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   126,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3044,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  3058,     0,     0,  3059,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
    1566,     0,     0,     0,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     1,     0,     0,     2,     0,     0,     3,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     0,     0,     0,     0,     5,     6,
       0,     0,     0,     7,     8,     9,     0,     0,     0,     0,
       0,     0,     0,    10,     0,     0,     0,     0,     0,     0,
      11,     0,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,    14,    15,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    18,     0,     0,     0,    19,     0,     0,     0,    20,
       0,     0,     0,    21,    22,     0,     0,     0,     0,    23,
      24,     0,     0,    25,     0,     0,     0,     0,     0,    26,
       0,     0,     0,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
      29,    30,    31,     0,     0,    32,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    34,     0,
       0,     0,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,     0,    37,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,     0,    40,     0,     0,
     185,     0,     0,   186,    41,     0,   187,     0,    42,     0,
       0,     0,    43,     0,    44,     0,    45,     0,     0,     0,
       0,    46,     0,     0,     0,     0,   188,     0,     0,     0,
     189,   190,   191,     0,     0,     0,     0,    47,     0,     0,
     192,     0,   193,    48,     0,     0,     0,   194,     0,   195,
     196,   197,     0,     0,     0,     0,     0,   198,     0,   199,
       0,    49,    50,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    51,     0,    52,     0,     0,     0,
       0,     0,     0,    53,     0,     0,    54,    55,     0,     0,
       0,     0,     0,     0,   200,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   201,     0,     0,     0,     0,    56,     0,     0,
       0,   202,     0,   203,   204,    57,   205,   206,     0,     0,
     207,     0,     0,     0,   208,     0,   209,     0,     0,     0,
       0,     0,   210,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   211,   212,     0,     0,     0,   213,     0,     0,
       0,     0,     0,     0,     0,   214,     0,     0,     0,   215,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   216,     0,   217,
       0,     0,     0,     0,     0,     0,   218,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   219,     0,   220,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     221,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   222,   223,
       0,     0,     0,     0,     0,     0,     0,     0,   224,     0,
       0,     0,     0,     0,     0,     0,   225,     0,     0,     0,
       0,     0,   226,     0,   227,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   228
};

static const yytype_int16 yycheck[] =
{
       3,  1648,    55,  1028,  1878,   311,  1880,  1130,    11,     5,
    1133,   533,     4,    16,     3,     4,     5,     0,   783,     4,
       5,  1163,     3,     4,   778,   779,     5,     5,     5,    27,
      63,  1154,     4,     5,    37,    47,     3,     4,     4,    27,
       4,     5,    45,   489,     5,    40,    40,     4,     3,     4,
      21,    54,    32,   499,    57,     5,     5,    60,     4,    18,
      82,    64,     4,    16,    67,     3,     4,    37,    71,    72,
       3,     4,    75,   102,    32,    78,    79,     4,     4,    82,
      21,    16,    85,    86,     3,     4,    89,     4,   150,    20,
      15,    94,   237,    27,    12,   214,    68,     3,     4,     3,
       4,  1016,  1017,  1018,   107,   108,   109,   110,   111,   112,
       3,     4,   162,   141,  1318,   145,    50,    26,  1322,    53,
      92,     3,     4,   118,   118,   128,     5,   104,   180,   150,
      64,   316,     3,     4,   172,   112,    40,     3,     4,     3,
       4,    33,    63,   128,    87,     4,    21,    16,  1352,  1353,
    1354,   121,    16,    34,    91,    89,   128,    61,   186,  2278,
     163,   104,     3,     4,   128,   284,   204,     4,   103,   191,
      36,    91,    68,   107,   195,  2294,  2295,  2296,  1093,   151,
    2299,    18,  2301,  2302,   182,   188,  2305,  2306,  2307,   181,
     193,  2310,  2311,   338,   182,  2314,     4,  2316,  2317,   150,
    2319,   143,    27,    16,     5,     3,     4,  2957,   129,    68,
     119,     4,   129,    32,   118,   133,    27,   166,    21,    21,
     215,   215,   250,   193,    15,   195,   135,   197,   198,   157,
      31,     3,     4,   114,   215,   172,    44,   287,   208,    47,
     225,   256,   294,   273,   195,     4,   314,   205,    58,   234,
     235,   172,   172,   225,   276,   225,     3,     4,  3008,     5,
     289,   225,   234,   235,    36,   268,   264,   329,   227,   128,
     234,   235,    80,    63,   220,    68,   264,     4,   144,   282,
      88,   314,   228,   229,   337,   251,   314,   166,   214,   301,
      21,   128,   210,   264,   219,   250,   299,   300,   293,   293,
    1065,   220,   252,     3,     4,   174,   339,  2426,   287,    68,
    2429,   215,   315,   274,   317,  2434,   314,   250,  2437,   265,
     128,   299,   231,   264,   327,   328,   314,   330,   331,   260,
     333,   280,   312,   316,   287,   128,   245,  2456,   317,   232,
     343,     4,   338,   328,   325,   226,   154,    14,    15,   338,
     353,   354,   311,   345,   312,    22,   328,   334,   325,   325,
     330,   318,   334,    30,   328,     4,   225,   208,     4,   128,
     334,    38,   144,   819,   377,   234,   235,   380,   381,   250,
     383,   345,   303,   325,   387,   388,   205,   325,   225,   264,
     227,   318,    59,   378,   700,   398,   399,   234,   235,   384,
     385,   280,   405,     3,     4,   213,   378,   410,   411,    76,
     208,   383,   384,   385,   378,   418,   320,   225,   421,   325,
     384,   385,  1187,   236,  2543,   250,   234,   235,    63,    68,
       4,   241,   225,   379,   242,    27,   244,   440,   441,   250,
    1205,   234,   235,   325,   447,   448,   449,   450,   451,   452,
      13,   454,   386,   109,   457,     4,  2575,  1580,   337,   325,
    1583,   264,   264,   150,   272,   128,   225,  1609,   471,   328,
       4,     5,   475,   382,   311,   234,   235,   480,   481,   482,
     483,   484,   485,    44,   487,  1239,   489,   490,   491,   128,
      63,   328,   128,   312,  1636,   336,   499,   500,    68,    16,
      63,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,    42,    92,   326,    65,  1430,  1658,  1271,   488,   378,
     328,     4,    63,  1438,   314,   384,   385,    63,    62,    11,
      91,   977,   232,   264,    68,   328,  2655,   345,   336,   380,
     381,   378,     4,    63,    21,     3,     4,   384,   385,   339,
     553,   554,   208,   325,     5,     0,  2675,   290,     4,     4,
     111,   135,   225,  2682,    52,   298,  2685,  2686,   571,   328,
     378,   234,   235,    55,  1020,    58,   384,   385,    91,   128,
    1784,     4,   380,   381,   135,   378,   225,   121,   187,   225,
      46,   384,   385,    75,   186,   234,   235,   196,   234,   235,
     653,    91,     5,     4,   607,   290,   140,   577,   208,   129,
      11,    46,    68,   298,   214,   132,   104,   284,   256,   378,
      59,   155,     4,   105,    82,   384,   385,   115,   162,    85,
     297,   298,    65,    68,    63,     0,   170,     4,     5,    91,
       3,     4,   329,     3,     4,   127,    92,   650,   211,   131,
      85,    11,   213,    65,    45,   318,   230,   257,   250,   172,
     148,   631,   329,     5,   146,   328,    63,  2541,   185,   146,
      61,    63,    40,   298,   125,   311,   225,     4,   111,   314,
     211,     5,   172,   129,   284,   234,   235,     5,    63,   328,
     743,  2768,   328,  2812,    85,   698,     3,     4,   232,   111,
     129,     3,     4,   142,   339,   708,   373,   374,   375,   762,
     261,   378,  2831,  1478,   105,   378,   167,   168,   252,   236,
     172,   384,   385,   257,  1489,   259,   277,   278,   184,   292,
       3,     4,   129,   191,   125,     5,   336,   129,   129,   378,
     303,   314,   378,    13,    14,   384,   385,    31,   384,   385,
     118,    58,   286,   287,   129,     3,     4,   760,   241,     4,
       4,   295,   213,    40,   167,   168,   339,   202,   159,   160,
      27,   134,    63,   314,   777,   338,     5,   780,   314,   328,
     380,   381,   316,   303,     5,   167,   168,   264,    36,   215,
      91,   214,    40,    63,     4,    63,  2915,  2916,   339,  2918,
     803,  2920,  2921,   339,  2923,   808,   809,   810,   811,   326,
    2887,   814,   251,   816,    58,   818,   819,   820,   276,   296,
      63,   272,  2899,    28,   127,   376,   377,   266,   261,   378,
     265,   222,   134,   125,   216,   384,   385,    68,   129,   327,
     374,   118,   233,   325,   277,   278,   269,   215,   299,   261,
      68,  1297,   316,   276,   287,  1978,    63,   910,    98,    40,
      46,   129,     5,     5,  2983,   277,   278,   187,   324,   272,
     118,   172,     4,    16,   303,  1998,    33,  1902,   118,   314,
      66,   141,    68,   339,  1138,  2008,   129,    68,  2011,   324,
     272,  1145,   895,    68,   897,  2018,   144,   336,     5,   902,
     903,   214,   905,   906,   907,   908,   303,   298,   299,   140,
    2033,   303,  3031,  2036,    46,    93,    58,    49,    15,   922,
     923,  2044,   129,   104,  2047,    67,   929,   930,   303,   186,
      28,   112,    13,    14,   241,  2077,    68,   118,   215,   170,
     314,   211,   212,   376,   377,    68,   949,   950,   951,   952,
     953,  2093,   955,     5,   957,    87,   315,    56,   163,   140,
      63,    13,    14,   276,   376,   377,  1881,   215,   208,   972,
     973,   974,   104,   976,   977,   978,    63,   980,   110,  2121,
      30,   162,    63,   374,  2697,   112,   257,   192,  1742,  1435,
     250,   196,    93,   250,     4,    94,    63,   241,  1001,   180,
    1003,  2205,  2206,  2207,  2208,  2209,  2210,  2211,  2212,  2213,
    1013,    63,   303,  2726,    63,    68,   202,  1020,  1021,    22,
       3,     4,   292,  1026,    27,   692,   129,     5,   259,   161,
      40,  1001,    76,   303,   304,   303,   112,   218,   308,    63,
    1043,    31,   129,   710,  1047,     4,   186,    50,    51,   254,
      53,    54,   184,   152,   314,     4,  1059,  1060,  1061,     4,
     303,    64,   129,     5,  1067,   163,    63,  1139,   338,  1072,
      63,    30,     3,     4,  1146,    78,    79,   325,   259,   265,
     129,     5,     4,    86,  1087,   316,    89,  1140,    92,    13,
      14,   218,   297,   274,   192,    63,   303,    30,   196,   241,
    2242,   306,   307,  1106,   107,   129,   287,     4,   118,     5,
     250,    24,    25,   116,   117,   782,     4,   120,  1129,   123,
     787,  2834,  2835,     3,     4,  2838,   176,  2840,   314,     5,
     211,   212,   129,    37,     5,    66,   129,   318,   324,    63,
    2853,  2854,   218,     4,    48,  2858,  2859,   274,     5,  2862,
     331,   134,   333,   334,  2867,  2868,   254,   167,   168,   211,
     212,   129,     5,   295,     3,     4,    99,   611,     5,     5,
     614,   615,    37,   272,    78,    13,    14,    13,    14,     5,
    1183,    61,   322,    48,    26,     4,     5,   237,   191,   102,
       4,   323,   324,   374,     4,     5,  2843,     4,   274,   297,
     303,  1204,   206,   335,     4,   215,   216,   339,   306,   307,
    1213,   292,  2925,    78,   264,  2928,   303,   176,     4,   223,
    2933,     5,   303,   304,     4,    63,  1229,    63,  1231,   896,
       3,     4,  2945,  1236,  1237,  1238,   303,  2950,    11,   102,
     292,     5,    63,  1246,   129,   178,  1249,     4,  1251,   252,
    2373,   303,   304,     4,   303,   258,   308,   338,   162,  2382,
     299,  2836,   272,    46,     4,  1268,    49,  1270,  2391,     4,
    2185,     4,   275,     5,     5,  1278,  1279,   119,   237,   303,
    2855,    13,    14,   286,   288,    68,   338,   211,   212,     5,
    1293,  1294,   959,   135,  1297,  1298,  1299,   162,    13,    14,
       4,   226,  1305,   207,  1307,   264,   303,  1310,   129,  1312,
     303,   150,  3025,   220,   317,   318,  3029,    13,    14,    13,
      14,   104,    13,    14,  1377,     3,     4,   110,    74,     4,
     334,    63,   174,     4,  2476,   303,  3049,   340,     4,     5,
    2482,   345,   207,   276,     4,  2487,   167,   168,    63,   282,
    3063,     4,     5,  3066,  3067,  1358,   195,     4,     3,     4,
    1363,    86,  2277,     4,  1367,     4,  1369,    63,   292,    63,
    1373,     5,    63,   211,   212,   211,   212,   281,   161,   303,
     304,    13,    14,   386,   308,  2300,  1389,   291,  1391,   231,
    1393,  1394,  1395,  1396,   162,    40,  1399,  1400,    87,  1402,
    1403,     8,  1405,   245,  1407,     3,     4,     5,    10,   313,
       5,  1414,   477,   478,   338,   104,   281,   321,  1421,  1389,
     298,  2996,  1425,  1426,  1427,   187,   291,     4,  3003,  1121,
    1122,    63,  1435,  1436,     4,   339,  1439,     4,   196,   164,
     187,   187,    19,     4,  1447,   219,  1449,   219,     5,  1452,
       5,   272,   377,    86,   292,     4,   292,     4,   208,   384,
     219,   386,    68,    40,   214,   303,   304,   303,   304,    68,
    1440,   209,   308,   118,   339,   243,    68,     3,     4,   211,
     212,    58,   303,   209,   250,  3060,     5,  3062,  1458,    42,
      43,     3,     4,  1496,     5,  1498,   211,   212,  1501,  1502,
     338,  1504,   338,  1506,     4,   194,   251,   257,     4,  1512,
       4,     4,   295,  1516,    40,   211,   212,   211,   212,   287,
     211,   212,  1525,   248,   249,   271,     3,     4,     4,   106,
       5,   164,   219,  1544,   284,   281,     5,    91,   263,    91,
     323,   324,     5,  1210,     4,  1556,     3,     4,     5,    61,
      91,   128,   335,  2695,   243,    91,   339,     3,     4,     5,
     292,     4,   330,    40,     5,     5,     4,  1578,  1579,  2711,
     215,   303,   304,     5,  2716,   104,   308,   292,     4,   211,
     212,     3,     4,    16,   309,     5,   336,  2502,   303,   304,
     279,    16,   118,     4,  2509,   172,   292,     4,   292,     4,
    1267,   292,     4,  1606,  1607,  1608,   338,   303,   304,   303,
     304,   102,   303,   304,  1281,   248,   249,     3,     4,     5,
       6,     7,    35,   338,     5,  1628,     5,     3,     4,  1632,
     263,   381,     8,     9,    10,  1605,   189,   190,   215,    61,
      91,   118,   338,    91,   338,     4,    91,   338,   225,     5,
       5,     5,    91,  1656,  1657,     4,     4,   234,   235,  2574,
     292,     5,  2577,  1666,   241,  2580,  1669,  2582,   221,   246,
       5,   303,   304,  1676,     5,     5,   309,     3,     4,     5,
       6,     7,     3,     4,     5,     6,     7,  1690,     4,     4,
    2136,     5,  1695,     5,     5,    66,  1699,     4,  1701,  1702,
     113,  1704,  1705,  1706,     4,  1708,   338,     4,  1711,  1712,
    1713,  1714,  1715,  1716,  1717,  1718,  1719,  1720,  1721,    11,
       5,  1724,  1725,  1726,  1727,   138,   139,    11,     4,   181,
       4,  1734,  1735,     4,   147,  1738,  1739,  1740,     5,     4,
       4,  1744,  1745,  1410,  1411,  2191,     3,     4,   172,     6,
       7,   328,     4,     4,  1757,  1758,   169,  1760,  1761,     5,
       5,     5,    37,   172,     4,     4,   179,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,     5,    38,    68,    55,
      38,   378,   286,   286,   318,  2251,   311,   384,   385,     5,
      22,     4,     4,     4,    84,     5,     5,     5,     5,    75,
    2735,     4,     4,    93,     5,     5,   300,   300,     5,  1832,
       5,  1834,  1835,     5,   104,  1838,    92,    22,     4,    51,
    1843,  1844,    54,  1846,  1847,  1848,   121,  1850,  1851,   105,
    1853,  2993,  1855,  1856,     4,  1858,  1859,     5,  1861,     5,
    1863,     5,  2691,     5,     5,  2694,    51,  2696,  1871,    54,
     140,   127,    57,  1843,    86,   131,  1879,     5,     4,     4,
       4,  1884,  1885,  2712,  2713,     5,     5,  1890,     5,     5,
     146,   264,   162,   112,   264,   264,  1899,   264,     5,   112,
    2729,    86,    40,   264,   264,   117,   112,     5,   120,   236,
      40,   236,   270,   270,     5,     4,   236,   192,     5,   194,
     195,     5,   197,   198,     4,     4,   236,     5,     5,     5,
    1933,     5,   117,     5,  1601,   120,     4,   193,     4,   118,
     118,     5,     5,     5,  1914,     4,    11,     5,   218,     5,
       4,  1954,  1955,     5,  1924,   230,  1959,     5,  1928,     4,
      11,     5,  1965,  1630,     5,     4,     4,  1634,     5,     5,
       4,   264,     5,     5,   249,   250,     5,  1988,     4,     4,
     255,     4,     4,     4,   259,  1996,  1997,     5,     0,   259,
       5,   264,   264,     4,  1661,  2006,  2007,   274,   264,   232,
     186,   264,   264,   219,  1671,  2016,  2017,     4,     4,     4,
       4,     4,   300,  1680,  1681,  2461,  2462,   287,  2464,  2465,
    2031,  2032,  2468,  2469,  1691,     5,     5,     5,     5,     5,
       5,  2042,  2043,     4,     4,   264,     5,     4,  2049,     4,
     252,   316,     4,   264,   319,     5,     5,     5,  2059,     5,
     264,   342,   342,     4,     4,   330,     4,     4,     4,     4,
     342,   331,   342,   333,     4,     4,   250,   252,     5,  2072,
    2073,     5,  2075,     4,   286,   350,   250,   250,    63,  2525,
     250,   250,     5,     4,     4,   300,     5,     4,   338,     5,
       5,  2094,  2095,  2096,  2097,  2098,  2099,  2100,  2101,  2102,
       4,   286,     5,     5,     4,     4,  2871,     5,     5,     5,
       5,     4,   316,     5,  2117,     5,  2119,     4,   387,     5,
       5,     4,    11,     5,     5,     5,     4,   387,     5,     4,
       4,   316,  2135,  2136,     4,   300,     5,     5,  2141,     4,
     125,     4,   300,     5,   129,     5,     4,  2150,  2151,  2152,
    2153,  2154,  2155,  2156,  2157,  2158,  2159,     5,     5,  2162,
    2163,  2164,  2165,  2166,  2167,  2168,  2169,  2170,  2171,  2172,
    2173,     4,  2175,     5,  2177,  2178,  2179,     4,   476,     5,
       5,     4,   167,   168,     4,   387,     5,   172,  2191,  2192,
       5,     5,     5,   468,  2959,     5,     4,   425,     5,     5,
       5,     5,     4,     4,   479,     5,     4,     4,     3,     4,
     316,     5,     5,   488,     5,     4,   387,     5,     5,     5,
       5,     4,     4,     4,    19,     5,     5,     5,   213,     5,
       4,   387,     5,     5,  2680,     5,     5,     4,  2684,     4,
    2243,     5,  2245,     5,  2247,     5,  2249,     5,  2251,  2252,
       4,  2254,     4,   387,     5,     4,  2259,  2260,     4,  2262,
    2263,     4,  2265,     4,  2267,     5,     5,     5,     5,     5,
    2273,     4,  2275,     4,   387,     5,  2279,  2723,     4,  2282,
       4,   556,   557,   268,     5,     5,     4,   272,     4,  3018,
       5,     5,     4,     4,   569,     5,     5,     5,     4,   574,
       4,   387,     5,     5,     5,     5,     5,     5,   583,     4,
       4,   106,     5,     4,   299,  2285,     4,     4,   303,     4,
     387,     5,     5,  2326,     5,     4,  2337,     4,  2886,     5,
     315,     5,     5,     5,     4,     4,  2347,  2348,     5,     5,
       5,     5,     4,     4,  2706,     5,     4,  2358,     4,     4,
       4,     4,     4,     4,  2324,     4,  2367,     4,     4,     4,
    2371,  2372,     4,  2869,     5,     5,     4,     4,     4,  2380,
    2381,  2424,     4,  2959,     5,     4,     4,   172,  2389,  2390,
       5,     5,     5,     5,  2395,     4,     4,     4,     4,     4,
       4,     4,     4,     4,  2405,  2406,     4,     4,   673,   674,
     675,   676,     5,     5,     5,  2416,     4,  2418,     4,     4,
       4,     4,     4,     4,  2955,     5,     4,     4,     4,  2086,
       5,     4,   858,     5,     5,     5,     4,  2430,     4,     4,
       4,    -1,     5,     5,     4,     4,     4,     4,  2441,  2442,
    2443,  2444,  2445,  2446,  2447,  2448,  2449,  2450,  2451,  2971,
    2972,   246,     4,   332,  2457,  2122,     4,     4,  2461,  2462,
       5,  2464,  2465,     4,     4,  2468,  2469,  2470,  2471,  2472,
    2473,  2474,  2475,     5,  2477,  2478,  2479,     5,     4,     4,
    2483,  2484,  2485,  2486,     5,  2488,  2489,  2490,  2491,  2492,
    2493,     5,  2495,     5,     5,  2498,  2499,     4,    -1,     5,
       5,     5,     4,     4,    -1,     5,   781,     5,     5,    -1,
      -1,    -1,    -1,    -1,    -1,   394,    -1,    -1,    -1,  2522,
      -1,    -1,  2525,  2526,    -1,    -1,    -1,  2530,    -1,    -1,
      -1,    -1,  2535,  2536,    -1,  2538,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,    -1,    -1,
    2591,    -1,    -1,  2594,  2587,    -1,  2597,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2607,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2616,    -1,    -1,  1115,    20,
      21,    22,    -1,    -1,  2625,    -1,    -1,    -1,    -1,    -1,
      -1,  2632,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2643,    -1,    -1,    -1,    -1,    -1,  2649,    50,
      51,    -1,    -1,    54,    -1,    -1,  1153,    -1,    -1,    -1,
      61,    -1,    -1,    64,    -1,    -1,  2659,    68,    -1,    -1,
    2663,    -1,    -1,    -1,    -1,    -1,    -1,    78,    79,    -1,
    2673,  2674,   551,    -1,    -1,    86,  2679,  2680,    -1,   558,
    2683,  2684,   561,    -1,    -1,    -1,  2689,   566,   963,  2692,
    2693,   570,    -1,    -1,    96,    -1,    -1,    -1,    -1,    -1,
     975,    -1,   104,    -1,    -1,   116,   117,    -1,    -1,   120,
     112,  2714,  2715,    -1,  2717,  2718,  2719,  2720,  2721,    -1,
    2723,  2724,    19,    -1,    -1,  2728,    -1,    -1,   130,   140,
      68,    69,    70,    -1,    -1,   137,    -1,  1012,  2741,    -1,
      -1,    -1,    -1,    -1,    41,    -1,    -1,    44,  2751,    -1,
      -1,   162,    -1,    -1,    -1,    -1,    -1,    95,    -1,    -1,
     162,    -1,  2773,    -1,    -1,    -1,  2769,    -1,    -1,  2780,
     108,   173,    -1,    -1,    -1,    -1,   655,    -1,  2789,    -1,
     191,    -1,    -1,    -1,    81,    -1,   124,  2798,    -1,    -1,
     201,    88,    -1,  2804,    -1,    -1,    -1,  2808,    -1,    -1,
      -1,    -1,    99,   100,    -1,    -1,    -1,    -1,  2811,   106,
      -1,    -1,    -1,  2816,    -1,  2818,   218,    -1,   156,    -1,
      -1,  2824,    -1,    -1,   226,    -1,  1101,    -1,   166,    -1,
      -1,    -1,    -1,    -1,  2837,    -1,  2503,    -1,   135,   250,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   258,   259,    -1,
     188,    -1,    -1,  2856,    -1,    -1,   153,  2860,    -1,   197,
    2913,    -1,    -1,    -1,   275,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   274,    -1,   171,   172,   287,    -1,    -1,   217,
      -1,   178,    -1,  2886,    -1,   287,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   239,    -1,   305,    -1,   316,   203,   318,    -1,    -1,
      -1,  1186,    -1,    -1,  2917,    -1,    -1,    -1,   329,  2922,
      -1,  2924,    -1,    -1,    -1,    -1,    -1,    -1,  2931,   340,
      -1,    -1,    -1,    -1,    -1,    -1,   815,    -1,    -1,  2942,
      -1,    -1,   280,   822,  2947,    -1,    -1,   285,    -1,   246,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   374,   302,  1240,    -1,   305,  2971,  2972,
      -1,    -1,    -1,    -1,    -1,  1250,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2997,    -1,    -1,    -1,  3001,    -1,
      -1,  3004,    -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,
      -1,  3014,  3015,  3016,  3017,    -1,    -1,   314,  2988,  1526,
    1527,  1528,    -1,  3026,     4,     5,    -1,  3030,    -1,  1536,
    1537,  1538,    -1,    -1,  3037,    -1,  3039,    -1,  1545,  1546,
    1547,    -1,    -1,  1550,  1551,    -1,  1553,  1554,   345,    -1,
    3020,    -1,    -1,  3023,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2730,    -1,    -1,    -1,  2734,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
    1587,  1588,    62,   962,  1591,  1592,    -1,    -1,    68,    19,
     969,    -1,    -1,    -1,    -1,    -1,  1371,    77,    -1,    79,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    87,    -1,    39,
      -1,    -1,    -1,    93,  1389,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   104,    -1,    -1,    -1,    58,    -1,
      -1,    -1,   112,    -1,    -1,  1014,  1015,    -1,    -1,    -1,
    1019,   121,    -1,  1022,  1419,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1429,  1034,    -1,    -1,    -1,    -1,
     140,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,    -1,
      -1,  1446,    -1,    -1,    -1,    -1,   106,    -1,    -1,    19,
      -1,    -1,   162,  1458,  2851,    -1,    -1,    -1,  1463,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     180,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2875,    -1,
      -1,    -1,    -1,   193,   194,    -1,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   218,    -1,
      -1,    57,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   243,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,   259,
      96,    97,  1161,    -1,    -1,   215,    -1,    -1,   104,    -1,
      -1,    -1,    -1,    -1,   274,    -1,   112,    -1,    -1,   279,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   287,    -1,    -1,
      -1,   241,    -1,    -1,   130,   295,   246,    -1,    -1,    -1,
      -1,   137,    -1,    -1,   140,    -1,    -1,   257,    -1,    -1,
    1605,    -1,   172,    -1,    -1,    -1,   316,    -1,    -1,    -1,
      -1,    -1,    -1,  3010,    15,    -1,   162,    -1,    -1,    -1,
     330,   331,    23,   333,    -1,    -1,    -1,   173,  1633,    -1,
      -1,    -1,    -1,    -1,    -1,     4,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,  1662,    -1,    -1,
    1665,    -1,    -1,     4,   374,   325,    -1,    -1,    -1,  1674,
    1675,   241,   218,    -1,    -1,    -1,   246,  1682,    19,    -1,
     226,    -1,    -1,    -1,  1689,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,    -1,    -1,    -1,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,  1729,    -1,    -1,    -1,   274,    -1,
      -1,    -1,  1969,    -1,    -1,    -1,  1741,   106,    -1,    -1,
      -1,   287,    -1,    -1,    -1,  1982,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1992,    -1,    -1,    -1,   305,
      -1,    -1,    -1,    -1,    -1,   106,  1375,    -1,    -1,    -1,
     316,    -1,   318,    -1,    -1,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   172,  1413,    -1,    -1,    -1,    -1,  1418,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1428,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2064,   374,    -1,
      -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,  1843,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,
      -1,    -1,  1867,    -1,   177,    -1,   267,    -1,    -1,   270,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,  1883,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1896,    -1,  1898,    -1,    -1,    -1,    -1,    -1,    -1,
     241,    -1,    -1,  1908,    -1,   246,  1911,  1912,  1913,  1914,
    1915,    -1,  1917,    -1,    -1,  1920,    -1,    -1,    -1,  1924,
    1925,  1926,  1927,  1928,  1929,    -1,  1931,  1932,    -1,    -1,
      -1,  1936,  1937,  1938,    -1,    -1,  1941,  1942,    -1,    -1,
      -1,    -1,  1947,  1948,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,    -1,    -1,    -1,    -1,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
      -1,  1670,    -1,    -1,    -1,    -1,  2071,    -1,    -1,  2074,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2085,    -1,    -1,  2088,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2336,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2118,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1730,    -1,    -1,    -1,    -1,    -1,  1736,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,    -1,    -1,    -1,  2396,
    2397,  2398,  2399,  2400,    -1,  2402,  2403,    -1,  2173,    -1,
    2407,  2408,  2409,  2410,  2411,    -1,  2413,  2414,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1840,    -1,    -1,    -1,    -1,  1845,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    -1,    -1,    -1,  2270,    -1,  1876,    -1,    -1,
      -1,    -1,    -1,  1882,    -1,    -1,    -1,    -1,    -1,    -1,
    2285,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1909,    -1,    -1,    -1,    -1,    -1,    -1,  1916,  2313,    67,
      68,    -1,    -1,    -1,    -1,    73,    -1,    -1,    -1,  2324,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    96,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,
      -1,    -1,    -1,  2590,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2599,  2600,  2601,  2602,  2603,    -1,  2605,  2606,
      -1,  2608,  2609,  2610,  2611,  2612,    -1,  2614,  2615,    -1,
    2617,  2618,  2619,  2620,  2621,    -1,  2623,  2624,    -1,  2626,
      -1,    -1,    17,    -1,    19,    -1,    -1,    -1,    -1,  2636,
    2637,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2647,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2428,    -1,    -1,  2431,    -1,    -1,   187,
      -1,    -1,    -1,    -1,  2439,    60,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   207,
    2455,    -1,    -1,  2458,    -1,    -1,    -1,    -1,  2463,    -1,
    2069,  2466,  2467,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   232,    -1,    -1,    -1,    -1,    -1,
    2089,   106,    -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,  2504,
    2505,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2123,  2124,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2139,  2140,    -1,    -1,    -1,  2144,  2145,    -1,    -1,    -1,
      -1,    -1,    -1,   301,    -1,    -1,  2783,   172,    -1,    -1,
      -1,  2556,    -1,    -1,    -1,  2792,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2801,    -1,  2803,   192,    -1,    -1,
    2807,    -1,    -1,    -1,    -1,  2184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2195,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,    -1,   374,    -1,    -1,    -1,
      -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2248,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2654,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2269,    -1,    -1,    -1,    -1,    -1,  2903,    -1,  2905,    -1,
    2907,    -1,    -1,  2910,    -1,  2912,    -1,    -1,    -1,    -1,
      -1,    -1,  2687,  2292,    -1,    -1,    -1,    -1,  2297,    -1,
      -1,    -1,    -1,  2698,  2303,   320,    -1,    -1,    -1,  2308,
      -1,    -1,    -1,  2312,    -1,    -1,  2315,    -1,    -1,  2318,
      -1,  2320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,    -1,    -1,
      -1,  2756,    -1,    -1,    -1,  2760,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    51,    -1,
      -1,    54,    58,    19,    57,    -1,    -1,    -1,    -1,  2814,
    2815,    64,  2817,    -1,    -1,    68,    -1,  2822,  2823,    -1,
      -1,    -1,  2827,    -1,    -1,    78,    79,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,   104,    -1,    -1,    -1,    -1,  2861,    19,    -1,   112,
      -1,    -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2494,    -1,   140,  2893,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,
      -1,  2510,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   162,
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   191,    -1,
      -1,    -1,  2551,    -1,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,  2584,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2988,    -1,   241,    -1,    -1,    -1,    -1,
     246,    -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,   252,
      -1,  3006,    -1,    -1,    -1,   258,   259,    -1,    -1,    -1,
     172,    -1,    -1,    -1,    -1,  3020,    -1,   106,  3023,    -1,
      -1,   274,   275,    -1,    -1,   241,    -1,    -1,    -1,    -1,
     246,    -1,    -1,   286,   287,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2652,    -1,    -1,    -1,    -1,    -1,  2658,
      -1,    -1,    -1,  2662,   310,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   316,    -1,   318,    -1,    -1,    -1,  2678,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,    -1,
     333,    -1,    -1,   172,   246,    -1,    -1,   340,    -1,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,    -1,    -1,    -1,
      -1,   374,    -1,  2732,  2733,    -1,    -1,    -1,    -1,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   246,   320,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2842,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   177,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2951,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2975,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3021,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  3042,    -1,    -1,  3045,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,    -1,    -1,    -1,    -1,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,    41,    -1,    -1,    44,    -1,    -1,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    66,    67,
      -1,    -1,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    90,    91,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   100,   101,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   126,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   149,    -1,    -1,    -1,   153,    -1,    -1,    -1,   157,
      -1,    -1,    -1,   161,   162,    -1,    -1,    -1,    -1,   167,
     168,    -1,    -1,   171,    -1,    -1,    -1,    -1,    -1,   177,
      -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   194,    -1,    -1,    -1,
     198,   199,   200,    -1,    -1,   203,   204,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,
      -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     238,    -1,   240,   241,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   253,    -1,   255,    -1,    -1,
      41,    -1,    -1,    44,   262,    -1,    47,    -1,   266,    -1,
      -1,    -1,   270,    -1,   272,    -1,   274,    -1,    -1,    -1,
      -1,   279,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      71,    72,    73,    -1,    -1,    -1,    -1,   295,    -1,    -1,
      81,    -1,    83,   301,    -1,    -1,    -1,    88,    -1,    90,
      91,    92,    -1,    -1,    -1,    -1,    -1,    98,    -1,   100,
      -1,   319,   320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   332,    -1,   334,    -1,    -1,    -1,
      -1,    -1,    -1,   341,    -1,    -1,   344,   345,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   153,    -1,    -1,    -1,    -1,   375,    -1,    -1,
      -1,   162,    -1,   164,   165,   383,   167,   168,    -1,    -1,
     171,    -1,    -1,    -1,   175,    -1,   177,    -1,    -1,    -1,
      -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   203,   204,    -1,    -1,    -1,   208,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,   220,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,    -1,   240,
      -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   272,    -1,   274,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   319,   320,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   329,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,    -1,    -1,
      -1,    -1,   343,    -1,   345,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   383
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
     320,   332,   334,   341,   344,   345,   375,   383,   389,    68,
      11,    55,    75,   105,   127,   131,   146,   325,   425,     3,
       4,   325,   390,   430,   208,   214,   257,   284,   336,   381,
     432,   316,     4,    40,   118,   167,   168,   215,   216,   272,
     437,    28,   163,   192,   196,   254,   297,   306,   307,   405,
     439,    87,   104,   194,   243,   279,   440,    40,    61,   118,
     215,   320,   390,   449,     4,    19,    40,    58,   106,   128,
     172,   215,   225,   234,   235,   241,   246,   328,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   378,   384,   385,
     392,   400,   401,   402,   451,    33,   452,   392,    44,    47,
      80,    88,   154,   213,   242,   244,   272,   345,   391,   392,
      66,   390,   454,   157,   455,    41,    44,    47,    67,    71,
      72,    73,    81,    83,    88,    90,    91,    92,    98,   100,
     135,   153,   162,   164,   165,   167,   168,   171,   175,   177,
     183,   203,   204,   208,   216,   220,   238,   240,   247,   272,
     274,   301,   319,   320,   329,   337,   343,   345,   383,   456,
      87,   104,   507,    19,    41,    44,    81,    88,    99,   100,
     106,   135,   153,   171,   172,   178,   203,   246,   301,   314,
     345,   510,    68,   392,    63,   314,   339,   594,    63,   314,
     339,   593,    92,   123,   206,   223,   288,   334,   345,   516,
      15,     4,    46,    49,    68,    87,   104,   110,   161,   184,
     295,   323,   324,   335,   339,   576,    26,   119,   135,   174,
     231,   245,   519,   256,   537,     5,    68,    92,   151,   334,
     383,   392,   538,     5,   539,    59,   142,   251,   266,   336,
     556,    46,    66,    68,   202,   265,   314,   324,   577,   314,
     592,    68,   226,   377,   384,   386,   578,    39,   215,   257,
     325,   390,   400,   402,   579,     5,   334,   345,   392,   582,
      74,   187,   271,   281,   583,     4,   584,    92,   556,    63,
     314,   339,   591,   215,   325,   390,   595,    26,   119,   135,
     231,   245,   382,   597,    52,   104,   115,   148,   327,   619,
     620,     4,    37,    48,    78,   162,   207,   281,   291,   313,
     321,   339,   418,     4,   135,   230,   621,   325,   390,   623,
      15,    23,   267,   270,   401,   624,   256,   628,   325,   390,
     629,     0,     5,   392,    61,   390,   426,   298,     5,     4,
     325,   390,   427,     5,    32,   312,   428,   134,   390,   429,
     134,   390,   431,   390,     4,   214,   269,   276,   435,   208,
     336,   380,   381,   390,   434,   392,   150,   195,   433,   220,
     390,    82,   191,   276,   390,   436,     5,   390,   390,   390,
       4,   167,   168,   216,   272,   438,     4,   390,   390,     5,
     252,   441,    31,   442,     5,   443,     5,   447,     5,    31,
     448,   390,     8,     9,    10,   390,   396,   397,   398,   399,
     390,   390,    40,   118,   215,   390,   450,   390,   215,   400,
     402,   390,    35,   113,   138,   139,   147,   169,   179,   407,
     390,     4,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   125,    68,    55,    75,    92,   105,   127,   131,
     146,   193,   459,   127,   461,   208,   214,   257,   284,   336,
     380,   381,   390,   444,   462,   316,   465,   187,   466,   187,
     196,   468,    67,    68,    73,    96,   187,   207,   232,   301,
     374,   400,   470,   390,   402,   473,    61,   320,   400,   474,
     310,   400,   402,   475,    33,   476,   400,   402,   477,     4,
     400,   402,   478,    45,    61,    85,   105,   125,   129,   159,
     160,   222,   233,   298,   299,   374,   482,   237,   338,   488,
      68,     5,    93,    63,   314,   339,   496,    63,   314,   339,
     495,     4,    92,   129,   480,     5,    67,   402,   479,    15,
      46,    68,    85,   184,   324,   339,   489,   556,    46,    68,
      85,   202,   265,   314,   324,   490,   314,   494,    68,   257,
     492,   315,    63,   314,   339,   493,    21,   146,   264,   296,
     497,    37,    48,    78,   162,   207,   281,   291,   339,   498,
     402,    93,    15,   219,   505,   400,   508,    68,    76,   511,
      31,   512,    44,    91,   213,   513,   162,   243,   287,   330,
     514,   400,    17,    60,   122,   192,   320,   400,   515,     5,
       5,   166,   280,   337,   400,     4,     5,   166,   280,   400,
       4,     4,   214,   518,     5,     4,     4,   129,   390,     4,
      46,    49,    68,   104,   110,   161,   295,   323,   324,   335,
     339,    68,    69,    70,    95,   108,   124,   156,   166,   188,
     197,   217,   239,   280,   285,   302,   305,   404,     5,     4,
     390,   392,     5,   167,   168,   272,   520,     5,   522,     5,
     125,   167,   168,   213,   272,   299,   523,    98,   118,   208,
     536,     5,   534,     5,   299,   535,     4,     5,   392,   392,
     390,   390,     5,     4,     5,    62,    68,    77,    79,    84,
      87,    93,   104,   112,   121,   140,   162,   180,   193,   194,
     218,   243,   257,   259,   274,   279,   287,   295,   316,   330,
     331,   333,   374,   540,   404,     5,     4,   220,   228,   229,
     265,   379,   403,   390,   400,   390,   400,     5,   390,    40,
     118,   390,   581,   392,   390,   400,   402,   580,   390,   407,
     390,     4,   401,    56,    94,   152,   272,   585,     4,     4,
     390,     4,   162,   287,   586,     5,   400,     4,    40,   118,
     390,   596,   390,   102,    63,   129,   167,   168,   272,   303,
     599,   129,   618,    63,   125,   129,   167,   168,   172,   213,
     268,   272,   299,   303,   315,   600,   601,    63,   129,   303,
     617,     5,    63,   129,   303,   598,     4,    34,   114,   226,
     590,    68,   392,   421,    68,   392,   422,    68,   392,   423,
      12,   133,   210,   589,   390,    18,   227,   311,   392,   419,
       4,   390,   250,   390,   424,   390,   299,     4,   390,   390,
       4,   251,   325,   627,     4,   318,   625,     4,   318,   626,
       4,   407,   134,   390,   630,   390,   390,     4,     5,   390,
      11,   390,   390,   390,    30,    99,   178,   276,   282,   406,
     406,     4,   220,   390,   390,     4,     4,     4,   390,   390,
     390,   390,   390,   390,     4,   390,     4,   390,     4,     4,
       5,     5,   400,     5,   390,   390,   396,   398,   398,   400,
     390,   390,   390,   390,   390,   390,   390,   400,   402,   399,
     390,   390,   399,   390,     5,   298,   109,   208,   460,   214,
     276,   463,   187,    82,   191,   276,   464,   150,   195,   445,
     445,     4,   467,     4,   469,   214,   284,   471,   196,   472,
     187,   407,   390,   390,   400,   400,   407,   407,   407,   400,
     407,   390,   400,     4,   485,     4,   402,   483,   219,     4,
     181,   345,   484,   219,   400,     4,   143,   325,   487,     5,
       5,   457,     4,   219,   145,   273,   393,   390,     4,   491,
     491,   491,   491,     4,     5,    62,    68,   121,   140,   155,
     162,   170,   232,   252,   257,   259,   286,   287,   295,   316,
     374,   550,   402,   209,   209,    68,   501,    68,   502,    68,
     503,    18,   227,   311,   499,   250,   504,   390,     5,   458,
     251,   506,   401,   407,     5,   400,   400,   400,   400,     4,
       4,     4,   392,     4,     4,   219,   390,   404,     5,   390,
     392,    13,    14,    63,   211,   212,   292,   303,   304,   338,
      91,    91,    91,     5,     5,    13,    14,    63,   211,   212,
     292,   303,   304,   308,   338,    91,    91,   172,    91,   172,
     172,   177,   401,   526,   531,    91,   172,     5,   524,     4,
       4,    13,    63,   211,   292,   303,   338,     5,     5,     4,
     390,   401,    20,    21,    22,    50,    51,    54,    57,    64,
      68,    78,    79,    86,    87,   104,   112,   116,   117,   120,
     140,   162,   191,   218,   250,   252,   258,   259,   274,   275,
     286,   287,   316,   318,   331,   333,   340,   374,    68,    84,
      93,   104,   140,   162,   218,   259,   287,   331,   333,     4,
      30,   176,   237,   264,   543,     5,    65,   111,   261,   277,
     278,   376,   377,   549,   104,   541,    16,   287,   547,    40,
     118,   215,   548,     4,     5,    16,   236,   326,   390,   287,
     549,   557,   135,   549,   558,    36,    40,   118,   144,   215,
     325,   390,   559,   400,   392,    96,   104,   112,   130,   137,
     162,   173,   218,   226,   274,   287,   305,   562,    40,   118,
     215,     5,   287,   317,   566,    16,   132,   185,   236,   326,
     567,   318,   392,   568,     5,   104,   112,   334,    16,    16,
       4,   390,   390,   390,   390,   390,   390,   407,   390,   390,
     399,   390,     4,   407,     4,    40,   118,   215,   293,   587,
      40,   118,   215,   293,   588,     4,   102,     5,     5,    91,
      91,    91,     4,     5,     5,    91,     5,    91,   172,    91,
     172,   601,    63,   129,   172,   303,   605,    63,   129,   303,
     616,    91,   172,    63,   129,   303,   603,     4,    63,   129,
     303,   602,     5,     5,     4,     5,     5,     4,     4,     5,
       5,     5,   390,   311,   392,   420,   390,   390,   390,   390,
       4,   390,   622,   390,   390,   401,    66,     4,     4,     5,
       4,     4,     5,     4,   102,   289,   408,   390,   390,    11,
       5,    11,   390,   390,    11,     4,    11,     4,     4,   390,
     390,   390,   390,   390,     4,   390,     5,   390,     4,   392,
       4,     4,   407,   400,   407,   390,   390,   390,   400,   390,
     399,   390,   390,     5,     5,   390,   402,   390,   400,   390,
     407,   407,   408,   408,   408,   407,   399,   390,   407,   390,
     393,   486,   181,     5,     4,   407,   172,   172,     4,     5,
       4,     4,   390,   481,    38,    38,   390,    20,    21,    22,
      50,    51,    54,    61,    64,    68,    78,    79,    86,   116,
     117,   120,   140,   162,   191,   201,   250,   258,   259,   275,
     287,   316,   318,   329,   340,   374,    68,   140,   170,   259,
     316,    30,   176,   237,   264,   551,   390,   232,   390,   552,
      16,   390,   286,   562,   286,   232,   390,   553,   318,   554,
      16,   103,   390,   311,   500,   390,     5,   408,     4,     4,
      58,   400,     4,     5,   517,   390,     5,     5,     5,   172,
     204,   412,   412,   180,   294,   410,     4,     4,     5,     5,
     521,   521,   521,   300,   300,     5,     5,     5,    16,   174,
     411,   411,   410,     4,     4,   410,     5,     5,   525,     5,
     532,     5,   533,   532,   533,   177,   373,   401,   529,     5,
     528,     5,   532,   533,     5,    13,    14,    63,   211,   212,
     292,   303,   304,   308,   338,     4,     4,     5,     5,   412,
     410,     4,     5,     5,   407,    86,   164,   248,   249,   263,
     309,   415,     6,     7,   390,   395,   264,   264,   264,   112,
      40,    68,   104,   112,   118,   140,   162,   180,   218,   259,
     274,   287,   318,   331,   333,   334,   374,   542,   264,     5,
      27,   182,   264,   314,   150,   329,   112,    22,    51,    54,
      86,   117,   120,   252,   286,    22,    51,    54,    57,    86,
     117,   120,   252,   286,   316,    40,   264,   264,   112,     5,
     236,    27,   250,    36,   144,   325,   390,   290,   298,   270,
     400,   562,    40,   141,   250,   314,   270,   236,     5,     5,
     274,    27,   250,     4,     5,     5,   236,    36,   144,   325,
     390,   562,   236,   392,     4,     4,   390,     5,   338,    22,
      27,    50,    51,    53,    54,    64,    78,    79,    86,    89,
     107,   116,   117,   120,   191,   252,   258,   275,   286,   317,
     318,   340,   386,   544,   390,   390,   390,   390,   390,   549,
     400,     5,     4,     5,   390,   390,   400,   390,   392,   390,
     390,   549,     5,     5,   390,   390,   392,     5,    16,     5,
       5,   390,   390,   399,   390,   390,     4,   390,   390,   118,
     390,   390,   118,     4,    42,    43,   189,   190,   221,   417,
     417,    63,   129,   303,   613,    63,   129,   303,   610,    63,
     129,   303,   607,   417,     5,    63,   129,   303,   604,    63,
     129,   303,   615,    63,   129,   303,   614,    63,   129,   303,
     612,    63,   129,   303,   611,     5,     5,    63,   129,   303,
     606,     4,     5,     5,     4,    63,   129,   303,   609,    63,
     129,   303,   608,     5,     5,     4,     5,     5,     4,   417,
     417,   417,   390,   390,   390,   390,     4,   400,   390,   407,
     401,     5,     5,    11,   390,   400,   402,   390,    11,   390,
     390,   390,    61,   390,     4,   390,   390,     4,   390,   390,
       5,   390,     5,   390,    47,   301,   446,     5,   392,   392,
     407,   390,     4,     4,     4,   407,   400,   390,   390,   390,
     390,   407,   400,   408,   399,   390,     4,   408,   390,     4,
     402,     5,    24,    25,   102,   409,     4,   400,   390,   390,
       4,   390,     5,    86,   164,   248,   249,   263,   309,   400,
     402,   264,   264,   264,    21,   264,   400,   264,    27,   182,
     264,   314,   150,   329,    21,   264,   264,   264,    21,   264,
      27,   186,   250,   186,   290,   298,   186,   250,   322,   562,
     141,   186,   250,   314,     4,   274,    27,   186,   250,   562,
     232,   390,   390,   390,   390,   390,   390,   219,   390,   390,
      20,   260,   509,     4,     4,   390,   412,   412,   412,     4,
     412,   412,   412,    13,    14,    63,   211,   212,   292,   303,
     304,   338,   411,   412,   412,   412,   412,   412,     4,   412,
     412,     4,   411,    13,    14,    63,   211,   212,   292,   303,
     304,   338,     5,    13,    14,    63,   211,   212,   292,   303,
     304,   308,   338,    13,    14,    63,   211,   212,   292,   303,
     304,   338,     5,   527,     5,   530,     5,     5,    13,    14,
      63,   211,   212,   292,   303,   304,   308,   338,     5,    13,
      14,    63,   211,   212,   292,   303,   304,   308,   338,   300,
       5,     5,     5,   411,   411,   410,     4,     4,   410,     5,
       4,     4,   412,   412,     4,   412,   412,     5,   392,   400,
     402,     5,   390,   390,     5,   390,     5,   395,   112,   218,
     274,   112,   218,   274,     5,   390,   392,     5,   390,   400,
     392,     5,     5,   395,   264,   264,    21,   264,    21,   264,
     264,    21,   264,   342,   342,     4,     4,     4,   542,     4,
       4,     4,   342,   342,     4,     5,     4,   390,     5,   390,
       5,   395,   392,   400,   400,   390,    27,    50,    53,    64,
      89,   107,   386,   413,     4,   390,   407,   392,     5,   400,
     400,   390,   392,   392,   400,   400,   390,   392,   390,     5,
     390,   250,   250,   390,   390,   250,   390,   250,   390,   390,
       4,   545,   390,   250,   250,   390,   390,   390,   390,   390,
     390,   390,   390,     5,   338,   390,   546,   390,   390,   250,
     390,   390,   390,   390,   400,   407,     5,     4,     4,   390,
     390,   407,   390,   390,   390,   400,   549,   390,   390,     5,
       4,   390,   390,   390,   390,     5,     5,     4,     5,     5,
       4,     5,     5,     4,   417,     5,     5,     4,     5,     5,
       4,     5,     5,     4,     5,     5,     4,     5,     5,     4,
       4,     4,     5,     5,     4,     4,     5,     5,     4,     5,
       5,     4,   390,   390,   390,   390,   407,   390,   400,   402,
     390,   407,   390,   390,   390,   390,   390,     5,   390,   390,
     390,     4,   390,   390,     5,   390,     5,   390,     4,   400,
     390,   407,   196,   405,   390,   405,   408,   407,   400,   390,
     390,     4,   390,   400,   400,   390,   393,     5,     5,     5,
       5,     5,   400,   407,   400,   400,   400,   400,   402,   400,
     407,   400,   400,   400,   402,   400,   400,   400,   400,   402,
     400,   400,   400,   390,   400,   400,   400,   400,   400,   400,
     400,   390,   390,     4,   390,     5,   390,   412,     5,     5,
       5,   410,     4,     4,     5,   412,   411,     4,   412,     5,
       5,     5,   411,   411,   410,     4,     4,     5,   300,     5,
       5,     5,   411,   411,   410,     4,     4,   410,     5,     5,
       5,     5,   411,   411,   410,     4,     4,     5,    13,    14,
      63,   211,   212,   292,   303,   304,   338,    13,    14,    63,
     211,   212,   292,   303,   304,   338,    13,    14,    63,   211,
     212,   292,   303,   304,   338,   300,     5,     5,     5,   411,
     411,   410,     4,     4,   410,     5,   300,     5,     5,     5,
     411,   411,   410,     4,     4,   410,     5,   411,     4,     4,
     411,     4,     4,   412,     5,   407,   400,   390,   390,   400,
     390,     5,   395,     5,   400,   392,     5,   400,   407,     5,
     395,   390,   390,   390,   390,   390,   390,   390,   390,   390,
       4,     4,     5,     4,     4,   390,   400,   390,     5,   395,
     392,   407,   407,   390,   399,   407,   407,   390,   407,   407,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     555,   563,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   400,     5,   390,   390,   390,   390,
       4,     4,   407,   408,     5,     5,   399,   390,     4,   407,
     400,     4,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   395,   390,   390,   390,   407,   390,   399,   390,   390,
      11,     5,     5,   390,   390,   390,   390,     5,   390,     4,
     390,     4,   407,   400,   390,   390,   408,   409,   390,     5,
     390,   400,   402,     5,     5,     5,     5,     5,   407,   409,
     409,   409,   407,   409,   408,   409,   409,   407,   409,   409,
     409,   407,   409,   409,   407,   400,   409,   407,   409,   409,
     407,   409,   407,     4,   400,   402,     5,   390,     4,   412,
     411,     4,   411,   411,     4,     4,   411,     4,   411,     5,
       5,     5,   411,   411,   410,     4,     4,     5,     5,     5,
       5,   411,   411,   410,     4,     4,     5,     5,     5,     5,
     411,   411,   410,     4,     4,     5,   411,   412,   412,   412,
     412,   412,     4,   412,   412,     4,   411,   411,   412,   412,
     412,   412,   412,     4,   412,   412,     4,   411,   411,     4,
       4,     4,   401,   409,     4,   400,   409,   390,   400,     4,
     409,   409,   400,     4,   390,   390,   390,   390,   390,   390,
     390,   390,   390,   390,   390,   400,   409,   390,   400,     4,
     399,   399,   400,   399,   399,   400,   400,   399,   399,   390,
     390,   390,   390,   390,   390,   395,   390,   390,   390,    57,
      68,    97,   140,   316,   318,   374,   560,   561,   562,   574,
     575,   395,   390,   390,   390,   390,   395,   390,   390,   390,
     390,   390,   390,   407,   390,   338,   394,   395,   390,   390,
     408,   392,   400,   400,   408,   407,     4,   390,   399,   390,
      61,   390,     5,     5,     4,     4,   390,   390,     4,   390,
       4,   405,   409,     5,   407,     4,     5,     4,     5,   400,
       5,   408,   409,   408,   408,   408,     5,   407,     4,   390,
     412,   411,   411,     4,   411,   412,   412,   412,   412,   412,
       4,   412,   412,   411,   412,   412,   412,   412,   412,     4,
     412,   412,   411,   412,   412,   412,   412,   412,     4,   412,
     412,   411,   412,   411,     4,   412,   412,   411,     4,   412,
     411,   407,   400,   409,     4,   407,   390,   407,   390,   390,
     390,   409,     4,   407,   390,   399,   409,   390,   399,   409,
     409,   400,   390,     4,   414,   414,   390,   390,   414,   395,
     414,   563,   400,   387,   387,   387,   387,   387,   387,   387,
     561,   387,   395,   414,   414,   390,   390,   395,   390,   390,
     390,   390,   390,   399,   390,     5,   563,   390,   414,   392,
     564,   565,   407,   407,   392,   408,     4,     5,   390,     5,
       4,     4,     4,     4,     4,     4,   390,     4,    32,   205,
     312,   453,   400,     5,    32,   205,   312,   416,   400,     4,
     453,   390,   411,   411,   412,   411,   412,   411,   412,   412,
     411,   412,   411,   390,   409,   400,   400,   390,   400,   390,
     400,   400,   390,   400,   409,     4,   563,   563,   394,   390,
     563,     4,   563,   407,   542,     5,     4,     5,     5,     5,
       4,   392,     4,   563,   563,   394,   390,     4,   563,   563,
     390,   400,   563,   563,   563,   564,   571,   572,   562,   569,
     570,   392,     4,     5,     5,     4,     4,     4,   208,   336,
     381,   390,   444,   453,     4,   400,   453,     4,   412,   412,
     412,   412,   412,   401,   409,   409,   390,   409,     4,   409,
     409,   390,   409,   390,   563,   563,     4,   390,   563,     5,
       4,   390,   563,     4,   390,   563,   407,   571,   573,   574,
     387,   570,     5,     5,   390,   445,   390,   445,   407,   409,
       4,   400,   402,     4,   395,   394,   390,     5,   390,   394,
     390,   400,   574,   392,     5,     5,   390,   390,   390,   390,
     416,     5,   400,   402,   407,   400,   402,   563,   390,     4,
     563,   390,   409,     5,     5,   390,     5,   390,   407,   407,
       4,   563,     4,     5,     5,     5,   394,   394,   563,   563,
     563
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
#line 496 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 497 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 499 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 500 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 502 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 509 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 515 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 516 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 517 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 521 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 530 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 534 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 537 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 50:
#line 542 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 52:
#line 544 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 54:
#line 546 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 56:
#line 548 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 61:
#line 555 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 62:
#line 556 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 63:
#line 559 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 560 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 561 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 562 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 563 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 564 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 565 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 566 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 567 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 568 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 569 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 572 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 75:
#line 574 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 575 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 576 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 577 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 579 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 580 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 581 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 582 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 585 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 84:
#line 586 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 587 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 86:
#line 588 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 87:
#line 589 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 88:
#line 592 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 89:
#line 593 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 596 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 91:
#line 597 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 598 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 93:
#line 601 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 604 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 607 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 611 "frame/parser.Y"
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
#line 623 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 98:
#line 630 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 637 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 100:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 101:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 102:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 103:
#line 647 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 104:
#line 648 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 105:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 106:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 107:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 108:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 109:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 110:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 111:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 112:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 113:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 114:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 115:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 116:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 117:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 118:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 119:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 120:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 121:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 122:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 123:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 124:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 125:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 126:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 127:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 128:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 129:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 130:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 131:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 132:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 133:
#line 681 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 134:
#line 682 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 135:
#line 685 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 686 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 137:
#line 687 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 138:
#line 688 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 139:
#line 689 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 140:
#line 690 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 141:
#line 693 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 142:
#line 694 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 695 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 144:
#line 696 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 145:
#line 697 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 146:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 147:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 148:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 149:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 150:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 151:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 152:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 153:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 154:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 155:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 156:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 157:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 158:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 159:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 160:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 161:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 162:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 163:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 164:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 165:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 166:
#line 722 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 167:
#line 723 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 724 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 169:
#line 725 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 170:
#line 726 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 171:
#line 729 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 172:
#line 730 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 173:
#line 731 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 732 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 175:
#line 733 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 734 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 177:
#line 735 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 178:
#line 736 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 179:
#line 739 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 180:
#line 740 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 741 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 182:
#line 744 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 183:
#line 745 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 746 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 185:
#line 747 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 186:
#line 750 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 187:
#line 751 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 752 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 189:
#line 755 "frame/parser.Y"
    {;}
    break;

  case 190:
#line 756 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 757 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 760 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 193:
#line 761 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 762 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 195:
#line 765 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 196:
#line 766 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 197:
#line 767 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 198:
#line 768 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 199:
#line 769 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 200:
#line 770 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 201:
#line 771 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 202:
#line 772 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 203:
#line 775 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 204:
#line 776 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 205:
#line 779 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 206:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 207:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 208:
#line 782 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 209:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 210:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 211:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 212:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 213:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 214:
#line 790 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 215:
#line 793 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 216:
#line 794 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 217:
#line 795 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 218:
#line 796 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 219:
#line 797 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 220:
#line 798 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 225:
#line 805 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 226:
#line 806 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 228:
#line 808 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 229:
#line 809 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 230:
#line 811 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 231:
#line 814 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 232:
#line 815 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 233:
#line 816 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 235:
#line 820 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 236:
#line 821 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 237:
#line 824 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 238:
#line 825 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 239:
#line 828 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 240:
#line 829 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 241:
#line 832 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 242:
#line 833 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 243:
#line 836 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 244:
#line 838 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 246:
#line 842 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 247:
#line 843 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 250:
#line 846 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 252:
#line 848 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 253:
#line 851 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 254:
#line 852 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 255:
#line 855 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 856 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 257:
#line 858 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 258:
#line 860 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 259:
#line 861 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 862 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 261:
#line 864 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 262:
#line 866 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 263:
#line 869 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 264:
#line 870 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 265:
#line 873 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 266:
#line 875 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 267:
#line 878 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 268:
#line 880 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 269:
#line 883 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 270:
#line 887 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 271:
#line 888 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 273:
#line 892 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 274:
#line 893 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 275:
#line 894 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 279:
#line 900 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 280:
#line 901 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 282:
#line 904 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 283:
#line 909 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 284:
#line 910 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 285:
#line 913 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 286:
#line 914 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 287:
#line 915 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 288:
#line 916 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 289:
#line 917 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 290:
#line 920 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 291:
#line 921 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 292:
#line 922 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 293:
#line 923 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 294:
#line 926 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 295:
#line 928 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 296:
#line 933 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 297:
#line 938 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 298:
#line 945 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 299:
#line 947 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 300:
#line 949 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 301:
#line 951 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 302:
#line 953 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 306:
#line 960 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 307:
#line 962 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 308:
#line 964 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 309:
#line 966 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 310:
#line 968 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 311:
#line 970 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 312:
#line 971 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 318:
#line 982 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 319:
#line 985 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 320:
#line 988 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 321:
#line 994 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 322:
#line 999 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 323:
#line 1002 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 324:
#line 1003 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 325:
#line 1006 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 326:
#line 1007 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 327:
#line 1009 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 328:
#line 1015 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 329:
#line 1016 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 330:
#line 1017 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 331:
#line 1018 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 332:
#line 1021 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 333:
#line 1022 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 334:
#line 1025 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 335:
#line 1026 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 336:
#line 1029 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 337:
#line 1030 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 338:
#line 1034 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 339:
#line 1036 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 340:
#line 1039 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 341:
#line 1041 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 342:
#line 1044 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 344:
#line 1046 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 345:
#line 1047 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 346:
#line 1048 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 347:
#line 1051 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 348:
#line 1053 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 349:
#line 1054 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 350:
#line 1055 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 351:
#line 1056 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 352:
#line 1060 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 353:
#line 1062 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 354:
#line 1063 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 355:
#line 1064 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 356:
#line 1067 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 357:
#line 1069 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 358:
#line 1071 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 359:
#line 1073 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 360:
#line 1076 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 361:
#line 1079 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 362:
#line 1080 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 363:
#line 1081 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 364:
#line 1082 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 365:
#line 1085 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 366:
#line 1086 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 367:
#line 1089 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 368:
#line 1092 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 369:
#line 1093 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 383:
#line 1107 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 386:
#line 1110 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 387:
#line 1111 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 393:
#line 1117 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 394:
#line 1118 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 399:
#line 1123 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 400:
#line 1124 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 402:
#line 1127 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 404:
#line 1129 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 406:
#line 1131 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 408:
#line 1133 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 409:
#line 1135 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 412:
#line 1138 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 413:
#line 1142 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 414:
#line 1144 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 415:
#line 1148 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 416:
#line 1150 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 417:
#line 1153 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 418:
#line 1154 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 419:
#line 1155 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 420:
#line 1156 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 421:
#line 1157 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 422:
#line 1158 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 424:
#line 1160 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 425:
#line 1163 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 426:
#line 1164 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 427:
#line 1165 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 428:
#line 1168 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 429:
#line 1171 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 430:
#line 1173 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 431:
#line 1175 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 432:
#line 1176 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 433:
#line 1177 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 435:
#line 1179 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 437:
#line 1182 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 438:
#line 1188 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 439:
#line 1189 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 440:
#line 1192 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 441:
#line 1193 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 442:
#line 1194 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 443:
#line 1197 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 444:
#line 1198 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 446:
#line 1204 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 447:
#line 1206 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 448:
#line 1208 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 449:
#line 1211 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 451:
#line 1213 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 452:
#line 1217 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 453:
#line 1221 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 455:
#line 1223 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 456:
#line 1224 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 457:
#line 1225 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 458:
#line 1226 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 459:
#line 1227 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 461:
#line 1229 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 462:
#line 1230 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 463:
#line 1233 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 464:
#line 1234 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 465:
#line 1235 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 466:
#line 1238 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 467:
#line 1239 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 468:
#line 1243 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 469:
#line 1245 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 470:
#line 1253 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 471:
#line 1255 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 472:
#line 1257 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 473:
#line 1260 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1262 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 475:
#line 1263 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 476:
#line 1266 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 477:
#line 1269 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 478:
#line 1271 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 479:
#line 1275 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 480:
#line 1277 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 481:
#line 1280 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 482:
#line 1284 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 483:
#line 1285 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 484:
#line 1287 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 485:
#line 1290 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 486:
#line 1291 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 488:
#line 1295 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 489:
#line 1296 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 490:
#line 1297 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 491:
#line 1300 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 492:
#line 1302 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 493:
#line 1303 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 495:
#line 1305 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 499:
#line 1309 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 500:
#line 1310 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 501:
#line 1311 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 502:
#line 1313 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 504:
#line 1315 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 505:
#line 1318 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 506:
#line 1320 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 507:
#line 1322 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 508:
#line 1323 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 509:
#line 1324 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 510:
#line 1325 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 511:
#line 1328 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 512:
#line 1329 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 513:
#line 1333 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 514:
#line 1335 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 515:
#line 1338 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 516:
#line 1341 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 517:
#line 1342 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 518:
#line 1344 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 519:
#line 1346 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 520:
#line 1348 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 521:
#line 1351 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 522:
#line 1352 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 523:
#line 1353 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 524:
#line 1356 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 525:
#line 1357 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 526:
#line 1358 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 527:
#line 1359 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 528:
#line 1360 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 529:
#line 1361 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 530:
#line 1364 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 531:
#line 1365 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 532:
#line 1366 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 533:
#line 1367 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 534:
#line 1368 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 535:
#line 1369 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 536:
#line 1370 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 537:
#line 1373 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 538:
#line 1374 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 539:
#line 1377 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 540:
#line 1380 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 541:
#line 1381 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 542:
#line 1382 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 543:
#line 1385 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 544:
#line 1388 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 545:
#line 1389 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 546:
#line 1390 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 547:
#line 1393 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 548:
#line 1394 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 549:
#line 1395 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 550:
#line 1398 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 551:
#line 1399 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 552:
#line 1400 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 553:
#line 1401 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 554:
#line 1402 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 555:
#line 1403 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 560:
#line 1410 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 561:
#line 1411 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 563:
#line 1413 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 564:
#line 1416 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 565:
#line 1417 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 566:
#line 1418 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 568:
#line 1422 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 569:
#line 1423 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 570:
#line 1426 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 571:
#line 1427 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 572:
#line 1430 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 573:
#line 1431 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 574:
#line 1434 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 575:
#line 1435 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 576:
#line 1438 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 577:
#line 1439 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 578:
#line 1442 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 580:
#line 1444 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 581:
#line 1447 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 582:
#line 1448 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 584:
#line 1452 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 585:
#line 1456 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 586:
#line 1459 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 587:
#line 1466 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 588:
#line 1467 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 589:
#line 1470 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 590:
#line 1471 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 593:
#line 1474 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 594:
#line 1475 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 595:
#line 1476 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 596:
#line 1477 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 598:
#line 1479 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 599:
#line 1480 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 600:
#line 1481 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 602:
#line 1483 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 603:
#line 1484 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 604:
#line 1485 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 605:
#line 1486 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 607:
#line 1490 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 608:
#line 1493 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 609:
#line 1494 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 610:
#line 1497 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 611:
#line 1498 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 612:
#line 1499 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 613:
#line 1500 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 614:
#line 1503 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 615:
#line 1504 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 616:
#line 1505 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 617:
#line 1506 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 618:
#line 1509 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 619:
#line 1510 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 620:
#line 1511 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 621:
#line 1512 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 622:
#line 1513 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 623:
#line 1514 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 624:
#line 1517 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 625:
#line 1518 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 626:
#line 1519 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 629:
#line 1523 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 630:
#line 1524 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 631:
#line 1527 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 632:
#line 1530 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 633:
#line 1531 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 634:
#line 1535 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 635:
#line 1537 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 636:
#line 1538 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 643:
#line 1550 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1552 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1554 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1555 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 647:
#line 1557 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 648:
#line 1559 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1561 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1563 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1565 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1571 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 656:
#line 1572 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 657:
#line 1573 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 658:
#line 1574 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 659:
#line 1575 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 660:
#line 1577 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 661:
#line 1578 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1579 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1580 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 664:
#line 1583 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 665:
#line 1587 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1589 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 667:
#line 1591 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1593 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1595 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1597 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1599 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 672:
#line 1601 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 673:
#line 1604 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1606 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1608 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 685:
#line 1620 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1621 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1622 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1623 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1624 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 690:
#line 1625 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1627 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 692:
#line 1629 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 693:
#line 1630 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1631 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1632 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 696:
#line 1635 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1636 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1637 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1638 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1639 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1641 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 702:
#line 1642 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1643 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1644 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 710:
#line 1655 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1658 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1661 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 713:
#line 1664 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1667 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1670 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 716:
#line 1673 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1676 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1679 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 719:
#line 1684 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1687 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1690 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 722:
#line 1693 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 723:
#line 1696 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 724:
#line 1699 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1702 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 726:
#line 1705 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 727:
#line 1708 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 728:
#line 1711 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 729:
#line 1714 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 730:
#line 1719 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 731:
#line 1722 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 732:
#line 1725 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 733:
#line 1728 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 734:
#line 1731 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 735:
#line 1734 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 736:
#line 1737 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1740 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 738:
#line 1743 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 739:
#line 1748 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1750 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1752 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1754 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1756 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1758 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 745:
#line 1763 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1765 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1767 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 748:
#line 1771 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 749:
#line 1774 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 750:
#line 1777 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 751:
#line 1780 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1783 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1786 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1789 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 755:
#line 1792 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 756:
#line 1795 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1798 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1801 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 759:
#line 1805 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 760:
#line 1806 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 761:
#line 1807 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 762:
#line 1808 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 763:
#line 1809 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 764:
#line 1810 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 765:
#line 1812 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 766:
#line 1814 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 767:
#line 1815 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 768:
#line 1816 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 769:
#line 1817 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 770:
#line 1820 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 771:
#line 1821 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 772:
#line 1822 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 773:
#line 1823 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 774:
#line 1824 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 775:
#line 1826 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 776:
#line 1827 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 777:
#line 1828 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 778:
#line 1829 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 779:
#line 1833 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1835 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1836 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 782:
#line 1838 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1840 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1842 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1845 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 786:
#line 1846 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 787:
#line 1849 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 788:
#line 1850 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 789:
#line 1851 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 790:
#line 1854 "frame/parser.Y"
    {;}
    break;

  case 791:
#line 1857 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 792:
#line 1858 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 793:
#line 1859 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 794:
#line 1860 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 795:
#line 1861 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 796:
#line 1862 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 797:
#line 1863 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 798:
#line 1867 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 800:
#line 1875 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 801:
#line 1876 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 802:
#line 1878 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 803:
#line 1880 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 804:
#line 1881 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 805:
#line 1882 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 807:
#line 1883 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 810:
#line 1886 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 811:
#line 1887 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 812:
#line 1889 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 813:
#line 1891 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 814:
#line 1893 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 815:
#line 1896 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1898 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 817:
#line 1899 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 818:
#line 1901 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 819:
#line 1904 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 820:
#line 1907 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 821:
#line 1911 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 822:
#line 1914 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 823:
#line 1917 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 824:
#line 1920 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 825:
#line 1924 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 826:
#line 1928 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 827:
#line 1933 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 828:
#line 1937 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 829:
#line 1939 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 830:
#line 1940 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 831:
#line 1942 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 832:
#line 1944 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 833:
#line 1946 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 834:
#line 1948 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 835:
#line 1949 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 836:
#line 1951 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 837:
#line 1953 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 838:
#line 1955 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 839:
#line 1958 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 840:
#line 1962 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 841:
#line 1966 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 842:
#line 1968 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 843:
#line 1970 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 844:
#line 1972 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 845:
#line 1974 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 846:
#line 1976 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 847:
#line 1978 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 848:
#line 1980 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 849:
#line 1982 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 850:
#line 1984 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 851:
#line 1986 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 852:
#line 1988 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 853:
#line 1990 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 854:
#line 1992 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 855:
#line 1993 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 856:
#line 1995 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 857:
#line 1997 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 858:
#line 1998 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 859:
#line 1999 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 860:
#line 2001 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 861:
#line 2003 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 862:
#line 2004 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 863:
#line 2005 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 864:
#line 2006 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 865:
#line 2008 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 866:
#line 2010 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 867:
#line 2014 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 868:
#line 2017 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 869:
#line 2020 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 870:
#line 2024 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 871:
#line 2028 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 872:
#line 2033 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 873:
#line 2037 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 874:
#line 2038 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 875:
#line 2039 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 876:
#line 2041 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 877:
#line 2043 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 878:
#line 2047 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 879:
#line 2048 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 880:
#line 2049 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 881:
#line 2051 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 882:
#line 2054 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 883:
#line 2057 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 884:
#line 2060 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 885:
#line 2061 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 886:
#line 2065 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 887:
#line 2069 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 888:
#line 2071 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 889:
#line 2072 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 890:
#line 2074 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 891:
#line 2077 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 892:
#line 2080 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 893:
#line 2081 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 894:
#line 2083 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 895:
#line 2084 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 896:
#line 2085 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 897:
#line 2087 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 898:
#line 2088 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 899:
#line 2090 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 900:
#line 2093 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 901:
#line 2096 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 902:
#line 2098 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 903:
#line 2099 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 907:
#line 2104 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 908:
#line 2105 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 909:
#line 2107 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 910:
#line 2109 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 911:
#line 2111 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 912:
#line 2112 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 916:
#line 2118 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 917:
#line 2119 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 918:
#line 2120 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 919:
#line 2121 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 920:
#line 2122 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 921:
#line 2123 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 922:
#line 2124 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 923:
#line 2125 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 924:
#line 2126 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 925:
#line 2127 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 926:
#line 2129 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 927:
#line 2131 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 928:
#line 2132 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 929:
#line 2133 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 930:
#line 2134 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 931:
#line 2135 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 932:
#line 2137 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 933:
#line 2138 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 934:
#line 2139 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 935:
#line 2140 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 936:
#line 2141 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 937:
#line 2143 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 938:
#line 2144 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 939:
#line 2145 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 940:
#line 2146 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 941:
#line 2147 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 942:
#line 2148 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 943:
#line 2151 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 944:
#line 2152 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 945:
#line 2153 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 946:
#line 2154 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 947:
#line 2155 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 948:
#line 2156 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 949:
#line 2157 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 950:
#line 2158 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 951:
#line 2159 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 952:
#line 2160 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 953:
#line 2161 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 954:
#line 2162 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 955:
#line 2163 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 956:
#line 2164 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 957:
#line 2165 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 958:
#line 2166 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 959:
#line 2167 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 960:
#line 2168 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 961:
#line 2169 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 962:
#line 2170 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 963:
#line 2171 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 964:
#line 2174 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 965:
#line 2175 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 966:
#line 2176 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 967:
#line 2177 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 968:
#line 2178 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 969:
#line 2180 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 970:
#line 2190 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 971:
#line 2198 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 972:
#line 2207 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 973:
#line 2215 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 974:
#line 2222 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 975:
#line 2229 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 976:
#line 2237 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 977:
#line 2245 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 978:
#line 2250 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 979:
#line 2255 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 980:
#line 2260 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 981:
#line 2265 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 982:
#line 2270 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 983:
#line 2275 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 984:
#line 2280 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 985:
#line 2289 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 986:
#line 2299 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 987:
#line 2309 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 988:
#line 2318 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 989:
#line 2326 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 990:
#line 2336 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 991:
#line 2346 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 992:
#line 2356 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 993:
#line 2368 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 994:
#line 2377 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 996:
#line 2385 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 997:
#line 2387 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 998:
#line 2396 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 999:
#line 2398 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1000:
#line 2400 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1001:
#line 2405 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1002:
#line 2408 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1003:
#line 2409 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1004:
#line 2410 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1005:
#line 2417 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1006:
#line 2419 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1007:
#line 2420 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1008:
#line 2423 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1009:
#line 2424 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1010:
#line 2425 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1011:
#line 2426 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1012:
#line 2427 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1013:
#line 2428 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1014:
#line 2429 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1016:
#line 2433 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1017:
#line 2434 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1018:
#line 2435 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1019:
#line 2436 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1020:
#line 2437 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1021:
#line 2440 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1022:
#line 2442 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1023:
#line 2444 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1024:
#line 2446 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1025:
#line 2448 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1026:
#line 2450 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1027:
#line 2452 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1028:
#line 2453 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1029:
#line 2454 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1030:
#line 2456 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1031:
#line 2458 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1032:
#line 2461 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1033:
#line 2463 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1034:
#line 2464 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1035:
#line 2465 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1036:
#line 2467 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1037:
#line 2469 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1038:
#line 2472 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1039:
#line 2475 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1040:
#line 2476 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1041:
#line 2477 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1042:
#line 2478 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1043:
#line 2480 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1044:
#line 2481 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1045:
#line 2482 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1046:
#line 2483 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1047:
#line 2484 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1048:
#line 2485 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1049:
#line 2487 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1050:
#line 2489 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1051:
#line 2491 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1052:
#line 2493 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1053:
#line 2495 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1054:
#line 2496 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1055:
#line 2498 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1056:
#line 2500 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1057:
#line 2502 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1058:
#line 2503 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1059:
#line 2504 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1060:
#line 2506 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1061:
#line 2508 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1062:
#line 2511 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1063:
#line 2514 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1064:
#line 2515 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1065:
#line 2517 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1066:
#line 2520 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1067:
#line 2523 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1068:
#line 2524 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1069:
#line 2525 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1070:
#line 2526 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1071:
#line 2528 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1072:
#line 2530 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1073:
#line 2532 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1074:
#line 2533 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1075:
#line 2535 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1076:
#line 2536 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1077:
#line 2537 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1078:
#line 2538 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1079:
#line 2539 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1080:
#line 2541 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1081:
#line 2543 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1082:
#line 2545 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1083:
#line 2547 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1085:
#line 2549 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1086:
#line 2550 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1087:
#line 2552 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1088:
#line 2554 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1089:
#line 2555 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1090:
#line 2556 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1092:
#line 2558 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1094:
#line 2562 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1095:
#line 2563 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1096:
#line 2564 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1097:
#line 2565 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1098:
#line 2566 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1099:
#line 2567 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1100:
#line 2569 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1101:
#line 2570 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1102:
#line 2572 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1103:
#line 2575 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1104:
#line 2576 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1105:
#line 2577 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1106:
#line 2578 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1107:
#line 2581 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1108:
#line 2582 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1109:
#line 2585 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1110:
#line 2586 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1111:
#line 2589 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1112:
#line 2590 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1113:
#line 2593 "frame/parser.Y"
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

  case 1114:
#line 2606 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1115:
#line 2607 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1116:
#line 2611 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1117:
#line 2612 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1118:
#line 2616 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1119:
#line 2617 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1120:
#line 2622 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1121:
#line 2626 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1122:
#line 2631 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1123:
#line 2633 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1124:
#line 2636 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1125:
#line 2638 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1126:
#line 2641 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1127:
#line 2643 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1128:
#line 2646 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1129:
#line 2647 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1130:
#line 2648 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1131:
#line 2649 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1132:
#line 2650 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1133:
#line 2651 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1134:
#line 2653 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1137:
#line 2660 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1138:
#line 2661 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1139:
#line 2662 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1140:
#line 2663 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1141:
#line 2664 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1142:
#line 2665 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1145:
#line 2670 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1146:
#line 2671 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1147:
#line 2672 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1148:
#line 2673 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1149:
#line 2674 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1150:
#line 2675 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1151:
#line 2676 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1152:
#line 2677 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1153:
#line 2678 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1154:
#line 2679 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1155:
#line 2680 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1156:
#line 2681 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1159:
#line 2688 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1160:
#line 2689 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1162:
#line 2693 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1163:
#line 2695 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1164:
#line 2696 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1165:
#line 2699 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1166:
#line 2700 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1167:
#line 2701 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1168:
#line 2702 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1169:
#line 2703 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1170:
#line 2704 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1171:
#line 2707 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1172:
#line 2708 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1175:
#line 2716 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1176:
#line 2719 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1177:
#line 2720 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1181:
#line 2727 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1182:
#line 2730 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1183:
#line 2734 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1184:
#line 2735 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1185:
#line 2736 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1186:
#line 2737 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1187:
#line 2738 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1188:
#line 2739 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1189:
#line 2740 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1190:
#line 2741 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2742 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1192:
#line 2743 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1193:
#line 2744 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1194:
#line 2745 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1195:
#line 2747 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1196:
#line 2748 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1197:
#line 2749 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1198:
#line 2750 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1199:
#line 2751 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1200:
#line 2752 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1201:
#line 2753 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1202:
#line 2754 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1203:
#line 2755 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1204:
#line 2756 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1205:
#line 2757 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1206:
#line 2758 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1207:
#line 2759 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1208:
#line 2760 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1209:
#line 2763 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1210:
#line 2764 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1211:
#line 2765 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2766 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1213:
#line 2767 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2768 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1215:
#line 2769 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1216:
#line 2770 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1217:
#line 2776 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1218:
#line 2777 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1219:
#line 2778 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1220:
#line 2779 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1221:
#line 2783 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1222:
#line 2784 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1223:
#line 2786 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1224:
#line 2791 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1226:
#line 2793 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1228:
#line 2795 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1229:
#line 2798 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1230:
#line 2800 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1231:
#line 2805 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1232:
#line 2808 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1233:
#line 2809 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1234:
#line 2810 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1235:
#line 2813 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1236:
#line 2815 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1237:
#line 2819 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1238:
#line 2820 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1239:
#line 2824 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1240:
#line 2825 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1241:
#line 2826 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1242:
#line 2827 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1243:
#line 2833 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1244:
#line 2834 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1245:
#line 2840 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1246:
#line 2841 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1247:
#line 2842 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1248:
#line 2843 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1251:
#line 2851 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1252:
#line 2853 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1253:
#line 2854 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1254:
#line 2855 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1255:
#line 2859 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1256:
#line 2860 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1257:
#line 2861 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1258:
#line 2862 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1259:
#line 2865 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1260:
#line 2866 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1261:
#line 2867 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1262:
#line 2870 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1263:
#line 2871 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1264:
#line 2872 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1265:
#line 2875 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1266:
#line 2876 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1267:
#line 2877 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1268:
#line 2881 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1269:
#line 2884 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1270:
#line 2885 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1271:
#line 2886 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1272:
#line 2887 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1273:
#line 2888 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1274:
#line 2891 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1275:
#line 2892 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1276:
#line 2893 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1277:
#line 2894 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1278:
#line 2895 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1279:
#line 2896 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1280:
#line 2899 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1281:
#line 2900 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1283:
#line 2902 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1284:
#line 2903 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1285:
#line 2906 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1286:
#line 2907 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1287:
#line 2908 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1293:
#line 2916 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1294:
#line 2919 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1295:
#line 2920 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1296:
#line 2921 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1297:
#line 2925 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1298:
#line 2927 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1299:
#line 2929 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1316:
#line 2950 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1317:
#line 2951 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1318:
#line 2952 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1319:
#line 2955 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1320:
#line 2956 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1321:
#line 2957 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1322:
#line 2960 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1323:
#line 2961 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1324:
#line 2962 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1325:
#line 2965 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1326:
#line 2966 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1327:
#line 2967 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1329:
#line 2971 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1330:
#line 2972 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1331:
#line 2973 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1332:
#line 2976 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1333:
#line 2977 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1334:
#line 2978 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1335:
#line 2982 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1336:
#line 2984 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1337:
#line 2986 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1338:
#line 2989 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1339:
#line 2990 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1340:
#line 2991 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1341:
#line 2994 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1342:
#line 2995 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1343:
#line 2996 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1344:
#line 3000 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1345:
#line 3002 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1346:
#line 3004 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1347:
#line 3007 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1348:
#line 3008 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1349:
#line 3009 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1350:
#line 3012 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1351:
#line 3013 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1352:
#line 3014 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1353:
#line 3018 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1354:
#line 3020 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1355:
#line 3022 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1356:
#line 3025 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1357:
#line 3026 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1358:
#line 3027 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1359:
#line 3030 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1360:
#line 3031 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1361:
#line 3032 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1362:
#line 3035 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1363:
#line 3036 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1364:
#line 3037 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1365:
#line 3041 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1366:
#line 3043 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1367:
#line 3045 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1368:
#line 3049 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1369:
#line 3053 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1370:
#line 3055 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1371:
#line 3059 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1372:
#line 3062 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1373:
#line 3063 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1374:
#line 3064 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1375:
#line 3065 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1376:
#line 3068 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1377:
#line 3070 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1378:
#line 3072 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1379:
#line 3075 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1381:
#line 3079 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1382:
#line 3080 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1383:
#line 3081 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1384:
#line 3084 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1385:
#line 3085 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1386:
#line 3089 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1388:
#line 3091 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1391:
#line 3096 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1392:
#line 3097 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1393:
#line 3098 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1394:
#line 3101 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1395:
#line 3102 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1396:
#line 3103 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1397:
#line 3106 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1398:
#line 3108 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1399:
#line 3113 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1400:
#line 3114 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1401:
#line 3117 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1402:
#line 3124 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1403:
#line 3126 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1404:
#line 3128 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1405:
#line 3133 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1407:
#line 3137 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1408:
#line 3138 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1409:
#line 3139 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1410:
#line 3141 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1411:
#line 3143 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1412:
#line 3148 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11852 "frame/parser.C"
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


#line 3152 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

