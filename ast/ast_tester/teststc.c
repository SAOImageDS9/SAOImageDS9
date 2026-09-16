/*
 *  Test STC (Space-Time Coordinate) classes.
 *  Converted from the Fortran test teststc.f.
 *
 *  Differences from the Fortran original:
 *  - COMMON-block variables replaced by C static globals.
 *  - Source/sink callbacks use C-style function signatures.
 *  - checkdump uses astToString/astFromString instead of COMMON-block
 *    buffer approach.
 *  - puteg loads files with fopen/fgets.
 *  - xmlread uses astXmlChan with C source callback.
 *  - err_mark/err_rlse/err_annul replaced by astClearStatus.
 *  - Commented-out Fortran tests (UseDefs etc.) omitted.
 *  - astGetStcCoord uses 1-based index (same as Fortran).
 *  - astTranN arrays use in[ncoord][npoint] layout (column-major / Fortran order).
 *  - String comparisons use strcmpTrim() to match Fortran trailing-space
 *    semantics, and safeGetC() to protect against NULL from astGetC when
 *    the AST error status is set.
 */

#include "ast.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <math.h>
#include <stdlib.h>

/* ---- Internal file storage (replaces COMMON /files/) ---- */

#define MXLINE 500
#define LINELEN 3001   /* 3000 chars + nul */
#define NFILES 3

static char filedata[NFILES][MXLINE][LINELEN];
static int filelen[NFILES];
static int cur_file;        /* current file index for source/sink (0-based) */
static int cur_line;        /* current line for source callback */
static AstKeyMap *warns_km; /* warnings keymap from last xmlread */

/* ---- Forward declarations ---- */

static void stopit( int *status, const char *text );
static void checkdump( AstObject *obj, const char *text, int *status );
static void puteg( const char *filename, int ifl, int *status );
static AstObject *xmlread( int ifl, const char *opts, int *status );
static void Example1( int *status );
static void Example1b( int *status );
static void Example2( int *status );
static void Example3( int *status );
static void Example4( int *status );
static void Example5( int *status );
static void misc( int *status );

/* ---- XML source callback ---- */

static const char *xmlSource( void ) {
   if( cur_line < filelen[cur_file] ) {
      return filedata[cur_file][cur_line++];
   }
   return NULL;
}

/* ---- Helper functions ---- */

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

/* Safe wrapper: return "" instead of NULL from astGetC so strcmp never crashes */
static const char *safeGetC( AstObject *obj, const char *attrib ) {
   const char *result = astGetC( obj, attrib );
   return result ? result : "";
}

/* Compare strings ignoring trailing whitespace (matches Fortran comparison semantics). */
static int strcmpTrim( const char *a, const char *b ) {
   size_t la, lb;
   if( !a ) a = "";
   if( !b ) b = "";
   la = strlen( a );
   lb = strlen( b );
   while( la > 0 && a[la-1] == ' ' ) la--;
   while( lb > 0 && b[lb-1] == ' ' ) lb--;
   if( la != lb ) return 1;
   return strncmp( a, b, la );
}

static void checkdump( AstObject *obj, const char *text, int *status ) {
   char *s1 = NULL;
   char *s2 = NULL;
   AstObject *obj2 = NULL;
   int overlap;

   if( *status != 0 ) return;

   s1 = astToString( obj );
   if( !s1 ) {
      stopit( status, text );
      return;
   }

   obj2 = astFromString( s1 );
   if( !obj2 ) {
      s1 = astFree( s1 );
      stopit( status, text );
      return;
   }

   s2 = astToString( obj2 );
   if( !s2 || strcmp( s1, s2 ) != 0 ) {
      /* Fall back to overlap check */
      overlap = astOverlap( (AstRegion *)obj, (AstRegion *)obj2 );
      if( overlap != 5 ) {
         printf( "checkdump overlap: %d\n", overlap );
         stopit( status, text );
      }
   }
   if( s1 ) s1 = astFree( s1 );
   if( s2 ) s2 = astFree( s2 );
}

static void puteg( const char *filename, int ifl, int *status ) {
   FILE *fp;
   int nline;
   size_t len;
   char path[PATH_MAX];
   const char *srcdir;

   if( *status != 0 ) return;

   srcdir = getenv("srcdir") ? getenv("srcdir") : ".";

   if (snprintf(path, sizeof(path), "%s/%s", srcdir, filename) < 0) {
      *status = 1;
      return;
   }

   fp = fopen( path, "r" );
   if( !fp ) {
      printf( "Cannot open file: %s\n", path );
      stopit( status, "puteg: cannot open file" );
      return;
   }

   nline = 0;
   while( nline < MXLINE && fgets( filedata[ifl][nline], LINELEN, fp ) ) {
      /* Strip trailing newline */
      len = strlen( filedata[ifl][nline] );
      if( len > 0 && filedata[ifl][nline][len-1] == '\n' ) {
         filedata[ifl][nline][len-1] = '\0';
      }
      nline++;
   }
   fclose( fp );
   filelen[ifl] = nline;
}

static AstObject *xmlread( int ifl, const char *opts, int *status ) {
   AstXmlChan *ch;
   AstObject *obj;

   if( *status != 0 ) return NULL;

   cur_file = ifl;
   cur_line = 0;

   ch = astXmlChan( xmlSource, NULL, "%s", opts );
   obj = astRead( ch );
   if( !obj ) {
      stopit( status, "xmlread: Failed to read STC object from XmlChan." );
   }

   warns_km = astWarnings( ch );
   astAnnul( ch );

   return obj;
}

/* ================================================================
 *  misc - overlap tests using teststc_eg6..eg10
 * ================================================================ */

static void misc( int *status ) {
   AstObject *obj1, *obj2;
   int overlap;
   double x, y, xo, yo;

   if( *status != 0 ) return;

   astBegin;

   puteg( "fixtures/programs/teststc/teststc_eg6", 0, status );
   obj1 = xmlread( 0, " ", status );
   obj1 = (AstObject *)astSimplify( (AstMapping *)obj1 );
   checkdump( obj1, "checkdump 1", status );

   puteg( "fixtures/programs/teststc/teststc_eg7", 0, status );
   obj2 = xmlread( 0, " ", status );
   obj2 = (AstObject *)astSimplify( (AstMapping *)obj2 );
   checkdump( obj2, "checkdump 2", status );

   overlap = astOverlap( (AstRegion *)obj1, (AstRegion *)obj2 );
   if( overlap != 4 && *status == 0 ) {
      printf( "Overlap is %d (should be 4)\n", overlap );
      stopit( status, "Error 1" );
   }

   puteg( "fixtures/programs/teststc/teststc_eg8", 0, status );
   obj2 = xmlread( 0, " ", status );
   obj2 = (AstObject *)astSimplify( (AstMapping *)obj2 );
   checkdump( obj2, "checkdump 3", status );

   overlap = astOverlap( (AstRegion *)obj1, (AstRegion *)obj2 );
   if( overlap != 3 && *status == 0 ) {
      printf( "Overlap is %d (should be 3)\n", overlap );
      stopit( status, "Error 2" );
   }

   overlap = astOverlap( (AstRegion *)obj2, (AstRegion *)obj1 );
   if( overlap != 2 && *status == 0 ) {
      printf( "Overlap is %d (should be 2)\n", overlap );
      stopit( status, "Error 3" );
   }

   puteg( "fixtures/programs/teststc/teststc_eg9", 0, status );
   obj2 = xmlread( 0, " ", status );

   overlap = astOverlap( (AstRegion *)obj1, (AstRegion *)obj2 );
   if( overlap != 1 && *status == 0 ) {
      printf( "Overlap is %d (should be 1)\n", overlap );
      stopit( status, "Error 4" );
   }

   puteg( "fixtures/programs/teststc/teststc_eg10", 0, status );
   obj2 = xmlread( 0, " ", status );

   x = 2.4958208;
   y = 0.73303829;
   astTran2( (AstMapping *)obj2, 1, &x, &y, 1, &xo, &yo );
   if( xo != 2.4958208 || yo != 0.73303829 ) {
      stopit( status, "Error 5" );
   }

   x = 2.4958208;
   y = -0.73303829;
   astTran2( (AstMapping *)obj2, 1, &x, &y, 1, &xo, &yo );
   if( xo != AST__BAD || yo != AST__BAD ) {
      stopit( status, "Error 6" );
   }

   astEnd;

   if( *status != 0 ) printf( "teststc: miscellaneous tests failed\n" );
}

