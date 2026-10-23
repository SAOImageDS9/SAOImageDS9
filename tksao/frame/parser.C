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
     AREA_ = 283,
     ASINH_ = 284,
     AST_ = 285,
     AUTO_ = 286,
     AUX_ = 287,
     AVERAGE_ = 288,
     AXES_ = 289,
     AZIMUTH_ = 290,
     B1950_ = 291,
     BACK_ = 292,
     BACKGROUND_ = 293,
     BASE_ = 294,
     BBOX_ = 295,
     BEGIN_ = 296,
     BG_ = 297,
     BIG_ = 298,
     BIGENDIAN_ = 299,
     BIN_ = 300,
     BITPIX_ = 301,
     BLEND_ = 302,
     BLOCK_ = 303,
     BORDER_ = 304,
     BOTTOM_ = 305,
     BOX_ = 306,
     BOXANNULUS_ = 307,
     BOXCAR_ = 308,
     BOXCIRCLE_ = 309,
     BPANDA_ = 310,
     BUFFER_ = 311,
     BW_ = 312,
     CALLBACK_ = 313,
     CANVAS_ = 314,
     CATALOG_ = 315,
     CELESTIAL_ = 316,
     CENTER_ = 317,
     CENTROID_ = 318,
     CHANNEL_ = 319,
     CIRCLE_ = 320,
     CIAO_ = 321,
     CLEAR_ = 322,
     CLIP_ = 323,
     COLOR_ = 324,
     COLORBURN_ = 325,
     COLORDODGE_ = 326,
     COLORBAR_ = 327,
     COLORMAP_ = 328,
     COLORSCALE_ = 329,
     COLORSPACE_ = 330,
     COLS_ = 331,
     COLUMN_ = 332,
     COMMAND_ = 333,
     COMPASS_ = 334,
     COMPOSITE_ = 335,
     COMPRESS_ = 336,
     CONTOUR_ = 337,
     CONTRAST_ = 338,
     COORDINATES_ = 339,
     COPY_ = 340,
     COUNT_ = 341,
     CPANDA_ = 342,
     CREATE_ = 343,
     CROP_ = 344,
     CROSS_ = 345,
     CROSSHAIR_ = 346,
     CUBE_ = 347,
     CURSOR_ = 348,
     CUT_ = 349,
     CMYK_ = 350,
     DARKEN_ = 351,
     DASH_ = 352,
     DASHLIST_ = 353,
     DATA_ = 354,
     DATAMIN_ = 355,
     DATASEC_ = 356,
     DEBUG_ = 357,
     DEGREES_ = 358,
     DEFAULT_ = 359,
     DELETE_ = 360,
     DEPTH_ = 361,
     DETECTOR_ = 362,
     DIAMOND_ = 363,
     DIFFERENCE_ = 364,
     DIM_ = 365,
     DOWN_ = 366,
     DS9_ = 367,
     EDIT_ = 368,
     ECLIPTIC_ = 369,
     ELEVATION_ = 370,
     ELLIPTIC_ = 371,
     ELLIPSE_ = 372,
     ELLIPSEANNULUS_ = 373,
     END_ = 374,
     ENVI_ = 375,
     EPANDA_ = 376,
     EPSILON_ = 377,
     EQUATORIAL_ = 378,
     ERASE_ = 379,
     EXCLUSION_ = 380,
     EXT_ = 381,
     FADE_ = 382,
     FACTOR_ = 383,
     FALSE_ = 384,
     FILE_ = 385,
     FILL_ = 386,
     FILTER_ = 387,
     FIRST_ = 388,
     FIP_ = 389,
     FIT_ = 390,
     FITS_ = 391,
     FITSY_ = 392,
     FIXED_ = 393,
     FK4_ = 394,
     FK5_ = 395,
     FONT_ = 396,
     FORMAT_ = 397,
     FOOTPRINT_ = 398,
     FROM_ = 399,
     FRONT_ = 400,
     FULL_ = 401,
     FUNCTION_ = 402,
     GALACTIC_ = 403,
     GAUSSIAN_ = 404,
     GET_ = 405,
     GLOBAL_ = 406,
     GRAPHICS_ = 407,
     GRAY_ = 408,
     GRID_ = 409,
     GZ_ = 410,
     HANDLE_ = 411,
     HARDLIGHT_ = 412,
     HAS_ = 413,
     HEAD_ = 414,
     HEADER_ = 415,
     HEIGHT_ = 416,
     HIDE_ = 417,
     HIGHLITE_ = 418,
     HISTEQU_ = 419,
     HISTOGRAM_ = 420,
     HORIZONTAL_ = 421,
     HUE_ = 422,
     HSV_ = 423,
     HLS_ = 424,
     ICRS_ = 425,
     ID_ = 426,
     IIS_ = 427,
     IMAGE_ = 428,
     INCLUDE_ = 429,
     INCR_ = 430,
     INFO_ = 431,
     ITERATION_ = 432,
     IRAF_ = 433,
     IRAFMIN_ = 434,
     J2000_ = 435,
     KEY_ = 436,
     KEYWORD_ = 437,
     LABEL_ = 438,
     LAYER_ = 439,
     LAYERNO_ = 440,
     LAST_ = 441,
     LENGTH_ = 442,
     LEVEL_ = 443,
     LIGHTEN_ = 444,
     LITTLE_ = 445,
     LITTLEENDIAN_ = 446,
     LINE_ = 447,
     LINEAR_ = 448,
     LIST_ = 449,
     LOAD_ = 450,
     LOCAL_ = 451,
     LOG_ = 452,
     LUMINOSITY_ = 453,
     MACOSX_ = 454,
     MAGNIFIER_ = 455,
     MATCH_ = 456,
     MAP_ = 457,
     MARK_ = 458,
     MARKER_ = 459,
     MASK_ = 460,
     MEDIAN_ = 461,
     MESSAGE_ = 462,
     METHOD_ = 463,
     MINMAX_ = 464,
     MINOR_ = 465,
     MIP_ = 466,
     MMAP_ = 467,
     MMAPINCR_ = 468,
     MOSAIC_ = 469,
     MODE_ = 470,
     MOTION_ = 471,
     MULTICOLOR_ = 472,
     MULTIPLY_ = 473,
     MOVE_ = 474,
     NAME_ = 475,
     NAN_ = 476,
     NATIVE_ = 477,
     NAXES_ = 478,
     NEW_ = 479,
     NEXT_ = 480,
     NO_ = 481,
     NONE_ = 482,
     NORMAL_ = 483,
     NONNAN_ = 484,
     NONZERO_ = 485,
     NOW_ = 486,
     NRRD_ = 487,
     NUMBER_ = 488,
     OBJECT_ = 489,
     OFF_ = 490,
     ON_ = 491,
     ONLY_ = 492,
     OPTION_ = 493,
     ORIENT_ = 494,
     OVERLAY_ = 495,
     PAN_ = 496,
     PANNER_ = 497,
     PARSER_ = 498,
     PASTE_ = 499,
     PERF_ = 500,
     PHOTO_ = 501,
     PHYSICAL_ = 502,
     PIXEL_ = 503,
     PLOT2D_ = 504,
     PLOT3D_ = 505,
     POINT_ = 506,
     POINTER_ = 507,
     POLYGON_ = 508,
     POSTSCRIPT_ = 509,
     POW_ = 510,
     PRECISION_ = 511,
     PRINT_ = 512,
     PRESERVE_ = 513,
     PROJECTION_ = 514,
     PROPERTY_ = 515,
     PUBLICATION_ = 516,
     PROS_ = 517,
     QUERY_ = 518,
     RADIAL_ = 519,
     RADIUS_ = 520,
     RANGE_ = 521,
     REGION_ = 522,
     REPLACE_ = 523,
     RESAMPLE_ = 524,
     RESCAN_ = 525,
     RESET_ = 526,
     RESOLUTION_ = 527,
     REVEAL_ = 528,
     RGB_ = 529,
     ROOT_ = 530,
     ROTATE_ = 531,
     RULER_ = 532,
     SAMPLE_ = 533,
     SAOIMAGE_ = 534,
     SAOTNG_ = 535,
     SAVE_ = 536,
     SATURATION_ = 537,
     SCALE_ = 538,
     SCAN_ = 539,
     SCIENTIFIC_ = 540,
     SCOPE_ = 541,
     SCREEN_ = 542,
     SEGMENT_ = 543,
     SELECT_ = 544,
     SET_ = 545,
     SEXAGESIMAL_ = 546,
     SHAPE_ = 547,
     SHADE_ = 548,
     SHARED_ = 549,
     SHIFT_ = 550,
     SHMID_ = 551,
     SHOW_ = 552,
     SIGMA_ = 553,
     SINH_ = 554,
     SIZE_ = 555,
     SLICE_ = 556,
     SMMAP_ = 557,
     SMOOTH_ = 558,
     SOFTLIGHT_ = 559,
     SOCKET_ = 560,
     SOCKETGZ_ = 561,
     SOURCE_ = 562,
     SQRT_ = 563,
     SQUARED_ = 564,
     SSHARED_ = 565,
     STATS_ = 566,
     STATUS_ = 567,
     STRENGTH_ = 568,
     SUM_ = 569,
     SYNC_ = 570,
     SYSTEM_ = 571,
     TABLE_ = 572,
     TAG_ = 573,
     TEMPLATE_ = 574,
     TEXT_ = 575,
     THREADS_ = 576,
     THREED_ = 577,
     THRESHOLD_ = 578,
     THICK_ = 579,
     TOP_ = 580,
     TRANSPARENCY_ = 581,
     TO_ = 582,
     TOGGLE_ = 583,
     TOPHAT_ = 584,
     TRUE_ = 585,
     TYPE_ = 586,
     UNDO_ = 587,
     UNHIGHLITE_ = 588,
     UNLOAD_ = 589,
     UNSELECT_ = 590,
     UPDATE_ = 591,
     UP_ = 592,
     USER_ = 593,
     VALUE_ = 594,
     VAR_ = 595,
     VIEW_ = 596,
     VECTOR_ = 597,
     VERSION_ = 598,
     VERTEX_ = 599,
     VERTICAL_ = 600,
     WARP_ = 601,
     WCS_ = 602,
     WCSA_ = 603,
     WCSB_ = 604,
     WCSC_ = 605,
     WCSD_ = 606,
     WCSE_ = 607,
     WCSF_ = 608,
     WCSG_ = 609,
     WCSH_ = 610,
     WCSI_ = 611,
     WCSJ_ = 612,
     WCSK_ = 613,
     WCSL_ = 614,
     WCSM_ = 615,
     WCSN_ = 616,
     WCSO_ = 617,
     WCSP_ = 618,
     WCSQ_ = 619,
     WCSR_ = 620,
     WCSS_ = 621,
     WCST_ = 622,
     WCSU_ = 623,
     WCSV_ = 624,
     WCSW_ = 625,
     WCSX_ = 626,
     WCSY_ = 627,
     WCSZ_ = 628,
     WCS0_ = 629,
     WFPC2_ = 630,
     WIDTH_ = 631,
     WIN32_ = 632,
     XML_ = 633,
     XY_ = 634,
     YES_ = 635,
     ZERO_ = 636,
     ZMAX_ = 637,
     ZSCALE_ = 638,
     PIXMASK_ = 639,
     ZOOM_ = 640,
     FIELDS_ = 641
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
#define AREA_ 283
#define ASINH_ 284
#define AST_ 285
#define AUTO_ 286
#define AUX_ 287
#define AVERAGE_ 288
#define AXES_ 289
#define AZIMUTH_ 290
#define B1950_ 291
#define BACK_ 292
#define BACKGROUND_ 293
#define BASE_ 294
#define BBOX_ 295
#define BEGIN_ 296
#define BG_ 297
#define BIG_ 298
#define BIGENDIAN_ 299
#define BIN_ 300
#define BITPIX_ 301
#define BLEND_ 302
#define BLOCK_ 303
#define BORDER_ 304
#define BOTTOM_ 305
#define BOX_ 306
#define BOXANNULUS_ 307
#define BOXCAR_ 308
#define BOXCIRCLE_ 309
#define BPANDA_ 310
#define BUFFER_ 311
#define BW_ 312
#define CALLBACK_ 313
#define CANVAS_ 314
#define CATALOG_ 315
#define CELESTIAL_ 316
#define CENTER_ 317
#define CENTROID_ 318
#define CHANNEL_ 319
#define CIRCLE_ 320
#define CIAO_ 321
#define CLEAR_ 322
#define CLIP_ 323
#define COLOR_ 324
#define COLORBURN_ 325
#define COLORDODGE_ 326
#define COLORBAR_ 327
#define COLORMAP_ 328
#define COLORSCALE_ 329
#define COLORSPACE_ 330
#define COLS_ 331
#define COLUMN_ 332
#define COMMAND_ 333
#define COMPASS_ 334
#define COMPOSITE_ 335
#define COMPRESS_ 336
#define CONTOUR_ 337
#define CONTRAST_ 338
#define COORDINATES_ 339
#define COPY_ 340
#define COUNT_ 341
#define CPANDA_ 342
#define CREATE_ 343
#define CROP_ 344
#define CROSS_ 345
#define CROSSHAIR_ 346
#define CUBE_ 347
#define CURSOR_ 348
#define CUT_ 349
#define CMYK_ 350
#define DARKEN_ 351
#define DASH_ 352
#define DASHLIST_ 353
#define DATA_ 354
#define DATAMIN_ 355
#define DATASEC_ 356
#define DEBUG_ 357
#define DEGREES_ 358
#define DEFAULT_ 359
#define DELETE_ 360
#define DEPTH_ 361
#define DETECTOR_ 362
#define DIAMOND_ 363
#define DIFFERENCE_ 364
#define DIM_ 365
#define DOWN_ 366
#define DS9_ 367
#define EDIT_ 368
#define ECLIPTIC_ 369
#define ELEVATION_ 370
#define ELLIPTIC_ 371
#define ELLIPSE_ 372
#define ELLIPSEANNULUS_ 373
#define END_ 374
#define ENVI_ 375
#define EPANDA_ 376
#define EPSILON_ 377
#define EQUATORIAL_ 378
#define ERASE_ 379
#define EXCLUSION_ 380
#define EXT_ 381
#define FADE_ 382
#define FACTOR_ 383
#define FALSE_ 384
#define FILE_ 385
#define FILL_ 386
#define FILTER_ 387
#define FIRST_ 388
#define FIP_ 389
#define FIT_ 390
#define FITS_ 391
#define FITSY_ 392
#define FIXED_ 393
#define FK4_ 394
#define FK5_ 395
#define FONT_ 396
#define FORMAT_ 397
#define FOOTPRINT_ 398
#define FROM_ 399
#define FRONT_ 400
#define FULL_ 401
#define FUNCTION_ 402
#define GALACTIC_ 403
#define GAUSSIAN_ 404
#define GET_ 405
#define GLOBAL_ 406
#define GRAPHICS_ 407
#define GRAY_ 408
#define GRID_ 409
#define GZ_ 410
#define HANDLE_ 411
#define HARDLIGHT_ 412
#define HAS_ 413
#define HEAD_ 414
#define HEADER_ 415
#define HEIGHT_ 416
#define HIDE_ 417
#define HIGHLITE_ 418
#define HISTEQU_ 419
#define HISTOGRAM_ 420
#define HORIZONTAL_ 421
#define HUE_ 422
#define HSV_ 423
#define HLS_ 424
#define ICRS_ 425
#define ID_ 426
#define IIS_ 427
#define IMAGE_ 428
#define INCLUDE_ 429
#define INCR_ 430
#define INFO_ 431
#define ITERATION_ 432
#define IRAF_ 433
#define IRAFMIN_ 434
#define J2000_ 435
#define KEY_ 436
#define KEYWORD_ 437
#define LABEL_ 438
#define LAYER_ 439
#define LAYERNO_ 440
#define LAST_ 441
#define LENGTH_ 442
#define LEVEL_ 443
#define LIGHTEN_ 444
#define LITTLE_ 445
#define LITTLEENDIAN_ 446
#define LINE_ 447
#define LINEAR_ 448
#define LIST_ 449
#define LOAD_ 450
#define LOCAL_ 451
#define LOG_ 452
#define LUMINOSITY_ 453
#define MACOSX_ 454
#define MAGNIFIER_ 455
#define MATCH_ 456
#define MAP_ 457
#define MARK_ 458
#define MARKER_ 459
#define MASK_ 460
#define MEDIAN_ 461
#define MESSAGE_ 462
#define METHOD_ 463
#define MINMAX_ 464
#define MINOR_ 465
#define MIP_ 466
#define MMAP_ 467
#define MMAPINCR_ 468
#define MOSAIC_ 469
#define MODE_ 470
#define MOTION_ 471
#define MULTICOLOR_ 472
#define MULTIPLY_ 473
#define MOVE_ 474
#define NAME_ 475
#define NAN_ 476
#define NATIVE_ 477
#define NAXES_ 478
#define NEW_ 479
#define NEXT_ 480
#define NO_ 481
#define NONE_ 482
#define NORMAL_ 483
#define NONNAN_ 484
#define NONZERO_ 485
#define NOW_ 486
#define NRRD_ 487
#define NUMBER_ 488
#define OBJECT_ 489
#define OFF_ 490
#define ON_ 491
#define ONLY_ 492
#define OPTION_ 493
#define ORIENT_ 494
#define OVERLAY_ 495
#define PAN_ 496
#define PANNER_ 497
#define PARSER_ 498
#define PASTE_ 499
#define PERF_ 500
#define PHOTO_ 501
#define PHYSICAL_ 502
#define PIXEL_ 503
#define PLOT2D_ 504
#define PLOT3D_ 505
#define POINT_ 506
#define POINTER_ 507
#define POLYGON_ 508
#define POSTSCRIPT_ 509
#define POW_ 510
#define PRECISION_ 511
#define PRINT_ 512
#define PRESERVE_ 513
#define PROJECTION_ 514
#define PROPERTY_ 515
#define PUBLICATION_ 516
#define PROS_ 517
#define QUERY_ 518
#define RADIAL_ 519
#define RADIUS_ 520
#define RANGE_ 521
#define REGION_ 522
#define REPLACE_ 523
#define RESAMPLE_ 524
#define RESCAN_ 525
#define RESET_ 526
#define RESOLUTION_ 527
#define REVEAL_ 528
#define RGB_ 529
#define ROOT_ 530
#define ROTATE_ 531
#define RULER_ 532
#define SAMPLE_ 533
#define SAOIMAGE_ 534
#define SAOTNG_ 535
#define SAVE_ 536
#define SATURATION_ 537
#define SCALE_ 538
#define SCAN_ 539
#define SCIENTIFIC_ 540
#define SCOPE_ 541
#define SCREEN_ 542
#define SEGMENT_ 543
#define SELECT_ 544
#define SET_ 545
#define SEXAGESIMAL_ 546
#define SHAPE_ 547
#define SHADE_ 548
#define SHARED_ 549
#define SHIFT_ 550
#define SHMID_ 551
#define SHOW_ 552
#define SIGMA_ 553
#define SINH_ 554
#define SIZE_ 555
#define SLICE_ 556
#define SMMAP_ 557
#define SMOOTH_ 558
#define SOFTLIGHT_ 559
#define SOCKET_ 560
#define SOCKETGZ_ 561
#define SOURCE_ 562
#define SQRT_ 563
#define SQUARED_ 564
#define SSHARED_ 565
#define STATS_ 566
#define STATUS_ 567
#define STRENGTH_ 568
#define SUM_ 569
#define SYNC_ 570
#define SYSTEM_ 571
#define TABLE_ 572
#define TAG_ 573
#define TEMPLATE_ 574
#define TEXT_ 575
#define THREADS_ 576
#define THREED_ 577
#define THRESHOLD_ 578
#define THICK_ 579
#define TOP_ 580
#define TRANSPARENCY_ 581
#define TO_ 582
#define TOGGLE_ 583
#define TOPHAT_ 584
#define TRUE_ 585
#define TYPE_ 586
#define UNDO_ 587
#define UNHIGHLITE_ 588
#define UNLOAD_ 589
#define UNSELECT_ 590
#define UPDATE_ 591
#define UP_ 592
#define USER_ 593
#define VALUE_ 594
#define VAR_ 595
#define VIEW_ 596
#define VECTOR_ 597
#define VERSION_ 598
#define VERTEX_ 599
#define VERTICAL_ 600
#define WARP_ 601
#define WCS_ 602
#define WCSA_ 603
#define WCSB_ 604
#define WCSC_ 605
#define WCSD_ 606
#define WCSE_ 607
#define WCSF_ 608
#define WCSG_ 609
#define WCSH_ 610
#define WCSI_ 611
#define WCSJ_ 612
#define WCSK_ 613
#define WCSL_ 614
#define WCSM_ 615
#define WCSN_ 616
#define WCSO_ 617
#define WCSP_ 618
#define WCSQ_ 619
#define WCSR_ 620
#define WCSS_ 621
#define WCST_ 622
#define WCSU_ 623
#define WCSV_ 624
#define WCSW_ 625
#define WCSX_ 626
#define WCSY_ 627
#define WCSZ_ 628
#define WCS0_ 629
#define WFPC2_ 630
#define WIDTH_ 631
#define WIN32_ 632
#define XML_ 633
#define XY_ 634
#define YES_ 635
#define ZERO_ 636
#define ZMAX_ 637
#define ZSCALE_ 638
#define PIXMASK_ 639
#define ZOOM_ 640
#define FIELDS_ 641




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
#line 929 "frame/parser.C"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 942 "frame/parser.C"

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
#define YYFINAL  407
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5806

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  391
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  244
/* YYNRULES -- Number of rules.  */
#define YYNRULES  1436
/* YYNRULES -- Number of states.  */
#define YYNSTATES  3126

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   641

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
       2,   390,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   388,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   389,   387,
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386
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
     151,   154,   156,   159,   162,   165,   167,   170,   172,   175,
     178,   181,   184,   186,   188,   190,   193,   196,   199,   202,
     205,   208,   211,   214,   217,   220,   222,   224,   226,   228,
     230,   232,   234,   236,   238,   239,   242,   245,   247,   249,
     250,   252,   254,   256,   258,   260,   262,   264,   267,   270,
     273,   276,   278,   280,   282,   284,   286,   288,   290,   292,
     294,   296,   298,   300,   302,   304,   306,   308,   310,   312,
     314,   316,   318,   320,   322,   324,   326,   328,   330,   332,
     334,   336,   338,   340,   342,   344,   346,   347,   349,   351,
     353,   355,   357,   358,   360,   362,   364,   366,   368,   370,
     372,   374,   376,   378,   380,   382,   384,   386,   388,   390,
     392,   394,   396,   398,   400,   402,   404,   406,   408,   410,
     412,   414,   416,   417,   419,   421,   423,   425,   427,   429,
     431,   432,   434,   436,   437,   439,   441,   443,   444,   446,
     448,   449,   451,   453,   454,   456,   458,   459,   461,   463,
     465,   467,   469,   471,   473,   474,   476,   478,   480,   482,
     484,   486,   488,   489,   491,   493,   495,   496,   498,   500,
     502,   504,   506,   509,   512,   515,   518,   521,   524,   527,
     530,   533,   536,   538,   541,   544,   547,   549,   552,   554,
     557,   559,   562,   564,   567,   570,   577,   580,   585,   588,
     591,   594,   598,   601,   604,   606,   609,   611,   614,   619,
     625,   628,   632,   638,   645,   647,   649,   651,   659,   671,
     680,   693,   695,   698,   701,   705,   707,   709,   712,   715,
     718,   721,   725,   729,   732,   735,   737,   739,   741,   743,
     745,   747,   749,   752,   755,   758,   760,   764,   767,   770,
     773,   779,   789,   799,   809,   817,   819,   822,   824,   830,
     840,   850,   860,   868,   870,   873,   876,   880,   883,   886,
     889,   892,   906,   920,   933,   946,   948,   949,   951,   953,
     958,   965,   967,   969,   971,   973,   975,   977,   979,   981,
     983,   988,   995,   999,  1004,  1005,  1012,  1021,  1024,  1028,
    1032,  1036,  1037,  1042,  1047,  1052,  1057,  1061,  1065,  1067,
    1071,  1077,  1082,  1087,  1091,  1094,  1095,  1097,  1099,  1101,
    1103,  1105,  1109,  1110,  1113,  1116,  1119,  1122,  1125,  1128,
    1131,  1134,  1137,  1140,  1143,  1146,  1149,  1152,  1154,  1157,
    1160,  1163,  1168,  1172,  1175,  1178,  1181,  1184,  1187,  1189,
    1193,  1196,  1199,  1202,  1205,  1207,  1210,  1219,  1222,  1224,
    1227,  1229,  1232,  1234,  1239,  1243,  1246,  1248,  1256,  1265,
    1273,  1282,  1284,  1286,  1288,  1291,  1293,  1295,  1298,  1300,
    1301,  1304,  1307,  1309,  1312,  1313,  1316,  1319,  1321,  1323,
    1326,  1329,  1332,  1334,  1336,  1338,  1340,  1342,  1344,  1345,
    1347,  1350,  1352,  1357,  1363,  1364,  1367,  1369,  1375,  1378,
    1381,  1383,  1385,  1387,  1389,  1392,  1394,  1397,  1399,  1401,
    1402,  1404,  1406,  1407,  1409,  1415,  1422,  1426,  1433,  1437,
    1439,  1443,  1445,  1447,  1449,  1453,  1460,  1468,  1474,  1477,
    1479,  1485,  1490,  1492,  1496,  1497,  1499,  1502,  1504,  1509,
    1511,  1514,  1516,  1519,  1523,  1526,  1528,  1531,  1533,  1538,
    1541,  1543,  1545,  1549,  1551,  1554,  1558,  1561,  1562,  1564,
    1566,  1571,  1574,  1575,  1577,  1581,  1586,  1591,  1592,  1594,
    1596,  1598,  1600,  1603,  1606,  1609,  1612,  1614,  1616,  1618,
    1620,  1622,  1624,  1626,  1627,  1629,  1631,  1633,  1635,  1637,
    1639,  1641,  1643,  1645,  1647,  1649,  1651,  1653,  1655,  1658,
    1660,  1663,  1665,  1668,  1671,  1674,  1677,  1679,  1681,  1684,
    1686,  1687,  1689,  1691,  1694,  1695,  1697,  1698,  1700,  1701,
    1703,  1704,  1706,  1707,  1709,  1710,  1713,  1716,  1717,  1719,
    1722,  1724,  1731,  1737,  1739,  1741,  1743,  1746,  1749,  1752,
    1754,  1756,  1758,  1760,  1763,  1765,  1767,  1769,  1772,  1774,
    1776,  1778,  1781,  1784,  1787,  1788,  1790,  1791,  1793,  1795,
    1797,  1799,  1801,  1803,  1805,  1807,  1810,  1813,  1816,  1818,
    1821,  1825,  1827,  1830,  1833,  1838,  1844,  1846,  1857,  1859,
    1862,  1866,  1870,  1873,  1876,  1879,  1882,  1885,  1888,  1891,
    1896,  1901,  1906,  1910,  1914,  1920,  1925,  1930,  1935,  1939,
    1943,  1947,  1951,  1955,  1959,  1962,  1965,  1970,  1974,  1978,
    1982,  1986,  1991,  1996,  2001,  2006,  2012,  2017,  2024,  2032,
    2037,  2042,  2048,  2051,  2055,  2059,  2063,  2067,  2071,  2075,
    2079,  2082,  2086,  2090,  2094,  2098,  2103,  2107,  2113,  2120,
    2124,  2128,  2133,  2137,  2141,  2145,  2149,  2153,  2159,  2163,
    2167,  2172,  2176,  2179,  2182,  2184,  2188,  2193,  2198,  2203,
    2208,  2213,  2220,  2225,  2230,  2236,  2241,  2246,  2251,  2256,
    2262,  2267,  2274,  2282,  2287,  2292,  2298,  2304,  2310,  2316,
    2322,  2328,  2336,  2342,  2348,  2355,  2360,  2365,  2370,  2375,
    2380,  2387,  2392,  2397,  2403,  2409,  2415,  2421,  2427,  2434,
    2440,  2448,  2457,  2463,  2469,  2476,  2480,  2484,  2488,  2492,
    2497,  2501,  2507,  2514,  2518,  2522,  2527,  2531,  2535,  2539,
    2543,  2547,  2553,  2557,  2561,  2566,  2571,  2576,  2580,  2586,
    2591,  2596,  2599,  2603,  2610,  2617,  2619,  2621,  2623,  2626,
    2629,  2632,  2636,  2640,  2643,  2656,  2659,  2662,  2664,  2668,
    2673,  2676,  2677,  2681,  2683,  2686,  2689,  2692,  2695,  2698,
    2703,  2708,  2713,  2718,  2722,  2726,  2731,  2737,  2746,  2753,
    2763,  2770,  2778,  2789,  2801,  2814,  2824,  2830,  2837,  2841,
    2847,  2853,  2860,  2866,  2871,  2876,  2881,  2891,  2902,  2914,
    2924,  2931,  2938,  2945,  2952,  2959,  2966,  2973,  2980,  2987,
    2995,  3003,  3006,  3011,  3016,  3021,  3026,  3032,  3037,  3042,
    3048,  3054,  3058,  3063,  3068,  3073,  3081,  3091,  3098,  3109,
    3121,  3134,  3144,  3148,  3151,  3155,  3161,  3169,  3174,  3178,
    3182,  3189,  3197,  3206,  3214,  3222,  3227,  3232,  3242,  3247,
    3251,  3256,  3264,  3272,  3275,  3279,  3283,  3287,  3292,  3295,
    3298,  3303,  3314,  3318,  3323,  3325,  3329,  3332,  3335,  3338,
    3341,  3345,  3351,  3356,  3362,  3365,  3368,  3371,  3374,  3378,
    3381,  3384,  3387,  3391,  3394,  3398,  3403,  3407,  3411,  3418,
    3423,  3426,  3430,  3433,  3436,  3441,  3445,  3449,  3452,  3456,
    3458,  3461,  3463,  3466,  3469,  3472,  3476,  3478,  3480,  3482,
    3484,  3487,  3489,  3492,  3495,  3497,  3500,  3503,  3505,  3508,
    3510,  3512,  3514,  3516,  3518,  3520,  3522,  3524,  3525,  3527,
    3530,  3533,  3536,  3540,  3546,  3554,  3562,  3569,  3576,  3583,
    3590,  3596,  3603,  3610,  3617,  3624,  3631,  3638,  3645,  3657,
    3665,  3673,  3681,  3691,  3701,  3712,  3725,  3738,  3742,  3745,
    3746,  3748,  3752,  3757,  3762,  3767,  3768,  3770,  3772,  3777,
    3782,  3784,  3786,  3788,  3790,  3792,  3794,  3796,  3798,  3801,
    3803,  3805,  3807,  3811,  3815,  3824,  3831,  3842,  3850,  3858,
    3864,  3871,  3878,  3882,  3885,  3888,  3892,  3897,  3903,  3909,
    3915,  3919,  3924,  3930,  3936,  3942,  3948,  3951,  3955,  3959,
    3965,  3969,  3973,  3977,  3981,  3985,  3990,  3996,  4002,  4008,
    4014,  4018,  4023,  4029,  4035,  4038,  4041,  4045,  4051,  4058,
    4065,  4069,  4073,  4080,  4087,  4093,  4099,  4102,  4106,  4110,
    4116,  4123,  4127,  4130,  4133,  4137,  4140,  4144,  4147,  4151,
    4157,  4164,  4167,  4170,  4173,  4176,  4178,  4183,  4188,  4190,
    4193,  4196,  4199,  4202,  4205,  4208,  4211,  4215,  4218,  4222,
    4225,  4229,  4231,  4233,  4235,  4237,  4239,  4241,  4242,  4245,
    4246,  4249,  4250,  4252,  4253,  4254,  4256,  4258,  4260,  4262,
    4264,  4272,  4281,  4284,  4291,  4294,  4301,  4304,  4308,  4311,
    4313,  4315,  4319,  4323,  4325,  4330,  4333,  4335,  4339,  4343,
    4348,  4352,  4356,  4360,  4362,  4364,  4366,  4368,  4370,  4372,
    4374,  4376,  4378,  4380,  4382,  4384,  4386,  4388,  4390,  4393,
    4394,  4395,  4398,  4405,  4413,  4416,  4418,  4422,  4424,  4428,
    4430,  4432,  4434,  4437,  4440,  4442,  4446,  4447,  4448,  4451,
    4454,  4456,  4460,  4466,  4467,  4469,  4471,  4474,  4477,  4481,
    4484,  4488,  4491,  4495,  4498,  4502,  4504,  4507,  4509,  4512,
    4514,  4517,  4519,  4522,  4524,  4527,  4529,  4532,  4534,  4537,
    4539,  4542,  4545,  4549,  4552,  4555,  4558,  4561,  4563,  4565,
    4567,  4569,  4574,  4577,  4581,  4585,  4588,  4592,  4595,  4598,
    4601,  4605,  4609,  4613,  4616,  4620,  4622,  4626,  4630,  4632,
    4635,  4638,  4641,  4644,  4654,  4661,  4663,  4665,  4667,  4669,
    4672,  4675,  4679,  4683,  4685,  4688,  4692,  4696,  4698,  4701,
    4703,  4705,  4707,  4709,  4711,  4713,  4715,  4717,  4720,  4723,
    4728,  4731,  4734,  4737,  4740,  4743,  4748,  4751,  4754,  4757,
    4760,  4763,  4768,  4770,  4773,  4776,  4779,  4783,  4785,  4787,
    4789,  4792,  4795,  4798,  4801,  4804,  4807,  4810,  4813,  4816,
    4820,  4824,  4828,  4832,  4836,  4840,  4842,  4845,  4848,  4851,
    4855,  4858,  4862,  4866,  4870,  4874,  4878,  4882,  4885,  4888,
    4891,  4894,  4897,  4900,  4903,  4906,  4909,  4912,  4915,  4918,
    4921,  4924,  4928,  4932,  4936,  4939,  4942,  4945,  4949,  4953,
    4957,  4960,  4963,  4966,  4969,  4972,  4975,  4979,  4983,  4987,
    4990,  4993,  4996,  4999,  5002,  5005,  5009,  5013,  5017,  5020,
    5023,  5026,  5029,  5032,  5035,  5038,  5041,  5044,  5048,  5052,
    5056,  5061,  5068,  5071,  5073,  5075,  5077,  5079,  5081,  5082,
    5088,  5090,  5097,  5101,  5104,  5109,  5111,  5114,  5117,  5120,
    5124,  5128,  5131,  5134,  5137,  5140,  5143,  5146,  5150,  5153,
    5156,  5160,  5162,  5166,  5171,  5174,  5176,  5179,  5185,  5192,
    5199,  5202,  5204,  5207,  5210,  5216,  5223
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     392,     0,    -1,   102,   394,    -1,    45,   428,    -1,    42,
      69,     5,    -1,    42,    69,   395,    -1,    48,   433,    -1,
      62,    -1,    67,    -1,    68,   435,    -1,    72,   318,     5,
      -1,    73,   440,    -1,    74,   442,    -1,    82,   443,    -1,
      89,   452,    -1,    91,   454,    -1,    92,   455,    -1,   101,
     395,    -1,   127,   457,    -1,   137,   458,    -1,   150,   459,
      -1,   154,   510,    -1,   158,   513,    -1,   162,    -1,   163,
     395,    -1,   163,    69,     5,    -1,   168,   598,    -1,   169,
     597,    -1,   172,   519,    -1,   178,    15,     4,    -1,   195,
     522,    -1,   199,   540,    -1,   200,   541,    -1,   201,   542,
      -1,   204,   559,   543,    -1,   205,   580,    -1,   184,   579,
      -1,   217,   596,    -1,   221,    69,     5,    -1,   239,   581,
      -1,   241,   582,    -1,   242,   585,    -1,   263,    93,    -1,
     256,   587,    -1,   254,   586,    -1,   271,    -1,   267,   559,
     589,    -1,   273,   594,    -1,   274,   595,    -1,   276,   599,
      -1,   281,   601,    -1,   297,    -1,   303,   623,    -1,   321,
       4,    -1,   322,   421,    -1,   334,    -1,   336,   625,    -1,
     343,    -1,   346,   627,    -1,   347,   628,    -1,   377,   632,
      -1,   385,   633,    -1,     3,    -1,     4,    -1,   395,    -1,
     214,   395,    -1,   243,   395,    -1,   245,   395,    -1,   347,
     395,    -1,    45,   395,    -1,    48,   395,    -1,    81,   395,
      -1,    89,   395,    -1,   155,   395,    -1,   274,   395,    -1,
       4,    -1,   380,    -1,   387,    -1,   236,    -1,   330,    -1,
     226,    -1,   388,    -1,   235,    -1,   129,    -1,    -1,   275,
      39,    -1,   146,    39,    -1,   275,    -1,   146,    -1,    -1,
     398,    -1,   393,    -1,     6,    -1,     7,    -1,     8,    -1,
       9,    -1,    10,    -1,   399,   399,    -1,   400,   401,    -1,
     401,   401,    -1,   393,   393,    -1,   173,    -1,   247,    -1,
     107,    -1,    19,    -1,   404,    -1,   347,    -1,   348,    -1,
     349,    -1,   350,    -1,   351,    -1,   352,    -1,   353,    -1,
     354,    -1,   355,    -1,   356,    -1,   357,    -1,   358,    -1,
     359,    -1,   360,    -1,   361,    -1,   362,    -1,   363,    -1,
     364,    -1,   365,    -1,   366,    -1,   367,    -1,   368,    -1,
     369,    -1,   370,    -1,   371,    -1,   372,    -1,   373,    -1,
     374,    -1,    59,    -1,   242,    -1,    -1,   381,    -1,   230,
      -1,   221,    -1,   229,    -1,   266,    -1,    -1,   307,    -1,
     218,    -1,   287,    -1,   240,    -1,    96,    -1,   189,    -1,
      71,    -1,    70,    -1,   157,    -1,   304,    -1,   109,    -1,
     125,    -1,   167,    -1,   282,    -1,    69,    -1,   198,    -1,
     193,    -1,   197,    -1,   255,    -1,   308,    -1,   309,    -1,
      29,    -1,   299,    -1,   164,    -1,    31,    -1,   284,    -1,
     278,    -1,   100,    -1,   179,    -1,    -1,   139,    -1,    36,
      -1,   140,    -1,   180,    -1,   170,    -1,   148,    -1,   114,
      -1,    -1,   103,    -1,   291,    -1,    -1,   103,    -1,    24,
      -1,    25,    -1,    -1,   296,    -1,   181,    -1,    -1,    16,
      -1,   175,    -1,    -1,   173,    -1,   205,    -1,    -1,    65,
      -1,    51,    -1,   108,    -1,    90,    -1,   389,    -1,    27,
      -1,    54,    -1,    -1,     4,    -1,    87,    -1,   165,    -1,
     249,    -1,   250,    -1,   264,    -1,   311,    -1,    -1,    33,
      -1,   314,    -1,   206,    -1,    -1,   222,    -1,    43,    -1,
      44,    -1,   190,    -1,   191,    -1,   341,   427,    -1,    49,
     424,    -1,    79,   425,    -1,   163,   426,    -1,   208,   592,
      -1,    38,   593,    -1,   293,   422,    -1,   283,   393,    -1,
     315,     4,    -1,   323,   393,    -1,   395,    -1,    18,   393,
      -1,   313,   393,    -1,   228,   423,    -1,   395,    -1,   313,
     393,    -1,   395,    -1,    69,     5,    -1,   395,    -1,    69,
       5,    -1,   395,    -1,    69,     5,    -1,   393,   393,    -1,
     251,   393,   393,   393,   393,   393,    -1,    11,   429,    -1,
      76,     5,     5,     5,    -1,   106,     4,    -1,   128,   430,
      -1,   147,   431,    -1,    56,   300,     4,    -1,   327,   432,
      -1,   132,     5,    -1,    62,    -1,   393,   393,    -1,   393,
      -1,   393,   393,    -1,   393,    11,   393,   393,    -1,   393,
     393,    11,   393,   393,    -1,   327,   393,    -1,   327,   393,
     393,    -1,   327,   393,    11,   393,   393,    -1,   327,   393,
     393,    11,   393,   393,    -1,    33,    -1,   314,    -1,   135,
      -1,   393,   393,    11,    62,     5,     5,     5,    -1,   393,
     393,     4,   393,   393,    11,    62,     5,     5,     5,     5,
      -1,   393,   393,    11,   393,   393,     5,     5,     5,    -1,
     393,   393,     4,   393,   393,    11,   393,   393,     5,     5,
       5,     5,    -1,   393,    -1,   393,   393,    -1,   327,   434,
      -1,   221,   381,   395,    -1,   135,    -1,   393,    -1,   393,
     393,    -1,   286,   436,    -1,   215,   437,    -1,   209,   438,
      -1,   338,   393,   393,    -1,   338,   221,   221,    -1,   383,
     439,    -1,   258,   395,    -1,   151,    -1,   196,    -1,   393,
      -1,   209,    -1,   383,    -1,   382,    -1,   338,    -1,     4,
     409,    -1,   215,   409,    -1,   278,     4,    -1,   270,    -1,
     393,     4,     4,    -1,    83,   393,    -1,   278,     4,    -1,
     192,     4,    -1,     4,   393,   393,     4,     4,    -1,   274,
     393,   393,   393,   393,   393,   393,     4,     4,    -1,   168,
     393,   393,   393,   393,   393,   393,     4,     4,    -1,   169,
     393,   393,   393,   393,   393,   393,     4,     4,    -1,   217,
       4,     4,     5,     5,     5,     4,    -1,    41,    -1,   216,
     441,    -1,   119,    -1,     4,   393,   393,     4,     4,    -1,
     274,   393,   393,   393,   393,   393,   393,     4,     4,    -1,
     168,   393,   393,   393,   393,   393,   393,     4,     4,    -1,
     169,   393,   393,   393,   393,   393,   393,     4,     4,    -1,
     217,     4,     4,     5,     5,     5,     4,    -1,   408,    -1,
     197,   393,    -1,    88,   444,    -1,    98,     4,     4,    -1,
     105,   445,    -1,   195,   446,    -1,   244,   450,    -1,   281,
     451,    -1,     5,     4,     4,   449,     4,     4,   408,   393,
     447,   448,   393,   393,     5,    -1,     5,     4,     4,   449,
       4,     4,   408,   393,   393,   448,   393,   393,     5,    -1,
       5,     4,     4,   449,     4,     4,   408,   393,   447,   393,
     393,     5,    -1,     5,     4,     4,   449,     4,     4,   408,
     393,   393,   393,   393,     5,    -1,   253,    -1,    -1,    32,
      -1,     5,    -1,     5,     5,     4,   395,    -1,     5,     4,
     395,     5,   403,   410,    -1,   209,    -1,   383,    -1,   382,
      -1,   338,    -1,   151,    -1,   196,    -1,   303,    -1,    48,
      -1,     5,    -1,     5,     5,     4,   395,    -1,     5,     5,
       4,   395,     4,     4,    -1,     5,   403,   410,    -1,    32,
       5,   403,   410,    -1,    -1,   393,   393,   393,   393,   403,
     410,    -1,    62,   402,   403,   410,   393,   393,   403,   412,
      -1,   322,   453,    -1,    41,   393,   393,    -1,   216,   393,
     393,    -1,   119,   393,   393,    -1,    -1,   393,   393,   403,
     410,    -1,    41,   393,   393,     4,    -1,   216,   393,   393,
       4,    -1,   119,   393,   393,     4,    -1,   405,   393,   393,
      -1,   403,   410,   402,    -1,   395,    -1,   346,   393,   393,
      -1,    41,   216,   405,   393,   393,    -1,   216,   405,   393,
     393,    -1,    41,   216,   403,   402,    -1,   216,   403,   402,
      -1,    34,     4,    -1,    -1,    33,    -1,   314,    -1,   206,
      -1,   393,    -1,    67,    -1,   158,   126,     5,    -1,    -1,
      42,    69,    -1,    45,   462,    -1,    48,   464,    -1,    68,
     465,    -1,    73,   469,    -1,    72,   468,    -1,    74,   471,
      -1,    82,   473,    -1,    84,   476,    -1,    89,   477,    -1,
      91,   478,    -1,    93,   480,    -1,    92,   479,    -1,    99,
     481,    -1,   101,    -1,   136,   485,    -1,   154,   491,    -1,
     163,    69,    -1,   165,     5,     5,     4,    -1,   166,    94,
     460,    -1,   168,   499,    -1,   169,   498,    -1,   172,   483,
      -1,   176,   482,    -1,   178,    15,    -1,   209,    -1,   204,
     559,   553,    -1,   205,   493,    -1,   184,   492,    -1,   217,
     497,    -1,   221,    69,    -1,   239,    -1,   241,   495,    -1,
     248,   317,   405,   393,   393,     4,     4,     5,    -1,   274,
     496,    -1,   276,    -1,   303,   500,    -1,   321,    -1,   322,
     501,    -1,   331,    -1,   339,   405,   393,   393,    -1,   345,
      94,   461,    -1,   347,   508,    -1,   385,    -1,     5,     5,
     393,   393,   405,     4,   456,    -1,     5,     5,   393,   393,
     403,   410,     4,   456,    -1,     5,     5,   393,   393,   405,
       4,   456,    -1,     5,     5,   393,   393,   403,   410,     4,
     456,    -1,   106,    -1,   128,    -1,   147,    -1,    56,   300,
      -1,    93,    -1,   132,    -1,    76,   463,    -1,   194,    -1,
      -1,   209,     5,    -1,   110,     5,    -1,   128,    -1,   221,
     381,    -1,    -1,   447,   448,    -1,   393,   448,    -1,   286,
      -1,   215,    -1,   209,   466,    -1,   338,   188,    -1,   383,
     467,    -1,   258,    -1,   215,    -1,   278,    -1,    83,    -1,
     278,    -1,   192,    -1,    -1,   318,    -1,   188,   470,    -1,
       4,    -1,     4,   405,   393,   393,    -1,     4,   393,   393,
     408,   393,    -1,    -1,   188,   472,    -1,   197,    -1,     4,
     393,   393,   408,   393,    -1,   403,   410,    -1,    68,   474,
      -1,    69,    -1,    97,    -1,    98,    -1,   188,    -1,   233,
     188,    -1,   208,    -1,    74,   475,    -1,   303,    -1,   376,
      -1,    -1,   215,    -1,   286,    -1,    -1,   197,    -1,   393,
     393,   403,   410,   411,    -1,   405,   393,   393,   403,   410,
     411,    -1,   403,   410,   411,    -1,    62,   403,   410,   411,
     403,   412,    -1,   322,   403,   410,    -1,   405,    -1,   403,
     410,   411,    -1,   312,    -1,    34,    -1,   405,    -1,   403,
     410,   411,    -1,   403,   410,   402,   393,   393,     5,    -1,
       4,   403,   410,   402,   393,   393,     5,    -1,   405,   393,
     393,     4,     4,    -1,     5,   396,    -1,    68,    -1,   405,
     393,   393,     5,   396,    -1,     4,     4,     4,     4,    -1,
      93,    -1,   130,   220,   484,    -1,    -1,     4,    -1,   393,
     393,    -1,   223,    -1,    62,   403,   410,   411,    -1,    86,
      -1,   106,   488,    -1,    46,    -1,   126,   486,    -1,   130,
     220,   489,    -1,   160,   487,    -1,   161,    -1,   234,   220,
      -1,   300,    -1,   300,   403,   410,   412,    -1,   301,   490,
      -1,   376,    -1,     4,    -1,   405,   393,   393,    -1,     4,
      -1,   182,     5,    -1,     4,   182,     5,    -1,   347,     4,
      -1,    -1,     4,    -1,   396,    -1,   396,   405,   393,   393,
      -1,   396,     4,    -1,    -1,     4,    -1,   144,   173,   403,
      -1,   144,   173,     4,   403,    -1,   327,   173,   393,   403,
      -1,    -1,   238,    -1,   340,    -1,    86,    -1,   185,    -1,
      69,   494,    -1,    47,   494,    -1,   326,   494,    -1,   341,
     494,    -1,    69,    -1,   203,    -1,   266,    -1,   316,    -1,
     326,    -1,    86,    -1,    47,    -1,    -1,     4,    -1,   258,
      -1,    64,    -1,   316,    -1,   341,    -1,   316,    -1,    64,
      -1,   316,    -1,   341,    -1,    64,    -1,   316,    -1,   341,
      -1,   147,    -1,   265,    -1,   265,   210,    -1,   298,    -1,
     298,   210,    -1,    21,    -1,   341,   507,    -1,    49,   504,
      -1,    79,   505,    -1,   163,   506,    -1,   208,    -1,    38,
      -1,   293,   502,    -1,   283,    -1,    -1,    18,    -1,   313,
      -1,   228,   503,    -1,    -1,   313,    -1,    -1,    69,    -1,
      -1,    69,    -1,    -1,    69,    -1,    -1,   251,    -1,    -1,
      15,   509,    -1,   220,   404,    -1,    -1,   252,    -1,    88,
     511,    -1,   105,    -1,   403,   410,   411,   512,     5,     5,
      -1,   403,   410,   411,   512,     5,    -1,    20,    -1,   261,
      -1,    19,    -1,    42,    69,    -1,    45,   514,    -1,    82,
     515,    -1,    89,    -1,   100,    -1,   101,    -1,   107,    -1,
     136,   516,    -1,   154,    -1,   172,    -1,   179,    -1,   204,
     517,    -1,   247,    -1,   173,    -1,   303,    -1,   316,   403,
      -1,   347,   518,    -1,    77,     5,    -1,    -1,    32,    -1,
      -1,    45,    -1,    92,    -1,   214,    -1,   163,    -1,   289,
      -1,   244,    -1,   332,    -1,   403,    -1,    61,   403,    -1,
     123,   403,    -1,   193,   403,    -1,    17,    -1,   322,   403,
      -1,   224,     4,     4,    -1,   124,    -1,   207,     5,    -1,
      93,   521,    -1,   290,   130,   220,   520,    -1,   290,     4,
       4,     4,     4,    -1,   336,    -1,   347,   393,   393,   393,
     393,   393,   393,   393,   393,     4,    -1,     5,    -1,     5,
       4,    -1,     4,     4,    59,    -1,     4,     4,   403,    -1,
     215,   395,    -1,    26,   523,    -1,   120,   525,    -1,   136,
     526,    -1,   175,   539,    -1,   232,   537,    -1,   246,   538,
      -1,     5,    13,     5,   415,    -1,     5,    14,     5,   415,
      -1,     5,    64,     5,   415,    -1,     5,   212,   415,    -1,
       5,   213,   415,    -1,     5,   294,   413,     4,   415,    -1,
       5,   305,     4,   415,    -1,     5,   306,     4,   415,    -1,
       5,   340,     5,   415,    -1,   274,    92,   524,    -1,   169,
      92,   524,    -1,   168,    92,   524,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    64,     5,    -1,     5,
     212,    -1,     5,   213,    -1,     5,   294,   413,     4,    -1,
       5,   305,     4,    -1,     5,   306,     4,    -1,     5,   340,
       5,    -1,     5,     5,   302,    -1,     5,    13,     5,   415,
      -1,     5,    14,     5,   415,    -1,     5,    64,     5,   415,
      -1,     5,   212,   414,   415,    -1,     5,     5,   302,   414,
     415,    -1,     5,   213,   414,   415,    -1,     5,   294,   413,
       4,   414,   415,    -1,     5,   310,   413,     4,     4,   414,
     415,    -1,     5,   305,     4,   415,    -1,     5,   306,     4,
     415,    -1,     5,   340,     5,   414,   415,    -1,   301,   527,
      -1,   126,    92,   528,    -1,   274,   173,   536,    -1,   274,
      92,   535,    -1,   169,   173,   536,    -1,   169,    92,   535,
      -1,   168,   173,   536,    -1,   168,    92,   535,    -1,   214,
     529,    -1,     5,    13,     5,    -1,     5,    14,     5,    -1,
       5,    64,     5,    -1,     5,   212,   414,    -1,     5,     5,
     302,   414,    -1,     5,   213,   414,    -1,     5,   294,   413,
       4,   414,    -1,     5,   310,   413,     4,     4,   414,    -1,
       5,   305,     4,    -1,     5,   306,     4,    -1,     5,   340,
       5,   414,    -1,     5,    13,     5,    -1,     5,    14,     5,
      -1,     5,    64,     5,    -1,     5,   212,   414,    -1,     5,
     213,   414,    -1,     5,   294,   413,     4,   414,    -1,     5,
     305,     4,    -1,     5,   306,     4,    -1,     5,   340,     5,
     414,    -1,   173,   178,   530,    -1,   178,   531,    -1,   173,
     532,    -1,   534,    -1,   173,   375,   533,    -1,     5,    13,
       5,   415,    -1,     5,    14,     5,   415,    -1,     5,    64,
       5,   415,    -1,     5,   212,   414,   415,    -1,     5,   213,
     414,   415,    -1,     5,   294,   413,     4,   414,   415,    -1,
       5,   305,     4,   415,    -1,     5,   306,     4,   415,    -1,
       5,   340,     5,   414,   415,    -1,     5,    13,     5,   415,
      -1,     5,    14,     5,   415,    -1,     5,    64,     5,   415,
      -1,     5,   212,   414,   415,    -1,     5,     5,   302,   414,
     415,    -1,     5,   213,   414,   415,    -1,     5,   294,   413,
       4,   414,   415,    -1,     5,   310,   413,     4,     4,   414,
     415,    -1,     5,   305,     4,   415,    -1,     5,   306,     4,
     415,    -1,     5,   340,     5,   414,   415,    -1,   404,     5,
      13,     5,   415,    -1,   404,     5,    14,     5,   415,    -1,
     404,     5,    64,     5,   415,    -1,   404,     5,   212,   414,
     415,    -1,   404,     5,   213,   414,   415,    -1,   404,     5,
     294,   413,     4,   414,   415,    -1,   404,     5,   305,     4,
     415,    -1,   404,     5,   306,     4,   415,    -1,   404,     5,
     340,     5,   414,   415,    -1,     5,    13,     5,   415,    -1,
       5,    14,     5,   415,    -1,     5,    64,     5,   415,    -1,
       5,   212,   414,   415,    -1,     5,   213,   414,   415,    -1,
       5,   294,   413,     4,   414,   415,    -1,     5,   305,     4,
     415,    -1,     5,   306,     4,   415,    -1,     5,   340,     5,
     414,   415,    -1,   404,     5,    13,     5,   415,    -1,   404,
       5,    14,     5,   415,    -1,   404,     5,    64,     5,   415,
      -1,   404,     5,   212,   414,   415,    -1,   404,     5,     5,
     302,   414,   415,    -1,   404,     5,   213,   414,   415,    -1,
     404,     5,   294,   413,     4,   414,   415,    -1,   404,     5,
     310,   413,     4,     4,   414,   415,    -1,   404,     5,   305,
       4,   415,    -1,   404,     5,   306,     4,   415,    -1,   404,
       5,   340,     5,   414,   415,    -1,     5,    13,     5,    -1,
       5,    14,     5,    -1,     5,    64,     5,    -1,     5,   212,
     414,    -1,     5,     5,   302,   414,    -1,     5,   213,   414,
      -1,     5,   294,   413,     4,   414,    -1,     5,   310,   413,
       4,     4,   414,    -1,     5,   305,     4,    -1,     5,   306,
       4,    -1,     5,   340,     5,   414,    -1,     5,    13,     5,
      -1,     5,    14,     5,    -1,     5,    64,     5,    -1,     5,
     212,   414,    -1,     5,   213,   414,    -1,     5,   294,   413,
       4,   414,    -1,     5,   305,     4,    -1,     5,   306,     4,
      -1,     5,   340,     5,   414,    -1,     5,    13,     5,   415,
      -1,     5,    64,     5,   415,    -1,     5,   212,   415,    -1,
       5,   294,   413,     4,   415,    -1,     5,   305,     4,   415,
      -1,     5,   340,     5,   415,    -1,     5,     5,    -1,   301,
       5,     5,    -1,    99,     4,     4,     4,     4,     4,    -1,
     209,     4,     4,     4,     4,     4,    -1,   119,    -1,   257,
      -1,   395,    -1,   152,   395,    -1,    93,   395,    -1,    69,
       5,    -1,     5,     4,     4,    -1,   336,   393,   393,    -1,
     385,   393,    -1,     5,     5,   404,   410,     5,     5,   404,
     410,   393,   404,   412,     5,    -1,    63,   546,    -1,    69,
       5,    -1,    85,    -1,    78,   552,     5,    -1,    78,   552,
     340,     5,    -1,    80,   105,    -1,    -1,    88,   544,   547,
      -1,    94,    -1,   105,   550,    -1,   113,   551,    -1,   122,
       4,    -1,   141,     5,    -1,   163,    16,    -1,   163,   237,
     393,   393,    -1,   163,   328,   393,   393,    -1,     4,    20,
     418,   395,    -1,    20,   311,    58,     5,    -1,    20,   311,
      58,    -1,     4,    21,   398,    -1,     4,    21,   398,   405,
      -1,     4,    21,   398,   403,   410,    -1,     4,    22,   265,
     393,   393,     4,   403,   412,    -1,     4,    22,   265,     5,
     403,   412,    -1,     4,    52,   265,   393,   393,   393,     4,
     403,   412,    -1,     4,    52,   265,     5,   403,   412,    -1,
       4,    51,   265,   393,   393,   403,   412,    -1,     4,    55,
     113,   398,   398,     4,   393,   393,   393,     4,    -1,     4,
      55,   113,   398,   398,     4,   393,   393,   393,     4,   405,
      -1,     4,    55,   113,   398,   398,     4,   393,   393,   393,
       4,   403,   410,    -1,     4,    55,   113,     5,     5,   403,
     410,   403,   412,    -1,     4,    58,   545,     5,     5,    -1,
       4,    65,   265,   393,   403,   412,    -1,     4,    69,     5,
      -1,     4,    79,    27,   395,   395,    -1,     4,    79,   183,
       5,     5,    -1,     4,    79,   265,   393,   403,   412,    -1,
       4,    79,   316,   403,   410,    -1,     4,    80,   151,   395,
      -1,     4,    80,    28,   395,    -1,     4,    80,   331,     5,
      -1,     4,    87,   113,   398,   398,     4,   393,   393,     4,
      -1,     4,    87,   113,   398,   398,     4,   393,   393,     4,
     405,    -1,     4,    87,   113,   398,   398,     4,   393,   393,
       4,   403,   410,    -1,     4,    87,   113,     5,     5,   403,
     410,   403,   412,    -1,     4,    88,    22,   265,   393,   393,
      -1,     4,    88,    52,   265,   393,   393,    -1,     4,    88,
      55,    21,   393,   393,    -1,     4,    88,    55,   265,   393,
     393,    -1,     4,    88,   118,   265,   393,   393,    -1,     4,
      88,   121,    21,   393,   393,    -1,     4,    88,   121,   265,
     393,   393,    -1,     4,    88,    87,    21,   393,   393,    -1,
       4,    88,    87,   265,   393,   393,    -1,     4,    88,   253,
     344,     4,   393,   393,    -1,     4,    88,   288,   344,     4,
     393,   393,    -1,     4,   105,    -1,     4,   105,    22,     4,
      -1,     4,   105,    52,     4,    -1,     4,   105,    55,     4,
      -1,     4,   105,   118,     4,    -1,     4,   105,    58,   545,
       5,    -1,     4,   105,   121,     4,    -1,     4,   105,    87,
       4,    -1,     4,   105,   253,   344,     4,    -1,     4,   105,
     288,   344,     4,    -1,     4,   105,   318,    -1,     4,   105,
     318,     5,    -1,     4,   105,   318,     4,    -1,     4,   113,
      41,     4,    -1,     4,   117,   265,   393,   393,   403,   412,
      -1,     4,   118,   265,   393,   393,   393,     4,   403,   412,
      -1,     4,   118,   265,     5,   403,   412,    -1,     4,   121,
     113,   398,   398,     4,   393,   393,   393,     4,    -1,     4,
     121,   113,   398,   398,     4,   393,   393,   393,     4,   405,
      -1,     4,   121,   113,   398,   398,     4,   393,   393,   393,
       4,   403,   410,    -1,     4,   121,   113,     5,     5,   403,
     410,   403,   412,    -1,     4,   141,     5,    -1,     4,   163,
      -1,     4,   163,   237,    -1,     4,   192,    27,   395,   395,
      -1,     4,   192,   251,   403,   410,   402,   402,    -1,     4,
     219,   393,   393,    -1,     4,   219,   145,    -1,     4,   219,
      37,    -1,     4,   219,   327,   403,   410,   402,    -1,     4,
     253,   251,   403,   410,   411,     5,    -1,     4,   253,   251,
     403,   410,   411,   340,     5,    -1,     4,   253,   271,   393,
     393,   403,   412,    -1,     4,   288,   271,   393,   393,   403,
     412,    -1,     4,   251,   292,   416,    -1,     4,   251,   300,
       4,    -1,     4,   259,   403,   410,   402,   402,   393,   403,
     412,    -1,     4,   260,   565,   395,    -1,     4,   276,    41,
      -1,     4,   277,   142,     5,    -1,     4,   277,   251,   403,
     410,   402,   402,    -1,     4,   277,   316,   403,   410,   403,
     412,    -1,     4,   289,    -1,     4,   289,   237,    -1,     4,
     318,     5,    -1,     4,   320,     5,    -1,     4,   320,   276,
     395,    -1,     4,   333,    -1,     4,   335,    -1,     4,   342,
      27,   395,    -1,     4,   342,   251,   403,   410,   402,   403,
     412,   393,   398,    -1,     4,   376,     4,    -1,     4,    98,
       4,     4,    -1,   181,    -1,   181,   393,   393,    -1,   194,
     560,    -1,   195,   561,    -1,   219,   562,    -1,   258,   395,
      -1,   260,   565,   395,    -1,   260,   565,   395,   393,   393,
      -1,   276,    41,   393,   393,    -1,   276,   216,   393,   393,
       4,    -1,   276,   119,    -1,   281,   569,    -1,   289,   570,
      -1,   297,   571,    -1,     5,    69,     5,    -1,     5,    85,
      -1,     5,   105,    -1,     5,    94,    -1,     5,   141,     5,
      -1,     5,   163,    -1,     5,   163,   237,    -1,     5,   219,
     393,   393,    -1,     5,   219,   145,    -1,     5,   219,    37,
      -1,     5,   219,   327,   403,   410,   402,    -1,     5,   260,
     565,   395,    -1,     5,   289,    -1,     5,   289,   237,    -1,
       5,   333,    -1,     5,   335,    -1,   318,   113,     5,     5,
      -1,   318,   105,     5,    -1,   318,   105,    16,    -1,   318,
       5,    -1,   318,   336,     5,    -1,   244,    -1,   244,   403,
      -1,   332,    -1,   333,    16,    -1,   335,    16,    -1,   376,
       4,    -1,    98,     4,     4,    -1,   289,    -1,   335,    -1,
     163,    -1,   333,    -1,    41,   219,    -1,   219,    -1,   119,
     219,    -1,    41,   113,    -1,   113,    -1,   119,   113,    -1,
      41,   276,    -1,   276,    -1,   119,   276,    -1,   105,    -1,
     320,    -1,    69,    -1,   376,    -1,   260,    -1,   141,    -1,
     181,    -1,   336,    -1,    -1,     4,    -1,    31,   395,    -1,
     265,   393,    -1,   177,     4,    -1,   238,     4,   393,    -1,
      65,   393,   393,   393,   566,    -1,   117,   393,   393,   393,
     393,   397,   566,    -1,    51,   393,   393,   393,   393,   397,
     566,    -1,   253,   393,   393,   393,   393,   566,    -1,   288,
     393,   393,   393,   393,   566,    -1,   192,   393,   393,   393,
     393,   566,    -1,   342,   393,   393,   393,   393,   566,    -1,
     320,   393,   393,   397,   566,    -1,    65,   251,   393,   393,
     417,   566,    -1,    51,   251,   393,   393,   417,   566,    -1,
     108,   251,   393,   393,   417,   566,    -1,    90,   251,   393,
     393,   417,   566,    -1,   389,   251,   393,   393,   417,   566,
      -1,    27,   251,   393,   393,   417,   566,    -1,    54,   251,
     393,   393,   417,   566,    -1,   277,   393,   393,   393,   393,
     403,   410,   403,   412,     5,   566,    -1,    79,   393,   393,
     393,   403,   410,   566,    -1,   259,   393,   393,   393,   393,
     393,   566,    -1,    22,   393,   393,   393,   393,     4,   566,
      -1,   118,   393,   393,   393,   393,   393,     4,   397,   566,
      -1,    52,   393,   393,   393,   393,   393,     4,   397,   566,
      -1,    87,   393,   393,   398,   398,     4,   393,   393,     4,
     566,    -1,   121,   393,   393,   398,   398,     4,   393,   393,
     393,     4,   397,   566,    -1,    55,   393,   393,   398,   398,
       4,   393,   393,   393,     4,   397,   566,    -1,    80,   548,
     566,    -1,   319,   549,    -1,    -1,     4,    -1,     5,   393,
     393,    -1,   340,     5,   393,   393,    -1,   393,   393,   340,
       5,    -1,     5,   403,   410,   402,    -1,    -1,   289,    -1,
      16,    -1,    41,   393,   393,     4,    -1,   216,   393,   393,
       4,    -1,   119,    -1,   112,    -1,   378,    -1,    66,    -1,
     280,    -1,   279,    -1,   262,    -1,   379,    -1,    63,   554,
      -1,    69,    -1,   141,    -1,   122,    -1,   156,   393,   393,
      -1,   171,   393,   393,    -1,     4,    20,    87,     5,     5,
       5,   403,     4,    -1,     4,    20,   165,     5,     5,     4,
      -1,     4,    20,   249,     5,     5,     5,     5,   403,   410,
     419,    -1,     4,    20,   250,     5,     5,   403,   419,    -1,
       4,    20,   264,     5,     5,     5,   403,    -1,     4,    20,
     311,   403,   410,    -1,     4,    20,   311,    99,   403,   410,
      -1,    20,   311,    16,    99,   403,   410,    -1,    20,   311,
     386,    -1,   171,    16,    -1,     4,    21,    -1,     4,    21,
     405,    -1,     4,    21,   403,   410,    -1,     4,    22,   265,
     403,   412,    -1,     4,    52,   265,   403,   412,    -1,     4,
      51,   265,   403,   412,    -1,     4,    55,    21,    -1,     4,
      55,    21,   405,    -1,     4,    55,    21,   403,   410,    -1,
       4,    55,   265,   403,   412,    -1,     4,    62,   403,   410,
     411,    -1,     4,    65,   265,   403,   412,    -1,     4,    69,
      -1,     4,    79,    27,    -1,     4,    79,   183,    -1,     4,
      79,   265,   403,   412,    -1,     4,    79,   316,    -1,     4,
      80,   151,    -1,     4,    80,    28,    -1,     4,    80,   331,
      -1,     4,    87,    21,    -1,     4,    87,    21,   405,    -1,
       4,    87,    21,   403,   410,    -1,     4,    87,   265,   403,
     412,    -1,     4,   117,   265,   403,   412,    -1,     4,   118,
     265,   403,   412,    -1,     4,   121,    21,    -1,     4,   121,
      21,   405,    -1,     4,   121,    21,   403,   410,    -1,     4,
     121,   265,   403,   412,    -1,     4,   141,    -1,     4,   163,
      -1,     4,   192,    27,    -1,     4,   192,   187,   403,   412,
      -1,     4,   192,   251,   403,   410,   411,    -1,     4,   202,
     187,   393,   403,   412,    -1,     4,   251,   292,    -1,     4,
     251,   300,    -1,     4,   253,   251,   403,   410,   411,    -1,
       4,   259,   251,   403,   410,   411,    -1,     4,   259,   187,
     403,   412,    -1,     4,   259,   324,   403,   412,    -1,     4,
     260,    -1,     4,   260,   565,    -1,     4,   277,   142,    -1,
       4,   277,   187,   403,   412,    -1,     4,   277,   251,   403,
     410,   411,    -1,     4,   277,   316,    -1,     4,   289,    -1,
       4,   318,    -1,     4,   318,     4,    -1,     4,   320,    -1,
       4,   320,   276,    -1,     4,   331,    -1,     4,   342,    27,
      -1,     4,   342,   187,   403,   412,    -1,     4,   342,   251,
     403,   410,   411,    -1,     4,   376,    -1,     4,    98,    -1,
     163,   555,    -1,   163,   233,    -1,   233,    -1,   253,   288,
     393,   393,    -1,   288,   288,   393,   393,    -1,   258,    -1,
     260,   565,    -1,   289,   556,    -1,   289,   233,    -1,   297,
     557,    -1,     5,    69,    -1,     5,   141,    -1,     5,   171,
      -1,     5,   260,   565,    -1,     5,   318,    -1,     5,   318,
     233,    -1,   318,    16,    -1,   318,   104,   220,    -1,   376,
      -1,    98,    -1,    31,    -1,   265,    -1,   177,    -1,   238,
      -1,    -1,   393,   393,    -1,    -1,   393,   393,    -1,    -1,
     320,    -1,    -1,    -1,   252,    -1,   267,    -1,   338,    -1,
      60,    -1,   143,    -1,   552,   403,   410,   411,   395,   567,
     574,    -1,   289,   552,   403,   410,   411,   395,   567,   574,
      -1,   552,     5,    -1,   552,     5,     4,     5,   403,   410,
      -1,   552,     4,    -1,   552,     4,     4,     5,   403,   410,
      -1,   136,     5,    -1,   136,     5,     5,    -1,   393,   393,
      -1,   145,    -1,    37,    -1,    41,   393,   393,    -1,   216,
     393,   393,    -1,   119,    -1,   327,   403,   410,   402,    -1,
     563,   564,    -1,   564,    -1,   565,   390,   395,    -1,    69,
     390,     5,    -1,    98,   390,     4,     4,    -1,   376,   390,
       4,    -1,   141,   390,     5,    -1,   320,   390,     5,    -1,
     577,    -1,   578,    -1,   227,    -1,   289,    -1,   163,    -1,
      97,    -1,   138,    -1,   113,    -1,   219,    -1,   276,    -1,
     105,    -1,   174,    -1,   307,    -1,   131,    -1,   558,    -1,
     558,   563,    -1,    -1,    -1,   568,   572,    -1,     5,   552,
     403,   410,   411,   395,    -1,   289,     5,   552,   403,   410,
     411,   395,    -1,   319,     5,    -1,    16,    -1,   237,   393,
     393,    -1,   328,    -1,   328,   393,   393,    -1,   133,    -1,
     186,    -1,   395,    -1,   320,   395,    -1,   572,   573,    -1,
     573,    -1,   565,   390,   395,    -1,    -1,    -1,   575,   576,
      -1,   576,   577,    -1,   577,    -1,   318,   390,     5,    -1,
      58,   390,   545,     5,     5,    -1,    -1,    88,    -1,     4,
      -1,   185,     4,    -1,    69,     5,    -1,     4,    69,     5,
      -1,    47,   407,    -1,     4,    47,   407,    -1,   326,   393,
      -1,     4,   326,   393,    -1,   341,   395,    -1,     4,   341,
     395,    -1,   297,    -1,     4,   297,    -1,   162,    -1,     4,
     162,    -1,   105,    -1,     4,   105,    -1,   337,    -1,     4,
     337,    -1,   111,    -1,     4,   111,    -1,   325,    -1,     4,
     325,    -1,    50,    -1,     4,    50,    -1,    67,    -1,    69,
       5,    -1,   203,   406,    -1,   266,   393,   393,    -1,   316,
     403,    -1,   326,   393,    -1,    47,   407,    -1,   203,     4,
      -1,   389,    -1,   387,    -1,   379,    -1,   227,    -1,   393,
     393,   393,   393,    -1,   393,   393,    -1,   405,   393,   393,
      -1,   403,   410,   402,    -1,   327,   583,    -1,    40,   393,
     393,    -1,   216,   584,    -1,   258,   395,    -1,   393,   393,
      -1,   405,   393,   393,    -1,   403,   410,   402,    -1,    41,
     393,   393,    -1,   393,   393,    -1,   119,   393,   393,    -1,
     395,    -1,   347,   404,   410,    -1,     5,     4,     4,    -1,
     336,    -1,    75,   588,    -1,   188,     4,    -1,   272,     4,
      -1,   283,   393,    -1,     4,     4,     4,     4,     4,     4,
       4,     4,     4,    -1,     4,     4,     4,     4,     4,     4,
      -1,    57,    -1,   153,    -1,   274,    -1,    95,    -1,   163,
     590,    -1,   289,   591,    -1,    41,   393,   393,    -1,   216,
     393,   393,    -1,   119,    -1,   295,   119,    -1,    41,   393,
     393,    -1,   216,   393,   393,    -1,   119,    -1,   295,   119,
      -1,   211,    -1,    12,    -1,   134,    -1,   227,    -1,    35,
      -1,   115,    -1,     4,    -1,    67,    -1,    64,     5,    -1,
     316,   403,    -1,   341,     4,     4,     4,    -1,   316,   403,
      -1,    64,     5,    -1,    64,   167,    -1,    64,   282,    -1,
     316,   403,    -1,   341,     4,     4,     4,    -1,    64,     5,
      -1,    64,   167,    -1,    64,   282,    -1,    64,   339,    -1,
     316,   403,    -1,   341,     4,     4,     4,    -1,   393,    -1,
     393,   103,    -1,   216,   600,    -1,   327,   393,    -1,   327,
     393,   103,    -1,    41,    -1,   393,    -1,   119,    -1,    26,
     603,    -1,   136,   604,    -1,   384,   602,    -1,   232,   621,
      -1,   120,   622,    -1,   246,     5,    -1,   130,     5,    -1,
      64,     5,    -1,   305,     4,    -1,   130,     5,   420,    -1,
      64,     5,   420,    -1,   305,     4,   420,    -1,   274,    92,
     611,    -1,   169,    92,   614,    -1,   168,    92,   617,    -1,
     605,    -1,   173,   605,    -1,   317,   606,    -1,   301,   607,
      -1,   126,    92,   608,    -1,   214,   609,    -1,   274,   173,
     612,    -1,   274,    92,   613,    -1,   169,   173,   615,    -1,
     169,    92,   616,    -1,   168,   173,   618,    -1,   168,    92,
     619,    -1,   269,   620,    -1,   130,     5,    -1,    64,     5,
      -1,   305,     4,    -1,   130,     5,    -1,    64,     5,    -1,
     305,     4,    -1,   130,     5,    -1,    64,     5,    -1,   305,
       4,    -1,   130,     5,    -1,    64,     5,    -1,   305,     4,
      -1,   173,   610,    -1,   130,     5,     4,    -1,    64,     5,
       4,    -1,   305,     4,     4,    -1,   130,     5,    -1,    64,
       5,    -1,   305,     4,    -1,   130,     5,   420,    -1,    64,
       5,   420,    -1,   305,     4,   420,    -1,   130,     5,    -1,
      64,     5,    -1,   305,     4,    -1,   130,     5,    -1,    64,
       5,    -1,   305,     4,    -1,   130,     5,   420,    -1,    64,
       5,   420,    -1,   305,     4,   420,    -1,   130,     5,    -1,
      64,     5,    -1,   305,     4,    -1,   130,     5,    -1,    64,
       5,    -1,   305,     4,    -1,   130,     5,   420,    -1,    64,
       5,   420,    -1,   305,     4,   420,    -1,   130,     5,    -1,
      64,     5,    -1,   305,     4,    -1,   130,     5,    -1,    64,
       5,    -1,   305,     4,    -1,   130,     5,    -1,    64,     5,
      -1,   305,     4,    -1,   130,     5,   420,    -1,    64,     5,
     420,    -1,   305,     4,   420,    -1,   130,     5,     5,   420,
      -1,   624,     4,     4,   393,   393,   398,    -1,   624,     4,
      -1,   105,    -1,    53,    -1,   329,    -1,   149,    -1,   116,
      -1,    -1,     4,   393,   393,   393,   393,    -1,   231,    -1,
     231,     4,   393,   393,   393,   393,    -1,   136,   301,   626,
      -1,   136,    62,    -1,   136,    62,   393,   393,    -1,     4,
      -1,     4,     4,    -1,   393,   403,    -1,   393,   393,    -1,
     327,   393,   393,    -1,   404,   410,   411,    -1,    15,   631,
      -1,   271,     4,    -1,   268,   630,    -1,    23,   629,    -1,
       4,     4,    -1,     4,     5,    -1,   320,     4,     5,    -1,
       4,     4,    -1,     4,     5,    -1,   320,     4,     5,    -1,
       4,    -1,     4,   404,   410,    -1,   327,     4,   404,   410,
      -1,   252,    67,    -1,   257,    -1,   393,   393,    -1,   393,
     393,    11,   393,   393,    -1,   393,   393,    11,   405,   393,
     393,    -1,   393,   393,    11,   403,   410,   402,    -1,   327,
     634,    -1,   135,    -1,   135,   393,    -1,   393,   393,    -1,
     393,   393,    11,   393,   393,    -1,   393,   393,    11,   405,
     393,   393,    -1,   393,   393,    11,   403,   410,   402,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   497,   497,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,   520,   521,   522,   523,   524,
     525,   526,   527,   528,   529,   530,   531,   532,   533,   534,
     535,   536,   537,   538,   539,   540,   541,   542,   543,   544,
     545,   546,   547,   548,   549,   550,   551,   552,   553,   554,
     555,   556,   559,   560,   563,   564,   565,   566,   567,   568,
     569,   570,   571,   572,   573,   576,   578,   579,   580,   581,
     583,   584,   585,   586,   589,   590,   591,   592,   593,   596,
     597,   600,   601,   602,   605,   608,   611,   614,   626,   633,
     640,   648,   649,   650,   651,   652,   655,   656,   657,   658,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   675,   676,   677,   678,
     679,   680,   681,   682,   685,   686,   689,   690,   691,   692,
     693,   694,   697,   698,   699,   700,   701,   702,   703,   704,
     705,   706,   707,   708,   709,   710,   711,   712,   713,   716,
     717,   718,   719,   720,   721,   722,   723,   726,   727,   728,
     729,   730,   733,   734,   735,   736,   737,   738,   739,   740,
     743,   744,   745,   748,   749,   750,   751,   754,   755,   756,
     759,   760,   761,   764,   765,   766,   769,   770,   771,   772,
     773,   774,   775,   776,   779,   780,   783,   784,   785,   786,
     787,   788,   791,   792,   793,   794,   797,   798,   799,   800,
     801,   802,   805,   806,   807,   808,   809,   810,   811,   812,
     813,   814,   818,   819,   820,   821,   824,   825,   828,   829,
     832,   833,   836,   837,   840,   841,   845,   846,   847,   848,
     849,   850,   851,   852,   855,   856,   859,   860,   861,   863,
     865,   866,   867,   869,   873,   874,   877,   878,   880,   883,
     885,   891,   892,   893,   894,   897,   898,   899,   902,   903,
     904,   905,   906,   907,   908,   914,   915,   918,   919,   920,
     921,   922,   925,   926,   927,   928,   931,   932,   937,   942,
     949,   951,   953,   955,   957,   959,   960,   961,   964,   966,
     968,   970,   972,   975,   976,   979,   980,   981,   982,   983,
     984,   987,   990,   993,   999,  1005,  1008,  1009,  1012,  1013,
    1014,  1021,  1022,  1023,  1024,  1027,  1028,  1031,  1032,  1035,
    1036,  1037,  1041,  1043,  1047,  1048,  1051,  1053,  1054,  1055,
    1056,  1059,  1060,  1062,  1063,  1064,  1067,  1069,  1071,  1072,
    1074,  1076,  1078,  1080,  1084,  1087,  1088,  1089,  1090,  1093,
    1094,  1097,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,
    1108,  1109,  1110,  1111,  1112,  1113,  1114,  1115,  1116,  1117,
    1118,  1119,  1120,  1121,  1122,  1123,  1124,  1125,  1126,  1127,
    1128,  1129,  1130,  1131,  1132,  1133,  1134,  1136,  1137,  1138,
    1139,  1140,  1141,  1142,  1144,  1145,  1146,  1149,  1151,  1155,
    1157,  1161,  1162,  1163,  1164,  1165,  1166,  1167,  1168,  1171,
    1172,  1173,  1176,  1177,  1180,  1181,  1183,  1185,  1186,  1187,
    1188,  1189,  1190,  1197,  1198,  1201,  1202,  1203,  1206,  1207,
    1210,  1213,  1214,  1216,  1220,  1221,  1222,  1225,  1229,  1231,
    1232,  1233,  1234,  1235,  1236,  1237,  1238,  1239,  1240,  1243,
    1244,  1245,  1248,  1249,  1252,  1254,  1262,  1264,  1266,  1270,
    1271,  1273,  1276,  1279,  1280,  1284,  1286,  1289,  1294,  1295,
    1296,  1300,  1301,  1302,  1305,  1306,  1307,  1310,  1311,  1313,
    1314,  1315,  1316,  1317,  1318,  1319,  1320,  1321,  1322,  1324,
    1325,  1328,  1329,  1332,  1333,  1334,  1335,  1338,  1339,  1342,
    1344,  1347,  1351,  1352,  1353,  1355,  1357,  1361,  1362,  1363,
    1366,  1367,  1368,  1369,  1370,  1371,  1374,  1375,  1376,  1377,
    1378,  1379,  1380,  1383,  1384,  1387,  1390,  1391,  1392,  1395,
    1398,  1399,  1400,  1403,  1404,  1405,  1408,  1409,  1410,  1411,
    1412,  1413,  1416,  1417,  1418,  1419,  1420,  1421,  1422,  1423,
    1426,  1427,  1428,  1429,  1432,  1433,  1436,  1437,  1440,  1441,
    1444,  1445,  1448,  1449,  1452,  1453,  1454,  1457,  1458,  1461,
    1462,  1465,  1468,  1476,  1477,  1480,  1481,  1482,  1483,  1484,
    1485,  1486,  1487,  1488,  1489,  1490,  1491,  1492,  1493,  1494,
    1495,  1496,  1497,  1500,  1503,  1504,  1507,  1508,  1509,  1510,
    1513,  1514,  1515,  1516,  1519,  1520,  1521,  1522,  1523,  1524,
    1527,  1528,  1529,  1530,  1531,  1532,  1534,  1535,  1540,  1541,
    1544,  1546,  1548,  1551,  1552,  1553,  1554,  1555,  1556,  1559,
    1561,  1563,  1565,  1566,  1568,  1570,  1572,  1574,  1576,  1577,
    1578,  1581,  1582,  1583,  1584,  1585,  1586,  1588,  1589,  1590,
    1593,  1596,  1598,  1600,  1602,  1604,  1606,  1608,  1610,  1613,
    1615,  1617,  1619,  1620,  1621,  1622,  1623,  1624,  1625,  1626,
    1627,  1630,  1631,  1632,  1633,  1634,  1635,  1636,  1638,  1640,
    1641,  1642,  1645,  1646,  1647,  1648,  1649,  1650,  1652,  1653,
    1654,  1657,  1658,  1659,  1660,  1661,  1664,  1667,  1670,  1673,
    1676,  1679,  1682,  1685,  1688,  1693,  1696,  1699,  1702,  1705,
    1708,  1711,  1714,  1717,  1720,  1723,  1728,  1731,  1734,  1737,
    1740,  1743,  1746,  1749,  1752,  1757,  1759,  1761,  1763,  1765,
    1767,  1772,  1774,  1776,  1780,  1783,  1786,  1789,  1792,  1795,
    1798,  1801,  1804,  1807,  1810,  1815,  1816,  1817,  1818,  1819,
    1820,  1821,  1823,  1825,  1826,  1827,  1830,  1831,  1832,  1833,
    1834,  1835,  1837,  1838,  1839,  1842,  1844,  1846,  1847,  1849,
    1851,  1855,  1856,  1859,  1860,  1861,  1864,  1867,  1868,  1869,
    1870,  1871,  1872,  1873,  1876,  1884,  1885,  1886,  1887,  1889,
    1891,  1892,  1892,  1893,  1894,  1895,  1896,  1897,  1899,  1900,
    1902,  1905,  1907,  1909,  1912,  1913,  1914,  1917,  1920,  1923,
    1927,  1930,  1933,  1936,  1940,  1945,  1950,  1952,  1954,  1955,
    1957,  1959,  1961,  1963,  1964,  1965,  1967,  1969,  1971,  1975,
    1980,  1982,  1984,  1986,  1988,  1990,  1992,  1994,  1996,  1998,
    2000,  2003,  2004,  2006,  2008,  2009,  2011,  2013,  2014,  2015,
    2017,  2019,  2020,  2021,  2023,  2024,  2027,  2031,  2034,  2037,
    2041,  2046,  2052,  2053,  2054,  2056,  2057,  2061,  2063,  2064,
    2065,  2068,  2071,  2074,  2077,  2080,  2082,  2084,  2089,  2092,
    2093,  2094,  2097,  2101,  2102,  2104,  2105,  2106,  2108,  2109,
    2111,  2112,  2117,  2118,  2120,  2121,  2123,  2124,  2125,  2126,
    2127,  2128,  2130,  2132,  2134,  2135,  2136,  2138,  2140,  2141,
    2142,  2143,  2144,  2145,  2146,  2147,  2148,  2149,  2150,  2152,
    2154,  2155,  2156,  2157,  2159,  2160,  2161,  2162,  2163,  2165,
    2166,  2167,  2168,  2169,  2170,  2171,  2174,  2175,  2176,  2177,
    2178,  2179,  2180,  2181,  2182,  2183,  2184,  2185,  2186,  2187,
    2188,  2189,  2190,  2191,  2192,  2193,  2194,  2197,  2198,  2199,
    2200,  2201,  2202,  2210,  2217,  2226,  2235,  2242,  2249,  2257,
    2265,  2272,  2277,  2282,  2287,  2292,  2297,  2302,  2308,  2318,
    2328,  2338,  2345,  2355,  2365,  2374,  2386,  2399,  2405,  2408,
    2409,  2418,  2420,  2422,  2427,  2431,  2432,  2433,  2439,  2441,
    2443,  2446,  2447,  2448,  2449,  2450,  2451,  2452,  2455,  2456,
    2457,  2458,  2459,  2460,  2462,  2464,  2466,  2468,  2470,  2472,
    2474,  2476,  2478,  2481,  2482,  2483,  2484,  2486,  2489,  2491,
    2493,  2494,  2495,  2497,  2500,  2503,  2505,  2506,  2507,  2508,
    2510,  2511,  2512,  2513,  2514,  2515,  2516,  2518,  2520,  2522,
    2525,  2526,  2527,  2529,  2532,  2533,  2534,  2535,  2537,  2540,
    2544,  2545,  2546,  2549,  2552,  2555,  2557,  2558,  2559,  2560,
    2562,  2565,  2566,  2568,  2569,  2570,  2571,  2572,  2574,  2575,
    2577,  2580,  2581,  2582,  2583,  2584,  2585,  2587,  2589,  2590,
    2591,  2592,  2594,  2596,  2597,  2598,  2599,  2600,  2601,  2603,
    2604,  2606,  2607,  2610,  2611,  2612,  2613,  2616,  2617,  2620,
    2621,  2624,  2625,  2628,  2641,  2642,  2646,  2647,  2651,  2652,
    2655,  2659,  2665,  2667,  2670,  2672,  2675,  2677,  2681,  2682,
    2683,  2684,  2685,  2686,  2687,  2691,  2692,  2695,  2696,  2697,
    2698,  2699,  2700,  2701,  2702,  2705,  2706,  2707,  2708,  2709,
    2710,  2711,  2712,  2713,  2714,  2715,  2716,  2719,  2720,  2723,
    2724,  2724,  2727,  2729,  2731,  2734,  2735,  2736,  2737,  2738,
    2739,  2742,  2743,  2746,  2747,  2750,  2754,  2755,  2755,  2758,
    2759,  2762,  2765,  2769,  2770,  2771,  2772,  2773,  2774,  2775,
    2776,  2777,  2778,  2779,  2780,  2782,  2783,  2784,  2785,  2786,
    2787,  2788,  2789,  2790,  2791,  2792,  2793,  2794,  2795,  2798,
    2799,  2800,  2801,  2802,  2803,  2804,  2805,  2811,  2812,  2813,
    2814,  2817,  2819,  2820,  2825,  2827,  2828,  2829,  2830,  2833,
    2834,  2839,  2843,  2844,  2845,  2848,  2849,  2854,  2855,  2858,
    2860,  2861,  2862,  2867,  2869,  2875,  2876,  2877,  2878,  2881,
    2882,  2885,  2887,  2889,  2890,  2893,  2895,  2896,  2897,  2900,
    2901,  2902,  2905,  2906,  2907,  2910,  2911,  2914,  2915,  2916,
    2919,  2923,  2924,  2925,  2926,  2927,  2930,  2931,  2932,  2933,
    2934,  2935,  2938,  2939,  2940,  2941,  2942,  2945,  2946,  2947,
    2950,  2951,  2952,  2953,  2954,  2955,  2958,  2959,  2960,  2963,
    2965,  2967,  2969,  2970,  2971,  2974,  2975,  2976,  2977,  2978,
    2979,  2980,  2981,  2982,  2983,  2984,  2985,  2986,  2989,  2990,
    2991,  2994,  2995,  2996,  2999,  3000,  3001,  3004,  3005,  3006,
    3009,  3010,  3011,  3012,  3015,  3016,  3017,  3020,  3022,  3024,
    3028,  3029,  3030,  3033,  3034,  3035,  3038,  3040,  3042,  3046,
    3047,  3048,  3051,  3052,  3053,  3056,  3058,  3060,  3064,  3065,
    3066,  3069,  3070,  3071,  3074,  3075,  3076,  3079,  3081,  3083,
    3087,  3091,  3093,  3098,  3101,  3102,  3103,  3104,  3107,  3108,
    3111,  3113,  3115,  3116,  3117,  3121,  3122,  3123,  3126,  3127,
    3130,  3132,  3133,  3134,  3135,  3138,  3139,  3140,  3143,  3144,
    3145,  3148,  3149,  3154,  3156,  3159,  3166,  3167,  3169,  3174,
    3176,  3179,  3180,  3181,  3182,  3184,  3189
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
  "ARRAY_", "ARROW_", "AREA_", "ASINH_", "AST_", "AUTO_", "AUX_",
  "AVERAGE_", "AXES_", "AZIMUTH_", "B1950_", "BACK_", "BACKGROUND_",
  "BASE_", "BBOX_", "BEGIN_", "BG_", "BIG_", "BIGENDIAN_", "BIN_",
  "BITPIX_", "BLEND_", "BLOCK_", "BORDER_", "BOTTOM_", "BOX_",
  "BOXANNULUS_", "BOXCAR_", "BOXCIRCLE_", "BPANDA_", "BUFFER_", "BW_",
  "CALLBACK_", "CANVAS_", "CATALOG_", "CELESTIAL_", "CENTER_", "CENTROID_",
  "CHANNEL_", "CIRCLE_", "CIAO_", "CLEAR_", "CLIP_", "COLOR_",
  "COLORBURN_", "COLORDODGE_", "COLORBAR_", "COLORMAP_", "COLORSCALE_",
  "COLORSPACE_", "COLS_", "COLUMN_", "COMMAND_", "COMPASS_", "COMPOSITE_",
  "COMPRESS_", "CONTOUR_", "CONTRAST_", "COORDINATES_", "COPY_", "COUNT_",
  "CPANDA_", "CREATE_", "CROP_", "CROSS_", "CROSSHAIR_", "CUBE_",
  "CURSOR_", "CUT_", "CMYK_", "DARKEN_", "DASH_", "DASHLIST_", "DATA_",
  "DATAMIN_", "DATASEC_", "DEBUG_", "DEGREES_", "DEFAULT_", "DELETE_",
  "DEPTH_", "DETECTOR_", "DIAMOND_", "DIFFERENCE_", "DIM_", "DOWN_",
  "DS9_", "EDIT_", "ECLIPTIC_", "ELEVATION_", "ELLIPTIC_", "ELLIPSE_",
  "ELLIPSEANNULUS_", "END_", "ENVI_", "EPANDA_", "EPSILON_", "EQUATORIAL_",
  "ERASE_", "EXCLUSION_", "EXT_", "FADE_", "FACTOR_", "FALSE_", "FILE_",
  "FILL_", "FILTER_", "FIRST_", "FIP_", "FIT_", "FITS_", "FITSY_",
  "FIXED_", "FK4_", "FK5_", "FONT_", "FORMAT_", "FOOTPRINT_", "FROM_",
  "FRONT_", "FULL_", "FUNCTION_", "GALACTIC_", "GAUSSIAN_", "GET_",
  "GLOBAL_", "GRAPHICS_", "GRAY_", "GRID_", "GZ_", "HANDLE_", "HARDLIGHT_",
  "HAS_", "HEAD_", "HEADER_", "HEIGHT_", "HIDE_", "HIGHLITE_", "HISTEQU_",
  "HISTOGRAM_", "HORIZONTAL_", "HUE_", "HSV_", "HLS_", "ICRS_", "ID_",
  "IIS_", "IMAGE_", "INCLUDE_", "INCR_", "INFO_", "ITERATION_", "IRAF_",
  "IRAFMIN_", "J2000_", "KEY_", "KEYWORD_", "LABEL_", "LAYER_", "LAYERNO_",
  "LAST_", "LENGTH_", "LEVEL_", "LIGHTEN_", "LITTLE_", "LITTLEENDIAN_",
  "LINE_", "LINEAR_", "LIST_", "LOAD_", "LOCAL_", "LOG_", "LUMINOSITY_",
  "MACOSX_", "MAGNIFIER_", "MATCH_", "MAP_", "MARK_", "MARKER_", "MASK_",
  "MEDIAN_", "MESSAGE_", "METHOD_", "MINMAX_", "MINOR_", "MIP_", "MMAP_",
  "MMAPINCR_", "MOSAIC_", "MODE_", "MOTION_", "MULTICOLOR_", "MULTIPLY_",
  "MOVE_", "NAME_", "NAN_", "NATIVE_", "NAXES_", "NEW_", "NEXT_", "NO_",
  "NONE_", "NORMAL_", "NONNAN_", "NONZERO_", "NOW_", "NRRD_", "NUMBER_",
  "OBJECT_", "OFF_", "ON_", "ONLY_", "OPTION_", "ORIENT_", "OVERLAY_",
  "PAN_", "PANNER_", "PARSER_", "PASTE_", "PERF_", "PHOTO_", "PHYSICAL_",
  "PIXEL_", "PLOT2D_", "PLOT3D_", "POINT_", "POINTER_", "POLYGON_",
  "POSTSCRIPT_", "POW_", "PRECISION_", "PRINT_", "PRESERVE_",
  "PROJECTION_", "PROPERTY_", "PUBLICATION_", "PROS_", "QUERY_", "RADIAL_",
  "RADIUS_", "RANGE_", "REGION_", "REPLACE_", "RESAMPLE_", "RESCAN_",
  "RESET_", "RESOLUTION_", "REVEAL_", "RGB_", "ROOT_", "ROTATE_", "RULER_",
  "SAMPLE_", "SAOIMAGE_", "SAOTNG_", "SAVE_", "SATURATION_", "SCALE_",
  "SCAN_", "SCIENTIFIC_", "SCOPE_", "SCREEN_", "SEGMENT_", "SELECT_",
  "SET_", "SEXAGESIMAL_", "SHAPE_", "SHADE_", "SHARED_", "SHIFT_",
  "SHMID_", "SHOW_", "SIGMA_", "SINH_", "SIZE_", "SLICE_", "SMMAP_",
  "SMOOTH_", "SOFTLIGHT_", "SOCKET_", "SOCKETGZ_", "SOURCE_", "SQRT_",
  "SQUARED_", "SSHARED_", "STATS_", "STATUS_", "STRENGTH_", "SUM_",
  "SYNC_", "SYSTEM_", "TABLE_", "TAG_", "TEMPLATE_", "TEXT_", "THREADS_",
  "THREED_", "THRESHOLD_", "THICK_", "TOP_", "TRANSPARENCY_", "TO_",
  "TOGGLE_", "TOPHAT_", "TRUE_", "TYPE_", "UNDO_", "UNHIGHLITE_",
  "UNLOAD_", "UNSELECT_", "UPDATE_", "UP_", "USER_", "VALUE_", "VAR_",
  "VIEW_", "VECTOR_", "VERSION_", "VERTEX_", "VERTICAL_", "WARP_", "WCS_",
  "WCSA_", "WCSB_", "WCSC_", "WCSD_", "WCSE_", "WCSF_", "WCSG_", "WCSH_",
  "WCSI_", "WCSJ_", "WCSK_", "WCSL_", "WCSM_", "WCSN_", "WCSO_", "WCSP_",
  "WCSQ_", "WCSR_", "WCSS_", "WCST_", "WCSU_", "WCSV_", "WCSW_", "WCSX_",
  "WCSY_", "WCSZ_", "WCS0_", "WFPC2_", "WIDTH_", "WIN32_", "XML_", "XY_",
  "YES_", "ZERO_", "ZMAX_", "ZSCALE_", "PIXMASK_", "ZOOM_", "FIELDS_",
  "'Y'", "'N'", "'X'", "'='", "$accept", "command", "numeric", "debug",
  "yesno", "fileNameType", "optangle", "angle", "sexagesimal", "hms",
  "dms", "coord", "coordSystem", "wcsSystem", "internalSystem", "maskType",
  "maskBlend", "scaleType", "minmaxMode", "skyFrame", "skyFormat",
  "skyDist", "shmType", "incrLoad", "layerType", "pointShape", "pointSize",
  "analysisTask", "analysisMethod", "endian", "threed", "threedShade",
  "threedShadeNormal", "threedBorder", "threedCompass", "threedHighlite",
  "threedView", "bin", "binAbout", "binFactor", "binFunction", "binTo",
  "block", "blockTo", "clip", "clipScope", "clipMode", "clipMinMax",
  "clipZScale", "colormap", "colormapMotion", "colorscale", "contour",
  "contourCreate", "contourDelete", "contourLoad", "contourClipMode",
  "contourClipScope", "contourMethod", "contourPaste", "contourSave",
  "crop", "crop3d", "crosshair", "cube", "cutMethod", "fade", "fitsy",
  "get", "getHorzCut", "getVertCut", "getBin", "getBinCols", "getBlock",
  "getClip", "getClipMinMax", "getClipZScale", "getColorbar",
  "getColorMap", "getColorMapLevel", "getColorScale", "getColorScaleLevel",
  "getContour", "getContourClip", "getContourColorScale", "getCoord",
  "getCrop", "getCrosshair", "getCube", "getCursor", "getData", "getInfo",
  "getiis", "getIISFileName", "getFits", "getFitsExt", "getFitsHeader",
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
  "renderBackground", "reveal", "rgb", "multicolor", "hls", "hsv",
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
     635,   636,   637,   638,   639,   640,   641,    89,    78,    88,
      61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   391,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   392,   392,   392,   392,   392,   392,   392,   392,
     392,   392,   393,   393,   394,   394,   394,   394,   394,   394,
     394,   394,   394,   394,   394,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   396,   396,   396,   396,   396,   397,
     397,   398,   398,   398,   399,   400,   401,   402,   402,   402,
     402,   403,   403,   403,   403,   403,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   404,
     404,   404,   404,   404,   405,   405,   406,   406,   406,   406,
     406,   406,   407,   407,   407,   407,   407,   407,   407,   407,
     407,   407,   407,   407,   407,   407,   407,   407,   407,   408,
     408,   408,   408,   408,   408,   408,   408,   409,   409,   409,
     409,   409,   410,   410,   410,   410,   410,   410,   410,   410,
     411,   411,   411,   412,   412,   412,   412,   413,   413,   413,
     414,   414,   414,   415,   415,   415,   416,   416,   416,   416,
     416,   416,   416,   416,   417,   417,   418,   418,   418,   418,
     418,   418,   419,   419,   419,   419,   420,   420,   420,   420,
     420,   420,   421,   421,   421,   421,   421,   421,   421,   421,
     421,   421,   422,   422,   422,   422,   423,   423,   424,   424,
     425,   425,   426,   426,   427,   427,   428,   428,   428,   428,
     428,   428,   428,   428,   429,   429,   430,   430,   430,   430,
     430,   430,   430,   430,   431,   431,   432,   432,   432,   432,
     432,   433,   433,   433,   433,   434,   434,   434,   435,   435,
     435,   435,   435,   435,   435,   436,   436,   437,   437,   437,
     437,   437,   438,   438,   438,   438,   439,   439,   439,   439,
     440,   440,   440,   440,   440,   440,   440,   440,   441,   441,
     441,   441,   441,   442,   442,   443,   443,   443,   443,   443,
     443,   444,   444,   444,   444,   444,   445,   445,   446,   446,
     446,   447,   447,   447,   447,   448,   448,   449,   449,   450,
     450,   450,   451,   451,   452,   452,   452,   452,   452,   452,
     452,   453,   453,   453,   453,   453,   454,   454,   454,   454,
     454,   454,   454,   454,   455,   456,   456,   456,   456,   457,
     457,   458,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   459,   459,   459,
     459,   459,   459,   459,   459,   459,   459,   460,   460,   461,
     461,   462,   462,   462,   462,   462,   462,   462,   462,   463,
     463,   463,   464,   464,   465,   465,   465,   465,   465,   465,
     465,   465,   465,   466,   466,   467,   467,   467,   468,   468,
     469,   470,   470,   470,   471,   471,   471,   472,   473,   473,
     473,   473,   473,   473,   473,   473,   473,   473,   473,   474,
     474,   474,   475,   475,   476,   476,   477,   477,   477,   478,
     478,   478,   479,   480,   480,   481,   481,   481,   482,   482,
     482,   483,   483,   483,   484,   484,   484,   485,   485,   485,
     485,   485,   485,   485,   485,   485,   485,   485,   485,   485,
     485,   486,   486,   487,   487,   487,   487,   488,   488,   489,
     489,   489,   490,   490,   490,   490,   490,   491,   491,   491,
     492,   492,   492,   492,   492,   492,   493,   493,   493,   493,
     493,   493,   493,   494,   494,   495,   496,   496,   496,   497,
     498,   498,   498,   499,   499,   499,   500,   500,   500,   500,
     500,   500,   501,   501,   501,   501,   501,   501,   501,   501,
     502,   502,   502,   502,   503,   503,   504,   504,   505,   505,
     506,   506,   507,   507,   508,   508,   508,   509,   509,   510,
     510,   511,   511,   512,   512,   513,   513,   513,   513,   513,
     513,   513,   513,   513,   513,   513,   513,   513,   513,   513,
     513,   513,   513,   514,   515,   515,   516,   516,   516,   516,
     517,   517,   517,   517,   518,   518,   518,   518,   518,   518,
     519,   519,   519,   519,   519,   519,   519,   519,   520,   520,
     521,   521,   521,   522,   522,   522,   522,   522,   522,   523,
     523,   523,   523,   523,   523,   523,   523,   523,   523,   523,
     523,   524,   524,   524,   524,   524,   524,   524,   524,   524,
     525,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   526,   526,   526,   526,   526,   526,   526,   526,   526,
     526,   527,   527,   527,   527,   527,   527,   527,   527,   527,
     527,   527,   528,   528,   528,   528,   528,   528,   528,   528,
     528,   529,   529,   529,   529,   529,   530,   530,   530,   530,
     530,   530,   530,   530,   530,   531,   531,   531,   531,   531,
     531,   531,   531,   531,   531,   531,   532,   532,   532,   532,
     532,   532,   532,   532,   532,   533,   533,   533,   533,   533,
     533,   533,   533,   533,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   534,   534,   535,   535,   535,   535,   535,
     535,   535,   535,   535,   535,   535,   536,   536,   536,   536,
     536,   536,   536,   536,   536,   537,   537,   537,   537,   537,
     537,   538,   538,   539,   539,   539,   540,   541,   541,   541,
     541,   541,   541,   541,   542,   543,   543,   543,   543,   543,
     543,   544,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   543,   543,   543,   543,
     543,   543,   543,   543,   543,   543,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   545,   545,   545,
     545,   545,   545,   545,   545,   545,   545,   546,   546,   546,
     546,   546,   546,   547,   547,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   547,   547,
     547,   547,   547,   547,   547,   547,   547,   547,   547,   548,
     548,   549,   549,   549,   549,   550,   550,   550,   551,   551,
     551,   552,   552,   552,   552,   552,   552,   552,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   553,   553,   553,   553,   553,   553,   553,
     553,   553,   553,   554,   554,   554,   554,   555,   555,   556,
     556,   557,   557,   558,   559,   559,   559,   559,   559,   559,
     560,   560,   561,   561,   561,   561,   561,   561,   562,   562,
     562,   562,   562,   562,   562,   563,   563,   564,   564,   564,
     564,   564,   564,   564,   564,   565,   565,   565,   565,   565,
     565,   565,   565,   565,   565,   565,   565,   566,   566,   567,
     568,   567,   569,   569,   569,   570,   570,   570,   570,   570,
     570,   571,   571,   572,   572,   573,   574,   575,   574,   576,
     576,   577,   578,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   579,
     579,   579,   579,   579,   579,   579,   579,   579,   579,   580,
     580,   580,   580,   580,   580,   580,   580,   581,   581,   581,
     581,   582,   582,   582,   582,   582,   582,   582,   582,   583,
     583,   583,   584,   584,   584,   585,   585,   585,   585,   586,
     586,   586,   586,   587,   587,   588,   588,   588,   588,   589,
     589,   590,   590,   590,   590,   591,   591,   591,   591,   592,
     592,   592,   593,   593,   593,   594,   594,   595,   595,   595,
     596,   597,   597,   597,   597,   597,   598,   598,   598,   598,
     598,   598,   599,   599,   599,   599,   599,   600,   600,   600,
     601,   601,   601,   601,   601,   601,   602,   602,   602,   603,
     603,   603,   603,   603,   603,   604,   604,   604,   604,   604,
     604,   604,   604,   604,   604,   604,   604,   604,   605,   605,
     605,   606,   606,   606,   607,   607,   607,   608,   608,   608,
     609,   609,   609,   609,   610,   610,   610,   611,   611,   611,
     612,   612,   612,   613,   613,   613,   614,   614,   614,   615,
     615,   615,   616,   616,   616,   617,   617,   617,   618,   618,
     618,   619,   619,   619,   620,   620,   620,   621,   621,   621,
     622,   623,   623,   623,   624,   624,   624,   624,   625,   625,
     625,   625,   625,   625,   625,   626,   626,   626,   627,   627,
     628,   628,   628,   628,   628,   629,   629,   629,   630,   630,
     630,   631,   631,   631,   631,   632,   633,   633,   633,   633,
     633,   634,   634,   634,   634,   634,   634
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     3,     3,     2,     1,     1,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     1,     2,     3,     2,     2,     2,     3,
       2,     2,     2,     2,     3,     2,     2,     2,     3,     2,
       2,     2,     2,     2,     2,     1,     3,     2,     2,     2,
       2,     1,     2,     2,     2,     1,     2,     1,     2,     2,
       2,     2,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     2,     1,     1,     0,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       0,     1,     1,     0,     1,     1,     1,     0,     1,     1,
       0,     1,     1,     0,     1,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     0,     1,     1,     1,     0,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     2,     2,     2,     1,     2,     1,     2,
       1,     2,     1,     2,     2,     6,     2,     4,     2,     2,
       2,     3,     2,     2,     1,     2,     1,     2,     4,     5,
       2,     3,     5,     6,     1,     1,     1,     7,    11,     8,
      12,     1,     2,     2,     3,     1,     1,     2,     2,     2,
       2,     3,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     1,     3,     2,     2,     2,
       5,     9,     9,     9,     7,     1,     2,     1,     5,     9,
       9,     9,     7,     1,     2,     2,     3,     2,     2,     2,
       2,    13,    13,    12,    12,     1,     0,     1,     1,     4,
       6,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     6,     3,     4,     0,     6,     8,     2,     3,     3,
       3,     0,     4,     4,     4,     4,     3,     3,     1,     3,
       5,     4,     4,     3,     2,     0,     1,     1,     1,     1,
       1,     3,     0,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     1,     2,     2,
       2,     4,     3,     2,     2,     2,     2,     2,     1,     3,
       2,     2,     2,     2,     1,     2,     8,     2,     1,     2,
       1,     2,     1,     4,     3,     2,     1,     7,     8,     7,
       8,     1,     1,     1,     2,     1,     1,     2,     1,     0,
       2,     2,     1,     2,     0,     2,     2,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     0,     1,
       2,     1,     4,     5,     0,     2,     1,     5,     2,     2,
       1,     1,     1,     1,     2,     1,     2,     1,     1,     0,
       1,     1,     0,     1,     5,     6,     3,     6,     3,     1,
       3,     1,     1,     1,     3,     6,     7,     5,     2,     1,
       5,     4,     1,     3,     0,     1,     2,     1,     4,     1,
       2,     1,     2,     3,     2,     1,     2,     1,     4,     2,
       1,     1,     3,     1,     2,     3,     2,     0,     1,     1,
       4,     2,     0,     1,     3,     4,     4,     0,     1,     1,
       1,     1,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       2,     1,     2,     2,     2,     2,     1,     1,     2,     1,
       0,     1,     1,     2,     0,     1,     0,     1,     0,     1,
       0,     1,     0,     1,     0,     2,     2,     0,     1,     2,
       1,     6,     5,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     2,     1,     1,     1,     2,     1,     1,
       1,     2,     2,     2,     0,     1,     0,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     1,     2,
       3,     1,     2,     2,     4,     5,     1,    10,     1,     2,
       3,     3,     2,     2,     2,     2,     2,     2,     2,     4,
       4,     4,     3,     3,     5,     4,     4,     4,     3,     3,
       3,     3,     3,     3,     2,     2,     4,     3,     3,     3,
       3,     4,     4,     4,     4,     5,     4,     6,     7,     4,
       4,     5,     2,     3,     3,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     3,     4,     3,     5,     6,     3,
       3,     4,     3,     3,     3,     3,     3,     5,     3,     3,
       4,     3,     2,     2,     1,     3,     4,     4,     4,     4,
       4,     6,     4,     4,     5,     4,     4,     4,     4,     5,
       4,     6,     7,     4,     4,     5,     5,     5,     5,     5,
       5,     7,     5,     5,     6,     4,     4,     4,     4,     4,
       6,     4,     4,     5,     5,     5,     5,     5,     6,     5,
       7,     8,     5,     5,     6,     3,     3,     3,     3,     4,
       3,     5,     6,     3,     3,     4,     3,     3,     3,     3,
       3,     5,     3,     3,     4,     4,     4,     3,     5,     4,
       4,     2,     3,     6,     6,     1,     1,     1,     2,     2,
       2,     3,     3,     2,    12,     2,     2,     1,     3,     4,
       2,     0,     3,     1,     2,     2,     2,     2,     2,     4,
       4,     4,     4,     3,     3,     4,     5,     8,     6,     9,
       6,     7,    10,    11,    12,     9,     5,     6,     3,     5,
       5,     6,     5,     4,     4,     4,     9,    10,    11,     9,
       6,     6,     6,     6,     6,     6,     6,     6,     6,     7,
       7,     2,     4,     4,     4,     4,     5,     4,     4,     5,
       5,     3,     4,     4,     4,     7,     9,     6,    10,    11,
      12,     9,     3,     2,     3,     5,     7,     4,     3,     3,
       6,     7,     8,     7,     7,     4,     4,     9,     4,     3,
       4,     7,     7,     2,     3,     3,     3,     4,     2,     2,
       4,    10,     3,     4,     1,     3,     2,     2,     2,     2,
       3,     5,     4,     5,     2,     2,     2,     2,     3,     2,
       2,     2,     3,     2,     3,     4,     3,     3,     6,     4,
       2,     3,     2,     2,     4,     3,     3,     2,     3,     1,
       2,     1,     2,     2,     2,     3,     1,     1,     1,     1,
       2,     1,     2,     2,     1,     2,     2,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     1,     2,
       2,     2,     3,     5,     7,     7,     6,     6,     6,     6,
       5,     6,     6,     6,     6,     6,     6,     6,    11,     7,
       7,     7,     9,     9,    10,    12,    12,     3,     2,     0,
       1,     3,     4,     4,     4,     0,     1,     1,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     3,     3,     8,     6,    10,     7,     7,     5,
       6,     6,     3,     2,     2,     3,     4,     5,     5,     5,
       3,     4,     5,     5,     5,     5,     2,     3,     3,     5,
       3,     3,     3,     3,     3,     4,     5,     5,     5,     5,
       3,     4,     5,     5,     2,     2,     3,     5,     6,     6,
       3,     3,     6,     6,     5,     5,     2,     3,     3,     5,
       6,     3,     2,     2,     3,     2,     3,     2,     3,     5,
       6,     2,     2,     2,     2,     1,     4,     4,     1,     2,
       2,     2,     2,     2,     2,     2,     3,     2,     3,     2,
       3,     1,     1,     1,     1,     1,     1,     0,     2,     0,
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
       1,     1,     1,     1,     1,     1,     1,     2,     2,     4,
       2,     2,     2,     2,     2,     4,     2,     2,     2,     2,
       2,     4,     1,     2,     2,     2,     3,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3,     3,     3,     3,     3,     1,     2,     2,     2,     3,
       2,     3,     3,     3,     3,     3,     3,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     3,     3,     3,     2,     2,     2,     3,     3,     3,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     2,
       2,     2,     2,     2,     2,     3,     3,     3,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       4,     6,     2,     1,     1,     1,     1,     1,     0,     5,
       1,     6,     3,     2,     4,     1,     2,     2,     2,     3,
       3,     2,     2,     2,     2,     2,     2,     3,     2,     2,
       3,     1,     3,     4,     2,     1,     2,     5,     6,     6,
       2,     1,     2,     2,     5,     6,     6
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,     0,     0,     7,     8,     0,     0,     0,     0,
       0,   344,     0,     0,     0,     0,     0,     0,   372,     0,
       0,    23,     0,     0,     0,     0,     0,  1203,     0,     0,
       0,     0,  1134,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1134,    45,     0,     0,     0,     0,    51,     0,
       0,     0,    55,  1398,    57,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     3,
      62,    63,     0,     0,   271,     6,     0,     0,     0,     0,
       0,     0,     9,     0,     0,   305,   307,     0,     0,     0,
       0,     0,    11,   164,   166,   159,   160,   161,   165,   162,
     163,   313,    12,     0,     0,   326,     0,     0,     0,    13,
       0,     0,     0,     0,   351,     0,    14,    75,   104,     0,
     134,   103,    83,   101,     0,    80,    82,    78,   135,   102,
      79,     0,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
      76,    77,    81,   358,   172,   105,     0,    15,     0,    16,
      17,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,    64,   370,   369,    18,     0,    19,     0,     0,
       0,   434,   448,     0,   454,     0,     0,     0,     0,     0,
       0,     0,   387,     0,   527,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1134,     0,   398,     0,     0,   404,
       0,     0,     0,   408,     0,   410,     0,   412,     0,     0,
     584,   416,    20,     0,   590,    21,   595,     0,     0,   614,
     599,   600,   601,   602,   616,   604,   605,   609,   606,     0,
     608,   610,     0,     0,    22,     0,    24,     0,     0,     0,
      26,     0,     0,     0,    27,     0,   631,     0,     0,     0,
     636,     0,    28,     0,  1205,   142,  1227,     0,  1204,  1219,
    1223,  1217,     0,  1215,  1225,     0,  1221,     0,    36,     0,
       0,     0,     0,     0,     0,    30,   796,    31,     0,     0,
       0,     0,     0,     0,   797,    32,     0,    33,  1138,  1139,
    1135,  1136,  1137,     0,   142,  1229,     0,   136,     0,     0,
       0,    35,     0,    37,     0,  1240,  1239,  1238,  1237,    39,
       0,     0,     0,     0,     0,   172,     0,    40,     0,  1258,
       0,  1255,    41,     0,     0,     0,     0,    44,     0,    43,
      42,     0,  1285,  1286,    47,     0,     0,     0,    48,     0,
       0,  1302,    49,     0,     0,     0,     0,     0,     0,    50,
    1394,  1393,  1397,  1396,  1395,    52,     0,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    54,     0,
       0,  1400,    56,     0,     0,    58,     0,     0,     0,     0,
     172,    59,  1425,    60,     0,     0,    61,     1,     4,     5,
     254,     0,   246,     0,     0,   248,     0,   256,   249,   253,
     264,   265,   250,   266,     0,   252,     0,   275,   276,   273,
     272,     0,     0,   295,     0,   280,   288,   291,   290,   289,
     287,   279,   284,   285,   286,   278,     0,     0,     0,     0,
       0,     0,   283,    10,     0,     0,     0,     0,     0,     0,
       0,     0,   306,     0,     0,   314,     0,   325,   315,     0,
     327,   317,   328,   318,   339,   319,     0,     0,   320,     0,
      94,    95,    96,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   347,     0,     0,     0,     0,     0,
     174,   179,   173,   175,   178,   177,   176,     0,     0,   364,
      69,    70,    71,    72,    73,    65,    66,    67,    74,    68,
       0,   373,     0,   429,   425,   421,   422,   426,   423,   428,
     374,   432,     0,   375,   331,   438,   442,   437,   334,   333,
     332,     0,     0,   376,   449,   378,     0,   377,     0,   456,
     379,   469,   460,   472,   461,   462,   463,   465,     0,   467,
     468,   172,   380,     0,     0,   381,     0,     0,   172,   382,
     481,   172,   479,   383,   482,   385,   172,   483,   384,     0,
     172,     0,   386,   501,     0,   499,   517,     0,     0,     0,
     505,   497,     0,   507,   522,   510,   388,   528,   529,   389,
     390,     0,     0,   553,   554,   555,   393,   550,   551,   552,
     394,     0,   492,     0,   395,    84,   489,     0,   396,   397,
     543,   543,   530,   531,   543,   543,   401,     0,   542,   536,
     541,   537,   538,   539,   540,   400,   549,   402,   403,   545,
     405,     0,   546,   547,   548,   407,   561,   556,   557,   559,
     409,   567,   576,   578,   580,   566,   569,   570,   582,   411,
       0,     0,   587,     0,   415,   172,   589,   596,     0,   597,
     615,   598,   617,   618,   619,   603,   620,   622,   621,   623,
     607,   611,   628,     0,     0,     0,     0,   624,   612,    25,
    1296,  1297,  1298,  1299,  1300,     0,  1291,  1292,  1293,  1294,
       0,     0,     0,   633,   632,     0,     0,     0,     0,    29,
     142,  1228,     0,  1220,  1224,  1218,  1216,  1226,     0,  1222,
       0,   157,   150,   149,   147,   153,   154,   151,   155,   148,
     158,   144,   146,   156,   145,   152,   143,  1209,  1207,  1206,
    1211,  1213,     0,     0,     0,     0,   643,     0,   644,     0,
       0,     0,     0,     0,     0,     0,   645,     0,   795,     0,
     646,     0,   647,     0,     0,   648,     0,   800,   799,   798,
       0,   803,     0,     0,     0,     0,   977,     0,     0,     0,
     807,   811,   813,     0,  1015,     0,     0,     0,     0,   914,
       0,     0,     0,   949,     0,     0,     0,     0,     0,     0,
       0,   951,     0,     0,     0,    34,  1235,  1230,  1236,   139,
     140,   138,   141,   137,  1231,     0,  1233,  1234,  1290,    38,
       0,     0,     0,     0,  1247,  1248,     0,   172,     0,  1245,
    1242,     0,     0,     0,   172,  1265,  1268,  1266,  1267,  1259,
    1260,  1261,  1262,     0,     0,     0,    46,  1287,  1288,     0,
    1307,  1309,  1308,  1304,  1305,  1303,     0,     0,     0,     0,
       0,     0,  1310,     0,  1314,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1311,  1325,     0,
       0,     0,  1313,  1315,     0,     0,     0,  1312,  1392,  1283,
    1284,  1282,   227,     0,   238,   223,     0,   240,   224,     0,
     242,   225,  1280,  1281,  1279,   226,   229,     0,     0,     0,
     232,   228,   230,   231,     0,     0,   222,     0,  1403,     0,
       0,     0,  1408,  1421,     0,     0,  1411,     0,     0,  1414,
       0,     0,  1413,  1412,   180,  1431,     0,  1430,  1426,   255,
     251,     0,   260,     0,   257,     0,   274,   277,   167,   170,
     171,   169,   168,   292,   293,   294,   282,   281,   297,   299,
     298,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   316,     0,     0,     0,   172,     0,   348,
     100,    97,    98,    99,   172,   350,   349,     0,     0,     0,
       0,     0,     0,     0,   363,     0,   359,   357,   356,   371,
     424,     0,     0,   427,   433,   443,   444,   439,   440,   445,
     447,   446,   441,   335,   336,   436,   435,   451,   450,     0,
     455,   470,   471,   459,   473,   466,   464,   458,     0,     0,
     172,   172,   180,   180,   180,   172,     0,     0,   172,   518,
     500,   511,     0,   502,    84,   513,     0,     0,   504,   506,
     172,   523,     0,     0,   509,     0,     0,   392,     0,   494,
      88,    87,   488,     0,   544,   533,   532,   534,   535,     0,
       0,     0,     0,  1029,  1122,  1031,  1030,     0,  1127,     0,
    1105,     0,  1108,     0,     0,  1129,  1131,     0,  1121,   399,
       0,   558,   560,   577,   563,   579,   564,   581,   565,   571,
     574,   572,   568,   583,   562,     0,     0,   414,   588,   585,
     586,   180,   613,   625,   626,   627,   629,     0,     0,     0,
     642,   630,     0,     0,     0,  1210,  1208,  1212,  1214,     0,
       0,     0,   193,   193,   187,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   190,   190,   187,     0,
       0,   187,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   690,   714,     0,     0,     0,   682,     0,     0,     0,
       0,   193,   187,     0,     0,   791,     0,   801,   802,   172,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   861,     0,     0,     0,     0,     0,
     883,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     903,     0,     0,   908,   909,     0,     0,     0,   929,   931,
     930,     0,   933,     0,     0,   940,   942,   943,     0,   978,
       0,     0,     0,     0,   805,   806,  1023,  1021,  1026,  1025,
    1024,  1022,  1027,     0,   810,     0,     0,  1017,  1016,   814,
       0,  1020,     0,   815,   816,   817,   818,     0,     0,     0,
       0,     0,   916,     0,     0,   917,  1150,     0,  1153,  1149,
       0,     0,     0,   918,   950,   919,  1168,  1173,  1170,  1176,
    1169,  1167,  1174,  1171,  1165,  1172,  1166,  1175,     0,     0,
     924,     0,     0,     0,     0,   925,  1185,  1189,  1190,     0,
    1187,   926,     0,  1191,   927,   947,     0,     0,     0,   952,
     953,   954,  1232,  1246,     0,     0,  1253,  1249,     0,     0,
       0,  1244,  1243,  1257,  1256,     0,     0,  1273,     0,     0,
    1269,     0,  1277,     0,     0,  1270,     0,  1306,   216,   216,
       0,     0,     0,   216,     0,  1339,     0,  1338,     0,     0,
       0,     0,  1326,     0,     0,     0,     0,  1330,     0,     0,
       0,  1337,     0,     0,     0,     0,     0,  1328,  1340,     0,
       0,     0,  1327,   216,   216,   216,  1317,  1316,  1318,     0,
     239,   241,   243,   233,     0,   236,   235,   234,     0,   244,
       0,     0,    63,     0,  1402,     0,  1409,   172,  1424,     0,
    1415,  1416,     0,  1418,  1419,     0,   181,   182,  1410,  1432,
    1433,     0,   247,     0,   261,     0,     0,     0,     0,   296,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   342,   172,     0,     0,     0,     0,
     172,     0,   362,     0,   361,   431,   430,     0,     0,     0,
     172,     0,   180,   478,   476,   480,   484,     0,     0,     0,
     180,     0,   519,   503,     0,   514,   516,   183,     0,     0,
     391,     0,     0,    63,     0,   493,    86,    85,     0,     0,
    1044,     0,     0,     0,     0,     0,     0,  1056,     0,     0,
       0,  1102,     0,     0,     0,  1074,  1075,     0,     0,     0,
       0,     0,  1086,     0,  1092,  1093,  1095,  1097,     0,  1101,
    1113,  1114,  1115,     0,  1117,     0,  1123,  1125,  1126,  1124,
    1028,     0,  1104,     0,  1103,  1043,     0,     0,  1109,     0,
    1111,     0,  1110,  1132,  1112,  1119,     0,     0,   575,   573,
     413,     0,     0,  1301,  1295,   640,   641,     0,   638,   634,
       0,   193,   193,   193,   194,   195,   652,   653,   189,   188,
       0,   193,   193,   193,     0,   660,   659,   658,   670,   190,
     193,   193,   193,   191,   192,   193,   193,     0,   193,   193,
       0,   190,     0,   683,     0,   689,     0,   688,   687,   686,
       0,     0,     0,   713,     0,   712,     0,   685,   684,     0,
       0,     0,     0,   190,   190,   187,     0,     0,   187,     0,
       0,     0,   193,   193,   787,     0,   193,   193,   792,     0,
     206,   207,   208,   209,   210,   211,     0,    92,    93,    91,
     824,     0,     0,     0,     0,     0,   971,   969,   964,     0,
     974,   958,   975,   961,   973,   967,   956,   970,   959,   957,
     976,   972,     0,     0,   838,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   871,     0,     0,     0,     0,   882,   884,     0,     0,
     889,   888,     0,     0,   196,     0,     0,     0,   172,     0,
     899,     0,     0,     0,     0,   904,   905,   906,     0,     0,
       0,   912,   928,   932,   934,   937,   936,     0,     0,     0,
     941,   823,   979,   981,     0,   980,   808,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1009,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   812,   955,     0,     0,     0,     0,   915,     0,
     172,  1146,  1144,  1142,     0,     0,   172,  1148,   920,     0,
       0,     0,     0,  1184,     0,     0,  1192,   945,   946,     0,
     948,  1252,  1254,  1251,  1250,  1241,     0,     0,     0,  1274,
       0,     0,  1278,  1289,   218,   219,   220,   221,   217,  1320,
    1319,     0,     0,     0,  1324,     0,     0,     0,  1323,     0,
       0,     0,  1322,  1321,   216,     0,     0,     0,  1329,     0,
       0,     0,  1336,     0,     0,     0,  1335,     0,     0,     0,
    1334,     0,     0,     0,  1333,     0,     0,     0,     0,     0,
    1350,     0,  1385,  1384,  1386,     0,     0,     0,  1332,     0,
       0,     0,  1331,  1345,  1344,  1346,  1342,  1341,  1343,  1388,
    1387,  1389,     0,   237,     0,     0,  1404,  1406,  1407,     0,
    1422,   172,  1417,  1420,     0,     0,   172,     0,     0,     0,
     258,     0,     0,     0,     0,   300,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   338,   337,     0,     0,   329,
     340,   343,     0,   353,   355,   354,   352,   172,   360,     0,
       0,     0,   180,   172,     0,     0,     0,     0,   498,   512,
     521,     0,   515,   185,   186,   184,   508,     0,   524,     0,
       0,   491,   496,    84,     0,     0,     0,     0,     0,     0,
     172,  1045,     0,     0,     0,  1050,     0,   172,     0,  1057,
    1058,     0,  1060,  1062,  1061,  1063,  1064,     0,     0,     0,
    1070,     0,  1076,     0,     0,     0,  1080,  1081,     0,     0,
       0,     0,  1087,  1088,     0,     0,  1091,  1094,  1096,  1098,
       0,     0,  1116,  1118,     0,  1042,  1032,  1128,  1033,     0,
       0,  1130,  1120,     0,     0,   593,   594,     0,   635,   639,
       0,   649,   650,   651,   193,   655,   656,   657,     0,     0,
       0,   664,   665,   187,     0,     0,     0,   193,   671,   672,
     673,   674,   676,   190,   679,   680,     0,   193,     0,     0,
       0,   190,   190,   187,     0,     0,     0,     0,     0,     0,
       0,   190,   190,   187,     0,     0,   187,     0,     0,     0,
       0,   190,   190,   187,     0,     0,     0,     0,   711,     0,
     715,     0,     0,     0,     0,     0,   190,   190,   187,     0,
       0,   187,     0,     0,     0,     0,     0,   190,   190,   187,
       0,     0,   187,     0,   190,   691,   692,   693,   694,   696,
       0,   699,   700,     0,   190,     0,     0,   785,   786,   193,
     789,   790,     0,   821,   172,   825,     0,     0,     0,     0,
       0,     0,     0,   963,   960,   966,   965,   962,   968,     0,
       0,     0,     0,     0,   172,   844,   843,   845,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   913,   862,   863,   864,     0,   868,   865,   867,     0,
       0,   873,   872,   874,     0,     0,     0,     0,     0,     0,
     172,   172,   887,   202,   198,   203,   197,   200,   199,   201,
     895,   896,   172,     0,     0,   898,   900,   172,   172,     0,
     907,   910,   172,   172,   935,   939,   822,   982,   809,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1010,
    1133,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1008,     0,     0,     0,     0,
       0,   819,   820,   172,   180,  1147,     0,     0,  1151,  1152,
       0,     0,   922,     0,   172,     0,  1186,  1188,   944,     0,
    1271,  1272,  1275,  1276,   216,   216,   216,   216,   216,   216,
     216,   216,   216,  1390,  1348,  1347,  1349,  1382,  1381,  1383,
    1379,  1378,  1380,  1373,  1372,  1374,  1370,  1369,  1371,  1352,
    1351,  1355,  1354,  1356,  1353,  1364,  1363,  1365,  1361,  1360,
    1362,     0,     0,  1399,     0,  1423,     0,   172,     0,  1427,
       0,     0,   262,     0,   259,     0,     0,     0,     0,     0,
     308,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,   345,   160,     0,   452,     0,   474,   180,   183,     0,
       0,   487,     0,   525,   526,     0,   490,     0,     0,     0,
       0,     0,     0,   172,  1046,   183,   183,   183,   172,  1051,
     183,   180,   183,   183,   172,  1065,   183,   183,   183,   172,
    1071,   183,   183,   172,     0,   172,   183,   172,   183,   183,
     172,   183,   172,     0,  1106,  1107,     0,     0,   592,     0,
     654,   661,   662,   663,     0,   667,   668,   669,   675,   193,
     190,   681,   702,   703,   704,   705,   706,     0,   708,   709,
     190,   190,   765,   766,   767,   768,   770,     0,   773,   774,
       0,   190,   776,   777,   778,   779,   780,     0,   782,   783,
     190,     0,     0,     0,   190,   190,   187,     0,     0,     0,
       0,     0,     0,   190,   190,   187,     0,     0,     0,     0,
       0,     0,   190,   190,   187,     0,     0,     0,   190,   193,
     193,   193,   193,   193,     0,   193,   193,     0,   190,   190,
     193,   193,   193,   193,   193,     0,   193,   193,     0,   190,
     695,   190,     0,   701,     0,     0,   788,     0,   826,   183,
       0,     0,   183,     0,     0,     0,   836,   183,   839,   840,
     183,   842,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   866,   869,   870,     0,   183,
       0,     0,     0,   885,     0,     0,   180,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1177,  1007,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,    89,     0,     0,  1018,  1019,   180,     0,     0,     0,
    1154,   921,   923,   180,   172,  1264,  1376,  1375,  1377,  1367,
    1366,  1368,  1358,  1357,  1359,  1391,     0,  1401,  1434,     0,
       0,  1429,  1428,   263,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   304,     0,     0,   330,   341,   183,   453,
     457,   475,   477,     0,   485,   520,   172,     0,     0,     0,
       0,     0,     0,   172,  1039,  1047,  1049,  1048,  1052,  1053,
    1054,  1055,  1059,  1066,  1067,  1068,  1069,  1072,  1073,  1077,
     180,   183,   180,  1084,   180,  1085,  1089,   180,  1099,   180,
     172,     0,   172,     0,   591,     0,   666,   677,   193,   190,
     710,   769,   190,     0,   775,   190,   784,   193,   193,   193,
     193,   193,     0,   193,   193,   190,   193,   193,   193,   193,
     193,     0,   193,   193,   190,   193,   193,   193,   193,   193,
       0,   193,   193,   190,   193,   725,   726,   727,   728,   730,
     190,   733,   734,     0,   193,   193,   754,   755,   756,   757,
     759,   190,   762,   763,     0,   193,   697,   190,   793,   794,
     172,   828,     0,   183,   830,     0,   172,     0,   837,   841,
     172,     0,   850,   851,   852,   853,   857,   858,   854,   855,
     856,     0,     0,   183,   877,     0,   172,     0,     0,   890,
       0,   183,     0,     0,   183,   183,     0,   938,     0,   204,
     204,     0,     0,   204,     0,   204,  1133,     0,     0,     0,
       0,     0,     0,     0,     0,  1178,  1156,     0,  1163,  1164,
       0,   204,   204,     0,     0,     0,     0,     0,     0,     0,
       0,  1011,     0,     0,     0,  1133,    90,     0,   204,     0,
    1180,   172,   172,     0,   180,     0,   245,  1436,  1435,     0,
       0,   267,     0,     0,     0,     0,     0,   312,     0,     0,
       0,   346,   486,     0,   365,     0,  1035,     0,   212,     0,
    1040,  1078,  1079,  1082,  1083,  1090,  1100,  1041,   406,     0,
     365,     0,   678,   707,   771,   190,   781,   716,   717,   718,
     719,   720,   190,   722,   723,   193,   745,   746,   747,   748,
     749,   190,   751,   752,   193,   736,   737,   738,   739,   740,
     190,   742,   743,   193,   729,   193,   190,   735,   758,   193,
     190,   764,   698,     0,   183,   831,     0,     0,     0,     0,
       0,   859,   860,   875,     0,     0,     0,   886,   891,     0,
     893,     0,   901,   902,   894,   183,     0,   205,  1133,  1133,
      89,     0,  1133,     0,  1133,   983,   172,     0,     0,     0,
       0,     0,     0,     0,  1155,     0,     0,  1133,  1133,    89,
       0,     0,  1133,  1133,     0,     0,  1133,  1014,  1012,  1013,
     990,  1133,  1133,  1180,  1196,     0,  1145,  1143,  1182,     0,
       0,     0,     0,   269,   302,   303,     0,     0,     0,   301,
       0,   365,   366,   368,   367,   417,     0,     0,   213,   215,
     214,  1037,  1038,   365,   419,     0,   772,   193,   724,   193,
     753,   193,   744,   731,   193,   760,   193,     0,   827,   183,
     183,     0,   183,     0,   183,   183,     0,   892,   183,     0,
    1133,   996,   992,  1133,     0,   997,     0,   991,  1133,     0,
    1158,     0,  1161,  1201,  1162,  1160,  1157,     0,   994,   993,
    1133,     0,     0,   988,   986,  1133,   172,   987,   989,   995,
    1196,  1140,     0,     0,  1181,  1194,  1183,  1263,     0,     0,
     310,   311,   309,   331,   334,   332,     0,     0,   418,  1034,
     172,   420,   637,   721,   750,   741,   732,   761,   183,   829,
     835,     0,   849,   846,   876,   881,     0,   897,     0,  1001,
     985,    89,     0,   999,     0,  1159,     0,   984,    89,     0,
    1000,     0,  1141,  1198,  1200,     0,  1193,     0,     0,     0,
       0,     0,     0,   212,     0,   832,   172,   847,   878,   911,
    1133,     0,  1202,     0,  1133,     0,   183,  1199,  1195,   268,
       0,     0,     0,     0,     0,  1036,   804,   172,   833,   848,
     172,   879,  1003,     0,  1133,  1002,     0,     0,   270,   324,
       0,   323,     0,   834,   880,    89,  1004,    89,  1133,   322,
     321,  1133,  1133,   998,  1006,  1005
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    59,  1629,   181,   163,  1062,  2775,  2776,   484,   485,
     486,   487,   164,   165,   166,   814,   737,   101,   953,   507,
    1408,  1926,  1560,  1575,  1556,  2170,  2888,  1626,  2951,  1799,
     388,   911,  1386,   895,   898,   901,   916,    69,   412,   418,
     422,   425,    75,   429,    82,   445,   441,   435,   452,    92,
     462,   102,   109,   468,   471,   473,   542,  1015,  1897,   475,
     478,   116,   494,   167,   169,  2945,   185,   187,   232,  1057,
    1107,   530,  1003,   533,   543,  1007,  1012,   545,   547,  1018,
     550,  1020,   562,  1023,  1025,   565,   569,   573,   575,   578,
     582,   618,   614,  1475,   596,  1043,  1048,  1040,  1463,  1054,
     599,   626,   635,  1065,   640,   645,   637,   610,   606,   650,
     659,  1102,  1539,  1094,  1096,  1098,  1104,   664,  1109,   235,
     666,  1997,   254,   669,   671,   675,   680,   688,   272,  1549,
     703,   295,   746,  1565,   748,   756,  1166,  1583,  1161,  2058,
    1595,  1593,  2060,  1162,  1585,  1587,   762,   765,   760,   297,
     305,   307,   805,  1245,  1652,  1234,  1752,  2200,  2215,  1249,
    1253,  1243,  1089,  1520,  1524,  1532,  1534,  2524,   313,  1262,
    1265,  1273,  2755,  2756,  2757,  2525,  2924,  2925,  1295,  1301,
    1304,  3014,  3015,  3011,  3012,  3063,  2758,  2759,   288,   321,
     329,   337,   829,   824,   342,   347,   349,   839,   846,  1330,
    1335,   905,   892,   354,   358,   323,   264,   260,   362,   853,
     369,   887,   862,   877,   878,  1372,  1367,  1818,  1357,  1840,
    1812,  1852,  1848,  1808,  1834,  1830,  1804,  1826,  1822,  1361,
     882,   864,   375,   376,   392,  1394,   395,   401,   929,   932,
     926,   403,   406,   937
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -2802
static const yytype_int16 yypact[] =
{
    5194,    74,    93,    88, -2802, -2802,  1131,  -242,  1018,   405,
    1155,   144,   802,   149,   494,   466,   978,    57,  5421,   915,
    3239, -2802,   200,   185,   194,  1568,   205,  1359,   961,    19,
      62,   536,    38,   675,   192,   577,   859,  3829,   197,   925,
     592,   515,    38, -2802,   157,   196,    92,     5, -2802,   136,
     666,  1610, -2802,   690, -2802,    97,  4073,   404,   111,   695,
     242,  1054,   410,   730,   765,   113,   773,    91,   148, -2802,
   -2802, -2802,   441,   942,   951, -2802,    46,    29,   494,    33,
     621,   129, -2802,   789,   951, -2802, -2802,   951,   951,    76,
     830,   951, -2802, -2802, -2802, -2802,   951, -2802, -2802, -2802,
   -2802, -2802, -2802,   135,   848,   844,   924,   953,   166, -2802,
     951,  1362,   951,   951,  1175,   951, -2802, -2802, -2802,   754,
   -2802, -2802, -2802, -2802,  4771, -2802, -2802, -2802, -2802, -2802,
   -2802,   951, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802,  1416, -2802,   951, -2802,   970, -2802,
   -2802,   494,   494,   494,   494,   494,   494,   494,   494,   494,
     494, -2802, -2802, -2802, -2802, -2802,   853, -2802,   930,  1703,
      -2,    17,   676,   847,   418,  4287,   892,  1729,  4733,  1009,
    4771,  3377, -2802,  1419,  -132,   981,  1050,   984,   213,   227,
     812,   968,  1068,   233,    38,   699, -2802,   769,  1027, -2802,
     845,   805,   232, -2802,   443, -2802,   931, -2802,   503,  1012,
     454, -2802, -2802,  4861, -2802, -2802, -2802,  1071,  1056,  1110,
   -2802, -2802, -2802, -2802,   743, -2802, -2802, -2802, -2802,  1064,
   -2802, -2802,  4861,  4346, -2802,  1140, -2802,    36,  4861,  1143,
   -2802,    63,  4861,  1177, -2802,    69, -2802,  1178,  1181,    79,
   -2802,   951, -2802,  1190,  1503,  2151, -2802,  1193, -2802, -2802,
   -2802, -2802,  1202, -2802, -2802,   951, -2802,   494, -2802,   305,
    1204,   565,   932,  1208,    67, -2802, -2802, -2802,  1211,  1226,
     494,   494,   951,   951, -2802, -2802,  1228, -2802, -2802, -2802,
   -2802, -2802, -2802,  2821,  2151, -2802,  1234,    35,   951,  4861,
     951, -2802,  4861, -2802,  1237, -2802, -2802, -2802, -2802, -2802,
     951,  1218,   494,  2944,   951,  1416,   951, -2802,  1258, -2802,
    4247, -2802, -2802,   840,  1261,  1283,   951, -2802,  1294, -2802,
   -2802,   -66, -2802, -2802, -2802,  1301,  4861,  1320, -2802,  1356,
     951,  1232, -2802,   872,  1201,  1845,   104,  1331,   539, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802,  1334, -2802,    95,   267,
     310,   413,   593,   951,     7,  1337,   951,   142, -2802,   951,
     212,  1343, -2802,   951,   951, -2802,    14,    43,    44,  1354,
    1416, -2802, -2802, -2802,  1106,   951, -2802, -2802, -2802, -2802,
   -2802,   951, -2802,  1357,  1363, -2802,   951,  1214, -2802, -2802,
   -2802, -2802, -2802, -2802,   951, -2802,   494, -2802,   951, -2802,
   -2802,   428,   428, -2802,  1358, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802,  1154,   951,   951,  1360,
    1375,  1376, -2802, -2802,   951,   951,   951,   951,   951,   951,
    1378,   951, -2802,  1382,   951, -2802,  1389, -2802, -2802,  1391,
   -2802, -2802,  1057, -2802,  1393, -2802,  4861,  1395, -2802,   951,
   -2802, -2802, -2802,   951,  1397,  1406,  1406,  4861,   951,   951,
     951,   951,   951,   951, -2802,   951,  4771,  1362,   951,   951,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802,  1362,   951, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
    1402, -2802,  1123,    13, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802,  1046, -2802,   -39, -2802, -2802, -2802,  1244, -2802,
     527,   507,   507, -2802, -2802, -2802,  1421, -2802,  1439, -2802,
   -2802,   709, -2802,  1251, -2802, -2802, -2802, -2802,  1263, -2802,
   -2802,  1416, -2802,   951,   951, -2802,  4861,  4861,  1416, -2802,
   -2802,  1416, -2802, -2802, -2802, -2802,  1416, -2802, -2802,  4861,
    1416,   951, -2802, -2802,  4861, -2802,  1452,   535,  1241,    18,
   -2802, -2802,  1242,  4861,    34, -2802, -2802, -2802, -2802, -2802,
   -2802,  1455,  1458, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802,  1453, -2802,  1252, -2802,   -25, -2802,   951, -2802, -2802,
    1463,  1463, -2802, -2802,  1463,  1463, -2802,  1279, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802,   503, -2802, -2802, -2802, -2802, -2802, -2802,  1264,  1266,
   -2802, -2802,  1410,  1411,  1420, -2802, -2802,    64,  1243, -2802,
     951,  1483,  1245,  4247, -2802,  1416, -2802, -2802,  1487, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802,  4861,  4861,  4861,  4861, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802,  1489, -2802, -2802, -2802, -2802,
    1494,  1497,   494, -2802, -2802,  1498,  1505,  1291,   951, -2802,
    2151, -2802,  1508, -2802, -2802, -2802, -2802, -2802,   951, -2802,
     494, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802,   259,  1423,  1424,  1425, -2802,  1514, -2802,   785,
    1430,    45,   534,  4210,   586,  1522, -2802,  1525, -2802,  1527,
   -2802,    41, -2802,  1528,  1530, -2802,  1532, -2802, -2802, -2802,
     951, -2802,  4247,  4670,  2165,  1229,   607,  1536,   501,  1441,
   -2802, -2802, -2802,  1544,    24,   540,  1547,  1549,   263,   951,
     459,   492,    20,  4861,   494,  2574,   545,    51,   430,   427,
      37, -2802,  1542,  1545,  1548, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802,   951, -2802, -2802, -2802, -2802,
     951,   951,   951,   951, -2802, -2802,   951,  1416,   951, -2802,
     951,  1362,   951,  1556,  1416, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802,  1558,   421,   456, -2802, -2802, -2802,  1559,
   -2802, -2802, -2802, -2802,  1462, -2802,  1561,  1564,  1481,  1485,
    1486,  1580, -2802,  1582, -2802,  1583,  1493,  1584,   601,   657,
     555,   587,   570,   771,   602,  1586,   620, -2802, -2802,  1589,
    1593,  1596, -2802, -2802,  1598,  1601,  1597, -2802,  1606, -2802,
   -2802, -2802, -2802,  1608, -2802, -2802,  1611, -2802, -2802,  1612,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802,   951,   453,   951,
   -2802, -2802, -2802, -2802,   951,   951, -2802,   951,   951,  1089,
     951,   951, -2802,  4247,  1551,  1607, -2802,  1198,  1618, -2802,
    1240,  1619, -2802, -2802,   -34,   951,   951, -2802,  1604, -2802,
   -2802,  1620,  1316,   951,  1615,   751, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802,  1627,  1629,   951,   951,   951,   951,   951,  1630,   951,
    1633,   951,  1635, -2802,   494,  1636,  1637,  1416,  4861, -2802,
   -2802, -2802, -2802, -2802,  1416, -2802, -2802,   951,   951,   951,
    4861,   951,  1362,   951, -2802,   951, -2802, -2802, -2802, -2802,
   -2802,  1638,  1639, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802,   892, -2802,   951,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,  4861,   951,
    1416,  1416,   -34,   -34,   -34,  1416,  1362,   951,  1416, -2802,
   -2802, -2802,   951, -2802,   -25,  1465,  1640,  1647, -2802, -2802,
    1416, -2802,  1476,  1484, -2802,  1648,  1653, -2802,  1656,  1247,
    1623,  1624, -2802,   951, -2802, -2802, -2802, -2802, -2802,  4734,
      21,  1366,   412, -2802, -2802, -2802, -2802,   951,   115,  1115,
   -2802,  1379, -2802,  2574,  1385,   629,  1367,   150, -2802, -2802,
     951, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
    1361, -2802, -2802, -2802, -2802,   951,  1673, -2802, -2802, -2802,
   -2802,   -34, -2802, -2802, -2802, -2802, -2802,  1675,  1678,  4800,
   -2802, -2802,  1679,  1683,   951, -2802, -2802, -2802, -2802,  1686,
    1688,  1690,   -19,   -19,   -37,  1693,  1694,  1697,  1698,  1698,
    1698,  1409,  1414,  1708,  1712,  1713,    73,    73,   -37,  1695,
    1718,   -37,  1721,  1730,  1744,  1750,  1744,  1750,  5422,  1751,
    1752, -2802, -2802,  1744,  1750,   886, -2802,  1756,  1759,  1763,
    1764,   -19,   -37,  1766,  1769, -2802,  1773, -2802, -2802,  1416,
     955,  1500,  1515,  1516,  1517,  1670,  1645,  1524,  1789,    22,
      23,  1684,   835,  1794,  1908,  1758,  1537,  1538,  1692,  1796,
    1569,   100,    42,   -22,   385,  4861,  2574,  1775,   768,  1546,
    1570,  1810,    58, -2802, -2802,   228,  1815,  1816, -2802, -2802,
   -2802,  1817,  1587,    83,  2574,  1588, -2802, -2802,  1762, -2802,
     494,  1819,  1826,   951, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802,     9, -2802,  3510,  1828, -2802, -2802, -2802,
     951, -2802,   951, -2802, -2802, -2802, -2802,   951,   951,   951,
     501,  4861, -2802,  1832,  1269, -2802, -2802,   951, -2802, -2802,
     951,  4861,   951, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,   494,   951,
   -2802,   951,   501,  1833,  1834, -2802, -2802, -2802, -2802,   951,
     951, -2802,   494, -2802, -2802, -2802,   851,  1836,  1837, -2802,
   -2802, -2802, -2802, -2802,   951,   951, -2802, -2802,  1362,   951,
     951, -2802, -2802, -2802, -2802,  1829,   951, -2802,   951,  1724,
   -2802,   951, -2802,   951,  1726, -2802,  1842, -2802,  1010,  1010,
     622,   623,   667,  1010,  1843, -2802,   672, -2802,   701,   718,
     747,   800, -2802,  1844,  1846,   819,  1848, -2802,  1849,  1850,
    1852, -2802,   822,   879,  1855,  1858,  1853, -2802, -2802,  1860,
    1862,  1864, -2802,  1010,  1010,  1010, -2802, -2802, -2802,   951,
   -2802, -2802, -2802, -2802,   951, -2802, -2802, -2802,   951, -2802,
     951,   951,   671,  4861, -2802,   951, -2802,  1416, -2802,  4247,
   -2802, -2802,  1865, -2802, -2802,  1868, -2802, -2802, -2802, -2802,
    1866,  2944, -2802,   951,  1869,   951,   951,   951,  1126, -2802,
    1878,   951,   951,  1881,   951,   951,  1883,   951,  1887,   951,
     -36,  1889,   494,   494, -2802,  1416,   951,  1892,  1894,  1896,
    1416,  4861, -2802,   951, -2802, -2802, -2802,   951,   951,   951,
    1416,  4861,   -34, -2802, -2802, -2802, -2802,  1362,   951,  1902,
     -34,   951,   553, -2802,  1903, -2802, -2802,   110,  3878,   951,
   -2802,   951,  1906,  1847,   951, -2802, -2802, -2802,  1909,  1246,
    4771,  1646,  1651,  1652,    39,  4861,  1654, -2802,   284,    31,
     132, -2802,  1655,  1657,   176, -2802, -2802,   102,  1682,   373,
    1672,   -93,  2574,   716, -2802,  1922,  1660, -2802,   600, -2802,
   -2802, -2802, -2802,  2574,  1696,    -1, -2802, -2802, -2802, -2802,
   -2802,   951, -2802,   951, -2802, -2802,   951,   951, -2802,   951,
   -2802,   951, -2802, -2802, -2802, -2802,  1711,   951, -2802, -2802,
   -2802,   951,   322, -2802, -2802, -2802, -2802,  1924,  1928, -2802,
     951,   -19,   -19,   -19, -2802, -2802, -2802, -2802, -2802, -2802,
    1933,   -19,   -19,   -19,   470, -2802, -2802, -2802, -2802,    73,
     -19,   -19,   -19, -2802, -2802,   -19,   -19,  1934,   -19,   -19,
    1936,    73,   579, -2802,   999, -2802,   795, -2802, -2802, -2802,
    1937,  1938,  1940, -2802,  1016, -2802,  1265, -2802, -2802,  1644,
    1944,  1947,  1948,    73,    73,   -37,  1950,  1951,   -37,  1952,
    1955,  1957,   -19,   -19, -2802,  1960,   -19,   -19, -2802,  1963,
   -2802, -2802, -2802, -2802, -2802, -2802,   494, -2802, -2802, -2802,
    4771,  1399,   951,  1426,  1479,   -60, -2802, -2802, -2802,   -49,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802,  1964,   951, -2802,   494,  1967,   951,  4861,   494,
     494,  1968,  1702,  1691,  1709,   273,   285,  1714,   311,  1641,
    1649,  1973,  1979,  1980,  1984,  1645,  1985,  1986,  1988,  1650,
    1658,  1298,  1992,   951,  1434,  1807, -2802, -2802,   494,  4861,
   -2802, -2802,  4861,   951,    48,  1994,  4861,   951,  1416,   494,
   -2802,  1995,  4861,  4861,   951, -2802, -2802, -2802,   494,   494,
    4861, -2802, -2802, -2802, -2802, -2802, -2802,  4861,   951,   494,
   -2802,  1996, -2802, -2802,   951, -2802, -2802,  2000,   951,  1755,
     614,   951,  1757,   951,   638,   951,  2003,   951,  1760,  1761,
     951,   951,   951,   951,   951,   951,   951,   951,    32,   951,
     951,  1765, -2802, -2802,   951,   951,   951,   951, -2802,  4861,
    1416,  2004,  2006,  2016,   951,   951,  1416, -2802,   951,   951,
     951,  4861,   501, -2802,   951,   951, -2802, -2802, -2802,  2018,
   -2802, -2802, -2802, -2802, -2802, -2802,  2021,   951,   951, -2802,
     951,   951, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802,  2022,  2023,  2026, -2802,  2028,  2029,  2027, -2802,  2030,
    2031,  2035, -2802, -2802,  1010,  2036,  2037,  2040, -2802,  2041,
    2042,  2044, -2802,  2049,  2051,  2045, -2802,  2052,  2053,  2056,
   -2802,  2057,  2060,  2062, -2802,  2063,  2064,  2065,  2066,  2068,
   -2802,  2069, -2802, -2802, -2802,  2070,  2101,  2104, -2802,  2105,
    2106,  2108, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802,   951, -2802,   951,   951, -2802, -2802, -2802,   951,
   -2802,  1416, -2802, -2802,  2944,   951,  1416,   951,   951,   951,
   -2802,   951,   951,  2110,   951, -2802,   951,   951,  2109,   951,
     951,  2111,   951,  2112,   951, -2802, -2802,  2114,  4861, -2802,
    2116, -2802,   951, -2802, -2802, -2802, -2802,  1416, -2802,   639,
     951,   639,   -34,  1416,  4861,   951,   951,  2117, -2802, -2802,
   -2802,   951, -2802, -2802, -2802, -2802, -2802,  4861, -2802,  4861,
     951, -2802, -2802,   -25,  2118,  2119,  2120,  2121,  2131,  4828,
    1416, -2802,  4861,  4861,  4861,  4771,  4861,  1416,  4861, -2802,
   -2802,  4861, -2802, -2802, -2802, -2802,  4771,  4861,  4861,  4861,
    4771,  4861, -2802,  4861,  4861,   951, -2802, -2802,  4861,  4861,
    4861,  4861, -2802, -2802,  4861,  4861, -2802, -2802, -2802, -2802,
    4861,  4861, -2802, -2802,  1941, -2802, -2802, -2802, -2802,   951,
     951, -2802, -2802,  2133,   951, -2802, -2802,  2134, -2802, -2802,
     951, -2802, -2802, -2802,   -19, -2802, -2802, -2802,  2135,  2136,
    2137, -2802, -2802,   -37,  2139,  2140,  2142,   -19, -2802, -2802,
   -2802, -2802, -2802,    73, -2802, -2802,  2141,   -19,  2143,  2147,
    2153,    73,    73,   -37,  2155,  2156,  2158,  1743,  2161,  2162,
    2170,    73,    73,   -37,  2173,  2174,   -37,  2175,  2176,  2177,
    2178,    73,    73,   -37,  2180,  2181,  2192,  1287, -2802,  1330,
   -2802,  1370,  1767,  2205,  2207,  2211,    73,    73,   -37,  2213,
    2214,   -37,  2218,  1772,  2219,  2220,  2225,    73,    73,   -37,
    2215,  2227,   -37,  2228,    73, -2802, -2802, -2802, -2802, -2802,
    2231, -2802, -2802,  2232,    73,  2233,  2235, -2802, -2802,   -19,
   -2802, -2802,  2236, -2802,  1416, -2802,  4861,   951,   951,  4861,
     951,  2237,  1500, -2802, -2802, -2802, -2802, -2802, -2802,  2238,
    4861,   494,  2239,  4861,  1416, -2802, -2802, -2802,  2240,  1500,
     951,   951,   951,   951,   951,   951,   951,   951,   951,  2242,
    2244, -2802, -2802, -2802, -2802,  2246, -2802, -2802, -2802,  2245,
    2248, -2802, -2802, -2802,   951,  4861,   951,  2249,  1500,   494,
    1416,  1416, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802,  1416,   951,  1362, -2802, -2802,  1416,  1416,   951,
   -2802, -2802,  1416,  1416, -2802, -2802, -2802, -2802, -2802,   951,
     951,   951,   951,   951,   951,   951,   951,   951,   951, -2802,
   -2802,   951,   951,   951,   951,   951,   951,   951,   951,   951,
     951,   951,  2290,  2250,   951, -2802,   951,   951,   951,  2252,
    2253, -2802, -2802,  1416,   -34, -2802,  2256,  2257, -2802, -2802,
    1362,   951, -2802,  2254,  1416,  4861, -2802, -2802, -2802,  2259,
   -2802, -2802, -2802, -2802,  1010,  1010,  1010,  1010,  1010,  1010,
    1010,  1010,  1010, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802,  1500,   951, -2802,   951, -2802,   951,  1416,   951, -2802,
    1362,   951, -2802,   951, -2802,  2050,  2260,  2261,   951,   951,
   -2802,   951,   951,  2262,   951,  2264,   951,  2265,  1416,  2267,
    4861, -2802, -2802,   951, -2802,   951, -2802,   -34,   110,   951,
    2268, -2802,   951, -2802, -2802,  4771, -2802,  2269,  2270,  2272,
    2273,  2275,  4861,  1416, -2802,   110,   110,   110,  1416, -2802,
     110,   -34,   110,   110,  1416, -2802,   110,   110,   110,  1416,
   -2802,   110,   110,  1416,  4861,  1416,   110,  1416,   110,   110,
    1416,   110,  1416,  4861, -2802, -2802,  2278,  4771,  2279,   951,
   -2802, -2802, -2802, -2802,  2282, -2802, -2802, -2802, -2802,   -19,
      73, -2802, -2802, -2802, -2802, -2802, -2802,  2285, -2802, -2802,
      73,    73, -2802, -2802, -2802, -2802, -2802,  2287, -2802, -2802,
    2288,    73, -2802, -2802, -2802, -2802, -2802,  2293, -2802, -2802,
      73,  2295,  2297,  2300,    73,    73,   -37,  2303,  2307,  2308,
    2309,  2310,  2312,    73,    73,   -37,  2316,  2317,  2318,  2319,
    2320,  2321,    73,    73,   -37,  2323,  2325,  2326,    73,   -19,
     -19,   -19,   -19,   -19,  2328,   -19,   -19,  2329,    73,    73,
     -19,   -19,   -19,   -19,   -19,  2330,   -19,   -19,  2332,    73,
   -2802,    73,  2333, -2802,  2334,  2335, -2802,  4247, -2802,   110,
    2337,  4861,   110,   951,  4861,  2339, -2802,   110, -2802, -2802,
     110, -2802,  4861,  2340,   951,   951,   951,   951,   951,   951,
     951,   951,   951,   951,   951, -2802, -2802, -2802,  4861,   110,
     951,  4861,  2343, -2802,  1362,  1362,   -34,  4861,  1362,  1362,
    4861,  4861,  1362,  1362,   951,   951,   951,   951,   951,   951,
    1500,   951,   951,   951,  3538, -2802,  1500,   951,   951,   951,
     951,  1500,   951,   951,   951,   951,   951,   951,  1416,   951,
    1782,  1500,   951,   951, -2802, -2802,   -34,   494,  4861,  4861,
   -2802, -2802, -2802,   -34,  1416,  2344, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802,   951, -2802, -2802,  1362,
     951, -2802, -2802, -2802,  1233,  2346,  2347,  2349,  2351,   951,
     951,  2352,   951, -2802,  2353,   639, -2802, -2802,   110, -2802,
   -2802, -2802, -2802,  2354, -2802, -2802,  1416,  2356,  2360,  2357,
    2362,  4861,  2363,  1416, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
     -34,   110,   -34, -2802,   -34, -2802, -2802,   -34, -2802,   -34,
    1416,  2365,  1416,  2367, -2802,   951, -2802, -2802,   -19,    73,
   -2802, -2802,    73,  2371, -2802,    73, -2802,   -19,   -19,   -19,
     -19,   -19,  2372,   -19,   -19,    73,   -19,   -19,   -19,   -19,
     -19,  2373,   -19,   -19,    73,   -19,   -19,   -19,   -19,   -19,
    2374,   -19,   -19,    73,   -19, -2802, -2802, -2802, -2802, -2802,
      73, -2802, -2802,  2375,   -19,   -19, -2802, -2802, -2802, -2802,
   -2802,    73, -2802, -2802,  2376,   -19, -2802,    73, -2802, -2802,
    1416, -2802,  4861,   110, -2802,  2381,  1416,   951, -2802, -2802,
    1416,   951, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802,   951,   951,   110, -2802,  2388,  1416,   951,  1362, -2802,
      12,   110,   951,  1362,   110,   110,  4861, -2802,   951,  2390,
    2390,   951,   951,  2390,  1500,  2390, -2802,  4861,  1748,  1863,
    1882,  1932,  2005,  2008,  2009,  3538, -2802,  2010, -2802, -2802,
    1500,  2390,  2390,   951,   951,  1500,   951,   951,   951,   951,
     951, -2802,  1362,   951,  2391, -2802, -2802,   951,  2390,   494,
      26,  1416,  1416,   494,   -34,  2397, -2802, -2802, -2802,  2398,
     951, -2802,  2399,  2401,  2402,  2403,  2404, -2802,  2405,  2406,
     951, -2802, -2802,  2407,    11,  4861, -2802,  2409,    89,  4861,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,  2408,
      11,   951, -2802, -2802, -2802,    73, -2802, -2802, -2802, -2802,
   -2802, -2802,    73, -2802, -2802,   -19, -2802, -2802, -2802, -2802,
   -2802,    73, -2802, -2802,   -19, -2802, -2802, -2802, -2802, -2802,
      73, -2802, -2802,   -19, -2802,   -19,    73, -2802, -2802,   -19,
      73, -2802, -2802,   951,   110, -2802,  4861,  4861,   951,  4861,
     951, -2802, -2802, -2802,  4861,  4861,   951, -2802, -2802,  2410,
   -2802,  4861, -2802, -2802, -2802,   110,  2412, -2802, -2802, -2802,
    1500,   951, -2802,  2413, -2802, -2802,  1416,  1645,  2414,  2416,
    2417,  2421,  2424,  2426, -2802,   494,  2427, -2802, -2802,  1500,
     951,  2430, -2802, -2802,   951,  4861, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802,    26,  1914,  2574, -2802, -2802, -2802,   494,
    2431,  2432,  2435, -2802, -2802, -2802,  2437,  2438,  2439, -2802,
     169,    11, -2802, -2802, -2802, -2802,  2440,  4861, -2802, -2802,
   -2802, -2802, -2802,    11, -2802,  2441, -2802,   -19, -2802,   -19,
   -2802,   -19, -2802, -2802,   -19, -2802,   -19,  4247, -2802,   110,
     110,   951,   110,  2442,   110,   110,   951, -2802,   110,   951,
   -2802, -2802, -2802, -2802,  2443, -2802,   951, -2802, -2802,  2445,
   -2802,  2444, -2802, -2802, -2802, -2802, -2802,   951, -2802, -2802,
   -2802,  2447,   951, -2802, -2802, -2802,  1416, -2802, -2802, -2802,
    1914, -2802,  2012,  2046,  2574, -2802, -2802, -2802,  2448,  2451,
   -2802, -2802, -2802, -2802, -2802, -2802,  1044,  1044, -2802, -2802,
    1416, -2802, -2802, -2802, -2802, -2802, -2802, -2802,   110, -2802,
   -2802,  2453, -2802,  4771, -2802, -2802,  2455, -2802,  1500, -2802,
   -2802,  1500,   951, -2802,  2457, -2802,   951, -2802,  1500,   951,
   -2802,  4861, -2802,  2012, -2802,   494, -2802,  2459,  2461,   951,
     951,   951,   951,    89,  2462,  4771,  1416, -2802,  4771, -2802,
   -2802,   951, -2802,  2456, -2802,   951,   110, -2802, -2802, -2802,
    2463,  2464,   951,  2466,   951, -2802, -2802,  1416, -2802, -2802,
    1416, -2802, -2802,  2468, -2802, -2802,  2469,  2470, -2802, -2802,
    2471, -2802,  2472, -2802, -2802,  1500, -2802,  1500, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
   -2802, -2802,    -3, -2802,   344, -1040, -1783, -1153,  1874, -2802,
     828,  -340,  1471,   -54,   -21, -2802,  -304, -1904,  1808,  1774,
    -605,   251, -1145,  1469,   811, -2802, -1141, -2802,  -671, -1179,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802,  -522,  -533, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -1970, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802,   487, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802,   215, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802,  -243,  -140, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -1674, -2802, -2802, -2802, -2802, -2802,
   -2802,  -761, -2802, -2802, -2802, -2802, -2802, -2802,   559, -2802,
   -2802, -2802, -2802,  -334,  -776, -1631,  -471, -2802, -2802, -2802,
   -2802, -2802,  -540,  -532, -2802, -2802, -2801, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802,  1609, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802, -2802,
   -2802, -2802, -2802, -2802
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1406
static const yytype_int16 yytable[] =
{
      74,  2145,   400,  1577,  1462,  2313,  1580,  2315,   115,  1016,
     806,   117,  1895,   184,  1726,  1984,   336,  2878,   923,  1288,
      70,    71,  1045,    70,    71,   907, -1179,  1615,  1630,  1261,
    1264,   363,    70,    71,   334,    70,    71,  2212,  1051,   808,
    1247,   690,  1305,   361,  2942,    70,    71,   927,   930,  1655,
     431,  1659,   394,  2113,  1169,   405,  1292,  1266,   411,  1953,
    1945,  1267,   417,  1707,  2116,   424,   117,   298,   696,  1406,
     428,   430,   763,   701,   440,  2163,    83,   447,   451,  1690,
     457,   454,  1099,   706,   455,   456,    70,    71,   464,  1573,
    1510,    70,    71,   465,  1969,    70,    71,   844,   308,  2164,
      70,    71,  2165,   498,    61,  1170,   597,   479,   483,   488,
     489,   493,   495,  2166,    70,    71,    70,    71,    70,    71,
    1715,  1060,  2948,  1001,   420,   364,   531,  1688,   499,  1962,
     889,   299,    70,    71,  1923,  1924,   122,  1154,  2167,  1268,
     466,   365,  1306,    60,  1558,    70,    71,    70,    71,    62,
    1307,    70,    71,  1956,  1554,   300,  2168,   994,  1970,  2114,
    1800,   352,  1511,   508,  1813,  1269,  1535,   997,   879,    63,
    2117,   476,    70,    71,  1660,   564,  1005,   572,  1052,   577,
     581,   309,  1954,   168,   443,   110,  1555,  1691,   541,   370,
     617,   122,  1512,   563,  1859,  1860,  1861,  1960,   477,    64,
    1046,   117,   338,   691,   117,  1656,   111,   660,   598,   707,
     890,  3064,   448,  1925,   301,   186,  2115,  2943,  1155,   532,
     273,    65,  1002,   845,   353,    66,   534,  2118,  1716,   444,
     697,  1971,   535,   125,   880,   908,  1270,   366,   436,  1006,
      67,   371,   126,   127,   458,   459,   117,   408,  1574,   257,
    1061,   367,   372,  1171,  1536,  1709,   809,  1407,   261,  1559,
     355,   432,  3087,   112,   810,   811,   924,  1896,   708,   255,
    1694,   117,  1129,  1130,   918,   536,   296,   603,  1695,  1256,
     620,  1513,   740,   423,   702,   373,   834,  1657,   125,  1963,
     310,   607,  1100,   460,  2132,  2949,   642,   126,   127,   770,
     771,   812,   621,   537,  1946,   311,  2134,  1528,   359,    72,
     742,  1949,   828,  1248,   117,   815,   433,   817,   692,   622,
     909,   449,   891,  1131,   434,  2944,   122,   820,   823,   122,
     826,   830,  2137,   832,  1708,  1172,   893,   130,  1658,  1514,
    1293,   925,  1995,   842, -1179,   698,  1173,  1271,  1522,  1727,
     461,  1689,  2879,  1964,  1661,   538,   852,   854,   170,   182,
     113,  1053,  1955,   928,   931,  1047,   256,   437,   764,  1692,
    1294,   122,  2213,  1308,   304,   693,   312,  1101,  3023,   896,
     906,  1174,   341,   913,   915,  1985,   917,   160,   467,   368,
     921,   922,   130,   914,   161,   162,   122,  1957,   302,   539,
     540,   936,   938,  2950,   409,   421,  1125,   450,   939,   881,
    1717,   438,   439,   942,   944,    73,   813,   117,   623,   360,
      68,   945,   442,   125,   393,   947,   125,  1454,  1455,  1456,
    1699,   117,   126,   127,    93,   126,   127,  2169,   404,   122,
     416,  1961,   160,  1516,   957,   958,  1296,   303,  1719,   161,
     162,   962,   963,   964,   965,   966,   967,   117,   969,   948,
    2090,   971,  1326,  2093,   646,   374,   114,  1950,   125,   662,
     117,  1132,  1133,   743,   744,   993,   979,   126,   127,  1710,
     980,  2112,   899,  2008,  2009,   985,   986,   987,   988,   989,
     990,  1321,   991,   125,   483,   995,   996,  1331,   117,  1759,
    1257,   258,   126,   127,   483,   998,  1542,  3024,   322,  2129,
     262,   171,   356,   919,   172,   510,   511,   512,   513,   514,
     515,   516,   517,   518,   519,  1236,   259,   130,   949,   604,
     130,  1771,  2158,   339,  2010,   263,   125,   357,  2133,  1041,
    1327,   306,   122,   608,   340,   126,   127,   173,   643,  1951,
    2135,   539,  3025,  1134,   605,   174,   122,  1920,  1236,   624,
    1028,  1029,   120,  1297,  1135,  1136,  1042,  1236,   609,    94,
     749,  1237,   130,   644,   625,  1332,  2138,   160,  1037,   745,
     160,  1250,   122,  1996,   161,   162,  1289,   161,   162,  1517,
     647,  1258,  2028,  2029,   120,   122,   348,   130,    95,  1137,
    1952,   351,    96,   884,  1237,   902,   548,   950,   350,  1110,
    1009,  1229,   120,  1237,  1063,   549,  1298,    70,    71,   865,
    1090,   175,   160,   122,    70,    71,  1156,  1979,  1263,   161,
     162,   741,    70,    71,  1358,  2253,  1696,  1328,  1230,   125,
     130,    70,    71,  2030,   768,   769,   324,   160,   126,   127,
    1518,  1353,  1442,   125,   161,   162,  1697,  1105,  1013,  1251,
      97,   402,   126,   127,  1290,  1966,  1364,  1299,    93,   885,
     377, -1405,  1333,  1967,   663,  1867,   825,  1519,  1163,   125,
     176,  2800,  2011,  2012,  1369,   867,  1801,  1805,   126,   127,
     160,   750,   125,  1348,   389,   407,  1458,   161,   162,  1160,
    1359,   126,   127,  1014,    98,  1124,   951,  1157,   648,   177,
     413,   178,   952,    99,   100,  1127,  1329,  1354,  1179,  1010,
     125,  1238,   314,   894,   897,   900,  1972,   903,   910,   126,
     127,  1809,  1365,   751,   752,   414,  1815,  1982,  1239,  1240,
     179,   649,   315,   130,   316,   128,   628,  1302,  1260,  1350,
    1370,  1334,  1802,  1806,  1238,  1417,  1252,   130,  1300,  1164,
    1355,  1291,  1418,  1238,  2013,  1819,  1384,  1178,   629,   415,
     946,  1239,  1240,   627,  1349,  2014,  2015,   128,   419,   753,
    1239,  1240,  1823,   130,  1231,   630,  1259,  1980,   672,  1272,
    1142,  2031,  2032,   160,   453,   128,   130,  1810,  1143,  1144,
     161,   162,  1816,    94,   904,  1011,   117,   160,  2048,  2049,
    2016,  1827,  1312,   180,   161,   162,   611,  1313,  1314,  1315,
    1316,   118,   426,  1317,   130,  1319,   390,  1320,   483,  1322,
    1351,  1820,    95,   160,   463,   673,  2312,  1241,  1242,   754,
     161,   162,   446,   119,   886,  1232,   160,  1914,  1824,  1145,
    2954,  1981,   469,   161,   162,  1918,  1777,  1663,  1973,  2050,
     875,   120,  1530,  1362,  1831,  2191,   755,  1778,  2374,  1397,
    1241,  1242,  1233,  2033,   160,  1360,   470,  1828,   317,  1241,
    1242,   161,   162,  1837,  2034,  2035,  1845,  1664,  2387,  2196,
    1665,  1599,  1356,  2326,    97,    70,    71,   835,  2397,  1600,
    1601,  2400,   631,  1974,  1383,   612,  1387,  1366,  2407,   121,
    1701,  1388,  1389,  1588,  1390,  1391,  1393,  1395,  1396,  2036,
    1597,   391,  1666,  2444,  1021,  1371,  2447,  1803,  1807,   472,
    1832,   122,  1409,  1410,  2455,   836,   856,  2458,    98,  1414,
    1415,   318,   613,  1849,  1363,    70,    71,    99,   100,  1838,
    1602,   120,  1846,  1667,    70,    71,  1668,   674,   474,  2475,
    1421,  1422,  1423,  1424,  1425,   632,  1427,  1975,  1429,   651,
     496,  3028,  1811,   615,   509,   123,  2483,  1817,  1783,   520,
     652,    70,    71,  3031,  1437,  1438,  1439,   289,  1441,   483,
    1443,   319,  1444,   837,   544,  1022,  1448,  1146,  1147,   521,
     343,   320,   857,   233,  2037,  2502,  1821,  2051,  2052,  1850,
     653,  2235,  2038,  2039,  1447,   633,  1449,  1589,   124,  1702,
     234,  2062,    84,  1825,  1598,   634,  1451,   120,   125,  2063,
    2064,   757,  1976,   483,  1459,   546,   616,   126,   127,  1461,
     858,   859,  1620,   574,   128,   183,  1120,    70,    71,   129,
     600,   758,  1829,  1794,  1795,   601,  1474,    70,    71,    85,
    1478,   974,   975,  2040,  1128,  2556,  2557,  2558,  2559,  2560,
    2561,  2562,  2563,  2564,  1521,  1523,  1526,   427,   602,  1148,
    2065,   290,  1531,   619,  1703,   636,   325,  1537,  1669,  2053,
    1149,  1150,    70,  1392,   654,  1151,   638,   291,  1603,  1604,
    2054,  2055,  1540,   639,  1592,  1833,   661,  2983,  1066,    70,
      71,  1067,  1068,   344,   838,  2895,   410,  1915,    70,    71,
    1621,  1550,   641,  1670,  1839,  1152,  3000,  1847,  2565,    70,
      71,  1525,   130,   668,   128,  2056,   292,    86,  1275,   655,
     667,   759,   670,  1303,  2920,   689,   860,   695,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   861,    70,    71,
    1605,   700,   160,   704,  1851,   705,    87,    88,  1883,   161,
     162,  1606,  1607,   293,   709,  1013,  1608,   345,   738,  1693,
    1796,  1797,  1400,  1401,  1622,  1623,   739,   294,   346,   747,
     128,  2041,  2042,   761,   656,   766,   490,    70,    71,  1624,
    1718,    70,    71,  2989,   657,   943,  1609,   676,  2066,  2067,
    1725,   767,  1798,   772,    89,    90,    70,    71,   326,   807,
    1014,   935,   819,   103,  1403,  1404,   327,  1754,   328,  1755,
      70,  1473,  1385,   104,  1756,  1757,  1758,  2981,  2982,   821,
     105,  2985,   833,  2987,  1764,   840,  1625,  1765,  3080,  1767,
    2073,  2652,   658,  1762,  1763,  3084,  2998,  2999,  2074,  2075,
    2661,  3003,  3004,  1069,  1070,  3007,  1769,   841,  1770,  2670,
    3008,  3009,    91,  2043,   491,  2789,  1774,  1775,   843,  1071,
    2411,  2412,  2151,  2152,  2044,  2045,   847,  2316,   677,  2046,
    2068,  1781,  1782,   982,   983,   483,  1784,  1785,  1431,    70,
      71,  2069,  2070,  1787,   849,  1788,  2071,  1413,  1790,  2076,
    1791,   863,  3121,  1934,  3122,   855,   883,   822,   888,  2047,
      76,   912,  1072,  2420,  2421,  1871,    77,   920,  1073,  3049,
     106,  2413,  3050,   678,  1566,  1567,  2072,  3053,   933,    70,
      71,   940,   955,   274,   959,    70,    71,  2744,   941,  3057,
     480,   481,   482,  2760,  3060,   956,  1862,  1074,  2765,   960,
     961,  1863,   968,  2429,  2430,  1864,   970,  1865,  1866,    78,
    1877,   492,  1869,   972,  2422,   973,   679,   850,   976,   107,
     978,  1075,    70,    71,  2106,   480,   275,   999,  1875,   276,
    1878,  1935,  1880,  1881,  1882,  1884,   482,    79,  1886,  1887,
    1076,  1889,  1890,  1000,  1892,  1017,  1894,  1004,   277,    70,
      71,  2109,  1008,  1902,  2431,  1077,   108,    70,    71,  2155,
    1908,  1921,  1078,  1019,  1909,  1910,  1911,   278,  1024,  3102,
    1079,  1026,   500,  3105,   483,  1916,  1039,  1058,  1919,  1941,
    1055,  1044,  1049,  1056,   279,   583,  1929,  1064,  1930,    80,
     280,  1932,  1059,  3116,  1091,   851,  1092,  2077,  2078,  1093,
    1095,   584,    70,    71,  2111,  1627,  1628,  3123,  1106,  1097,
    3124,  3125,  1112,  1117,  1103,  1936,  1937,  1108,  1118,  2414,
    2415,  1119,  1121,    70,    71,   585,  1627,  1628,   335,  1122,
    1938,  1123,  1080,  1126,    81,  1138,  1139,  1140,  1986,  1141,
    1987,   281,  1153,  1988,  1989,   586,  1990,  1165,  1991,  1167,
     501,  1168,  1081,  1175,  1993,  1176,  1177,  1082,  1994,  1083,
    1228,  1235,  2423,  2424,   282,   587,  1244,  2000,  1246,   588,
     710,  1254,  1311,   711,  1255,   502,   503,  1939,  1309,  2079,
    1323,  1310,  1325,  1336,   504,  1337,  1338,  1084,  1085,  1339,
    2080,  2081,   712,  1340,  1722,  2082,  1086,  1341,  1342,   589,
     590,  2416,  2432,  2433,  1343,  1346,   505,  1344,  1345,  1347,
    1368,  2893,  2417,  2418,  1373,   497,   506,  1087,  1374,  2889,
    1375,  1378,  2892,  1376,  2894,  2083,  1377,  2906,   713,  2105,
    1379,  1399,  2911,  1380,   714,  1411,  1381,  1382,  1398,  2547,
    2907,  2908,  1402,  1405,  2425,  1412,  1416,  2419,  2107,  2108,
    2110,  1419,  1768,  1420,  1426,  2426,  2427,  2922,  1428,  1430,
    1432,  1433,   591,  1445,  1446,  1465,  1776,  1464,   378,  1468,
    2120,  1466,  1470,   592,  2123,  1088,   283,  1469,  1471,   379,
    1472,   265,  1476,  1477,  2434,   715,   561,  1527,   568,   571,
    2428,   576,   580,  1529,  1538,  2435,  2436,  1515,  1541,  1543,
    2154,  2156,  1544,  1547,   284,   285,  1635,  1533,  1548,   380,
    2162,  1551,   266,  1552,  2173,  1553,   286,  1561,  1562,  1578,
     287,  2179,  1563,  1564,   665,    70,    71,  2128,  1627,  1628,
    2437,  1568,  2591,  1570,  1636,  2184,  1569,  1571,  1572,   593,
     594,  2187,  1579,   681,   687,  2189,  1581,  2192,  2193,   694,
    2195,  2197,  2198,   699,  2201,  1582,  2610,  2204,  2205,  2206,
    2207,  2208,  2209,  2210,  2211,  2214,  2216,  2217,   118,  1584,
    1637,  2219,  2220,  2221,  2222,  1586,  1594,  1596,  1638,   522,
    1610,  2228,  2229,  1611,  1639,  2231,  2232,  2233,  1612,  1613,
    1616,  2236,  2237,   381,  1617,   267,  1899,  1900,  1618,   523,
    1631,  1632,  1633,  1634,  2240,  2241,  1640,  2242,  2243,  1653,
     816,   566,   268,   818,  1654,   595,   524,  1662,  1671,  1682,
     716,  1686,  1683,  1684,   827,  1685,  1687,  1705,  1641,   525,
      70,    71,  2157,  1627,  1628,  1706,  1700,  1704,   382,  1711,
    1721,  1712,  1713,  1723,  1714,  1720,  1642,   848,   717,   718,
    1724,   526,  1753,  1786,  2508,   527,   121,  1761,  1772,  1773,
     719,  1779,  1780,  1789,   720,  1792,  1793,  -495,  1814,  1835,
     528,  1836,  1841,  2288,  1842,  1843,  1844,  1855,   269,  2281,
    1853,  2282,  2283,  1854,  1643,  1856,  2284,  1857,  1858,  1965,
    1872,  2286,  2289,  1873,  2291,  2292,  2293,  1874,  2294,  2295,
    1879,  2297,  1885,  2298,  2299,  1888,  2301,  2302,  1891,  2304,
    2550,  2306,  1893,   383,  1898,  3079,  1903,   529,  1904,  2310,
    1905,  2730,   123,   384,   270,  1644,  1917,  2314,  1922,   865,
    1931,  1942,  2319,  2320,  1933,   271,  1943,  1944,  2322,  1948,
    1958,  1645,  1959,  1968,  2339,   385,  1977,  2325,  1998,  1983,
    1672,  1992,  1999,   386,  1646,  2345,  1978,  2004,  2023,  2350,
    2026,  2779,  2057,  2059,  1557,  2061,  2084,   977,  2783,  2085,
    2571,   387,  2086,  2087,  2091,  2092,  2130,  2094,   984,  2095,
    1673,  2096,  2354,  1674,  2099,  1647,  1675,   992,  2102,  2119,
    2103,   866,  2122,  2127,  2131,   867,   129,  2141,  1648,  2136,
    1649,  1650,  1614,  2142,  2143,  2139,  2364,  2365,  2144,  2146,
    2147,  2367,  2148,  2140,  2149,  1676,  2153,  2369,  2171,  2121,
    2176,  2186,  2150,  2125,  2126,  2188,  2190,  2199,  2194,  2225,
    2226,  2202,  2203,   868,   869,  2811,  2218,  2813,   870,  2814,
    2227,  1651,  2815,  2238,  2816,  2239,  1677,  2244,  2245,  1678,
    2246,  2249,  2159,  2247,  2248,  2250,  2251,  1030,  1031,  2252,
    2363,  2254,  2255,  2175,  2256,  2391,  2257,  2258,  2259,  2262,
    1035,   567,  2180,  2181,  2260,  1038,  2261,  2263,  2264,   871,
    2265,  2574,  2266,  2185,  1050,  2267,  2268,  2269,  2270,  2438,
    2271,  2272,  2273,  2274,  2449,  2275,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,  2470,  2471,  2276,  2473,  2277,   831,
    2278,  2279,  2280,  2300,   872,  2296,  2303,  2305,  2307,   873,
    2309,  2321,  2774,  2327,  2328,  2329,  2330,  2484,  2485,  2486,
    2487,  2488,  2489,  2490,  2491,  2492,  2331,  2366,  2897,  2368,
    2371,  2372,  2373,  2375,  2376,  2380,   874,  2377,  2382,  3013,
     875,  2498,  2383,  2500,  1113,  1114,  1115,  1116,  2384,  2388,
    2389,  1679,   876,  2390,  2728,  2729,  2392,  2393,  2732,  2733,
    2507,   483,  2736,  2737,   934,  2394,  2511,  2398,  2399,  2929,
    2401,  2402,  2403,  2404,  2408,  2409,  2514,  2515,  2516,  2517,
    2518,  2519,  2520,  2521,  2522,  2523,  1680,  2410,  2526,  2527,
    2528,  2529,  2530,  2531,  2532,  2533,  2534,  2535,  2536,  2537,
    2439,  2540,  2440,  2541,  2542,  2543,  2441,  2445,  2446,  2456,
     721,   722,   723,  2448,  2450,  2451,  1681,   483,  2551,  2787,
    2452,  2457, -1197,  2459,  1217,  2461,  2462,  2464,  3013,  2465,
     954,  2467,  2474,  2476,  2479,  2482,  2493,   724,  2494,  2496,
    1218,  2495,  2497,  2898,  2501,  2539,  2544,  2545,  2552,  1219,
     725,  2548,  2549,  2555,  1274,  2575,  2576,  2581,  2583,  2585,
    1220,  2587,  2899,  2594,  2598,  2599,   726,  2600,  2601,  2566,
    2602,  2567,  2631,  2568,  2634,  2570,  2636,   483,  2572,  2639,
    2573,  2642,  2643,    70,    71,  2577,  2578,  2645,  2579,  2580,
    2647,  2582,  2648,  2584,  2597,  2649,  1221,  2653,   727,   118,
    2589,  2654,  2590,  2655,  2656,  2657,  2593,  2658,   728,  2595,
    2662,  2663,  2900,  2664,  2665,  2666,  2667,  2671,  1222,  2672,
    2752,  2673,  2680,  2683,  2691,  1027,  2694,  2697,  2698,  2699,
     729,  2702,  1032,  2707,  2711,  1033,  2633,  2727,  2785,   730,
    1034,  2791,  2792,  2793,  1036,  2794,  2797,  2799,   981,  2802,
    2804,  2806,  2001,  2002,  2003,  2805,  2635,  2807,  2809,   731,
    2818,  2820,  2005,  2006,  2007,  2825,  2832,  2841,  2850,  2856,
    2860,  2018,  2019,  2020,  1223,  2866,  2021,  2022,  2877,  2024,
    2025,   732,  2874,  2882,  2887,  2901,  2919,   121,  2902,  2903,
    2905,  2930,  3095,  2931,  2933,  2934,  2935,  2936,  2937,  2938,
    2939,  2941,  2953,  2700,  2947,  2977,  2980,  2986,  3027,  2990,
    2991,  2904,  2992,  2097,  2098,  1224,  2993,  2100,  2101,  2994,
    2995,  2997,  2917,   733,  3002,  3017,  3065,  3018,   734,  1111,
    3019,  3020,  3021,  3022,  3029,  3032,  3043,  3051,  3055,  1435,
    3054,  3058,  3010,  3067,  1225,   735,  3068,  3075,   736,  3078,
    3104,  1440,  3082,   123,  3089,  2478,  3090,  3096,  3108,  3109,
    2705,  3111,  3115,  3117,  3066,  3118,  3119,  3120,  3062,  1352,
       0,  2712,  2713,  2714,  2715,  2716,  2717,  2718,  2719,  2720,
    2721,  2722,     0,  3070,  3072,     0,     0,  2725,  1226,  1450,
    1227,   483,   483,  2503,     0,   483,   483,     0,     0,   483,
     483,  2738,  2739,  2740,  2741,  2742,  2743,     0,  2745,  2746,
    2747,     0,     0,     0,  2761,  2762,  2763,  2764,     0,  2766,
    2767,  2768,  2769,  2770,  2771,     0,  2773,   129,     0,  2777,
    2778,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  2786,     0,     0,   483,  2788,     0,  2592,
       0,  2790,     0,     0,     0,     0,  2795,  2796,     0,  2798,
       0,     0,     0,     0,     0,     0,  2605,  2606,  2607,     0,
    1546,  2609,     0,  2611,  2612,     0,     0,  2614,  2615,  2616,
       0,  1318,  2618,  2619,     0,     0,     0,  2623,  1324,  2625,
    2626,     0,  2628,     0,     0,     0,  1576,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2821,     0,     0,     0,     0,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,     0,     0,     0,     0,     0,
       0,  1276,     0,     0,     0,     0,  1698,     0,     0,  1277,
       0,     0,     0,     0,     0,     0,     0,  1278,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2868,  1279,     0,     0,  2870,     0,
       0,     0,  1280,     0,     0,     0,     0,     0,  2871,  2872,
    2701,     0,     0,  2704,  2876,   483,     0,     0,  2708,  2881,
     483,  2709,  1760,     0,     0,  2886,     0,  1281,  2890,  2891,
       0,     0,  1766,     0,     0,     0,     0,     0,  1282,     0,
    2724,  1434,     0,     0,     0,     0,     0,     0,  1436,     0,
    2909,  2910,     0,  2912,  2913,  2914,  2915,  2916,     0,   483,
    2918,     0,     0,     0,  2921,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2932,     0,     0,
       0,     0,     0,  1283,     0,     0,     0,  2940,     0,     0,
       0,  1284,     0,     0,  1452,  1453,     0,     0,     0,  1457,
       0,     0,  1460,     0,     0,  2370,     0,     0,  2955,     0,
       0,     0,     0,     0,  1467,   773,   774,     0,  2378,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2381,  2801,
       0,   775,     0,     0,     0,     0,     0,     0,     0,     0,
    1285,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    2967,     0,     0,  1286,  1868,  2971,     0,  2973,     0,     0,
       0,     0,  2812,  2976,     0,     0,     0,     0,     0,     0,
       0,  1287,  1876,     0,   776,     0,     0,     0,  2984,     0,
     777,  2780,     0,     0,     0,     0,     0,     0,     0,   778,
       0,   779,     0,     0,     0,     0,   780,  3001,     0,   781,
    2466,  3005,  1907,  3038,     0,   782,     0,     0,     0,   783,
       0,     0,  1913,     0,     0,     0,   784,     0,     0,     0,
       0,     0,     0,     0,   785,     0,     0,  3026,     0,  1928,
       0,     0,     0,   786,     0,     0,     0,    70,    71,     0,
       0,  1940,     0,  1619,  2865,     0,  1947,     0,     0,     0,
       0,     0,   787,   118,     0,     0,     0,     0,  3041,     0,
       0,     0,     0,  3046,  2873,     0,  3048,     0,     0,     0,
       0,     0,  2880,  3052,   788,  2883,  2884,     0,     0,     0,
       0,     0,     0,     0,  3056,     0,     0,     0,     0,  3059,
       0,     0,   789,   120,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   790,   791,     0,     0,     0,
       0,     0,  3077,  3069,  3071,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2017,     0,
     792,     0,     0,     0,     0,     0,     0,     0,     0,  3081,
    2027,   121,     0,  3083,  3098,     0,  3085,  3101,     0,     0,
       0,     0,     0,     0,     0,   793,  3091,  3092,  3093,  3094,
       0,     0,  2088,  2089,     0,     0,     0,     0,  3103,   794,
       0,   795,  3106,     0,     0,     0,     0,     0,     0,  3110,
       0,  3112,     0,     0,     0,     0,     0,   796,     0,     0,
       0,  2104,   797,     0,     0,     0,     0,     0,     0,     0,
     798,     0,     0,     0,     0,  2968,     0,   123,   799,     0,
       0,     0,     0,  2923,     0,     0,     0,  2928,     0,  2124,
       0,     0,     0,     0,     0,     0,  2979,     0,     0,   800,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   801,   802,     0,   803,     0,     0,     0,
    2160,     0,     0,  2161,     0,     0,     0,  2172,     0,     0,
       0,  1870,     0,  2177,  2178,     0,     0,     0,     0,     0,
       0,  2182,     0,     0,     0,     0,   128,     0,  2183,     0,
    2637,   129,     0,     0,     0,     0,     0,   804,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1901,
       0,     0,     0,     0,  1906,     0,     0,     0,     0,     0,
    3039,  3040,     0,  3042,  1912,  3044,  3045,     0,     0,  3047,
    2223,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  2234,     0,     0,     0,     0,     0,     0,  2996,
    2675,  2676,  2677,  2678,  2679,     0,  2681,  2682,   236,     0,
       0,  2686,  2687,  2688,  2689,  2690,     0,  2692,  2693,     0,
       0,     0,     0,  3016,     0,     0,     0,     0,     0,     0,
       0,   237,     0,     0,   238,     0,     0,     0,     0,  3074,
       0,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,   159,     0,
       0,   239,     0,     0,     0,     0,     0,     0,   240,     0,
       0,     0,     0,     0,     0,     0,     0,  3107,     0,   241,
     242,     0,     0,     0,     0,  2287,   243,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2308,
       0,     0,     0,     0,     0,   244,     0,     0,     0,     0,
       0,   579,     0,     0,     0,  2318,     0,     0,     0,     0,
       0,     0,     0,   245,     0,     0,   118,     0,  2323,     0,
    2324,     0,     0,     0,     0,     0,     0,     0,     0,  3088,
    2333,   246,   247,  2335,  2336,  2337,  2338,  2340,   248,  2342,
       0,     0,  2343,     0,     0,     0,     0,  2344,  2346,  2347,
    2348,  2349,  2351,     0,  2352,  2353,   120,     0,     0,  2355,
    2356,  2357,  2358,   249,     0,  2359,  2360,     0,     0,  2822,
       0,  2361,  2362,     0,     0,     0,     0,     0,  2827,  2828,
    2829,  2830,  2831,     0,  2833,  2834,     0,  2836,  2837,  2838,
    2839,  2840,  2174,  2842,  2843,     0,  2845,  2846,  2847,  2848,
    2849,     0,  2851,  2852,   121,  2854,   250,     0,     0,     0,
       0,     0,  2379,     0,     0,  2857,  2858,     0,     0,     0,
    2385,  2386,     0,     0,     0,     0,  2861,     0,     0,     0,
    2395,  2396,     0,     0,     0,     0,     0,     0,     0,     0,
    2405,  2406,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  1728,     0,  2224,  2442,  2443,  1729,     0,     0,
    2230,     0,   251,     0,     0,     0,  2453,  2454,     0,     0,
     123,     0,     0,  2460,     0,   252,     0,     0,     0,     0,
       0,  1730,  1731,  2463,  1732,  1733,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1734,     0,  2469,     0,     0,
    2472,     0,     0,     0,     0,     0,   253,     0,     0,  1735,
    1736,  2477,     0,     0,  2480,     0,  2748,  1737,     0,     0,
    1738,     0,     0,     0,     0,     0,     0,  2749,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1739,   128,
       0,     0,     0,     0,   129,     0,  2499,  1740,  1741,     0,
       0,  1742,     0,     0,     0,  1276,  2750,     0,     0,     0,
       0,     0,     0,  1277,     0,  2285,  2958,     0,     0,     0,
    2290,  1278,     0,     0,     0,  2960,     0,     0,     0,     0,
       0,     0,     0,     0,  2962,     0,  2963,     0,     0,  1279,
    2965,     0,     0,     0,     0,     0,  1280,     0,     0,  2751,
       0,  2311,     0,  2538,     0,     0,     0,  2317,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1281,  1743,     0,     0,     0,  2554,     0,     0,     0,
       0,     0,  1282,     0,  2334,     0,     0,     0,     0,     0,
       0,  2341,     0,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,     0,     0,     0,     0,     0,  1283,     0,     0,
       0,     0,     0,  1744,     0,  1284,     0,     0,  3033,  1745,
    3034,     0,  3035,     0,     0,  3036,     0,  3037,     0,     0,
       0,  2588,     0,     0,     0,     0,     0,  1746,     0,     0,
       0,     0,     0,     0,     0,     0,  2596,     0,  1747,     0,
       0,     0,     0,  2603,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1285,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  2621,     0,  1286,     0,  1748,
    1749,     0,    70,    71,  2630,     0,     0,     0,  2632,     0,
       0,     0,     0,     0,     0,  1287,     0,     0,   118,  2638,
       0,     0,  1750,     0,     0,     0,  2752,     0,  2753,  2640,
    2641,     0,     0,     0,     0,     0,     0,     0,     0,   330,
    2644,     0,     0,     0,     0,     0,     0,     0,  2468,  2646,
       0,     0,  1927,  2650,  2651,     0,     0,     0,   120,     0,
       0,     0,  2659,  2660,     0,     0,     0,   118,  2481,  1751,
       0,  2668,  2669,     0,     0,     0,     0,  2674,     0,     0,
       0,     0,     0,     0,  2754,     0,     0,  2684,  2685,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2695,     0,
    2696,     0,     0,     0,  2504,  2505,   121,     0,     0,     0,
       0,     0,  2703,     0,     0,  2706,  2506,     0,     0,     0,
       0,  2509,  2510,  2710,     0,     0,  2512,  2513,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2723,
       0,     0,  2726,     0,     0,     0,     0,     0,  2731,     0,
       0,  2734,  2735,     0,     0,   121,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2546,     0,     0,
       0,     0,   123,     0,     0,     0,     0,     0,  2553,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  2781,
    2782,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   331,     0,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  2569,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   128,  2808,     0,     0,     0,   129,     0,     0,     0,
       0,     0,  2586,     0,     0,     0,     0,   332,   396,     0,
       0,     0,     0,     0,     0,     0,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  2604,  2823,     0,
       0,  2824,  2608,     0,  2826,     0,     0,     0,  2613,     0,
       0,     0,     0,  2617,  2835,   129,     0,  2620,     0,  2622,
       0,  2624,     0,  2844,  2627,     0,  2629,     0,     0,     0,
       0,     0,  2853,     0,     0,     0,     0,     0,     0,  2855,
       0,     0,     0,     0,     0,     0,   333,     0,     0,     0,
    2859,     0,     0,     0,     0,     0,  2862,     0,     0,     0,
       0,     0,     0,  2864,     0,     0,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,     0,     0,     0,  2885,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  2896,     0,
       0,     0,     0,     0,     0,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  2946,     0,     0,     0,
    2952,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2956,     0,     0,     0,     0,     0,
       0,  2957,     0,     0,     0,     0,   118,     0,     0,     0,
    2959,     0,  2772,     0,     0,     0,     0,     0,     0,  2961,
       0,     0,     0,     0,     0,  2964,     0,     0,  2784,  2966,
       0,     0,     0,     0,     0,     0,     0,  2969,  2970,     0,
    2972,   398,     0,     0,   399,  2974,  2975,     0,     0,     0,
       0,     0,  2978,     0,     0,   551,   552,     0,     0,     0,
       0,   553,     0,   682,     0,   118,     0,     0,     0,     0,
    2803,     0,     0,     0,     0,     0,     0,  2810,     0,     0,
       0,     0,     0,  1158,   554,   555,  3006,     0,  1159,     0,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  2817,     0,  2819,   683,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  3030,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,     0,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     0,   684,
       0,     0,     0,     0,  2863,   556,     0,     0,     0,     0,
    2867,     0,     0,     0,  2869,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   557,     0,     0,     0,     0,
    2875,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  3076,     0,     0,     0,     0,   123,
     558,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  3086,     0,   129,     0,     0,     0,     0,   685,
       0,     0,     0,     0,     0,     0,  3097,     0,     0,  3100,
       0,     0,     0,     0,     0,  2926,  2927,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,     0,     0,     0,     0,     0,
     559,     0,     0,   129,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,     0,   560,     0,     0,     0,     0,   686,     0,
    2988,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1180,  1181,  1182,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     159,  1183,  1184,     0,     0,  1185,     0,     0,  1186,     0,
       0,     0,     0,     0,     0,  1187,     0,     0,     0,  1188,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1189,
    1190,     0,   118,     0,  1479,  1480,  1481,  1191,  1192,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1193,     0,
       0,     0,     0,     0,     0,  1194,     0,     0,     0,     0,
    3061,     0,     0,  1195,     0,  1482,  1483,  1196,  1197,  1484,
     118,  1198,   120,     0,     0,     0,  1485,     0,     0,  1486,
       0,     0,     0,  1487,  3073,     0,     0,     0,     0,     0,
       0,  1199,     0,  1488,  1489,     0,     0,     0,     0,   118,
       0,  1490,     0,     0,     0,     0,     0,     0,     0,     0,
     120,     0,  1491,  1200,     0,     0,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     0,   118,     0,     0,
    3099,  1492,  1493,     0,     0,  1494,     0,     0,     0,  1545,
       0,     0,  1201,     0,     0,     0,     0,     0,     0,     0,
       0,  3113,     0,     0,  3114,  1495,     0,     0,   121,     0,
     118,     0,     0,     0,     0,     0,     0,     0,     0,  1202,
       0,     0,     0,     0,     0,     0,     0,  1496,     0,     0,
       0,     0,     0,     0,     0,     0,   123,   121,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1203,     0,  1204,     0,     0,  1497,  2332,     0,  1205,
    1206,     0,     0,     0,     0,   121,  1498,     0,     0,     0,
       0,     0,     0,     0,   123,     0,  1207,  1208,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1209,  1210,
       0,     0,     0,     0,     0,     0,     0,     0,   121,     0,
       0,     0,     0,   123,     0,   128,     0,     0,     0,     0,
     129,     0,     0,     0,     0,  1499,     0,  1500,  1211,     0,
    1212,     0,     0,  1501,  1502,     0,     0,     0,     0,     0,
       0,   123,     0,  1213,     0,  1214,     0,     0,     0,     0,
       0,  1503,  1215,   128,     0,     0,     0,     0,   129,     0,
       0,     0,     0,  1504,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   570,  1216,   129,     0,     0,
       0,     0,  1505,     0,  1506,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1507,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,  1508,     0,     0,     0,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   129,     0,
    1509,     0,     0,     0,     0,     0,     0,     0,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,     0,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,   159,     0,     0,     0,     0,     0,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,     1,     0,     0,     2,
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     0,     0,     0,
       0,     5,     6,     0,     0,     0,     7,     8,     9,     0,
       0,     0,     0,     0,     0,     0,    10,     0,     0,     0,
       0,     0,     0,    11,     0,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    16,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    18,     0,     0,     0,    19,     0,
       0,     0,    20,     0,     0,     0,    21,    22,     0,     0,
       0,     0,    23,    24,     0,     0,    25,     0,     0,     0,
       0,     0,    26,     0,     0,     0,     0,     0,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,     0,     0,    29,    30,    31,     0,     0,    32,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,     0,    37,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
      40,     0,     0,     0,     0,     0,     0,    41,     0,     0,
       0,    42,     0,   188,     0,    43,   189,    44,    45,   190,
      46,     0,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   191,
       0,    48,     0,   192,   193,   194,     0,    49,     0,     0,
       0,     0,     0,   195,     0,   196,     0,     0,     0,     0,
     197,     0,   198,   199,   200,    50,    51,     0,     0,     0,
     201,     0,   202,     0,     0,     0,     0,     0,    52,     0,
      53,     0,     0,     0,     0,     0,     0,    54,     0,     0,
      55,    56,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   203,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    57,     0,     0,     0,   204,     0,     0,     0,    58,
       0,     0,     0,     0,   205,     0,   206,   207,     0,   208,
     209,     0,     0,   210,     0,     0,     0,   211,     0,   212,
    1590,     0,     0,     0,     0,   213,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   214,   215,     0,     0,     0,
     216,     0,     0,     0,     0,     0,     0,     0,   217,     0,
       0,     0,   218,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     219,     0,   220,     0,     0,     0,     0,     0,     0,   221,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   222,     0,   223,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   224,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   225,   226,     0,     0,     0,     0,     0,     0,
       0,     0,   227,     0,     0,     0,     0,     0,     0,     0,
     228,     0,     0,     0,     0,     0,   229,     0,   230,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,  1591,     0,     0,
       0,     0,     0,     0,     0,     0,   231
};

static const yytype_int16 yycheck[] =
{
       3,  1675,    56,  1148,  1044,  1909,  1151,  1911,    11,   542,
     314,     4,    48,    16,     5,    16,    37,     5,     4,   795,
       3,     4,     4,     3,     4,    18,     0,  1172,  1181,   790,
     791,    26,     3,     4,    37,     3,     4,     5,     4,     4,
      16,     5,     5,    46,    33,     3,     4,     4,     4,    27,
       4,    28,    55,   113,    13,    58,     5,    37,    61,    28,
      21,    41,    65,     5,   113,    68,     4,     5,     5,   103,
      73,    74,     5,     4,    77,    27,   318,    80,    81,    37,
       4,    84,    18,     4,    87,    88,     3,     4,    91,    16,
      69,     3,     4,    96,   187,     3,     4,   163,    60,    51,
       3,     4,    54,   124,    11,    64,   238,   110,   111,   112,
     113,   114,   115,    65,     3,     4,     3,     4,     3,     4,
      37,   146,    33,   110,    33,   120,   128,    27,   131,    27,
      35,    69,     3,     4,    24,    25,   129,    92,    90,   119,
       5,   136,   105,    69,   181,     3,     4,     3,     4,    56,
     113,     3,     4,    21,   173,    93,   108,   497,   251,   219,
    1339,     4,   141,   166,  1343,   145,    16,   507,    64,    76,
     219,     5,     3,     4,   151,   196,   215,   198,   144,   200,
     201,   143,   151,    34,   151,    41,   205,   145,   191,    53,
     211,   129,   171,   196,  1373,  1374,  1375,    21,    32,   106,
     182,     4,     5,   167,     4,   183,    62,   228,   340,   130,
     115,  3012,    83,   103,   152,   158,   276,   206,   173,   221,
      15,   128,   209,   289,    67,   132,   209,   276,   145,   196,
     167,   324,   215,   226,   130,   228,   216,   232,   209,   278,
     147,   105,   235,   236,   168,   169,     4,     5,   175,    64,
     275,   246,   116,   212,   104,    27,   221,   291,    64,   296,
      64,   215,  3063,   119,   229,   230,   252,   303,   271,    69,
     292,     4,    13,    14,    62,   258,   257,    64,   300,    16,
      47,   260,   285,   135,   215,   149,   340,   265,   226,   187,
     252,    64,   228,   217,    21,   206,    64,   235,   236,   302,
     303,   266,    69,   286,   265,   267,    21,  1083,   216,   221,
       5,    27,   333,   289,     4,   318,   270,   320,   282,    86,
     313,   192,   227,    64,   278,   314,   129,   330,   331,   129,
     333,   334,    21,   336,   276,   294,    69,   330,   316,   318,
     289,   327,    20,   346,   318,   282,   305,   327,   233,   340,
     274,   251,   340,   251,   331,   338,   359,   360,    14,    15,
     216,   327,   331,   320,   320,   347,    22,   338,   301,   327,
     319,   129,   340,   336,    30,   339,   338,   313,   209,    69,
     383,   340,    38,   386,   387,   386,   389,   380,   253,   384,
     393,   394,   330,   251,   387,   388,   129,   265,   336,   382,
     383,   404,   405,   314,    60,   314,   710,   278,   411,   305,
     327,   382,   383,   416,   417,   327,   381,     4,   185,   327,
     327,   424,    78,   226,   327,   428,   226,  1032,  1033,  1034,
    1206,     4,   235,   236,    29,   235,   236,   389,   327,   129,
     327,   265,   380,    31,   447,   448,    16,   385,  1224,   387,
     388,   454,   455,   456,   457,   458,   459,     4,   461,    31,
    1605,   464,    41,  1608,    21,   329,   322,   183,   226,    15,
       4,   212,   213,   168,   169,   496,   479,   235,   236,   251,
     483,  1634,    69,    13,    14,   488,   489,   490,   491,   492,
     493,   831,   495,   226,   497,   498,   499,    41,     4,  1260,
     237,   316,   235,   236,   507,   508,  1111,   338,   316,  1662,
     316,    45,   316,   301,    48,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,    66,   341,   330,   100,   316,
     330,  1292,  1685,   336,    64,   341,   226,   341,   265,     4,
     119,     5,   129,   316,   347,   235,   236,    81,   316,   265,
     265,   382,   383,   294,   341,    89,   129,     4,    66,   326,
     563,   564,    59,   133,   305,   306,   587,    66,   341,   164,
       5,   112,   330,   341,   341,   119,   265,   380,   581,   274,
     380,    41,   129,   261,   387,   388,    41,   387,   388,   177,
     147,   328,    13,    14,    59,   129,     4,   330,   193,   340,
     316,    42,   197,    64,   112,    12,   188,   179,    93,   663,
      83,     4,    59,   112,   617,   197,   186,     3,     4,    64,
     641,   155,   380,   129,     3,     4,    92,    27,   136,   387,
     388,   287,     3,     4,    64,  1814,   251,   216,    31,   226,
     330,     3,     4,    64,   300,   301,    69,   380,   235,   236,
     238,    64,   992,   226,   387,   388,   271,   660,   151,   119,
     255,   257,   235,   236,   119,   292,    64,   237,    29,   130,
       4,     0,   216,   300,   220,     4,   332,   265,    92,   226,
     214,  2585,   212,   213,    64,   130,    64,    64,   235,   236,
     380,   126,   226,    92,     4,     0,  1036,   387,   388,   753,
     130,   235,   236,   196,   299,   708,   278,   173,   265,   243,
     300,   245,   284,   308,   309,   718,   295,   130,   772,   192,
     226,   262,    47,   379,   380,   381,  1502,   134,   384,   235,
     236,    64,   130,   168,   169,     5,    64,  1513,   279,   280,
     274,   298,    67,   330,    69,   242,    47,   320,   289,    92,
     130,   295,   130,   130,   262,     4,   216,   330,   328,   173,
     173,   216,    11,   262,   294,    64,   313,   770,    69,     4,
     426,   279,   280,   214,   173,   305,   306,   242,     5,   214,
     279,   280,    64,   330,   177,    86,   789,   187,    45,   792,
       5,   212,   213,   380,     5,   242,   330,   130,    13,    14,
     387,   388,   130,   164,   211,   278,     4,   380,    13,    14,
     340,    64,   815,   347,   387,   388,     4,   820,   821,   822,
     823,    19,   381,   826,   330,   828,   136,   830,   831,   832,
     173,   130,   193,   380,     4,    92,   197,   378,   379,   274,
     387,   388,   221,    41,   305,   238,   380,  1452,   130,    64,
    2820,   251,     4,   387,   388,  1460,     5,    22,   142,    64,
     305,    59,   233,    92,    64,   251,   301,    16,  2013,   923,
     378,   379,   265,   294,   380,   305,    32,   130,   203,   378,
     379,   387,   388,    64,   305,   306,    64,    52,  2033,   251,
      55,     5,   305,  1933,   255,     3,     4,    57,  2043,    13,
      14,  2046,   203,   187,   907,    93,   909,   305,  2053,   107,
     142,   914,   915,  1156,   917,   918,   919,   920,   921,   340,
    1163,   231,    87,  2068,   215,   305,  2071,   305,   305,     5,
     130,   129,   935,   936,  2079,    95,    64,  2082,   299,   942,
     943,   266,   130,    64,   173,     3,     4,   308,   309,   130,
      64,    59,   130,   118,     3,     4,   121,   214,     5,  2112,
     963,   964,   965,   966,   967,   266,   969,   251,   971,    38,
     216,  2941,   305,     5,     4,   173,  2129,   305,  1318,   126,
      49,     3,     4,  2953,   987,   988,   989,    26,   991,   992,
     993,   316,   995,   153,   318,   286,  1017,   212,   213,    69,
      75,   326,   130,    88,     5,  2158,   305,   212,   213,   130,
      79,  1772,    13,    14,  1017,   316,  1019,  1157,   216,   251,
     105,     5,     4,   305,  1164,   326,  1029,    59,   226,    13,
      14,    99,   316,  1036,  1037,   188,    68,   235,   236,  1042,
     168,   169,    87,    34,   242,    67,   702,     3,     4,   247,
      69,   119,   305,    43,    44,     5,  1059,     3,     4,    41,
    1063,     4,     5,    64,   720,  2244,  2245,  2246,  2247,  2248,
    2249,  2250,  2251,  2252,  1077,  1078,  1079,   135,    94,   294,
      64,   120,  1085,    15,   316,   316,   227,  1090,   253,   294,
     305,   306,     3,     4,   163,   310,    69,   136,   212,   213,
     305,   306,  1105,   258,  1158,   305,    94,  2890,   621,     3,
       4,   624,   625,   188,   274,  2746,    62,  1457,     3,     4,
     165,  1124,   317,   288,   305,   340,  2909,   305,  2281,     3,
       4,    16,   330,    77,   242,   340,   175,   119,   794,   208,
      69,   209,    32,   799,  2775,     5,   274,     4,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   305,     3,     4,
     294,     4,   380,     5,   305,     4,   168,   169,    62,   387,
     388,   305,   306,   232,     4,   151,   310,   272,     5,  1202,
     190,   191,     4,     5,   249,   250,     4,   246,   283,     5,
     242,   212,   213,     5,   283,     4,    41,     3,     4,   264,
    1223,     3,     4,  2897,   293,    11,   340,   163,   212,   213,
    1233,     5,   222,     5,   216,   217,     3,     4,   379,     5,
     196,   135,     5,    88,     4,     5,   387,  1250,   389,  1252,
       3,     4,   908,    98,  1257,  1258,  1259,  2888,  2889,    41,
     105,  2892,     4,  2894,  1267,     4,   311,  1270,  3051,  1272,
       5,  2416,   341,     4,     5,  3058,  2907,  2908,    13,    14,
    2425,  2912,  2913,     4,     5,  2916,  1289,     4,  1291,  2434,
    2921,  2922,   274,   294,   119,    62,  1299,  1300,     4,    20,
      13,    14,     4,     5,   305,   306,     5,  1912,   244,   310,
     294,  1314,  1315,   485,   486,  1318,  1319,  1320,   974,     3,
       4,   305,   306,  1326,     4,  1328,   310,    11,  1331,    64,
    1333,   130,  3115,    87,  3117,   103,     5,   119,     4,   340,
     209,     4,    63,    13,    14,  1399,   215,     4,    69,  2980,
     195,    64,  2983,   289,  1139,  1140,   340,  2988,     4,     3,
       4,     4,     4,     4,     4,     3,     4,  2520,     5,  3000,
       8,     9,    10,  2526,  3005,   221,  1379,    98,  2531,     4,
       4,  1384,     4,    13,    14,  1388,     4,  1390,  1391,   258,
    1411,   216,  1395,     4,    64,     4,   332,    41,     5,   244,
       5,   122,     3,     4,     5,     8,    47,     5,  1411,    50,
    1413,   165,  1415,  1416,  1417,  1418,    10,   286,  1421,  1422,
     141,  1424,  1425,   300,  1427,     4,  1429,   381,    69,     3,
       4,     5,   188,  1436,    64,   156,   281,     3,     4,     5,
    1443,  1462,   163,     4,  1447,  1448,  1449,    88,   197,  3080,
     171,   188,    36,  3084,  1457,  1458,     4,     4,  1461,  1480,
       5,   220,   220,     5,   105,    46,  1469,     4,  1471,   338,
     111,  1474,   220,  3104,   210,   119,   210,   212,   213,    69,
      69,    62,     3,     4,     5,     6,     7,  3118,     5,    69,
    3121,  3122,     5,     4,   251,   249,   250,   252,     4,   212,
     213,     4,     4,     3,     4,    86,     6,     7,    37,     4,
     264,   220,   233,     5,   383,    92,    92,    92,  1521,     5,
    1523,   162,    92,  1526,  1527,   106,  1529,     5,  1531,     4,
     114,     4,   253,     5,  1537,     5,     4,   258,  1541,   260,
     311,     5,   212,   213,   185,   126,   105,  1550,     4,   130,
      47,     4,     4,    50,     5,   139,   140,   311,    16,   294,
       4,    16,     4,     4,   148,   103,     5,   288,   289,     5,
     305,   306,    69,    92,  1230,   310,   297,    92,    92,   160,
     161,   294,   212,   213,     4,    92,   170,     5,     5,     5,
       4,  2744,   305,   306,     5,   124,   180,   318,     5,  2740,
       4,     4,  2743,     5,  2745,   340,     5,  2760,   105,  1630,
       4,     4,  2765,     5,   111,    11,     5,     5,    67,  2224,
    2761,  2762,     4,     4,   294,     5,    11,   340,  1631,  1632,
    1633,     4,  1288,     4,     4,   305,   306,  2778,     5,     4,
       4,     4,   223,     5,     5,     5,  1302,   182,    38,   173,
    1653,     4,     4,   234,  1657,   376,   297,   173,     5,    49,
       4,    93,    39,    39,   294,   162,   195,   288,   197,   198,
     340,   200,   201,   288,   313,   305,   306,   311,     5,     4,
    1683,  1684,     4,     4,   325,   326,    41,   320,     5,    79,
    1693,     5,   124,     5,  1697,     5,   337,     4,     4,     4,
     341,  1704,     5,     5,   233,     3,     4,     5,     6,     7,
     340,   302,  2317,     5,    69,  1718,   302,     5,     5,   300,
     301,  1724,     4,   252,   253,  1728,     5,  1730,  1731,   258,
    1733,  1734,  1735,   262,  1737,     5,  2341,  1740,  1741,  1742,
    1743,  1744,  1745,  1746,  1747,  1748,  1749,  1750,    19,     5,
     105,  1754,  1755,  1756,  1757,     5,     5,     5,   113,    56,
       4,  1764,  1765,     4,   119,  1768,  1769,  1770,     5,     5,
       4,  1774,  1775,   163,     5,   207,  1432,  1433,     5,    76,
     265,   265,   265,   113,  1787,  1788,   141,  1790,  1791,   265,
     319,    62,   224,   322,     5,   376,    93,   113,     4,    41,
     297,     5,   265,   265,   333,   113,   237,   237,   163,   106,
       3,     4,     5,     6,     7,     5,    41,   271,   208,     4,
      58,     5,     5,     4,   237,   237,   181,   356,   325,   326,
       4,   128,     4,     4,  2174,   132,   107,     5,     5,     5,
     337,     5,     5,   119,   341,   119,     4,     0,     5,     5,
     147,     5,     4,  1874,     5,     5,     4,     4,   290,  1862,
       5,  1864,  1865,     5,   219,     5,  1869,     5,     4,   187,
       5,  1874,  1875,     5,  1877,  1878,  1879,    11,  1881,  1882,
      11,  1884,     4,  1886,  1887,     4,  1889,  1890,     5,  1892,
    2230,  1894,     5,   283,     5,  3048,     4,   194,     4,  1902,
       4,  2506,   173,   293,   336,   260,     4,  1910,     5,    64,
       4,   265,  1915,  1916,     5,   347,   265,   265,  1921,   265,
     265,   276,   265,   251,  1945,   315,     4,  1930,     4,   233,
      22,   220,     4,   323,   289,  1956,   276,     4,     4,  1960,
       4,  2546,     5,     5,  1133,     5,   302,   476,  2553,     5,
    2290,   341,     5,     5,     4,     4,   265,     5,   487,     4,
      52,     4,  1965,    55,     4,   320,    58,   496,     5,     5,
    1626,   126,     5,     5,   265,   130,   247,     4,   333,   265,
     335,   336,  1171,     4,     4,   344,  1989,  1990,     4,     4,
       4,  1994,     4,   344,   344,    87,     4,  2000,     4,  1655,
       5,     5,   344,  1659,  1660,     5,   251,     4,   251,     5,
       4,   251,   251,   168,   169,  2620,   251,  2622,   173,  2624,
       4,   376,  2627,     5,  2629,     4,   118,     5,     5,   121,
       4,     4,  1688,     5,     5,     5,     5,   566,   567,     4,
      99,     5,     5,  1699,     4,   302,     5,     5,     4,     4,
     579,   322,  1708,  1709,     5,   584,     5,     5,     5,   214,
       4,    11,     5,  1719,   593,     5,     4,     4,     4,   302,
       5,     5,     4,     4,   302,     5,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,  2107,  2108,     5,  2110,     4,   335,
       5,     5,     4,     4,   269,     5,     5,     5,     4,   274,
       4,     4,   340,     5,     5,     5,     5,  2130,  2131,  2132,
    2133,  2134,  2135,  2136,  2137,  2138,     5,     4,   390,     5,
       5,     5,     5,     4,     4,     4,   301,     5,     5,  2925,
     305,  2154,     5,  2156,   683,   684,   685,   686,     5,     4,
       4,   253,   317,     5,  2504,  2505,     5,     5,  2508,  2509,
    2173,  2174,  2512,  2513,   400,     5,  2179,     4,     4,  2784,
       5,     5,     5,     5,     4,     4,  2189,  2190,  2191,  2192,
    2193,  2194,  2195,  2196,  2197,  2198,   288,     5,  2201,  2202,
    2203,  2204,  2205,  2206,  2207,  2208,  2209,  2210,  2211,  2212,
       5,  2214,     5,  2216,  2217,  2218,     5,     4,     4,     4,
      69,    70,    71,     5,     5,     5,   318,  2230,  2231,  2569,
       5,     4,   318,     5,    69,     4,     4,     4,  3014,     4,
     432,     5,     5,     5,     5,     5,     4,    96,     4,     4,
      85,     5,     4,   390,     5,     5,     4,     4,     4,    94,
     109,     5,     5,     4,   793,     5,     5,     5,     4,     4,
     105,     4,   390,     5,     5,     5,   125,     5,     5,  2282,
       5,  2284,     4,  2286,     5,  2288,     4,  2290,  2291,     4,
    2293,     4,     4,     3,     4,  2298,  2299,     4,  2301,  2302,
       5,  2304,     5,  2306,  2325,     5,   141,     4,   157,    19,
    2313,     4,  2315,     5,     5,     5,  2319,     5,   167,  2322,
       4,     4,   390,     5,     5,     5,     5,     4,   163,     4,
     318,     5,     4,     4,     4,   561,     4,     4,     4,     4,
     189,     4,   568,     4,     4,   571,  2367,     4,     4,   198,
     576,     5,     5,     4,   580,     4,     4,     4,   484,     5,
       4,     4,  1551,  1552,  1553,     5,  2369,     5,     5,   218,
       5,     4,  1561,  1562,  1563,     4,     4,     4,     4,     4,
       4,  1570,  1571,  1572,   219,     4,  1575,  1576,  2728,  1578,
    1579,   240,     4,  2733,     4,   390,     5,   107,   390,   390,
     390,     4,  3073,     5,     5,     4,     4,     4,     4,     4,
       4,     4,     4,  2467,     5,     5,     4,     4,  2940,     5,
       4,  2755,     5,  1612,  1613,   260,     5,  1616,  1617,     5,
       4,     4,  2772,   282,     4,     4,   390,     5,   287,   665,
       5,     4,     4,     4,     4,     4,     4,     4,     4,   978,
       5,     4,  2923,     5,   289,   304,     5,     4,   307,     4,
       4,   990,     5,   173,     5,  2121,     5,     5,     5,     5,
    2473,     5,     4,     4,  3014,     5,     5,     5,  3010,   870,
      -1,  2484,  2485,  2486,  2487,  2488,  2489,  2490,  2491,  2492,
    2493,  2494,    -1,  3026,  3027,    -1,    -1,  2500,   333,  1028,
     335,  2504,  2505,  2159,    -1,  2508,  2509,    -1,    -1,  2512,
    2513,  2514,  2515,  2516,  2517,  2518,  2519,    -1,  2521,  2522,
    2523,    -1,    -1,    -1,  2527,  2528,  2529,  2530,    -1,  2532,
    2533,  2534,  2535,  2536,  2537,    -1,  2539,   247,    -1,  2542,
    2543,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  2566,    -1,    -1,  2569,  2570,    -1,  2318,
      -1,  2574,    -1,    -1,    -1,    -1,  2579,  2580,    -1,  2582,
      -1,    -1,    -1,    -1,    -1,    -1,  2335,  2336,  2337,    -1,
    1119,  2340,    -1,  2342,  2343,    -1,    -1,  2346,  2347,  2348,
      -1,   827,  2351,  2352,    -1,    -1,    -1,  2356,   834,  2358,
    2359,    -1,  2361,    -1,    -1,    -1,  1147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  2635,    -1,    -1,    -1,    -1,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,    -1,    -1,    -1,    -1,    -1,
      -1,    97,    -1,    -1,    -1,    -1,  1205,    -1,    -1,   105,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2707,   131,    -1,    -1,  2711,    -1,
      -1,    -1,   138,    -1,    -1,    -1,    -1,    -1,  2721,  2722,
    2469,    -1,    -1,  2472,  2727,  2728,    -1,    -1,  2477,  2732,
    2733,  2480,  1261,    -1,    -1,  2738,    -1,   163,  2741,  2742,
      -1,    -1,  1271,    -1,    -1,    -1,    -1,    -1,   174,    -1,
    2499,   977,    -1,    -1,    -1,    -1,    -1,    -1,   984,    -1,
    2763,  2764,    -1,  2766,  2767,  2768,  2769,  2770,    -1,  2772,
    2773,    -1,    -1,    -1,  2777,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2790,    -1,    -1,
      -1,    -1,    -1,   219,    -1,    -1,    -1,  2800,    -1,    -1,
      -1,   227,    -1,    -1,  1030,  1031,    -1,    -1,    -1,  1035,
      -1,    -1,  1038,    -1,    -1,  2004,    -1,    -1,  2821,    -1,
      -1,    -1,    -1,    -1,  1050,     4,     5,    -1,  2017,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2027,  2588,
      -1,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     276,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2863,    -1,    -1,   289,  1393,  2868,    -1,  2870,    -1,    -1,
      -1,    -1,  2621,  2876,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   307,  1411,    -1,    63,    -1,    -1,    -1,  2891,    -1,
      69,  2547,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,
      -1,    80,    -1,    -1,    -1,    -1,    85,  2910,    -1,    88,
    2099,  2914,  1441,  2967,    -1,    94,    -1,    -1,    -1,    98,
      -1,    -1,  1451,    -1,    -1,    -1,   105,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   113,    -1,    -1,  2940,    -1,  1468,
      -1,    -1,    -1,   122,    -1,    -1,    -1,     3,     4,    -1,
      -1,  1480,    -1,  1179,  2703,    -1,  1485,    -1,    -1,    -1,
      -1,    -1,   141,    19,    -1,    -1,    -1,    -1,  2971,    -1,
      -1,    -1,    -1,  2976,  2723,    -1,  2979,    -1,    -1,    -1,
      -1,    -1,  2731,  2986,   163,  2734,  2735,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2997,    -1,    -1,    -1,    -1,  3002,
      -1,    -1,   181,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   194,   195,    -1,    -1,    -1,
      -1,    -1,  3043,  3026,  3027,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1569,    -1,
     219,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3052,
    1581,   107,    -1,  3056,  3075,    -1,  3059,  3078,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   244,  3069,  3070,  3071,  3072,
      -1,    -1,  1603,  1604,    -1,    -1,    -1,    -1,  3081,   258,
      -1,   260,  3085,    -1,    -1,    -1,    -1,    -1,    -1,  3092,
      -1,  3094,    -1,    -1,    -1,    -1,    -1,   276,    -1,    -1,
      -1,  1630,   281,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     289,    -1,    -1,    -1,    -1,  2864,    -1,   173,   297,    -1,
      -1,    -1,    -1,  2779,    -1,    -1,    -1,  2783,    -1,  1658,
      -1,    -1,    -1,    -1,    -1,    -1,  2885,    -1,    -1,   318,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   332,   333,    -1,   335,    -1,    -1,    -1,
    1689,    -1,    -1,  1692,    -1,    -1,    -1,  1696,    -1,    -1,
      -1,  1397,    -1,  1702,  1703,    -1,    -1,    -1,    -1,    -1,
      -1,  1710,    -1,    -1,    -1,    -1,   242,    -1,  1717,    -1,
    2379,   247,    -1,    -1,    -1,    -1,    -1,   376,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1435,
      -1,    -1,    -1,    -1,  1440,    -1,    -1,    -1,    -1,    -1,
    2969,  2970,    -1,  2972,  1450,  2974,  2975,    -1,    -1,  2978,
    1759,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1771,    -1,    -1,    -1,    -1,    -1,    -1,  2905,
    2439,  2440,  2441,  2442,  2443,    -1,  2445,  2446,    19,    -1,
      -1,  2450,  2451,  2452,  2453,  2454,    -1,  2456,  2457,    -1,
      -1,    -1,    -1,  2929,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    45,    -1,    -1,    -1,    -1,  3038,
      -1,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    -1,    -1,    89,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  3086,    -1,   100,
     101,    -1,    -1,    -1,    -1,  1874,   107,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1898,
      -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,    -1,    -1,
      -1,     4,    -1,    -1,    -1,  1914,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   154,    -1,    -1,    19,    -1,  1927,    -1,
    1929,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  3065,
    1939,   172,   173,  1942,  1943,  1944,  1945,  1946,   179,  1948,
      -1,    -1,  1951,    -1,    -1,    -1,    -1,  1956,  1957,  1958,
    1959,  1960,  1961,    -1,  1963,  1964,    59,    -1,    -1,  1968,
    1969,  1970,  1971,   204,    -1,  1974,  1975,    -1,    -1,  2638,
      -1,  1980,  1981,    -1,    -1,    -1,    -1,    -1,  2647,  2648,
    2649,  2650,  2651,    -1,  2653,  2654,    -1,  2656,  2657,  2658,
    2659,  2660,  1698,  2662,  2663,    -1,  2665,  2666,  2667,  2668,
    2669,    -1,  2671,  2672,   107,  2674,   247,    -1,    -1,    -1,
      -1,    -1,  2023,    -1,    -1,  2684,  2685,    -1,    -1,    -1,
    2031,  2032,    -1,    -1,    -1,    -1,  2695,    -1,    -1,    -1,
    2041,  2042,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    2051,  2052,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    -1,  1760,  2066,  2067,    27,    -1,    -1,
    1766,    -1,   303,    -1,    -1,    -1,  2077,  2078,    -1,    -1,
     173,    -1,    -1,  2084,    -1,   316,    -1,    -1,    -1,    -1,
      -1,    51,    52,  2094,    54,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,  2106,    -1,    -1,
    2109,    -1,    -1,    -1,    -1,    -1,   347,    -1,    -1,    79,
      80,  2120,    -1,    -1,  2123,    -1,    58,    87,    -1,    -1,
      90,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   108,   242,
      -1,    -1,    -1,    -1,   247,    -1,  2155,   117,   118,    -1,
      -1,   121,    -1,    -1,    -1,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,   105,    -1,  1871,  2835,    -1,    -1,    -1,
    1876,   113,    -1,    -1,    -1,  2844,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2853,    -1,  2855,    -1,    -1,   131,
    2859,    -1,    -1,    -1,    -1,    -1,   138,    -1,    -1,   141,
      -1,  1907,    -1,  2212,    -1,    -1,    -1,  1913,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   163,   192,    -1,    -1,    -1,  2235,    -1,    -1,    -1,
      -1,    -1,   174,    -1,  1940,    -1,    -1,    -1,    -1,    -1,
      -1,  1947,    -1,    -1,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,    -1,    -1,    -1,    -1,    -1,   219,    -1,    -1,
      -1,    -1,    -1,   253,    -1,   227,    -1,    -1,  2957,   259,
    2959,    -1,  2961,    -1,    -1,  2964,    -1,  2966,    -1,    -1,
      -1,  2310,    -1,    -1,    -1,    -1,    -1,   277,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2325,    -1,   288,    -1,
      -1,    -1,    -1,  2332,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   276,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  2354,    -1,   289,    -1,   319,
     320,    -1,     3,     4,  2363,    -1,    -1,    -1,  2367,    -1,
      -1,    -1,    -1,    -1,    -1,   307,    -1,    -1,    19,  2380,
      -1,    -1,   342,    -1,    -1,    -1,   318,    -1,   320,  2390,
    2391,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,
    2401,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2104,  2410,
      -1,    -1,     4,  2414,  2415,    -1,    -1,    -1,    59,    -1,
      -1,    -1,  2423,  2424,    -1,    -1,    -1,    19,  2124,   389,
      -1,  2432,  2433,    -1,    -1,    -1,    -1,  2438,    -1,    -1,
      -1,    -1,    -1,    -1,   376,    -1,    -1,  2448,  2449,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2459,    -1,
    2461,    -1,    -1,    -1,  2160,  2161,   107,    -1,    -1,    -1,
      -1,    -1,  2471,    -1,    -1,  2474,  2172,    -1,    -1,    -1,
      -1,  2177,  2178,  2482,    -1,    -1,  2182,  2183,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2498,
      -1,    -1,  2501,    -1,    -1,    -1,    -1,    -1,  2507,    -1,
      -1,  2510,  2511,    -1,    -1,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2223,    -1,    -1,
      -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,  2234,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2548,
    2549,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   216,    -1,    -1,    -1,    -1,
      -1,   173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  2287,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   242,  2601,    -1,    -1,    -1,   247,    -1,    -1,    -1,
      -1,    -1,  2308,    -1,    -1,    -1,    -1,   258,    15,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2333,  2639,    -1,
      -1,  2642,  2338,    -1,  2645,    -1,    -1,    -1,  2344,    -1,
      -1,    -1,    -1,  2349,  2655,   247,    -1,  2353,    -1,  2355,
      -1,  2357,    -1,  2664,  2360,    -1,  2362,    -1,    -1,    -1,
      -1,    -1,  2673,    -1,    -1,    -1,    -1,    -1,    -1,  2680,
      -1,    -1,    -1,    -1,    -1,    -1,   327,    -1,    -1,    -1,
    2691,    -1,    -1,    -1,    -1,    -1,  2697,    -1,    -1,    -1,
      -1,    -1,    -1,  2702,    -1,    -1,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,    -1,    -1,    -1,  2736,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2747,    -1,
      -1,    -1,    -1,    -1,    -1,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  2805,    -1,    -1,    -1,
    2809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2825,    -1,    -1,    -1,    -1,    -1,
      -1,  2832,    -1,    -1,    -1,    -1,    19,    -1,    -1,    -1,
    2841,    -1,  2538,    -1,    -1,    -1,    -1,    -1,    -1,  2850,
      -1,    -1,    -1,    -1,    -1,  2856,    -1,    -1,  2554,  2860,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  2866,  2867,    -1,
    2869,   268,    -1,    -1,   271,  2874,  2875,    -1,    -1,    -1,
      -1,    -1,  2881,    -1,    -1,    68,    69,    -1,    -1,    -1,
      -1,    74,    -1,    17,    -1,    19,    -1,    -1,    -1,    -1,
    2596,    -1,    -1,    -1,    -1,    -1,    -1,  2603,    -1,    -1,
      -1,    -1,    -1,   173,    97,    98,  2915,    -1,   178,    -1,
      -1,    -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  2630,    -1,  2632,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  2947,    -1,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,    -1,    -1,
      -1,    -1,    -1,   107,    -1,    -1,    -1,    -1,    -1,    -1,
     173,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   123,
      -1,    -1,    -1,    -1,  2700,   188,    -1,    -1,    -1,    -1,
    2706,    -1,    -1,    -1,  2710,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   208,    -1,    -1,    -1,    -1,
    2726,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  3043,    -1,    -1,    -1,    -1,   173,
     233,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  3061,    -1,   247,    -1,    -1,    -1,    -1,   193,
      -1,    -1,    -1,    -1,    -1,    -1,  3075,    -1,    -1,  3078,
      -1,    -1,    -1,    -1,    -1,  2781,  2782,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,    -1,    -1,    -1,    -1,    -1,
     303,    -1,    -1,   247,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,    -1,   376,    -1,    -1,    -1,    -1,   322,    -1,
    2896,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,    51,    52,    -1,    -1,    55,    -1,    -1,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    -1,    -1,    -1,    69,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    79,
      80,    -1,    19,    -1,    20,    21,    22,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    98,    -1,
      -1,    -1,    -1,    -1,    -1,   105,    -1,    -1,    -1,    -1,
    3006,    -1,    -1,   113,    -1,    51,    52,   117,   118,    55,
      19,   121,    59,    -1,    -1,    -1,    62,    -1,    -1,    65,
      -1,    -1,    -1,    69,  3030,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    79,    80,    -1,    -1,    -1,    -1,    19,
      -1,    87,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      59,    -1,    98,   163,    -1,    -1,    -1,    -1,    -1,    -1,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
    3076,   117,   118,    -1,    -1,   121,    -1,    -1,    -1,    59,
      -1,    -1,   192,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  3097,    -1,    -1,  3100,   141,    -1,    -1,   107,    -1,
      19,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   219,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   163,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   173,   107,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   251,    -1,   253,    -1,    -1,   192,    99,    -1,   259,
     260,    -1,    -1,    -1,    -1,   107,   202,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,   276,   277,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   288,   289,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   107,    -1,
      -1,    -1,    -1,   173,    -1,   242,    -1,    -1,    -1,    -1,
     247,    -1,    -1,    -1,    -1,   251,    -1,   253,   318,    -1,
     320,    -1,    -1,   259,   260,    -1,    -1,    -1,    -1,    -1,
      -1,   173,    -1,   333,    -1,   335,    -1,    -1,    -1,    -1,
      -1,   277,   342,   242,    -1,    -1,    -1,    -1,   247,    -1,
      -1,    -1,    -1,   289,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   173,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   312,   376,   247,    -1,    -1,
      -1,    -1,   318,    -1,   320,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   331,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   247,   342,    -1,    -1,    -1,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   247,    -1,
     376,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,    -1,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,    -1,    -1,    -1,    -1,    -1,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,    42,    -1,    -1,    45,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    67,    68,    -1,    -1,    -1,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    -1,    91,    92,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   127,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   150,    -1,    -1,    -1,   154,    -1,
      -1,    -1,   158,    -1,    -1,    -1,   162,   163,    -1,    -1,
      -1,    -1,   168,   169,    -1,    -1,   172,    -1,    -1,    -1,
      -1,    -1,   178,    -1,    -1,    -1,    -1,    -1,   184,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   195,
      -1,    -1,    -1,   199,   200,   201,    -1,    -1,   204,   205,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   217,    -1,    -1,    -1,   221,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   239,    -1,   241,   242,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   254,    -1,
     256,    -1,    -1,    -1,    -1,    -1,    -1,   263,    -1,    -1,
      -1,   267,    -1,    42,    -1,   271,    45,   273,   274,    48,
     276,    -1,    -1,    -1,    -1,   281,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    68,
      -1,   297,    -1,    72,    73,    74,    -1,   303,    -1,    -1,
      -1,    -1,    -1,    82,    -1,    84,    -1,    -1,    -1,    -1,
      89,    -1,    91,    92,    93,   321,   322,    -1,    -1,    -1,
      99,    -1,   101,    -1,    -1,    -1,    -1,    -1,   334,    -1,
     336,    -1,    -1,    -1,    -1,    -1,    -1,   343,    -1,    -1,
     346,   347,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   377,    -1,    -1,    -1,   154,    -1,    -1,    -1,   385,
      -1,    -1,    -1,    -1,   163,    -1,   165,   166,    -1,   168,
     169,    -1,    -1,   172,    -1,    -1,    -1,   176,    -1,   178,
     178,    -1,    -1,    -1,    -1,   184,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   204,   205,    -1,    -1,    -1,
     209,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   217,    -1,
      -1,    -1,   221,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     239,    -1,   241,    -1,    -1,    -1,    -1,    -1,    -1,   248,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   274,    -1,   276,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   303,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   321,   322,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   331,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     339,    -1,    -1,    -1,    -1,    -1,   345,    -1,   347,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   385
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,    42,    45,    48,    62,    67,    68,    72,    73,    74,
      82,    89,    91,    92,   101,   102,   127,   137,   150,   154,
     158,   162,   163,   168,   169,   172,   178,   184,   195,   199,
     200,   201,   204,   205,   217,   221,   239,   241,   242,   254,
     256,   263,   267,   271,   273,   274,   276,   281,   297,   303,
     321,   322,   334,   336,   343,   346,   347,   377,   385,   392,
      69,    11,    56,    76,   106,   128,   132,   147,   327,   428,
       3,     4,   221,   327,   393,   433,   209,   215,   258,   286,
     338,   383,   435,   318,     4,    41,   119,   168,   169,   216,
     217,   274,   440,    29,   164,   193,   197,   255,   299,   308,
     309,   408,   442,    88,    98,   105,   195,   244,   281,   443,
      41,    62,   119,   216,   322,   393,   452,     4,    19,    41,
      59,   107,   129,   173,   216,   226,   235,   236,   242,   247,
     330,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     380,   387,   388,   395,   403,   404,   405,   454,    34,   455,
     395,    45,    48,    81,    89,   155,   214,   243,   245,   274,
     347,   394,   395,    67,   393,   457,   158,   458,    42,    45,
      48,    68,    72,    73,    74,    82,    84,    89,    91,    92,
      93,    99,   101,   136,   154,   163,   165,   166,   168,   169,
     172,   176,   178,   184,   204,   205,   209,   217,   221,   239,
     241,   248,   274,   276,   303,   321,   322,   331,   339,   345,
     347,   385,   459,    88,   105,   510,    19,    42,    45,    82,
      89,   100,   101,   107,   136,   154,   172,   173,   179,   204,
     247,   303,   316,   347,   513,    69,   395,    64,   316,   341,
     598,    64,   316,   341,   597,    93,   124,   207,   224,   290,
     336,   347,   519,    15,     4,    47,    50,    69,    88,   105,
     111,   162,   185,   297,   325,   326,   337,   341,   579,    26,
     120,   136,   175,   232,   246,   522,   257,   540,     5,    69,
      93,   152,   336,   385,   395,   541,     5,   542,    60,   143,
     252,   267,   338,   559,    47,    67,    69,   203,   266,   316,
     326,   580,   316,   596,    69,   227,   379,   387,   389,   581,
      40,   216,   258,   327,   393,   403,   405,   582,     5,   336,
     347,   395,   585,    75,   188,   272,   283,   586,     4,   587,
      93,   559,     4,    67,   594,    64,   316,   341,   595,   216,
     327,   393,   599,    26,   120,   136,   232,   246,   384,   601,
      53,   105,   116,   149,   329,   623,   624,     4,    38,    49,
      79,   163,   208,   283,   293,   315,   323,   341,   421,     4,
     136,   231,   625,   327,   393,   627,    15,    23,   268,   271,
     404,   628,   257,   632,   327,   393,   633,     0,     5,   395,
      62,   393,   429,   300,     5,     4,   327,   393,   430,     5,
      33,   314,   431,   135,   393,   432,   381,   135,   393,   434,
     393,     4,   215,   270,   278,   438,   209,   338,   382,   383,
     393,   437,   395,   151,   196,   436,   221,   393,    83,   192,
     278,   393,   439,     5,   393,   393,   393,     4,   168,   169,
     217,   274,   441,     4,   393,   393,     5,   253,   444,     4,
      32,   445,     5,   446,     5,   450,     5,    32,   451,   393,
       8,     9,    10,   393,   399,   400,   401,   402,   393,   393,
      41,   119,   216,   393,   453,   393,   216,   403,   405,   393,
      36,   114,   139,   140,   148,   170,   180,   410,   393,     4,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     126,    69,    56,    76,    93,   106,   128,   132,   147,   194,
     462,   128,   221,   464,   209,   215,   258,   286,   338,   382,
     383,   393,   447,   465,   318,   468,   188,   469,   188,   197,
     471,    68,    69,    74,    97,    98,   188,   208,   233,   303,
     376,   403,   473,   393,   405,   476,    62,   322,   403,   477,
     312,   403,   405,   478,    34,   479,   403,   405,   480,     4,
     403,   405,   481,    46,    62,    86,   106,   126,   130,   160,
     161,   223,   234,   300,   301,   376,   485,   238,   340,   491,
      69,     5,    94,    64,   316,   341,   499,    64,   316,   341,
     498,     4,    93,   130,   483,     5,    68,   405,   482,    15,
      47,    69,    86,   185,   326,   341,   492,   559,    47,    69,
      86,   203,   266,   316,   326,   493,   316,   497,    69,   258,
     495,   317,    64,   316,   341,   496,    21,   147,   265,   298,
     500,    38,    49,    79,   163,   208,   283,   293,   341,   501,
     405,    94,    15,   220,   508,   403,   511,    69,    77,   514,
      32,   515,    45,    92,   214,   516,   163,   244,   289,   332,
     517,   403,    17,    61,   123,   193,   322,   403,   518,     5,
       5,   167,   282,   339,   403,     4,     5,   167,   282,   403,
       4,     4,   215,   521,     5,     4,     4,   130,   393,     4,
      47,    50,    69,   105,   111,   162,   297,   325,   326,   337,
     341,    69,    70,    71,    96,   109,   125,   157,   167,   189,
     198,   218,   240,   282,   287,   304,   307,   407,     5,     4,
     393,   395,     5,   168,   169,   274,   523,     5,   525,     5,
     126,   168,   169,   214,   274,   301,   526,    99,   119,   209,
     539,     5,   537,     5,   301,   538,     4,     5,   395,   395,
     393,   393,     5,     4,     5,    20,    63,    69,    78,    80,
      85,    88,    94,    98,   105,   113,   122,   141,   163,   181,
     194,   195,   219,   244,   258,   260,   276,   281,   289,   297,
     318,   332,   333,   335,   376,   543,   407,     5,     4,   221,
     229,   230,   266,   381,   406,   393,   403,   393,   403,     5,
     393,    41,   119,   393,   584,   395,   393,   403,   405,   583,
     393,   410,   393,     4,   404,    57,    95,   153,   274,   588,
       4,     4,   393,     4,   163,   289,   589,     5,   403,     4,
      41,   119,   393,   600,   393,   103,    64,   130,   168,   169,
     274,   305,   603,   130,   622,    64,   126,   130,   168,   169,
     173,   214,   269,   274,   301,   305,   317,   604,   605,    64,
     130,   305,   621,     5,    64,   130,   305,   602,     4,    35,
     115,   227,   593,    69,   395,   424,    69,   395,   425,    69,
     395,   426,    12,   134,   211,   592,   393,    18,   228,   313,
     395,   422,     4,   393,   251,   393,   427,   393,    62,   301,
       4,   393,   393,     4,   252,   327,   631,     4,   320,   629,
       4,   320,   630,     4,   410,   135,   393,   634,   393,   393,
       4,     5,   393,    11,   393,   393,   395,   393,    31,   100,
     179,   278,   284,   409,   409,     4,   221,   393,   393,     4,
       4,     4,   393,   393,   393,   393,   393,   393,     4,   393,
       4,   393,     4,     4,     4,     5,     5,   403,     5,   393,
     393,   399,   401,   401,   403,   393,   393,   393,   393,   393,
     393,   393,   403,   405,   402,   393,   393,   402,   393,     5,
     300,   110,   209,   463,   381,   215,   278,   466,   188,    83,
     192,   278,   467,   151,   196,   448,   448,     4,   470,     4,
     472,   215,   286,   474,   197,   475,   188,   410,   393,   393,
     403,   403,   410,   410,   410,   403,   410,   393,   403,     4,
     488,     4,   405,   486,   220,     4,   182,   347,   487,   220,
     403,     4,   144,   327,   490,     5,     5,   460,     4,   220,
     146,   275,   396,   393,     4,   494,   494,   494,   494,     4,
       5,    20,    63,    69,    98,   122,   141,   156,   163,   171,
     233,   253,   258,   260,   288,   289,   297,   318,   376,   553,
     405,   210,   210,    69,   504,    69,   505,    69,   506,    18,
     228,   313,   502,   251,   507,   393,     5,   461,   252,   509,
     404,   410,     5,   403,   403,   403,   403,     4,     4,     4,
     395,     4,     4,   220,   393,   407,     5,   393,   395,    13,
      14,    64,   212,   213,   294,   305,   306,   340,    92,    92,
      92,     5,     5,    13,    14,    64,   212,   213,   294,   305,
     306,   310,   340,    92,    92,   173,    92,   173,   173,   178,
     404,   529,   534,    92,   173,     5,   527,     4,     4,    13,
      64,   212,   294,   305,   340,     5,     5,     4,   393,   404,
      20,    21,    22,    51,    52,    55,    58,    65,    69,    79,
      80,    87,    88,    98,   105,   113,   117,   118,   121,   141,
     163,   192,   219,   251,   253,   259,   260,   276,   277,   288,
     289,   318,   320,   333,   335,   342,   376,    69,    85,    94,
     105,   141,   163,   219,   260,   289,   333,   335,   311,     4,
      31,   177,   238,   265,   546,     5,    66,   112,   262,   279,
     280,   378,   379,   552,   105,   544,     4,    16,   289,   550,
      41,   119,   216,   551,     4,     5,    16,   237,   328,   393,
     289,   552,   560,   136,   552,   561,    37,    41,   119,   145,
     216,   327,   393,   562,   403,   395,    97,   105,   113,   131,
     138,   163,   174,   219,   227,   276,   289,   307,   565,    41,
     119,   216,     5,   289,   319,   569,    16,   133,   186,   237,
     328,   570,   320,   395,   571,     5,   105,   113,   336,    16,
      16,     4,   393,   393,   393,   393,   393,   393,   410,   393,
     393,   402,   393,     4,   410,     4,    41,   119,   216,   295,
     590,    41,   119,   216,   295,   591,     4,   103,     5,     5,
      92,    92,    92,     4,     5,     5,    92,     5,    92,   173,
      92,   173,   605,    64,   130,   173,   305,   609,    64,   130,
     305,   620,    92,   173,    64,   130,   305,   607,     4,    64,
     130,   305,   606,     5,     5,     4,     5,     5,     4,     4,
       5,     5,     5,   393,   313,   395,   423,   393,   393,   393,
     393,   393,     4,   393,   626,   393,   393,   404,    67,     4,
       4,     5,     4,     4,     5,     4,   103,   291,   411,   393,
     393,    11,     5,    11,   393,   393,    11,     4,    11,     4,
       4,   393,   393,   393,   393,   393,     4,   393,     5,   393,
       4,   395,     4,     4,   410,   403,   410,   393,   393,   393,
     403,   393,   402,   393,   393,     5,     5,   393,   405,   393,
     403,   393,   410,   410,   411,   411,   411,   410,   402,   393,
     410,   393,   396,   489,   182,     5,     4,   410,   173,   173,
       4,     5,     4,     4,   393,   484,    39,    39,   393,    20,
      21,    22,    51,    52,    55,    62,    65,    69,    79,    80,
      87,    98,   117,   118,   121,   141,   163,   192,   202,   251,
     253,   259,   260,   277,   289,   318,   320,   331,   342,   376,
      69,   141,   171,   260,   318,   311,    31,   177,   238,   265,
     554,   393,   233,   393,   555,    16,   393,   288,   565,   288,
     233,   393,   556,   320,   557,    16,   104,   393,   313,   503,
     393,     5,   411,     4,     4,    59,   403,     4,     5,   520,
     393,     5,     5,     5,   173,   205,   415,   415,   181,   296,
     413,     4,     4,     5,     5,   524,   524,   524,   302,   302,
       5,     5,     5,    16,   175,   414,   414,   413,     4,     4,
     413,     5,     5,   528,     5,   535,     5,   536,   535,   536,
     178,   375,   404,   532,     5,   531,     5,   535,   536,     5,
      13,    14,    64,   212,   213,   294,   305,   306,   310,   340,
       4,     4,     5,     5,   415,   413,     4,     5,     5,   410,
      87,   165,   249,   250,   264,   311,   418,     6,     7,   393,
     398,   265,   265,   265,   113,    41,    69,   105,   113,   119,
     141,   163,   181,   219,   260,   276,   289,   320,   333,   335,
     336,   376,   545,   265,     5,    27,   183,   265,   316,    28,
     151,   331,   113,    22,    52,    55,    87,   118,   121,   253,
     288,     4,    22,    52,    55,    58,    87,   118,   121,   253,
     288,   318,    41,   265,   265,   113,     5,   237,    27,   251,
      37,   145,   327,   393,   292,   300,   251,   271,   403,   565,
      41,   142,   251,   316,   271,   237,     5,     5,   276,    27,
     251,     4,     5,     5,   237,    37,   145,   327,   393,   565,
     237,    58,   395,     4,     4,   393,     5,   340,    22,    27,
      51,    52,    54,    55,    65,    79,    80,    87,    90,   108,
     117,   118,   121,   192,   253,   259,   277,   288,   319,   320,
     342,   389,   547,     4,   393,   393,   393,   393,   393,   552,
     403,     5,     4,     5,   393,   393,   403,   393,   395,   393,
     393,   552,     5,     5,   393,   393,   395,     5,    16,     5,
       5,   393,   393,   402,   393,   393,     4,   393,   393,   119,
     393,   393,   119,     4,    43,    44,   190,   191,   222,   420,
     420,    64,   130,   305,   617,    64,   130,   305,   614,    64,
     130,   305,   611,   420,     5,    64,   130,   305,   608,    64,
     130,   305,   619,    64,   130,   305,   618,    64,   130,   305,
     616,    64,   130,   305,   615,     5,     5,    64,   130,   305,
     610,     4,     5,     5,     4,    64,   130,   305,   613,    64,
     130,   305,   612,     5,     5,     4,     5,     5,     4,   420,
     420,   420,   393,   393,   393,   393,   393,     4,   403,   393,
     410,   404,     5,     5,    11,   393,   403,   405,   393,    11,
     393,   393,   393,    62,   393,     4,   393,   393,     4,   393,
     393,     5,   393,     5,   393,    48,   303,   449,     5,   395,
     395,   410,   393,     4,     4,     4,   410,   403,   393,   393,
     393,   393,   410,   403,   411,   402,   393,     4,   411,   393,
       4,   405,     5,    24,    25,   103,   412,     4,   403,   393,
     393,     4,   393,     5,    87,   165,   249,   250,   264,   311,
     403,   405,   265,   265,   265,    21,   265,   403,   265,    27,
     183,   265,   316,    28,   151,   331,    21,   265,   265,   265,
      21,   265,    27,   187,   251,   187,   292,   300,   251,   187,
     251,   324,   565,   142,   187,   251,   316,     4,   276,    27,
     187,   251,   565,   233,    16,   386,   393,   393,   393,   393,
     393,   393,   220,   393,   393,    20,   261,   512,     4,     4,
     393,   415,   415,   415,     4,   415,   415,   415,    13,    14,
      64,   212,   213,   294,   305,   306,   340,   414,   415,   415,
     415,   415,   415,     4,   415,   415,     4,   414,    13,    14,
      64,   212,   213,   294,   305,   306,   340,     5,    13,    14,
      64,   212,   213,   294,   305,   306,   310,   340,    13,    14,
      64,   212,   213,   294,   305,   306,   340,     5,   530,     5,
     533,     5,     5,    13,    14,    64,   212,   213,   294,   305,
     306,   310,   340,     5,    13,    14,    64,   212,   213,   294,
     305,   306,   310,   340,   302,     5,     5,     5,   414,   414,
     413,     4,     4,   413,     5,     4,     4,   415,   415,     4,
     415,   415,     5,   395,   403,   405,     5,   393,   393,     5,
     393,     5,   398,   113,   219,   276,   113,   219,   276,     5,
     393,   395,     5,   393,   403,   395,   395,     5,     5,   398,
     265,   265,    21,   265,    21,   265,   265,    21,   265,   344,
     344,     4,     4,     4,     4,   545,     4,     4,     4,   344,
     344,     4,     5,     4,   393,     5,   393,     5,   398,   395,
     403,   403,   393,    27,    51,    54,    65,    90,   108,   389,
     416,     4,   403,   393,   410,   395,     5,   403,   403,   393,
     395,   395,   403,   403,   393,   395,     5,   393,     5,   393,
     251,   251,   393,   393,   251,   393,   251,   393,   393,     4,
     548,   393,   251,   251,   393,   393,   393,   393,   393,   393,
     393,   393,     5,   340,   393,   549,   393,   393,   251,   393,
     393,   393,   393,   403,   410,     5,     4,     4,   393,   393,
     410,   393,   393,   393,   403,   552,   393,   393,     5,     4,
     393,   393,   393,   393,     5,     5,     4,     5,     5,     4,
       5,     5,     4,   420,     5,     5,     4,     5,     5,     4,
       5,     5,     4,     5,     5,     4,     5,     5,     4,     4,
       4,     5,     5,     4,     4,     5,     5,     4,     5,     5,
       4,   393,   393,   393,   393,   410,   393,   403,   405,   393,
     410,   393,   393,   393,   393,   393,     5,   393,   393,   393,
       4,   393,   393,     5,   393,     5,   393,     4,   403,     4,
     393,   410,   197,   408,   393,   408,   411,   410,   403,   393,
     393,     4,   393,   403,   403,   393,   396,     5,     5,     5,
       5,     5,    99,   403,   410,   403,   403,   403,   403,   405,
     403,   410,   403,   403,   403,   405,   403,   403,   403,   403,
     405,   403,   403,   403,   393,   403,   403,   403,   403,   403,
     403,   403,   403,    99,   393,   393,     4,   393,     5,   393,
     415,     5,     5,     5,   413,     4,     4,     5,   415,   414,
       4,   415,     5,     5,     5,   414,   414,   413,     4,     4,
       5,   302,     5,     5,     5,   414,   414,   413,     4,     4,
     413,     5,     5,     5,     5,   414,   414,   413,     4,     4,
       5,    13,    14,    64,   212,   213,   294,   305,   306,   340,
      13,    14,    64,   212,   213,   294,   305,   306,   340,    13,
      14,    64,   212,   213,   294,   305,   306,   340,   302,     5,
       5,     5,   414,   414,   413,     4,     4,   413,     5,   302,
       5,     5,     5,   414,   414,   413,     4,     4,   413,     5,
     414,     4,     4,   414,     4,     4,   415,     5,   410,   403,
     393,   393,   403,   393,     5,   398,     5,   403,   395,     5,
     403,   410,     5,   398,   393,   393,   393,   393,   393,   393,
     393,   393,   393,     4,     4,     5,     4,     4,   393,   403,
     393,     5,   398,   395,   410,   410,   410,   393,   402,   410,
     410,   393,   410,   410,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   393,   558,   566,   393,   393,   393,   393,
     393,   393,   393,   393,   393,   393,   393,   393,   403,     5,
     393,   393,   393,   393,     4,     4,   410,   411,     5,     5,
     402,   393,     4,   410,   403,     4,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   398,   393,   393,   393,   410,
     393,   402,   393,   393,    11,     5,     5,   393,   393,   393,
     393,     5,   393,     4,   393,     4,   410,     4,   403,   393,
     393,   411,   412,   393,     5,   393,   403,   405,     5,     5,
       5,     5,     5,   403,   410,   412,   412,   412,   410,   412,
     411,   412,   412,   410,   412,   412,   412,   410,   412,   412,
     410,   403,   410,   412,   410,   412,   412,   410,   412,   410,
     403,     4,   403,   405,     5,   393,     4,   415,   414,     4,
     414,   414,     4,     4,   414,     4,   414,     5,     5,     5,
     414,   414,   413,     4,     4,     5,     5,     5,     5,   414,
     414,   413,     4,     4,     5,     5,     5,     5,   414,   414,
     413,     4,     4,     5,   414,   415,   415,   415,   415,   415,
       4,   415,   415,     4,   414,   414,   415,   415,   415,   415,
     415,     4,   415,   415,     4,   414,   414,     4,     4,     4,
     404,   412,     4,   403,   412,   393,   403,     4,   412,   412,
     403,     4,   393,   393,   393,   393,   393,   393,   393,   393,
     393,   393,   393,   403,   412,   393,   403,     4,   402,   402,
     411,   403,   402,   402,   403,   403,   402,   402,   393,   393,
     393,   393,   393,   393,   398,   393,   393,   393,    58,    69,
      98,   141,   318,   320,   376,   563,   564,   565,   577,   578,
     398,   393,   393,   393,   393,   398,   393,   393,   393,   393,
     393,   393,   410,   393,   340,   397,   398,   393,   393,   411,
     395,   403,   403,   411,   410,     4,   393,   402,   393,    62,
     393,     5,     5,     4,     4,   393,   393,     4,   393,     4,
     408,   412,     5,   410,     4,     5,     4,     5,   403,     5,
     410,   411,   412,   411,   411,   411,   411,   410,     5,   410,
       4,   393,   415,   414,   414,     4,   414,   415,   415,   415,
     415,   415,     4,   415,   415,   414,   415,   415,   415,   415,
     415,     4,   415,   415,   414,   415,   415,   415,   415,   415,
       4,   415,   415,   414,   415,   414,     4,   415,   415,   414,
       4,   415,   414,   410,   403,   412,     4,   410,   393,   410,
     393,   393,   393,   412,     4,   410,   393,   402,     5,   340,
     412,   393,   402,   412,   412,   403,   393,     4,   417,   417,
     393,   393,   417,   398,   417,   566,   403,   390,   390,   390,
     390,   390,   390,   390,   564,   390,   398,   417,   417,   393,
     393,   398,   393,   393,   393,   393,   393,   402,   393,     5,
     566,   393,   417,   395,   567,   568,   410,   410,   395,   411,
       4,     5,   393,     5,     4,     4,     4,     4,     4,     4,
     393,     4,    33,   206,   314,   456,   403,     5,    33,   206,
     314,   419,   403,     4,   456,   393,   414,   414,   415,   414,
     415,   414,   415,   415,   414,   415,   414,   393,   412,   403,
     403,   393,   403,   393,   403,   403,   393,     5,   403,   412,
       4,   566,   566,   397,   393,   566,     4,   566,   410,   545,
       5,     4,     5,     5,     5,     4,   395,     4,   566,   566,
     397,   393,     4,   566,   566,   393,   403,   566,   566,   566,
     567,   574,   575,   565,   572,   573,   395,     4,     5,     5,
       4,     4,     4,   209,   338,   383,   393,   447,   456,     4,
     403,   456,     4,   415,   415,   415,   415,   415,   404,   412,
     412,   393,   412,     4,   412,   412,   393,   412,   393,   566,
     566,     4,   393,   566,     5,     4,   393,   566,     4,   393,
     566,   410,   574,   576,   577,   390,   573,     5,     5,   393,
     448,   393,   448,   410,   412,     4,   403,   405,     4,   398,
     397,   393,     5,   393,   397,   393,   403,   577,   395,     5,
       5,   393,   393,   393,   393,   419,     5,   403,   405,   410,
     403,   405,   566,   393,     4,   566,   393,   412,     5,     5,
     393,     5,   393,   410,   410,     4,   566,     4,     5,     5,
       5,   397,   397,   566,   566,   566
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
#line 499 "frame/parser.Y"
    {fr->bgColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 5:
#line 500 "frame/parser.Y"
    {fr->useBgColorCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 7:
#line 502 "frame/parser.Y"
    {fr->centerCmd();;}
    break;

  case 8:
#line 503 "frame/parser.Y"
    {fr->clearCmd();;}
    break;

  case 10:
#line 505 "frame/parser.Y"
    {fr->colorbarTagCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 17:
#line 512 "frame/parser.Y"
    {fr->DATASECCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 23:
#line 518 "frame/parser.Y"
    {fr->hideCmd();;}
    break;

  case 24:
#line 519 "frame/parser.Y"
    {fr->highliteCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 25:
#line 520 "frame/parser.Y"
    {fr->highliteColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 29:
#line 524 "frame/parser.Y"
    {fr->irafAlignCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 38:
#line 533 "frame/parser.Y"
    {fr->nanColorCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 42:
#line 537 "frame/parser.Y"
    {fr->queryCursorCmd();;}
    break;

  case 45:
#line 540 "frame/parser.Y"
    {fr->resetCmd();;}
    break;

  case 51:
#line 546 "frame/parser.Y"
    {fr->showCmd();;}
    break;

  case 53:
#line 548 "frame/parser.Y"
    {fr->threadsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 55:
#line 550 "frame/parser.Y"
    {fr->unloadFitsCmd();;}
    break;

  case 57:
#line 552 "frame/parser.Y"
    {fr->msg("Frame 1.0");;}
    break;

  case 62:
#line 559 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 63:
#line 560 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].integer);;}
    break;

  case 64:
#line 563 "frame/parser.Y"
    {yydebug=(yyvsp[(1) - (1)].integer);;}
    break;

  case 65:
#line 564 "frame/parser.Y"
    {DebugMosaic=(yyvsp[(2) - (2)].integer);;}
    break;

  case 66:
#line 565 "frame/parser.Y"
    {yydebug=(yyvsp[(2) - (2)].integer);;}
    break;

  case 67:
#line 566 "frame/parser.Y"
    {DebugPerf=(yyvsp[(2) - (2)].integer);;}
    break;

  case 68:
#line 567 "frame/parser.Y"
    {DebugWCS=(yyvsp[(2) - (2)].integer);;}
    break;

  case 69:
#line 568 "frame/parser.Y"
    {DebugBin=(yyvsp[(2) - (2)].integer);;}
    break;

  case 70:
#line 569 "frame/parser.Y"
    {DebugBlock=(yyvsp[(2) - (2)].integer);;}
    break;

  case 71:
#line 570 "frame/parser.Y"
    {DebugCompress=(yyvsp[(2) - (2)].integer);;}
    break;

  case 72:
#line 571 "frame/parser.Y"
    {DebugCrop=(yyvsp[(2) - (2)].integer);;}
    break;

  case 73:
#line 572 "frame/parser.Y"
    {DebugGZ=(yyvsp[(2) - (2)].integer);;}
    break;

  case 74:
#line 573 "frame/parser.Y"
    {DebugRGB=(yyvsp[(2) - (2)].integer);;}
    break;

  case 75:
#line 576 "frame/parser.Y"
    {(yyval.integer)=((yyvsp[(1) - (1)].integer) ? 1 : 0);;}
    break;

  case 76:
#line 578 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 77:
#line 579 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 78:
#line 580 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 79:
#line 581 "frame/parser.Y"
    {(yyval.integer)=1;;}
    break;

  case 80:
#line 583 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 81:
#line 584 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 82:
#line 585 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 83:
#line 586 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 84:
#line 589 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 85:
#line 590 "frame/parser.Y"
    {(yyval.integer) = Base::ROOTBASE;;}
    break;

  case 86:
#line 591 "frame/parser.Y"
    {(yyval.integer) = Base::FULLBASE;;}
    break;

  case 87:
#line 592 "frame/parser.Y"
    {(yyval.integer) = Base::ROOT;;}
    break;

  case 88:
#line 593 "frame/parser.Y"
    {(yyval.integer) = Base::FULL;;}
    break;

  case 89:
#line 596 "frame/parser.Y"
    {(yyval.real) = 0;;}
    break;

  case 90:
#line 597 "frame/parser.Y"
    {(yyval.real) = (yyvsp[(1) - (1)].real);;}
    break;

  case 91:
#line 600 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 92:
#line 601 "frame/parser.Y"
    {(yyval.real) = zeroTWOPI(degToRad((yyvsp[(1) - (1)].real)));;}
    break;

  case 93:
#line 602 "frame/parser.Y"
    {(yyval.real)=(yyvsp[(1) - (1)].real);;}
    break;

  case 94:
#line 605 "frame/parser.Y"
    {(yyval.real) = parseSEXStr((yyvsp[(1) - (1)].str));;}
    break;

  case 95:
#line 608 "frame/parser.Y"
    {(yyval.real) = parseHMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 96:
#line 611 "frame/parser.Y"
    {(yyval.real) = parseDMSStr((yyvsp[(1) - (1)].str));;}
    break;

  case 97:
#line 615 "frame/parser.Y"
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

  case 98:
#line 627 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 99:
#line 634 "frame/parser.Y"
    {
	  Vector r = Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));
	  (yyval.vector)[0] = r[0];
	  (yyval.vector)[1] = r[1];
	  (yyval.vector)[2] = r[2];
	;}
    break;

  case 100:
#line 641 "frame/parser.Y"
    {
	  (yyval.vector)[0] = (yyvsp[(1) - (2)].real);
	  (yyval.vector)[1] = (yyvsp[(2) - (2)].real);
	  (yyval.vector)[2] = 1;
	;}
    break;

  case 101:
#line 648 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::IMAGE;;}
    break;

  case 102:
#line 649 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::PHYSICAL;;}
    break;

  case 103:
#line 650 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::DETECTOR;;}
    break;

  case 104:
#line 651 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::AMPLIFIER;;}
    break;

  case 105:
#line 652 "frame/parser.Y"
    {(yyval.integer) = (Coord::CoordSystem)(yyvsp[(1) - (1)].integer);;}
    break;

  case 106:
#line 655 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS;;}
    break;

  case 107:
#line 656 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSA;;}
    break;

  case 108:
#line 657 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSB;;}
    break;

  case 109:
#line 658 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSC;;}
    break;

  case 110:
#line 659 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSD;;}
    break;

  case 111:
#line 660 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSE;;}
    break;

  case 112:
#line 661 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSF;;}
    break;

  case 113:
#line 662 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSG;;}
    break;

  case 114:
#line 663 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSH;;}
    break;

  case 115:
#line 664 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSI;;}
    break;

  case 116:
#line 665 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSJ;;}
    break;

  case 117:
#line 666 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSK;;}
    break;

  case 118:
#line 667 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSL;;}
    break;

  case 119:
#line 668 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSM;;}
    break;

  case 120:
#line 669 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSN;;}
    break;

  case 121:
#line 670 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSO;;}
    break;

  case 122:
#line 671 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSP;;}
    break;

  case 123:
#line 672 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSQ;;}
    break;

  case 124:
#line 673 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSR;;}
    break;

  case 125:
#line 674 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSS;;}
    break;

  case 126:
#line 675 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCST;;}
    break;

  case 127:
#line 676 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSU;;}
    break;

  case 128:
#line 677 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSV;;}
    break;

  case 129:
#line 678 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSW;;}
    break;

  case 130:
#line 679 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSX;;}
    break;

  case 131:
#line 680 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSY;;}
    break;

  case 132:
#line 681 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCSZ;;}
    break;

  case 133:
#line 682 "frame/parser.Y"
    {(yyval.integer) = currentCoord = Coord::WCS0;;}
    break;

  case 134:
#line 685 "frame/parser.Y"
    {(yyval.integer) = Coord::CANVAS;;}
    break;

  case 135:
#line 686 "frame/parser.Y"
    {(yyval.integer) = Coord::PANNER;;}
    break;

  case 136:
#line 689 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 137:
#line 690 "frame/parser.Y"
    {(yyval.integer) = FitsMask::ZERO;;}
    break;

  case 138:
#line 691 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONZERO;;}
    break;

  case 139:
#line 692 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NaN;;}
    break;

  case 140:
#line 693 "frame/parser.Y"
    {(yyval.integer) = FitsMask::NONNaN;;}
    break;

  case 141:
#line 694 "frame/parser.Y"
    {(yyval.integer) = FitsMask::RANGE;;}
    break;

  case 142:
#line 697 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 143:
#line 698 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOURCE;;}
    break;

  case 144:
#line 699 "frame/parser.Y"
    {(yyval.integer) = FitsMask::MULTIPLY;;}
    break;

  case 145:
#line 700 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SCREEN;;}
    break;

  case 146:
#line 701 "frame/parser.Y"
    {(yyval.integer) = FitsMask::OVERLAY;;}
    break;

  case 147:
#line 702 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DARKEN;;}
    break;

  case 148:
#line 703 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LIGHTEN;;}
    break;

  case 149:
#line 704 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_DODGE;;}
    break;

  case 150:
#line 705 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR_BURN;;}
    break;

  case 151:
#line 706 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HARD_LIGHT;;}
    break;

  case 152:
#line 707 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SOFT_LIGHT;;}
    break;

  case 153:
#line 708 "frame/parser.Y"
    {(yyval.integer) = FitsMask::DIFFERENCE;;}
    break;

  case 154:
#line 709 "frame/parser.Y"
    {(yyval.integer) = FitsMask::EXCLUSION;;}
    break;

  case 155:
#line 710 "frame/parser.Y"
    {(yyval.integer) = FitsMask::HUE;;}
    break;

  case 156:
#line 711 "frame/parser.Y"
    {(yyval.integer) = FitsMask::SATURATION;;}
    break;

  case 157:
#line 712 "frame/parser.Y"
    {(yyval.integer) = FitsMask::COLOR;;}
    break;

  case 158:
#line 713 "frame/parser.Y"
    {(yyval.integer) = FitsMask::LUMINOSITY;;}
    break;

  case 159:
#line 716 "frame/parser.Y"
    {(yyval.integer) = FrScale::LINEARSCALE;;}
    break;

  case 160:
#line 717 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOGSCALE;;}
    break;

  case 161:
#line 718 "frame/parser.Y"
    {(yyval.integer) = FrScale::POWSCALE;;}
    break;

  case 162:
#line 719 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQRTSCALE;;}
    break;

  case 163:
#line 720 "frame/parser.Y"
    {(yyval.integer) = FrScale::SQUAREDSCALE;;}
    break;

  case 164:
#line 721 "frame/parser.Y"
    {(yyval.integer) = FrScale::ASINHSCALE;;}
    break;

  case 165:
#line 722 "frame/parser.Y"
    {(yyval.integer) = FrScale::SINHSCALE;;}
    break;

  case 166:
#line 723 "frame/parser.Y"
    {(yyval.integer) = FrScale::HISTEQUSCALE;;}
    break;

  case 167:
#line 726 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 168:
#line 727 "frame/parser.Y"
    {(yyval.integer)=FrScale::SCAN;;}
    break;

  case 169:
#line 728 "frame/parser.Y"
    {(yyval.integer)=FrScale::SAMPLE;;}
    break;

  case 170:
#line 729 "frame/parser.Y"
    {(yyval.integer)=FrScale::DATAMIN;;}
    break;

  case 171:
#line 730 "frame/parser.Y"
    {(yyval.integer)=FrScale::IRAFMIN;;}
    break;

  case 172:
#line 733 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 173:
#line 734 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 174:
#line 735 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK4;;}
    break;

  case 175:
#line 736 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 176:
#line 737 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::FK5;;}
    break;

  case 177:
#line 738 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ICRS;;}
    break;

  case 178:
#line 739 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::GALACTIC;;}
    break;

  case 179:
#line 740 "frame/parser.Y"
    {(yyval.integer) = currentSky = Coord::ECLIPTIC;;}
    break;

  case 180:
#line 743 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 181:
#line 744 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREES;;}
    break;

  case 182:
#line 745 "frame/parser.Y"
    {(yyval.integer)=Coord::SEXAGESIMAL;;}
    break;

  case 183:
#line 748 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 184:
#line 749 "frame/parser.Y"
    {(yyval.integer)=Coord::DEGREE;;}
    break;

  case 185:
#line 750 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCMIN;;}
    break;

  case 186:
#line 751 "frame/parser.Y"
    {(yyval.integer)=Coord::ARCSEC;;}
    break;

  case 187:
#line 754 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 188:
#line 755 "frame/parser.Y"
    {(yyval.integer) = Base::SHMID;;}
    break;

  case 189:
#line 756 "frame/parser.Y"
    {(yyval.integer) = Base::KEY;;}
    break;

  case 190:
#line 759 "frame/parser.Y"
    {;}
    break;

  case 191:
#line 760 "frame/parser.Y"
    {;}
    break;

  case 192:
#line 761 "frame/parser.Y"
    {;}
    break;

  case 193:
#line 764 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 194:
#line 765 "frame/parser.Y"
    {(yyval.integer) = Base::IMG;;}
    break;

  case 195:
#line 766 "frame/parser.Y"
    {(yyval.integer) = Base::MASK;;}
    break;

  case 196:
#line 769 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 197:
#line 770 "frame/parser.Y"
    {(yyval.integer) = Point::CIRCLE;;}
    break;

  case 198:
#line 771 "frame/parser.Y"
    {(yyval.integer) = Point::BOX;;}
    break;

  case 199:
#line 772 "frame/parser.Y"
    {(yyval.integer) = Point::DIAMOND;;}
    break;

  case 200:
#line 773 "frame/parser.Y"
    {(yyval.integer) = Point::CROSS;;}
    break;

  case 201:
#line 774 "frame/parser.Y"
    {(yyval.integer) = Point::EX;;}
    break;

  case 202:
#line 775 "frame/parser.Y"
    {(yyval.integer) = Point::ARROW;;}
    break;

  case 203:
#line 776 "frame/parser.Y"
    {(yyval.integer) = Point::BOXCIRCLE;;}
    break;

  case 204:
#line 779 "frame/parser.Y"
    {(yyval.integer) = POINTSIZE;;}
    break;

  case 205:
#line 780 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 206:
#line 783 "frame/parser.Y"
    {(yyval.integer) = Marker::PANDA;;}
    break;

  case 207:
#line 784 "frame/parser.Y"
    {(yyval.integer) = Marker::HISTOGRAM;;}
    break;

  case 208:
#line 785 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT2D;;}
    break;

  case 209:
#line 786 "frame/parser.Y"
    {(yyval.integer) = Marker::PLOT3D;;}
    break;

  case 210:
#line 787 "frame/parser.Y"
    {(yyval.integer) = Marker::RADIAL;;}
    break;

  case 211:
#line 788 "frame/parser.Y"
    {(yyval.integer) = Marker::STATS;;}
    break;

  case 212:
#line 791 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 213:
#line 792 "frame/parser.Y"
    {(yyval.integer) = Marker::AVERAGE;;}
    break;

  case 214:
#line 793 "frame/parser.Y"
    {(yyval.integer) = Marker::SUM;;}
    break;

  case 215:
#line 794 "frame/parser.Y"
    {(yyval.integer) = Marker::MEDIAN;;}
    break;

  case 216:
#line 797 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 217:
#line 798 "frame/parser.Y"
    {(yyval.integer) = FitsFile::NATIVE;;}
    break;

  case 218:
#line 799 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 219:
#line 800 "frame/parser.Y"
    {(yyval.integer) = FitsFile::BIG;;}
    break;

  case 220:
#line 801 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 221:
#line 802 "frame/parser.Y"
    {(yyval.integer) = FitsFile::LITTLE;;}
    break;

  case 226:
#line 809 "frame/parser.Y"
    {fr->set3dRenderMethodCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 227:
#line 810 "frame/parser.Y"
    {fr->set3dRenderBackgroundCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 229:
#line 812 "frame/parser.Y"
    {fr->set3dScaleCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 230:
#line 813 "frame/parser.Y"
    {fr->set3dSyncCmd((yyvsp[(2) - (2)].integer));}
    break;

  case 231:
#line 815 "frame/parser.Y"
    {/* needed for compatibility with old version of backup */;}
    break;

  case 232:
#line 818 "frame/parser.Y"
    {fr->set3dShadeCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 233:
#line 819 "frame/parser.Y"
    {fr->set3dShadeAmbientCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 234:
#line 820 "frame/parser.Y"
    {fr->set3dShadeStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 236:
#line 824 "frame/parser.Y"
    {fr->set3dShadeNormalCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 237:
#line 825 "frame/parser.Y"
    {fr->set3dShadeNormalStrengthCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 238:
#line 828 "frame/parser.Y"
    {fr->set3dBorderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 239:
#line 829 "frame/parser.Y"
    {fr->set3dBorderColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 240:
#line 832 "frame/parser.Y"
    {fr->set3dCompassCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 241:
#line 833 "frame/parser.Y"
    {fr->set3dCompassColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 242:
#line 836 "frame/parser.Y"
    {fr->set3dHighliteCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 243:
#line 837 "frame/parser.Y"
    {fr->set3dHighliteColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 244:
#line 840 "frame/parser.Y"
    {fr->set3dViewCmd((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real));;}
    break;

  case 245:
#line 842 "frame/parser.Y"
    {fr->set3dViewPointCmd(Vector3d((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 247:
#line 846 "frame/parser.Y"
    {fr->binColsCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 248:
#line 847 "frame/parser.Y"
    {fr->binDepthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 251:
#line 850 "frame/parser.Y"
    {fr->binBufferSizeCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 253:
#line 852 "frame/parser.Y"
    {fr->binFilterCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 254:
#line 855 "frame/parser.Y"
    {fr->binAboutCmd();;}
    break;

  case 255:
#line 856 "frame/parser.Y"
    {fr->binAboutCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 256:
#line 859 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 257:
#line 860 "frame/parser.Y"
    {fr->binFactorCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 258:
#line 862 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(1) - (4)].real)), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 259:
#line 864 "frame/parser.Y"
    {fr->binFactorAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 260:
#line 865 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 261:
#line 866 "frame/parser.Y"
    {fr->binFactorToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 262:
#line 868 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(2) - (5)].real)), Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 263:
#line 870 "frame/parser.Y"
    {fr->binFactorToAboutCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 264:
#line 873 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::AVERAGE);;}
    break;

  case 265:
#line 874 "frame/parser.Y"
    {fr->binFunctionCmd(FitsHist::SUM);;}
    break;

  case 266:
#line 877 "frame/parser.Y"
    {fr->binToFitCmd();;}
    break;

  case 267:
#line 879 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (7)].real),(yyvsp[(2) - (7)].real)), (yyvsp[(5) - (7)].str), (yyvsp[(6) - (7)].str), (yyvsp[(7) - (7)].str));;}
    break;

  case 268:
#line 882 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (11)].real),(yyvsp[(2) - (11)].real)), (yyvsp[(3) - (11)].integer), Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)), (yyvsp[(8) - (11)].str), (yyvsp[(9) - (11)].str), (yyvsp[(10) - (11)].str), (yyvsp[(11) - (11)].str));;}
    break;

  case 269:
#line 884 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (8)].real),(yyvsp[(2) - (8)].real)), Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (yyvsp[(6) - (8)].str), (yyvsp[(7) - (8)].str), (yyvsp[(8) - (8)].str));;}
    break;

  case 270:
#line 887 "frame/parser.Y"
    {fr->binCmd(Vector((yyvsp[(1) - (12)].real),(yyvsp[(2) - (12)].real)), (yyvsp[(3) - (12)].integer), Vector((yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real)), Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    (yyvsp[(9) - (12)].str), (yyvsp[(10) - (12)].str), (yyvsp[(11) - (12)].str), (yyvsp[(12) - (12)].str));;}
    break;

  case 271:
#line 891 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 272:
#line 892 "frame/parser.Y"
    {fr->blockCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 274:
#line 894 "frame/parser.Y"
    {fr->blockNanZeroCmd((yyvsp[(3) - (3)].integer));;}
    break;

  case 275:
#line 897 "frame/parser.Y"
    {fr->blockToFitCmd();;}
    break;

  case 276:
#line 898 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (1)].real),(yyvsp[(1) - (1)].real)));;}
    break;

  case 277:
#line 899 "frame/parser.Y"
    {fr->blockToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 281:
#line 905 "frame/parser.Y"
    {fr->clipUserCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 282:
#line 906 "frame/parser.Y"
    {fr->clipUserCmd(NAN,NAN);;}
    break;

  case 284:
#line 909 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 285:
#line 914 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::GLOBAL);;}
    break;

  case 286:
#line 915 "frame/parser.Y"
    {fr->clipScopeCmd(FrScale::LOCAL);;}
    break;

  case 287:
#line 918 "frame/parser.Y"
    {fr->clipModeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 288:
#line 919 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::MINMAX);;}
    break;

  case 289:
#line 920 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZSCALE);;}
    break;

  case 290:
#line 921 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::ZMAX);;}
    break;

  case 291:
#line 922 "frame/parser.Y"
    {fr->clipModeCmd(FrScale::USERCLIP);;}
    break;

  case 292:
#line 925 "frame/parser.Y"
    {fr->clipMinMaxCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer),(yyvsp[(1) - (2)].integer));;}
    break;

  case 293:
#line 926 "frame/parser.Y"
    {fr->clipMinMaxModeCmd((FrScale::MinMaxMode)(yyvsp[(2) - (2)].integer));;}
    break;

  case 294:
#line 927 "frame/parser.Y"
    {fr->clipMinMaxSampleCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 295:
#line 928 "frame/parser.Y"
    {fr->clipMinMaxRescanCmd();;}
    break;

  case 296:
#line 931 "frame/parser.Y"
    {fr->clipZScaleCmd((yyvsp[(1) - (3)].real),(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 297:
#line 933 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleContrastCmd((yyvsp[(2) - (2)].real));
        ;}
    break;

  case 298:
#line 938 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleSampleCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 299:
#line 943 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->clipZScaleLineCmd((yyvsp[(2) - (2)].integer));
        ;}
    break;

  case 300:
#line 950 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 301:
#line 952 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 302:
#line 954 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 303:
#line 956 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 304:
#line 958 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 308:
#line 965 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].real), (yyvsp[(3) - (5)].real), (yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].integer));;}
    break;

  case 309:
#line 967 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 310:
#line 969 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 311:
#line 971 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real),(yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real),(yyvsp[(6) - (9)].real),(yyvsp[(7) - (9)].real),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 312:
#line 973 "frame/parser.Y"
    {fr->colormapCmd((yyvsp[(2) - (7)].integer),(yyvsp[(3) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(yyvsp[(7) - (7)].integer));;}
    break;

  case 313:
#line 975 "frame/parser.Y"
    {fr->colorScaleCmd((FrScale::ColorScaleType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 314:
#line 976 "frame/parser.Y"
    {fr->colorScaleLogCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 316:
#line 980 "frame/parser.Y"
    {fr->contourDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 321:
#line 988 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),(FrScale::ClipMode)(yyvsp[(9) - (13)].integer),100,(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 322:
#line 991 "frame/parser.Y"
    {fr->contourCreateCmd((yyvsp[(1) - (13)].str),(yyvsp[(2) - (13)].integer),(yyvsp[(3) - (13)].integer),(FVContour::Method)(yyvsp[(4) - (13)].integer),(yyvsp[(5) - (13)].integer),(yyvsp[(6) - (13)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (13)].integer),(yyvsp[(8) - (13)].real),FrScale::AUTOCUT,(yyvsp[(9) - (13)].real),(FrScale::ClipScope)(yyvsp[(10) - (13)].integer),(yyvsp[(11) - (13)].real),(yyvsp[(12) - (13)].real),(yyvsp[(13) - (13)].str));;}
    break;

  case 323:
#line 994 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),(FrScale::ClipMode)(yyvsp[(9) - (12)].integer),100,FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 324:
#line 1000 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourCreateCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].integer),(yyvsp[(3) - (12)].integer),(FVContour::Method)(yyvsp[(4) - (12)].integer),(yyvsp[(5) - (12)].integer),(yyvsp[(6) - (12)].integer),(FrScale::ColorScaleType)(yyvsp[(7) - (12)].integer),(yyvsp[(8) - (12)].real),FrScale::AUTOCUT,(yyvsp[(9) - (12)].real),FrScale::LOCAL,(yyvsp[(10) - (12)].real),(yyvsp[(11) - (12)].real),(yyvsp[(12) - (12)].str));
	;}
    break;

  case 325:
#line 1005 "frame/parser.Y"
    {fr->contourCreatePolygonCmd();;}
    break;

  case 326:
#line 1008 "frame/parser.Y"
    {fr->contourDeleteCmd();;}
    break;

  case 327:
#line 1009 "frame/parser.Y"
    {fr->contourDeleteAuxCmd();;}
    break;

  case 328:
#line 1012 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 329:
#line 1013 "frame/parser.Y"
    {fr->contourLoadCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 330:
#line 1015 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->contourLoadCmd((yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer),(yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer));
	;}
    break;

  case 331:
#line 1021 "frame/parser.Y"
    {(yyval.integer) = FrScale::MINMAX;;}
    break;

  case 332:
#line 1022 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZSCALE;;}
    break;

  case 333:
#line 1023 "frame/parser.Y"
    {(yyval.integer) = FrScale::ZMAX;;}
    break;

  case 334:
#line 1024 "frame/parser.Y"
    {(yyval.integer) = FrScale::USERCLIP;;}
    break;

  case 335:
#line 1027 "frame/parser.Y"
    {(yyval.integer) = FrScale::GLOBAL;;}
    break;

  case 336:
#line 1028 "frame/parser.Y"
    {(yyval.integer) = FrScale::LOCAL;;}
    break;

  case 337:
#line 1031 "frame/parser.Y"
    {(yyval.integer) = FVContour::SMOOTH;;}
    break;

  case 338:
#line 1032 "frame/parser.Y"
    {(yyval.integer) = FVContour::BLOCK;;}
    break;

  case 339:
#line 1035 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 340:
#line 1036 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (4)].str),(yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 341:
#line 1038 "frame/parser.Y"
    {fr->contourPasteCmd((yyvsp[(1) - (6)].str),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 342:
#line 1042 "frame/parser.Y"
    {fr->contourSaveCmd((yyvsp[(1) - (3)].str), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 343:
#line 1044 "frame/parser.Y"
    {fr->contourSaveAuxCmd((yyvsp[(2) - (4)].str),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer),(Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 344:
#line 1047 "frame/parser.Y"
    {fr->cropCmd();;}
    break;

  case 345:
#line 1049 "frame/parser.Y"
    {fr->cropCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 346:
#line 1052 "frame/parser.Y"
    {fr->cropCenterCmd(Vector((yyvsp[(2) - (8)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), Vector((yyvsp[(5) - (8)].real),(yyvsp[(6) - (8)].real)), (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 348:
#line 1054 "frame/parser.Y"
    {fr->cropBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 349:
#line 1055 "frame/parser.Y"
    {fr->cropMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 350:
#line 1056 "frame/parser.Y"
    {fr->cropEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 351:
#line 1059 "frame/parser.Y"
    {fr->crop3dCmd();;}
    break;

  case 352:
#line 1061 "frame/parser.Y"
    {fr->crop3dCmd((yyvsp[(1) - (4)].real), (yyvsp[(2) - (4)].real), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 353:
#line 1062 "frame/parser.Y"
    {fr->crop3dBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 354:
#line 1063 "frame/parser.Y"
    {fr->crop3dMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 355:
#line 1064 "frame/parser.Y"
    {fr->crop3dEndCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 356:
#line 1068 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)), (Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 357:
#line 1070 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 358:
#line 1071 "frame/parser.Y"
    {fr->crosshairCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 359:
#line 1072 "frame/parser.Y"
    {fr->crosshairWarpCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 360:
#line 1075 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)), (Coord::InternalSystem)(yyvsp[(3) - (5)].integer));;}
    break;

  case 361:
#line 1077 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 362:
#line 1079 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer));;}
    break;

  case 363:
#line 1081 "frame/parser.Y"
    {fr->crosshairCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer));;}
    break;

  case 364:
#line 1084 "frame/parser.Y"
    {fr->axesOrderCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 365:
#line 1087 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 366:
#line 1088 "frame/parser.Y"
    {(yyval.integer) = Base::AVERAGE;;}
    break;

  case 367:
#line 1089 "frame/parser.Y"
    {(yyval.integer) = Base::SUM;;}
    break;

  case 368:
#line 1090 "frame/parser.Y"
    {(yyval.integer) = Base::MEDIAN;;}
    break;

  case 369:
#line 1093 "frame/parser.Y"
    {fr->fadeCmd((yyvsp[(1) - (1)].real));;}
    break;

  case 370:
#line 1094 "frame/parser.Y"
    {fr->fadeClearCmd();;}
    break;

  case 371:
#line 1097 "frame/parser.Y"
    {fr->fitsyHasExtCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 372:
#line 1100 "frame/parser.Y"
    {fr->getCmd();;}
    break;

  case 373:
#line 1101 "frame/parser.Y"
    {fr->getBgColorCmd();;}
    break;

  case 387:
#line 1115 "frame/parser.Y"
    {fr->getDATASECCmd();;}
    break;

  case 390:
#line 1118 "frame/parser.Y"
    {fr->getHighliteColorCmd();;}
    break;

  case 391:
#line 1119 "frame/parser.Y"
    {fr->getHistogramCmd((yyvsp[(2) - (4)].str),(yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].integer));;}
    break;

  case 397:
#line 1125 "frame/parser.Y"
    {fr->getIRAFAlignCmd();;}
    break;

  case 398:
#line 1126 "frame/parser.Y"
    {fr->getMinMaxCmd();;}
    break;

  case 403:
#line 1131 "frame/parser.Y"
    {fr->getNANColorCmd();;}
    break;

  case 404:
#line 1132 "frame/parser.Y"
    {fr->getOrientCmd();;}
    break;

  case 406:
#line 1135 "frame/parser.Y"
    {fr->getPixelTableCmd(Vector((yyvsp[(4) - (8)].real),(yyvsp[(5) - (8)].real)), (Coord::InternalSystem)(yyvsp[(3) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(7) - (8)].integer), (yyvsp[(8) - (8)].str));;}
    break;

  case 408:
#line 1137 "frame/parser.Y"
    {fr->getRotateCmd();;}
    break;

  case 410:
#line 1139 "frame/parser.Y"
    {fr->getThreadsCmd();;}
    break;

  case 412:
#line 1141 "frame/parser.Y"
    {fr->getTypeCmd();;}
    break;

  case 413:
#line 1143 "frame/parser.Y"
    {fr->getValueCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 416:
#line 1146 "frame/parser.Y"
    {fr->getZoomCmd();;}
    break;

  case 417:
#line 1150 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 418:
#line 1152 "frame/parser.Y"
    {fr->getHorzCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 419:
#line 1156 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (7)].str),(yyvsp[(2) - (7)].str),Vector((yyvsp[(3) - (7)].real),(yyvsp[(4) - (7)].real)),(Coord::InternalSystem)(yyvsp[(5) - (7)].integer),(yyvsp[(6) - (7)].integer),(Base::CutMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 420:
#line 1158 "frame/parser.Y"
    {fr->getVertCutCmd((yyvsp[(1) - (8)].str),(yyvsp[(2) - (8)].str),Vector((yyvsp[(3) - (8)].real),(yyvsp[(4) - (8)].real)),(Coord::CoordSystem)(yyvsp[(5) - (8)].integer),(Coord::SkyFrame)(yyvsp[(6) - (8)].integer),(yyvsp[(7) - (8)].integer),(Base::CutMethod)(yyvsp[(8) - (8)].integer));;}
    break;

  case 421:
#line 1161 "frame/parser.Y"
    {fr->getBinDepthCmd();;}
    break;

  case 422:
#line 1162 "frame/parser.Y"
    {fr->getBinFactorCmd();;}
    break;

  case 423:
#line 1163 "frame/parser.Y"
    {fr->getBinFunctionCmd();;}
    break;

  case 424:
#line 1164 "frame/parser.Y"
    {fr->getBinBufferSizeCmd();;}
    break;

  case 425:
#line 1165 "frame/parser.Y"
    {fr->getBinCursorCmd();;}
    break;

  case 426:
#line 1166 "frame/parser.Y"
    {fr->getBinFilterCmd();;}
    break;

  case 428:
#line 1168 "frame/parser.Y"
    {fr->getBinListCmd();;}
    break;

  case 429:
#line 1171 "frame/parser.Y"
    {fr->getBinColsCmd();;}
    break;

  case 430:
#line 1172 "frame/parser.Y"
    {fr->getBinColsMinMaxCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 431:
#line 1173 "frame/parser.Y"
    {fr->getBinColsDimCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 432:
#line 1176 "frame/parser.Y"
    {fr->getBlockCmd();;}
    break;

  case 433:
#line 1177 "frame/parser.Y"
    {fr->getBlockNanZeroCmd();;}
    break;

  case 434:
#line 1180 "frame/parser.Y"
    {fr->getClipCmd();;}
    break;

  case 435:
#line 1182 "frame/parser.Y"
    {fr->getClipCmd((FrScale::ClipMode)(yyvsp[(1) - (2)].integer), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 436:
#line 1184 "frame/parser.Y"
    {fr->getClipCmd((yyvsp[(1) - (2)].real), (FrScale::ClipScope)(yyvsp[(2) - (2)].integer));;}
    break;

  case 437:
#line 1185 "frame/parser.Y"
    {fr->getClipScopeCmd();;}
    break;

  case 438:
#line 1186 "frame/parser.Y"
    {fr->getClipModeCmd();;}
    break;

  case 440:
#line 1188 "frame/parser.Y"
    {fr->getClipUserCmd();;}
    break;

  case 442:
#line 1191 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->getClipPreserveCmd();
	;}
    break;

  case 443:
#line 1197 "frame/parser.Y"
    {fr->getClipMinMaxModeCmd();;}
    break;

  case 444:
#line 1198 "frame/parser.Y"
    {fr->getClipMinMaxSampleCmd();;}
    break;

  case 445:
#line 1201 "frame/parser.Y"
    {fr->getClipZScaleContrastCmd();;}
    break;

  case 446:
#line 1202 "frame/parser.Y"
    {fr->getClipZScaleSampleCmd();;}
    break;

  case 447:
#line 1203 "frame/parser.Y"
    {fr->getClipZScaleLineCmd();;}
    break;

  case 448:
#line 1206 "frame/parser.Y"
    {fr->getColorbarCmd();;}
    break;

  case 449:
#line 1207 "frame/parser.Y"
    {fr->getColorbarTagCmd();;}
    break;

  case 451:
#line 1213 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 452:
#line 1215 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (4)].integer),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),(Coord::InternalSystem)(yyvsp[(2) - (4)].integer));;}
    break;

  case 453:
#line 1217 "frame/parser.Y"
    {fr->getColorMapLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 454:
#line 1220 "frame/parser.Y"
    {fr->getColorScaleCmd();;}
    break;

  case 456:
#line 1222 "frame/parser.Y"
    {fr->getColorScaleLogCmd();;}
    break;

  case 457:
#line 1226 "frame/parser.Y"
    {fr->getColorScaleLevelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(FrScale::ColorScaleType)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].real));;}
    break;

  case 458:
#line 1230 "frame/parser.Y"
    {fr->getContourCmd((Coord::CoordSystem)(yyvsp[(1) - (2)].integer),(Coord::SkyFrame)(yyvsp[(2) - (2)].integer));;}
    break;

  case 460:
#line 1232 "frame/parser.Y"
    {fr->getContourColorNameCmd();;}
    break;

  case 461:
#line 1233 "frame/parser.Y"
    {fr->getContourDashCmd();;}
    break;

  case 462:
#line 1234 "frame/parser.Y"
    {fr->getContourDashListCmd();;}
    break;

  case 463:
#line 1235 "frame/parser.Y"
    {fr->getContourLevelCmd();;}
    break;

  case 464:
#line 1236 "frame/parser.Y"
    {fr->getContourNumLevelCmd();;}
    break;

  case 465:
#line 1237 "frame/parser.Y"
    {fr->getContourMethodCmd();;}
    break;

  case 467:
#line 1239 "frame/parser.Y"
    {fr->getContourSmoothCmd();;}
    break;

  case 468:
#line 1240 "frame/parser.Y"
    {fr->getContourLineWidthCmd();;}
    break;

  case 469:
#line 1243 "frame/parser.Y"
    {fr->getContourClipCmd();;}
    break;

  case 470:
#line 1244 "frame/parser.Y"
    {fr->getContourClipModeCmd();;}
    break;

  case 471:
#line 1245 "frame/parser.Y"
    {fr->getContourClipScopeCmd();;}
    break;

  case 472:
#line 1248 "frame/parser.Y"
    {fr->getContourScaleCmd();;}
    break;

  case 473:
#line 1249 "frame/parser.Y"
    {fr->getContourScaleLogCmd();;}
    break;

  case 474:
#line 1253 "frame/parser.Y"
    {fr->getCoordCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer), (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 475:
#line 1255 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->getCoordCmd(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 476:
#line 1263 "frame/parser.Y"
    {fr->getCropCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 477:
#line 1265 "frame/parser.Y"
    {fr->getCropCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (6)].integer), (Coord::SkyFrame)(yyvsp[(3) - (6)].integer), (Coord::SkyFormat)(yyvsp[(4) - (6)].integer), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 478:
#line 1267 "frame/parser.Y"
    {fr->getCrop3dCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));;}
    break;

  case 479:
#line 1270 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 480:
#line 1272 "frame/parser.Y"
    {fr->getCrosshairCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 481:
#line 1273 "frame/parser.Y"
    {fr->getCrosshairStatusCmd();;}
    break;

  case 482:
#line 1276 "frame/parser.Y"
    {fr->getAxesOrderCmd();;}
    break;

  case 483:
#line 1279 "frame/parser.Y"
    {fr->getCursorCmd((Coord::InternalSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 484:
#line 1281 "frame/parser.Y"
    {fr->getCursorCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 485:
#line 1285 "frame/parser.Y"
    {fr->getDataValuesCmd(1, Vector((yyvsp[(3) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer), Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)), (yyvsp[(6) - (6)].str));;}
    break;

  case 486:
#line 1287 "frame/parser.Y"
    {fr->getDataValuesCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), Vector((yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].real)), (yyvsp[(7) - (7)].str));;}
    break;

  case 487:
#line 1290 "frame/parser.Y"
    {fr->getDataValuesCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),(Coord::InternalSystem)(yyvsp[(1) - (5)].integer),
	    Vector((yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer)));;}
    break;

  case 488:
#line 1294 "frame/parser.Y"
    {fr->getInfoCmd((yyvsp[(1) - (2)].str), (Base::FileNameType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 489:
#line 1295 "frame/parser.Y"
    {fr->getInfoClipCmd();;}
    break;

  case 490:
#line 1297 "frame/parser.Y"
    {fr->getInfoCmd(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)), (Coord::InternalSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (Base::FileNameType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 491:
#line 1300 "frame/parser.Y"
    {fr->iisGetCmd((yyvsp[(1) - (4)].integer),(yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 492:
#line 1301 "frame/parser.Y"
    {fr->iisGetCursorCmd();;}
    break;

  case 494:
#line 1305 "frame/parser.Y"
    {fr->iisGetFileNameCmd();;}
    break;

  case 495:
#line 1306 "frame/parser.Y"
    {fr->iisGetFileNameCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 496:
#line 1307 "frame/parser.Y"
    {fr->iisGetFileNameCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 497:
#line 1310 "frame/parser.Y"
    {fr->getFitsNAxesCmd();;}
    break;

  case 498:
#line 1312 "frame/parser.Y"
    {fr->getFitsCenterCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::SkyFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 499:
#line 1313 "frame/parser.Y"
    {fr->getFitsCountCmd();;}
    break;

  case 501:
#line 1315 "frame/parser.Y"
    {fr->getBitpixCmd();;}
    break;

  case 505:
#line 1319 "frame/parser.Y"
    {fr->getFitsHeightCmd();;}
    break;

  case 506:
#line 1320 "frame/parser.Y"
    {fr->getFitsObjectNameCmd();;}
    break;

  case 507:
#line 1321 "frame/parser.Y"
    {fr->getFitsSizeCmd();;}
    break;

  case 508:
#line 1323 "frame/parser.Y"
    {fr->getFitsSizeCmd((Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer),(Coord::DistFormat)(yyvsp[(4) - (4)].integer));;}
    break;

  case 510:
#line 1325 "frame/parser.Y"
    {fr->getFitsWidthCmd();;}
    break;

  case 511:
#line 1328 "frame/parser.Y"
    {fr->getFitsExtCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 512:
#line 1330 "frame/parser.Y"
    {fr->getFitsExtCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),(Coord::InternalSystem)(yyvsp[(1) - (3)].integer));;}
    break;

  case 513:
#line 1332 "frame/parser.Y"
    {fr->getFitsHeaderCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 514:
#line 1333 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd(1,(yyvsp[(2) - (2)].str));;}
    break;

  case 515:
#line 1334 "frame/parser.Y"
    {fr->getFitsHeaderKeywordCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 516:
#line 1335 "frame/parser.Y"
    {fr->getFitsHeaderWCSCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 517:
#line 1338 "frame/parser.Y"
    {fr->getFitsDepthCmd(2);;}
    break;

  case 518:
#line 1339 "frame/parser.Y"
    {fr->getFitsDepthCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 519:
#line 1343 "frame/parser.Y"
    {fr->getFitsFileNameCmd((Base::FileNameType)(yyvsp[(1) - (1)].integer));;}
    break;

  case 520:
#line 1345 "frame/parser.Y"
    {fr->getFitsFileNameCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)), (Coord::InternalSystem)(yyvsp[(2) - (4)].integer),
	    (Base::FileNameType)(yyvsp[(1) - (4)].integer));;}
    break;

  case 521:
#line 1348 "frame/parser.Y"
    {fr->getFitsFileNameCmd((yyvsp[(2) - (2)].integer), (Base::FileNameType)(yyvsp[(1) - (2)].integer));;}
    break;

  case 522:
#line 1351 "frame/parser.Y"
    {fr->getFitsSliceCmd(2);;}
    break;

  case 523:
#line 1352 "frame/parser.Y"
    {fr->getFitsSliceCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 524:
#line 1354 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 525:
#line 1356 "frame/parser.Y"
    {fr->getFitsSliceFromImageCmd((yyvsp[(3) - (4)].integer), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 526:
#line 1358 "frame/parser.Y"
    {fr->getFitsSliceToImageCmd((yyvsp[(3) - (4)].real), (Coord::CoordSystem)(yyvsp[(4) - (4)].integer));;}
    break;

  case 527:
#line 1361 "frame/parser.Y"
    {fr->getGridCmd();;}
    break;

  case 528:
#line 1362 "frame/parser.Y"
    {fr->getGridOptionCmd();;}
    break;

  case 529:
#line 1363 "frame/parser.Y"
    {fr->getGridVarsCmd();;}
    break;

  case 530:
#line 1366 "frame/parser.Y"
    {fr->getLayerCountCmd();;}
    break;

  case 531:
#line 1367 "frame/parser.Y"
    {fr->getLayerNoCmd();;}
    break;

  case 532:
#line 1368 "frame/parser.Y"
    {fr->getLayerColorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 533:
#line 1369 "frame/parser.Y"
    {fr->getLayerBlendCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 534:
#line 1370 "frame/parser.Y"
    {fr->getLayerTransparencyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 535:
#line 1371 "frame/parser.Y"
    {fr->getLayerViewCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 536:
#line 1374 "frame/parser.Y"
    {fr->getMaskColorCmd();;}
    break;

  case 537:
#line 1375 "frame/parser.Y"
    {fr->getMaskMarkCmd();;}
    break;

  case 538:
#line 1376 "frame/parser.Y"
    {fr->getMaskRangeCmd();;}
    break;

  case 539:
#line 1377 "frame/parser.Y"
    {fr->getMaskSystemCmd();;}
    break;

  case 540:
#line 1378 "frame/parser.Y"
    {fr->getMaskTransparencyCmd();;}
    break;

  case 541:
#line 1379 "frame/parser.Y"
    {fr->getMaskCountCmd();;}
    break;

  case 542:
#line 1380 "frame/parser.Y"
    {fr->getMaskBlendCmd();;}
    break;

  case 543:
#line 1383 "frame/parser.Y"
    {(yyval.integer) = 0;;}
    break;

  case 544:
#line 1384 "frame/parser.Y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);;}
    break;

  case 545:
#line 1387 "frame/parser.Y"
    {fr->getPanPreserveCmd();;}
    break;

  case 546:
#line 1390 "frame/parser.Y"
    {fr->getRGBChannelCmd();;}
    break;

  case 547:
#line 1391 "frame/parser.Y"
    {fr->getRGBSystemCmd();;}
    break;

  case 548:
#line 1392 "frame/parser.Y"
    {fr->getRGBViewCmd();;}
    break;

  case 549:
#line 1395 "frame/parser.Y"
    {fr->getMultiColorSystemCmd();;}
    break;

  case 550:
#line 1398 "frame/parser.Y"
    {fr->getHLSChannelCmd();;}
    break;

  case 551:
#line 1399 "frame/parser.Y"
    {fr->getHLSSystemCmd();;}
    break;

  case 552:
#line 1400 "frame/parser.Y"
    {fr->getHLSViewCmd();;}
    break;

  case 553:
#line 1403 "frame/parser.Y"
    {fr->getHSVChannelCmd();;}
    break;

  case 554:
#line 1404 "frame/parser.Y"
    {fr->getHSVSystemCmd();;}
    break;

  case 555:
#line 1405 "frame/parser.Y"
    {fr->getHSVViewCmd();;}
    break;

  case 556:
#line 1408 "frame/parser.Y"
    {fr->getSmoothFunctionCmd();;}
    break;

  case 557:
#line 1409 "frame/parser.Y"
    {fr->getSmoothRadiusCmd();;}
    break;

  case 558:
#line 1410 "frame/parser.Y"
    {fr->getSmoothRadiusMinorCmd();;}
    break;

  case 559:
#line 1411 "frame/parser.Y"
    {fr->getSmoothSigmaCmd();;}
    break;

  case 560:
#line 1412 "frame/parser.Y"
    {fr->getSmoothSigmaMinorCmd();;}
    break;

  case 561:
#line 1413 "frame/parser.Y"
    {fr->getSmoothAngleCmd();;}
    break;

  case 566:
#line 1420 "frame/parser.Y"
    {fr->get3dRenderMethodCmd();;}
    break;

  case 567:
#line 1421 "frame/parser.Y"
    {fr->get3dRenderBackgroundCmd();;}
    break;

  case 569:
#line 1423 "frame/parser.Y"
    {fr->get3dScaleCmd();;}
    break;

  case 570:
#line 1426 "frame/parser.Y"
    {fr->get3dShadeCmd();;}
    break;

  case 571:
#line 1427 "frame/parser.Y"
    {fr->get3dShadeAmbientCmd();;}
    break;

  case 572:
#line 1428 "frame/parser.Y"
    {fr->get3dShadeStrengthCmd();;}
    break;

  case 574:
#line 1432 "frame/parser.Y"
    {fr->get3dShadeNormalCmd();;}
    break;

  case 575:
#line 1433 "frame/parser.Y"
    {fr->get3dShadeNormalStrengthCmd();;}
    break;

  case 576:
#line 1436 "frame/parser.Y"
    {fr->get3dBorderCmd();;}
    break;

  case 577:
#line 1437 "frame/parser.Y"
    {fr->get3dBorderColorCmd();;}
    break;

  case 578:
#line 1440 "frame/parser.Y"
    {fr->get3dCompassCmd();;}
    break;

  case 579:
#line 1441 "frame/parser.Y"
    {fr->get3dCompassColorCmd();;}
    break;

  case 580:
#line 1444 "frame/parser.Y"
    {fr->get3dHighliteCmd();;}
    break;

  case 581:
#line 1445 "frame/parser.Y"
    {fr->get3dHighliteColorCmd();;}
    break;

  case 582:
#line 1448 "frame/parser.Y"
    {fr->get3dViewCmd();;}
    break;

  case 583:
#line 1449 "frame/parser.Y"
    {fr->get3dViewPointCmd();;}
    break;

  case 584:
#line 1452 "frame/parser.Y"
    {fr->getWCSCmd();;}
    break;

  case 586:
#line 1454 "frame/parser.Y"
    {fr->getWCSNameCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 587:
#line 1457 "frame/parser.Y"
    {fr->getWCSAlignCmd();;}
    break;

  case 588:
#line 1458 "frame/parser.Y"
    {fr->getWCSAlignPointerCmd();;}
    break;

  case 590:
#line 1462 "frame/parser.Y"
    {fr->gridDeleteCmd();;}
    break;

  case 591:
#line 1466 "frame/parser.Y"
    {fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (6)].integer), (Coord::SkyFrame)(yyvsp[(2) - (6)].integer),
	    (Coord::SkyFormat)(yyvsp[(3) - (6)].integer), (Grid2d::GridType)(yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].str), (yyvsp[(6) - (6)].str));;}
    break;

  case 592:
#line 1469 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->gridCmd((Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (Coord::SkyFrame)(yyvsp[(2) - (5)].integer),
		      (Coord::SkyFormat)(yyvsp[(3) - (5)].integer), (Grid2d::GridType)(yyvsp[(4) - (5)].integer), (yyvsp[(5) - (5)].str), "");
	;}
    break;

  case 593:
#line 1476 "frame/parser.Y"
    {(yyval.integer)=Grid2d::ANALYSIS;;}
    break;

  case 594:
#line 1477 "frame/parser.Y"
    {(yyval.integer)=Grid2d::PUBLICATION;;}
    break;

  case 595:
#line 1480 "frame/parser.Y"
    {fr->hasAmplifierCmd();;}
    break;

  case 596:
#line 1481 "frame/parser.Y"
    {fr->hasBgColorCmd();;}
    break;

  case 599:
#line 1484 "frame/parser.Y"
    {fr->hasCropCmd();;}
    break;

  case 600:
#line 1485 "frame/parser.Y"
    {fr->hasDATAMINCmd();;}
    break;

  case 601:
#line 1486 "frame/parser.Y"
    {fr->hasDATASECCmd();;}
    break;

  case 602:
#line 1487 "frame/parser.Y"
    {fr->hasDetectorCmd();;}
    break;

  case 604:
#line 1489 "frame/parser.Y"
    {fr->hasGridCmd();;}
    break;

  case 605:
#line 1490 "frame/parser.Y"
    {fr->hasIISCmd();;}
    break;

  case 606:
#line 1491 "frame/parser.Y"
    {fr->hasIRAFMINCmd();;}
    break;

  case 608:
#line 1493 "frame/parser.Y"
    {fr->hasPhysicalCmd();;}
    break;

  case 609:
#line 1494 "frame/parser.Y"
    {fr->hasImageCmd();;}
    break;

  case 610:
#line 1495 "frame/parser.Y"
    {fr->hasSmoothCmd();;}
    break;

  case 611:
#line 1496 "frame/parser.Y"
    {fr->hasSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 613:
#line 1500 "frame/parser.Y"
    {fr->hasBinColCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 614:
#line 1503 "frame/parser.Y"
    {fr->hasContourCmd();;}
    break;

  case 615:
#line 1504 "frame/parser.Y"
    {fr->hasContourAuxCmd();;}
    break;

  case 616:
#line 1507 "frame/parser.Y"
    {fr->hasFitsCmd();;}
    break;

  case 617:
#line 1508 "frame/parser.Y"
    {fr->hasFitsBinCmd();;}
    break;

  case 618:
#line 1509 "frame/parser.Y"
    {fr->hasFitsCubeCmd();;}
    break;

  case 619:
#line 1510 "frame/parser.Y"
    {fr->hasFitsMosaicCmd();;}
    break;

  case 620:
#line 1513 "frame/parser.Y"
    {fr->hasMarkerHighlitedCmd();;}
    break;

  case 621:
#line 1514 "frame/parser.Y"
    {fr->hasMarkerSelectedCmd();;}
    break;

  case 622:
#line 1515 "frame/parser.Y"
    {fr->hasMarkerPasteCmd();;}
    break;

  case 623:
#line 1516 "frame/parser.Y"
    {fr->hasMarkerUndoCmd();;}
    break;

  case 624:
#line 1519 "frame/parser.Y"
    {fr->hasWCSCmd((Coord::CoordSystem)(yyvsp[(1) - (1)].integer));;}
    break;

  case 625:
#line 1520 "frame/parser.Y"
    {fr->hasWCSCelCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 626:
#line 1521 "frame/parser.Y"
    {fr->hasWCSEquCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 627:
#line 1522 "frame/parser.Y"
    {fr->hasWCSLinearCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 628:
#line 1523 "frame/parser.Y"
    {fr->hasWCSAltCmd();;}
    break;

  case 629:
#line 1524 "frame/parser.Y"
    {fr->hasWCS3DCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 630:
#line 1527 "frame/parser.Y"
    {fr->iisCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 631:
#line 1528 "frame/parser.Y"
    {fr->iisEraseCmd();;}
    break;

  case 632:
#line 1529 "frame/parser.Y"
    {fr->iisMessageCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 635:
#line 1533 "frame/parser.Y"
    {fr->iisSetCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 636:
#line 1534 "frame/parser.Y"
    {fr->iisUpdateCmd();;}
    break;

  case 637:
#line 1537 "frame/parser.Y"
    {fr->iisWCSCmd(Matrix((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real),(yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].real),(yyvsp[(7) - (10)].real)),Vector((yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].real)),(yyvsp[(10) - (10)].integer));;}
    break;

  case 638:
#line 1540 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (1)].str));;}
    break;

  case 639:
#line 1541 "frame/parser.Y"
    {fr->iisSetFileNameCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].integer));;}
    break;

  case 640:
#line 1545 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),Coord::CANVAS);;}
    break;

  case 641:
#line 1547 "frame/parser.Y"
    {fr->iisSetCursorCmd(Vector((yyvsp[(1) - (3)].integer),(yyvsp[(2) - (3)].integer)),(Coord::CoordSystem)(yyvsp[(3) - (3)].integer));;}
    break;

  case 642:
#line 1548 "frame/parser.Y"
    {fr->iisCursorModeCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 649:
#line 1560 "frame/parser.Y"
    {fr->loadArrAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 650:
#line 1562 "frame/parser.Y"
    {fr->loadArrAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 651:
#line 1564 "frame/parser.Y"
    {fr->loadArrChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 652:
#line 1565 "frame/parser.Y"
    {fr->loadArrMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 653:
#line 1567 "frame/parser.Y"
    {fr->loadArrMMapIncrCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 654:
#line 1569 "frame/parser.Y"
    {fr->loadArrShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 655:
#line 1571 "frame/parser.Y"
    {fr->loadArrSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 656:
#line 1573 "frame/parser.Y"
    {fr->loadArrSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 657:
#line 1575 "frame/parser.Y"
    {fr->loadArrVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 661:
#line 1581 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 662:
#line 1582 "frame/parser.Y"
    {fr->loadRGBArrayCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 663:
#line 1583 "frame/parser.Y"
    {fr->loadRGBArrayCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 664:
#line 1584 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 665:
#line 1585 "frame/parser.Y"
    {fr->loadRGBArrayCubeMMapIncrCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 666:
#line 1587 "frame/parser.Y"
    {fr->loadRGBArrayCubeShareCmd((Base::ShmType)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 667:
#line 1588 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 668:
#line 1589 "frame/parser.Y"
    {fr->loadRGBArrayCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 669:
#line 1590 "frame/parser.Y"
    {fr->loadRGBArrayCubeVarCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 670:
#line 1593 "frame/parser.Y"
    {fr->loadENVISMMapCmd((yyvsp[(1) - (3)].str),(yyvsp[(2) - (3)].str));;}
    break;

  case 671:
#line 1597 "frame/parser.Y"
    {fr->loadFitsAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 672:
#line 1599 "frame/parser.Y"
    {fr->loadFitsAllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 673:
#line 1601 "frame/parser.Y"
    {fr->loadFitsChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 674:
#line 1603 "frame/parser.Y"
    {fr->loadFitsMMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 675:
#line 1605 "frame/parser.Y"
    {fr->loadFitsSMMapCmd((yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 676:
#line 1607 "frame/parser.Y"
    {fr->loadFitsMMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 677:
#line 1609 "frame/parser.Y"
    {fr->loadFitsShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 678:
#line 1611 "frame/parser.Y"
    {fr->loadFitsSShareCmd((Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str),
	  (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 679:
#line 1614 "frame/parser.Y"
    {fr->loadFitsSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 680:
#line 1616 "frame/parser.Y"
    {fr->loadFitsSocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 681:
#line 1618 "frame/parser.Y"
    {fr->loadFitsVarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 691:
#line 1630 "frame/parser.Y"
    {fr->loadSliceAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 692:
#line 1631 "frame/parser.Y"
    {fr->loadSliceAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 693:
#line 1632 "frame/parser.Y"
    {fr->loadSliceChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 694:
#line 1633 "frame/parser.Y"
    {fr->loadSliceMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 695:
#line 1634 "frame/parser.Y"
    {fr->loadSliceSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 696:
#line 1635 "frame/parser.Y"
    {fr->loadSliceMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 697:
#line 1637 "frame/parser.Y"
    {fr->loadSliceShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 698:
#line 1639 "frame/parser.Y"
    {fr->loadSliceSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 699:
#line 1640 "frame/parser.Y"
    {fr->loadSliceSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 700:
#line 1641 "frame/parser.Y"
    {fr->loadSliceSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 701:
#line 1642 "frame/parser.Y"
    {fr->loadSliceVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 702:
#line 1645 "frame/parser.Y"
    {fr->loadExtCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 703:
#line 1646 "frame/parser.Y"
    {fr->loadExtCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 704:
#line 1647 "frame/parser.Y"
    {fr->loadExtCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 705:
#line 1648 "frame/parser.Y"
    {fr->loadExtCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 706:
#line 1649 "frame/parser.Y"
    {fr->loadExtCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 707:
#line 1651 "frame/parser.Y"
    {fr->loadExtCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 708:
#line 1652 "frame/parser.Y"
    {fr->loadExtCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 709:
#line 1653 "frame/parser.Y"
    {fr->loadExtCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 710:
#line 1654 "frame/parser.Y"
    {fr->loadExtCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 716:
#line 1665 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 717:
#line 1668 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 718:
#line 1671 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str),(Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 719:
#line 1674 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 720:
#line 1677 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 721:
#line 1680 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 722:
#line 1683 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 723:
#line 1686 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 724:
#line 1689 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 725:
#line 1694 "frame/parser.Y"
    {fr->loadMosaicAllocCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 726:
#line 1697 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 727:
#line 1700 "frame/parser.Y"
    {fr->loadMosaicChannelCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 728:
#line 1703 "frame/parser.Y"
    {fr->loadMosaicMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 729:
#line 1706 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 730:
#line 1709 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 731:
#line 1712 "frame/parser.Y"
    {fr->loadMosaicShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 732:
#line 1715 "frame/parser.Y"
    {fr->loadMosaicSShareCmd(Base::IRAF, Coord::WCS,
	    (Base::ShmType)(yyvsp[(3) - (7)].integer), (yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(1) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 733:
#line 1718 "frame/parser.Y"
    {fr->loadMosaicSocketCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 734:
#line 1721 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 735:
#line 1724 "frame/parser.Y"
    {fr->loadMosaicVarCmd(Base::IRAF, Coord::WCS,
	    (yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 736:
#line 1729 "frame/parser.Y"
    {fr->loadMosaicImageAllocCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 737:
#line 1732 "frame/parser.Y"
    {fr->loadMosaicImageAllocGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 738:
#line 1735 "frame/parser.Y"
    {fr->loadMosaicImageChannelCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 739:
#line 1738 "frame/parser.Y"
    {fr->loadMosaicImageMMapCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 740:
#line 1741 "frame/parser.Y"
    {fr->loadMosaicImageMMapIncrCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 741:
#line 1744 "frame/parser.Y"
    {fr->loadMosaicImageShareCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 742:
#line 1747 "frame/parser.Y"
    {fr->loadMosaicImageSocketCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 743:
#line 1750 "frame/parser.Y"
    {fr->loadMosaicImageSocketGZCmd(Base::WCSMOSAIC,
	    (Coord::CoordSystem)(yyvsp[(1) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 744:
#line 1753 "frame/parser.Y"
    {fr->loadMosaicImageVarCmd(Base::WCSMOSAIC, (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 745:
#line 1758 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 746:
#line 1760 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2AllocGZCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 747:
#line 1762 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2ChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 748:
#line 1764 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 749:
#line 1766 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2MMapIncrCmd((yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 750:
#line 1768 "frame/parser.Y"
    {
	  fr->loadMosaicImageWFPC2ShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(1) - (6)].str),
					   (Base::LayerType)(yyvsp[(6) - (6)].integer));
        ;}
    break;

  case 751:
#line 1773 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 752:
#line 1775 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2SocketGZCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 753:
#line 1777 "frame/parser.Y"
    {fr->loadMosaicImageWFPC2VarCmd((yyvsp[(3) - (5)].str), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 754:
#line 1781 "frame/parser.Y"
    {fr->loadMosaicAllocCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 755:
#line 1784 "frame/parser.Y"
    {fr->loadMosaicAllocGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 756:
#line 1787 "frame/parser.Y"
    {fr->loadMosaicChannelCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].str), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 757:
#line 1790 "frame/parser.Y"
    {fr->loadMosaicMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 758:
#line 1793 "frame/parser.Y"
    {fr->loadMosaicSMMapCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(2) - (6)].str), (yyvsp[(3) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 759:
#line 1796 "frame/parser.Y"
    {fr->loadMosaicMMapIncrCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 760:
#line 1799 "frame/parser.Y"
    {fr->loadMosaicShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (7)].integer),
	    (Base::ShmType)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), (yyvsp[(2) - (7)].str), (Base::LayerType)(yyvsp[(7) - (7)].integer));;}
    break;

  case 761:
#line 1802 "frame/parser.Y"
    {fr->loadMosaicSShareCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (8)].integer),
	    (Base::ShmType)(yyvsp[(4) - (8)].integer), (yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), (yyvsp[(2) - (8)].str), (Base::LayerType)(yyvsp[(8) - (8)].integer));;}
    break;

  case 762:
#line 1805 "frame/parser.Y"
    {fr->loadMosaicSocketCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 763:
#line 1808 "frame/parser.Y"
    {fr->loadMosaicSocketGZCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (5)].integer),
	    (yyvsp[(4) - (5)].integer), (yyvsp[(2) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 764:
#line 1811 "frame/parser.Y"
    {fr->loadMosaicVarCmd((Base::WCSMOSAIC), (Coord::CoordSystem)(yyvsp[(1) - (6)].integer),
	    (yyvsp[(4) - (6)].str), (yyvsp[(2) - (6)].str), (Base::LayerType)(yyvsp[(6) - (6)].integer));;}
    break;

  case 765:
#line 1815 "frame/parser.Y"
    {fr->loadRGBCubeAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 766:
#line 1816 "frame/parser.Y"
    {fr->loadRGBCubeAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 767:
#line 1817 "frame/parser.Y"
    {fr->loadRGBCubeChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 768:
#line 1818 "frame/parser.Y"
    {fr->loadRGBCubeMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 769:
#line 1819 "frame/parser.Y"
    {fr->loadRGBCubeSMMapCmd((yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str));;}
    break;

  case 770:
#line 1820 "frame/parser.Y"
    {fr->loadRGBCubeMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 771:
#line 1822 "frame/parser.Y"
    {fr->loadRGBCubeShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 772:
#line 1824 "frame/parser.Y"
    {fr->loadRGBCubeSShareCmd((Base::ShmType)(yyvsp[(3) - (6)].integer), (yyvsp[(4) - (6)].integer), (yyvsp[(5) - (6)].integer), (yyvsp[(1) - (6)].str));;}
    break;

  case 773:
#line 1825 "frame/parser.Y"
    {fr->loadRGBCubeSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 774:
#line 1826 "frame/parser.Y"
    {fr->loadRGBCubeSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 775:
#line 1827 "frame/parser.Y"
    {fr->loadRGBCubeVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 776:
#line 1830 "frame/parser.Y"
    {fr->loadRGBImageAllocCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 777:
#line 1831 "frame/parser.Y"
    {fr->loadRGBImageAllocGZCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 778:
#line 1832 "frame/parser.Y"
    {fr->loadRGBImageChannelCmd((yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].str));;}
    break;

  case 779:
#line 1833 "frame/parser.Y"
    {fr->loadRGBImageMMapCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 780:
#line 1834 "frame/parser.Y"
    {fr->loadRGBImageMMapIncrCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 781:
#line 1836 "frame/parser.Y"
    {fr->loadRGBImageShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str));;}
    break;

  case 782:
#line 1837 "frame/parser.Y"
    {fr->loadRGBImageSocketCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 783:
#line 1838 "frame/parser.Y"
    {fr->loadRGBImageSocketGZCmd((yyvsp[(3) - (3)].integer), (yyvsp[(1) - (3)].str));;}
    break;

  case 784:
#line 1839 "frame/parser.Y"
    {fr->loadRGBImageVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str));;}
    break;

  case 785:
#line 1843 "frame/parser.Y"
    {fr->loadNRRDAllocCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 786:
#line 1845 "frame/parser.Y"
    {fr->loadNRRDChannelCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 787:
#line 1846 "frame/parser.Y"
    {fr->loadNRRDMMapCmd((yyvsp[(1) - (3)].str), (Base::LayerType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 788:
#line 1848 "frame/parser.Y"
    {fr->loadNRRDShareCmd((Base::ShmType)(yyvsp[(3) - (5)].integer), (yyvsp[(4) - (5)].integer), (yyvsp[(1) - (5)].str), (Base::LayerType)(yyvsp[(5) - (5)].integer));;}
    break;

  case 789:
#line 1850 "frame/parser.Y"
    {fr->loadNRRDSocketCmd((yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 790:
#line 1852 "frame/parser.Y"
    {fr->loadNRRDVarCmd((yyvsp[(3) - (4)].str), (yyvsp[(1) - (4)].str), (Base::LayerType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 791:
#line 1855 "frame/parser.Y"
    {fr->loadPhotoCmd((yyvsp[(1) - (2)].str),(yyvsp[(2) - (2)].str));;}
    break;

  case 792:
#line 1856 "frame/parser.Y"
    {fr->loadSlicePhotoCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 793:
#line 1859 "frame/parser.Y"
    {fr->loadIncrDataCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 794:
#line 1860 "frame/parser.Y"
    {fr->loadIncrMinMaxCmd((yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));;}
    break;

  case 795:
#line 1861 "frame/parser.Y"
    {fr->loadIncrEndCmd();;}
    break;

  case 796:
#line 1864 "frame/parser.Y"
    {;}
    break;

  case 797:
#line 1867 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 798:
#line 1868 "frame/parser.Y"
    {fr->magnifierGraphicsCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 799:
#line 1869 "frame/parser.Y"
    {fr->magnifierCursorCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 800:
#line 1870 "frame/parser.Y"
    {fr->magnifierColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 801:
#line 1871 "frame/parser.Y"
    {fr->magnifierCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 802:
#line 1872 "frame/parser.Y"
    {fr->updateMagnifierCmd(Vector((yyvsp[(2) - (3)].real), (yyvsp[(3) - (3)].real)));;}
    break;

  case 803:
#line 1873 "frame/parser.Y"
    {fr->magnifierZoomCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 804:
#line 1877 "frame/parser.Y"
    {
	  fr->matchCmd((yyvsp[(1) - (12)].str),(yyvsp[(2) - (12)].str),(Coord::CoordSystem)(yyvsp[(3) - (12)].integer),(Coord::SkyFrame)(yyvsp[(4) - (12)].integer),
		       (yyvsp[(5) - (12)].str),(yyvsp[(6) - (12)].str),(Coord::CoordSystem)(yyvsp[(7) - (12)].integer),(Coord::SkyFrame)(yyvsp[(8) - (12)].integer),
		       (yyvsp[(9) - (12)].real),(Coord::CoordSystem)(yyvsp[(10) - (12)].integer),(Coord::DistFormat)(yyvsp[(11) - (12)].integer),
		       (yyvsp[(12) - (12)].str));
	;}
    break;

  case 806:
#line 1885 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 807:
#line 1886 "frame/parser.Y"
    {fr->markerCopyCmd();;}
    break;

  case 808:
#line 1888 "frame/parser.Y"
    {fr->markerCommandCmd((Base::MarkerFormat)(yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 809:
#line 1890 "frame/parser.Y"
    {fr->markerCommandVarCmd((Base::MarkerFormat)(yyvsp[(2) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 810:
#line 1891 "frame/parser.Y"
    {fr->markerCompositeDeleteCmd();;}
    break;

  case 811:
#line 1892 "frame/parser.Y"
    {maperr =0;;}
    break;

  case 813:
#line 1893 "frame/parser.Y"
    {fr->markerCutCmd();;}
    break;

  case 816:
#line 1896 "frame/parser.Y"
    {fr->markerEpsilonCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 817:
#line 1897 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 818:
#line 1899 "frame/parser.Y"
    {fr->markerHighliteAllCmd();;}
    break;

  case 819:
#line 1901 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 820:
#line 1903 "frame/parser.Y"
    {fr->markerHighliteToggleCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 821:
#line 1906 "frame/parser.Y"
    {fr->markerAnalysisCmd((yyvsp[(1) - (4)].integer), (Marker::AnalysisTask)(yyvsp[(3) - (4)].integer), (yyvsp[(4) - (4)].integer));;}
    break;

  case 822:
#line 1908 "frame/parser.Y"
    {fr->regionStatsCallbackCmd((yyvsp[(4) - (4)].str));;}
    break;

  case 823:
#line 1910 "frame/parser.Y"
    {fr->regionStatsCallbackCmd(NULL);;}
    break;

  case 824:
#line 1912 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 825:
#line 1913 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].real));;}
    break;

  case 826:
#line 1915 "frame/parser.Y"
    {fr->markerAngleCmd((yyvsp[(1) - (5)].integer),(yyvsp[(3) - (5)].real),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 827:
#line 1918 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (8)].integer), (yyvsp[(4) - (8)].real), (yyvsp[(5) - (8)].real), (yyvsp[(6) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(7) - (8)].integer), (Coord::DistFormat)(yyvsp[(8) - (8)].integer));;}
    break;

  case 828:
#line 1921 "frame/parser.Y"
    {fr->markerAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 829:
#line 1925 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real), (yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 830:
#line 1928 "frame/parser.Y"
    {fr->markerBoxAnnulusRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 831:
#line 1931 "frame/parser.Y"
    {fr->markerBoxRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 832:
#line 1934 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 833:
#line 1938 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 834:
#line 1942 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 835:
#line 1947 "frame/parser.Y"
    {fr->markerBpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 836:
#line 1951 "frame/parser.Y"
    {fr->markerCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 837:
#line 1953 "frame/parser.Y"
    {fr->markerCircleRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real), (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 838:
#line 1954 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 839:
#line 1956 "frame/parser.Y"
    {fr->markerCompassArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 840:
#line 1958 "frame/parser.Y"
    {fr->markerCompassLabelCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str));;}
    break;

  case 841:
#line 1960 "frame/parser.Y"
    {fr->markerCompassRadiusCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].real),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 842:
#line 1962 "frame/parser.Y"
    {fr->markerCompassSystemCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 843:
#line 1963 "frame/parser.Y"
    {fr->markerCompositeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 844:
#line 1964 "frame/parser.Y"
    {fr->markerCompositeAreaCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 845:
#line 1966 "frame/parser.Y"
    {fr->markerCompositeOperationCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 846:
#line 1968 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].real), (yyvsp[(5) - (9)].real), (yyvsp[(6) - (9)].integer), (yyvsp[(7) - (9)].real), (yyvsp[(8) - (9)].real), (yyvsp[(9) - (9)].integer));;}
    break;

  case 847:
#line 1970 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer), (yyvsp[(7) - (10)].real), (yyvsp[(8) - (10)].real), (yyvsp[(9) - (10)].integer));;}
    break;

  case 848:
#line 1973 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer), (yyvsp[(7) - (11)].real), (yyvsp[(8) - (11)].real), (yyvsp[(9) - (11)].integer),
	    (Coord::CoordSystem)(yyvsp[(10) - (11)].integer), (Coord::SkyFrame)(yyvsp[(11) - (11)].integer));;}
    break;

  case 849:
#line 1977 "frame/parser.Y"
    {fr->markerCpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str), (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 850:
#line 1981 "frame/parser.Y"
    {fr->markerAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 851:
#line 1983 "frame/parser.Y"
    {fr->markerBoxAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 852:
#line 1985 "frame/parser.Y"
    {fr->markerBpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 853:
#line 1987 "frame/parser.Y"
    {fr->markerBpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 854:
#line 1989 "frame/parser.Y"
    {fr->markerEllipseAnnulusCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 855:
#line 1991 "frame/parser.Y"
    {fr->markerEpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 856:
#line 1993 "frame/parser.Y"
    {fr->markerEpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 857:
#line 1995 "frame/parser.Y"
    {fr->markerCpandaCreateAnglesCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 858:
#line 1997 "frame/parser.Y"
    {fr->markerCpandaCreateRadiusCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 859:
#line 1999 "frame/parser.Y"
    {fr->markerPolygonCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 860:
#line 2001 "frame/parser.Y"
    {fr->markerSegmentCreateVertexCmd((yyvsp[(1) - (7)].integer),(yyvsp[(5) - (7)].integer),Vector((yyvsp[(6) - (7)].real),(yyvsp[(7) - (7)].real)));;}
    break;

  case 861:
#line 2003 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 862:
#line 2005 "frame/parser.Y"
    {fr->markerAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 863:
#line 2007 "frame/parser.Y"
    {fr->markerBoxAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 864:
#line 2008 "frame/parser.Y"
    {fr->markerBpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 865:
#line 2010 "frame/parser.Y"
    {fr->markerEllipseAnnulusDeleteRadiusCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 866:
#line 2012 "frame/parser.Y"
    {fr->markerDeleteCallBackCmd((yyvsp[(1) - (5)].integer),(CallBack::Type)(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].str));;}
    break;

  case 867:
#line 2013 "frame/parser.Y"
    {fr->markerEpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 868:
#line 2014 "frame/parser.Y"
    {fr->markerCpandaDeleteCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 869:
#line 2016 "frame/parser.Y"
    {fr->markerPolygonDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 870:
#line 2018 "frame/parser.Y"
    {fr->markerSegmentDeleteVertexCmd((yyvsp[(1) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 871:
#line 2019 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 872:
#line 2020 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].str));;}
    break;

  case 873:
#line 2021 "frame/parser.Y"
    {fr->markerDeleteTagCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 874:
#line 2023 "frame/parser.Y"
    {fr->markerEditBeginCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 875:
#line 2025 "frame/parser.Y"
    {fr->markerEllipseRadiusCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real), (yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 876:
#line 2029 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(5) - (9)].real)/(yyvsp[(4) - (9)].real)), (yyvsp[(7) - (9)].integer), (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 877:
#line 2032 "frame/parser.Y"
    {fr->markerEllipseAnnulusRadiusCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 878:
#line 2035 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (10)].integer), (yyvsp[(4) - (10)].real), (yyvsp[(5) - (10)].real), (yyvsp[(6) - (10)].integer),
	    Vector((yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real)), Vector((yyvsp[(9) - (10)].real),(yyvsp[(9) - (10)].real)*(yyvsp[(8) - (10)].real)/(yyvsp[(7) - (10)].real)), (yyvsp[(10) - (10)].integer));;}
    break;

  case 879:
#line 2039 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (11)].integer), (yyvsp[(4) - (11)].real), (yyvsp[(5) - (11)].real), (yyvsp[(6) - (11)].integer),
	    Vector((yyvsp[(7) - (11)].real),(yyvsp[(8) - (11)].real)), Vector((yyvsp[(9) - (11)].real),(yyvsp[(9) - (11)].real)*(yyvsp[(8) - (11)].real)/(yyvsp[(7) - (11)].real)), (yyvsp[(10) - (11)].integer));;}
    break;

  case 880:
#line 2043 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (12)].integer), (yyvsp[(4) - (12)].real), (yyvsp[(5) - (12)].real), (yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)), Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(8) - (12)].real)/(yyvsp[(7) - (12)].real)), (yyvsp[(10) - (12)].integer),
	    (Coord::CoordSystem)(yyvsp[(11) - (12)].integer), (Coord::SkyFrame)(yyvsp[(12) - (12)].integer));;}
    break;

  case 881:
#line 2048 "frame/parser.Y"
    {fr->markerEpandaEditCmd((yyvsp[(1) - (9)].integer), (yyvsp[(4) - (9)].str), (yyvsp[(5) - (9)].str),
	    (Coord::CoordSystem)(yyvsp[(6) - (9)].integer), (Coord::SkyFrame)(yyvsp[(7) - (9)].integer),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 882:
#line 2052 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 883:
#line 2053 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 884:
#line 2054 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 885:
#line 2056 "frame/parser.Y"
    {fr->markerLineArrowCmd((yyvsp[(1) - (5)].integer),(yyvsp[(4) - (5)].integer),(yyvsp[(5) - (5)].integer));;}
    break;

  case 886:
#line 2058 "frame/parser.Y"
    {fr->markerLineCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 887:
#line 2062 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].integer), Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 888:
#line 2063 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 889:
#line 2064 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 890:
#line 2066 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].integer),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 891:
#line 2069 "frame/parser.Y"
    {fr->markerPolygonPointCmd((yyvsp[(1) - (7)].integer),(yyvsp[(7) - (7)].str),(Coord::CoordSystem)(yyvsp[(4) - (7)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),(Coord::SkyFormat)(yyvsp[(6) - (7)].integer));;}
    break;

  case 892:
#line 2072 "frame/parser.Y"
    {fr->markerPolygonPointVarCmd((yyvsp[(1) - (8)].integer),(yyvsp[(8) - (8)].str),(Coord::CoordSystem)(yyvsp[(4) - (8)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (8)].integer),(Coord::SkyFormat)(yyvsp[(6) - (8)].integer));;}
    break;

  case 893:
#line 2075 "frame/parser.Y"
    {fr->markerPolygonResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 894:
#line 2078 "frame/parser.Y"
    {fr->markerSegmentResetCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 895:
#line 2081 "frame/parser.Y"
    {fr->markerPointShapeCmd((yyvsp[(1) - (4)].integer),(Point::PointShape)(yyvsp[(4) - (4)].integer));;}
    break;

  case 896:
#line 2082 "frame/parser.Y"
    {fr->markerPointSizeCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 897:
#line 2086 "frame/parser.Y"
    {fr->markerProjectionCmd((yyvsp[(1) - (9)].integer), Vector((yyvsp[(5) - (9)].vector)), Vector((yyvsp[(6) - (9)].vector)),
	    (Coord::CoordSystem)(yyvsp[(3) - (9)].integer), (Coord::SkyFrame)(yyvsp[(4) - (9)].integer), (yyvsp[(7) - (9)].real),
	    (Coord::CoordSystem)(yyvsp[(8) - (9)].integer), (Coord::DistFormat)(yyvsp[(9) - (9)].integer));;}
    break;

  case 898:
#line 2090 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 899:
#line 2092 "frame/parser.Y"
    {fr->markerRotateBeginCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 900:
#line 2093 "frame/parser.Y"
    {fr->markerRulerDistSpecCmd((yyvsp[(1) - (4)].integer), (yyvsp[(4) - (4)].str));;}
    break;

  case 901:
#line 2095 "frame/parser.Y"
    {fr->markerRulerPointCmd((yyvsp[(1) - (7)].integer), Vector((yyvsp[(6) - (7)].vector)), Vector((yyvsp[(7) - (7)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer));;}
    break;

  case 902:
#line 2098 "frame/parser.Y"
    {fr->markerRulerSystemCmd((yyvsp[(1) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Coord::DistFormat)(yyvsp[(7) - (7)].integer));;}
    break;

  case 903:
#line 2101 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 904:
#line 2102 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 905:
#line 2104 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 906:
#line 2105 "frame/parser.Y"
    {fr->markerTextCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 907:
#line 2106 "frame/parser.Y"
    {fr->markerTextRotateCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 908:
#line 2108 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 909:
#line 2109 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 910:
#line 2111 "frame/parser.Y"
    {fr->markerVectorArrowCmd((yyvsp[(1) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 911:
#line 2114 "frame/parser.Y"
    {fr->markerVectorCmd((yyvsp[(1) - (10)].integer), Vector((yyvsp[(6) - (10)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (10)].integer), (Coord::SkyFrame)(yyvsp[(5) - (10)].integer),
	    (yyvsp[(9) - (10)].real), (Coord::CoordSystem)(yyvsp[(7) - (10)].integer), (Coord::DistFormat)(yyvsp[(8) - (10)].integer), (yyvsp[(10) - (10)].real));;}
    break;

  case 912:
#line 2117 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 913:
#line 2118 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(1) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 914:
#line 2120 "frame/parser.Y"
    {fr->markerKeyCmd();;}
    break;

  case 915:
#line 2121 "frame/parser.Y"
    {fr->markerKeyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 919:
#line 2126 "frame/parser.Y"
    {fr->markerPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 920:
#line 2127 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 921:
#line 2129 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(2) - (5)].integer),(yyvsp[(3) - (5)].integer),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 922:
#line 2131 "frame/parser.Y"
    {fr->markerRotateBeginCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 923:
#line 2133 "frame/parser.Y"
    {fr->markerRotateMotionCmd(Vector((yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real)),(yyvsp[(5) - (5)].integer));;}
    break;

  case 924:
#line 2134 "frame/parser.Y"
    {fr->markerRotateEndCmd();;}
    break;

  case 928:
#line 2140 "frame/parser.Y"
    {fr->markerColorCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 929:
#line 2141 "frame/parser.Y"
    {fr->markerCopyCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 930:
#line 2142 "frame/parser.Y"
    {fr->markerDeleteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 931:
#line 2143 "frame/parser.Y"
    {fr->markerCutCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 932:
#line 2144 "frame/parser.Y"
    {fr->markerFontCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].str));;}
    break;

  case 933:
#line 2145 "frame/parser.Y"
    {fr->markerHighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 934:
#line 2146 "frame/parser.Y"
    {fr->markerHighliteOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 935:
#line 2147 "frame/parser.Y"
    {fr->markerMoveCmd((yyvsp[(1) - (4)].str),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 936:
#line 2148 "frame/parser.Y"
    {fr->markerFrontCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 937:
#line 2149 "frame/parser.Y"
    {fr->markerBackCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 938:
#line 2151 "frame/parser.Y"
    {fr->markerMoveToCmd((yyvsp[(1) - (6)].str),Vector((yyvsp[(6) - (6)].vector)),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 939:
#line 2153 "frame/parser.Y"
    {fr->markerPropertyCmd((yyvsp[(1) - (4)].str),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 940:
#line 2154 "frame/parser.Y"
    {fr->markerSelectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 941:
#line 2155 "frame/parser.Y"
    {fr->markerSelectOnlyCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 942:
#line 2156 "frame/parser.Y"
    {fr->markerUnhighliteCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 943:
#line 2157 "frame/parser.Y"
    {fr->markerUnselectCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 944:
#line 2159 "frame/parser.Y"
    {fr->markerTagEditCmd((yyvsp[(3) - (4)].str),(yyvsp[(4) - (4)].str));;}
    break;

  case 945:
#line 2160 "frame/parser.Y"
    {fr->markerTagDeleteCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 946:
#line 2161 "frame/parser.Y"
    {fr->markerTagDeleteAllCmd();;}
    break;

  case 947:
#line 2162 "frame/parser.Y"
    {fr->markerTagCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 948:
#line 2163 "frame/parser.Y"
    {fr->markerTagUpdateCmd((yyvsp[(3) - (3)].str));;}
    break;

  case 949:
#line 2165 "frame/parser.Y"
    {fr->markerPasteCmd();;}
    break;

  case 950:
#line 2166 "frame/parser.Y"
    {fr->markerPasteCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 951:
#line 2167 "frame/parser.Y"
    {fr->markerUndoCmd();;}
    break;

  case 952:
#line 2168 "frame/parser.Y"
    {fr->markerUnhighliteAllCmd();;}
    break;

  case 953:
#line 2169 "frame/parser.Y"
    {fr->markerUnselectAllCmd();;}
    break;

  case 954:
#line 2170 "frame/parser.Y"
    {fr->markerLineWidthCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 955:
#line 2171 "frame/parser.Y"
    {fr->markerDashListCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 956:
#line 2174 "frame/parser.Y"
    {(yyval.integer) = CallBack::SELECTCB;;}
    break;

  case 957:
#line 2175 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNSELECTCB;;}
    break;

  case 958:
#line 2176 "frame/parser.Y"
    {(yyval.integer) = CallBack::HIGHLITECB;;}
    break;

  case 959:
#line 2177 "frame/parser.Y"
    {(yyval.integer) = CallBack::UNHIGHLITECB;;}
    break;

  case 960:
#line 2178 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEBEGINCB;;}
    break;

  case 961:
#line 2179 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVECB;;}
    break;

  case 962:
#line 2180 "frame/parser.Y"
    {(yyval.integer) = CallBack::MOVEENDCB;;}
    break;

  case 963:
#line 2181 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITBEGINCB;;}
    break;

  case 964:
#line 2182 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITCB;;}
    break;

  case 965:
#line 2183 "frame/parser.Y"
    {(yyval.integer) = CallBack::EDITENDCB;;}
    break;

  case 966:
#line 2184 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEBEGINCB;;}
    break;

  case 967:
#line 2185 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATECB;;}
    break;

  case 968:
#line 2186 "frame/parser.Y"
    {(yyval.integer) = CallBack::ROTATEENDCB;;}
    break;

  case 969:
#line 2187 "frame/parser.Y"
    {(yyval.integer) = CallBack::DELETECB;;}
    break;

  case 970:
#line 2188 "frame/parser.Y"
    {(yyval.integer) = CallBack::TEXTCB;;}
    break;

  case 971:
#line 2189 "frame/parser.Y"
    {(yyval.integer) = CallBack::COLORCB;;}
    break;

  case 972:
#line 2190 "frame/parser.Y"
    {(yyval.integer) = CallBack::LINEWIDTHCB;;}
    break;

  case 973:
#line 2191 "frame/parser.Y"
    {(yyval.integer) = CallBack::PROPERTYCB;;}
    break;

  case 974:
#line 2192 "frame/parser.Y"
    {(yyval.integer) = CallBack::FONTCB;;}
    break;

  case 975:
#line 2193 "frame/parser.Y"
    {(yyval.integer) = CallBack::KEYCB;;}
    break;

  case 976:
#line 2194 "frame/parser.Y"
    {(yyval.integer) = CallBack::UPDATECB;;}
    break;

  case 977:
#line 2197 "frame/parser.Y"
    {fr->markerCentroidCmd();;}
    break;

  case 978:
#line 2198 "frame/parser.Y"
    {fr->markerCentroidCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 979:
#line 2199 "frame/parser.Y"
    {fr->markerCentroidAutoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 980:
#line 2200 "frame/parser.Y"
    {fr->markerCentroidRadiusCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 981:
#line 2201 "frame/parser.Y"
    {fr->markerCentroidIterationCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 982:
#line 2203 "frame/parser.Y"
    {
	  fr->markerCentroidIterationCmd((yyvsp[(2) - (3)].integer));
	  fr->markerCentroidRadiusCmd((yyvsp[(3) - (3)].real));
	;}
    break;

  case 983:
#line 2213 "frame/parser.Y"
    {fr->createCircleCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 984:
#line 2221 "frame/parser.Y"
    {fr->createEllipseCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 985:
#line 2230 "frame/parser.Y"
    {fr->createBoxCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),
            (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 986:
#line 2238 "frame/parser.Y"
    {fr->createPolygonCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
            Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 987:
#line 2245 "frame/parser.Y"
    {fr->createSegmentCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 988:
#line 2252 "frame/parser.Y"
    {fr->createLineCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    0, 0,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 989:
#line 2260 "frame/parser.Y"
    {fr->createVectCmd(fr->mapToRef(Vector((yyvsp[(2) - (6)].real),(yyvsp[(3) - (6)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real)),Coord::CANVAS),
	    1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 990:
#line 2268 "frame/parser.Y"
    {fr->createTextCmd(fr->mapToRef(Vector((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (5)].real), 1,
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 991:
#line 2273 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 992:
#line 2278 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 993:
#line 2283 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::DIAMOND, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 994:
#line 2288 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::CROSS, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 995:
#line 2293 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::EX, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 996:
#line 2298 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::ARROW, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 997:
#line 2303 "frame/parser.Y"
    {fr->createPointCmd(fr->mapToRef(Vector((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real)),Coord::CANVAS),
	    Point::BOXCIRCLE, (yyvsp[(5) - (6)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 998:
#line 2312 "frame/parser.Y"
    {fr->createRulerCmd(fr->mapToRef(Vector((yyvsp[(2) - (11)].real),(yyvsp[(3) - (11)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (11)].real),(yyvsp[(5) - (11)].real)),Coord::CANVAS),
            (Coord::CoordSystem)(yyvsp[(6) - (11)].integer), (Coord::SkyFrame)(yyvsp[(7) - (11)].integer),
            (Coord::CoordSystem)(yyvsp[(8) - (11)].integer), (Coord::DistFormat)(yyvsp[(9) - (11)].integer), (yyvsp[(10) - (11)].str),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 999:
#line 2322 "frame/parser.Y"
    {fr->createCompassCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),
	    "N", "E", 1, 1,
	    (Coord::CoordSystem)(yyvsp[(5) - (7)].integer), (Coord::SkyFrame)(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1000:
#line 2332 "frame/parser.Y"
    {fr->createProjectionCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    fr->mapToRef(Vector((yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(6) - (7)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1001:
#line 2341 "frame/parser.Y"
    {fr->createAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (7)].real),(yyvsp[(3) - (7)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (7)].real),(yyvsp[(5) - (7)].real),(yyvsp[(6) - (7)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1002:
#line 2349 "frame/parser.Y"
    {fr->createEllipseAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),
	    Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1003:
#line 2359 "frame/parser.Y"
    {fr->createBoxAnnulusCmd(fr->mapToRef(Vector((yyvsp[(2) - (9)].real),(yyvsp[(3) - (9)].real)),Coord::CANVAS),
	    Vector((yyvsp[(4) - (9)].real),(yyvsp[(5) - (9)].real)),Vector((yyvsp[(6) - (9)].real),(yyvsp[(6) - (9)].real)*(yyvsp[(4) - (9)].real)/(yyvsp[(5) - (9)].real)),(yyvsp[(7) - (9)].integer),
	    (yyvsp[(8) - (9)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1004:
#line 2369 "frame/parser.Y"
    {fr->createCpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (10)].real),(yyvsp[(3) - (10)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (10)].real),(yyvsp[(5) - (10)].real),(yyvsp[(6) - (10)].integer),
	    (yyvsp[(7) - (10)].real),(yyvsp[(8) - (10)].real),(yyvsp[(9) - (10)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1005:
#line 2379 "frame/parser.Y"
    {fr->createEpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1006:
#line 2391 "frame/parser.Y"
    {fr->createBpandaCmd(fr->mapToRef(Vector((yyvsp[(2) - (12)].real),(yyvsp[(3) - (12)].real)),Coord::CANVAS),
	    (yyvsp[(4) - (12)].real),(yyvsp[(5) - (12)].real),(yyvsp[(6) - (12)].integer),
	    Vector((yyvsp[(7) - (12)].real),(yyvsp[(8) - (12)].real)),
	    Vector((yyvsp[(9) - (12)].real),(yyvsp[(9) - (12)].real)*(yyvsp[(7) - (12)].real)/(yyvsp[(8) - (12)].real)),(yyvsp[(10) - (12)].integer),
	    (yyvsp[(11) - (12)].real),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1007:
#line 2400 "frame/parser.Y"
    {fr->createCompositeCmd(
	    (yyvsp[(2) - (3)].integer),
	    currentColor,currentDash,currentWidth,currentFont,
	    currentText,currentProps,NULL,taglist,cblist);;}
    break;

  case 1009:
#line 2408 "frame/parser.Y"
    {(yyval.integer)=0;;}
    break;

  case 1010:
#line 2410 "frame/parser.Y"
    {
	  if ((yyvsp[(1) - (1)].integer) < 0 || (yyvsp[(1) - (1)].integer) > 1) {
	    fr->error("composite operation must be 0 (union) or 1 (intersection)");
	    YYERROR;
	  }
	  (yyval.integer)=(yyvsp[(1) - (1)].integer);
	;}
    break;

  case 1011:
#line 2419 "frame/parser.Y"
    {fr->createTemplateCmd(fr->mapToRef(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)),Coord::CANVAS), (yyvsp[(1) - (3)].str));;}
    break;

  case 1012:
#line 2421 "frame/parser.Y"
    {fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)),Coord::CANVAS), (yyvsp[(2) - (4)].str));;}
    break;

  case 1013:
#line 2423 "frame/parser.Y"
    {
	    // backward compatibility
	    fr->createTemplateVarCmd(fr->mapToRef(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Coord::CANVAS), (yyvsp[(4) - (4)].str));
	  ;}
    break;

  case 1014:
#line 2428 "frame/parser.Y"
    {fr->createTemplateCmd(Vector((yyvsp[(4) - (4)].vector)),(Coord::CoordSystem)(yyvsp[(2) - (4)].integer),(Coord::SkyFrame)(yyvsp[(3) - (4)].integer), (yyvsp[(1) - (4)].str));;}
    break;

  case 1015:
#line 2431 "frame/parser.Y"
    {fr->markerDeleteAllCmd(0);;}
    break;

  case 1016:
#line 2432 "frame/parser.Y"
    {fr->markerDeleteAllCmd(1);;}
    break;

  case 1017:
#line 2433 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerDeleteAllCmd(0);
        ;}
    break;

  case 1018:
#line 2440 "frame/parser.Y"
    {fr->markerEditBeginCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1019:
#line 2442 "frame/parser.Y"
    {fr->markerEditMotionCmd(Vector((yyvsp[(2) - (4)].real),(yyvsp[(3) - (4)].real)),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1020:
#line 2443 "frame/parser.Y"
    {fr->markerEditEndCmd();;}
    break;

  case 1021:
#line 2446 "frame/parser.Y"
    {(yyval.integer) = Base::DS9;;}
    break;

  case 1022:
#line 2447 "frame/parser.Y"
    {(yyval.integer) = Base::XML;;}
    break;

  case 1023:
#line 2448 "frame/parser.Y"
    {(yyval.integer) = Base::CIAO;;}
    break;

  case 1024:
#line 2449 "frame/parser.Y"
    {(yyval.integer) = Base::SAOTNG;;}
    break;

  case 1025:
#line 2450 "frame/parser.Y"
    {(yyval.integer) = Base::SAOIMAGE;;}
    break;

  case 1026:
#line 2451 "frame/parser.Y"
    {(yyval.integer) = Base::PROS;;}
    break;

  case 1027:
#line 2452 "frame/parser.Y"
    {(yyval.integer) = Base::RAWXY;;}
    break;

  case 1029:
#line 2456 "frame/parser.Y"
    {fr->getMarkerColorCmd();;}
    break;

  case 1030:
#line 2457 "frame/parser.Y"
    {fr->getMarkerFontCmd();;}
    break;

  case 1031:
#line 2458 "frame/parser.Y"
    {fr->getMarkerEpsilonCmd();;}
    break;

  case 1032:
#line 2459 "frame/parser.Y"
    {fr->getMarkerHandleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1033:
#line 2460 "frame/parser.Y"
    {fr->getMarkerIdCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1034:
#line 2463 "frame/parser.Y"
    {fr->getMarkerAnalysisPandaCmd((yyvsp[(1) - (8)].integer),(yyvsp[(4) - (8)].str),(yyvsp[(5) - (8)].str),(yyvsp[(6) - (8)].str),(Coord::CoordSystem)(yyvsp[(7) - (8)].integer),(yyvsp[(8) - (8)].integer));;}
    break;

  case 1035:
#line 2465 "frame/parser.Y"
    {fr->getMarkerAnalysisHistogramCmd((yyvsp[(1) - (6)].integer),(yyvsp[(4) - (6)].str),(yyvsp[(5) - (6)].str),(yyvsp[(6) - (6)].integer));;}
    break;

  case 1036:
#line 2467 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot2dCmd((yyvsp[(1) - (10)].integer),(yyvsp[(4) - (10)].str),(yyvsp[(5) - (10)].str),(yyvsp[(6) - (10)].str),(yyvsp[(7) - (10)].str),(Coord::CoordSystem)(yyvsp[(8) - (10)].integer), (Coord::SkyFrame)(yyvsp[(9) - (10)].integer), (Marker::AnalysisMethod)(yyvsp[(10) - (10)].integer));;}
    break;

  case 1037:
#line 2469 "frame/parser.Y"
    {fr->getMarkerAnalysisPlot3dCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(Coord::CoordSystem)(yyvsp[(6) - (7)].integer), (Marker::AnalysisMethod)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1038:
#line 2471 "frame/parser.Y"
    {fr->getMarkerAnalysisRadialCmd((yyvsp[(1) - (7)].integer),(yyvsp[(4) - (7)].str),(yyvsp[(5) - (7)].str),(yyvsp[(6) - (7)].str),(Coord::CoordSystem)(yyvsp[(7) - (7)].integer));;}
    break;

  case 1039:
#line 2473 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1040:
#line 2475 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1041:
#line 2477 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsDataAllCmd((Coord::CoordSystem)(yyvsp[(5) - (6)].integer), (Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1042:
#line 2479 "frame/parser.Y"
    {fr->getMarkerAnalysisStatsFieldsCmd();;}
    break;

  case 1043:
#line 2481 "frame/parser.Y"
    {fr->getMarkerIdAllCmd();;}
    break;

  case 1044:
#line 2482 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1045:
#line 2483 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1046:
#line 2485 "frame/parser.Y"
    {fr->getMarkerAngleCmd((yyvsp[(1) - (4)].integer),(Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1047:
#line 2487 "frame/parser.Y"
    {fr->getMarkerAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1048:
#line 2490 "frame/parser.Y"
    {fr->getMarkerBoxAnnulusRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1049:
#line 2492 "frame/parser.Y"
    {fr->getMarkerBoxRadiusCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1050:
#line 2493 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1051:
#line 2494 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1052:
#line 2496 "frame/parser.Y"
    {fr->getMarkerBpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1053:
#line 2498 "frame/parser.Y"
    {fr->getMarkerBpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1054:
#line 2501 "frame/parser.Y"
    {fr->getMarkerCenterCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(3) - (5)].integer), (Coord::SkyFrame)(yyvsp[(4) - (5)].integer),
	    (Coord::SkyFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1055:
#line 2504 "frame/parser.Y"
    {fr->getMarkerCircleRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1056:
#line 2505 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1057:
#line 2506 "frame/parser.Y"
    {fr->getMarkerCompassArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1058:
#line 2507 "frame/parser.Y"
    {fr->getMarkerCompassLabelCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1059:
#line 2509 "frame/parser.Y"
    {fr->getMarkerCompassRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1060:
#line 2510 "frame/parser.Y"
    {fr->getMarkerCompassSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1061:
#line 2511 "frame/parser.Y"
    {fr->getMarkerCompositeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1062:
#line 2512 "frame/parser.Y"
    {fr->getMarkerCompositeAreaCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1063:
#line 2513 "frame/parser.Y"
    {fr->getMarkerCompositeOperationCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1064:
#line 2514 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1065:
#line 2515 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1066:
#line 2517 "frame/parser.Y"
    {fr->getMarkerCpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1067:
#line 2519 "frame/parser.Y"
    {fr->getMarkerCpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1068:
#line 2521 "frame/parser.Y"
    {fr->getMarkerEllipseRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1069:
#line 2523 "frame/parser.Y"
    {fr->getMarkerEllipseAnnulusRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1070:
#line 2525 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1071:
#line 2526 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (4)].integer));;}
    break;

  case 1072:
#line 2528 "frame/parser.Y"
    {fr->getMarkerEpandaAnglesCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::SkyFrame)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1073:
#line 2530 "frame/parser.Y"
    {fr->getMarkerEpandaRadiusCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1074:
#line 2532 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1075:
#line 2533 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1076:
#line 2534 "frame/parser.Y"
    {fr->getMarkerLineArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1077:
#line 2536 "frame/parser.Y"
    {fr->getMarkerLineLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1078:
#line 2538 "frame/parser.Y"
    {fr->getMarkerLineCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1079:
#line 2541 "frame/parser.Y"
    {fr->getMarkerMapLenFromRefCmd((yyvsp[(1) - (6)].integer), (yyvsp[(4) - (6)].real),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::DistFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1080:
#line 2544 "frame/parser.Y"
    {fr->getMarkerPointShapeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1081:
#line 2545 "frame/parser.Y"
    {fr->getMarkerPointSizeCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1082:
#line 2547 "frame/parser.Y"
    {fr->getMarkerPolygonPointCmd((yyvsp[(1) - (6)].integer),(Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer),(Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1083:
#line 2550 "frame/parser.Y"
    {fr->getMarkerProjectionPointsCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1084:
#line 2553 "frame/parser.Y"
    {fr->getMarkerProjectionLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer),
	    (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1085:
#line 2556 "frame/parser.Y"
    {fr->getMarkerProjectionWidthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1086:
#line 2557 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1087:
#line 2558 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1088:
#line 2559 "frame/parser.Y"
    {fr->getMarkerRulerDistSpecCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1089:
#line 2561 "frame/parser.Y"
    {fr->getMarkerRulerLengthCmd((yyvsp[(1) - (5)].integer),(Coord::CoordSystem)(yyvsp[(4) - (5)].integer),(Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1090:
#line 2563 "frame/parser.Y"
    {fr->getMarkerRulerPointCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1091:
#line 2565 "frame/parser.Y"
    {fr->getMarkerRulerSystemCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1092:
#line 2566 "frame/parser.Y"
    {fr->getMarkerSelectedCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1093:
#line 2568 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1094:
#line 2569 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1095:
#line 2570 "frame/parser.Y"
    {fr->getMarkerTextCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1096:
#line 2571 "frame/parser.Y"
    {fr->getMarkerTextRotateCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1097:
#line 2572 "frame/parser.Y"
    {fr->getMarkerTypeCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1098:
#line 2574 "frame/parser.Y"
    {fr->getMarkerVectorArrowCmd((yyvsp[(1) - (3)].integer));;}
    break;

  case 1099:
#line 2576 "frame/parser.Y"
    {fr->getMarkerVectorLengthCmd((yyvsp[(1) - (5)].integer), (Coord::CoordSystem)(yyvsp[(4) - (5)].integer), (Coord::DistFormat)(yyvsp[(5) - (5)].integer));;}
    break;

  case 1100:
#line 2578 "frame/parser.Y"
    {fr->getMarkerVectorCmd((yyvsp[(1) - (6)].integer), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),
	    (Coord::SkyFrame)(yyvsp[(5) - (6)].integer), (Coord::SkyFormat)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1101:
#line 2580 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1102:
#line 2581 "frame/parser.Y"
    {fr->getMarkerDashListCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1104:
#line 2583 "frame/parser.Y"
    {fr->getMarkerHighlitedNumberCmd();;}
    break;

  case 1105:
#line 2584 "frame/parser.Y"
    {fr->getMarkerNumberCmd();;}
    break;

  case 1106:
#line 2586 "frame/parser.Y"
    {fr->getMarkerPolygonSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1107:
#line 2588 "frame/parser.Y"
    {fr->getMarkerSegmentSegmentCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1108:
#line 2589 "frame/parser.Y"
    {fr->getMarkerPreserveCmd();;}
    break;

  case 1109:
#line 2590 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1111:
#line 2592 "frame/parser.Y"
    {fr->getMarkerSelectedNumberCmd();;}
    break;

  case 1113:
#line 2596 "frame/parser.Y"
    {fr->getMarkerColorCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1114:
#line 2597 "frame/parser.Y"
    {fr->getMarkerFontCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1115:
#line 2598 "frame/parser.Y"
    {fr->getMarkerIdCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1116:
#line 2599 "frame/parser.Y"
    {fr->getMarkerPropertyCmd((yyvsp[(1) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1117:
#line 2600 "frame/parser.Y"
    {fr->getMarkerTagCmd((yyvsp[(1) - (2)].str));;}
    break;

  case 1118:
#line 2601 "frame/parser.Y"
    {fr->getMarkerTagNumberCmd((yyvsp[(1) - (3)].str));;}
    break;

  case 1119:
#line 2603 "frame/parser.Y"
    {fr->getMarkerTagsCmd();;}
    break;

  case 1120:
#line 2604 "frame/parser.Y"
    {fr->getMarkerTagDefaultNameCmd();;}
    break;

  case 1121:
#line 2606 "frame/parser.Y"
    {fr->getMarkerLineWidthCmd();;}
    break;

  case 1122:
#line 2607 "frame/parser.Y"
    {fr->getMarkerDashListCmd();;}
    break;

  case 1123:
#line 2610 "frame/parser.Y"
    {fr->getMarkerCentroidAutoCmd();;}
    break;

  case 1124:
#line 2611 "frame/parser.Y"
    {fr->getMarkerCentroidRadiusCmd();;}
    break;

  case 1125:
#line 2612 "frame/parser.Y"
    {fr->getMarkerCentroidIterationCmd();;}
    break;

  case 1126:
#line 2613 "frame/parser.Y"
    {fr->getMarkerCentroidOptionCmd();;}
    break;

  case 1127:
#line 2616 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd();;}
    break;

  case 1128:
#line 2617 "frame/parser.Y"
    {fr->getMarkerHighlitedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1129:
#line 2620 "frame/parser.Y"
    {fr->getMarkerSelectedCmd();;}
    break;

  case 1130:
#line 2621 "frame/parser.Y"
    {fr->getMarkerSelectedCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1131:
#line 2624 "frame/parser.Y"
    {fr->getMarkerShowCmd();;}
    break;

  case 1132:
#line 2625 "frame/parser.Y"
    {fr->getMarkerShowTextCmd();;}
    break;

  case 1133:
#line 2628 "frame/parser.Y"
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

  case 1134:
#line 2641 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1135:
#line 2642 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1136:
#line 2646 "frame/parser.Y"
    {fr->markerLayerCmd(Base::USER);;}
    break;

  case 1137:
#line 2647 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->markerLayerCmd(Base::USER);
	  ;}
    break;

  case 1138:
#line 2651 "frame/parser.Y"
    {fr->markerLayerCmd(Base::CATALOG);;}
    break;

  case 1139:
#line 2652 "frame/parser.Y"
    {fr->markerLayerCmd(Base::FOOTPRINT);;}
    break;

  case 1140:
#line 2657 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(1) - (7)].integer),
	    (Coord::CoordSystem)(yyvsp[(2) - (7)].integer), (Coord::SkyFrame)(yyvsp[(3) - (7)].integer), (Coord::SkyFormat)(yyvsp[(4) - (7)].integer), (yyvsp[(5) - (7)].integer), 0, propQMask, propQValue, taglist);;}
    break;

  case 1141:
#line 2661 "frame/parser.Y"
    {fr->markerListCmd((Base::MarkerFormat)(yyvsp[(2) - (8)].integer),
	    (Coord::CoordSystem)(yyvsp[(3) - (8)].integer), (Coord::SkyFrame)(yyvsp[(4) - (8)].integer), (Coord::SkyFormat)(yyvsp[(5) - (8)].integer), (yyvsp[(6) - (8)].integer), 1, propQMask, propQValue, taglist);;}
    break;

  case 1142:
#line 2666 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1143:
#line 2668 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].str),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1144:
#line 2671 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer),0,"green",Coord::PHYSICAL,Coord::ICRS);;}
    break;

  case 1145:
#line 2673 "frame/parser.Y"
    {fr->markerLoadCmd((Base::MarkerFormat)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].str),
	    (Coord::CoordSystem)(yyvsp[(5) - (6)].integer),(Coord::SkyFrame)(yyvsp[(6) - (6)].integer));;}
    break;

  case 1146:
#line 2676 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (2)].str), "green");;}
    break;

  case 1147:
#line 2678 "frame/parser.Y"
    {fr->markerLoadFitsCmd((yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));;}
    break;

  case 1148:
#line 2681 "frame/parser.Y"
    {fr->markerMoveCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1149:
#line 2682 "frame/parser.Y"
    {fr->markerFrontCmd();;}
    break;

  case 1150:
#line 2683 "frame/parser.Y"
    {fr->markerBackCmd();;}
    break;

  case 1151:
#line 2684 "frame/parser.Y"
    {fr->markerMoveBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1152:
#line 2685 "frame/parser.Y"
    {fr->markerMoveMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1153:
#line 2686 "frame/parser.Y"
    {fr->markerMoveEndCmd();;}
    break;

  case 1154:
#line 2688 "frame/parser.Y"
    {fr->markerMoveToCmd(Vector((yyvsp[(4) - (4)].vector)), (Coord::CoordSystem)(yyvsp[(2) - (4)].integer), (Coord::SkyFrame)(yyvsp[(3) - (4)].integer));;}
    break;

  case 1157:
#line 2695 "frame/parser.Y"
    {setProps(&currentProps,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1158:
#line 2696 "frame/parser.Y"
    {strncpy(currentColor,(yyvsp[(3) - (3)].str),16);;}
    break;

  case 1159:
#line 2697 "frame/parser.Y"
    {currentDash[0]=(yyvsp[(3) - (4)].integer);currentDash[1]=(yyvsp[(4) - (4)].integer);;}
    break;

  case 1160:
#line 2698 "frame/parser.Y"
    {currentWidth = (yyvsp[(3) - (3)].integer);;}
    break;

  case 1161:
#line 2699 "frame/parser.Y"
    {strncpy(currentFont,(yyvsp[(3) - (3)].str),32);;}
    break;

  case 1162:
#line 2700 "frame/parser.Y"
    {strncpy(currentText,(yyvsp[(3) - (3)].str),80);;}
    break;

  case 1165:
#line 2705 "frame/parser.Y"
    {(yyval.integer) = Marker::NONE;;}
    break;

  case 1166:
#line 2706 "frame/parser.Y"
    {(yyval.integer) = Marker::SELECT;;}
    break;

  case 1167:
#line 2707 "frame/parser.Y"
    {(yyval.integer) = Marker::HIGHLITE;;}
    break;

  case 1168:
#line 2708 "frame/parser.Y"
    {(yyval.integer) = Marker::DASH;;}
    break;

  case 1169:
#line 2709 "frame/parser.Y"
    {(yyval.integer) = Marker::FIXED;;}
    break;

  case 1170:
#line 2710 "frame/parser.Y"
    {(yyval.integer) = Marker::EDIT;;}
    break;

  case 1171:
#line 2711 "frame/parser.Y"
    {(yyval.integer) = Marker::MOVE;;}
    break;

  case 1172:
#line 2712 "frame/parser.Y"
    {(yyval.integer) = Marker::ROTATE;;}
    break;

  case 1173:
#line 2713 "frame/parser.Y"
    {(yyval.integer) = Marker::DELETE;;}
    break;

  case 1174:
#line 2714 "frame/parser.Y"
    {(yyval.integer) = Marker::INCLUDE;;}
    break;

  case 1175:
#line 2715 "frame/parser.Y"
    {(yyval.integer) = Marker::SOURCE;;}
    break;

  case 1176:
#line 2716 "frame/parser.Y"
    {(yyval.integer) = Marker::FILL;;}
    break;

  case 1179:
#line 2723 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1180:
#line 2724 "frame/parser.Y"
    {propQMask=0;propQValue=0;;}
    break;

  case 1182:
#line 2728 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(1) - (6)].str), (Base::MarkerFormat)(yyvsp[(2) - (6)].integer), (Coord::CoordSystem)(yyvsp[(3) - (6)].integer), (Coord::SkyFrame)(yyvsp[(4) - (6)].integer), (Coord::SkyFormat)(yyvsp[(5) - (6)].integer), (yyvsp[(6) - (6)].integer), 0);;}
    break;

  case 1183:
#line 2730 "frame/parser.Y"
    {fr->markerSaveCmd((yyvsp[(2) - (7)].str), (Base::MarkerFormat)(yyvsp[(3) - (7)].integer), (Coord::CoordSystem)(yyvsp[(4) - (7)].integer), (Coord::SkyFrame)(yyvsp[(5) - (7)].integer), (Coord::SkyFormat)(yyvsp[(6) - (7)].integer), (yyvsp[(7) - (7)].integer), 1);;}
    break;

  case 1184:
#line 2731 "frame/parser.Y"
    {fr->markerSaveTemplateCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1185:
#line 2734 "frame/parser.Y"
    {fr->markerSelectAllCmd();;}
    break;

  case 1186:
#line 2735 "frame/parser.Y"
    {fr->markerSelectOnlyCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1187:
#line 2736 "frame/parser.Y"
    {fr->markerSelectToggleCmd();;}
    break;

  case 1188:
#line 2737 "frame/parser.Y"
    {fr->markerSelectToggleCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1189:
#line 2738 "frame/parser.Y"
    {fr->markerSelectFirstCmd();;}
    break;

  case 1190:
#line 2739 "frame/parser.Y"
    {fr->markerSelectLastCmd();;}
    break;

  case 1191:
#line 2742 "frame/parser.Y"
    {fr->markerShowCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1192:
#line 2743 "frame/parser.Y"
    {fr->markerShowTextCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1195:
#line 2751 "frame/parser.Y"
    {propQMask |= (yyvsp[(1) - (3)].integer); setProps(&propQValue,(yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1196:
#line 2754 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1197:
#line 2755 "frame/parser.Y"
    {taglist.deleteAll();;}
    break;

  case 1201:
#line 2762 "frame/parser.Y"
    {taglist.append(new Tag((yyvsp[(3) - (3)].str)));;}
    break;

  case 1202:
#line 2765 "frame/parser.Y"
    {cblist.append(
	new CallBack(fr->getInterp(),(CallBack::Type)(yyvsp[(3) - (5)].integer),(yyvsp[(4) - (5)].str),(yyvsp[(5) - (5)].str)));;}
    break;

  case 1203:
#line 2769 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1204:
#line 2770 "frame/parser.Y"
    {fr->layerCreateCmd();;}
    break;

  case 1205:
#line 2771 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1206:
#line 2772 "frame/parser.Y"
    {fr->layerNoCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1207:
#line 2773 "frame/parser.Y"
    {fr->layerColorCmd(0,(yyvsp[(2) - (2)].str));;}
    break;

  case 1208:
#line 2774 "frame/parser.Y"
    {fr->layerColorCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1209:
#line 2775 "frame/parser.Y"
    {fr->layerBlendCmd(0,(FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1210:
#line 2776 "frame/parser.Y"
    {fr->layerBlendCmd((yyvsp[(1) - (3)].integer),(FitsMask::MaskBlend)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1211:
#line 2777 "frame/parser.Y"
    {fr->layerTransparencyCmd(0,(yyvsp[(2) - (2)].real));;}
    break;

  case 1212:
#line 2778 "frame/parser.Y"
    {fr->layerTransparencyCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].real));;}
    break;

  case 1213:
#line 2779 "frame/parser.Y"
    {fr->layerViewCmd(0,(yyvsp[(2) - (2)].integer));;}
    break;

  case 1214:
#line 2780 "frame/parser.Y"
    {fr->layerViewCmd((yyvsp[(1) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1215:
#line 2782 "frame/parser.Y"
    {fr->layerShowCmd(0);;}
    break;

  case 1216:
#line 2783 "frame/parser.Y"
    {fr->layerShowCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1217:
#line 2784 "frame/parser.Y"
    {fr->layerHideCmd(0);;}
    break;

  case 1218:
#line 2785 "frame/parser.Y"
    {fr->layerHideCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1219:
#line 2786 "frame/parser.Y"
    {fr->layerDeleteCmd(0);;}
    break;

  case 1220:
#line 2787 "frame/parser.Y"
    {fr->layerDeleteCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1221:
#line 2788 "frame/parser.Y"
    {fr->layerUpCmd(0);;}
    break;

  case 1222:
#line 2789 "frame/parser.Y"
    {fr->layerUpCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1223:
#line 2790 "frame/parser.Y"
    {fr->layerDownCmd(0);;}
    break;

  case 1224:
#line 2791 "frame/parser.Y"
    {fr->layerDownCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1225:
#line 2792 "frame/parser.Y"
    {fr->layerTopCmd(0);;}
    break;

  case 1226:
#line 2793 "frame/parser.Y"
    {fr->layerTopCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1227:
#line 2794 "frame/parser.Y"
    {fr->layerBottomCmd(0);;}
    break;

  case 1228:
#line 2795 "frame/parser.Y"
    {fr->layerBottomCmd((yyvsp[(1) - (2)].integer));;}
    break;

  case 1229:
#line 2798 "frame/parser.Y"
    {fr->maskClearCmd();;}
    break;

  case 1230:
#line 2799 "frame/parser.Y"
    {fr->maskColorCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1231:
#line 2800 "frame/parser.Y"
    {fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1232:
#line 2801 "frame/parser.Y"
    {fr->maskRangeCmd((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real));;}
    break;

  case 1233:
#line 2802 "frame/parser.Y"
    {fr->maskSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1234:
#line 2803 "frame/parser.Y"
    {fr->maskTransparencyCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1235:
#line 2804 "frame/parser.Y"
    {fr->maskBlendCmd((FitsMask::MaskBlend)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1236:
#line 2805 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->maskMarkCmd((FitsMask::MaskType)(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1237:
#line 2811 "frame/parser.Y"
    {fr->orientCmd(Coord::XX);;}
    break;

  case 1238:
#line 2812 "frame/parser.Y"
    {fr->orientCmd(Coord::YY);;}
    break;

  case 1239:
#line 2813 "frame/parser.Y"
    {fr->orientCmd(Coord::XY);;}
    break;

  case 1240:
#line 2814 "frame/parser.Y"
    {fr->orientCmd(Coord::NORMAL);;}
    break;

  case 1241:
#line 2818 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (4)].real),(yyvsp[(2) - (4)].real)),Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1242:
#line 2819 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1243:
#line 2821 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1244:
#line 2826 "frame/parser.Y"
    {fr->panCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1246:
#line 2828 "frame/parser.Y"
    {fr->panBBoxCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1248:
#line 2830 "frame/parser.Y"
    {fr->panPreserveCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1249:
#line 2833 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1250:
#line 2835 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->panToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));
	;}
    break;

  case 1251:
#line 2840 "frame/parser.Y"
    {fr->panToCmd(Vector((yyvsp[(3) - (3)].vector)), (Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer));;}
    break;

  case 1252:
#line 2843 "frame/parser.Y"
    {fr->panBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1253:
#line 2844 "frame/parser.Y"
    {fr->panMotionCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1254:
#line 2845 "frame/parser.Y"
    {fr->panEndCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1255:
#line 2848 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1256:
#line 2850 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->pannerCmd((Coord::CoordSystem)(yyvsp[(2) - (3)].integer),(Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1257:
#line 2854 "frame/parser.Y"
    {fr->pannerCmd((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer));;}
    break;

  case 1258:
#line 2855 "frame/parser.Y"
    {fr->updatePannerCmd();;}
    break;

  case 1259:
#line 2859 "frame/parser.Y"
    {fr->psColorSpaceCmd((PSColorSpace)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1260:
#line 2860 "frame/parser.Y"
    {fr->psLevelCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1261:
#line 2861 "frame/parser.Y"
    {fr->psResolutionCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1262:
#line 2862 "frame/parser.Y"
    {
	  // backward compatibility with backup
	;}
    break;

  case 1263:
#line 2868 "frame/parser.Y"
    {fr->precCmd((yyvsp[(1) - (9)].integer),(yyvsp[(2) - (9)].integer),(yyvsp[(3) - (9)].integer),(yyvsp[(4) - (9)].integer),(yyvsp[(5) - (9)].integer),(yyvsp[(6) - (9)].integer),(yyvsp[(7) - (9)].integer),(yyvsp[(8) - (9)].integer),(yyvsp[(9) - (9)].integer));;}
    break;

  case 1264:
#line 2869 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->precCmd((yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].integer),(yyvsp[(5) - (6)].integer),(yyvsp[(6) - (6)].integer));
	;}
    break;

  case 1265:
#line 2875 "frame/parser.Y"
    {(yyval.integer) = BW;;}
    break;

  case 1266:
#line 2876 "frame/parser.Y"
    {(yyval.integer) = GRAY;;}
    break;

  case 1267:
#line 2877 "frame/parser.Y"
    {(yyval.integer) = RGB;;}
    break;

  case 1268:
#line 2878 "frame/parser.Y"
    {(yyval.integer) = CMYK;;}
    break;

  case 1271:
#line 2886 "frame/parser.Y"
    {fr->regionHighliteBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1272:
#line 2888 "frame/parser.Y"
    {fr->regionHighliteMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1273:
#line 2889 "frame/parser.Y"
    {fr->regionHighliteEndCmd();;}
    break;

  case 1274:
#line 2890 "frame/parser.Y"
    {fr->regionHighliteShiftEndCmd();;}
    break;

  case 1275:
#line 2894 "frame/parser.Y"
    {fr->regionSelectBeginCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1276:
#line 2895 "frame/parser.Y"
    {fr->regionSelectMotionCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1277:
#line 2896 "frame/parser.Y"
    {fr->regionSelectEndCmd();;}
    break;

  case 1278:
#line 2897 "frame/parser.Y"
    {fr->regionSelectShiftEndCmd();;}
    break;

  case 1279:
#line 2900 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::MIP;;}
    break;

  case 1280:
#line 2901 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AIP;;}
    break;

  case 1281:
#line 2902 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::FIP;;}
    break;

  case 1282:
#line 2905 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::NONE;;}
    break;

  case 1283:
#line 2906 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::AZIMUTH;;}
    break;

  case 1284:
#line 2907 "frame/parser.Y"
    {(yyval.integer) = Frame3dBase::ELEVATION;;}
    break;

  case 1285:
#line 2910 "frame/parser.Y"
    {fr->revealCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1286:
#line 2911 "frame/parser.Y"
    {fr->revealClearCmd();;}
    break;

  case 1287:
#line 2914 "frame/parser.Y"
    {fr->setRGBChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1288:
#line 2915 "frame/parser.Y"
    {fr->setRGBSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1289:
#line 2916 "frame/parser.Y"
    {fr->setRGBViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1290:
#line 2920 "frame/parser.Y"
    {fr->setMultiColorSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1291:
#line 2923 "frame/parser.Y"
    {fr->setHLSChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1292:
#line 2924 "frame/parser.Y"
    {fr->setHLSChannelCmd("hue");;}
    break;

  case 1293:
#line 2925 "frame/parser.Y"
    {fr->setHLSChannelCmd("saturation");;}
    break;

  case 1294:
#line 2926 "frame/parser.Y"
    {fr->setHLSSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1295:
#line 2927 "frame/parser.Y"
    {fr->setHLSViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1296:
#line 2930 "frame/parser.Y"
    {fr->setHSVChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1297:
#line 2931 "frame/parser.Y"
    {fr->setHSVChannelCmd("hue");;}
    break;

  case 1298:
#line 2932 "frame/parser.Y"
    {fr->setHSVChannelCmd("saturation");;}
    break;

  case 1299:
#line 2933 "frame/parser.Y"
    {fr->setHSVChannelCmd("value");;}
    break;

  case 1300:
#line 2934 "frame/parser.Y"
    {fr->setHSVSystemCmd((Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1301:
#line 2935 "frame/parser.Y"
    {fr->setHSVViewCmd((yyvsp[(2) - (4)].integer),(yyvsp[(3) - (4)].integer),(yyvsp[(4) - (4)].integer));;}
    break;

  case 1302:
#line 2938 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1303:
#line 2939 "frame/parser.Y"
    {fr->rotateCmd(zeroTWOPI(degToRad((yyvsp[(1) - (2)].real))));;}
    break;

  case 1305:
#line 2941 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (2)].real))));;}
    break;

  case 1306:
#line 2942 "frame/parser.Y"
    {fr->rotateToCmd(zeroTWOPI(degToRad((yyvsp[(2) - (3)].real))));;}
    break;

  case 1307:
#line 2945 "frame/parser.Y"
    {fr->rotateBeginCmd();;}
    break;

  case 1308:
#line 2946 "frame/parser.Y"
    {fr->rotateMotionCmd(zeroTWOPI(degToRad((yyvsp[(1) - (1)].real))));;}
    break;

  case 1309:
#line 2947 "frame/parser.Y"
    {fr->rotateEndCmd();;}
    break;

  case 1315:
#line 2955 "frame/parser.Y"
    {fr->savePhotoCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1316:
#line 2958 "frame/parser.Y"
    {fr->savePixelMaskFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1317:
#line 2959 "frame/parser.Y"
    {fr->savePixelMaskChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1318:
#line 2960 "frame/parser.Y"
    {fr->savePixelMaskSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1319:
#line 2964 "frame/parser.Y"
    {fr->saveArrayFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1320:
#line 2966 "frame/parser.Y"
    {fr->saveArrayChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1321:
#line 2968 "frame/parser.Y"
    {fr->saveArraySocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1338:
#line 2989 "frame/parser.Y"
    {fr->saveFitsFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1339:
#line 2990 "frame/parser.Y"
    {fr->saveFitsChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1340:
#line 2991 "frame/parser.Y"
    {fr->saveFitsSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1341:
#line 2994 "frame/parser.Y"
    {fr->saveFitsTableFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1342:
#line 2995 "frame/parser.Y"
    {fr->saveFitsTableChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1343:
#line 2996 "frame/parser.Y"
    {fr->saveFitsTableSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1344:
#line 2999 "frame/parser.Y"
    {fr->saveFitsSliceFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1345:
#line 3000 "frame/parser.Y"
    {fr->saveFitsSliceChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1346:
#line 3001 "frame/parser.Y"
    {fr->saveFitsSliceSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1347:
#line 3004 "frame/parser.Y"
    {fr->saveFitsExtCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1348:
#line 3005 "frame/parser.Y"
    {fr->saveFitsExtCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1349:
#line 3006 "frame/parser.Y"
    {fr->saveFitsExtCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1351:
#line 3010 "frame/parser.Y"
    {fr->saveFitsMosaicFileCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1352:
#line 3011 "frame/parser.Y"
    {fr->saveFitsMosaicChannelCmd((yyvsp[(2) - (3)].str),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1353:
#line 3012 "frame/parser.Y"
    {fr->saveFitsMosaicSocketCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].integer));;}
    break;

  case 1354:
#line 3015 "frame/parser.Y"
    {fr->saveFitsMosaicImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1355:
#line 3016 "frame/parser.Y"
    {fr->saveFitsMosaicImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1356:
#line 3017 "frame/parser.Y"
    {fr->saveFitsMosaicImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1357:
#line 3021 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1358:
#line 3023 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1359:
#line 3025 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1360:
#line 3028 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1361:
#line 3029 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1362:
#line 3030 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1363:
#line 3033 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1364:
#line 3034 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1365:
#line 3035 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1366:
#line 3039 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1367:
#line 3041 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1368:
#line 3043 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1369:
#line 3046 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1370:
#line 3047 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1371:
#line 3048 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1372:
#line 3051 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1373:
#line 3052 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1374:
#line 3053 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1375:
#line 3057 "frame/parser.Y"
    {fr->saveRGBArrayCubeFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1376:
#line 3059 "frame/parser.Y"
    {fr->saveRGBArrayCubeChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1377:
#line 3061 "frame/parser.Y"
    {fr->saveRGBArrayCubeSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1378:
#line 3064 "frame/parser.Y"
    {fr->saveRGBImageFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1379:
#line 3065 "frame/parser.Y"
    {fr->saveRGBImageChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1380:
#line 3066 "frame/parser.Y"
    {fr->saveRGBImageSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1381:
#line 3069 "frame/parser.Y"
    {fr->saveRGBCubeFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1382:
#line 3070 "frame/parser.Y"
    {fr->saveRGBCubeChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1383:
#line 3071 "frame/parser.Y"
    {fr->saveRGBCubeSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1384:
#line 3074 "frame/parser.Y"
    {fr->saveFitsResampleFileCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1385:
#line 3075 "frame/parser.Y"
    {fr->saveFitsResampleChannelCmd((yyvsp[(2) - (2)].str));;}
    break;

  case 1386:
#line 3076 "frame/parser.Y"
    {fr->saveFitsResampleSocketCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1387:
#line 3080 "frame/parser.Y"
    {fr->saveNRRDFileCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1388:
#line 3082 "frame/parser.Y"
    {fr->saveNRRDChannelCmd((yyvsp[(2) - (3)].str), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1389:
#line 3084 "frame/parser.Y"
    {fr->saveNRRDSocketCmd((yyvsp[(2) - (3)].integer), (FitsFile::ArchType)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1390:
#line 3088 "frame/parser.Y"
    {fr->saveENVIFileCmd((yyvsp[(2) - (4)].str), (yyvsp[(3) - (4)].str), (FitsFile::ArchType)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1391:
#line 3092 "frame/parser.Y"
    {fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (6)].integer),(yyvsp[(2) - (6)].integer),(yyvsp[(3) - (6)].integer),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real));;}
    break;

  case 1392:
#line 3094 "frame/parser.Y"
    {
	  // backward compatibility with backup
	  fr->smoothCmd((Context::SmoothFunction)(yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));
	;}
    break;

  case 1393:
#line 3098 "frame/parser.Y"
    {fr->smoothDeleteCmd();;}
    break;

  case 1394:
#line 3101 "frame/parser.Y"
    {(yyval.integer) = Context::BOXCAR;;}
    break;

  case 1395:
#line 3102 "frame/parser.Y"
    {(yyval.integer) = Context::TOPHAT;;}
    break;

  case 1396:
#line 3103 "frame/parser.Y"
    {(yyval.integer) = Context::GAUSSIAN;;}
    break;

  case 1397:
#line 3104 "frame/parser.Y"
    {(yyval.integer) = Context::ELLIPTIC;;}
    break;

  case 1398:
#line 3107 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1399:
#line 3109 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(1) - (5)].integer),BBox((yyvsp[(2) - (5)].real),(yyvsp[(3) - (5)].real),(yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1400:
#line 3111 "frame/parser.Y"
    {fr->updateFitsCmd();;}
    break;

  case 1401:
#line 3114 "frame/parser.Y"
    {fr->updateFitsCmd((yyvsp[(2) - (6)].integer),BBox((yyvsp[(3) - (6)].real),(yyvsp[(4) - (6)].real),(yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));;}
    break;

  case 1403:
#line 3116 "frame/parser.Y"
    {fr->updateFitsCenterCmd();;}
    break;

  case 1404:
#line 3118 "frame/parser.Y"
    {fr->updateFitsCenterCmd(Vector((yyvsp[(3) - (4)].real),(yyvsp[(4) - (4)].real)));;}
    break;

  case 1405:
#line 3121 "frame/parser.Y"
    {fr->sliceCmd(2,(yyvsp[(1) - (1)].integer));;}
    break;

  case 1406:
#line 3122 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1407:
#line 3123 "frame/parser.Y"
    {fr->sliceCmd((yyvsp[(1) - (2)].real), (Coord::CoordSystem)(yyvsp[(2) - (2)].integer));;}
    break;

  case 1408:
#line 3126 "frame/parser.Y"
    {fr->warpCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1409:
#line 3127 "frame/parser.Y"
    {fr->warpToCmd(Vector((yyvsp[(2) - (3)].real),(yyvsp[(3) - (3)].real)));;}
    break;

  case 1410:
#line 3131 "frame/parser.Y"
    {fr->wcsCmd((Coord::CoordSystem)(yyvsp[(1) - (3)].integer), (Coord::SkyFrame)(yyvsp[(2) - (3)].integer), (Coord::SkyFormat)(yyvsp[(3) - (3)].integer));;}
    break;

  case 1412:
#line 3133 "frame/parser.Y"
    {fr->wcsResetCmd((yyvsp[(2) - (2)].integer));;}
    break;

  case 1415:
#line 3138 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1416:
#line 3139 "frame/parser.Y"
    {fr->wcsAppendCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1417:
#line 3140 "frame/parser.Y"
    {fr->wcsAppendTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1418:
#line 3143 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].integer));;}
    break;

  case 1419:
#line 3144 "frame/parser.Y"
    {fr->wcsReplaceCmd((yyvsp[(1) - (2)].integer),(yyvsp[(2) - (2)].str));;}
    break;

  case 1420:
#line 3145 "frame/parser.Y"
    {fr->wcsReplaceTxtCmd((yyvsp[(2) - (3)].integer),(yyvsp[(3) - (3)].str));;}
    break;

  case 1421:
#line 3148 "frame/parser.Y"
    {fr->wcsAlignCmd((yyvsp[(1) - (1)].integer));;}
    break;

  case 1422:
#line 3150 "frame/parser.Y"
    {
	  // used by backup
	  fr->wcsAlignCmd((yyvsp[(1) - (3)].integer), (Coord::CoordSystem)(yyvsp[(2) - (3)].integer), (Coord::SkyFrame)(yyvsp[(3) - (3)].integer));
	;}
    break;

  case 1423:
#line 3155 "frame/parser.Y"
    {fr->wcsAlign2Cmd((yyvsp[(2) - (4)].integer), (Coord::CoordSystem)(yyvsp[(3) - (4)].integer), (Coord::SkyFrame)(yyvsp[(4) - (4)].integer));;}
    break;

  case 1424:
#line 3156 "frame/parser.Y"
    {fr->wcsAlignPointerClearCmd();;}
    break;

  case 1425:
#line 3159 "frame/parser.Y"
    {
#ifdef __WIN32
	  fr->win32PrintCmd();
#endif
	;}
    break;

  case 1426:
#line 3166 "frame/parser.Y"
    {fr->zoomCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1427:
#line 3168 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1428:
#line 3170 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1429:
#line 3175 "frame/parser.Y"
    {fr->zoomAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(6) - (6)].vector)), (Coord::CoordSystem)(yyvsp[(4) - (6)].integer),(Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;

  case 1431:
#line 3179 "frame/parser.Y"
    {fr->zoomToFitCmd(1);;}
    break;

  case 1432:
#line 3180 "frame/parser.Y"
    {fr->zoomToFitCmd((yyvsp[(2) - (2)].real));;}
    break;

  case 1433:
#line 3181 "frame/parser.Y"
    {fr->zoomToCmd(Vector((yyvsp[(1) - (2)].real),(yyvsp[(2) - (2)].real)));;}
    break;

  case 1434:
#line 3183 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (5)].real),(yyvsp[(2) - (5)].real)),Vector((yyvsp[(4) - (5)].real),(yyvsp[(5) - (5)].real)));;}
    break;

  case 1435:
#line 3185 "frame/parser.Y"
    {
	  // backward compatibility
	  fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)),Vector((yyvsp[(5) - (6)].real),(yyvsp[(6) - (6)].real)));
	;}
    break;

  case 1436:
#line 3190 "frame/parser.Y"
    {fr->zoomToAboutCmd(Vector((yyvsp[(1) - (6)].real),(yyvsp[(2) - (6)].real)), Vector((yyvsp[(6) - (6)].vector)),
	    (Coord::CoordSystem)(yyvsp[(4) - (6)].integer), (Coord::SkyFrame)(yyvsp[(5) - (6)].integer));;}
    break;


/* Line 1267 of yacc.c.  */
#line 12011 "frame/parser.C"
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


#line 3194 "frame/parser.Y"


static void setProps(unsigned short* props, unsigned short prop, int value)
{
  if (value)
    *props |= prop;
  else
    *props &= ~prop;
}

