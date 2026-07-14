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
#define YYLAST   5864

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  388
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  242
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1408
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3066

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
    4693,  4696,  4699,  4702,  4706,  4710,  4714,  4718,  4722,  4726,
    4728,  4731,  4734,  4737,  4741,  4744,  4748,  4752,  4756,  4760,
    4764,  4768,  4771,  4774,  4777,  4780,  4783,  4786,  4789,  4792,
    4795,  4798,  4801,  4804,  4807,  4810,  4814,  4818,  4822,  4825,
    4828,  4831,  4835,  4839,  4843,  4846,  4849,  4852,  4855,  4858,
    4861,  4865,  4869,  4873,  4876,  4879,  4882,  4885,  4888,  4891,
    4895,  4899,  4903,  4906,  4909,  4912,  4915,  4918,  4921,  4924,
    4927,  4930,  4934,  4938,  4942,  4947,  4954,  4957,  4959,  4961,
    4963,  4965,  4967,  4968,  4974,  4976,  4983,  4987,  4989,  4992,
    4995,  4998,  5002,  5006,  5009,  5012,  5015,  5018,  5021,  5024,
    5028,  5031,  5034,  5038,  5040,  5044,  5049,  5052,  5054,  5057,
    5063,  5070,  5077,  5080,  5082,  5085,  5088,  5094,  5101
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
     392,    -1,   162,    68,     5,    -1,   167,   593,    -1,   168,
     592,    -1,   171,   516,    -1,   177,    15,     4,    -1,   194,
     519,    -1,   198,   537,    -1,   199,   538,    -1,   200,   539,
      -1,   203,   555,   540,    -1,   204,   576,    -1,   183,   575,
      -1,   216,   591,    -1,   220,    68,     5,    -1,   238,   577,
      -1,   240,   578,    -1,   241,   581,    -1,   262,    92,    -1,
     255,   583,    -1,   253,   582,    -1,   270,    -1,   266,   555,
     585,    -1,   272,   590,    -1,   274,   594,    -1,   279,   596,
      -1,   295,    -1,   301,   618,    -1,   319,     4,    -1,   320,
     418,    -1,   332,    -1,   334,   620,    -1,   341,    -1,   344,
     622,    -1,   345,   623,    -1,   375,   627,    -1,   383,   628,
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
     422,    -1,   162,   423,    -1,   207,   588,    -1,    37,   589,
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
      -1,   203,   555,   549,    -1,   204,   490,    -1,   183,   489,
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
      -1,    77,   548,     5,    -1,    77,   548,   338,     5,    -1,
      79,   104,    -1,    -1,    87,   541,   544,    -1,    93,    -1,
     104,   546,    -1,   112,   547,    -1,   121,     4,    -1,   140,
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
      86,   112,   395,   395,     4,   390,   390,     4,    -1,     4,
      86,   112,   395,   395,     4,   390,   390,     4,   402,    -1,
       4,    86,   112,   395,   395,     4,   390,   390,     4,   400,
     407,    -1,     4,    86,   112,     5,     5,   400,   407,   400,
     409,    -1,     4,    87,    22,   264,   390,   390,    -1,     4,
      87,    51,   264,   390,   390,    -1,     4,    87,    54,    21,
     390,   390,    -1,     4,    87,    54,   264,   390,   390,    -1,
       4,    87,   117,   264,   390,   390,    -1,     4,    87,   120,
      21,   390,   390,    -1,     4,    87,   120,   264,   390,   390,
      -1,     4,    87,    86,    21,   390,   390,    -1,     4,    87,
      86,   264,   390,   390,    -1,     4,    87,   252,   342,     4,
     390,   390,    -1,     4,    87,   286,   342,     4,   390,   390,
      -1,     4,   104,    -1,     4,   104,    22,     4,    -1,     4,
     104,    51,     4,    -1,     4,   104,    54,     4,    -1,     4,
     104,   117,     4,    -1,     4,   104,    57,   542,     5,    -1,
       4,   104,   120,     4,    -1,     4,   104,    86,     4,    -1,
       4,   104,   252,   342,     4,    -1,     4,   104,   286,   342,
       4,    -1,     4,   104,   316,    -1,     4,   104,   316,     5,
      -1,     4,   104,   316,     4,    -1,     4,   112,    40,     4,
      -1,     4,   116,   264,   390,   390,   400,   409,    -1,     4,
     117,   264,   390,   390,   390,     4,   400,   409,    -1,     4,
     117,   264,     5,   400,   409,    -1,     4,   120,   112,   395,
     395,     4,   390,   390,   390,     4,    -1,     4,   120,   112,
     395,   395,     4,   390,   390,   390,     4,   402,    -1,     4,
     120,   112,   395,   395,     4,   390,   390,   390,     4,   400,
     407,    -1,     4,   120,   112,     5,     5,   400,   407,   400,
     409,    -1,     4,   140,     5,    -1,     4,   162,    -1,     4,
     162,   236,    -1,     4,   191,    27,   392,   392,    -1,     4,
     191,   250,   400,   407,   399,   399,    -1,     4,   218,   390,
     390,    -1,     4,   218,   144,    -1,     4,   218,    36,    -1,
       4,   218,   325,   400,   407,   399,    -1,     4,   252,   270,
     390,   390,   400,   409,    -1,     4,   286,   270,   390,   390,
     400,   409,    -1,     4,   250,   290,   413,    -1,     4,   250,
     298,     4,    -1,     4,   258,   400,   407,   399,   399,   390,
     400,   409,    -1,     4,   259,   561,   392,    -1,     4,   274,
      40,    -1,     4,   275,   141,     5,    -1,     4,   275,   250,
     400,   407,   399,   399,    -1,     4,   275,   314,   400,   407,
     400,   409,    -1,     4,   287,    -1,     4,   287,   236,    -1,
       4,   316,     5,    -1,     4,   318,     5,    -1,     4,   318,
     274,   392,    -1,     4,   331,    -1,     4,   333,    -1,     4,
     340,    27,   392,    -1,     4,   340,   250,   400,   407,   399,
     400,   409,   390,   395,    -1,     4,   374,     4,    -1,   180,
      -1,   180,   390,   390,    -1,   193,   556,    -1,   194,   557,
      -1,   218,   558,    -1,   257,   392,    -1,   259,   561,   392,
      -1,   259,   561,   392,   390,   390,    -1,   274,    40,   390,
     390,    -1,   274,   215,   390,   390,     4,    -1,   274,   118,
      -1,   279,   565,    -1,   287,   566,    -1,   295,   567,    -1,
       5,    68,     5,    -1,     5,    84,    -1,     5,   104,    -1,
       5,    93,    -1,     5,   140,     5,    -1,     5,   162,    -1,
       5,   162,   236,    -1,     5,   218,   390,   390,    -1,     5,
     218,   144,    -1,     5,   218,    36,    -1,     5,   218,   325,
     400,   407,   399,    -1,     5,   259,   561,   392,    -1,     5,
     287,    -1,     5,   287,   236,    -1,     5,   331,    -1,     5,
     333,    -1,   316,   112,     5,     5,    -1,   316,   104,     5,
      -1,   316,   104,    16,    -1,   316,     5,    -1,   316,   334,
       5,    -1,   243,    -1,   243,   400,    -1,   330,    -1,   331,
      16,    -1,   333,    16,    -1,   374,     4,    -1,   287,    -1,
     333,    -1,   162,    -1,   331,    -1,    40,   218,    -1,   218,
      -1,   118,   218,    -1,    40,   112,    -1,   112,    -1,   118,
     112,    -1,    40,   274,    -1,   274,    -1,   118,   274,    -1,
     104,    -1,   318,    -1,    68,    -1,   374,    -1,   259,    -1,
     140,    -1,   180,    -1,   334,    -1,    -1,     4,    -1,    30,
     392,    -1,   264,   390,    -1,   176,     4,    -1,   237,     4,
     390,    -1,    64,   390,   390,   390,   562,    -1,   116,   390,
     390,   390,   390,   394,   562,    -1,    50,   390,   390,   390,
     390,   394,   562,    -1,   252,   390,   390,   390,   390,   562,
      -1,   286,   390,   390,   390,   390,   562,    -1,   191,   390,
     390,   390,   390,   562,    -1,   340,   390,   390,   390,   390,
     562,    -1,   318,   390,   390,   394,   562,    -1,    64,   250,
     390,   390,   414,   562,    -1,    50,   250,   390,   390,   414,
     562,    -1,   107,   250,   390,   390,   414,   562,    -1,    89,
     250,   390,   390,   414,   562,    -1,   386,   250,   390,   390,
     414,   562,    -1,    27,   250,   390,   390,   414,   562,    -1,
      53,   250,   390,   390,   414,   562,    -1,   275,   390,   390,
     390,   390,   400,   407,   400,   409,     5,   562,    -1,    78,
     390,   390,   390,   400,   407,   562,    -1,   258,   390,   390,
     390,   390,   390,   562,    -1,    22,   390,   390,   390,   390,
       4,   562,    -1,   117,   390,   390,   390,   390,   390,     4,
     394,   562,    -1,    51,   390,   390,   390,   390,   390,     4,
     394,   562,    -1,    86,   390,   390,   395,   395,     4,   390,
     390,     4,   562,    -1,   120,   390,   390,   395,   395,     4,
     390,   390,   390,     4,   394,   562,    -1,    54,   390,   390,
     395,   395,     4,   390,   390,   390,     4,   394,   562,    -1,
      79,   562,    -1,   317,   545,    -1,     5,   390,   390,    -1,
     338,     5,   390,   390,    -1,   390,   390,   338,     5,    -1,
       5,   400,   407,   399,    -1,    -1,   287,    -1,    16,    -1,
      40,   390,   390,     4,    -1,   215,   390,   390,     4,    -1,
     118,    -1,   111,    -1,   376,    -1,    65,    -1,   278,    -1,
     277,    -1,   261,    -1,   377,    -1,    62,   550,    -1,    68,
      -1,   140,    -1,   121,    -1,   155,   390,   390,    -1,   170,
     390,   390,    -1,     4,    20,    86,     5,     5,     5,   400,
       4,    -1,     4,    20,   164,     5,     5,     4,    -1,     4,
      20,   248,     5,     5,     5,     5,   400,   407,   416,    -1,
       4,    20,   249,     5,     5,   400,   416,    -1,     4,    20,
     263,     5,     5,     5,   400,    -1,     4,    20,   309,   400,
     407,    -1,   170,    16,    -1,     4,    21,    -1,     4,    21,
     402,    -1,     4,    21,   400,   407,    -1,     4,    22,   264,
     400,   409,    -1,     4,    51,   264,   400,   409,    -1,     4,
      50,   264,   400,   409,    -1,     4,    54,    21,    -1,     4,
      54,    21,   402,    -1,     4,    54,    21,   400,   407,    -1,
       4,    54,   264,   400,   409,    -1,     4,    61,   400,   407,
     408,    -1,     4,    64,   264,   400,   409,    -1,     4,    68,
      -1,     4,    78,    27,    -1,     4,    78,   182,    -1,     4,
      78,   264,   400,   409,    -1,     4,    78,   314,    -1,     4,
      79,   150,    -1,     4,    86,    21,    -1,     4,    86,    21,
     402,    -1,     4,    86,    21,   400,   407,    -1,     4,    86,
     264,   400,   409,    -1,     4,   116,   264,   400,   409,    -1,
       4,   117,   264,   400,   409,    -1,     4,   120,    21,    -1,
       4,   120,    21,   402,    -1,     4,   120,    21,   400,   407,
      -1,     4,   120,   264,   400,   409,    -1,     4,   140,    -1,
       4,   162,    -1,     4,   191,    27,    -1,     4,   191,   186,
     400,   409,    -1,     4,   191,   250,   400,   407,   408,    -1,
       4,   201,   186,   390,   400,   409,    -1,     4,   250,   290,
      -1,     4,   250,   298,    -1,     4,   258,   250,   400,   407,
     408,    -1,     4,   258,   186,   400,   409,    -1,     4,   258,
     322,   400,   409,    -1,     4,   259,    -1,     4,   259,   561,
      -1,     4,   275,   141,    -1,     4,   275,   186,   400,   409,
      -1,     4,   275,   250,   400,   407,   408,    -1,     4,   275,
     314,    -1,     4,   287,    -1,     4,   316,    -1,     4,   316,
       4,    -1,     4,   318,    -1,     4,   318,   274,    -1,     4,
     329,    -1,     4,   340,    27,    -1,     4,   340,   186,   400,
     409,    -1,     4,   340,   250,   400,   407,   408,    -1,     4,
     374,    -1,   162,   551,    -1,   162,   232,    -1,   232,    -1,
     252,   286,   390,   390,    -1,   286,   286,   390,   390,    -1,
     257,    -1,   259,   561,    -1,   287,   552,    -1,   287,   232,
      -1,   295,   553,    -1,     5,    68,    -1,     5,   140,    -1,
       5,   170,    -1,     5,   259,   561,    -1,     5,   316,    -1,
       5,   316,   232,    -1,   316,    16,    -1,   316,   103,   219,
      -1,   374,    -1,    30,    -1,   264,    -1,   176,    -1,   237,
      -1,    -1,   390,   390,    -1,    -1,   390,   390,    -1,    -1,
     318,    -1,    -1,    -1,   251,    -1,   266,    -1,   336,    -1,
      59,    -1,   142,    -1,   548,   400,   407,   408,   392,   563,
     570,    -1,   287,   548,   400,   407,   408,   392,   563,   570,
      -1,   548,     5,    -1,   548,     5,     4,     5,   400,   407,
      -1,   548,     4,    -1,   548,     4,     4,     5,   400,   407,
      -1,   135,     5,    -1,   135,     5,     5,    -1,   390,   390,
      -1,   144,    -1,    36,    -1,    40,   390,   390,    -1,   215,
     390,   390,    -1,   118,    -1,   325,   400,   407,   399,    -1,
     559,   560,    -1,   560,    -1,   561,   387,   392,    -1,    68,
     387,     5,    -1,    97,   387,     4,     4,    -1,   374,   387,
       4,    -1,   140,   387,     5,    -1,   318,   387,     5,    -1,
     573,    -1,   574,    -1,   226,    -1,   287,    -1,   162,    -1,
      96,    -1,   137,    -1,   112,    -1,   218,    -1,   274,    -1,
     104,    -1,   173,    -1,   305,    -1,   130,    -1,   554,    -1,
     554,   559,    -1,    -1,    -1,   564,   568,    -1,     5,   548,
     400,   407,   408,   392,    -1,   287,     5,   548,   400,   407,
     408,   392,    -1,   317,     5,    -1,    16,    -1,   236,   390,
     390,    -1,   326,    -1,   326,   390,   390,    -1,   132,    -1,
     185,    -1,   392,    -1,   318,   392,    -1,   568,   569,    -1,
     569,    -1,   561,   387,   392,    -1,    -1,    -1,   571,   572,
      -1,   572,   573,    -1,   573,    -1,   316,   387,     5,    -1,
      57,   387,   542,     5,     5,    -1,    -1,    87,    -1,     4,
      -1,   184,     4,    -1,    68,     5,    -1,     4,    68,     5,
      -1,    46,   404,    -1,     4,    46,   404,    -1,   324,   390,
      -1,     4,   324,   390,    -1,   339,   392,    -1,     4,   339,
     392,    -1,   295,    -1,     4,   295,    -1,   161,    -1,     4,
     161,    -1,   104,    -1,     4,   104,    -1,   335,    -1,     4,
     335,    -1,   110,    -1,     4,   110,    -1,   323,    -1,     4,
     323,    -1,    49,    -1,     4,    49,    -1,    66,    -1,    68,
       5,    -1,   202,   403,    -1,   265,   390,   390,    -1,   314,
     400,    -1,   324,   390,    -1,    46,   404,    -1,   202,     4,
      -1,   386,    -1,   384,    -1,   377,    -1,   226,    -1,   390,
     390,   390,   390,    -1,   390,   390,    -1,   402,   390,   390,
      -1,   400,   407,   399,    -1,   325,   579,    -1,    39,   390,
     390,    -1,   215,   580,    -1,   257,   392,    -1,   390,   390,
      -1,   402,   390,   390,    -1,   400,   407,   399,    -1,    40,
     390,   390,    -1,   390,   390,    -1,   118,   390,   390,    -1,
     392,    -1,   345,   401,   407,    -1,     5,     4,     4,    -1,
     334,    -1,    74,   584,    -1,   187,     4,    -1,   271,     4,
      -1,   281,   390,    -1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,    -1,     4,     4,     4,     4,     4,     4,
      -1,    56,    -1,   152,    -1,   272,    -1,    94,    -1,   162,
     586,    -1,   287,   587,    -1,    40,   390,   390,    -1,   215,
     390,   390,    -1,   118,    -1,   293,   118,    -1,    40,   390,
     390,    -1,   215,   390,   390,    -1,   118,    -1,   293,   118,
      -1,   210,    -1,    12,    -1,   133,    -1,   226,    -1,    34,
      -1,   114,    -1,    63,     5,    -1,   314,   400,    -1,   339,
       4,     4,     4,    -1,   314,   400,    -1,    63,     5,    -1,
      63,   166,    -1,    63,   280,    -1,   314,   400,    -1,   339,
       4,     4,     4,    -1,    63,     5,    -1,    63,   166,    -1,
      63,   280,    -1,    63,   337,    -1,   314,   400,    -1,   339,
       4,     4,     4,    -1,   390,    -1,   390,   102,    -1,   215,
     595,    -1,   325,   390,    -1,   325,   390,   102,    -1,    40,
      -1,   390,    -1,   118,    -1,    26,   598,    -1,   135,   599,
      -1,   382,   597,    -1,   231,   616,    -1,   119,   617,    -1,
     245,     5,    -1,   129,     5,    -1,    63,     5,    -1,   303,
       4,    -1,   129,     5,   417,    -1,    63,     5,   417,    -1,
     303,     4,   417,    -1,   272,    91,   606,    -1,   168,    91,
     609,    -1,   167,    91,   612,    -1,   600,    -1,   172,   600,
      -1,   315,   601,    -1,   299,   602,    -1,   125,    91,   603,
      -1,   213,   604,    -1,   272,   172,   607,    -1,   272,    91,
     608,    -1,   168,   172,   610,    -1,   168,    91,   611,    -1,
     167,   172,   613,    -1,   167,    91,   614,    -1,   268,   615,
      -1,   129,     5,    -1,    63,     5,    -1,   303,     4,    -1,
     129,     5,    -1,    63,     5,    -1,   303,     4,    -1,   129,
       5,    -1,    63,     5,    -1,   303,     4,    -1,   129,     5,
      -1,    63,     5,    -1,   303,     4,    -1,   172,   605,    -1,
     129,     5,     4,    -1,    63,     5,     4,    -1,   303,     4,
       4,    -1,   129,     5,    -1,    63,     5,    -1,   303,     4,
      -1,   129,     5,   417,    -1,    63,     5,   417,    -1,   303,
       4,   417,    -1,   129,     5,    -1,    63,     5,    -1,   303,
       4,    -1,   129,     5,    -1,    63,     5,    -1,   303,     4,
      -1,   129,     5,   417,    -1,    63,     5,   417,    -1,   303,
       4,   417,    -1,   129,     5,    -1,    63,     5,    -1,   303,
       4,    -1,   129,     5,    -1,    63,     5,    -1,   303,     4,
      -1,   129,     5,   417,    -1,    63,     5,   417,    -1,   303,
       4,   417,    -1,   129,     5,    -1,    63,     5,    -1,   303,
       4,    -1,   129,     5,    -1,    63,     5,    -1,   303,     4,
      -1,   129,     5,    -1,    63,     5,    -1,   303,     4,    -1,
     129,     5,   417,    -1,    63,     5,   417,    -1,   303,     4,
     417,    -1,   129,     5,     5,   417,    -1,   619,     4,     4,
     390,   390,   395,    -1,   619,     4,    -1,   104,    -1,    52,
      -1,   327,    -1,   148,    -1,   115,    -1,    -1,     4,   390,
     390,   390,   390,    -1,   230,    -1,   230,     4,   390,   390,
     390,   390,    -1,   135,   299,   621,    -1,     4,    -1,     4,
       4,    -1,   390,   400,    -1,   390,   390,    -1,   325,   390,
     390,    -1,   401,   407,   408,    -1,    15,   626,    -1,   270,
       4,    -1,   267,   625,    -1,    23,   624,    -1,     4,     4,
      -1,     4,     5,    -1,   318,     4,     5,    -1,     4,     4,
      -1,     4,     5,    -1,   318,     4,     5,    -1,     4,    -1,
       4,   401,   407,    -1,   325,     4,   401,   407,    -1,   251,
      66,    -1,   256,    -1,   390,   390,    -1,   390,   390,    11,
     390,   390,    -1,   390,   390,    11,   402,   390,   390,    -1,
     390,   390,    11,   400,   407,   399,    -1,   325,   629,    -1,
     134,    -1,   134,   390,    -1,   390,   390,    -1,   390,   390,
      11,   390,   390,    -1,   390,   390,    11,   402,   390,   390,
      -1,   390,   390,    11,   400,   407,   399,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   493,   493,   494,   495,   496,   497,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   518,   519,   520,
     521,   522,   523,   524,   525,   526,   527,   528,   529,   530,
     531,   532,   533,   534,   535,   536,   537,   538,   539,   540,
     541,   542,   543,   544,   545,   546,   547,   548,   549,   550,
     551,   554,   555,   558,   559,   560,   561,   562,   563,   564,
     565,   566,   567,   568,   571,   573,   574,   575,   576,   578,
     579,   580,   581,   584,   585,   586,   587,   588,   591,   592,
     595,   596,   597,   600,   603,   606,   609,   621,   628,   635,
     643,   644,   645,   646,   647,   650,   651,   652,   653,   654,
     655,   656,   657,   658,   659,   660,   661,   662,   663,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   680,   681,   684,   685,   686,   687,   688,
     689,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   711,   712,
     713,   714,   715,   716,   717,   718,   721,   722,   723,   724,
     725,   728,   729,   730,   731,   732,   733,   734,   735,   738,
     739,   740,   743,   744,   745,   746,   749,   750,   751,   754,
     755,   756,   759,   760,   761,   764,   765,   766,   767,   768,
     769,   770,   771,   774,   775,   778,   779,   780,   781,   782,
     783,   786,   787,   788,   789,   792,   793,   794,   795,   796,
     797,   800,   801,   802,   803,   804,   805,   806,   807,   808,
     809,   813,   814,   815,   816,   819,   820,   823,   824,   827,
     828,   831,   832,   835,   836,   840,   841,   842,   843,   844,
     845,   846,   847,   850,   851,   854,   855,   856,   858,   860,
     861,   862,   864,   868,   869,   872,   873,   875,   878,   880,
     886,   887,   888,   891,   892,   893,   896,   897,   898,   899,
     900,   901,   902,   908,   909,   912,   913,   914,   915,   916,
     919,   920,   921,   922,   925,   926,   931,   936,   943,   945,
     947,   949,   951,   953,   954,   955,   958,   960,   962,   964,
     966,   969,   970,   973,   974,   975,   976,   977,   980,   983,
     986,   992,   998,  1001,  1002,  1005,  1006,  1007,  1014,  1015,
    1016,  1017,  1020,  1021,  1024,  1025,  1028,  1029,  1032,  1034,
    1038,  1039,  1042,  1044,  1045,  1046,  1047,  1050,  1051,  1053,
    1054,  1055,  1058,  1060,  1062,  1063,  1065,  1067,  1069,  1071,
    1075,  1078,  1079,  1080,  1081,  1084,  1085,  1088,  1091,  1092,
    1093,  1094,  1095,  1096,  1097,  1098,  1099,  1100,  1101,  1102,
    1103,  1104,  1105,  1106,  1107,  1108,  1109,  1110,  1111,  1112,
    1113,  1114,  1115,  1116,  1117,  1118,  1119,  1120,  1121,  1122,
    1123,  1124,  1125,  1127,  1128,  1129,  1130,  1131,  1132,  1133,
    1135,  1136,  1137,  1140,  1142,  1146,  1148,  1152,  1153,  1154,
    1155,  1156,  1157,  1158,  1159,  1162,  1163,  1164,  1167,  1170,
    1171,  1173,  1175,  1176,  1177,  1178,  1179,  1180,  1187,  1188,
    1191,  1192,  1193,  1196,  1197,  1200,  1203,  1204,  1206,  1210,
    1211,  1212,  1215,  1219,  1221,  1222,  1223,  1224,  1225,  1226,
    1227,  1228,  1229,  1232,  1233,  1234,  1237,  1238,  1241,  1243,
    1251,  1253,  1255,  1259,  1260,  1262,  1265,  1268,  1269,  1273,
    1275,  1278,  1283,  1284,  1285,  1289,  1290,  1291,  1294,  1295,
    1296,  1299,  1300,  1302,  1303,  1304,  1305,  1306,  1307,  1308,
    1309,  1310,  1311,  1313,  1314,  1317,  1318,  1321,  1322,  1323,
    1324,  1327,  1328,  1331,  1333,  1336,  1340,  1341,  1342,  1344,
    1346,  1350,  1351,  1352,  1355,  1356,  1357,  1358,  1359,  1360,
    1363,  1364,  1365,  1366,  1367,  1368,  1369,  1372,  1373,  1376,
    1379,  1380,  1381,  1384,  1387,  1388,  1389,  1392,  1393,  1394,
    1397,  1398,  1399,  1400,  1401,  1402,  1405,  1406,  1407,  1408,
    1409,  1410,  1411,  1412,  1415,  1416,  1417,  1418,  1421,  1422,
    1425,  1426,  1429,  1430,  1433,  1434,  1437,  1438,  1441,  1442,
    1443,  1446,  1447,  1450,  1451,  1454,  1457,  1465,  1466,  1469,
    1470,  1471,  1472,  1473,  1474,  1475,  1476,  1477,  1478,  1479,
    1480,  1481,  1482,  1483,  1484,  1485,  1486,  1489,  1492,  1493,
    1496,  1497,  1498,  1499,  1502,  1503,  1504,  1505,  1508,  1509,
    1510,  1511,  1512,  1513,  1516,  1517,  1518,  1519,  1520,  1521,
    1523,  1524,  1529,  1530,  1533,  1535,  1537,  1540,  1541,  1542,
    1543,  1544,  1545,  1548,  1550,  1552,  1554,  1555,  1557,  1559,
    1561,  1563,  1565,  1566,  1567,  1570,  1571,  1572,  1573,  1574,
    1575,  1577,  1578,  1579,  1582,  1585,  1587,  1589,  1591,  1593,
    1595,  1597,  1599,  1602,  1604,  1606,  1608,  1609,  1610,  1611,
    1612,  1613,  1614,  1615,  1616,  1619,  1620,  1621,  1622,  1623,
    1624,  1625,  1627,  1629,  1630,  1631,  1634,  1635,  1636,  1637,
    1638,  1639,  1641,  1642,  1643,  1646,  1647,  1648,  1649,  1650,
    1653,  1656,  1659,  1662,  1665,  1668,  1671,  1674,  1677,  1682,
    1685,  1688,  1691,  1694,  1697,  1700,  1703,  1706,  1709,  1712,
    1717,  1720,  1723,  1726,  1729,  1732,  1735,  1738,  1741,  1746,
    1748,  1750,  1752,  1754,  1756,  1761,  1763,  1765,  1769,  1772,
    1775,  1778,  1781,  1784,  1787,  1790,  1793,  1796,  1799,  1804,
    1805,  1806,  1807,  1808,  1809,  1810,  1812,  1814,  1815,  1816,
    1819,  1820,  1821,  1822,  1823,  1824,  1826,  1827,  1828,  1831,
    1833,  1835,  1836,  1838,  1840,  1844,  1845,  1848,  1849,  1850,
    1853,  1856,  1857,  1858,  1859,  1860,  1861,  1862,  1865,  1873,
    1874,  1875,  1876,  1878,  1880,  1881,  1881,  1882,  1883,  1884,
    1885,  1886,  1888,  1889,  1891,  1894,  1897,  1898,  1899,  1902,
    1905,  1908,  1912,  1915,  1918,  1921,  1925,  1930,  1935,  1937,
    1939,  1940,  1942,  1944,  1946,  1948,  1949,  1951,  1953,  1957,
    1962,  1964,  1966,  1968,  1970,  1972,  1974,  1976,  1978,  1980,
    1982,  1985,  1986,  1988,  1990,  1991,  1993,  1995,  1996,  1997,
    1999,  2001,  2002,  2003,  2005,  2006,  2009,  2013,  2016,  2019,
    2023,  2028,  2034,  2035,  2036,  2038,  2039,  2043,  2045,  2046,
    2047,  2050,  2053,  2056,  2058,  2060,  2065,  2068,  2069,  2070,
    2073,  2077,  2078,  2080,  2081,  2082,  2084,  2085,  2087,  2088,
    2093,  2095,  2096,  2098,  2099,  2100,  2101,  2102,  2103,  2105,
    2107,  2109,  2110,  2111,  2113,  2115,  2116,  2117,  2118,  2119,
    2120,  2121,  2122,  2123,  2124,  2125,  2127,  2129,  2130,  2131,
    2132,  2134,  2135,  2136,  2137,  2138,  2140,  2141,  2142,  2143,
    2144,  2145,  2148,  2149,  2150,  2151,  2152,  2153,  2154,  2155,
    2156,  2157,  2158,  2159,  2160,  2161,  2162,  2163,  2164,  2165,
    2166,  2167,  2168,  2171,  2172,  2173,  2174,  2175,  2176,  2184,
    2191,  2200,  2209,  2216,  2223,  2231,  2239,  2246,  2251,  2256,
    2261,  2266,  2271,  2276,  2282,  2292,  2302,  2312,  2319,  2329,
    2339,  2348,  2360,  2373,  2378,  2381,  2383,  2385,  2390,  2394,
    2395,  2396,  2402,  2404,  2406,  2409,  2410,  2411,  2412,  2413,
    2414,  2415,  2418,  2419,  2420,  2421,  2422,  2423,  2425,  2427,
    2429,  2431,  2433,  2435,  2438,  2439,  2440,  2441,  2443,  2446,
    2448,  2450,  2451,  2452,  2454,  2457,  2460,  2462,  2463,  2464,
    2465,  2467,  2468,  2469,  2470,  2471,  2473,  2475,  2477,  2480,
    2481,  2482,  2484,  2487,  2488,  2489,  2490,  2492,  2495,  2499,
    2500,  2501,  2504,  2507,  2509,  2510,  2511,  2512,  2514,  2517,
    2518,  2520,  2521,  2522,  2523,  2524,  2526,  2527,  2529,  2532,
    2533,  2534,  2535,  2536,  2538,  2540,  2541,  2542,  2543,  2545,
    2547,  2548,  2549,  2550,  2551,  2552,  2554,  2555,  2557,  2560,
    2561,  2562,  2563,  2566,  2567,  2570,  2571,  2574,  2575,  2578,
    2591,  2592,  2596,  2597,  2601,  2602,  2605,  2609,  2615,  2617,
    2620,  2622,  2625,  2627,  2631,  2632,  2633,  2634,  2635,  2636,
    2637,  2641,  2642,  2645,  2646,  2647,  2648,  2649,  2650,  2651,
    2652,  2655,  2656,  2657,  2658,  2659,  2660,  2661,  2662,  2663,
    2664,  2665,  2666,  2669,  2670,  2673,  2674,  2674,  2677,  2679,
    2681,  2684,  2685,  2686,  2687,  2688,  2689,  2692,  2693,  2696,
    2697,  2700,  2704,  2705,  2705,  2708,  2709,  2712,  2715,  2719,
    2720,  2721,  2722,  2723,  2724,  2725,  2726,  2727,  2728,  2729,
    2730,  2732,  2733,  2734,  2735,  2736,  2737,  2738,  2739,  2740,
    2741,  2742,  2743,  2744,  2745,  2748,  2749,  2750,  2751,  2752,
    2753,  2754,  2755,  2761,  2762,  2763,  2764,  2767,  2769,  2770,
    2775,  2777,  2778,  2779,  2780,  2783,  2784,  2789,  2793,  2794,
    2795,  2798,  2799,  2804,  2805,  2808,  2810,  2811,  2812,  2817,
    2819,  2825,  2826,  2827,  2828,  2831,  2832,  2835,  2837,  2839,
    2840,  2843,  2845,  2846,  2847,  2850,  2851,  2852,  2855,  2856,
    2857,  2860,  2861,  2862,  2865,  2869,  2870,  2871,  2872,  2873,
    2876,  2877,  2878,  2879,  2880,  2881,  2884,  2885,  2886,  2887,
    2888,  2891,  2892,  2893,  2896,  2897,  2898,  2899,  2900,  2901,
    2904,  2905,  2906,  2909,  2911,  2913,  2915,  2916,  2917,  2920,
    2921,  2922,  2923,  2924,  2925,  2926,  2927,  2928,  2929,  2930,
    2931,  2932,  2935,  2936,  2937,  2940,  2941,  2942,  2945,  2946,
    2947,  2950,  2951,  2952,  2955,  2956,  2957,  2958,  2961,  2962,
    2963,  2966,  2968,  2970,  2974,  2975,  2976,  2979,  2980,  2981,
    2984,  2986,  2988,  2992,  2993,  2994,  2997,  2998,  2999,  3002,
    3004,  3006,  3010,  3011,  3012,  3015,  3016,  3017,  3020,  3021,
    3022,  3025,  3027,  3029,  3033,  3037,  3039,  3044,  3047,  3048,
    3049,  3050,  3053,  3054,  3057,  3059,  3061,  3064,  3065,  3066,
    3069,  3070,  3073,  3075,  3076,  3077,  3078,  3081,  3082,  3083,
    3086,  3087,  3088,  3091,  3092,  3097,  3099,  3102,  3109,  3110,
    3112,  3117,  3119,  3122,  3123,  3124,  3125,  3127,  3132
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
  "markerCreate", "markerCreateTemplate", "markerDelete", "markerEdit",
  "markerFormat", "markerGet", "markerGetCentroid", "markerGetHighlite",
  "markerGetSelect", "markerGetShow", "markerInitProp", "markerLayer",
  "markerList", "markerLoad", "markerMoveSelected", "markerProps",
  "markerProp", "markerProperty", "markerProperties", "markerQuery", "@2",
  "markerSave", "markerSelect", "markerShow", "queries", "query",
  "markerTags", "@3", "tags", "tag", "callback", "layer", "mask", "orient",
  "pan", "panTo", "panMotion", "panner", "postscript", "precision",
  "pscolorspace", "region", "regionHighlite", "regionSelect",
  "renderMethod", "renderBackground", "rgb", "multicolor", "hls", "hsv",
  "rotate", "rotateMotion", "save", "savePixelMask", "saveArray",
  "saveFits", "saveFitsImage", "saveFitsTable", "saveFitsSlice",
  "saveFitsExtCube", "saveFitsMosaic", "saveFitsMosaicImage",
  "saveArrayRGBCube", "saveFitsRGBImage", "saveFitsRGBCube",
  "saveArrayHLSCube", "saveFitsHLSImage", "saveFitsHLSCube",
  "saveArrayHSVCube", "saveFitsHSVImage", "saveFitsHSVCube",
  "saveFitsResample", "saveNRRD", "saveENVI", "smooth", "smoothFunction",
  "update", "updateFitsSlice", "warp", "wcs", "wcsAppend", "wcsReplace",
  "wcsAlign", "win32", "zoom", "zoomTo", 0
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
     540,   540,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   542,   542,   542,   542,   542,   542,   542,
     542,   542,   542,   543,   543,   543,   543,   543,   543,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   544,   544,   544,   544,   544,
     544,   544,   544,   544,   544,   545,   545,   545,   545,   546,
     546,   546,   547,   547,   547,   548,   548,   548,   548,   548,
     548,   548,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   549,
     549,   549,   549,   549,   549,   549,   549,   549,   549,   550,
     550,   550,   550,   551,   551,   552,   552,   553,   553,   554,
     555,   555,   555,   555,   555,   555,   556,   556,   557,   557,
     557,   557,   557,   557,   558,   558,   558,   558,   558,   558,
     558,   559,   559,   560,   560,   560,   560,   560,   560,   560,
     560,   561,   561,   561,   561,   561,   561,   561,   561,   561,
     561,   561,   561,   562,   562,   563,   564,   563,   565,   565,
     565,   566,   566,   566,   566,   566,   566,   567,   567,   568,
     568,   569,   570,   571,   570,   572,   572,   573,   574,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   575,   575,   575,   575,   575,
     575,   575,   575,   575,   575,   576,   576,   576,   576,   576,
     576,   576,   576,   577,   577,   577,   577,   578,   578,   578,
     578,   578,   578,   578,   578,   579,   579,   579,   580,   580,
     580,   581,   581,   581,   581,   582,   582,   582,   582,   583,
     583,   584,   584,   584,   584,   585,   585,   586,   586,   586,
     586,   587,   587,   587,   587,   588,   588,   588,   589,   589,
     589,   590,   590,   590,   591,   592,   592,   592,   592,   592,
     593,   593,   593,   593,   593,   593,   594,   594,   594,   594,
     594,   595,   595,   595,   596,   596,   596,   596,   596,   596,
     597,   597,   597,   598,   598,   598,   598,   598,   598,   599,
     599,   599,   599,   599,   599,   599,   599,   599,   599,   599,
     599,   599,   600,   600,   600,   601,   601,   601,   602,   602,
     602,   603,   603,   603,   604,   604,   604,   604,   605,   605,
     605,   606,   606,   606,   607,   607,   607,   608,   608,   608,
     609,   609,   609,   610,   610,   610,   611,   611,   611,   612,
     612,   612,   613,   613,   613,   614,   614,   614,   615,   615,
     615,   616,   616,   616,   617,   618,   618,   618,   619,   619,
     619,   619,   620,   620,   620,   620,   620,   621,   621,   621,
     622,   622,   623,   623,   623,   623,   623,   624,   624,   624,
     625,   625,   625,   626,   626,   626,   626,   627,   628,   628,
     628,   628,   628,   629,   629,   629,   629,   629,   629
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
       3,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     3,     3,     3,     1,
       2,     2,     2,     3,     2,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     3,     3,     3,     2,     2,     2,     2,     2,     2,
       3,     3,     3,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     4,     6,     2,     1,     1,     1,
       1,     1,     0,     5,     1,     6,     3,     1,     2,     2,
       2,     3,     3,     2,     2,     2,     2,     2,     2,     3,
       2,     2,     3,     1,     3,     4,     2,     1,     2,     5,
       6,     6,     2,     1,     2,     2,     5,     6,     6
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
       0,    54,  1372,    56,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,    49,  1368,  1367,  1371,  1370,  1369,    51,
       0,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    53,     0,     0,  1374,    55,     0,     0,    57,
       0,     0,     0,     0,   171,    58,  1397,    59,     0,     0,
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
    1270,  1271,  1272,  1273,  1274,     0,  1265,  1266,  1267,  1268,
       0,     0,     0,   627,   626,     0,     0,     0,     0,    29,
     141,  1204,     0,  1196,  1200,  1194,  1192,  1202,     0,  1198,
       0,   156,   149,   148,   146,   152,   153,   150,   154,   147,
     157,   143,   145,   155,   144,   151,   142,  1185,  1183,  1182,
    1187,  1189,     0,     0,     0,     0,   637,     0,   638,     0,
       0,     0,     0,     0,     0,     0,   639,     0,   789,     0,
     640,     0,   641,     0,     0,   642,     0,   794,   793,   792,
       0,   797,     0,     0,     0,   963,     0,     0,     0,   801,
     805,   807,   999,     0,     0,     0,     0,   901,     0,     0,
       0,   936,     0,     0,     0,     0,     0,     0,     0,   938,
       0,     0,     0,    34,  1211,  1206,  1212,   138,   139,   137,
     140,   136,  1207,     0,  1209,  1210,  1264,    38,     0,     0,
       0,     0,  1223,  1224,     0,   171,     0,  1221,  1218,     0,
       0,     0,   171,  1241,  1244,  1242,  1243,  1235,  1236,  1237,
    1238,     0,     0,     0,    46,  1261,  1262,     0,  1281,  1283,
    1282,  1278,  1279,  1277,     0,     0,     0,     0,     0,     0,
    1284,     0,  1288,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1285,  1299,     0,     0,     0,
    1287,  1289,     0,     0,     0,  1286,  1366,  1259,  1260,  1258,
     226,     0,   237,   222,     0,   239,   223,     0,   241,   224,
    1256,  1257,  1255,   225,   228,     0,     0,     0,   231,   227,
     229,   230,     0,     0,   221,     0,     0,     0,     0,  1380,
    1393,     0,     0,  1383,     0,     0,  1386,     0,     0,  1385,
    1384,   179,  1403,     0,  1402,  1398,   254,   250,     0,   259,
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
     526,   528,   529,     0,     0,     0,  1013,  1015,  1014,     0,
    1103,     0,  1082,     0,  1085,     0,     0,  1105,  1107,     0,
    1098,   395,     0,   552,   554,   571,   557,   573,   558,   575,
     559,   565,   568,   566,   562,   577,   556,     0,     0,   410,
     582,   579,   580,   179,   607,   619,   620,   621,   623,     0,
       0,     0,   636,   624,     0,     0,     0,  1186,  1184,  1188,
    1190,     0,     0,     0,   192,   192,   186,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   189,   189,
     186,     0,     0,   186,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   684,   708,     0,     0,     0,   676,     0,
       0,     0,     0,   192,   186,     0,     0,   785,     0,   795,
     796,   171,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   851,     0,     0,     0,     0,
       0,   873,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   891,     0,     0,   896,   897,     0,     0,     0,   916,
     918,   917,     0,   920,     0,     0,   927,   929,   930,   964,
       0,     0,     0,     0,   799,   800,  1007,  1005,  1010,  1009,
    1008,  1006,  1011,     0,   804,     0,  1001,  1000,   808,     0,
    1004,     0,   809,   810,   811,   812,     0,     0,     0,     0,
       0,   903,     0,     0,   904,  1126,     0,  1129,  1125,     0,
       0,     0,   905,   937,   906,  1144,  1149,  1146,  1152,  1145,
    1143,  1150,  1147,  1141,  1148,  1142,  1151,     0,     0,   911,
       0,     0,     0,     0,   912,  1161,  1165,  1166,     0,  1163,
     913,     0,  1167,   914,   934,     0,     0,     0,   939,   940,
     941,  1208,  1222,     0,     0,  1229,  1225,     0,     0,     0,
    1220,  1219,  1233,  1232,     0,     0,  1249,     0,     0,  1245,
       0,  1253,     0,     0,  1246,     0,  1280,   215,   215,     0,
       0,     0,   215,     0,  1313,     0,  1312,     0,     0,     0,
       0,  1300,     0,     0,     0,     0,  1304,     0,     0,     0,
    1311,     0,     0,     0,     0,     0,  1302,  1314,     0,     0,
       0,  1301,   215,   215,   215,  1291,  1290,  1292,     0,   238,
     240,   242,   232,     0,   235,   234,   233,     0,   243,     0,
      62,     0,  1376,     0,  1381,   171,  1396,     0,  1387,  1388,
       0,  1390,  1391,     0,   180,   181,  1382,  1404,  1405,     0,
     246,     0,   260,     0,     0,     0,     0,   294,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   338,   171,     0,     0,     0,     0,   171,     0,
     358,     0,   357,   427,   426,     0,     0,     0,   171,     0,
     179,   472,   470,   474,   478,     0,     0,     0,   179,     0,
     513,   497,     0,   508,   510,   182,     0,     0,   387,     0,
       0,    62,     0,   487,    85,    84,     0,     0,  1025,     0,
       0,     0,     0,     0,     0,  1037,     0,     0,     0,     0,
       0,     0,  1053,  1054,     0,     0,     0,     0,  1064,     0,
    1070,  1071,  1073,  1075,     0,  1079,  1090,  1091,  1092,     0,
    1094,  1099,  1101,  1102,  1100,  1012,     0,  1081,     0,  1080,
    1024,     0,     0,  1086,     0,  1088,     0,  1087,  1108,  1089,
    1096,     0,     0,   569,   567,   409,     0,     0,  1275,  1269,
     634,   635,     0,   632,   628,     0,   192,   192,   192,   193,
     194,   646,   647,   188,   187,     0,   192,   192,   192,     0,
     654,   653,   652,   664,   189,   192,   192,   192,   190,   191,
     192,   192,     0,   192,   192,     0,   189,     0,   677,     0,
     683,     0,   682,   681,   680,     0,     0,     0,   707,     0,
     706,     0,   679,   678,     0,     0,     0,     0,   189,   189,
     186,     0,     0,   186,     0,     0,     0,   192,   192,   781,
       0,   192,   192,   786,     0,   205,   206,   207,   208,   209,
     210,     0,    91,    92,    90,   816,     0,     0,     0,     0,
       0,   957,   955,   950,     0,   960,   944,   961,   947,   959,
     953,   942,   956,   945,   943,   962,   958,     0,     0,   830,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   861,     0,     0,     0,     0,   872,   874,
       0,     0,   879,   878,     0,     0,   195,     0,     0,   171,
       0,   887,     0,     0,     0,     0,   892,   893,   894,     0,
       0,     0,   900,   915,   919,   921,   924,   923,     0,     0,
       0,   928,   965,   967,     0,   966,   802,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1109,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   806,     0,     0,     0,     0,   902,     0,   171,
    1122,  1120,  1118,     0,     0,   171,  1124,   907,     0,     0,
       0,     0,  1160,     0,     0,  1168,   932,   933,     0,   935,
    1228,  1230,  1227,  1226,  1217,     0,     0,     0,  1250,     0,
       0,  1254,  1263,   217,   218,   219,   220,   216,  1294,  1293,
       0,     0,     0,  1298,     0,     0,     0,  1297,     0,     0,
       0,  1296,  1295,   215,     0,     0,     0,  1303,     0,     0,
       0,  1310,     0,     0,     0,  1309,     0,     0,     0,  1308,
       0,     0,     0,  1307,     0,     0,     0,     0,     0,  1324,
       0,  1359,  1358,  1360,     0,     0,     0,  1306,     0,     0,
       0,  1305,  1319,  1318,  1320,  1316,  1315,  1317,  1362,  1361,
    1363,     0,   236,     0,     0,  1378,  1379,     0,  1394,   171,
    1389,  1392,     0,     0,   171,     0,     0,     0,   257,     0,
       0,     0,     0,   298,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   335,   334,     0,     0,   326,   337,   339,
       0,   349,   351,   350,   348,   171,   356,     0,     0,     0,
     179,   171,     0,     0,     0,     0,   492,   506,   515,     0,
     509,   184,   185,   183,   502,     0,   518,     0,     0,   485,
     490,    83,     0,     0,     0,     0,     0,     0,   171,  1026,
       0,     0,     0,  1031,     0,   171,     0,  1038,  1039,     0,
    1041,  1042,  1043,     0,     0,     0,  1049,     0,  1055,     0,
       0,     0,  1059,  1060,     0,     0,     0,  1065,  1066,     0,
       0,  1069,  1072,  1074,  1076,     0,     0,  1093,  1095,  1016,
    1104,  1017,     0,     0,  1106,  1097,     0,     0,   587,   588,
       0,   629,   633,     0,   643,   644,   645,   192,   649,   650,
     651,     0,     0,     0,   658,   659,   186,     0,     0,     0,
     192,   665,   666,   667,   668,   670,   189,   673,   674,     0,
     192,     0,     0,     0,   189,   189,   186,     0,     0,     0,
       0,     0,     0,     0,   189,   189,   186,     0,     0,   186,
       0,     0,     0,     0,   189,   189,   186,     0,     0,     0,
       0,   705,     0,   709,     0,     0,     0,     0,     0,   189,
     189,   186,     0,     0,   186,     0,     0,     0,     0,     0,
     189,   189,   186,     0,     0,   186,     0,   189,   685,   686,
     687,   688,   690,     0,   693,   694,     0,   189,     0,     0,
     779,   780,   192,   783,   784,     0,   815,   171,   817,     0,
       0,     0,     0,     0,     0,     0,   949,   946,   952,   951,
     948,   954,     0,     0,     0,     0,     0,   171,   835,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   852,   853,   854,     0,   858,   855,   857,     0,
       0,   863,   862,   864,     0,     0,     0,     0,     0,     0,
     171,   171,   877,   201,   197,   202,   196,   199,   198,   200,
     883,   884,     0,     0,   886,   888,   171,   171,     0,   895,
     898,   171,   171,   922,   926,   968,   803,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1153,   993,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   994,     0,     0,     0,     0,     0,   813,
     814,   171,   179,  1123,     0,     0,  1127,  1128,     0,     0,
     909,     0,   171,     0,  1162,  1164,   931,     0,  1247,  1248,
    1251,  1252,   215,   215,   215,   215,   215,   215,   215,   215,
     215,  1364,  1322,  1321,  1323,  1356,  1355,  1357,  1353,  1352,
    1354,  1347,  1346,  1348,  1344,  1343,  1345,  1326,  1325,  1329,
    1328,  1330,  1327,  1338,  1337,  1339,  1335,  1334,  1336,     0,
       0,  1373,     0,  1395,     0,   171,     0,  1399,     0,     0,
     261,     0,   258,     0,     0,     0,     0,     0,   306,     0,
       0,     0,     0,     0,     0,     0,   171,     0,   341,   159,
       0,   447,     0,   468,   179,   182,     0,     0,   481,     0,
     519,   520,     0,   484,     0,     0,     0,     0,     0,   171,
    1027,   182,   182,   182,   171,  1032,   182,   179,   182,   182,
     171,  1044,   182,   182,   182,   171,  1050,   182,   182,   171,
       0,   182,   171,   182,   182,   171,   182,   171,  1083,  1084,
       0,     0,   586,     0,   648,   655,   656,   657,     0,   661,
     662,   663,   669,   192,   189,   675,   696,   697,   698,   699,
     700,     0,   702,   703,   189,   189,   759,   760,   761,   762,
     764,     0,   767,   768,     0,   189,   770,   771,   772,   773,
     774,     0,   776,   777,   189,     0,     0,     0,   189,   189,
     186,     0,     0,     0,     0,     0,     0,   189,   189,   186,
       0,     0,     0,     0,     0,     0,   189,   189,   186,     0,
       0,     0,   189,   192,   192,   192,   192,   192,     0,   192,
     192,     0,   189,   189,   192,   192,   192,   192,   192,     0,
     192,   192,     0,   189,   689,   189,     0,   695,     0,     0,
     782,     0,   818,   182,     0,     0,   182,     0,     0,     0,
     828,   182,   831,   832,   182,   834,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   856,
     859,   860,     0,   182,     0,     0,     0,   875,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1154,  1132,     0,  1139,  1140,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   171,     0,     0,    88,     0,     0,  1002,  1003,   179,
       0,     0,     0,  1130,   908,   910,   179,   171,  1240,  1350,
    1349,  1351,  1341,  1340,  1342,  1332,  1331,  1333,  1365,     0,
    1375,  1406,     0,     0,  1401,  1400,   262,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   302,     0,     0,   327,
     182,   448,   452,   469,   471,     0,   479,   514,   171,     0,
       0,     0,     0,     0,     0,  1023,  1028,  1030,  1029,  1033,
    1034,  1035,  1036,  1040,  1045,  1046,  1047,  1048,  1051,  1052,
    1056,   179,   182,  1062,   179,  1063,  1067,   179,  1077,   179,
       0,   171,     0,   585,     0,   660,   671,   192,   189,   704,
     763,   189,     0,   769,   189,   778,   192,   192,   192,   192,
     192,     0,   192,   192,   189,   192,   192,   192,   192,   192,
       0,   192,   192,   189,   192,   192,   192,   192,   192,     0,
     192,   192,   189,   192,   719,   720,   721,   722,   724,   189,
     727,   728,     0,   192,   192,   748,   749,   750,   751,   753,
     189,   756,   757,     0,   192,   691,   189,   787,   788,   171,
     820,     0,   182,   822,     0,   171,     0,   829,   833,   171,
       0,   840,   841,   842,   843,   847,   848,   844,   845,   846,
       0,     0,   182,   867,     0,   171,     0,     0,   880,   182,
       0,     0,   182,   182,     0,   925,     0,   203,   203,     0,
       0,   203,     0,   203,  1109,     0,     0,     0,     0,     0,
       0,     0,     0,  1131,     0,     0,   203,   203,     0,     0,
       0,     0,     0,     0,     0,     0,   995,     0,     0,     0,
    1109,    89,     0,   203,     0,  1156,   171,   171,     0,   179,
       0,   244,  1408,  1407,     0,     0,   266,     0,     0,     0,
       0,     0,   310,     0,     0,     0,   342,   480,     0,   361,
       0,  1019,     0,   211,     0,  1057,  1058,  1061,  1068,  1078,
     402,     0,   361,     0,   672,   701,   765,   189,   775,   710,
     711,   712,   713,   714,   189,   716,   717,   192,   739,   740,
     741,   742,   743,   189,   745,   746,   192,   730,   731,   732,
     733,   734,   189,   736,   737,   192,   723,   192,   189,   729,
     752,   192,   189,   758,   692,     0,   182,   823,     0,     0,
       0,     0,     0,   849,   850,   865,     0,     0,     0,   876,
     881,     0,   889,   890,   882,   182,     0,   204,  1109,  1109,
      88,     0,  1109,     0,  1109,   969,   171,     0,  1134,     0,
    1137,  1177,  1138,  1136,  1133,     0,  1109,  1109,    88,     0,
       0,  1109,  1109,     0,     0,  1109,   998,   996,   997,   976,
    1109,  1109,  1156,  1172,     0,  1121,  1119,  1158,     0,     0,
       0,     0,   268,   300,   301,     0,     0,     0,   299,     0,
     361,   362,   364,   363,   413,     0,     0,   212,   214,   213,
    1021,  1022,   361,   415,     0,   766,   192,   718,   192,   747,
     192,   738,   725,   192,   754,   192,     0,   819,   182,   182,
       0,   182,     0,   182,   182,     0,   182,     0,  1109,   982,
     978,  1109,     0,   983,     0,   977,  1109,     0,  1135,     0,
     980,   979,  1109,     0,     0,   974,   972,  1109,   171,   973,
     975,   981,  1172,  1116,     0,     0,  1157,  1170,  1159,  1239,
       0,     0,   308,   309,   307,   328,   331,   329,     0,     0,
     414,  1018,   171,   416,   631,   715,   744,   735,   726,   755,
     182,   821,   827,     0,   839,   836,   866,   871,     0,   885,
       0,   987,   971,    88,     0,   985,  1178,     0,   970,    88,
       0,   986,     0,  1117,  1174,  1176,     0,  1169,     0,     0,
       0,     0,     0,     0,   211,     0,   824,   171,   837,   868,
     899,  1109,     0,     0,  1109,     0,   182,  1175,  1171,   267,
       0,     0,     0,     0,     0,  1020,   798,   171,   825,   838,
     171,   869,   989,     0,  1109,   988,     0,     0,   269,   321,
       0,   320,     0,   826,   870,    88,   990,    88,  1109,   319,
     318,  1109,  1109,   984,   992,   991
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    58,  1604,   178,   160,  1046,  2730,  2731,   476,   477,
     478,   479,   161,   162,   163,   802,   727,    99,   939,   499,
    1386,  1894,  1535,  1550,  1531,  2130,  2838,  1601,  2900,  1768,
     382,   899,  1365,   883,   886,   889,   904,    68,   406,   412,
     416,   419,    73,   422,    80,   438,   434,   428,   445,    90,
     455,   100,   106,   461,   463,   465,   533,   999,  1865,   467,
     470,   113,   486,   164,   166,  2894,   182,   184,   229,  1041,
    1089,   522,   988,   524,   534,   991,   996,   536,   538,  1002,
     541,  1004,   552,  1007,  1009,   555,   559,   563,   565,   568,
     572,   608,   604,  1453,   586,  1027,  1032,  1024,  1441,  1038,
     589,   616,   625,  1049,   630,   635,   627,   600,   596,   640,
     649,  1084,  1514,  1076,  1078,  1080,  1086,   654,  1091,   232,
     656,  1960,   251,   659,   661,   665,   670,   678,   269,  1524,
     693,   292,   736,  1540,   738,   746,  1148,  1558,  1143,  2021,
    1570,  1568,  2023,  1144,  1560,  1562,   752,   755,   750,   294,
     302,   304,   793,  1225,  1627,  1214,  1722,  2173,  1228,  1232,
    1223,  1071,  1495,  1499,  1507,  1509,  2157,   310,  1241,  1244,
    1252,  2484,  2485,  2486,  2158,  2873,  2874,  1274,  1280,  1283,
    2956,  2957,  2953,  2954,  3004,  2487,  2488,   285,   318,   326,
     334,   817,   812,   339,   344,   346,   827,   834,  1309,  1314,
     893,   880,   352,   320,   261,   257,   356,   841,   363,   875,
     850,   865,   866,  1351,  1346,  1787,  1336,  1809,  1781,  1821,
    1817,  1777,  1803,  1799,  1773,  1795,  1791,  1340,   870,   852,
     369,   370,   386,  1372,   389,   395,   916,   919,   913,   397,
     400,   924
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2721
static const yytype_int16 yypact[] =
{
    5264,    64,   655,   127, -2721, -2721,  1247,  -178,   750,  1153,
    1211,   249,  1439,   126,   400,    41,  1002,    40,  5481,   657,
     545, -2721,   163,   -37,   -16,   993,   160,   775,  1388,   -69,
     141,   197,   453,  1206,  -115,   177,   823,  3714,    36,  1146,
     256,   370,   453, -2721,   -13,    27,    18, -2721,   466,   311,
    1056, -2721,   152, -2721,   148,  3895,   286,   173,   555,   188,
     598,   246,   647,   673,   175,   689,    30,   123, -2721, -2721,
   -2721,   830,   519, -2721,   455,   154,   400,   -30,   828,   590,
   -2721,   691,   519, -2721, -2721,   519,   519,   834,   714,   519,
   -2721, -2721, -2721, -2721,   519, -2721, -2721, -2721, -2721, -2721,
   -2721,    43,   703,   745,   757,   143, -2721,   519,  1614,   519,
     519,  1285,   519, -2721, -2721, -2721,   587, -2721, -2721, -2721,
   -2721,  4717, -2721, -2721, -2721, -2721, -2721, -2721,   519, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721,  1402, -2721,   519, -2721,   806, -2721, -2721,   400,   400,
     400,   400,   400,   400,   400,   400,   400,   400, -2721, -2721,
   -2721, -2721, -2721,   697, -2721,   769,  1758,   722,   303,   539,
     674,   367,  4215,   571,  4790,  4663,   839,  4717,  3744, -2721,
     906,  -147,   799,   890,   832,   223,   297,   644,   633,   913,
     116,   453,   679, -2721,   617,   918, -2721,   731,   682,   340,
   -2721,    57, -2721,  1059, -2721,    37,   901,   275, -2721, -2721,
    4932, -2721, -2721, -2721,   946,   962,  1016, -2721, -2721, -2721,
   -2721,   896, -2721, -2721, -2721, -2721,  1021, -2721, -2721,  4932,
    4305, -2721,  1054, -2721,    93,  4932,  1057, -2721,   137,  4932,
    1088, -2721,   140, -2721,  1058,  1096,   111, -2721,   519, -2721,
    1107,  1193,  2776, -2721,  1114, -2721, -2721, -2721, -2721,  1169,
   -2721, -2721,   519, -2721,   400, -2721,    50,  1177,   658,  1140,
    1183,    32, -2721, -2721, -2721,  1188,  1212,   400,   400,   519,
     519, -2721, -2721,  1235, -2721, -2721, -2721, -2721, -2721, -2721,
    3179,  2776, -2721,  1242,     8,   519,  4932,   519, -2721,  4932,
   -2721,  1246, -2721, -2721, -2721, -2721, -2721,   519,  1192,   400,
     800,   519,  1402,   519, -2721,  1252, -2721,  4834, -2721, -2721,
    1041,  1258,  1269,   519, -2721,  1289, -2721, -2721,   -65,  1294,
    4932,  1301, -2721,  1369,   519,  1095, -2721,   905,  1199,  1716,
     527,  1307,   639, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
    1327, -2721,    -1,   231,   304,   385,   663,   519,    21,  1328,
     519,    70, -2721,   519,  1040,  1352, -2721,   519,   519, -2721,
      66,    23,    39,  1361,  1402, -2721, -2721, -2721,  1172,   519,
   -2721, -2721, -2721, -2721, -2721,   519, -2721,  1364,  1366, -2721,
     519,   866, -2721, -2721, -2721, -2721, -2721, -2721,   519, -2721,
   -2721,   519, -2721, -2721,   930,   930, -2721,  1383, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,  1174,
     519,   519,  1385,  1397,  1406, -2721, -2721,   519,   519,   519,
     519,   519,   519,  1438,   519, -2721,  1443,   519, -2721,  1444,
   -2721, -2721, -2721, -2721,  1090, -2721,  1448, -2721,  4932,  1451,
   -2721,   519, -2721, -2721, -2721,   519,  1449,  1454,  1454,  4932,
     519,   519,   519,   519,   519,   519, -2721,   519,  4717,  1614,
     519,   519, -2721, -2721, -2721, -2721, -2721, -2721, -2721,  1614,
     519, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721,  1464, -2721,  1176,   -28, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721,   -80, -2721, -2721, -2721,  1291,
   -2721,   417,   -14,   -14, -2721, -2721, -2721,  1471, -2721,  1477,
   -2721, -2721,   -86, -2721,  1290, -2721, -2721, -2721,  1298, -2721,
   -2721,  1402, -2721,   519,   519, -2721,  4932,  4932,  1402, -2721,
   -2721,  1402, -2721, -2721, -2721, -2721,  1402, -2721, -2721,  4932,
    1402,   519, -2721, -2721,  4932, -2721,  1485,   579,  1273,    13,
   -2721, -2721,  1277,  4932,    12, -2721, -2721, -2721, -2721, -2721,
   -2721,  1489,  1497, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721,  1501, -2721,  1287, -2721,   -29, -2721,   519, -2721, -2721,
    1506,  1506, -2721, -2721,  1506,  1506, -2721,   767, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721,    37, -2721, -2721, -2721, -2721, -2721, -2721,  1305,  1309,
   -2721, -2721,  1453,  1461,  1467, -2721, -2721,     0,  1292, -2721,
     519,  1533,  1310,  4834, -2721,  1402, -2721, -2721,  1534, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721,  4932,  4932,  4932,  4932, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721,  1554, -2721, -2721, -2721, -2721,
    1562,  1564,   400, -2721, -2721,  1568,  1572,  1358,   519, -2721,
    2776, -2721,  1577, -2721, -2721, -2721, -2721, -2721,   519, -2721,
     400, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721,   320,  1494,  1495,  1498, -2721,  1586, -2721,   429,
    1502,    28,    33,  4172,    75,  1590, -2721,  1592, -2721,  1594,
   -2721,    98, -2721,  1602,  1603, -2721,  1595, -2721, -2721, -2721,
     519, -2721,  4834,  4666,  1440,   516,  1605,   468,  1508, -2721,
   -2721, -2721,    51,   641,  1609,  1611,    68,   519,   488,   562,
     114,  4932,   400,  2101,   840,    48,   413,   342,    10, -2721,
    1604,  1610,  1623, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721,   519, -2721, -2721, -2721, -2721,   519,   519,
     519,   519, -2721, -2721,   519,  1402,   519, -2721,   519,  1614,
     519,  1626,  1402, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721,  1628,   164,   525, -2721, -2721, -2721,  1630, -2721, -2721,
   -2721, -2721,  1535, -2721,  1633,  1635,  1544,  1551,  1552,  1637,
   -2721,  1646, -2721,  1651,  1566,  1654,    92,    95,   680,   489,
     713,   470,   725,  1656,   734, -2721, -2721,  1658,  1666,  1657,
   -2721, -2721,  1670,  1671,  1674, -2721,  1677, -2721, -2721, -2721,
   -2721,  1678, -2721, -2721,  1679, -2721, -2721,  1682, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721,   519,   357,   519, -2721, -2721,
   -2721, -2721,   519,   519, -2721,   519,  1118,   519,   519, -2721,
    4834,  1616,  1684, -2721,  1198,  1685, -2721,  1210,  1686, -2721,
   -2721,   -15,   519,   519, -2721,  1681, -2721, -2721,  1688,  1187,
     519,  1683,   667, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721,  1692,  1699,   519,
     519,   519,   519,   519,  1701,   519,  1713,   519,  1702,   400,
    1715,  1720,  1402,  4932, -2721, -2721, -2721, -2721, -2721,  1402,
   -2721, -2721,   519,   519,   519,  4932,   519,  1614,   519, -2721,
     519, -2721, -2721, -2721, -2721, -2721,  1721,  1723, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721,   571, -2721,   519, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721,  4932,   519,  1402,  1402,   -15,   -15,   -15,  1402,
    1614,   519,  1402, -2721, -2721, -2721,   519, -2721,   -29,  1556,
    1728,  1734, -2721, -2721,  1402, -2721,  1553,  1567, -2721,  1741,
    1742, -2721,  1744,  1250,  1708,  1711, -2721,   519, -2721, -2721,
   -2721, -2721, -2721,  2631,   582,   854, -2721, -2721, -2721,   519,
      62,  1005, -2721,  1465, -2721,  2101,  1469,   235,  1432,   107,
   -2721, -2721,   519, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721,  1447, -2721, -2721, -2721, -2721,   519,  1754, -2721,
   -2721, -2721, -2721,   -15, -2721, -2721, -2721, -2721, -2721,  1756,
    1757,  4869, -2721, -2721,  1759,  1760,   519, -2721, -2721, -2721,
   -2721,  1763,  1767,  1769,   -31,   -31,   -68,  1771,  1772,  1773,
    1775,  1775,  1775,  1462,  1481,  1777,  1807,  1809,   564,   564,
     -68,  1811,  1812,   -68,  1813,  1814,  1815,  1816,  1815,  1816,
    5482,  1817,  1820, -2721, -2721,  1815,  1816,   544, -2721,  1822,
    1823,  1824,  1830,   -31,   -68,  1832,  1833, -2721,  1848, -2721,
   -2721,  1402,  1182,  1422,  1573,  1596,  1597,  1746,  1896,  1598,
    1851,   292,  1714,  1753,  1852,   985,  1826,  1606,  1607,  1761,
    1864,  1636,   449,    99,  -127,  1608,  4932,  2101,  1837,   437,
    1612,  1643,  1882,    31, -2721, -2721,   578,  1886,  1888, -2721,
   -2721, -2721,  1889,  1655,   136,  2101,  1660, -2721, -2721, -2721,
     400,  1893,  1894,   519, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721,     5, -2721,  4095, -2721, -2721, -2721,   519,
   -2721,   519, -2721, -2721, -2721, -2721,   519,   519,   519,   468,
    4932, -2721,  1895,  1278, -2721, -2721,   519, -2721, -2721,   519,
    4932,   519, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721,   400,   519, -2721,
     519,   468,  1900,  1902, -2721, -2721, -2721, -2721,   519,   519,
   -2721,   400, -2721, -2721, -2721,   225,  1903,  1904, -2721, -2721,
   -2721, -2721, -2721,   519,   519, -2721, -2721,  1614,   519,   519,
   -2721, -2721, -2721, -2721,  1897,   519, -2721,   519,  1781, -2721,
     519, -2721,   519,  1792, -2721,  1907, -2721,   953,   953,   764,
     826,   833,   953,  1908, -2721,   916, -2721,   952,   957,  1011,
    1015, -2721,  1909,  1910,  1049,  1912, -2721,  1913,  1915,  1919,
   -2721,  1050,  1060,  1921,  1922,  1926, -2721, -2721,  1927,  1928,
    1931, -2721,   953,   953,   953, -2721, -2721, -2721,   519, -2721,
   -2721, -2721, -2721,   519, -2721, -2721, -2721,   519, -2721,   519,
     897,  4932, -2721,   519, -2721,  1402, -2721,  4834, -2721, -2721,
    1932, -2721, -2721,  1935, -2721, -2721, -2721, -2721,  1901,   800,
   -2721,   519,  1906,   519,   519,   519,  1123, -2721,  1937,   519,
     519,  1938,   519,   519,  1939,   519,  1940,   519,   -33,  1941,
     400,   400, -2721,  1402,   519,  1943,  1949,  1951,  1402,  4932,
   -2721,   519, -2721, -2721, -2721,   519,   519,   519,  1402,  4932,
     -15, -2721, -2721, -2721, -2721,  1614,   519,  1952,   -15,   519,
     609, -2721,  1953, -2721, -2721,   988,  3174,   519, -2721,   519,
    1955,  1961,   519, -2721, -2721, -2721,  1957,  1288,  4717,  1667,
    1704,  1706,   147,  4932,  1707, -2721,   389,  1793,   194,  1709,
    1710,   229, -2721, -2721,   601,  1779,   -78,   436,  2101,  1220,
   -2721,  1962,  1705, -2721,   628, -2721, -2721, -2721, -2721,  2101,
    1743, -2721, -2721, -2721, -2721, -2721,   519, -2721,   519, -2721,
   -2721,   519,   519, -2721,   519, -2721,   519, -2721, -2721, -2721,
   -2721,  1762,   519, -2721, -2721, -2721,   519,    79, -2721, -2721,
   -2721, -2721,  1974,  1976, -2721,   519,   -31,   -31,   -31, -2721,
   -2721, -2721, -2721, -2721, -2721,  1979,   -31,   -31,   -31,   921,
   -2721, -2721, -2721, -2721,   564,   -31,   -31,   -31, -2721, -2721,
     -31,   -31,  1981,   -31,   -31,  1983,   564,  1019, -2721,   583,
   -2721,  1038, -2721, -2721, -2721,  1984,  1985,  1986, -2721,   919,
   -2721,  1075, -2721, -2721,  1694,  1987,  1990,  1991,   564,   564,
     -68,  1993,  1994,   -68,  1996,  1995,  1998,   -31,   -31, -2721,
    2000,   -31,   -31, -2721,  2001, -2721, -2721, -2721, -2721, -2721,
   -2721,   400, -2721, -2721, -2721,  4717,  1072,   519,  1436,  1550,
     -12, -2721, -2721, -2721,    -2, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721,  2002,   519, -2721,
     400,  2004,   519,  4932,   400,  1642,  1747,  1752,   272,   410,
    1764,   450,  1668,  1675,  2014,  2016,  2017,  1896,  2018,  2020,
    2021,  1687,  1690,  1316,  2022,   519,  1522,  1663, -2721, -2721,
     400,  4932, -2721, -2721,  4932,   519,   -18,  2023,   519,  1402,
     400, -2721,  2025,  4932,  4932,   519, -2721, -2721, -2721,   400,
     400,  4932, -2721, -2721, -2721, -2721, -2721, -2721,  4932,   519,
     400, -2721, -2721, -2721,   519, -2721, -2721,  2028,   519,  1755,
     185,   519,  1784,   519,   210,   519, -2721,   519,  1785,  1787,
     519,   519,   519,   519,   519,   519,   519,   519,    89,   519,
     519,  1788, -2721,   519,   519,   519,   519, -2721,  4932,  1402,
    2034,  2036,  2037,   519,   519,  1402, -2721,   519,   519,   519,
    4932,   468, -2721,   519,   519, -2721, -2721, -2721,  2039, -2721,
   -2721, -2721, -2721, -2721, -2721,  2038,   519,   519, -2721,   519,
     519, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
    2040,  2042,  2044, -2721,  2045,  2046,  2048, -2721,  2049,  2050,
    2052, -2721, -2721,   953,  2054,  2055,  2057, -2721,  2058,  2059,
    2061, -2721,  2064,  2066,  2062, -2721,  2067,  2068,  2070, -2721,
    2073,  2074,  2071, -2721,  2076,  2077,  2078,  2079,  2081, -2721,
    2082, -2721, -2721, -2721,  2093,  2094,  2083, -2721,  2095,  2096,
    2103, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721,   519, -2721,   519,   519, -2721, -2721,   519, -2721,  1402,
   -2721, -2721,   800,   519,  1402,   519,   519,   519, -2721,   519,
     519,  2107,   519, -2721,   519,   519,  2104,   519,   519,  2110,
     519,  2111,   519, -2721, -2721,  2113,  4932, -2721, -2721, -2721,
     519, -2721, -2721, -2721, -2721,  1402, -2721,  1166,   519,  1166,
     -15,  1402,  4932,   519,   519,  2114, -2721, -2721, -2721,   519,
   -2721, -2721, -2721, -2721, -2721,  4932, -2721,  4932,   519, -2721,
   -2721,   -29,  2115,  2116,  2117,  2118,  2119,  4932,  1402, -2721,
    4932,  4932,  4932,  4717,  4932,  1402,  4932, -2721, -2721,  4932,
   -2721, -2721,  4717,  4932,  4932,  4932,  4717,  4932, -2721,  4932,
    4932,   519, -2721, -2721,  4932,  4932,  4932, -2721, -2721,  4932,
    4932, -2721, -2721, -2721, -2721,  4932,  4932, -2721, -2721, -2721,
   -2721, -2721,   519,   519, -2721, -2721,  2121,   519, -2721, -2721,
    2122, -2721, -2721,   519, -2721, -2721, -2721,   -31, -2721, -2721,
   -2721,  2123,  2126,  2127, -2721, -2721,   -68,  2129,  2130,  2131,
     -31, -2721, -2721, -2721, -2721, -2721,   564, -2721, -2721,  2133,
     -31,  2134,  2135,  2136,   564,   564,   -68,  2138,  2139,  2149,
    1749,  2163,  2169,  2170,   564,   564,   -68,  2173,  2174,   -68,
    2175,  2176,  2177,  2179,   564,   564,   -68,  2183,  2184,  2185,
    1173, -2721,  1256, -2721,  1271,  1782,  2186,  2187,  2188,   564,
     564,   -68,  2190,  2192,   -68,  2194,  1819,  2195,  2196,  2197,
     564,   564,   -68,  2199,  2200,   -68,  2202,   564, -2721, -2721,
   -2721, -2721, -2721,  2204, -2721, -2721,  2205,   564,  2208,  2212,
   -2721, -2721,   -31, -2721, -2721,  2213, -2721,  1402, -2721,  4932,
     519,   519,  4932,   519,  2214,  1422, -2721, -2721, -2721, -2721,
   -2721, -2721,  2215,  4932,   400,  2216,  4932,  1402, -2721,  2217,
    1422,   519,   519,   519,   519,   519,   519,   519,   519,   519,
    2219,  2220, -2721, -2721, -2721,  2223, -2721, -2721, -2721,  2221,
    2228, -2721, -2721, -2721,   519,  4932,   519,  2229,  1422,   400,
    1402,  1402, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721,   519,  1614, -2721, -2721,  1402,  1402,   519, -2721,
   -2721,  1402,  1402, -2721, -2721, -2721, -2721,   519,   519,   519,
     519,   519,   519,   519,   519,   519,   519,  2669, -2721,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519,   519,
    2207,  2230,   519, -2721,   519,   519,   519,  2236,  2238, -2721,
   -2721,  1402,   -15, -2721,  2239,  2242, -2721, -2721,  1614,   519,
   -2721,  2245,  1402,  4932, -2721, -2721, -2721,  2246, -2721, -2721,
   -2721, -2721,   953,   953,   953,   953,   953,   953,   953,   953,
     953, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,  1422,
     519, -2721,   519, -2721,   519,  1402,   519, -2721,  1614,   519,
   -2721,   519, -2721,  2051,  2247,  2250,   519,   519, -2721,   519,
     519,  2253,   519,  2256,   519,  2258,  1402,  4932, -2721, -2721,
     519, -2721,   519, -2721,   -15,   988,   519,  2259, -2721,   519,
   -2721, -2721,  4717, -2721,  2260,  2261,  2263,  2266,  2267,  1402,
   -2721,   988,   988,   988,  1402, -2721,   988,   -15,   988,   988,
    1402, -2721,   988,   988,   988,  1402, -2721,   988,   988,  1402,
    4932,   988,  1402,   988,   988,  1402,   988,  1402, -2721, -2721,
    2271,  4717,  2272,   519, -2721, -2721, -2721, -2721,  2274, -2721,
   -2721, -2721, -2721,   -31,   564, -2721, -2721, -2721, -2721, -2721,
   -2721,  2275, -2721, -2721,   564,   564, -2721, -2721, -2721, -2721,
   -2721,  2276, -2721, -2721,  2277,   564, -2721, -2721, -2721, -2721,
   -2721,  2278, -2721, -2721,   564,  2280,  2281,  2282,   564,   564,
     -68,  2284,  2285,  2286,  2287,  2288,  2289,   564,   564,   -68,
    2291,  2293,  2294,  2295,  2297,  2298,   564,   564,   -68,  2300,
    2301,  2302,   564,   -31,   -31,   -31,   -31,   -31,  2305,   -31,
     -31,  2307,   564,   564,   -31,   -31,   -31,   -31,   -31,  2308,
     -31,   -31,  2310,   564, -2721,   564,  2311, -2721,  2312,  2314,
   -2721,  4834, -2721,   988,  2317,  4932,   988,   519,  4932,  2318,
   -2721,   988, -2721, -2721,   988, -2721,  4932,  2319,   519,   519,
     519,   519,   519,   519,   519,   519,   519,   519,   519, -2721,
   -2721, -2721,  4932,   988,   519,  4932,  2320, -2721,  1614,  1614,
    4932,  1614,  1614,  4932,  4932,  1614,  1614,   519,   519,   519,
     519,   519,   519,  1422,   519,   519,   519,  1739,  1802,  1846,
    1911,  1945,  1946,  1947,  2669, -2721,  1950, -2721, -2721,  1422,
     519,   519,   519,   519,  1422,   519,   519,   519,   519,   519,
     519,  1402,   519,  1879,  1422,   519,   519, -2721, -2721,   -15,
     400,  4932,  4932, -2721, -2721, -2721,   -15,  1402,  2321, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,   519,
   -2721, -2721,  1614,   519, -2721, -2721, -2721,  1275,  2323,  2325,
    2322,  2332,   519,   519,  2334,   519, -2721,  2335,  1166, -2721,
     988, -2721, -2721, -2721, -2721,  2336, -2721, -2721,  1402,  2338,
    2339,  2341,  2343,  4932,  2344, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721,   -15,   988, -2721,   -15, -2721, -2721,   -15, -2721,   -15,
    2345,  1402,  2342, -2721,   519, -2721, -2721,   -31,   564, -2721,
   -2721,   564,  2349, -2721,   564, -2721,   -31,   -31,   -31,   -31,
     -31,  2350,   -31,   -31,   564,   -31,   -31,   -31,   -31,   -31,
    2351,   -31,   -31,   564,   -31,   -31,   -31,   -31,   -31,  2352,
     -31,   -31,   564,   -31, -2721, -2721, -2721, -2721, -2721,   564,
   -2721, -2721,  2353,   -31,   -31, -2721, -2721, -2721, -2721, -2721,
     564, -2721, -2721,  2354,   -31, -2721,   564, -2721, -2721,  1402,
   -2721,  4932,   988, -2721,  2355,  1402,   519, -2721, -2721,  1402,
     519, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
     519,   519,   988, -2721,  2356,  1402,   519,  1614, -2721,   988,
     519,  1614,   988,   988,  4932, -2721,   519,  2357,  2357,   519,
     519,  2357,  1422,  2357, -2721,  4932,  1896,  2358,  2360,  2361,
    2362,  2364,  2366, -2721,   400,  1422,  2357,  2357,   519,   519,
    1422,   519,   519,   519,   519,   519, -2721,  1614,   519,  2367,
   -2721, -2721,   519,  2357,   400,    29,  1402,  1402,   400,   -15,
    2369, -2721, -2721, -2721,  2371,   519, -2721,  2372,  2370,  2374,
    2376,  2377, -2721,  2378,  2379,   519, -2721, -2721,  2380,     6,
    4932, -2721,  2381,    24,  4932, -2721, -2721, -2721, -2721, -2721,
   -2721,  2383,     6,   519, -2721, -2721, -2721,   564, -2721, -2721,
   -2721, -2721, -2721, -2721,   564, -2721, -2721,   -31, -2721, -2721,
   -2721, -2721, -2721,   564, -2721, -2721,   -31, -2721, -2721, -2721,
   -2721, -2721,   564, -2721, -2721,   -31, -2721,   -31,   564, -2721,
   -2721,   -31,   564, -2721, -2721,   519,   988, -2721,  4932,  4932,
     519,  4932,   519, -2721, -2721, -2721,  4932,  4932,   519, -2721,
   -2721,  4932, -2721, -2721, -2721,   988,  2385, -2721, -2721, -2721,
    1422,   519, -2721,  2386, -2721, -2721,  1402,  2387, -2721,  2389,
   -2721, -2721, -2721, -2721, -2721,  2390, -2721, -2721,  1422,   519,
    2391, -2721, -2721,   519,  4932, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721,    29,  1737,  2101, -2721, -2721, -2721,   400,  2392,
    2393,  2394, -2721, -2721, -2721,  2400,  2401,  2403, -2721,   204,
       6, -2721, -2721, -2721, -2721,  2404,  4932, -2721, -2721, -2721,
   -2721, -2721,     6, -2721,  2405, -2721,   -31, -2721,   -31, -2721,
     -31, -2721, -2721,   -31, -2721,   -31,  4834, -2721,   988,   988,
     519,   988,  2406,   988,   988,   519,   988,   519, -2721, -2721,
   -2721, -2721,  2407, -2721,   519, -2721, -2721,  2408, -2721,   519,
   -2721, -2721, -2721,  2410,   519, -2721, -2721, -2721,  1402, -2721,
   -2721, -2721,  1737, -2721,  2024,  1956,  2101, -2721, -2721, -2721,
    2411,  2413, -2721, -2721, -2721, -2721, -2721, -2721,   795,   795,
   -2721, -2721,  1402, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
     988, -2721, -2721,  2415, -2721,  4717, -2721, -2721,  2416, -2721,
    1422, -2721, -2721,  1422,   519, -2721, -2721,   519, -2721,  1422,
     519, -2721,  4932, -2721,  2024, -2721,   400, -2721,  2417,  2418,
     519,   519,   519,   519,    24,  2420,  4717,  1402, -2721,  4717,
   -2721, -2721,   519,  2422, -2721,   519,   988, -2721, -2721, -2721,
    2423,  2424,   519,  2425,   519, -2721, -2721,  1402, -2721, -2721,
    1402, -2721, -2721,  2427, -2721, -2721,  2428,  2429, -2721, -2721,
    2443, -2721,  2444, -2721, -2721,  1422, -2721,  1422, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2721, -2721,    -3, -2721,   333, -1025, -1378, -1114,  1936, -2721,
     904,  -356,  1727,   -53,    26, -2721,  -307, -1872,  1865,  2089,
    -997,   922, -1053,   773,  1083, -2721, -1282, -2721,  -763, -1294,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721,  -583,  -522, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2720, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721,   630, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721,   222, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721,  -285,   -22, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -1646, -2721, -2721, -2721, -2721, -2721,
    -756, -2721, -2721, -2721, -2721, -2721, -2721,   239, -2721, -2721,
   -2721, -2721,  -122,  -777, -1292,  -507, -2721, -2721, -2721, -2721,
   -2721,  -571,  -561, -2721, -2721, -2289, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721,  1539, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721, -2721,
   -2721, -2721
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1378
static const yytype_int16 yytable[] =
{
      72,  2105,   394,  1440,   794,  2270,  1267,  2272,   112,  2123,
    1696,  1000,   796,   181,  1863,  1284,  1035,  1029,  1081,  1432,
    1433,  1434,  1240,  1243,  1769,   114,   254,   914,  1782, -1155,
      69,    70,  2124,   877,   331,  2125,  1678,   753,  2891,   895,
     114,   335,   355,   917,   357,   114,  2126,   258,   459,  1605,
     349,   388,  2903,  1271,   399,   732,  2897,   405,  1828,  1829,
    1830,   411,   414,   333,   418,    69,    70,  1226,   421,   423,
     910,  2127,   433,    69,    70,   440,   444,  1552,   636,   447,
    1555,   986,   448,   449,  1235,   168,   457,  1384,   169,  2128,
     587,   458,    69,    70,  2170,   117,  1517,   832,   680,  1958,
    2076,  1590,    69,    70,   471,   475,   480,   481,   485,   487,
    2079,  1151,  1533,   878,  1285,   696,  1044,    69,    70,  1136,
     436,   170,  1286,  1510,  1138,   491,    69,    70,  1005,   171,
      69,    70,    59,   979,   989,  1662,   997,   358,    81,    69,
      70,  1529,   686,   982,   691,   114,   295,   490,   468,   119,
    1245,    69,    70,   359,  1246,  1036,   383,    69,    70,   165,
     500,  1152,   610,  1666,   119,   437,  1145,   114,  1913,   119,
    2970,  1667,  1686,  1530,   469,   270,    69,    70,    69,    70,
     987,   998,  2973,  1327,   611,   532,  1329,   293,    69,    70,
     553,   588,   114,   402,  1030,   172,   990,   183,  1006,   319,
    1137,   612,   303,   637,  1305,  1139,  2077,    69,    70,   296,
    1511,  2892,  1932,    69,    70,  1922,  2080,   733,   734,   554,
    1933,   562,   833,   567,   571,   879,  1534,  1082,   797,  2898,
    1746,   252,  1247,   297,   607,   114,   798,   799,    69,    70,
     697,  1747,   353,  1663,  1045,   321,   122,  1146,   896,   360,
    1926,   650,    69,    70,   173,   123,   124,   417,  1248,   681,
     345,   122,  2078,   361,  1328,   698,   122,  1330,  1864,   119,
     123,   124,  2081,   800,  1385,   123,   124,   255,   125,   730,
    1687,   348,  1306,   174,   822,   175,   593,   384,  1503,   107,
     652,   119,   298,  2093,  1497,   460,   760,   761,   259,   881,
     613,   350,   256,   687,  1236,  1679,    69,    70,   114,  1153,
     108,  1083,   803,   176,   805,   371,   119,   911,  2893,  1630,
     902,   638,   735,   260,   808,   811,   351,   814,   818,  1249,
     820,   754,   897,  1111,  1112,  1272,  2899,  1037,  1227,  1959,
     830,   915,   415,  1697,  1287, -1155,   114,   167,   179,   127,
     840,   842,   354,   639,   692,   253,   816,   918,  1031,   119,
     597,   114,   429,   301,   127,  1273,   122,   109,  2129,   127,
     336,   338,   884,   682,   894,   123,   124,   901,   903,  1307,
     905,   337,   385,  1113,   908,   909,   177,   801,   122,   114,
    1154,   912,   403,  1107,  1237,   923,   925,   123,   124,   157,
     362,  1155,   926,   632,   114,   158,   159,   929,   931,   435,
    1670,  1914,  2965,   122,   157,   932,  1917,   688,   933,   157,
     158,   159,   123,   124,  1664,   158,   159,  2171,  1690,  1275,
     683,  2095,   119,  1882,  1124,  2149,  1156,   943,   944,  1250,
     614,  1886,  1125,  1126,   948,   949,   950,   951,   952,   953,
     617,   955,    71,   887,   957,   615,   122,  1308,  1923,   424,
    2154,  1688,   347,  1300,   110,   123,   124,  1505,   964,   127,
     119,  2098,   965,   387,  1631,   299,  1660,   970,   971,   972,
     973,   974,   975,  1728,   976,   119,   475,   980,   981,  2211,
     430,   127,  1127,  1927,   653,  2075,   475,   983,   398,   993,
     410,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   525,   305,   119,   978,  1740,   127,   526,   364,   157,
    1209,  2090,    69,    70,   300,   158,   159,  2053,   119,   122,
    2056,  1114,  1115,  1216,   431,   432,  2094,   594,   123,   124,
    2966,   157,   396,  2118,   407,  1276,  1210,   158,   159,  1574,
    1012,  1013,  1332,  1216,   539,   401,  1632,  1575,  1576,   127,
     527,  1341,   595,   540,   233,  1310,   157,   122,  1021,   111,
     365,  1918,   158,   159,    69,    70,   123,   124,  1672,  1217,
    1548,   366,   122,  1025,   530,  2967,   234,   528,  2000,   235,
     867,   123,   124,    69,    70,   306,  2001,  2002,  1277,  1217,
    1092,    69,    70,  1026,  1047,  1680,  1633,  1577,   994,   157,
     122,   598,  1116,  1888,   367,   158,   159,   731,  1333,   123,
     124,  1420,  1934,  1117,  1118,   122,   236,  1216,  1928,   117,
     758,   759,   127,   237,   123,   124,   599,   117,   605,   529,
    1128,  1129,  1342,  1311,   238,   239,  2003,  1087,   601,  1278,
    1486,   240,   408,  1919,   633,  1944,   868,  1072,  1119,   404,
    1281,  1334,   813,   739,  1436,  3005,    60,   117,  1363,   425,
     127,  1395,   441,  1217,  2096,   890,  2755,   409,  1396,   634,
     241,  1229,   157,   530,   531,   127,  1935,  1673,   158,   159,
    1142,   117,  1211,   995,   413,  1106,   446,  1242,   242,  1661,
     606,  1937,   872,  1920,   307,  1109,   882,   885,   888,  1161,
      61,   898,  1947,   127,  2099,  3027,   243,   244,   456,   308,
     157,  1130,  1487,   245,   426,   618,   158,   159,   127,  1218,
      62,   427,  1131,  1132,   462,   157,   602,  1133,  1549,  1279,
    1312,   158,   159,   853,   230,  1219,  1220,   619,   246,  1218,
     464,  1674,  1488,  1212,    82,  1578,  1579,  1160,  1936,  1230,
      63,   231,   466,   157,   620,  1219,  1220,  1134,   873,   158,
     159,  1053,  1054,   603,  1238,  1239,  1337,  1251,   157,   271,
    1213,   442,    64,   740,   158,   159,    65,  1929,  1343,   309,
      83,   247,  1335,   368,  2004,  2005,   891,  1348,    69,    70,
    1291,    66,   488,    69,    70,  1292,  1293,  1294,  1295,   855,
     501,  1296,   125,  1298,  1945,  1299,   475,  1301,  1313,   115,
     125,   272,   512,  1218,   273,   741,   742,  1770,  1681,  1055,
     869,    69,    70,    69,    70,  1056,  1580,   513,   450,  1219,
    1220,  1489,  1338,   274,  1221,  1222,   248,  1581,  1582,   523,
     125,  1930,  1583,  1563,  1344,   535,  1231,  1375,   117,   249,
    1572,   537,   275,  1349,  1221,  1222,   443,   590,    84,    69,
      70,   743,   564,   892,   125,  2006,  2283,   930,  1946,   276,
    1268,   621,  1584,  2273,  1491,   277,  2007,  2008,  1057,  1774,
     250,  2009,  1362,  1771,  1366,   591,  1778, -1377,  1490,  1367,
    1368,  1835,  1369,  1371,  1373,  1374,   118,  1058,  2519,  2520,
    2521,  2522,  2523,  2524,  2525,  2526,  2527,    85,    86,  1387,
    1388,  2010,  1059,  2328,  2025,   592,  1392,  1393,   609,  1060,
     744,   626,  2026,  2027,  1971,  1972,   278,  1061,  1221,  1222,
     662,  1752,   874,  2341,   622,   997,  1399,  1400,  1401,  1402,
    1403,   573,  1405,  2351,  1407,  1775,  2354,   745,  1269,   279,
     934,  2429,  1779,  2361,   420,    87,    88,   574,   844,  1415,
    1416,  1417,   120,  1419,   475,  1421,  2437,  1422,  2398,  1784,
      67,  2401,  2028,   863,  1973,  2193,   628,   663,   629,  2409,
     998,   575,  2412,   623,   651,  1763,  1764,   631,  1425,  1062,
    1427,   451,   452,   624,  2456,    69,    70,  1644,    69,    70,
    1429,   576,  1891,  1892,   657,  1788,  1339,   475,  1437,  1063,
    1792,  1500,    89,  1439,  1064,  1102,  1065,  1426,  1345,   935,
    1492,   577,  1991,  1992,   845,   578,  1645,  1350,   658,  1646,
    1452,   125,  1647,  1110,  1456,  1785,   126,   660,   439,   322,
     453,  2011,  2012,  1066,  1067,  1270,  1496,  1498,  1501,   679,
    2847,   685,  1068,   694,  1506,   579,   580,  1772,   180,  1512,
     280,  1648,   846,   847,  1796,    69,    70,  2069,  1800,  1883,
    2036,  1789,  1993,  1069,  1515,   262,  1793,  1567,  2037,  2038,
    1893,  1493,   690,   372,   959,   960,   641,   823,   281,   282,
     695,  2013,  1649,  1525,   373,  1650,   454,   642,   936,   664,
     283,   699,  1806,  1814,   284,  1254,   263,  1564,  1494,   728,
    1282,    69,  1370,  1818,  1573,  2528,    69,    70,   581,  1776,
    2029,  2030,  1974,  1975,   374,   824,  1780,   643,  2039,   582,
    1797,  1070,  1765,  1766,  1801,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   729,  1767,    69,    70,   848,  1807,  1815,
    1665,    91,   737,   666,  1851,  2510,  2365,  2366,   751,  1819,
      69,    70,   756,   825,    91,    69,    70,   843,  1391,   264,
     323,  1689,  1378,  1379,   583,   584,   937,   324,   849,   325,
    1695,  2031,   938,  1976,  1381,  1382,   265,   757,   375,  1786,
     340,   644,  2032,  2033,  1977,  1978,  1723,  2034,  1724,  1364,
    1994,  1995,   809,  1725,  1726,  1727,  2367,  1651,   747,   700,
     762,  1050,   701,  1733,  1051,  1052,  1734,   795,  1736,  2014,
    2015,   807,   311,    69,  1451,  1790,   821,  2035,   748,  1979,
    1794,   702,   828,   376,   667,  1738,   645,  1739,  1595,  2374,
    2375,  1652,   312,   829,   313,  1743,  1744,  2553,    69,    70,
     585,   266,  1731,  1732,  2383,  2384,  2040,  2041,    69,    70,
    1750,  1751,  1409,   831,   475,  1753,  1754,   703,   101,   835,
    2571,  1653,  1756,   704,  1757,   837,   922,  1759,   668,  1760,
     810,  1996,   871,   826,  1798,   102,    92,  2611,  1802,  2376,
    2111,  2112,  1997,  1998,  1839,   482,  2620,   267,   851,    92,
    2016,   876,   900,   341,  2385,  2629,  2744,   377,   268,   906,
     646,  2017,  2018,  1541,  1542,    93,  1596,   378,   749,    94,
     647,   669,  1808,  1816,   705,  1831,   907,  1999,    93,  2702,
    1832,  1938,  2269,  1820,  1833,   920,  1834,  2042,   927,   379,
    1837,   928,    69,    70,  1902,  2715,  2019,   380,  2043,  2044,
    2720,   967,   968,  2045,  2368,  2369,  1843,   941,  1846,   945,
    1848,  1849,  1850,  1852,   942,   381,  1854,  1855,   648,  1857,
    1858,   946,  1860,   483,  1862,   103,  1939,    95,   314,   838,
     947,  1870,  2845,  2046,   286,  1845,  2839,   342,  1876,  2842,
      95,  2844,  1877,  1878,  1879,    69,    70,   343,  1602,  1603,
    1597,  1598,   475,  1884,  2856,  2857,  1887,   492,  2869,    69,
      70,  2072,   954,   114,  1897,  1599,  1898,   956,   958,  1900,
      96,  2871,  1903,   961,   104,    74,   963,   472,   115,    97,
      98,    75,  2931,    96,   474,  2370,  1889,  2377,  2378,   984,
    1940,   315,    97,    98,   985,  1001,  2371,  2372,   992,   116,
    2942,  1003,  2386,  2387,  1909,  1010,  1008,   839,   706,  1023,
     105,  1600,  1028,  1949,  1039,  1950,  1033,   117,  1951,  1952,
     484,  1953,  1040,  1954,    76,  1042,  1043,   287,  1198,  1956,
    1048,  2373,  2734,  1957,  1073,   493,   707,   708,  1074,  2738,
     316,  1075,  1963,   288,  1199,    69,    70,  2115,   709,  1077,
     317,    77,   710,  1200,  1941,  1079,  1904,  1905,  1088,  1094,
     494,   495,  1085,  1692,  1201,   118,  2929,  2930,  2379,   496,
    2933,  1906,  2935,    69,    70,  2074,  1602,  1603,  1099,  2380,
    2381,  1090,   289,  2388,  2940,  2941,  1100,   119,  1101,  2945,
    2946,   497,  1103,  2949,  2389,  2390,  1104,  1105,  2950,  2951,
    1202,   498,  1108,    78,  2765,  1120,  1121,  2767,  2843,  1122,
    2768,  1123,  2769,  1135,  2382,  1147,  1149,  1907,  1150,  1159,
    1737,  2855,  1203,  2070,  2071,  2073,  2860,  1157,  1158,  2391,
    1215,   120,  1224,  1233,  1745,  3021,  1234,    69,    70,   290,
    1288,  3024,   472,   473,   474,  2083,  1289,  1290,    79,  2086,
    1302,  2068,  1304,   291,  1315,  1319,  2991,  1316,  1317,  2992,
    1318,  1322,  1320,  1321,  2995,    69,    70,  2089,  1602,  1603,
    2998,  1323,  2114,  2116,   121,  3001,  1324,  1325,  1204,  1326,
    1347,  1354,  2122,  1352,   122,  2132,    69,    70,  2117,  1602,
    1603,  1353,  2138,   123,   124,  1355,  1356,  3061,  1357,  3062,
     125,  1358,  1376,  1359,  1360,   126,  2143,  1361,  1377,  1380,
    1383,  2145,  1389,  1390,  1394,  2147,  1397,  2150,  2151,  1205,
    2153,  2155,  2156,  1398,  2159,  1404,  1408,  2162,  2163,  2164,
    2165,  2166,  2167,  2168,  2169,  2172,  2174,  2175,  1406,  1410,
    2177,  2178,  2179,  2180,  1411,  1446,  1423,  1206,  1424,  3042,
    2186,  2187,  3045,  1443,  2189,  2190,  2191,  1442,  1444,  1447,
    2194,  2195,  2878,  1867,  1868,  1448,  1454,  1449,  1450,  1455,
    1508,  1502,  3056,  2198,  2199,  1504,  2200,  2201,  1513,  1516,
    1518,  1519,  1543,  1522,   332,  1523,  3063,   127,  1526,  3064,
    3065,  1207,  1527,  1208,  1528,  1536,  1537,  2461,  1538,   853,
    1539,  1544,  1545,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,  1546,   514,  1547,  1553,  1554,   157,  1556,  1557,
    1559,  1561,  1569,   158,   159,  1571,  1585,  1586,  2239,  1587,
    2240,  2241,  2513,   515,  2242,  1588,  1591,  1606,  1592,  2244,
    2247,   854,  2249,  2250,  2251,   855,  2252,  2253,   489,  2255,
     516,  2256,  2257,  1593,  2259,  2260,  1629,  2262,  1609,  2264,
    1607,  1608,  1628,   517,  1634,  1635,  1654,  2267,  2246,  1658,
    1655,  1656,  1659,  1657,  1636,  2271,  3020,  1671,  1668,  1676,
    2276,  2277,  1675,   856,   857,   518,  2279,  1677,   858,   519,
    1682,  1685,  2534,  1683,  1684,  2282,  1691,  1693,  1694,  1758,
    1730,  1755,  1551,  1637,   520,  1741,  1638,  1742,  1748,  1749,
    1761,  1762,  1842,  1783,  1804,  1805,  1810,  1847,  1811,   551,
    1812,   558,   561,  1813,   566,   570,  1822,  1823,  2310,   859,
    1824,  1910,  1825,  1826,  2066,  1827,  1610,  1840,  1639,  2295,
    1841,  1853,  1856,  1921,  1859,  1861,  1866,  1871,  2301,  2318,
    2319,   521,  2306,  1872,  2321,  1873,  1885,   655,  1890,  1899,
    2323,  -489,  1901,  2084,  1611,  1931,  1942,  2088,  1911,  1640,
    1912,  1916,  1641,  1924,  1925,  1948,   671,   677,  1961,  1943,
    1962,  1955,   684,  1967,   860,  1986,   689,  1989,   861,  2020,
    2022,  2024,  2048,  2119,  2047,  2049,  2050,  2054,  2055,  2058,
    1612,  2057,  2059,  2134,  2062,  2148,  2065,  2082,  1613,  2085,
    2100,  2091,  2139,  2140,  1614,   862,  2092,  2101,  2102,   863,
    2103,  2104,  2106,  2144,  2107,  2108,  2113,  2131,  2097,  2109,
    2135,   864,  2110,  2146,  2152,  2160,  1615,  2161,  2176,  2183,
    2184,  2185,  2197,   804,  2196,  2202,   806,  2203,  2204,  2345,
    2205,  2206,  2207, -1173,  2208,  2209,  2210,   815,  1616,  2212,
    2213,  2214,  2537,  2215,  2216,  2217,  2220,  2424,  2425,  2218,
    2427,  2219,  2221,  2222,  2223,  2226,  1617,   836,  2224,  2225,
    2227,  2228,  2392,  2229,  2230,  2231,  2232,  2235,  2438,  2439,
    2440,  2441,  2442,  2443,  2444,  2445,  2446,  2955,  2233,  2234,
    2236,  2237,  2687,  2688,  1642,  2690,  2691,  2238,  2258,  2694,
    2695,  2452,  2254,  2454,  1618,  2261,  2263,  2265,  2278,  2403,
    2284,  2285,  2286,  2287,  2288,  2320,  2706,  2322,  2325,  2460,
     475,  2326,  2327,  2329,  2330,  2464,  2331,  2334,  1643,  2336,
    2337,  2338,  2342,  2343,  2467,  2468,  2469,  2470,  2471,  2472,
    2473,  2474,  2475,  2476,  2344,  1619,  2489,  2490,  2491,  2492,
    2493,  2494,  2495,  2496,  2497,  2498,  2499,  2500,  2346,  2503,
    1620,  2504,  2505,  2506,  2347,  2348,  2742,  2352,  2353,  2955,
    2355,  2356,  2357,  1621,  2358,   475,  2514,  2362,  2363,  2707,
    2364,  2393,  2394,  2395,  2399,   962,  2400,  1255,  1532,  2402,
    2404,  2405,  2406,  2410,  2411,  1256,   969,  2413,  2415,  2416,
      69,    70,  2418,  1257,  1622,   977,  2419,  2729,  2421,  2428,
    2430,  2433,  2436,  2447,  2448,  2450,   115,  1623,  2449,  1624,
    1625,  1258,  2451,  2708,  2455,  2502,  1589,  2529,  1259,  2530,
    2507,  2531,  2508,  2533,  2511,   475,  2535,  2512,  2536,  2515,
    2518,  3035,  2538,  2540,  2541,  2539,  2542,  2543,  2544,  2545,
    2546,  2547,  2548,  1260,  2556,  2560,  2561,  2551,  2562,  2552,
    1626,  2563,  2564,  2555,  1261,  2590,  2557,  2593,  2595,  2598,
    2601,  2602,  2604,  1014,  1015,  2606,  2607,  2608,  2612,  2613,
     940,  2614,  2615,  2616,  2617,  2621,  1019,  2622,  2709,  2623,
    2624,  1022,  2625,  2626,  2630,  2631,  2969,  2632,  2559,  2639,
    1034,  2642,  2650,   118,  2653,  2656,  2657,  1980,  2658,  1262,
    2594,  2661,  2666,  2670,  2686,  2740,  2748,  1263,  2746,  1990,
    2747,  2829,  2710,  2711,  2712,  2832,  2749,  2714,  2752,  2754,
    2481,  2757,  2759,  3006,  2760,  2761,  2772,  2592,  2762,  2764,
    2770,  2051,  2052,  2777,  2784,  2793,  2802,  2808,  2812,  2818,
    2826,  2837,  2713,  2848,  2849,  2952,  2850,  2851,  2659,  2852,
    2853,  2866,  2868,  2879,  2883,  1264,  2880,  2882,  2884,   120,
    2885,  2886,  2887,  2888,  2890,  3007,  2896,  2902,  1265,  2928,
    2934,  3003,  2937,  2938,  2939,  2944,  2959,  1331,  2960,  2961,
    1095,  1096,  1097,  1098,  2962,  2963,  1266,  2964,  2971,  2974,
    2985,  2993,   966,  2996,  2999,     0,  3008,  2432,  3009,  3016,
    3019,   819,  3029,  3030,  2664,  3036,  3044,     0,  3048,  3049,
    3051,  3055,  3057,     0,  3058,  2671,  2672,  2673,  2674,  2675,
    2676,  2677,  2678,  2679,  2680,  2681,  3011,  3013,  3059,  3060,
       0,  2684,  2457,   126,     0,   475,   475,     0,   475,   475,
       0,     0,   475,   475,  2696,  2697,  2698,  2699,  2700,  2701,
       0,  2703,  2704,  2705,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   921,     0,     0,     0,  2716,  2717,  2718,
    2719,     0,  2721,  2722,  2723,  2724,  2725,  2726,     0,  2728,
       0,     0,  2732,  2733,     0,     0,     0,     0,  1253,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2741,     0,     0,   475,
    2743,     0,     0,     0,  2745,     0,     0,     0,     0,  2750,
    2751,     0,  2753,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2773,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1964,
    1965,  1966,     0,     0,     0,     0,     0,     0,     0,  1968,
    1969,  1970,     0,     0,     0,     0,     0,     0,  1981,  1982,
    1983,     0,     0,  1984,  1985,     0,  1987,  1988,     0,     0,
    1011,     0,     0,     0,     0,     0,     0,  1016,     0,     0,
    1017,  1457,  1458,  1459,     0,  1018,     0,     0,     0,  1020,
       0,     0,     0,  2820,     0,     0,     0,  2822,     0,     0,
    2060,  2061,     0,     0,  2063,  2064,     0,  2823,  2824,     0,
       0,  1460,  1461,  2828,   475,  1462,     0,  2831,   475,     0,
    1413,     0,  1463,  2836,     0,  1464,  2840,  2841,     0,  1465,
       0,     0,  1418,     0,     0,     0,     0,     0,     0,  1466,
    1467,     0,     0,     0,     0,  2858,  2859,  1468,  2861,  2862,
    2863,  2864,  2865,     0,   475,  2867,  2477,     0,     0,  2870,
       0,     0,     0,     0,     0,     0,     0,  2478,     0,  1428,
       0,     0,  2881,     0,  1093,     0,     0,  1469,  1470,     0,
       0,  1471,  2889,     0,     0,     0,     0,     0,     0,  2333,
       0,     0,     0,     0,     0,  1255,  2479,  2339,  2340,     0,
    2904,  1472,     0,  1256,     0,     0,     0,  2349,  2350,     0,
       0,  1257,     0,     0,     0,     0,     0,  2359,  2360,     0,
       0,     0,     0,  1473,     0,     0,     0,     0,     0,  1258,
       0,     0,  2396,  2397,     0,     0,  1259,     0,     0,  2480,
       0,     0,  2916,  2407,  2408,     0,     0,  2920,     0,  2922,
    2414,     0,  1474,     0,     0,  2925,     0,     0,  1521,     0,
    2417,  1260,  1475,     0,     0,     0,     0,     0,  2932,     0,
       0,     0,  1261,  2735,   711,   712,   713,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2943,     0,     0,     0,
    2947,     0,     0,  2980,     0,     0,     0,     0,     0,     0,
       0,   714,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1476,     0,     0,   715,     0,  2968,  1262,     0,  1477,
    1478,     0,     0,     0,     0,  1263,     0,     0,     0,     0,
     716,     0,     0,     0,  1297,     0,  1479,     0,     0,     0,
       0,  1303,     0,  1669,     0,     0,     0,  2983,  1480,     0,
       0,     0,  2988,     0,  2990,     0,     0,     0,     0,     0,
       0,  2994,   717,     0,     0,     0,  2997,     0,     0,     0,
       0,  3000,   718,  1264,     0,     0,     0,  1481,     0,  1482,
       0,     0,     0,     0,     0,     0,  1265,     0,     0,     0,
    1483,     0,     0,     0,   719,  3010,  3012,  1729,     0,     0,
       0,  1484,     0,   720,  1266,     0,     0,  1735,     0,     0,
       0,     0,     0,     0,     0,  2481,     0,  2482,     0,     0,
       0,  3022,     0,   721,  3023,     0,     0,  3025,     0,     0,
       0,     0,     0,     0,     0,  1485,     0,  3031,  3032,  3033,
    3034,  3018,     0,     0,     0,   722,     0,     0,     0,  3043,
       0,     0,  3046,     0,     0,     0,     0,     0,     0,  3050,
       0,  3052,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3038,  2483,     0,  3041,     0,  2854,     0,     0,
    2324,  1412,     0,     0,     0,     0,   723,     0,  1414,     0,
       0,   724,     0,  2332,     0,     0,     0,  2872,     0,     0,
       0,  2877,     0,  2335,     0,     0,     0,     0,   725,     0,
       0,   726,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1836,     0,
       0,     0,     0,  1430,  1431,     0,     0,  2597,  1435,     0,
       0,  1438,     0,     0,     0,     0,  1844,  2599,  2600,     0,
       0,     0,     0,  1445,     0,     0,     0,     0,  2603,     0,
       0,     0,     0,     0,     0,     0,     0,  2605,     0,     0,
       0,  2609,  2610,     0,     0,  2420,  1875,     0,     0,     0,
    2618,  2619,     0,     0,     0,     0,  1881,     0,     0,  2627,
    2628,     0,     0,     0,     0,  2633,     0,     0,     0,     0,
       0,     0,     0,  1896,     0,  2643,  2644,     0,  1895,     0,
       0,     0,     0,   763,   764,  1908,  2654,     0,  2655,     0,
    1915,     0,     0,   115,     0,     0,     0,  2554,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2958,     0,  2566,  2567,  2568,     0,     0,  2570,     0,
    2572,  2573,     0,     0,  2575,  2576,  2577,     0,     0,  2579,
    2580,     0,     0,  2583,     0,  2585,  2586,     0,  2588,     0,
       0,   765,     0,     0,     0,     0,     0,   766,     0,     0,
    1594,     0,     0,     0,     0,     0,   767,     0,   768,     0,
       0,     0,     0,   769,     0,     0,   770,     0,     0,     0,
       0,     0,   771,     0,     0,     0,     0,     0,     0,     0,
     118,     0,     0,   772,     0,     0,     0,     0,     0,     0,
       0,   773,     0,     0,     0,     0,     0,     0,     0,     0,
     774,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   775,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2067,     0,     0,     0,     0,     0,     0,  3028,
       0,   776,     0,     0,     0,  2660,   120,     0,  2663,     0,
       0,     0,     0,  2667,     0,     0,  2668,     0,     0,   777,
    2087,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2775,   778,   779,  2776,  2683,     0,  2778,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2787,  2120,     0,
       0,  2121,     0,     0,     0,     0,  2796,   780,     0,     0,
    2136,  2137,     0,     0,     0,  2805,     0,     0,  2141,     0,
       0,     0,  2807,     0,     0,  2142,  2596,     0,     0,     0,
     126,     0,   781,  2811,     0,     0,     0,     0,     0,  2814,
       0,     0,     0,     0,     0,     0,   782,     0,   783,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   784,     0,  2181,     0,     0,   785,     0,
       0,     0,     0,     0,  1838,     0,   786,  2192,     0,     0,
       0,     0,  2756,     0,   787,     0,  2634,  2635,  2636,  2637,
    2638,     0,  2640,  2641,     0,     0,     0,  2645,  2646,  2647,
    2648,  2649,     0,  2651,  2652,   788,     0,     0,     0,     0,
       0,     0,  1869,     0,  2766,     0,     0,  1874,     0,   789,
     790,     0,   791,     0,     0,     0,     0,  1880,     0,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,     0,
    2905,     0,     0,   792,     0,     0,     0,  2906,     0,     0,
       0,     0,     0,     0,     0,     0,  2908,     0,     0,  2245,
       0,     0,     0,     0,     0,  2910,     0,     0,     0,     0,
       0,  2913,     0,     0,  2817,  2915,     0,     0,     0,     0,
       0,     0,     0,  2266,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2825,     0,     0,     0,     0,  2275,
       0,  2830,     0,     0,  2833,  2834,     0,     0,     0,     0,
       0,     0,  2280,     0,  2281,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2289,     0,     0,  2291,  2292,  2293,
    2294,  2296,     0,  2298,     0,     0,  2299,     0,     0,  2300,
    2302,  2303,  2304,  2305,  2307,     0,  2308,  2309,     0,     0,
       0,  2311,  2312,  2313,     0,     0,  2314,  2315,     0,     0,
       0,     0,  2316,  2317,     0,     0,     0,     0,     0,     0,
    2774,     0,     0,     0,     0,     0,     0,     0,     0,  2779,
    2780,  2781,  2782,  2783,     0,  2785,  2786,     0,  2788,  2789,
    2790,  2791,  2792,     0,  2794,  2795,     0,  2797,  2798,  2799,
    2800,  2801,     0,  2803,  2804,     0,  2806,    69,    70,     0,
       0,     0,     0,     0,     0,     0,  2809,  2810,     0,     0,
       0,     0,     0,   115,     0,     0,     0,  2813,  2917,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   569,     0,
       0,     0,     0,   327,     0,     0,     0,  2927,  2133,     0,
       0,     0,     0,   115,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2423,     0,     0,  2426,
       0,     0,   117,     0,     0,     0,     0,     0,     0,     0,
    2431,     0,     0,  2434,     0,     0,     0,     0,  2182,     0,
     118,     0,     0,     0,  2188,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2981,  2982,  2453,  2984,     0,  2986,  2987,     0,  2989,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2907,     0,     0,     0,     0,     0,     0,     0,     0,  2909,
       0,     0,     0,     0,     0,     0,   120,     0,  2911,     0,
    2912,     0,     0,     0,  2914,     0,     0,  2501,     0,     0,
       0,     0,  3015,     0,     0,     0,     0,     0,     0,     0,
     390,     0,     0,     0,     0,     0,   120,     0,   391,     0,
    2517,     0,     0,     0,     0,     0,     0,     0,  2243,   328,
       0,     0,     0,  2248,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3047,     0,
       0,     0,     0,     0,     0,   125,     0,     0,     0,     0,
     126,     0,     0,     0,  2268,     0,     0,     0,     0,     0,
    2274,   329,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   125,     0,     0,     0,  2975,
     126,  2976,     0,  2977,  2550,     0,  2978,  2290,  2979,     0,
       0,     0,     0,     0,  2297,     0,     0,     0,     0,  2558,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2582,     0,   330,
       0,     0,     0,     0,     0,     0,     0,     0,  2591,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,  1698,     0,     0,
       0,     0,  1699,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1700,  1701,     0,  1702,  1703,
       0,     0,  2662,     0,     0,  2665,  2422,     0,     0,  1704,
       0,     0,   392,  2669,     0,   393,     0,     0,     0,     0,
       0,     0,     0,  1705,  1706,     0,  2435,     0,     0,  2682,
       0,  1707,  2685,     0,  1708,     0,     0,  2689,     0,     0,
    2692,  2693,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1709,     0,     0,     0,     0,     0,     0,  2458,
    2459,  1710,  1711,     0,     0,  1712,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2462,  2463,     0,     0,     0,
    2465,  2466,     0,     0,   115,     0,     0,     0,  2736,  2737,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,     0,
    2509,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2516,   542,   543,     0,     0,  1713,     0,   544,     0,
    2763,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   545,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   118,   672,     0,   115,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2532,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1140,     0,     0,  1714,     0,  1141,
       0,     0,     0,  1715,     0,  2549,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   673,     0,     0,     0,     0,
    1716,     0,     0,     0,     0,     0,     0,     0,  2565,     0,
       0,  1717,     0,  2569,     0,     0,     0,   120,  2816,  2574,
       0,     0,     0,     0,  2578,     0,     0,     0,  2581,     0,
       0,  2584,   546,     0,  2587,     0,  2589,     0,     0,     0,
       0,   118,  1718,  1719,     0,     0,     0,     0,     0,     0,
       0,  2835,   547,     0,     0,     0,     0,   674,     0,     0,
       0,     0,  2846,     0,     0,  1720,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   548,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   126,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   120,     0,     0,
       0,  1721,     0,     0,     0,     0,     0,  2895,     0,     0,
       0,  2901,     0,     0,     0,     0,     0,   675,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   549,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,  2918,  2919,     0,  2921,     0,
       0,   126,     0,  2923,  2924,     0,     0,     0,  2926,     0,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,   550,
    2727,  2948,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2739,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2972,     0,   676,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2758,     0,     0,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,     0,
    2771,     0,   115,     0,     0,     0,  1162,  1163,  1164,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3017,     0,     0,     0,  1165,  1166,     0,     0,
    1167,   117,     0,  1168,     0,     0,     0,     0,     0,  3026,
    1169,     0,     0,     0,  1170,     0,   115,     0,     0,     0,
       0,     0,     0,  3037,  1171,  1172,  3040,     0,  2815,     0,
       0,     0,  1173,  1174,  2819,     0,     0,     0,  2821,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   118,
    1175,     0,     0,     0,  2827,   117,     0,     0,  1176,     0,
       0,     0,  1177,  1178,     0,     0,  1179,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1180,     0,     0,   115,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,     0,  2875,  2876,     0,  1181,     0,
       0,     0,     0,     0,     0,   120,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   556,     0,     0,     0,     0,     0,  1182,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1183,     0,     0,     0,   115,   120,
       0,     0,     0,     0,     0,     0,   118,     0,     0,     0,
       0,     0,     0,     0,   125,     0,     0,     0,     0,   126,
       0,     0,     0,     0,     0,     0,  1184,     0,  1185,     0,
       0,     0,     0,     0,  1186,  1187,     0,  1520,     0,     0,
       0,     0,     0,     0,     0,  2936,     0,     0,     0,     0,
    1188,  1189,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   115,  1190,  1191,     0,     0,     0,     0,   125,     0,
       0,     0,   120,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   560,     0,   118,     0,     0,     0,     0,
       0,     0,  1192,     0,  1193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1194,     0,  1195,
       0,     0,     0,     0,     0,     0,  1196,     0,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   126,  3002,   118,     0,
    1197,   120,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  3014,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   120,     0,  3039,     0,     0,     0,
     557,     0,     0,     0,     0,   126,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  3053,     0,     0,  3054,
       0,     0,     0,     0,     0,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   126,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,     0,
       0,     0,     0,     0,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     1,     0,     0,     2,     0,
       0,     3,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     0,     0,     0,     0,
       5,     6,     0,     0,     0,     7,     8,     9,     0,     0,
       0,     0,     0,     0,     0,    10,     0,     0,     0,     0,
       0,     0,    11,     0,    12,    13,     0,     0,     0,     0,
       0,     0,     0,     0,    14,    15,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,     0,     0,     0,    19,     0,     0,
       0,    20,     0,     0,     0,    21,    22,     0,     0,     0,
       0,    23,    24,     0,     0,    25,     0,     0,     0,     0,
       0,    26,     0,     0,     0,     0,     0,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    28,     0,
       0,     0,    29,    30,    31,     0,     0,    32,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    36,     0,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,     0,    40,
       0,     0,   185,     0,     0,   186,    41,     0,   187,     0,
      42,     0,     0,     0,    43,     0,    44,     0,    45,     0,
       0,     0,     0,    46,     0,     0,     0,     0,   188,     0,
       0,     0,   189,   190,   191,     0,     0,     0,     0,    47,
       0,     0,   192,     0,   193,    48,     0,     0,     0,   194,
       0,   195,   196,   197,     0,     0,     0,     0,     0,   198,
       0,   199,     0,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    51,     0,    52,     0,
       0,     0,     0,     0,     0,    53,     0,     0,    54,    55,
       0,     0,     0,     0,     0,     0,   200,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   201,     0,     0,     0,     0,    56,
       0,     0,     0,   202,     0,   203,   204,    57,   205,   206,
       0,     0,   207,     0,     0,     0,   208,     0,   209,  1565,
       0,     0,     0,     0,   210,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   211,   212,     0,     0,     0,   213,
       0,     0,     0,     0,     0,     0,     0,   214,     0,     0,
       0,   215,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   216,
       0,   217,     0,     0,     0,     0,     0,     0,   218,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   219,     0,   220,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   221,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     222,   223,     0,     0,     0,     0,     0,     0,     0,     0,
     224,     0,     0,     0,     0,     0,     0,     0,   225,     0,
       0,     0,     0,     0,   226,     0,   227,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,  1566,     0,     0,     0,     0,
       0,     0,     0,     0,   228
};

static const yytype_int16 yycheck[] =
{
       3,  1647,    55,  1028,   311,  1877,   783,  1879,    11,    27,
       5,   533,     4,    16,    47,     5,     4,     4,    18,  1016,
    1017,  1018,   778,   779,  1318,     4,    63,     4,  1322,     0,
       3,     4,    50,    34,    37,    53,     5,     5,    32,    18,
       4,     5,    45,     4,    26,     4,    64,    63,     5,  1163,
      63,    54,  2772,     5,    57,     5,    32,    60,  1352,  1353,
    1354,    64,    32,    37,    67,     3,     4,    16,    71,    72,
       4,    89,    75,     3,     4,    78,    79,  1130,    21,    82,
    1133,   109,    85,    86,    16,    44,    89,   102,    47,   107,
     237,    94,     3,     4,     5,    58,  1093,   162,     5,    20,
     112,  1154,     3,     4,   107,   108,   109,   110,   111,   112,
     112,    13,   180,   114,   104,     4,   145,     3,     4,    91,
     150,    80,   112,    16,    91,   128,     3,     4,   214,    88,
       3,     4,    68,   489,   214,    36,   150,   119,   316,     3,
       4,   172,     5,   499,     4,     4,     5,   121,     5,   128,
      36,     3,     4,   135,    40,   143,     4,     3,     4,    33,
     163,    63,    46,   290,   128,   195,    91,     4,    21,   128,
    2890,   298,    36,   204,    31,    15,     3,     4,     3,     4,
     208,   195,  2902,    91,    68,   188,    91,   256,     3,     4,
     193,   338,     4,     5,   181,   154,   276,   157,   284,   314,
     172,    85,     5,   146,    40,   172,   218,     3,     4,    68,
     103,   205,   290,     3,     4,    21,   218,   167,   168,   193,
     298,   195,   287,   197,   198,   226,   294,   227,   220,   205,
       5,    68,   118,    92,   208,     4,   228,   229,     3,     4,
     129,    16,   215,   144,   273,    68,   225,   172,   227,   231,
      21,   225,     3,     4,   213,   234,   235,   134,   144,   166,
       4,   225,   274,   245,   172,   268,   225,   172,   301,   128,
     234,   235,   274,   265,   289,   234,   235,   314,   241,   282,
     144,    42,   118,   242,   337,   244,    63,   135,  1065,    40,
      15,   128,   151,    21,   232,   252,   299,   300,   314,    68,
     184,   314,   339,   166,   236,   274,     3,     4,     4,   211,
      61,   311,   315,   272,   317,     4,   128,   251,   312,    27,
     250,   264,   272,   339,   327,   328,   339,   330,   331,   215,
     333,   299,   311,    13,    14,   287,   312,   325,   287,   260,
     343,   318,   312,   338,   334,   316,     4,    14,    15,   328,
     353,   354,   325,   296,   214,    22,   330,   318,   345,   128,
      63,     4,   208,    30,   328,   317,   225,   118,   386,   328,
     334,    38,    68,   280,   377,   234,   235,   380,   381,   215,
     383,   345,   230,    63,   387,   388,   345,   379,   225,     4,
     292,   325,    59,   700,   326,   398,   399,   234,   235,   378,
     382,   303,   405,    63,     4,   384,   385,   410,   411,    76,
    1187,   264,   208,   225,   378,   418,    27,   280,   421,   378,
     384,   385,   234,   235,   325,   384,   385,   338,  1205,    16,
     337,    21,   128,  1430,     5,   250,   338,   440,   441,   325,
     324,  1438,    13,    14,   447,   448,   449,   450,   451,   452,
     211,   454,   325,    68,   457,   339,   225,   293,   264,     4,
     250,   325,    92,   819,   215,   234,   235,   232,   471,   328,
     128,    21,   475,   325,   182,   334,    27,   480,   481,   482,
     483,   484,   485,  1239,   487,   128,   489,   490,   491,  1783,
     336,   328,    63,   264,   219,  1609,   499,   500,   325,    82,
     325,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   208,    59,   128,   488,  1271,   328,   214,    52,   378,
       4,  1635,     3,     4,   383,   384,   385,  1580,   128,   225,
    1583,   211,   212,    65,   380,   381,   264,   314,   234,   235,
     336,   378,   256,  1657,   298,   132,    30,   384,   385,     5,
     553,   554,    63,    65,   187,     0,   264,    13,    14,   328,
     257,    91,   339,   196,    19,    40,   378,   225,   571,   320,
     104,   182,   384,   385,     3,     4,   234,   235,   141,   111,
      16,   115,   225,     4,   380,   381,    41,   284,     5,    44,
      63,   234,   235,     3,     4,   142,    13,    14,   185,   111,
     653,     3,     4,   577,   607,    27,   314,    63,   191,   378,
     225,   314,   292,     4,   148,   384,   385,   284,   129,   234,
     235,   977,   186,   303,   304,   225,    81,    65,    27,    58,
     297,   298,   328,    88,   234,   235,   339,    58,     5,   336,
     211,   212,   172,   118,    99,   100,    63,   650,     4,   236,
      68,   106,     5,   264,   314,    27,   129,   631,   338,    61,
     318,   172,   329,     5,  1020,  2954,    11,    58,   311,   214,
     328,     4,    82,   111,   264,    12,  2548,     4,    11,   339,
     135,    40,   378,   380,   381,   328,   250,   250,   384,   385,
     743,    58,   176,   276,     5,   698,     5,   135,   153,   250,
      67,  1478,    63,   314,   251,   708,   373,   374,   375,   762,
      55,   378,  1489,   328,   264,  3004,   171,   172,     4,   266,
     378,   292,   140,   178,   269,    46,   384,   385,   328,   261,
      75,   276,   303,   304,    31,   378,    92,   308,   174,   326,
     215,   384,   385,    63,    87,   277,   278,    68,   203,   261,
       5,   314,   170,   237,     4,   211,   212,   760,   322,   118,
     105,   104,     5,   378,    85,   277,   278,   338,   129,   384,
     385,     4,     5,   129,   777,   287,    63,   780,   378,     4,
     264,   191,   127,   125,   384,   385,   131,   186,    63,   336,
      40,   246,   303,   327,   211,   212,   133,    63,     3,     4,
     803,   146,   215,     3,     4,   808,   809,   810,   811,   129,
       4,   814,   241,   816,   186,   818,   819,   820,   293,    19,
     241,    46,   125,   261,    49,   167,   168,    63,   250,    62,
     303,     3,     4,     3,     4,    68,   292,    68,     4,   277,
     278,   259,   129,    68,   376,   377,   301,   303,   304,   127,
     241,   250,   308,  1138,   129,   316,   215,   910,    58,   314,
    1145,   187,    87,   129,   376,   377,   276,    68,   118,     3,
       4,   213,    33,   210,   241,   292,  1901,    11,   250,   104,
      40,   202,   338,  1880,    30,   110,   303,   304,   121,    63,
     345,   308,   895,   129,   897,     5,    63,     0,   316,   902,
     903,     4,   905,   906,   907,   908,   106,   140,  2202,  2203,
    2204,  2205,  2206,  2207,  2208,  2209,  2210,   167,   168,   922,
     923,   338,   155,  1976,     5,    93,   929,   930,    15,   162,
     272,   314,    13,    14,    13,    14,   161,   170,   376,   377,
      44,  1297,   303,  1996,   265,   150,   949,   950,   951,   952,
     953,    45,   955,  2006,   957,   129,  2009,   299,   118,   184,
      30,  2075,   129,  2016,   134,   215,   216,    61,    63,   972,
     973,   974,   172,   976,   977,   978,  2090,   980,  2031,    63,
     325,  2034,    63,   303,    63,  1741,    68,    91,   257,  2042,
     195,    85,  2045,   314,    93,    42,    43,   315,  1001,   232,
    1003,   167,   168,   324,  2118,     3,     4,    22,     3,     4,
    1013,   105,    24,    25,    68,    63,   303,  1020,  1021,   252,
      63,    16,   272,  1026,   257,   692,   259,  1001,   303,    99,
     176,   125,    13,    14,   129,   129,    51,   303,    76,    54,
    1043,   241,    57,   710,  1047,   129,   246,    31,   220,   226,
     216,    13,    14,   286,   287,   215,  1059,  1060,  1061,     5,
    2706,     4,   295,     5,  1067,   159,   160,   303,    66,  1072,
     295,    86,   167,   168,    63,     3,     4,     5,    63,  1435,
       5,   129,    63,   316,  1087,    92,   129,  1140,    13,    14,
     102,   237,     4,    37,     4,     5,    37,    56,   323,   324,
       4,    63,   117,  1106,    48,   120,   272,    48,   178,   213,
     335,     4,    63,    63,   339,   782,   123,  1139,   264,     5,
     787,     3,     4,    63,  1146,  2239,     3,     4,   222,   303,
     211,   212,   211,   212,    78,    94,   303,    78,    63,   233,
     129,   374,   189,   190,   129,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,     4,   221,     3,     4,   272,   129,   129,
    1183,    28,     5,   162,    61,  2182,    13,    14,     5,   129,
       3,     4,     4,   152,    28,     3,     4,   102,    11,   206,
     377,  1204,     4,     5,   298,   299,   276,   384,   303,   386,
    1213,   292,   282,   292,     4,     5,   223,     5,   162,   303,
      74,   162,   303,   304,   303,   304,  1229,   308,  1231,   896,
     211,   212,    40,  1236,  1237,  1238,    63,   252,    98,    46,
       5,   611,    49,  1246,   614,   615,  1249,     5,  1251,   211,
     212,     5,    46,     3,     4,   303,     4,   338,   118,   338,
     303,    68,     4,   207,   243,  1268,   207,  1270,    86,    13,
      14,   286,    66,     4,    68,  1278,  1279,  2274,     3,     4,
     374,   288,     4,     5,    13,    14,   211,   212,     3,     4,
    1293,  1294,   959,     4,  1297,  1298,  1299,   104,    87,     5,
    2297,   316,  1305,   110,  1307,     4,   134,  1310,   287,  1312,
     118,   292,     5,   272,   303,   104,   163,  2370,   303,    63,
       4,     5,   303,   304,  1377,    40,  2379,   334,   129,   163,
     292,     4,     4,   187,    63,  2388,    61,   281,   345,   299,
     281,   303,   304,  1121,  1122,   192,   164,   291,   208,   196,
     291,   330,   303,   303,   161,  1358,     4,   338,   192,  2473,
    1363,   141,   196,   303,  1367,     4,  1369,   292,     4,   313,
    1373,     5,     3,     4,    86,  2489,   338,   321,   303,   304,
    2494,   477,   478,   308,   211,   212,  1389,     4,  1391,     4,
    1393,  1394,  1395,  1396,   220,   339,  1399,  1400,   339,  1402,
    1403,     4,  1405,   118,  1407,   194,   186,   254,   202,    40,
       4,  1414,  2704,   338,    26,  1389,  2698,   271,  1421,  2701,
     254,  2703,  1425,  1426,  1427,     3,     4,   281,     6,     7,
     248,   249,  1435,  1436,  2716,  2717,  1439,    35,  2730,     3,
       4,     5,     4,     4,  1447,   263,  1449,     4,     4,  1452,
     297,  2733,   164,     5,   243,   208,     5,     8,    19,   306,
     307,   214,  2840,   297,    10,   292,  1440,   211,   212,     5,
     250,   265,   306,   307,   298,     4,   303,   304,   187,    40,
    2858,     4,   211,   212,  1458,   187,   196,   118,   295,     4,
     279,   309,   219,  1496,     5,  1498,   219,    58,  1501,  1502,
     215,  1504,     5,  1506,   257,     4,   219,   119,    68,  1512,
       4,   338,  2509,  1516,   209,   113,   323,   324,   209,  2516,
     314,    68,  1525,   135,    84,     3,     4,     5,   335,    68,
     324,   284,   339,    93,   314,    68,   248,   249,     5,     5,
     138,   139,   250,  1210,   104,   106,  2838,  2839,   292,   147,
    2842,   263,  2844,     3,     4,     5,     6,     7,     4,   303,
     304,   251,   174,   292,  2856,  2857,     4,   128,     4,  2861,
    2862,   169,     4,  2865,   303,   304,     4,   219,  2870,  2871,
     140,   179,     5,   336,  2581,    91,    91,  2584,  2702,    91,
    2587,     5,  2589,    91,   338,     5,     4,   309,     4,     4,
    1267,  2715,   162,  1606,  1607,  1608,  2720,     5,     5,   338,
       5,   172,   104,     4,  1281,  2993,     5,     3,     4,   231,
      16,  2999,     8,     9,    10,  1628,    16,     4,   381,  1632,
       4,  1605,     4,   245,     4,    91,  2928,   102,     5,  2931,
       5,     4,    91,    91,  2936,     3,     4,     5,     6,     7,
    2942,     5,  1655,  1656,   215,  2947,     5,    91,   218,     5,
       4,     4,  1665,     5,   225,  1668,     3,     4,     5,     6,
       7,     5,  1675,   234,   235,     5,     5,  3055,     4,  3057,
     241,     4,    66,     5,     5,   246,  1689,     5,     4,     4,
       4,  1694,    11,     5,    11,  1698,     4,  1700,  1701,   259,
    1703,  1704,  1705,     4,  1707,     4,     4,  1710,  1711,  1712,
    1713,  1714,  1715,  1716,  1717,  1718,  1719,  1720,     5,     4,
    1723,  1724,  1725,  1726,     4,   172,     5,   287,     5,  3021,
    1733,  1734,  3024,     5,  1737,  1738,  1739,   181,     4,   172,
    1743,  1744,  2739,  1410,  1411,     4,    38,     5,     4,    38,
     318,   286,  3044,  1756,  1757,   286,  1759,  1760,   311,     5,
       4,     4,   300,     4,    37,     5,  3058,   328,     5,  3061,
    3062,   331,     5,   333,     5,     4,     4,  2133,     5,    63,
       5,   300,     5,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,     5,    55,     5,     4,     4,   378,     5,     5,
       5,     5,     5,   384,   385,     5,     4,     4,  1831,     5,
    1833,  1834,  2188,    75,  1837,     5,     4,   264,     5,  1842,
    1843,   125,  1845,  1846,  1847,   129,  1849,  1850,   121,  1852,
      92,  1854,  1855,     5,  1857,  1858,     5,  1860,   112,  1862,
     264,   264,   264,   105,   150,   112,    40,  1870,  1842,     5,
     264,   264,   236,   112,    22,  1878,  2990,    40,   270,   236,
    1883,  1884,   270,   167,   168,   127,  1889,     5,   172,   131,
       4,   236,  2248,     5,     5,  1898,   236,     4,     4,   118,
       5,     4,  1129,    51,   146,     5,    54,     5,     5,     5,
     118,     4,    11,     5,     5,     5,     4,    11,     5,   192,
       5,   194,   195,     4,   197,   198,     5,     5,  1931,   213,
       4,   264,     5,     5,  1601,     4,    40,     5,    86,  1913,
       5,     4,     4,   150,     5,     5,     5,     4,  1922,  1952,
    1953,   193,  1926,     4,  1957,     4,     4,   230,     5,     4,
    1963,     0,     5,  1630,    68,   186,     4,  1634,   264,   117,
     264,   264,   120,   264,   264,   232,   249,   250,     4,   274,
       4,   219,   255,     4,   268,     4,   259,     4,   272,     5,
       5,     5,     5,  1660,   300,     5,     5,     4,     4,     4,
     104,     5,     4,  1670,     4,   250,     5,     5,   112,     5,
     342,   264,  1679,  1680,   118,   299,   264,   342,     4,   303,
       4,     4,     4,  1690,     4,     4,     4,     4,   264,   342,
       5,   315,   342,     5,   250,   250,   140,   250,   250,     5,
       4,     4,     4,   316,     5,     5,   319,     5,     4,   300,
       5,     5,     4,   316,     5,     5,     4,   330,   162,     5,
       5,     4,    11,     5,     5,     4,     4,  2070,  2071,     5,
    2073,     5,     5,     5,     4,     4,   180,   350,     5,     5,
       4,     4,   300,     5,     5,     4,     4,     4,  2091,  2092,
    2093,  2094,  2095,  2096,  2097,  2098,  2099,  2874,     5,     5,
       5,     5,  2458,  2459,   252,  2461,  2462,     4,     4,  2465,
    2466,  2114,     5,  2116,   218,     5,     5,     4,     4,   300,
       5,     5,     5,     5,     5,     4,   387,     5,     5,  2132,
    2133,     5,     5,     4,     4,  2138,     5,     4,   286,     5,
       5,     5,     4,     4,  2147,  2148,  2149,  2150,  2151,  2152,
    2153,  2154,  2155,  2156,     5,   259,  2159,  2160,  2161,  2162,
    2163,  2164,  2165,  2166,  2167,  2168,  2169,  2170,     5,  2172,
     274,  2174,  2175,  2176,     5,     5,  2532,     4,     4,  2956,
       5,     5,     5,   287,     5,  2188,  2189,     4,     4,   387,
       5,     5,     5,     5,     4,   468,     4,    96,  1115,     5,
       5,     5,     5,     4,     4,   104,   479,     5,     4,     4,
       3,     4,     4,   112,   318,   488,     4,   338,     5,     5,
       5,     5,     5,     4,     4,     4,    19,   331,     5,   333,
     334,   130,     4,   387,     5,     5,  1153,  2240,   137,  2242,
       4,  2244,     4,  2246,     5,  2248,  2249,     5,  2251,     4,
       4,  3014,     5,  2256,  2257,     5,  2259,  2260,     5,  2262,
       4,  2264,     4,   162,     5,     5,     5,  2270,     5,  2272,
     374,     5,     5,  2276,   173,     4,  2279,     5,     4,     4,
       4,     4,     4,   556,   557,     5,     5,     5,     4,     4,
     425,     5,     5,     5,     5,     4,   569,     4,   387,     5,
       5,   574,     5,     5,     4,     4,  2889,     5,  2282,     4,
     583,     4,     4,   106,     4,     4,     4,  1544,     4,   218,
    2323,     4,     4,     4,     4,     4,     4,   226,     5,  1556,
       5,  2687,   387,   387,   387,  2691,     4,   387,     4,     4,
     316,     5,     4,   387,     5,     4,     4,  2321,     5,     5,
       5,  1578,  1579,     4,     4,     4,     4,     4,     4,     4,
       4,     4,  2484,     5,     4,  2872,     5,     5,  2421,     5,
       4,  2727,     5,     4,     4,   274,     5,     5,     4,   172,
       4,     4,     4,     4,     4,  2956,     5,     4,   287,     4,
       4,  2952,     5,     4,     4,     4,     4,   858,     5,     5,
     673,   674,   675,   676,     4,     4,   305,     4,     4,     4,
       4,     4,   476,     5,     4,    -1,     5,  2084,     5,     4,
       4,   332,     5,     5,  2427,     5,     4,    -1,     5,     5,
       5,     4,     4,    -1,     5,  2438,  2439,  2440,  2441,  2442,
    2443,  2444,  2445,  2446,  2447,  2448,  2968,  2969,     5,     5,
      -1,  2454,  2119,   246,    -1,  2458,  2459,    -1,  2461,  2462,
      -1,    -1,  2465,  2466,  2467,  2468,  2469,  2470,  2471,  2472,
      -1,  2474,  2475,  2476,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   394,    -1,    -1,    -1,  2490,  2491,  2492,
    2493,    -1,  2495,  2496,  2497,  2498,  2499,  2500,    -1,  2502,
      -1,    -1,  2505,  2506,    -1,    -1,    -1,    -1,   781,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2529,    -1,    -1,  2532,
    2533,    -1,    -1,    -1,  2537,    -1,    -1,    -1,    -1,  2542,
    2543,    -1,  2545,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2594,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1526,
    1527,  1528,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1536,
    1537,  1538,    -1,    -1,    -1,    -1,    -1,    -1,  1545,  1546,
    1547,    -1,    -1,  1550,  1551,    -1,  1553,  1554,    -1,    -1,
     551,    -1,    -1,    -1,    -1,    -1,    -1,   558,    -1,    -1,
     561,    20,    21,    22,    -1,   566,    -1,    -1,    -1,   570,
      -1,    -1,    -1,  2666,    -1,    -1,    -1,  2670,    -1,    -1,
    1587,  1588,    -1,    -1,  1591,  1592,    -1,  2680,  2681,    -1,
      -1,    50,    51,  2686,  2687,    54,    -1,  2690,  2691,    -1,
     963,    -1,    61,  2696,    -1,    64,  2699,  2700,    -1,    68,
      -1,    -1,   975,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      79,    -1,    -1,    -1,    -1,  2718,  2719,    86,  2721,  2722,
    2723,  2724,  2725,    -1,  2727,  2728,    57,    -1,    -1,  2732,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,    -1,  1012,
      -1,    -1,  2745,    -1,   655,    -1,    -1,   116,   117,    -1,
      -1,   120,  2755,    -1,    -1,    -1,    -1,    -1,    -1,  1986,
      -1,    -1,    -1,    -1,    -1,    96,    97,  1994,  1995,    -1,
    2773,   140,    -1,   104,    -1,    -1,    -1,  2004,  2005,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,  2014,  2015,    -1,
      -1,    -1,    -1,   162,    -1,    -1,    -1,    -1,    -1,   130,
      -1,    -1,  2029,  2030,    -1,    -1,   137,    -1,    -1,   140,
      -1,    -1,  2815,  2040,  2041,    -1,    -1,  2820,    -1,  2822,
    2047,    -1,   191,    -1,    -1,  2828,    -1,    -1,  1101,    -1,
    2057,   162,   201,    -1,    -1,    -1,    -1,    -1,  2841,    -1,
      -1,    -1,   173,  2510,    68,    69,    70,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2859,    -1,    -1,    -1,
    2863,    -1,    -1,  2916,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   250,    -1,    -1,   108,    -1,  2889,   218,    -1,   258,
     259,    -1,    -1,    -1,    -1,   226,    -1,    -1,    -1,    -1,
     124,    -1,    -1,    -1,   815,    -1,   275,    -1,    -1,    -1,
      -1,   822,    -1,  1186,    -1,    -1,    -1,  2920,   287,    -1,
      -1,    -1,  2925,    -1,  2927,    -1,    -1,    -1,    -1,    -1,
      -1,  2934,   156,    -1,    -1,    -1,  2939,    -1,    -1,    -1,
      -1,  2944,   166,   274,    -1,    -1,    -1,   316,    -1,   318,
      -1,    -1,    -1,    -1,    -1,    -1,   287,    -1,    -1,    -1,
     329,    -1,    -1,    -1,   188,  2968,  2969,  1240,    -1,    -1,
      -1,   340,    -1,   197,   305,    -1,    -1,  1250,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   316,    -1,   318,    -1,    -1,
      -1,  2994,    -1,   217,  2997,    -1,    -1,  3000,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   374,    -1,  3010,  3011,  3012,
    3013,  2985,    -1,    -1,    -1,   239,    -1,    -1,    -1,  3022,
      -1,    -1,  3025,    -1,    -1,    -1,    -1,    -1,    -1,  3032,
      -1,  3034,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3016,   374,    -1,  3019,    -1,  2714,    -1,    -1,
    1967,   962,    -1,    -1,    -1,    -1,   280,    -1,   969,    -1,
      -1,   285,    -1,  1980,    -1,    -1,    -1,  2734,    -1,    -1,
      -1,  2738,    -1,  1990,    -1,    -1,    -1,    -1,   302,    -1,
      -1,   305,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1371,    -1,
      -1,    -1,    -1,  1014,  1015,    -1,    -1,  2334,  1019,    -1,
      -1,  1022,    -1,    -1,    -1,    -1,  1389,  2344,  2345,    -1,
      -1,    -1,    -1,  1034,    -1,    -1,    -1,    -1,  2355,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2364,    -1,    -1,
      -1,  2368,  2369,    -1,    -1,  2062,  1419,    -1,    -1,    -1,
    2377,  2378,    -1,    -1,    -1,    -1,  1429,    -1,    -1,  2386,
    2387,    -1,    -1,    -1,    -1,  2392,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1446,    -1,  2402,  2403,    -1,     4,    -1,
      -1,    -1,    -1,     4,     5,  1458,  2413,    -1,  2415,    -1,
    1463,    -1,    -1,    19,    -1,    -1,    -1,  2275,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2878,    -1,  2291,  2292,  2293,    -1,    -1,  2296,    -1,
    2298,  2299,    -1,    -1,  2302,  2303,  2304,    -1,    -1,  2307,
    2308,    -1,    -1,  2311,    -1,  2313,  2314,    -1,  2316,    -1,
      -1,    62,    -1,    -1,    -1,    -1,    -1,    68,    -1,    -1,
    1161,    -1,    -1,    -1,    -1,    -1,    77,    -1,    79,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    87,    -1,    -1,    -1,
      -1,    -1,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     106,    -1,    -1,   104,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   140,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1605,    -1,    -1,    -1,    -1,    -1,    -1,  3006,
      -1,   162,    -1,    -1,    -1,  2423,   172,    -1,  2426,    -1,
      -1,    -1,    -1,  2431,    -1,    -1,  2434,    -1,    -1,   180,
    1633,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2598,   193,   194,  2601,  2453,    -1,  2604,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2614,  1661,    -1,
      -1,  1664,    -1,    -1,    -1,    -1,  2623,   218,    -1,    -1,
    1673,  1674,    -1,    -1,    -1,  2632,    -1,    -1,  1681,    -1,
      -1,    -1,  2639,    -1,    -1,  1688,  2333,    -1,    -1,    -1,
     246,    -1,   243,  2650,    -1,    -1,    -1,    -1,    -1,  2656,
      -1,    -1,    -1,    -1,    -1,    -1,   257,    -1,   259,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   274,    -1,  1728,    -1,    -1,   279,    -1,
      -1,    -1,    -1,    -1,  1375,    -1,   287,  1740,    -1,    -1,
      -1,    -1,  2550,    -1,   295,    -1,  2393,  2394,  2395,  2396,
    2397,    -1,  2399,  2400,    -1,    -1,    -1,  2404,  2405,  2406,
    2407,  2408,    -1,  2410,  2411,   316,    -1,    -1,    -1,    -1,
      -1,    -1,  1413,    -1,  2582,    -1,    -1,  1418,    -1,   330,
     331,    -1,   333,    -1,    -1,    -1,    -1,  1428,    -1,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,    -1,    -1,    -1,
    2777,    -1,    -1,   374,    -1,    -1,    -1,  2784,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2793,    -1,    -1,  1842,
      -1,    -1,    -1,    -1,    -1,  2802,    -1,    -1,    -1,    -1,
      -1,  2808,    -1,    -1,  2662,  2812,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1866,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2682,    -1,    -1,    -1,    -1,  1882,
      -1,  2689,    -1,    -1,  2692,  2693,    -1,    -1,    -1,    -1,
      -1,    -1,  1895,    -1,  1897,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1907,    -1,    -1,  1910,  1911,  1912,
    1913,  1914,    -1,  1916,    -1,    -1,  1919,    -1,    -1,  1922,
    1923,  1924,  1925,  1926,  1927,    -1,  1929,  1930,    -1,    -1,
      -1,  1934,  1935,  1936,    -1,    -1,  1939,  1940,    -1,    -1,
      -1,    -1,  1945,  1946,    -1,    -1,    -1,    -1,    -1,    -1,
    2597,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2606,
    2607,  2608,  2609,  2610,    -1,  2612,  2613,    -1,  2615,  2616,
    2617,  2618,  2619,    -1,  2621,  2622,    -1,  2624,  2625,  2626,
    2627,  2628,    -1,  2630,  2631,    -1,  2633,     3,     4,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2643,  2644,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,  2654,  2816,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,    -1,
      -1,    -1,    -1,    39,    -1,    -1,    -1,  2835,  1669,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2069,    -1,    -1,  2072,
      -1,    -1,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2083,    -1,    -1,  2086,    -1,    -1,    -1,    -1,  1729,    -1,
     106,    -1,    -1,    -1,  1735,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2918,  2919,  2115,  2921,    -1,  2923,  2924,    -1,  2926,    -1,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2787,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2796,
      -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,  2805,    -1,
    2807,    -1,    -1,    -1,  2811,    -1,    -1,  2170,    -1,    -1,
      -1,    -1,  2980,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      15,    -1,    -1,    -1,    -1,    -1,   172,    -1,    23,    -1,
    2193,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1839,   215,
      -1,    -1,    -1,  1844,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3026,    -1,
      -1,    -1,    -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,
     246,    -1,    -1,    -1,  1875,    -1,    -1,    -1,    -1,    -1,
    1881,   257,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   241,    -1,    -1,    -1,  2906,
     246,  2908,    -1,  2910,  2267,    -1,  2913,  1908,  2915,    -1,
      -1,    -1,    -1,    -1,  1915,    -1,    -1,    -1,    -1,  2282,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2310,    -1,   325,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2321,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,    -1,    -1,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,    22,    -1,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    -1,    53,    54,
      -1,    -1,  2425,    -1,    -1,  2428,  2067,    -1,    -1,    64,
      -1,    -1,   267,  2436,    -1,   270,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    78,    79,    -1,  2087,    -1,    -1,  2452,
      -1,    86,  2455,    -1,    89,    -1,    -1,  2460,    -1,    -1,
    2463,  2464,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,  2120,
    2121,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2136,  2137,    -1,    -1,    -1,
    2141,  2142,    -1,    -1,    19,    -1,    -1,    -1,  2511,  2512,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,    -1,    -1,
    2181,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2192,    67,    68,    -1,    -1,   191,    -1,    73,    -1,
    2563,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    96,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   106,    17,    -1,    19,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2245,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,    -1,   252,    -1,   177,
      -1,    -1,    -1,   258,    -1,  2266,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    60,    -1,    -1,    -1,    -1,
     275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2289,    -1,
      -1,   286,    -1,  2294,    -1,    -1,    -1,   172,  2661,  2300,
      -1,    -1,    -1,    -1,  2305,    -1,    -1,    -1,  2309,    -1,
      -1,  2312,   187,    -1,  2315,    -1,  2317,    -1,    -1,    -1,
      -1,   106,   317,   318,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2694,   207,    -1,    -1,    -1,    -1,   122,    -1,    -1,
      -1,    -1,  2705,    -1,    -1,   340,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   232,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   246,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,
      -1,   386,    -1,    -1,    -1,    -1,    -1,  2760,    -1,    -1,
      -1,  2764,    -1,    -1,    -1,    -1,    -1,   192,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   301,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,  2818,  2819,    -1,  2821,    -1,
      -1,   246,    -1,  2826,  2827,    -1,    -1,    -1,  2831,    -1,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,    -1,   374,
    2501,  2864,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2517,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2896,    -1,   320,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2558,    -1,    -1,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,    -1,    -1,
    2591,    -1,    19,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2985,    -1,    -1,    -1,    50,    51,    -1,    -1,
      54,    58,    -1,    57,    -1,    -1,    -1,    -1,    -1,  3002,
      64,    -1,    -1,    -1,    68,    -1,    19,    -1,    -1,    -1,
      -1,    -1,    -1,  3016,    78,    79,  3019,    -1,  2659,    -1,
      -1,    -1,    86,    87,  2665,    -1,    -1,    -1,  2669,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   106,
     104,    -1,    -1,    -1,  2685,    58,    -1,    -1,   112,    -1,
      -1,    -1,   116,   117,    -1,    -1,   120,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   140,    -1,    -1,    19,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   106,    -1,  2736,  2737,    -1,   162,    -1,
      -1,    -1,    -1,    -1,    -1,   172,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,   191,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   218,    -1,    -1,    -1,    19,   172,
      -1,    -1,    -1,    -1,    -1,    -1,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   241,    -1,    -1,    -1,    -1,   246,
      -1,    -1,    -1,    -1,    -1,    -1,   250,    -1,   252,    -1,
      -1,    -1,    -1,    -1,   258,   259,    -1,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2846,    -1,    -1,    -1,    -1,
     274,   275,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,   286,   287,    -1,    -1,    -1,    -1,   241,    -1,
      -1,    -1,   172,   246,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   310,    -1,   106,    -1,    -1,    -1,    -1,
      -1,    -1,   316,    -1,   318,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   331,    -1,   333,
      -1,    -1,    -1,    -1,    -1,    -1,   340,    -1,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   246,  2948,   106,    -1,
     374,   172,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2972,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   172,    -1,  3017,    -1,    -1,    -1,
     320,    -1,    -1,    -1,    -1,   246,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  3037,    -1,    -1,  3040,
      -1,    -1,    -1,    -1,    -1,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   246,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,    41,    -1,    -1,    44,    -1,
      -1,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      66,    67,    -1,    -1,    -1,    71,    72,    73,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    -1,
      -1,    -1,    88,    -1,    90,    91,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   100,   101,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     126,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   149,    -1,    -1,    -1,   153,    -1,    -1,
      -1,   157,    -1,    -1,    -1,   161,   162,    -1,    -1,    -1,
      -1,   167,   168,    -1,    -1,   171,    -1,    -1,    -1,    -1,
      -1,   177,    -1,    -1,    -1,    -1,    -1,   183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   194,    -1,
      -1,    -1,   198,   199,   200,    -1,    -1,   203,   204,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     216,    -1,    -1,    -1,   220,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   238,    -1,   240,   241,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   253,    -1,   255,
      -1,    -1,    41,    -1,    -1,    44,   262,    -1,    47,    -1,
     266,    -1,    -1,    -1,   270,    -1,   272,    -1,   274,    -1,
      -1,    -1,    -1,   279,    -1,    -1,    -1,    -1,    67,    -1,
      -1,    -1,    71,    72,    73,    -1,    -1,    -1,    -1,   295,
      -1,    -1,    81,    -1,    83,   301,    -1,    -1,    -1,    88,
      -1,    90,    91,    92,    -1,    -1,    -1,    -1,    -1,    98,
      -1,   100,    -1,   319,   320,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   332,    -1,   334,    -1,
      -1,    -1,    -1,    -1,    -1,   341,    -1,    -1,   344,   345,
      -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   153,    -1,    -1,    -1,    -1,   375,
      -1,    -1,    -1,   162,    -1,   164,   165,   383,   167,   168,
      -1,    -1,   171,    -1,    -1,    -1,   175,    -1,   177,   177,
      -1,    -1,    -1,    -1,   183,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   203,   204,    -1,    -1,    -1,   208,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,
      -1,   220,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   238,
      -1,   240,    -1,    -1,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   272,    -1,   274,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   301,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     319,   320,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     329,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   337,    -1,
      -1,    -1,    -1,    -1,   343,    -1,   345,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   383
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
     345,   510,    68,   392,    63,   314,   339,   593,    63,   314,
     339,   592,    92,   123,   206,   223,   288,   334,   345,   516,
      15,     4,    46,    49,    68,    87,   104,   110,   161,   184,
     295,   323,   324,   335,   339,   575,    26,   119,   135,   174,
     231,   245,   519,   256,   537,     5,    68,    92,   151,   334,
     383,   392,   538,     5,   539,    59,   142,   251,   266,   336,
     555,    46,    66,    68,   202,   265,   314,   324,   576,   314,
     591,    68,   226,   377,   384,   386,   577,    39,   215,   257,
     325,   390,   400,   402,   578,     5,   334,   345,   392,   581,
      74,   187,   271,   281,   582,     4,   583,    92,   555,    63,
     314,   339,   590,   215,   325,   390,   594,    26,   119,   135,
     231,   245,   382,   596,    52,   104,   115,   148,   327,   618,
     619,     4,    37,    48,    78,   162,   207,   281,   291,   313,
     321,   339,   418,     4,   135,   230,   620,   325,   390,   622,
      15,    23,   267,   270,   401,   623,   256,   627,   325,   390,
     628,     0,     5,   392,    61,   390,   426,   298,     5,     4,
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
      46,    68,    85,   184,   324,   339,   489,   555,    46,    68,
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
     118,   390,   580,   392,   390,   400,   402,   579,   390,   407,
     390,     4,   401,    56,    94,   152,   272,   584,     4,     4,
     390,     4,   162,   287,   585,     5,   400,     4,    40,   118,
     390,   595,   390,   102,    63,   129,   167,   168,   272,   303,
     598,   129,   617,    63,   125,   129,   167,   168,   172,   213,
     268,   272,   299,   303,   315,   599,   600,    63,   129,   303,
     616,     5,    63,   129,   303,   597,     4,    34,   114,   226,
     589,    68,   392,   421,    68,   392,   422,    68,   392,   423,
      12,   133,   210,   588,   390,    18,   227,   311,   392,   419,
       4,   390,   250,   390,   424,   390,   299,     4,   390,   390,
       4,   251,   325,   626,     4,   318,   624,     4,   318,   625,
       4,   407,   134,   390,   629,   390,   390,     4,     5,   390,
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
     374,   549,   402,   209,   209,    68,   501,    68,   502,    68,
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
     278,   376,   377,   548,   104,   541,    16,   287,   546,    40,
     118,   215,   547,     4,     5,    16,   236,   326,   390,   287,
     548,   556,   135,   548,   557,    36,    40,   118,   144,   215,
     325,   390,   558,   400,   392,    96,   104,   112,   130,   137,
     162,   173,   218,   226,   274,   287,   305,   561,    40,   118,
     215,     5,   287,   317,   565,    16,   132,   185,   236,   326,
     566,   318,   392,   567,     5,   104,   112,   334,    16,    16,
       4,   390,   390,   390,   390,   390,   390,   407,   390,   390,
     399,   390,     4,   407,     4,    40,   118,   215,   293,   586,
      40,   118,   215,   293,   587,     4,   102,     5,     5,    91,
      91,    91,     4,     5,     5,    91,     5,    91,   172,    91,
     172,   600,    63,   129,   172,   303,   604,    63,   129,   303,
     615,    91,   172,    63,   129,   303,   602,     4,    63,   129,
     303,   601,     5,     5,     4,     5,     5,     4,     4,     5,
       5,     5,   390,   311,   392,   420,   390,   390,   390,   390,
       4,   390,   621,   390,   390,   401,    66,     4,     4,     5,
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
     316,    30,   176,   237,   264,   550,   390,   232,   390,   551,
      16,   390,   286,   561,   286,   232,   390,   552,   318,   553,
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
      27,   182,   264,   314,   150,   112,    22,    51,    54,    86,
     117,   120,   252,   286,    22,    51,    54,    57,    86,   117,
     120,   252,   286,   316,    40,   264,   264,   112,     5,   236,
      27,   250,    36,   144,   325,   390,   290,   298,   270,   400,
     561,    40,   141,   250,   314,   270,   236,     5,     5,   274,
      27,   250,     4,     5,     5,   236,    36,   144,   325,   390,
     561,   236,   392,     4,     4,   390,     5,   338,    22,    27,
      50,    51,    53,    54,    64,    78,    79,    86,    89,   107,
     116,   117,   120,   191,   252,   258,   275,   286,   317,   318,
     340,   386,   544,   390,   390,   390,   390,   390,   548,   400,
       5,     4,     5,   390,   390,   400,   390,   392,   390,   390,
     548,     5,     5,   390,   390,   392,     5,    16,     5,     5,
     390,   390,   399,   390,   390,     4,   390,   390,   118,   390,
     390,   118,     4,    42,    43,   189,   190,   221,   417,   417,
      63,   129,   303,   612,    63,   129,   303,   609,    63,   129,
     303,   606,   417,     5,    63,   129,   303,   603,    63,   129,
     303,   614,    63,   129,   303,   613,    63,   129,   303,   611,
      63,   129,   303,   610,     5,     5,    63,   129,   303,   605,
       4,     5,     5,     4,    63,   129,   303,   608,    63,   129,
     303,   607,     5,     5,     4,     5,     5,     4,   417,   417,
     417,   390,   390,   390,   390,     4,   400,   390,   407,   401,
       5,     5,    11,   390,   400,   402,   390,    11,   390,   390,
     390,    61,   390,     4,   390,   390,     4,   390,   390,     5,
     390,     5,   390,    47,   301,   446,     5,   392,   392,   407,
     390,     4,     4,     4,   407,   400,   390,   390,   390,   390,
     407,   400,   408,   399,   390,     4,   408,   390,     4,   402,
       5,    24,    25,   102,   409,     4,   400,   390,   390,     4,
     390,     5,    86,   164,   248,   249,   263,   309,   400,   402,
     264,   264,   264,    21,   264,   400,   264,    27,   182,   264,
     314,   150,    21,   264,   264,   264,    21,   264,    27,   186,
     250,   186,   290,   298,   186,   250,   322,   561,   141,   186,
     250,   314,     4,   274,    27,   186,   250,   561,   232,   390,
     390,   390,   390,   390,   390,   219,   390,   390,    20,   260,
     509,     4,     4,   390,   412,   412,   412,     4,   412,   412,
     412,    13,    14,    63,   211,   212,   292,   303,   304,   338,
     411,   412,   412,   412,   412,   412,     4,   412,   412,     4,
     411,    13,    14,    63,   211,   212,   292,   303,   304,   338,
       5,    13,    14,    63,   211,   212,   292,   303,   304,   308,
     338,    13,    14,    63,   211,   212,   292,   303,   304,   338,
       5,   527,     5,   530,     5,     5,    13,    14,    63,   211,
     212,   292,   303,   304,   308,   338,     5,    13,    14,    63,
     211,   212,   292,   303,   304,   308,   338,   300,     5,     5,
       5,   411,   411,   410,     4,     4,   410,     5,     4,     4,
     412,   412,     4,   412,   412,     5,   392,   400,   402,     5,
     390,   390,     5,   390,     5,   395,   112,   218,   274,   112,
     218,   274,     5,   390,   392,     5,   390,   400,   392,     5,
     395,   264,   264,    21,   264,    21,   264,   264,    21,   264,
     342,   342,     4,     4,     4,   542,     4,     4,     4,   342,
     342,     4,     5,     4,   390,     5,   390,     5,   395,   392,
     400,   400,   390,    27,    50,    53,    64,    89,   107,   386,
     413,     4,   390,   407,   392,     5,   400,   400,   390,   392,
     392,   400,   400,   390,   392,   390,     5,   390,   250,   250,
     390,   390,   250,   390,   250,   390,   390,   554,   562,   390,
     250,   250,   390,   390,   390,   390,   390,   390,   390,   390,
       5,   338,   390,   545,   390,   390,   250,   390,   390,   390,
     390,   400,   407,     5,     4,     4,   390,   390,   407,   390,
     390,   390,   400,   548,   390,   390,     5,     4,   390,   390,
     390,   390,     5,     5,     4,     5,     5,     4,     5,     5,
       4,   417,     5,     5,     4,     5,     5,     4,     5,     5,
       4,     5,     5,     4,     5,     5,     4,     4,     4,     5,
       5,     4,     4,     5,     5,     4,     5,     5,     4,   390,
     390,   390,   390,   407,   390,   400,   402,   390,   407,   390,
     390,   390,   390,   390,     5,   390,   390,   390,     4,   390,
     390,     5,   390,     5,   390,     4,   400,   390,   407,   196,
     405,   390,   405,   408,   407,   400,   390,   390,     4,   390,
     400,   400,   390,   393,     5,     5,     5,     5,     5,   400,
     407,   400,   400,   400,   400,   402,   400,   407,   400,   400,
     400,   402,   400,   400,   400,   400,   402,   400,   400,   400,
     390,   400,   400,   400,   400,   400,   400,   400,   390,   390,
       4,   390,     5,   390,   412,     5,     5,     5,   410,     4,
       4,     5,   412,   411,     4,   412,     5,     5,     5,   411,
     411,   410,     4,     4,     5,   300,     5,     5,     5,   411,
     411,   410,     4,     4,   410,     5,     5,     5,     5,   411,
     411,   410,     4,     4,     5,    13,    14,    63,   211,   212,
     292,   303,   304,   338,    13,    14,    63,   211,   212,   292,
     303,   304,   338,    13,    14,    63,   211,   212,   292,   303,
     304,   338,   300,     5,     5,     5,   411,   411,   410,     4,
       4,   410,     5,   300,     5,     5,     5,   411,   411,   410,
       4,     4,   410,     5,   411,     4,     4,   411,     4,     4,
     412,     5,   407,   400,   390,   390,   400,   390,     5,   395,
       5,   400,   392,     5,   400,   407,     5,   395,   390,   390,
     390,   390,   390,   390,   390,   390,   390,     4,     4,     5,
       4,     4,   390,   400,   390,     5,   395,   392,   407,   407,
     390,   399,   407,   407,   390,   407,   407,   390,   390,   390,
     390,   390,   390,   390,   390,   390,   390,    57,    68,    97,
     140,   316,   318,   374,   559,   560,   561,   573,   574,   390,
     390,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   400,     5,   390,   390,   390,   390,     4,     4,   407,
     408,     5,     5,   399,   390,     4,   407,   400,     4,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   395,   390,
     390,   390,   407,   390,   399,   390,   390,    11,     5,     5,
     390,   390,   390,   390,     5,   390,     4,   390,     4,   407,
     400,   390,   390,   408,   409,   390,     5,   390,   400,   402,
       5,     5,     5,     5,     5,   407,   409,   409,   409,   407,
     409,   408,   409,   409,   407,   409,   409,   409,   407,   409,
     409,   407,   400,   409,   407,   409,   409,   407,   409,   407,
       4,   400,   402,     5,   390,     4,   412,   411,     4,   411,
     411,     4,     4,   411,     4,   411,     5,     5,     5,   411,
     411,   410,     4,     4,     5,     5,     5,     5,   411,   411,
     410,     4,     4,     5,     5,     5,     5,   411,   411,   410,
       4,     4,     5,   411,   412,   412,   412,   412,   412,     4,
     412,   412,     4,   411,   411,   412,   412,   412,   412,   412,
       4,   412,   412,     4,   411,   411,     4,     4,     4,   401,
     409,     4,   400,   409,   390,   400,     4,   409,   409,   400,
       4,   390,   390,   390,   390,   390,   390,   390,   390,   390,
     390,   390,   400,   409,   390,   400,     4,   399,   399,   400,
     399,   399,   400,   400,   399,   399,   390,   390,   390,   390,
     390,   390,   395,   390,   390,   390,   387,   387,   387,   387,
     387,   387,   387,   560,   387,   395,   390,   390,   390,   390,
     395,   390,   390,   390,   390,   390,   390,   407,   390,   338,
     394,   395,   390,   390,   408,   392,   400,   400,   408,   407,
       4,   390,   399,   390,    61,   390,     5,     5,     4,     4,
     390,   390,     4,   390,     4,   405,   409,     5,   407,     4,
       5,     4,     5,   400,     5,   408,   409,   408,   408,   408,
       5,   407,     4,   390,   412,   411,   411,     4,   411,   412,
     412,   412,   412,   412,     4,   412,   412,   411,   412,   412,
     412,   412,   412,     4,   412,   412,   411,   412,   412,   412,
     412,   412,     4,   412,   412,   411,   412,   411,     4,   412,
     412,   411,     4,   412,   411,   407,   400,   409,     4,   407,
     390,   407,   390,   390,   390,   409,     4,   407,   390,   399,
     409,   390,   399,   409,   409,   400,   390,     4,   414,   414,
     390,   390,   414,   395,   414,   562,   400,   542,     5,     4,
       5,     5,     5,     4,   392,   395,   414,   414,   390,   390,
     395,   390,   390,   390,   390,   390,   399,   390,     5,   562,
     390,   414,   392,   563,   564,   407,   407,   392,   408,     4,
       5,   390,     5,     4,     4,     4,     4,     4,     4,   390,
       4,    32,   205,   312,   453,   400,     5,    32,   205,   312,
     416,   400,     4,   453,   390,   411,   411,   412,   411,   412,
     411,   412,   412,   411,   412,   411,   390,   409,   400,   400,
     390,   400,   390,   400,   400,   390,   400,   409,     4,   562,
     562,   394,   390,   562,     4,   562,   407,     5,     4,     4,
     562,   562,   394,   390,     4,   562,   562,   390,   400,   562,
     562,   562,   563,   570,   571,   561,   568,   569,   392,     4,
       5,     5,     4,     4,     4,   208,   336,   381,   390,   444,
     453,     4,   400,   453,     4,   412,   412,   412,   412,   412,
     401,   409,   409,   390,   409,     4,   409,   409,   390,   409,
     390,   562,   562,     4,   390,   562,     5,   390,   562,     4,
     390,   562,   407,   570,   572,   573,   387,   569,     5,     5,
     390,   445,   390,   445,   407,   409,     4,   400,   402,     4,
     395,   394,   390,   390,   394,   390,   400,   573,   392,     5,
       5,   390,   390,   390,   390,   416,     5,   400,   402,   407,
     400,   402,   562,   390,     4,   562,   390,   409,     5,     5,
     390,     5,   390,   407,   407,     4,   562,     4,     5,     5,
       5,   394,   394,   562,   562,   562
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
#line 495 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 496 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 498 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 499 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 501 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 508 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 514 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 515 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 516 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 520 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 529 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 533 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 536 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 50:
#line 541 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 52:
#line 543 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 54:
#line 545 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 56:
#line 547 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 61:
#line 554 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 62:
#line 555 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 63:
#line 558 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 559 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 65:
#line 560 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 561 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 562 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 563 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 564 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 565 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 566 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 567 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 568 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 571 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 75:
#line 573 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 76:
#line 574 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 575 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 576 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 578 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 80:
#line 579 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 580 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 581 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 584 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 84:
#line 585 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 586 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 86:
#line 587 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 87:
#line 588 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 88:
#line 591 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 89:
#line 592 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 90:
#line 595 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 91:
#line 596 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 597 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 93:
#line 600 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 94:
#line 603 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 606 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 610 "frame/parser.Y"
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
#line 622 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 98:
#line 629 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 636 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 100:
#line 643 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 101:
#line 644 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 102:
#line 645 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 103:
#line 646 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 104:
#line 647 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 105:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 106:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 107:
#line 652 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 108:
#line 653 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 109:
#line 654 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 110:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 111:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 112:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 113:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 114:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 115:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 116:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 117:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 118:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 119:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 120:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 121:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 122:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 123:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 124:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 125:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 126:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 127:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 128:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 129:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 130:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 131:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 132:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 133:
#line 680 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 134:
#line 681 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 135:
#line 684 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 136:
#line 685 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 137:
#line 686 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 138:
#line 687 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 139:
#line 688 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 140:
#line 689 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 141:
#line 692 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 142:
#line 693 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 694 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 144:
#line 695 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 145:
#line 696 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 146:
#line 697 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 147:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 148:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 149:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 150:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 151:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 152:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 153:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 154:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 155:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 156:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 157:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 158:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 159:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 160:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 161:
#line 714 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 162:
#line 715 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 163:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 164:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 165:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 166:
#line 721 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 167:
#line 722 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 723 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 169:
#line 724 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 170:
#line 725 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 171:
#line 728 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 172:
#line 729 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 173:
#line 730 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 731 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 175:
#line 732 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 733 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 177:
#line 734 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 178:
#line 735 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 179:
#line 738 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 180:
#line 739 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 740 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 182:
#line 743 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 183:
#line 744 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 745 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 185:
#line 746 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 186:
#line 749 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 187:
#line 750 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 751 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 189:
#line 754 "frame/parser.Y"
    {;}
    break;

  case 190:
#line 755 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 756 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 759 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 193:
#line 760 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 761 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 195:
#line 764 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 196:
#line 765 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 197:
#line 766 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 198:
#line 767 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 199:
#line 768 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 200:
#line 769 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 201:
#line 770 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 202:
#line 771 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 203:
#line 774 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 204:
#line 775 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 205:
#line 778 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 206:
#line 779 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 207:
#line 780 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 208:
#line 781 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 209:
#line 782 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 210:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 211:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 212:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 213:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 214:
#line 789 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 215:
#line 792 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 216:
#line 793 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 217:
#line 794 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 218:
#line 795 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 219:
#line 796 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 220:
#line 797 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 225:
#line 804 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 226:
#line 805 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 228:
#line 807 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 229:
#line 808 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 230:
#line 810 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 231:
#line 813 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 232:
#line 814 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 233:
#line 815 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 235:
#line 819 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 236:
#line 820 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 237:
#line 823 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 238:
#line 824 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 239:
#line 827 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 240:
#line 828 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 241:
#line 831 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 242:
#line 832 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 243:
#line 835 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 244:
#line 837 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 246:
#line 841 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 247:
#line 842 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 250:
#line 845 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 252:
#line 847 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 253:
#line 850 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 254:
#line 851 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 255:
#line 854 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 256:
#line 855 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 257:
#line 857 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 258:
#line 859 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 259:
#line 860 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 260:
#line 861 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 261:
#line 863 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 262:
#line 865 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 263:
#line 868 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 264:
#line 869 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 265:
#line 872 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 266:
#line 874 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 267:
#line 877 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 268:
#line 879 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 269:
#line 882 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 270:
#line 886 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 271:
#line 887 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 273:
#line 891 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 274:
#line 892 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 275:
#line 893 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 279:
#line 899 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 280:
#line 900 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 282:
#line 903 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 283:
#line 908 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 284:
#line 909 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 285:
#line 912 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 286:
#line 913 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 287:
#line 914 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 288:
#line 915 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 289:
#line 916 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 290:
#line 919 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 291:
#line 920 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 292:
#line 921 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 293:
#line 922 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 294:
#line 925 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 295:
#line 927 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 296:
#line 932 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 297:
#line 937 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 298:
#line 944 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 299:
#line 946 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 300:
#line 948 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 301:
#line 950 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 302:
#line 952 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 306:
#line 959 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 307:
#line 961 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 308:
#line 963 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 309:
#line 965 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 310:
#line 967 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 311:
#line 969 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 312:
#line 970 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 318:
#line 981 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 319:
#line 984 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 320:
#line 987 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 321:
#line 993 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 322:
#line 998 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 323:
#line 1001 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 324:
#line 1002 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 325:
#line 1005 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 326:
#line 1006 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 327:
#line 1008 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 328:
#line 1014 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 329:
#line 1015 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 330:
#line 1016 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 331:
#line 1017 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 332:
#line 1020 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 333:
#line 1021 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 334:
#line 1024 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 335:
#line 1025 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 336:
#line 1028 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 337:
#line 1029 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 338:
#line 1033 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 339:
#line 1035 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 340:
#line 1038 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 341:
#line 1040 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 342:
#line 1043 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 344:
#line 1045 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 345:
#line 1046 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 346:
#line 1047 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 347:
#line 1050 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 348:
#line 1052 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 349:
#line 1053 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 350:
#line 1054 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 351:
#line 1055 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 352:
#line 1059 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 353:
#line 1061 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 354:
#line 1062 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 355:
#line 1063 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 356:
#line 1066 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 357:
#line 1068 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 358:
#line 1070 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 359:
#line 1072 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 360:
#line 1075 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 361:
#line 1078 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 362:
#line 1079 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 363:
#line 1080 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 364:
#line 1081 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 365:
#line 1084 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 366:
#line 1085 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 367:
#line 1088 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 368:
#line 1091 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 369:
#line 1092 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 383:
#line 1106 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 386:
#line 1109 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 387:
#line 1110 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 393:
#line 1116 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 394:
#line 1117 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 399:
#line 1122 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 400:
#line 1123 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 402:
#line 1126 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 404:
#line 1128 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 406:
#line 1130 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 408:
#line 1132 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 409:
#line 1134 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 412:
#line 1137 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 413:
#line 1141 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 414:
#line 1143 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 415:
#line 1147 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 416:
#line 1149 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 417:
#line 1152 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 418:
#line 1153 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 419:
#line 1154 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 420:
#line 1155 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 421:
#line 1156 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 422:
#line 1157 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 424:
#line 1159 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 425:
#line 1162 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 426:
#line 1163 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 427:
#line 1164 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 428:
#line 1167 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 429:
#line 1170 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 430:
#line 1172 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 431:
#line 1174 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 432:
#line 1175 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 433:
#line 1176 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 435:
#line 1178 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 437:
#line 1181 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 438:
#line 1187 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 439:
#line 1188 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 440:
#line 1191 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 441:
#line 1192 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 442:
#line 1193 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 443:
#line 1196 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 444:
#line 1197 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 446:
#line 1203 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 447:
#line 1205 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 448:
#line 1207 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 449:
#line 1210 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 451:
#line 1212 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 452:
#line 1216 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 453:
#line 1220 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 455:
#line 1222 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 456:
#line 1223 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 457:
#line 1224 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 458:
#line 1225 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 459:
#line 1226 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 461:
#line 1228 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 462:
#line 1229 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 463:
#line 1232 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 464:
#line 1233 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 465:
#line 1234 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 466:
#line 1237 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 467:
#line 1238 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 468:
#line 1242 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 469:
#line 1244 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 470:
#line 1252 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 471:
#line 1254 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 472:
#line 1256 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 473:
#line 1259 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 474:
#line 1261 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 475:
#line 1262 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 476:
#line 1265 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 477:
#line 1268 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 478:
#line 1270 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 479:
#line 1274 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 480:
#line 1276 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 481:
#line 1279 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 482:
#line 1283 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 483:
#line 1284 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 484:
#line 1286 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 485:
#line 1289 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 486:
#line 1290 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 488:
#line 1294 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 489:
#line 1295 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 490:
#line 1296 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 491:
#line 1299 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 492:
#line 1301 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 493:
#line 1302 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 495:
#line 1304 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 499:
#line 1308 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 500:
#line 1309 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 501:
#line 1310 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 502:
#line 1312 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 504:
#line 1314 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 505:
#line 1317 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 506:
#line 1319 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 507:
#line 1321 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 508:
#line 1322 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 509:
#line 1323 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 510:
#line 1324 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 511:
#line 1327 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 512:
#line 1328 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 513:
#line 1332 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 514:
#line 1334 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 515:
#line 1337 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 516:
#line 1340 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 517:
#line 1341 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 518:
#line 1343 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 519:
#line 1345 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 520:
#line 1347 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 521:
#line 1350 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 522:
#line 1351 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 523:
#line 1352 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 524:
#line 1355 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 525:
#line 1356 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 526:
#line 1357 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 527:
#line 1358 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 528:
#line 1359 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 529:
#line 1360 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 530:
#line 1363 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 531:
#line 1364 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 532:
#line 1365 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 533:
#line 1366 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 534:
#line 1367 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 535:
#line 1368 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 536:
#line 1369 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 537:
#line 1372 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 538:
#line 1373 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 539:
#line 1376 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 540:
#line 1379 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 541:
#line 1380 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 542:
#line 1381 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 543:
#line 1384 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 544:
#line 1387 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 545:
#line 1388 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 546:
#line 1389 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 547:
#line 1392 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 548:
#line 1393 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 549:
#line 1394 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 550:
#line 1397 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 551:
#line 1398 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 552:
#line 1399 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 553:
#line 1400 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 554:
#line 1401 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 555:
#line 1402 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 560:
#line 1409 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 561:
#line 1410 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 563:
#line 1412 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 564:
#line 1415 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 565:
#line 1416 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 566:
#line 1417 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 568:
#line 1421 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 569:
#line 1422 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 570:
#line 1425 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 571:
#line 1426 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 572:
#line 1429 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 573:
#line 1430 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 574:
#line 1433 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 575:
#line 1434 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 576:
#line 1437 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 577:
#line 1438 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 578:
#line 1441 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 580:
#line 1443 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 581:
#line 1446 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 582:
#line 1447 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 584:
#line 1451 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 585:
#line 1455 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 586:
#line 1458 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 587:
#line 1465 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 588:
#line 1466 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 589:
#line 1469 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 590:
#line 1470 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 593:
#line 1473 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 594:
#line 1474 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 595:
#line 1475 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 596:
#line 1476 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 598:
#line 1478 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 599:
#line 1479 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 600:
#line 1480 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 602:
#line 1482 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 603:
#line 1483 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 604:
#line 1484 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 605:
#line 1485 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 607:
#line 1489 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 608:
#line 1492 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 609:
#line 1493 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 610:
#line 1496 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 611:
#line 1497 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 612:
#line 1498 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 613:
#line 1499 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 614:
#line 1502 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 615:
#line 1503 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 616:
#line 1504 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 617:
#line 1505 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 618:
#line 1508 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 619:
#line 1509 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 620:
#line 1510 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 621:
#line 1511 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 622:
#line 1512 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 623:
#line 1513 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 624:
#line 1516 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 625:
#line 1517 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 626:
#line 1518 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 629:
#line 1522 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 630:
#line 1523 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 631:
#line 1526 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 632:
#line 1529 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 633:
#line 1530 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 634:
#line 1534 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 635:
#line 1536 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 636:
#line 1537 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 643:
#line 1549 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 644:
#line 1551 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 645:
#line 1553 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 646:
#line 1554 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 647:
#line 1556 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 648:
#line 1558 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 649:
#line 1560 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1562 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1564 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 655:
#line 1570 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 656:
#line 1571 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 657:
#line 1572 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 658:
#line 1573 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 659:
#line 1574 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 660:
#line 1576 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 661:
#line 1577 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1578 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1579 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 664:
#line 1582 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 665:
#line 1586 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 666:
#line 1588 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 667:
#line 1590 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 668:
#line 1592 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 669:
#line 1594 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 670:
#line 1596 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 671:
#line 1598 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 672:
#line 1600 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 673:
#line 1603 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1605 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1607 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 685:
#line 1619 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 686:
#line 1620 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 687:
#line 1621 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 688:
#line 1622 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 689:
#line 1623 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 690:
#line 1624 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 691:
#line 1626 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 692:
#line 1628 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 693:
#line 1629 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1630 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1631 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 696:
#line 1634 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1635 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 698:
#line 1636 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 699:
#line 1637 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1638 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1640 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 702:
#line 1641 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1642 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1643 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 710:
#line 1654 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 711:
#line 1657 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 712:
#line 1660 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 713:
#line 1663 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 714:
#line 1666 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 715:
#line 1669 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 716:
#line 1672 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1675 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1678 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 719:
#line 1683 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1686 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1689 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 722:
#line 1692 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 723:
#line 1695 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 724:
#line 1698 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 725:
#line 1701 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 726:
#line 1704 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 727:
#line 1707 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 728:
#line 1710 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 729:
#line 1713 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 730:
#line 1718 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 731:
#line 1721 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 732:
#line 1724 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 733:
#line 1727 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 734:
#line 1730 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 735:
#line 1733 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 736:
#line 1736 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1739 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 738:
#line 1742 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 739:
#line 1747 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 740:
#line 1749 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 741:
#line 1751 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 742:
#line 1753 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 743:
#line 1755 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 744:
#line 1757 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 745:
#line 1762 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1764 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1766 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 748:
#line 1770 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 749:
#line 1773 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 750:
#line 1776 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 751:
#line 1779 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 752:
#line 1782 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 753:
#line 1785 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1788 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 755:
#line 1791 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 756:
#line 1794 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1797 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1800 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 759:
#line 1804 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 760:
#line 1805 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 761:
#line 1806 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 762:
#line 1807 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 763:
#line 1808 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 764:
#line 1809 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 765:
#line 1811 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 766:
#line 1813 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 767:
#line 1814 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 768:
#line 1815 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 769:
#line 1816 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 770:
#line 1819 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 771:
#line 1820 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 772:
#line 1821 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 773:
#line 1822 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 774:
#line 1823 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 775:
#line 1825 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 776:
#line 1826 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 777:
#line 1827 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 778:
#line 1828 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 779:
#line 1832 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 780:
#line 1834 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 781:
#line 1835 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 782:
#line 1837 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 783:
#line 1839 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 784:
#line 1841 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 785:
#line 1844 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 786:
#line 1845 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 787:
#line 1848 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 788:
#line 1849 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 789:
#line 1850 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 790:
#line 1853 "frame/parser.Y"
    {;}
    break;

  case 791:
#line 1856 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 792:
#line 1857 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 793:
#line 1858 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 794:
#line 1859 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 795:
#line 1860 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 796:
#line 1861 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 797:
#line 1862 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 798:
#line 1866 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 800:
#line 1874 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 801:
#line 1875 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 802:
#line 1877 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 803:
#line 1879 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 804:
#line 1880 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 805:
#line 1881 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 807:
#line 1882 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 810:
#line 1885 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 811:
#line 1886 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 812:
#line 1888 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 813:
#line 1890 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 814:
#line 1892 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 815:
#line 1895 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 816:
#line 1897 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 817:
#line 1898 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 818:
#line 1900 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 819:
#line 1903 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 820:
#line 1906 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 821:
#line 1910 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 822:
#line 1913 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 823:
#line 1916 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 824:
#line 1919 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 825:
#line 1923 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 826:
#line 1927 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 827:
#line 1932 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 828:
#line 1936 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 829:
#line 1938 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 830:
#line 1939 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 831:
#line 1941 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 832:
#line 1943 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 833:
#line 1945 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 834:
#line 1947 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 835:
#line 1948 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 836:
#line 1950 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 837:
#line 1952 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 838:
#line 1955 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 839:
#line 1959 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 840:
#line 1963 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 841:
#line 1965 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 842:
#line 1967 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 843:
#line 1969 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 844:
#line 1971 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 845:
#line 1973 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 846:
#line 1975 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 847:
#line 1977 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 848:
#line 1979 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 849:
#line 1981 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 850:
#line 1983 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 851:
#line 1985 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 852:
#line 1987 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 853:
#line 1989 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 854:
#line 1990 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 855:
#line 1992 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 856:
#line 1994 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 857:
#line 1995 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 858:
#line 1996 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 859:
#line 1998 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 860:
#line 2000 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 861:
#line 2001 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 862:
#line 2002 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 863:
#line 2003 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 864:
#line 2005 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 865:
#line 2007 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 866:
#line 2011 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 867:
#line 2014 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 868:
#line 2017 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 869:
#line 2021 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 870:
#line 2025 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 871:
#line 2030 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 872:
#line 2034 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 873:
#line 2035 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 874:
#line 2036 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 875:
#line 2038 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 876:
#line 2040 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 877:
#line 2044 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 878:
#line 2045 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 879:
#line 2046 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 880:
#line 2048 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 881:
#line 2051 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 882:
#line 2054 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 883:
#line 2057 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 884:
#line 2058 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 885:
#line 2062 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 886:
#line 2066 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 887:
#line 2068 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 888:
#line 2069 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 889:
#line 2071 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 890:
#line 2074 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 891:
#line 2077 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 892:
#line 2078 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 893:
#line 2080 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 894:
#line 2081 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 895:
#line 2082 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 896:
#line 2084 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 897:
#line 2085 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 898:
#line 2087 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 899:
#line 2090 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 900:
#line 2093 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 901:
#line 2095 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 902:
#line 2096 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 906:
#line 2101 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 907:
#line 2102 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 908:
#line 2104 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 909:
#line 2106 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 910:
#line 2108 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 911:
#line 2109 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 915:
#line 2115 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 916:
#line 2116 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 917:
#line 2117 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 918:
#line 2118 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 919:
#line 2119 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 920:
#line 2120 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 921:
#line 2121 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 922:
#line 2122 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 923:
#line 2123 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 924:
#line 2124 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 925:
#line 2126 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 926:
#line 2128 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 927:
#line 2129 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 928:
#line 2130 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 929:
#line 2131 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 930:
#line 2132 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 931:
#line 2134 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 932:
#line 2135 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 933:
#line 2136 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 934:
#line 2137 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 935:
#line 2138 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 936:
#line 2140 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 937:
#line 2141 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 938:
#line 2142 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 939:
#line 2143 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 940:
#line 2144 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 941:
#line 2145 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 942:
#line 2148 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 943:
#line 2149 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 944:
#line 2150 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 945:
#line 2151 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 946:
#line 2152 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 947:
#line 2153 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 948:
#line 2154 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 949:
#line 2155 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 950:
#line 2156 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 951:
#line 2157 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 952:
#line 2158 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 953:
#line 2159 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 954:
#line 2160 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 955:
#line 2161 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 956:
#line 2162 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 957:
#line 2163 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 958:
#line 2164 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 959:
#line 2165 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 960:
#line 2166 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 961:
#line 2167 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 962:
#line 2168 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 963:
#line 2171 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 964:
#line 2172 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 965:
#line 2173 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 966:
#line 2174 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 967:
#line 2175 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 968:
#line 2177 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 969:
#line 2187 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 970:
#line 2195 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 971:
#line 2204 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 972:
#line 2212 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 973:
#line 2219 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 974:
#line 2226 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 975:
#line 2234 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 976:
#line 2242 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 977:
#line 2247 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 978:
#line 2252 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 979:
#line 2257 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 980:
#line 2262 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 981:
#line 2267 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 982:
#line 2272 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 983:
#line 2277 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 984:
#line 2286 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 985:
#line 2296 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 986:
#line 2306 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 987:
#line 2315 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 988:
#line 2323 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 989:
#line 2333 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 990:
#line 2343 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 991:
#line 2353 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 992:
#line 2365 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 993:
#line 2374 "frame/parser.Y"
    {fr->createCompositeCmd(
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 995:
#line 2382 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 996:
#line 2384 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 997:
#line 2386 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 998:
#line 2391 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 999:
#line 2394 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1000:
#line 2395 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1001:
#line 2396 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1002:
#line 2403 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1003:
#line 2405 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1004:
#line 2406 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1005:
#line 2409 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1006:
#line 2410 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1007:
#line 2411 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1008:
#line 2412 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1009:
#line 2413 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1010:
#line 2414 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1011:
#line 2415 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1013:
#line 2419 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1014:
#line 2420 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1015:
#line 2421 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1016:
#line 2422 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1017:
#line 2423 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1018:
#line 2426 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1019:
#line 2428 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1020:
#line 2430 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1021:
#line 2432 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1022:
#line 2434 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1023:
#line 2436 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1024:
#line 2438 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1025:
#line 2439 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1026:
#line 2440 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1027:
#line 2442 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1028:
#line 2444 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1029:
#line 2447 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1030:
#line 2449 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1031:
#line 2450 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1032:
#line 2451 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1033:
#line 2453 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1034:
#line 2455 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1035:
#line 2458 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1036:
#line 2461 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1037:
#line 2462 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1038:
#line 2463 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1039:
#line 2464 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1040:
#line 2466 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1041:
#line 2467 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1042:
#line 2468 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1043:
#line 2469 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1044:
#line 2470 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1045:
#line 2472 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1046:
#line 2474 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1047:
#line 2476 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1048:
#line 2478 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1049:
#line 2480 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1050:
#line 2481 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1051:
#line 2483 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1052:
#line 2485 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1053:
#line 2487 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1054:
#line 2488 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1055:
#line 2489 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1056:
#line 2491 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1057:
#line 2493 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1058:
#line 2496 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1059:
#line 2499 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1060:
#line 2500 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1061:
#line 2502 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1062:
#line 2505 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1063:
#line 2508 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1064:
#line 2509 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1065:
#line 2510 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1066:
#line 2511 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1067:
#line 2513 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1068:
#line 2515 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1069:
#line 2517 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1070:
#line 2518 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1071:
#line 2520 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1072:
#line 2521 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1073:
#line 2522 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1074:
#line 2523 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1075:
#line 2524 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1076:
#line 2526 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1077:
#line 2528 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1078:
#line 2530 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1079:
#line 2532 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1081:
#line 2534 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1082:
#line 2535 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1083:
#line 2537 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1084:
#line 2539 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1085:
#line 2540 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1086:
#line 2541 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1088:
#line 2543 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1090:
#line 2547 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1091:
#line 2548 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1092:
#line 2549 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1093:
#line 2550 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1094:
#line 2551 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1095:
#line 2552 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1096:
#line 2554 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1097:
#line 2555 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1098:
#line 2557 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1099:
#line 2560 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1100:
#line 2561 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1101:
#line 2562 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1102:
#line 2563 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1103:
#line 2566 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1104:
#line 2567 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1105:
#line 2570 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1106:
#line 2571 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1107:
#line 2574 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1108:
#line 2575 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1109:
#line 2578 "frame/parser.Y"
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
#line 2591 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1111:
#line 2592 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1112:
#line 2596 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1113:
#line 2597 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1114:
#line 2601 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1115:
#line 2602 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1116:
#line 2607 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1117:
#line 2611 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1118:
#line 2616 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1119:
#line 2618 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1120:
#line 2621 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1121:
#line 2623 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1122:
#line 2626 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1123:
#line 2628 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1124:
#line 2631 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1125:
#line 2632 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1126:
#line 2633 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1127:
#line 2634 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1128:
#line 2635 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1129:
#line 2636 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1130:
#line 2638 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1133:
#line 2645 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1134:
#line 2646 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1135:
#line 2647 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1136:
#line 2648 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1137:
#line 2649 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1138:
#line 2650 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1141:
#line 2655 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1142:
#line 2656 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1143:
#line 2657 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1144:
#line 2658 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1145:
#line 2659 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1146:
#line 2660 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1147:
#line 2661 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1148:
#line 2662 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1149:
#line 2663 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1150:
#line 2664 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1151:
#line 2665 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1152:
#line 2666 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1155:
#line 2673 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1156:
#line 2674 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1158:
#line 2678 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1159:
#line 2680 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1160:
#line 2681 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1161:
#line 2684 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1162:
#line 2685 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1163:
#line 2686 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1164:
#line 2687 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1165:
#line 2688 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1166:
#line 2689 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1167:
#line 2692 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1168:
#line 2693 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1171:
#line 2701 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1172:
#line 2704 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1173:
#line 2705 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1177:
#line 2712 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1178:
#line 2715 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1179:
#line 2719 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1180:
#line 2720 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1181:
#line 2721 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1182:
#line 2722 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1183:
#line 2723 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1184:
#line 2724 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1185:
#line 2725 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1186:
#line 2726 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1187:
#line 2727 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1188:
#line 2728 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1189:
#line 2729 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1190:
#line 2730 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1191:
#line 2732 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1192:
#line 2733 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1193:
#line 2734 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1194:
#line 2735 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1195:
#line 2736 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1196:
#line 2737 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1197:
#line 2738 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1198:
#line 2739 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1199:
#line 2740 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1200:
#line 2741 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1201:
#line 2742 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1202:
#line 2743 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1203:
#line 2744 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1204:
#line 2745 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1205:
#line 2748 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1206:
#line 2749 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1207:
#line 2750 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1208:
#line 2751 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1209:
#line 2752 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2753 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1211:
#line 2754 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1212:
#line 2755 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1213:
#line 2761 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1214:
#line 2762 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1215:
#line 2763 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1216:
#line 2764 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1217:
#line 2768 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1218:
#line 2769 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1219:
#line 2771 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1220:
#line 2776 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1222:
#line 2778 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1224:
#line 2780 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1225:
#line 2783 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1226:
#line 2785 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1227:
#line 2790 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1228:
#line 2793 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1229:
#line 2794 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1230:
#line 2795 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1231:
#line 2798 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1232:
#line 2800 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1233:
#line 2804 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1234:
#line 2805 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1235:
#line 2809 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2810 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1237:
#line 2811 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1238:
#line 2812 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1239:
#line 2818 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1240:
#line 2819 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1241:
#line 2825 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1242:
#line 2826 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1243:
#line 2827 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1244:
#line 2828 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1247:
#line 2836 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1248:
#line 2838 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1249:
#line 2839 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1250:
#line 2840 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1251:
#line 2844 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1252:
#line 2845 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1253:
#line 2846 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1254:
#line 2847 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1255:
#line 2850 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1256:
#line 2851 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1257:
#line 2852 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1258:
#line 2855 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1259:
#line 2856 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1260:
#line 2857 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1261:
#line 2860 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1262:
#line 2861 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1263:
#line 2862 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1264:
#line 2866 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1265:
#line 2869 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1266:
#line 2870 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1267:
#line 2871 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1268:
#line 2872 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1269:
#line 2873 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1270:
#line 2876 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1271:
#line 2877 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1272:
#line 2878 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1273:
#line 2879 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1274:
#line 2880 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1275:
#line 2881 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1276:
#line 2884 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1277:
#line 2885 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1279:
#line 2887 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1280:
#line 2888 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1281:
#line 2891 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1282:
#line 2892 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1283:
#line 2893 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1289:
#line 2901 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1290:
#line 2904 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1291:
#line 2905 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1292:
#line 2906 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1293:
#line 2910 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1294:
#line 2912 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1295:
#line 2914 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1312:
#line 2935 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1313:
#line 2936 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1314:
#line 2937 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1315:
#line 2940 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1316:
#line 2941 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1317:
#line 2942 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1318:
#line 2945 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1319:
#line 2946 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1320:
#line 2947 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1321:
#line 2950 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1322:
#line 2951 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1323:
#line 2952 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1325:
#line 2956 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1326:
#line 2957 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1327:
#line 2958 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1328:
#line 2961 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1329:
#line 2962 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1330:
#line 2963 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1331:
#line 2967 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1332:
#line 2969 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1333:
#line 2971 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1334:
#line 2974 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1335:
#line 2975 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1336:
#line 2976 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1337:
#line 2979 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1338:
#line 2980 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1339:
#line 2981 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1340:
#line 2985 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1341:
#line 2987 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1342:
#line 2989 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1343:
#line 2992 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1344:
#line 2993 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1345:
#line 2994 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1346:
#line 2997 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1347:
#line 2998 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1348:
#line 2999 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1349:
#line 3003 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1350:
#line 3005 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1351:
#line 3007 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1352:
#line 3010 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1353:
#line 3011 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1354:
#line 3012 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1355:
#line 3015 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1356:
#line 3016 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1357:
#line 3017 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1358:
#line 3020 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1359:
#line 3021 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1360:
#line 3022 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1361:
#line 3026 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1362:
#line 3028 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1363:
#line 3030 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1364:
#line 3034 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1365:
#line 3038 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1366:
#line 3040 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1367:
#line 3044 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1368:
#line 3047 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1369:
#line 3048 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1370:
#line 3049 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1371:
#line 3050 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1372:
#line 3053 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1373:
#line 3055 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1374:
#line 3057 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1375:
#line 3060 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1377:
#line 3064 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1378:
#line 3065 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1379:
#line 3066 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1380:
#line 3069 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1381:
#line 3070 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1382:
#line 3074 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1384:
#line 3076 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1387:
#line 3081 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1388:
#line 3082 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1389:
#line 3083 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1390:
#line 3086 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1391:
#line 3087 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1392:
#line 3088 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1393:
#line 3091 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1394:
#line 3093 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1395:
#line 3098 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1396:
#line 3099 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1397:
#line 3102 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1398:
#line 3109 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1399:
#line 3111 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1400:
#line 3113 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1401:
#line 3118 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1403:
#line 3122 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1404:
#line 3123 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1405:
#line 3124 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1406:
#line 3126 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1407:
#line 3128 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1408:
#line 3133 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 11827 "frame/parser.C"
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


#line 3137 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