/* ================================================================
 *  Example1 - STCResourceProfile (4D: SKY+SKY+TIME+SPECTRUM)
 * ================================================================ */

static void Example1( int *status ) {
   AstObject *obj, *obj2;
   AstKeyMap *km;
   AstObject *r;
   AstFrameSet *fs;
   AstMapping *m;
   int i, j, nval;
   /* astTranN: in[ncoord][npoint], Fortran in(point,coord) = C in[coord-1][point-1] */
   double in[4][8], out[4][8], lbnd[5], ubnd[5];
   /* astMapGet1C writes l bytes per string into a flat buffer */
   char cvals[10 * 31];

   if( *status != 0 ) return;

   astBegin;

   /* Put an example of an STCResourceProfile into file 0. */
   puteg( "fixtures/programs/teststc/teststc_eg1", 0, status );

   /* Use a new XmlChan to read an object from file 0, and simplify it. */
   obj = xmlread( 0, " ", status );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );

   /* Write out the object through a Channel and read it back. */
   checkdump( obj, "checkdump 1", status );

   /* Test simplify by negating and simplifying twice. */
   astNegate( (AstRegion *)obj );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );
   astNegate( (AstRegion *)obj );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );

   /* Check it is a STCResourceProfile */
   if( !astIsAStcResourceProfile( obj ) )
      stopit( status, "Error 1" );

   /* Check it contains an Interval. */
   if( !astIsAInterval( astGetStcRegion( (AstStc *)obj ) ) )
      stopit( status, "Error 1a" );

   /* Timescale should be TT. */
   if( strcmpTrim( safeGetC( obj, "timescale" ), "TT" ) != 0 )
      stopit( status, "Error 0a" );

   if( fabs( astGetD( obj, "TimeOrigin" ) - 51382.6666666 ) > 1.0e-7 )
      stopit( status, "Error 0b" );

   astGetRegionBounds( (AstRegion *)obj, lbnd, ubnd );
   if( lbnd[2] != 0.0 ) stopit( status, "Error 0c" );

   /* Try changing to TAI. */
   astSet( obj, "timescale=tai" );
   if( strcmpTrim( safeGetC( obj, "timescale" ), "TAI" ) != 0 )
      stopit( status, "Error 0d" );

   if( fabs( astGetD( obj, "TimeOrigin" ) - 51382.6662941667 ) > 1.0e-7 )
      stopit( status, "Error 0e" );

   astGetRegionBounds( (AstRegion *)obj, lbnd, ubnd );
   if( fabs( lbnd[2] ) > 1.0e-6 ) {
      printf( "%g\n", lbnd[2] );
      stopit( status, "Error 0f" );
   }

   /* Change back to TT. */
   astSet( obj, "timescale=tt" );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );
   if( strcmpTrim( safeGetC( obj, "timescale" ), "TT" ) != 0 )
      stopit( status, "Error 0g" );

   if( fabs( astGetD( obj, "TimeOrigin" ) - 51382.6666666 ) > 1.0e-7 )
      stopit( status, "Error 0h" );

   astGetRegionBounds( (AstRegion *)obj, lbnd, ubnd );
   if( fabs( lbnd[2] ) > 1.0e-6 )
      stopit( status, "Error 0i" );

   /* Other tests */
   if( astGetD( obj, "fillfactor" ) != 0.02 )
      stopit( status, "Error 1b" );

   if( strcmpTrim( safeGetC( obj, "ident" ), "AllSky-CXO" ) != 0 )
      stopit( status, "Error 1c" );

   if( strcmpTrim( safeGetC( obj, "domain(3)" ), "TIME" ) != 0 )
      stopit( status, "Error 2" );

   if( strcmpTrim( safeGetC( obj, "title(3)" ), "Time" ) != 0 )
      stopit( status, "Error 2a" );

   if( strcmpTrim( safeGetC( obj, "label(3)" ),
       "Modified Julian Date offset from 1999-07-23 16:00:00" ) != 0 )
      stopit( status, "Error 2b" );

   if( strcmpTrim( safeGetC( obj, "domain(1)" ), "SKY" ) != 0 )
      stopit( status, "Error 3" );

   if( strcmpTrim( safeGetC( obj, "system(1)" ), "ICRS" ) != 0 )
      stopit( status, "Error 3a" );

   if( strcmpTrim( safeGetC( obj, "label(1)" ), "Right ascension" ) != 0 )
      stopit( status, "Error 3b" );

   if( strcmpTrim( safeGetC( obj, "label(2)" ), "Declination" ) != 0 )
      stopit( status, "Error 3c" );

   if( strcmpTrim( safeGetC( obj, "title(2)" ), "Space" ) != 0 )
      stopit( status, "Error 3d" );

   if( strcmpTrim( safeGetC( obj, "domain(2)" ), "SKY" ) != 0 )
      stopit( status, "Error 4" );

   if( strcmpTrim( safeGetC( obj, "domain(4)" ), "SPECTRUM" ) != 0 )
      stopit( status, "Error 5" );

   if( strcmpTrim( safeGetC( obj, "system(4)" ), "ENER" ) != 0 )
      stopit( status, "Error 5a" );

   if( strcmpTrim( safeGetC( obj, "stdofrest" ), "Topocentric" ) != 0 )
      stopit( status, "Error 5b" );

   if( strcmpTrim( safeGetC( obj, "title(4)" ), "Energy (Topocentric)" ) != 0 )
      stopit( status, "Error 5c" );

   if( strcmpTrim( safeGetC( obj, "unit(4)" ), "keV" ) != 0 )
      stopit( status, "Error 5d" );

   if( astGetI( obj, "naxes" ) != 4 )
      stopit( status, "Error 6" );

   /*
    * astTranN test. C astTranN wants in[ncoord_in][indim].
    * Fortran in(point, coord) = C in[coord-1][point-1].
    * 8 points, 4 coords → in[4][8].
    */
   /* coord 0 (Fortran axis 1): all 8 points */
   in[0][0] = 10.0;  in[0][1] = -10.0; in[0][2] = 0.0;  in[0][3] = -1.0;
   in[0][4] = 10.0;  in[0][5] = -10.0; in[0][6] = 0.0;  in[0][7] = -1.0;
   /* coord 1 (Fortran axis 2) */
   in[1][0] = 10.0;  in[1][1] = 10.0;  in[1][2] = 0.0;  in[1][3] = 1.0;
   in[1][4] = 10.0;  in[1][5] = 10.0;  in[1][6] = 0.0;  in[1][7] = 1.0;
   /* coord 2 (Fortran axis 3: TIME) */
   in[2][0] = -0.1;  in[2][1] = 0.1;   in[2][2] = 100.0;  in[2][3] = -100.0;
   in[2][4] = -1000.0; in[2][5] = 1000.0; in[2][6] = 10.0;  in[2][7] = -10.0;
   /* coord 3 (Fortran axis 4: SPECTRUM) */
   in[3][0] = 0.11;  in[3][1] = 0.11;  in[3][2] = 0.13;  in[3][3] = 0.13;
   in[3][4] = 9.9;   in[3][5] = 9.9;   in[3][6] = 10.1;  in[3][7] = 10.1;
   /* Points 2 (idx 2) and 5 (idx 5) are inside */

   astTranN( (AstMapping *)obj, 8, 4, 8, (const double *)in,
             1, 4, 8, (double *)out );

   for( i = 0; i < 8; i++ ) {
      if( i == 2 || i == 5 ) {
         /* inside points */
         for( j = 0; j < 4; j++ ) {
            if( out[j][i] != in[j][i] ) {
               if( *status == 0 ) {
                  printf( "%d %d %g %g\n", i+1, j+1, out[j][i], in[j][i] );
                  stopit( status, "Error 7" );
               }
            }
         }
      } else {
         /* outside points */
         for( j = 0; j < 4; j++ ) {
            if( out[j][i] != AST__BAD ) {
               if( *status == 0 ) {
                  printf( "%d %d %g %g\n", i+1, j+1, out[j][i], in[j][i] );
                  stopit( status, "Error 8" );
               }
            }
         }
      }
   }

   /* AstroCoords */
   if( astGetStcNCoord( (AstStc *)obj ) != 1 )
      stopit( status, "Error 25" );

   km = astGetStcCoord( (AstStc *)obj, 1 );

   if( astMapSize( km ) != 4 )
      stopit( status, "Error 25b" );

   if( !astMapGet0A( km, AST__STCERROR, &r ) ) {
      stopit( status, "Error 26" );
   } else if( !astIsABox( r ) ) {
      stopit( status, "Error 27" );
   } else if( astGetI( r, "naxes" ) != 4 ) {
      stopit( status, "Error 28" );
   } else {
      fs = astConvert( obj, (AstObject *)r, " " );
      if( !fs ) {
         stopit( status, "Error 29" );
      } else {
         m = astGetMapping( fs, AST__BASE, AST__CURRENT );
         m = (AstMapping *)astSimplify( m );
         if( !astIsAUnitMap( m ) )
            stopit( status, "Error 30" );
      }

      astGetRegionBounds( (AstRegion *)r, lbnd, ubnd );

      if( fabs( lbnd[0] + 2.42406841e-06 ) > 0.0001e-6 )
         stopit( status, "Error 31a" );
      if( fabs( ubnd[0] - 2.42406841e-06 ) > 0.0001e-6 )
         stopit( status, "Error 31b" );
      if( fabs( lbnd[1] + 2.42406841e-06 ) > 0.0001e-6 )
         stopit( status, "Error 31c" );
      if( fabs( ubnd[1] - 2.42406841e-06 ) > 0.0001e-6 )
         stopit( status, "Error 31d" );
      if( fabs( 0.5 * (ubnd[2] + lbnd[2]) ) > 1.0e-10 )
         stopit( status, "Error 31e" );
      if( fabs( 0.5 * (ubnd[2] - lbnd[2]) - 0.578703703718e-09 ) > 1.0e-15 )
         stopit( status, "Error 31e2" );
      if( fabs( lbnd[3] - 5.01 ) > 0.00001 )
         stopit( status, "Error 31g" );
      if( fabs( ubnd[3] - 5.11 ) > 0.00001 )
         stopit( status, "Error 31h" );
   }

   if( !astMapGet1C( km, AST__STCNAME, 31, 10, &nval, cvals ) ) {
      stopit( status, "Error 32" );
   } else if( nval != 4 ) {
      stopit( status, "Error 33" );
   } else {
      if( strcmp( cvals + 0*31, "Position" ) != 0 )
         stopit( status, "Error 34a" );
      if( strcmp( cvals + 1*31, "Position" ) != 0 )
         stopit( status, "Error 34b" );
      if( strcmp( cvals + 2*31, "Time" ) != 0 )
         stopit( status, "Error 34c" );
      if( strcmp( cvals + 3*31, "Energy" ) != 0 )
         stopit( status, "Error 34d" );
   }

   if( !astMapGet0A( km, AST__STCRES, &r ) ) {
      stopit( status, "Error 35" );
   } else if( !astIsABox( r ) ) {
      stopit( status, "Error 36" );
   } else if( astGetI( r, "naxes" ) != 4 ) {
      stopit( status, "Error 37" );
   } else {
      fs = astConvert( obj, (AstObject *)r, " " );
      if( !fs ) {
         stopit( status, "Error 38" );
      } else {
         m = astGetMapping( fs, AST__BASE, AST__CURRENT );
         m = (AstMapping *)astSimplify( m );
         if( !astIsAUnitMap( m ) )
            stopit( status, "Error 39" );
      }

      astGetRegionBounds( (AstRegion *)r, lbnd, ubnd );

      if( fabs( lbnd[0] + 1.2120342e-06 ) > 0.0001e-6 )
         stopit( status, "Error 40a" );
      if( fabs( ubnd[0] - 1.2120342e-06 ) > 0.0001e-6 )
         stopit( status, "Error 40b" );
      if( fabs( lbnd[1] + 1.2120342e-06 ) > 0.0001e-6 )
         stopit( status, "Error 40c" );
      if( fabs( ubnd[1] - 1.2120342e-06 ) > 0.0001e-6 )
         stopit( status, "Error 40d" );
      if( fabs( 86400.0 * (ubnd[2] - lbnd[2]) - 1.6e-5 ) > 1.0e-10 )
         stopit( status, "Error 40e" );
      if( fabs( 0.5 * (ubnd[2] + lbnd[2]) ) > 1.0e-10 )
         stopit( status, "Error 40f" );
      if( fabs( lbnd[3] - 5.05 ) > 0.00001 )
         stopit( status, "Error 40g" );
      if( fabs( ubnd[3] - 5.07 ) > 0.00001 )
         stopit( status, "Error 40h" );
   }

   if( !astMapGet0A( km, AST__STCSIZE, &r ) ) {
      stopit( status, "Error 41" );
   } else if( !astIsABox( r ) ) {
      stopit( status, "Error 42" );
   } else if( astGetI( r, "naxes" ) != 4 ) {
      stopit( status, "Error 43" );
   } else {
      fs = astConvert( obj, (AstObject *)r, " " );
      if( !fs ) {
         stopit( status, "Error 44" );
      } else {
         m = astGetMapping( fs, AST__BASE, AST__CURRENT );
         m = (AstMapping *)astSimplify( m );
         if( !astIsAUnitMap( m ) )
            stopit( status, "Error 45" );
      }

      astGetRegionBounds( (AstRegion *)r, lbnd, ubnd );

      if( fabs( lbnd[0] + 0.00242406841 ) > 0.01e-6 )
         stopit( status, "Error 46a" );
      if( fabs( ubnd[0] - 0.00242406841 ) > 0.01e-6 )
         stopit( status, "Error 46b" );
      if( fabs( lbnd[1] + 0.00242406841 ) > 0.01e-6 )
         stopit( status, "Error 46c" );
      if( fabs( ubnd[1] - 0.00242406841 ) > 0.01e-6 )
         stopit( status, "Error 46d" );
      if( fabs( 86400.0 * (ubnd[2] - lbnd[2]) - 1000.0 ) > 1.0e-10 )
         stopit( status, "Error 46e" );
      if( fabs( 0.5 * (ubnd[2] + lbnd[2]) ) > 1.0e-10 )
         stopit( status, "Error 46f" );
      if( fabs( lbnd[3] - 4.06 ) > 0.001 )
         stopit( status, "Error 46g" );
      if( fabs( ubnd[3] - 6.06 ) > 0.001 )
         stopit( status, "Error 46h" );
   }

   /* Copy and change coordinate system to galactic. */
   obj2 = astCopy( obj );

   astSetL( obj2, "Adaptive", 0 );
   astSetC( obj2, "epoch", "2005" );
   astClear( obj2, "Adaptive" );

   astSetC( obj2, "system(1)", "galactic" );

   if( astGetStcNCoord( (AstStc *)obj2 ) != 1 )
      stopit( status, "Error 25b" );

   km = astGetStcCoord( (AstStc *)obj2, 1 );

   if( astMapSize( km ) != 3 )
      stopit( status, "Error 25bb" );

   if( !astMapGet0A( km, AST__STCERROR, &r ) ) {
      stopit( status, "Error 26b" );
   } else if( !astIsAPrism( r ) ) {
      stopit( status, "Error 27b" );
   } else if( astGetI( r, "naxes" ) != 4 ) {
      stopit( status, "Error 28b" );
   } else {
      fs = astConvert( obj2, (AstObject *)r, " " );
      if( !fs ) {
         stopit( status, "Error 29b" );
      } else {
         m = astGetMapping( fs, AST__BASE, AST__CURRENT );
         m = (AstMapping *)astSimplify( m );
         if( !astIsAUnitMap( m ) )
            stopit( status, "Error 30b" );
      }

      astGetRegionBounds( (AstRegion *)r, lbnd, ubnd );

      if( fabs( lbnd[0] - 1.68139639 ) > 1.0e-7 )
         stopit( status, "Error 31ab" );
      if( fabs( ubnd[0] - 1.68140922 ) > 1.0e-7 )
         stopit( status, "Error 31bb" );
      if( fabs( lbnd[1] + 1.05049161 ) > 1.0e-7 )
         stopit( status, "Error 31cb" );
      if( fabs( ubnd[1] + 1.05048523 ) > 1.0e-7 )
         stopit( status, "Error 31db" );
      if( fabs( 0.5 * 86400.0 * (ubnd[2] - lbnd[2]) - 5.0e-5 ) > 1.0e-10 )
         stopit( status, "Error 31eb" );
      if( fabs( 0.5 * 86400.0 * (ubnd[2] + lbnd[2]) ) > 1.0e-10 )
         stopit( status, "Error 31fb" );
      if( fabs( lbnd[3] - 5.01 ) > 0.000001 )
         stopit( status, "Error 31gb" );
      if( fabs( ubnd[3] - 5.11 ) > 0.000001 )
         stopit( status, "Error 31hb" );
   }

   /* After changing system, STCNAME should not be present. */
   if( astMapGet1C( km, AST__STCNAME, 31, 10, &nval, cvals ) )
      stopit( status, "Error 32b" );

   /* Uncertainty tests */
   {
      AstRegion *unc;
      unc = astGetUnc( (AstRegion *)obj, 1 );
      if( !unc ) stopit( status, "Error 9" );
      if( astGetUnc( unc, 0 ) != NULL )
         stopit( status, "Error 9a" );

      astGetRegionBounds( unc, lbnd, ubnd );

      if( fabs( lbnd[0] + 2.42406841e-06 ) > 0.0000001e-06 )
         stopit( status, "Error 10" );
      if( fabs( lbnd[1] + 2.42406841e-06 ) > 0.0000001e-06 )
         stopit( status, "Error 11" );
      if( fabs( lbnd[3] - 0.07 ) > 0.0001 )
         stopit( status, "Error 13" );
      if( fabs( ubnd[0] - 2.42406841e-06 ) > 0.0000001e-06 )
         stopit( status, "Error 14" );
      if( fabs( ubnd[1] - 2.42406841e-06 ) > 0.0000001e-06 )
         stopit( status, "Error 15" );
      if( fabs( ubnd[3] - 0.17 ) > 0.0001 )
         stopit( status, "Error 17" );
   }

   astSetC( obj, "Unit(4)", "J" );

   if( *status != 0 ) stopit( status, "Error 20" );

   /* Tests on reference values */
   if( astTest( obj, "RefRA(4)" ) )
      stopit( status, "Error 21" );

   if( astTest( obj, "RefDec(4)" ) )
      stopit( status, "Error 22" );

   astEnd;

   if( *status != 0 ) printf( "teststc: example 1 tests failed\n" );
}

