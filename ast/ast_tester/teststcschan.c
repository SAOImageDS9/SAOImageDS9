/*
 *  Test the StcsChan class.
 *  Converted from the Fortran test teststcschan.f.
 *
 *  Differences from the Fortran original:
 *  - COMMON-block variables (iread, idoc, iwrite, buff) replaced by C
 *    static global variables.
 *  - source() returns const char * (NULL when exhausted) instead of
 *    calling ast_putline.
 *  - sink() takes const char * instead of calling ast_getline.
 *  - err_mark/err_rlse/err_annul replaced by astClearStatus.
 *  - msg_out/err_rep replaced by printf.
 *  - VAL__BADD / VAL__MAXD replaced by AST__BAD and DBL_MAX.
 *  - readast() uses astChannel with SourceFile attribute instead of a
 *    Fortran unit-10 rsource callback.
 *  - assertd() tolerance uses 0.5e-8 relative criterion, matching Fortran.
 *  - assertc() prints a caret marker at the first differing character,
 *    matching the Fortran behaviour.
 */

#include "ast.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <float.h>
#include <stdlib.h>

/* ---- globals shared between source/sink and the tests ---- */

/* source side: which document and which line within it */
static int idoc = 0;
static int iread = 0;

/* sink side: line count and buffer */
#define MAXBUFF 30
#define BUFFLEN 400
static int iwrite = 0;
static char buff[MAXBUFF][BUFFLEN];

/* ---- Document strings ---- */

/* doc 1: has "fred" at the end → should trigger AST__BADIN */
static const char *doc1[] = {
   "StartTime 1900-01-01 Circle ICRS 148.9 69.1 2.0 fred",
   "SpectralInterval 4000 7000 unit Angstrom",
   NULL
};

/* doc 2: SpeCtralInterval (misspelled) – should produce warnings */
static const char *doc2[] = {
   "StartTime 1900-01-01 Circle ICRS 148.9 69.1 2.0 ",
   "SpeCtralInterval 4000 7000 unit Angstrom",
   NULL
};

/* doc 3: full multi-component stcs document */
static const char *doc3[] = {
   "TimeInterVal TT GEoCENTER",
   "1996-01-01T00:00:00 1996-01-01T00:30:00",
   "Time MJD 50814.0 Error 1.2",
   "Resolution 0.8 PixSize 1024.0",
   "Circle ICRS GEOCENTER 179.0 -11.5 0.5",
   "Position 179.0 -11.5 Error 0.000889",
   "Resolution 0.001778 Size 0.000333 0.000278",
   "PixSIZE 0.000083 0.000083",
   "Spectral BARYCENTER 1420.4 unit MHz",
   "Resolution 10.0",
   "RedshiftInterval BARYCENTER VELOCITY OPTICAL",
   "200.0 2300.0 Redshift 300.0",
   "Resolution 0.7 PixSize 0.3",
   NULL
};

/* doc 4: simple TimeInterval + Spectral (no redshift) */
static const char *doc4[] = {
   "TimeInterval TT GEOCENTER",
   "1996-01-01T00:00:00 1996-01-01T00:30:00",
   "Time mjd 50814.0 ERROR 1.2",
   "Resolution 0.8 PixSize 1024.0",
   "Spectral barycenter 1420.4 UNIT MHz",
   "Resolution 10.0",
   NULL
};

/* doc 5: like doc 3 but with a compound (Union/Intersection/Difference/Not)
   spatial region */
static const char *doc5[] = {
   "tIMEiNTERVAL tt geocenter",
   "1996-01-01T00:00:00 1996-01-01T00:30:00",
   "Time MJD 50814.0 Error 1.2",
   "Resolution 0.8 PixSize 1024.0",
   " ",
   "Union ICRS GEOCENTER",
   "      (Circle 180 10 20",
   "       Circle 190 10 20",
   "       Intersection (",
   "          cIRCLE 120 -10 20 dIFFERENCE ",
   "          ( Circle 130 -10 20 ",
   "            Circle 115 -10 10 ",
   "          )",
   "          Not (Circle 118 -8 3)",
   "       )",
   "      )",
   "Position 179.0 -11.5 Error 0.000889",
   "Resolution 0.001778 Size 0.000333 0.000278",
   "PixSize 0.000083 0.000083",
   "Spectral BARYCENTER 1420.4 unit MHz",
   "rESOLUTION 10.0",
   "rEDSHIFTiNTERVAL barycenter velocity optical",
   "200.0 2300.0 rEDSHIFT 300.0",
   "Resolution 0.7 PixSize 0.3",
   NULL
};