/* ================================================================
 *  Example1b - Strict mode and warnings tests
 * ================================================================ */

static void Example1b( int *status ) {
   AstObject *obj;
   const char *value;

   if( *status != 0 ) return;

   astBegin;

   /* Test the Strict attribute. */
   puteg( "fixtures/programs/teststc/teststc_eg1", 0, status );

   /* Read with Strict=1 - should give AST__BADIN error. */
   obj = xmlread( 0, "Strict=1", status );
   (void)obj;
   if( astOK ) {
      stopit( status, "Error 1" );
   } else if( astStatus == AST__BADIN ) {
      astClearStatus;
   } else {
      astClearStatus;
      stopit( status, "Error 1" );
   }

   /* Read without Strict - should produce warnings. */
   puteg( "fixtures/programs/teststc/teststc_eg1", 0, status );
   obj = xmlread( 0, "Strict=0", status );

   if( warns_km == AST__NULL ) {
      stopit( status, "Error 2" );
   } else if( astMapSize( warns_km ) != 5 ) {
      stopit( status, "Error 3" );
   } else if( !astMapGet0C( warns_km, "Warning_1", &value ) ) {
      stopit( status, "Error 4" );
   } else {
      const char *expected =
         "astRead(XmlChan): Warning whilst reading a Position2D element: "
         "contains more than one <Size> element. AST can only use the first";
      if( strncmp( value, expected, strlen( expected ) ) != 0 )
         stopit( status, "Error 5" );
   }

   astEnd;

   if( *status != 0 ) printf( "teststc: example 1b tests failed\n" );
}

/* ================================================================
 *  Example2 - StcCatalogEntryLocation (5D: SKY+SKY+TIME+SPECTRUM+REDSHIFT, FK4)
 * ================================================================ */

static void Example2( int *status ) {
   AstObject *obj;
   int i, j;
   /* astTranN: in[ncoord][npoint], Fortran in(point,coord) = C in[coord-1][point-1] */
   double in[5][12], out[5][12];

   if( *status != 0 ) return;

   astBegin;

   puteg( "fixtures/programs/teststc/teststc_eg2", 0, status );
   obj = xmlread( 0, " ", status );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );

   /* Test simplify by negating and simplifying twice. */
   astNegate( (AstRegion *)obj );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );
   astNegate( (AstRegion *)obj );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );
   checkdump( obj, "checkdump 1", status );

   /* Check it is a StcCatalogEntryLocation */
   if( !astIsAStcCatalogEntryLocation( obj ) )
      stopit( status, "Error 1" );

   /* Check it is an Interval. */
   if( !astIsAInterval( astGetStcRegion( (AstStc *)obj ) ) )
      stopit( status, "Error 1a" );

   /* Check it has no uncertainty */
   if( astGetUnc( (AstRegion *)obj, 0 ) != NULL )
      stopit( status, "Error 1b" );

   /* Other tests */
   if( astGetI( obj, "naxes" ) != 5 )
      stopit( status, "Error 1ab" );

   if( astGetD( obj, "fillfactor" ) != 1.0 )
      stopit( status, "Error 1b" );

   if( strcmpTrim( safeGetC( obj, "ident" ), "RA6-18hDec20-70deg" ) != 0 )
      stopit( status, "Error 1c" );

   if( strcmpTrim( safeGetC( obj, "domain(3)" ), "TIME" ) != 0 )
      stopit( status, "Error 2" );

   if( strcmpTrim( safeGetC( obj, "title(3)" ),
       "Julian Date [TT] offset from 1968-05-23 12:00:00" ) != 0 )
      stopit( status, "Error 2a" );

   if( strcmpTrim( safeGetC( obj, "label(3)" ),
       "Julian Date offset from 1968-05-23 12:00:00" ) != 0 )
      stopit( status, "Error 2b" );

   if( strcmpTrim( safeGetC( obj, "domain(1)" ), "SKY" ) != 0 )
      stopit( status, "Error 3" );

   if( strcmpTrim( safeGetC( obj, "system(1)" ), "FK4" ) != 0 )
      stopit( status, "Error 3a" );

   if( strcmpTrim( safeGetC( obj, "label(1)" ), "Right ascension" ) != 0 )
      stopit( status, "Error 3b" );

   if( strcmpTrim( safeGetC( obj, "label(2)" ), "Declination" ) != 0 )
      stopit( status, "Error 3c" );

   if( strcmpTrim( safeGetC( obj, "title(2)" ), "PosEq" ) != 0 )
      stopit( status, "Error 3d" );

   if( astGetD( obj, "Equinox" ) != 1950.0 )
      stopit( status, "Error 3d" );

   if( strcmpTrim( safeGetC( obj, "domain(2)" ), "SKY" ) != 0 )
      stopit( status, "Error 4" );

   if( strcmpTrim( safeGetC( obj, "domain(4)" ), "SPECTRUM" ) != 0 )
      stopit( status, "Error 5" );

   if( strcmpTrim( safeGetC( obj, "system(4)" ), "WAVE" ) != 0 )
      stopit( status, "Error 5a" );

   if( strcmpTrim( safeGetC( obj, "stdofrest" ), "Topocentric" ) != 0 )
      stopit( status, "Error 5b" );

   if( astTest( obj, "title(4)" ) )
      stopit( status, "Error 5c" );

   if( astGetI( obj, "naxes" ) != 5 )
      stopit( status, "Error 6" );

   if( strcmpTrim( safeGetC( obj, "domain(5)" ), "REDSHIFT" ) != 0 )
      stopit( status, "Error 6a" );

   if( strcmpTrim( safeGetC( obj, "system(5)" ), "VOPT" ) != 0 )
      stopit( status, "Error 6b" );

   if( strcmpTrim( safeGetC( obj, "label(5)" ), "Optical velocity" ) != 0 )
      stopit( status, "Error 6c" );

   if( strcmpTrim( safeGetC( obj, "unit(5)" ), "km/s" ) != 0 )
      stopit( status, "Error 6d" );

   if( strcmpTrim( safeGetC( obj, "unit(4)" ), "Angstrom" ) != 0 )
      stopit( status, "Error 6e" );

   /* astTranN test data - 12 points x 5 dimensions
    * in[coord][point]: coord 0-4, points 0-11
    * Points 0, 6, 11 are inside. */
   /* coord 0 (RA) */
   in[0][0] = 4.71238;  in[0][1] = 4.71240;  in[0][2] = 4.71238;  in[0][3] = 4.71238;
   in[0][4] = 4.71238;  in[0][5] = 4.71238;  in[0][6] = 1.5709;   in[0][7] = 1.5707;
   in[0][8] = 1.5709;   in[0][9] = 1.5709;   in[0][10] = 1.5709;  in[0][11] = 1.5709;
   /* coord 1 (Dec) */
   in[1][0] = 1.2216;   in[1][1] = 1.2216;   in[1][2] = 1.2218;   in[1][3] = 1.2216;
   in[1][4] = 1.2216;   in[1][5] = 1.2216;   in[1][6] = 0.3492;   in[1][7] = 0.3492;
   in[1][8] = 0.3490;   in[1][9] = 0.3492;   in[1][10] = 0.3492;  in[1][11] = 0.3492;
   /* coord 2 (Time) */
   in[2][0] = 1;        in[2][1] = 1;        in[2][2] = 1;        in[2][3] = -0.6;
   in[2][4] = 1;        in[2][5] = 1;        in[2][6] = 999.6;    in[2][7] = 999.6;
   in[2][8] = 999.6;    in[2][9] = 1000.4;   in[2][10] = 999.6;   in[2][11] = 999.6;
   /* coord 3 (Spectrum) */
   in[3][0] = 6499.9;   in[3][1] = 6499.9;   in[3][2] = 6499.9;   in[3][3] = 6499.9;
   in[3][4] = 6500.1;   in[3][5] = 6499.9;   in[3][6] = 5000.1;   in[3][7] = 5000.1;
   in[3][8] = 5000.1;   in[3][9] = 5000.1;   in[3][10] = 4999.9;  in[3][11] = 5000.1;
   /* coord 4 (Redshift) */
   in[4][0] = 9999.9;   in[4][1] = 9999.9;   in[4][2] = 9999.9;   in[4][3] = 9999.9;
   in[4][4] = 9999.9;   in[4][5] = 10000.1;  in[4][6] = 5000;     in[4][7] = 5000;
   in[4][8] = 5000;     in[4][9] = 5000;     in[4][10] = 5000;    in[4][11] = 1000;

   astTranN( (AstMapping *)obj, 12, 5, 12, (const double *)in,
             1, 5, 12, (double *)out );

   for( i = 0; i < 12; i++ ) {
      if( i == 0 || i == 6 || i == 11 ) {
         /* inside points */
         for( j = 0; j < 5; j++ ) {
            if( out[j][i] != in[j][i] ) {
               if( *status == 0 ) {
                  printf( "%d %d %g %g\n", i+1, j+1, out[j][i], in[j][i] );
                  stopit( status, "Error 7" );
               }
            }
         }
      } else {
         /* outside points */
         for( j = 0; j < 5; j++ ) {
            if( out[j][i] != AST__BAD ) {
               if( *status == 0 ) {
                  printf( "%d %d %g %g\n", i+1, j+1, out[j][i], in[j][i] );
                  stopit( status, "Error 8" );
               }
            }
         }
      }
   }

   /* Tests on reference values */
   if( astTest( obj, "RefRA(4)" ) )
      stopit( status, "Error 9" );

   if( astTest( obj, "RefDec(4)" ) )
      stopit( status, "Error 10" );

   if( astTest( obj, "RestFreq(5)" ) )
      stopit( status, "Error 14" );

   astEnd;

   if( *status != 0 ) printf( "teststc: example 2 tests failed\n" );
}