/* doc 6: Union with compound spatial structure */
static const char *doc6[] = {
   "Union ICRS TOPOCENTER (",
   "   Circle 180 10 20",
   "   Circle 190 10 20",
   "   Intersection (",
   "      Circle 120 -10 20",
   "      Difference (",
   "         Circle 130 -10 20",
   "         Circle 125 -10 2",
   "      )",
   "      Not ( Circle 118 -8 3 )",
   "   )",
   "   Box 165 -30 30 60",
   ")",
   NULL
};

static const char **docs[] = { NULL, doc1, doc2, doc3, doc4, doc5, doc6 };

/* ---- Source callback ---- */

static const char *source( void ) {
   const char **d;
   if( idoc < 1 || idoc > 6 ) return NULL;
   d = docs[idoc];
   if( d[iread] != NULL ) {
      return d[iread++];
   }
   return NULL;
}

/* ---- Sink callback ---- */

static void sink( const char *line ) {
   size_t l;
   if( !line ) return;
   if( iwrite < 0 ) {
      /* debug mode: print instead of storing */
      printf( "%s\n", line );
   } else if( iwrite < MAXBUFF ) {
      strncpy( buff[iwrite], line, BUFFLEN - 1 );
      buff[iwrite][BUFFLEN - 1] = '\0';
      /* strip trailing whitespace so C comparisons work like Fortran's
         fixed-length string equality (which ignores trailing spaces) */
      l = strlen( buff[iwrite] );
      while( l > 0 && buff[iwrite][l-1] == ' ' ) l--;
      buff[iwrite][l] = '\0';
      iwrite++;
   }
}

/* ---- Helper: error ---- */

static void error( const char *text, int *status ) {
   if( *status == 0 ) {
      *status = 1;
      printf( "%s\n", text );
   }
}

/* ---- Assertion helpers ---- */

static void asserta( AstObject *obj, const char *anam, const char *asb,
                     int *status ) {
   const char *aval;
   char abuf[500];
   size_t l;
   if( *status != 0 ) return;
   aval = astGetC( obj, anam );
   /* copy and strip trailing whitespace, matching Fortran string semantics */
   strncpy( abuf, aval ? aval : "", sizeof(abuf)-1 );
   abuf[sizeof(abuf)-1] = '\0';
   l = strlen( abuf );
   while( l > 0 && abuf[l-1] == ' ' ) l--;
   abuf[l] = '\0';
   if( strcmp( abuf, asb ) != 0 ) {
      printf( "%s (%s) should be \"%s\".\n", anam, abuf, asb );
      *status = 1;
   }
}

static void assertc( const char *name, const char *val, const char *sb,
                     int *status ) {
   size_t i;
   char blank[600];
   if( *status != 0 ) return;
   if( strcmp( val, sb ) != 0 ) {
      printf( "%s (%s) should be:\n", name, val );
      printf( "%s\n", sb );
      /* print caret at first differing position */
      memset( blank, ' ', sizeof(blank) );
      blank[sizeof(blank)-1] = '\0';
      for( i = 0; val[i] && sb[i] && val[i] == sb[i]; i++ ) {}
      if( i < sizeof(blank) - 2 ) blank[i] = '^';
      blank[i+1] = '\0';
      printf( "%s\n", blank );
      *status = 1;
   }
}

static void asserti( const char *name, int val, int sb, int *status ) {
   if( *status != 0 ) return;
   if( val != sb ) {
      printf( "%s (%d) should be %d.\n", name, val, sb );
      *status = 1;
   }
}

static void assertd( const char *name, double val, double sb, int *status ) {
   if( *status != 0 ) return;
   if( fabs( val - sb ) > fabs( 0.5e-8 * ( val + sb ) ) ) {
      printf( "%s (%.15g) should be %.15g.\n", name, val, sb );
      *status = 1;
   }
}

static void assert_true( const char *name, int val, int *status ) {
   if( *status != 0 ) return;
   if( !val ) {
      printf( "%s is not true.\n", name );
      *status = 1;
   }
}

/* ---- readast: read an AST object from a .ast text file ---- */