/* ================================================================
 *  Example3 - StcCatalogEntryLocation with epoch and RestFreq
 * ================================================================ */

static void Example3( int *status ) {
   AstObject *obj;
   int i, j;
   /* astTranN: in[ncoord][npoint], Fortran in(point,coord) = C in[coord-1][point-1] */
   double in[5][12], out[5][12];

   if( *status != 0 ) return;

   astBegin;

   puteg( "fixtures/programs/teststc/teststc_eg3", 0, status );
   obj = xmlread( 0, " ", status );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );

   /* Test simplify by negating and simplifying twice. */
   astNegate( (AstRegion *)obj );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );
   astNegate( (AstRegion *)obj );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );
   checkdump( obj, "checkdump 1", status );

   /* Check it is a StcCatalogEntryLocation */
   if( !astIsAStcCatalogEntryLocation( obj ) )
      stopit( status, "Error 1" );

   /* Check it is an Interval. */
   if( !astIsAInterval( astGetStcRegion( (AstStc *)obj ) ) ) {
      printf( "%s\n", safeGetC( astGetStcRegion( (AstStc *)obj ), "Class" ) );
      stopit( status, "Error 1a" );
   }

   /* Check it has no uncertainty */
   if( astGetUnc( (AstRegion *)obj, 0 ) != NULL )
      stopit( status, "Error 1b" );

   /* Check it has 5 axes. */
   if( astGetI( obj, "naxes" ) != 5 )
      stopit( status, "Error 1ab" );

   /* Check the rest frequency for axis 5 (redshift) is 5000 Angstrom */
   if( fabs( astGetD( obj, "restfreq(5)" ) - 599584.916 ) > 0.001 )
      stopit( status, "Error A1" );

   /* Check the epoch for all axes is JD 2440000 */
   if( fabs( astGetD( obj, "epoch(1)" ) - 1968.39212 ) > 0.00001 )
      stopit( status, "Error B1" );
   if( fabs( astGetD( obj, "epoch(2)" ) - 1968.39212 ) > 0.00001 )
      stopit( status, "Error B2" );
   if( fabs( astGetD( obj, "epoch(3)" ) - 1968.39212 ) > 0.00001 )
      stopit( status, "Error B3" );
   if( fabs( astGetD( obj, "epoch(4)" ) - 1968.39212 ) > 0.00001 )
      stopit( status, "Error B4" );
   if( fabs( astGetD( obj, "epoch(5)" ) - 1968.39212 ) > 0.00001 )
      stopit( status, "Error B5" );

   /* Other tests */
   if( astGetD( obj, "fillfactor" ) != 1.0 )
      stopit( status, "Error 1b" );

   if( strcmpTrim( safeGetC( obj, "ident" ), "RA6-18hDec20-70deg" ) != 0 )
      stopit( status, "Error 1c" );

   if( strcmpTrim( safeGetC( obj, "domain(3)" ), "TIME" ) != 0 )
      stopit( status, "Error 2" );

   if( strcmpTrim( safeGetC( obj, "label(3)" ),
       "Julian Date offset from 1968-05-23 12:00:00" ) != 0 )
      stopit( status, "Error 2b" );

   if( strcmpTrim( safeGetC( obj, "domain(1)" ), "SKY" ) != 0 )
      stopit( status, "Error 3" );

   if( strcmpTrim( safeGetC( obj, "system(1)" ), "FK4" ) != 0 )
      stopit( status, "Error 3a" );

   if( strcmpTrim( safeGetC( obj, "label(1)" ), "Right ascension" ) != 0 )
      stopit( status, "Error 3b" );

   if( strcmpTrim( safeGetC( obj, "label(2)" ), "Declination" ) != 0 )
      stopit( status, "Error 3c" );

   if( strcmpTrim( safeGetC( obj, "title(2)" ), "PosEq" ) != 0 )
      stopit( status, "Error 3d" );

   if( astGetD( obj, "Equinox" ) != 1950.0 )
      stopit( status, "Error 3d" );

   if( strcmpTrim( safeGetC( obj, "domain(2)" ), "SKY" ) != 0 )
      stopit( status, "Error 4" );

   if( strcmpTrim( safeGetC( obj, "domain(4)" ), "SPECTRUM" ) != 0 )
      stopit( status, "Error 5" );

   if( strcmpTrim( safeGetC( obj, "system(4)" ), "WAVE" ) != 0 )
      stopit( status, "Error 5a" );

   if( strcmpTrim( safeGetC( obj, "stdofrest" ), "Topocentric" ) != 0 )
      stopit( status, "Error 5b" );

   if( astTest( obj, "title(4)" ) )
      stopit( status, "Error 5c" );

   if( astGetI( obj, "naxes" ) != 5 )
      stopit( status, "Error 6" );

   if( strcmpTrim( safeGetC( obj, "domain(5)" ), "REDSHIFT" ) != 0 )
      stopit( status, "Error 6a" );

   if( strcmpTrim( safeGetC( obj, "system(5)" ), "VOPT" ) != 0 )
      stopit( status, "Error 6b" );

   if( strcmpTrim( safeGetC( obj, "label(5)" ), "Optical velocity" ) != 0 )
      stopit( status, "Error 6c" );

   if( strcmpTrim( safeGetC( obj, "unit(5)" ), "km/s" ) != 0 )
      stopit( status, "Error 6d" );

   if( strcmpTrim( safeGetC( obj, "unit(4)" ), "Angstrom" ) != 0 )
      stopit( status, "Error 6e" );

   /* astTranN test data - 12 points x 5 dimensions
    * in[coord][point]: coord 0-4, points 0-11
    * Points 0, 6, 11 are inside. */
   /* coord 0 (RA) */
   in[0][0] = 4.71238;  in[0][1] = 4.71240;  in[0][2] = 4.71238;  in[0][3] = 4.71238;
   in[0][4] = 4.71238;  in[0][5] = 4.71238;  in[0][6] = 1.5709;   in[0][7] = 1.5707;
   in[0][8] = 1.5709;   in[0][9] = 1.5709;   in[0][10] = 1.5709;  in[0][11] = 1.5709;
   /* coord 1 (Dec) */
   in[1][0] = 1.2216;   in[1][1] = 1.2216;   in[1][2] = 1.2218;   in[1][3] = 1.2216;
   in[1][4] = 1.2216;   in[1][5] = 1.2216;   in[1][6] = 0.3492;   in[1][7] = 0.3492;
   in[1][8] = 0.3490;   in[1][9] = 0.3492;   in[1][10] = 0.3492;  in[1][11] = 0.3492;
   /* coord 2 (Time) */
   in[2][0] = 0.0;      in[2][1] = 0.0;      in[2][2] = 0.0;      in[2][3] = 0.5;
   in[2][4] = 0.0;      in[2][5] = 0.0;      in[2][6] = 0.0;      in[2][7] = 0.0;
   in[2][8] = 0.0;      in[2][9] = 39999.4;  in[2][10] = 0.0;     in[2][11] = 0.0;
   /* coord 3 (Spectrum) */
   in[3][0] = 5000;     in[3][1] = 5000;     in[3][2] = 5000;     in[3][3] = 5000;
   in[3][4] = 6500.1;   in[3][5] = 5000;     in[3][6] = 5000;     in[3][7] = 5000;
   in[3][8] = 5000;     in[3][9] = 5000;     in[3][10] = 4999.9;  in[3][11] = 5000;
   /* coord 4 (Redshift) */
   in[4][0] = 9999.9;   in[4][1] = 9999.9;   in[4][2] = 9999.9;   in[4][3] = 9999.9;
   in[4][4] = 9999.9;   in[4][5] = 10000.1;  in[4][6] = 5000;     in[4][7] = 5000;
   in[4][8] = 5000;     in[4][9] = 5000;     in[4][10] = 5000;    in[4][11] = 1000;

   astTranN( (AstMapping *)obj, 12, 5, 12, (const double *)in,
             1, 5, 12, (double *)out );

   for( i = 0; i < 12; i++ ) {
      if( i == 0 || i == 6 || i == 11 ) {
         /* inside points */
         for( j = 0; j < 5; j++ ) {
            if( out[j][i] != in[j][i] ) {
               if( *status == 0 ) {
                  printf( "%d %d %g %g\n", i+1, j+1, out[j][i], in[j][i] );
                  stopit( status, "Error 7" );
               }
            }
         }
      } else {
         /* outside points */
         for( j = 0; j < 5; j++ ) {
            if( out[j][i] != AST__BAD ) {
               if( *status == 0 ) {
                  printf( "%d %d %g %g\n", i+1, j+1, out[j][i], in[j][i] );
                  stopit( status, "Error 8" );
               }
            }
         }
      }
   }

   /* Tests on reference values */
   if( astTest( obj, "RefRA(4)" ) )
      stopit( status, "Error 9" );

   if( astTest( obj, "RefDec(4)" ) )
      stopit( status, "Error 10" );

   if( !astTest( obj, "Epoch(4)" ) )
      stopit( status, "Error 11" );

   if( !astTest( obj, "Epoch(1)" ) )
      stopit( status, "Error 12" );

   if( !astTest( obj, "Epoch(2)" ) )
      stopit( status, "Error 13" );

   if( !astTest( obj, "RestFreq(5)" ) )
      stopit( status, "Error 14" );

   astEnd;

   if( *status != 0 ) printf( "teststc: example 3 tests failed\n" );
}

/* ================================================================
 *  Example4 - STCSearchLocation (Prism, ICRS)
 * ================================================================ */

static void Example4( int *status ) {
   AstObject *obj;
   AstFrame *frm;
   int i, j;
   /* astTranN: in[ncoord][npoint], Fortran in(point,coord) = C in[coord-1][point-1] */
   double in[4][12], out[4][12];

   if( *status != 0 ) return;

   astBegin;

   puteg( "fixtures/programs/teststc/teststc_eg4", 0, status );
   obj = xmlread( 0, " ", status );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );

   /* Test simplify by negating and simplifying twice. */
   astNegate( (AstRegion *)obj );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );
   astNegate( (AstRegion *)obj );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );
   checkdump( obj, "checkdump 1", status );

   /* Check it is a STCSearchLocation */
   if( !astIsAStcSearchLocation( obj ) )
      stopit( status, "Error 1" );

   /* Check it is a Prism. */
   if( !astIsAPrism( astGetStcRegion( (AstStc *)obj ) ) )
      stopit( status, "Error 1a" );

   /* Check it has no uncertainty */
   if( astGetUnc( (AstRegion *)obj, 0 ) != NULL )
      stopit( status, "Error 1b" );

   /* Other tests */
   if( astGetI( obj, "naxes" ) != 4 )
      stopit( status, "Error 1ab" );

   if( astGetD( obj, "fillfactor" ) != 1.0 )
      stopit( status, "Error 1b" );

   if( strcmpTrim( safeGetC( obj, "ident" ), "M81" ) != 0 )
      stopit( status, "Error 1c" );

   if( strcmpTrim( safeGetC( obj, "domain(3)" ), "TIME" ) != 0 )
      stopit( status, "Error 2" );

   if( strcmpTrim( safeGetC( obj, "label(3)" ),
       "Modified Julian Date offset from 1900-01-01" ) != 0 )
      stopit( status, "Error 2b" );

   if( strcmpTrim( safeGetC( obj, "domain(1)" ), "SKY" ) != 0 )
      stopit( status, "Error 3" );

   if( strcmpTrim( safeGetC( obj, "system(1)" ), "ICRS" ) != 0 )
      stopit( status, "Error 3a" );

   if( strcmpTrim( safeGetC( obj, "label(1)" ), "Right ascension" ) != 0 )
      stopit( status, "Error 3b" );

   if( strcmpTrim( safeGetC( obj, "label(2)" ), "Declination" ) != 0 )
      stopit( status, "Error 3c" );

   if( strcmpTrim( safeGetC( obj, "title(2)" ), "Equatorial" ) != 0 )
      stopit( status, "Error 3d" );

   if( astTest( obj, "Equinox" ) )
      stopit( status, "Error 3d2" );

   if( strcmpTrim( safeGetC( obj, "domain(2)" ), "SKY" ) != 0 )
      stopit( status, "Error 4" );

   if( strcmpTrim( safeGetC( obj, "domain(4)" ), "SPECTRUM" ) != 0 )
      stopit( status, "Error 5" );

   if( strcmpTrim( safeGetC( obj, "system(4)" ), "WAVE" ) != 0 )
      stopit( status, "Error 5a" );

   if( strcmpTrim( safeGetC( obj, "stdofrest" ), "Barycentric" ) != 0 )
      stopit( status, "Error 5b" );

   if( strcmpTrim( safeGetC( obj, "title(4)" ), "Wavelength" ) != 0 )
      stopit( status, "Error 5c" );

   if( astGetI( obj, "naxes" ) != 4 )
      stopit( status, "Error 6" );

   if( strcmpTrim( safeGetC( obj, "unit(4)" ), "Angstrom" ) != 0 )
      stopit( status, "Error 6e" );

   frm = astGetRegionFrame( (AstRegion *)obj );
   if( strcmpTrim( safeGetC( (AstObject *)frm, "Ident" ), "ICRS-TT-BARY" ) != 0 )
      stopit( status, "Error 7" );

   /* Tests on reference values */
   if( astTest( obj, "RefRA(4)" ) )
      stopit( status, "Error 9" );

   if( astTest( obj, "RefDec(4)" ) )
      stopit( status, "Error 10" );

   if( astTest( obj, "RestFreq(4)" ) )
      stopit( status, "Error 14" );

   if( fabs( astGetD( obj, "Epoch(3)" ) - 1900.00051056532 ) > 0.0001 )
      stopit( status, "Error 12b" );

   if( fabs( astGetD( obj, "TimeOrigin" ) - 15020.0 ) > 0.0001 )
      stopit( status, "Error 12c" );

   /* astTranN test data - 12 points x 4 dimensions
    * in[coord][point]: coord 0-3, points 0-11
    * Points 0 and 6 are inside. */
   /* coord 0 (RA) */
   in[0][0] = 2.51126532207628;  in[0][1] = 2.5094191311777;   in[0][2] = 2.51126532207628;
   in[0][3] = 2.51126532207628;  in[0][4] = 2.5094191311777;   in[0][5] = 2.51126532207628;
   in[0][6] = 2.51682141503858;  in[0][7] = 2.51524001365674;  in[0][8] = 2.51682141503858;
   in[0][9] = 2.51682141503858;  in[0][10] = 2.51524001365674; in[0][11] = 2.51682141503858;
   /* coord 1 (Dec) */
   in[1][0] = 1.22218015796595;  in[1][1] = 1.22248014367694;  in[1][2] = 1.22218015796595;
   in[1][3] = 1.22218015796595;  in[1][4] = 1.22248014367694;  in[1][5] = 1.22218015796595;
   in[1][6] = 1.18868060989363;  in[1][7] = 1.18830732379242;  in[1][8] = 1.18868060989363;
   in[1][9] = 1.18868060989363;  in[1][10] = 1.18830732379242; in[1][11] = 1.18868060989363;
   /* coord 2 (Time) */
   in[2][0] = 0.01;   in[2][1] = 0.01;   in[2][2] = 0.01;   in[2][3] = -0.2;
   in[2][4] = -0.2;   in[2][5] = -0.2;   in[2][6] = 0.01;   in[2][7] = 0.01;
   in[2][8] = 0.01;   in[2][9] = -0.2;   in[2][10] = -0.2;  in[2][11] = -0.2;
   /* coord 3 (Spectrum) */
   in[3][0] = 4001;   in[3][1] = 4001;   in[3][2] = 3999;   in[3][3] = 4001;
   in[3][4] = 4001;   in[3][5] = 3999;   in[3][6] = 6999;   in[3][7] = 6999;
   in[3][8] = 7001;   in[3][9] = 6999;   in[3][10] = 6999;  in[3][11] = 7001;

   astTranN( (AstMapping *)obj, 12, 4, 12, (const double *)in,
             1, 4, 12, (double *)out );

   for( i = 0; i < 12; i++ ) {
      if( i == 0 || i == 6 ) {
         /* inside points */
         for( j = 0; j < 4; j++ ) {
            if( out[j][i] != in[j][i] ) {
               if( *status == 0 ) {
                  printf( "%d %d %g %g\n", i+1, j+1, out[j][i], in[j][i] );
                  stopit( status, "Error 13c" );
               }
            }
         }
      } else {
         /* outside points */
         for( j = 0; j < 4; j++ ) {
            if( out[j][i] != AST__BAD ) {
               if( *status == 0 ) {
                  printf( "%d %d %g %g\n", i+1, j+1, out[j][i], in[j][i] );
                  stopit( status, "Error 14c" );
               }
            }
         }
      }
   }

   astEnd;

   if( *status != 0 ) printf( "teststc: example 4 tests failed\n" );
}