static AstObject *readast( const char *file, int *status ) {
   AstChannel *ch;
   AstObject *obj;
   char attrib[PATH_MAX + 12];
   const char *srcdir;
   if( *status != 0 ) return NULL;
   ch = astChannel( NULL, NULL, " " );
   srcdir = getenv("srcdir") ? getenv("srcdir") : ".";
   snprintf( attrib, sizeof(attrib), "SourceFile=%s/%s", srcdir , file );
   astSet( ch, "%s", attrib );
   obj = astRead( ch );
   astAnnul( ch );
   return obj;
}

/* ================================================================ */

static void test1( int *status ) {
   AstStcsChan *ch;
   AstObject *obj, *sb, *iobj;
   AstKeyMap *km;
   double lbnd[4], ubnd[4];
   double xin[7], yin[7], xout[7], yout[7];
   int nobj;

   if( *status != 0 ) return;
   astBegin;

   ch = astStcsChan( source, sink, "ReportLevel=3" );

   /* --- doc 4: simple valid document, read it first --- */
   idoc = 4; iread = 0;
   obj = astRead( ch );

   /* --- doc 1: contains unknown word "fred" → should give AST__BADIN --- */
   idoc = 1; iread = 0;
   obj = astRead( ch );
   if( astOK ) {
      error( "Failed to report error about \"fred\"", status );
   } else if( astStatus == AST__BADIN ) {
      astClearStatus;
   } else {
      astClearStatus;
      error( "Unexpected error (not AST__BADIN) for \"fred\" document",
             status );
   }

   /* --- doc 2: misspelled keyword → should produce warnings --- */
   idoc = 2; iread = 0;
   obj = astRead( ch );

   km = astWarnings( ch );
   if( km == AST__NULL )
      error( "No Warnings keymap", status );
   asserti( "Warnings mapsize", astMapSize( km ), 4, status );

   asserta( (AstObject *)obj, "Class", "Prism", status );
   asserta( (AstObject *)obj, "Naxes", "4", status );
   asserta( (AstObject *)obj, "Label(1)",
            "Modified Julian Date offset from 1900-01-01", status );
   asserta( (AstObject *)obj, "Label(2)", "Right ascension", status );
   asserta( (AstObject *)obj, "Label(3)", "Declination", status );
   asserta( (AstObject *)obj, "Label(4)", "Wavelength", status );
   asserta( (AstObject *)obj, "Unit(1)", "d", status );
   asserta( (AstObject *)obj, "Unit(4)", "Angstrom", status );

   astGetRegionBounds( (AstRegion *)obj, lbnd, ubnd );
   astSetC( obj, "Format(1)", "iso.2" );
   assertd( "Time upper bounds", ubnd[0], DBL_MAX, status );
   assertc( "Time lower bound",
            astFormat( (AstFrame *)obj, 1, lbnd[0] ),
            "1900-01-01 00:00:00.00", status );
   assertd( "RA lower bound",    lbnd[1], 2.50080939227851,  status );
   assertd( "RA upper bound",    ubnd[1], 2.6967811201606,   status );
   assertd( "Dec lower bound",   lbnd[2], 1.171115928088195, status );
   assertd( "Dec upper bound",   ubnd[2], 1.24091013301998,  status );
   assertd( "Wavelength lower bound", lbnd[3], 4000.0, status );
   assertd( "Wavelength upper bound", ubnd[3], 7000.0, status );

   /* --- doc 3: full document, compare with reference .ast file --- */
   idoc = 3; iread = 0;
   obj = astRead( ch );

   sb = readast( "fixtures/programs/teststcschan/stcschan-test1-doc3.ast", status );
   if( *status == 0 ) {
      if( !astEqual( obj, sb ) )
         error( "Object read from doc3 is not equal to the object read "
                "from file fixtures/programs/teststcschan/stcschan-test1-doc3.ast.", status );
   }

   /* --- doc 3 again with StcsCoords + StcsProps → KeyMap --- */
   astSetL( ch, "StcsCoords", 1 );
   astSetL( ch, "StcsProps",  1 );

   idoc = 3; iread = 0;
   obj = astRead( ch );

   asserta( obj, "Class", "KeyMap", status );
   assert_true( "Has PROPS entry",
                astMapHasKey( (AstKeyMap *)obj, "PROPS" ), status );
   assert_true( "Has COORDS entry",
                astMapHasKey( (AstKeyMap *)obj, "COORDS" ), status );

   if( astMapGet0A( (AstKeyMap *)obj, "AREA", &iobj ) ) {
      sb = readast( "fixtures/programs/teststcschan/stcschan-test1-doc3.ast", status );
      if( *status == 0 && !astEqual( iobj, sb ) )
         error( "AREA read from doc3 is not equal to the object read "
                "from file fixtures/programs/teststcschan/stcschan-test1-doc3.ast", status );
   } else {
      error( "No AREA entry found", status );
   }

   if( astMapGet0A( (AstKeyMap *)obj, "PROPS", &iobj ) ) {
      sb = readast( "fixtures/programs/teststcschan/stcschan-test1-doc3-props.ast", status );
      if( *status == 0 && !astEqual( iobj, sb ) )
         error( "PROPS read from doc3 is not equal to the object read "
                "from file fixtures/programs/teststcschan/stcschan-test1-doc3-props.ast", status );
   } else {
      error( "No PROPS entry found", status );
   }

   /* --- doc 5: compound spatial region, write back and check lines --- */
   idoc = 5; iread = 0;
   astSetL( ch, "Indent", 1 );
   obj = astRead( ch );

   iwrite = 0;
   nobj = astWrite( ch, obj );
   asserti( "N obj", nobj, 1, status );

   assertc( "line 1 3",  buff[0],
      "TimeInterval TT geocenter 1996-01-01T00:00:00 1996-01-01T00:30:00",
      status );
   assertc( "line 2 3",  buff[1],
      "   Time MJD 50814.0 Error 1.2 Resolution 0.8 PixSize 1024.0",
      status );
   assertc( "line 3 3",  buff[2],
      "Union ICRS GEOCENTER (", status );
   assertc( "line 4 3",  buff[3],
      "      Circle 180 10 20", status );
   assertc( "line 5 3",  buff[4],
      "      Circle 190 10 20", status );
   assertc( "line 6 3",  buff[5],
      "      Intersection (", status );
   assertc( "line 7 3",  buff[6],
      "         Circle 120 -10 20", status );
   assertc( "line 8 3",  buff[7],
      "         Difference (", status );
   assertc( "line 9 3",  buff[8],
      "            Circle 130 -10 20", status );
   assertc( "line 10 3", buff[9],
      "            Circle 115 -10 10", status );
   assertc( "line 11 3", buff[10],
      "         )", status );
   assertc( "line 12 3", buff[11],
      "      )", status );
   assertc( "line 13 3", buff[12],
      "   )", status );
   assertc( "line 14 3", buff[13],
      "   Position 179.0 -11.5 Error 0.000889 0.000889 Resolution 0.001778",
      status );
   assertc( "line 15 3", buff[14],
      "   Size 0.000333 0.000278 PixSize 0.000083 0.000083", status );
   assertc( "line 16 3", buff[15],
      "Spectral BARYCENTER 1420.4 unit MHz Resolution 10.0", status );
   assertc( "line 17 3", buff[16],
      "RedshiftInterval BARYCENTER VELOCITY OPTICAL 200 2300 Redshift 300",
      status );
   assertc( "line 18 3", buff[17],
      "   Resolution 0.7 PixSize 0.3", status );

   /* --- doc 6: compound union, check region bounds and tran2 --- */
   idoc = 6; iread = 0;
   astSet( ch, "StcsArea=1,StcsCoords=0,StcsProps=0" );
   obj = astRead( ch );

   astGetRegionBounds( (AstRegion *)obj, lbnd, ubnd );
   assertd( "RA lower bound",  lbnd[0], 1.91424188686355,  status );
   assertd( "RA upper bound",  ubnd[0], 3.6708117195183,   status );
   assertd( "Dec lower bound", lbnd[1], -1.04715070055065, status );
   assertd( "Dec upper bound", ubnd[1],  0.523598775598299, status );

   xin[0] =  2.174188;   yin[0] = -0.1689054;
   xin[1] =  2.051477;   yin[1] = -0.1311494;
   xin[2] =  2.5302;     yin[2] = -0.2462959;
   xin[3] =  2.171585;   yin[3] =  0.05485025;
   xin[4] =  2.818546;   yin[4] = -0.9324675;
   xin[5] =  2.900912;   yin[5] =  0.3367061;
   xin[6] =  3.615757;   yin[6] =  0.1548211;

   astTran2( (AstMapping *)obj, 7, xin, yin, 1, xout, yout );
   if( xout[0] != AST__BAD ) error( "XOUT(1) not bad", status );
   if( xout[1] != AST__BAD ) error( "XOUT(2) not bad", status );
   if( xout[2] != AST__BAD ) error( "XOUT(3) not bad", status );
   if( xout[3] == AST__BAD ) error( "XOUT(4) is bad", status );
   if( xout[4] == AST__BAD ) error( "XOUT(5) is bad", status );
   if( xout[5] == AST__BAD ) error( "XOUT(6) is bad", status );
   if( xout[6] == AST__BAD ) error( "XOUT(7) is bad", status );

   astEnd;

   if( *status != 0 ) printf( "test1 failed.\n" );
}