/* ================================================================
 *  Example5 - STCObsDataLocation (Prism, ObsLon/ObsLat)
 * ================================================================ */

static void Example5( int *status ) {
   AstObject *obj;
   AstRegion *unc;
   double lbnd[4], ubnd[4];

   if( *status != 0 ) return;

   astBegin;

   puteg( "fixtures/programs/teststc/teststc_eg5", 0, status );
   obj = xmlread( 0, " ", status );
   checkdump( obj, "checkdump 2", status );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );

   /* Test simplify by negating and simplifying twice. */
   astNegate( (AstRegion *)obj );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );
   astNegate( (AstRegion *)obj );
   obj = (AstObject *)astSimplify( (AstMapping *)obj );
   checkdump( obj, "checkdump 1", status );

   /* Check it is a STCObsDataLocation */
   if( !astIsAStcObsDataLocation( obj ) )
      stopit( status, "Error 1" );

   /* Check it contains a Prism. */
   if( !astIsAPrism( astGetStcRegion( (AstStc *)obj ) ) )
      stopit( status, "Error 1a" );

   /* Other tests */
   if( astGetD( obj, "fillfactor" ) != 1.0 )
      stopit( status, "Error 1b" );

   if( strcmpTrim( safeGetC( obj, "ident" ), "M81" ) != 0 )
      stopit( status, "Error 1c" );

   if( strcmpTrim( safeGetC( obj, "domain(3)" ), "TIME" ) != 0 )
      stopit( status, "Error 2" );

   if( strcmpTrim( safeGetC( obj, "label(3)" ),
       "Modified Julian Date offset from 2004-07-15 08:23:56" ) != 0 )
      stopit( status, "Error 2b" );

   if( strcmpTrim( safeGetC( obj, "domain(1)" ), "SKY" ) != 0 )
      stopit( status, "Error 3" );

   if( strcmpTrim( safeGetC( obj, "system(1)" ), "ICRS" ) != 0 )
      stopit( status, "Error 3a" );

   if( strcmpTrim( safeGetC( obj, "label(1)" ), "Right ascension" ) != 0 )
      stopit( status, "Error 3b" );

   if( strcmpTrim( safeGetC( obj, "label(2)" ), "Declination" ) != 0 )
      stopit( status, "Error 3c" );

   if( strcmpTrim( safeGetC( obj, "title(2)" ), "Equatorial" ) != 0 )
      stopit( status, "Error 3d" );

   if( strcmpTrim( safeGetC( obj, "domain(2)" ), "SKY" ) != 0 )
      stopit( status, "Error 4" );

   if( strcmpTrim( safeGetC( obj, "domain(4)" ), "SPECTRUM" ) != 0 )
      stopit( status, "Error 5" );

   if( strcmpTrim( safeGetC( obj, "system(4)" ), "WAVE" ) != 0 )
      stopit( status, "Error 5a" );

   if( strcmpTrim( safeGetC( obj, "stdofrest" ), "Topocentric" ) != 0 )
      stopit( status, "Error 5b" );

   if( strcmpTrim( safeGetC( obj, "title(4)" ), "Wavelength" ) != 0 )
      stopit( status, "Error 5c" );

   if( strcmpTrim( safeGetC( obj, "unit(4)" ), "Angstrom" ) != 0 )
      stopit( status, "Error 5d" );

   if( astGetI( obj, "naxes" ) != 4 )
      stopit( status, "Error 6" );

   astGetRegionBounds( (AstRegion *)obj, lbnd, ubnd );

   lbnd[0] = 0.5 * (lbnd[0] + ubnd[0]);
   lbnd[1] = 0.5 * (lbnd[1] + ubnd[1]);
   lbnd[2] = 0.5 * (lbnd[2] + ubnd[2]);
   lbnd[3] = 0.5 * (lbnd[3] + ubnd[3]);

   if( fabs( lbnd[0] - 2.59858948190075 ) > 1e-06 )
      stopit( status, "Error 10" );
   if( fabs( lbnd[1] - 1.20541670934471 ) > 1e-06 )
      stopit( status, "Error 11" );
   if( fabs( lbnd[2] ) > 1e-5 )
      stopit( status, "Error 12" );
   if( fabs( lbnd[3] - 4600 ) > 0.0001 )
      stopit( status, "Error 13" );
   if( fabs( ubnd[0] - 2.61080678666471 ) > 1e-06 )
      stopit( status, "Error 14" );
   if( fabs( ubnd[1] - 1.2097800324747 ) > 1e-06 )
      stopit( status, "Error 15" );
   if( fabs( ubnd[2] - 380.0 ) > 1e-5 )
      stopit( status, "Error 16" );
   if( fabs( ubnd[3] - 4800 ) > 0.0001 )
      stopit( status, "Error 17" );

   if( strcmpTrim( safeGetC( obj, "ObsLon" ), "W111:35:39.84" ) != 0 )
      stopit( status, "Error 18" );
   if( strcmpTrim( safeGetC( obj, "ObsLat" ), "N31:57:30.96" ) != 0 )
      stopit( status, "Error 19" );

   unc = astGetUnc( (AstRegion *)obj, 1 );
   if( !unc ) stopit( status, "Error 20" );

   astGetRegionBounds( unc, lbnd, ubnd );

   lbnd[0] = 0.5 * (lbnd[0] + ubnd[0]);
   lbnd[1] = 0.5 * (lbnd[1] + ubnd[1]);
   lbnd[2] = 0.5 * (lbnd[2] + ubnd[2]);
   lbnd[3] = 0.5 * (lbnd[3] + ubnd[3]);

   if( fabs( lbnd[0] - 2.59858948190075 ) > 1e-05 )
      stopit( status, "Error 21" );
   if( fabs( lbnd[1] - 1.20541670934471 ) > 1e-05 )
      stopit( status, "Error 22" );
   if( fabs( lbnd[2] ) > 1.0e-05 )
      stopit( status, "Error 23" );
   if( fabs( lbnd[3] - 4600.0 ) > 0.0001 )
      stopit( status, "Error 24" );
   if( fabs( ubnd[0] - 2.59859209989462 ) > 1e-05 )
      stopit( status, "Error 25" );
   if( fabs( ubnd[1] - 1.20541932733859 ) > 1e-05 )
      stopit( status, "Error 26" );
   if( fabs( ubnd[2] - 0.380314321262176e-03 ) > 1e-05 )
      stopit( status, "Error 27" );
   if( fabs( ubnd[3] - 4600.0002 ) > 0.000001 )
      stopit( status, "Error 28" );

   astEnd;

   if( *status != 0 ) printf( "teststc: example 5 tests failed\n" );
}

/* ================================================================
 *  Main
 * ================================================================ */

int main( void ) {
   int status = 0;
   astWatch( &status );
   astBegin;

   Example5( &status );
   Example1( &status );
   Example1b( &status );
   Example4( &status );
   misc( &status );
   Example3( &status );
   Example2( &status );

   astEnd;

   if( status == 0 ) {
      printf( " All Stc tests passed\n" );
   } else {
      printf( "Stc tests failed\n" );
   }

   return status;
}