/* ================================================================ */

static void test2( int *status ) {
   AstStcsChan *ch;
   AstSkyFrame *sf;
   AstCircle *unc;
   AstEllipse *reg;
   AstObject *obj;
   double p1[2], p2[2], p3[3];
   int nobj;

   if( *status != 0 ) return;
   astBegin;

   ch = astStcsChan( source, sink, "ReportLevel=3" );
   astSetL( ch, "Indent", 1 );
   astSetI( ch, "StcsLength", 60 );

   sf  = astSkyFrame( " " );
   p1[0] = 0.0;  p1[1] = 1.3;
   p2[0] = 0.01;
   unc = astCircle( sf, 1, p1, p2, NULL, " " );

   p1[0] = 1.3;  p1[1] = 0.5;
   p2[0] = 0.3;  p2[1] = 0.1;
   p3[0] = 1.0;
   reg = astEllipse( sf, 1, p1, p2, p3, (AstRegion *)unc, " " );

   iwrite = 0;
   nobj = astWrite( ch, (AstObject *)reg );
   asserti( "N obj",  nobj,   1, status );
   asserti( "iwrite", iwrite, 2, status );
   assertc( "line 1", buff[0],
      "Ellipse ICRS TOPOCENTER 74.48451 28.64789 17.18873 5.729578",
      status );
   assertc( "line 2", buff[1],
      "   57.29578 Error 0.5729514 0.5726735", status );

   astSet( ch, "StcsCoords=1,StcsProps=1" );

   idoc = 3; iread = 0;
   obj = astRead( ch );

   if( obj != AST__NULL ) {
      iwrite = 0;
      nobj = astWrite( ch, obj );
      asserti( "N obj 2", nobj, 1, status );

      assertc( "line 1 2", buff[0],
         "TimeInterval TT GEoCENTER 1996-01-01T00:00:00", status );

      assertc( "line 2 2", buff[1],
         "   1996-01-01T00:30:00 Time MJD 50814.0 Error 1.2", status );

      assertc( "line 3 2", buff[2],
         "   Resolution 0.8 PixSize 1024.0", status );

      assertc( "line 4 2", buff[3],
         "Circle ICRS GEOCENTER 179.0 -11.5 0.5 Position 179.0 -11.5",
         status );

      assertc( "line 5 2", buff[4],
         "   Error 0.000889 0.000889 Resolution 0.001778 Size 0.000333",
         status );

      assertc( "line 6 2", buff[5],
         "   0.000278 PixSize 0.000083 0.000083", status );

      assertc( "line 7 2", buff[6],
         "Spectral BARYCENTER 1420.4 unit MHz Resolution 10.0", status );

      assertc( "line 8 2", buff[7],
         "RedshiftInterval BARYCENTER VELOCITY OPTICAL 200 2300",
         status );

      assertc( "line 9 2", buff[8],
         "   Redshift 300 Resolution 0.7 PixSize 0.3", status );

   } else {
      printf( "No object read from doc 3\n" );
   }

   astEnd;

   if( *status != 0 ) printf( "test2 failed.\n" );
}

/* ================================================================ */

int main( void ) {
   int status = 0;
   astWatch( &status );
   astBegin;

   test2( &status );
   test1( &status );

   astEnd;

   if( status == 0 ) {
      printf( " All StcsChan tests passed\n" );
   } else {
      printf( "StcsChan tests failed\n" );
   }
   return status;
}
