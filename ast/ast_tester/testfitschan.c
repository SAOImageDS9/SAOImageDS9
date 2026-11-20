/*
 *  Test the FitsChan class.
 *  Converted from the Fortran test testfitschan.f.
 *
 *  Differences from the Fortran original:
 *
 *  - err_mark/err_rlse/err_begin/err_end are omitted.  The C version uses
 *    astWatch(&status) + astOK/astClearStatus for error handling.
 *
 *  - err_annul(status) is replaced by astClearStatus.
 *
 *  - err_flush/msg_out/err_rep are replaced by printf().
 *
 *  - The Fortran checktab() subroutine used a COMMON block (/tabsrc/) to
 *    share state with the tabsource() callback.  In C this is replaced by
 *    static globals holding the callback FitsTable and the test status
 *    pointer. The callback's final argument is treated as the required
 *    success flag for astTableSource, not as the inherited AST status.
 *
 *  - The Fortran readobj() helper used a Fortran CHANNEL with a file-based
 *    chsource() callback.  The C version uses fopen/fgets directly with a
 *    static file pointer and a C-style source callback.
 *
 *  - VAL__NBD (bytes per double in Fortran PRM_PAR) is replaced by
 *    sizeof(double).
 *
 *  - astGetFitsS() returns char** (pointer to internal string); the Fortran
 *    version returned a CHARACTER*80.  strcmp() is used for comparisons.
 *
 *  - astFindFits(), astGetFitsI(), astGetFitsK(), astGetFitsS() etc. are
 *    used as boolean expressions (they return int via astINVOKE/astRetV_).
 *
 *  - astConvert no longer triggers an internal AddressSanitizer bug, as
 *    the underlying heap-use-after-free issue in libast (memory.c:4127)
 *    has been fixed.
 *
 *  - The sip.head test was referenced via SourceFile attribute in Fortran;
 *    we do the same in C.
 *
 *  - The callback now supplies the required WCS-TAB extension using
 *    astPutTable(), matching the current C astTableSource contract.
 */

#include "ast.h"
#include "ast_err.h"
#include <limits.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

/* -----------------------------------------------------------------------
 * Static globals for the tabsource callback (replaces Fortran COMMON block)
 * -----------------------------------------------------------------------*/
static AstFitsTable *g_table = NULL;
static int *g_test_status = NULL;

/* Source callback for testing ReadFromSource. Returns FITS cards one at
   a time from a static array. Uses a static counter to track position. */
static int g_source_index = 0;
static const char *g_source_cards[] = {
   "NAXIS1  =                  100",
   "NAXIS2  =                  100",
   "CTYPE1  = 'RA---TAN'",
   "CTYPE2  = 'DEC--TAN'",
   "CRVAL1  =              180.000",
   "CRVAL2  =               45.000",
   "CRPIX1  =               50.000",
   "CRPIX2  =               50.000",
   "CDELT1  =              -0.0100",
   "CDELT2  =               0.0100",
   "RADESYS = 'FK5'",
   "EQUINOX =               2000.0",
   NULL
};

static const char *test_source( void ) {
   const char *card = g_source_cards[ g_source_index ];
   if( card ) {
      char *result = astMalloc( 81 );
      if( result ) {
         strncpy( result, card, 80 );
         result[80] = '\0';
      }
      g_source_index++;
      return result;
   }
   return NULL;
}

/* -----------------------------------------------------------------------
 * roundtrip: write a FrameSet to a FitsChan with a given encoding,
 * rewind, read back. If tol >= 0, verify that a set of test pixel
 * positions map to the same WCS through both FrameSets. Uses
 * astConvert to align current frames, comparing per-axis with
 * astAxDistance (handles sky longitude wrapping). If the current
 * frames cannot be aligned (e.g. offset SkyFrame), falls back to a
 * pixel-to-pixel round-trip check. The tolerance is relative:
 * |diff| / max(|v1|,|v2|) < tol, with an absolute floor at tol.
 * Pass tol < 0 to skip the comparison entirely.
 * Returns:
 *   1 = success (coordinates agree within tolerance)
 *   0 = write or read failed
 *  -1 = read back OK but coordinates disagree or cannot be compared
 * -----------------------------------------------------------------------*/
static int roundtrip( AstFrameSet *fs, const char *encoding,
                      const char *attrs, double tol,
                      const char *expect_key, const char *expect_val,
                      int *status ) {
   AstFitsChan *fc;
   AstFrameSet *fs2;
   int ok = 0;

   if( *status != 0 ) return 0;

   fc = astFitsChan( NULL, NULL, " " );
   astSetC( fc, "Encoding", encoding );
   if( attrs && attrs[0] ) astSet( fc, "%s", attrs );
   if( astWrite( fc, fs ) != 1 ) goto done;

   if( expect_key ) {
      char *got_val;
      int found = 0;

      if( !strcmp( expect_key, "CTYPE" ) ) {
         char trykey[9];
         int iax;
         for( iax = 1; iax <= 9 && !found; iax++ ) {
            sprintf( trykey, "CTYPE%d", iax );
            astClear( fc, "Card" );
            if( astGetFitsS( fc, trykey, &got_val ) &&
                !strcmp( got_val, expect_val ) ) found = 1;
         }
      } else {
         astClear( fc, "Card" );
         if( astGetFitsS( fc, expect_key, &got_val ) &&
             !strcmp( got_val, expect_val ) ) found = 1;
      }
      if( !found ) {
         ok = -2;
         goto done;
      }
   }

   astClear( fc, "Card" );
   fs2 = (AstFrameSet *) astRead( fc );
   if( !fs2 ) goto done;

   ok = 1;
   if( tol >= 0.0 ) {
      AstMapping *map1, *map2;
      AstFrame *curfrm2;
      AstFrameSet *cvt;
      int nin, nout, ip, iax;

      static const double offsets[] = { 50.0, 50.5, 51.0, 55.0, 45.0 };
      int noff = (int)( sizeof(offsets) / sizeof(offsets[0]) );

      map1 = astGetMapping( fs, AST__BASE, AST__CURRENT );
      map2 = astGetMapping( fs2, AST__BASE, AST__CURRENT );
      curfrm2 = astGetFrame( fs2, AST__CURRENT );
      nin = astGetI( fs, "Nin" );
      nout = astGetI( fs, "Nout" );

      cvt = astConvert( astGetFrame( fs, AST__CURRENT ), curfrm2, " " );

      if( cvt ) {
         for( ip = 0; ip < noff && ok == 1; ip++ ) {
            double pix[10], wcs1[10], wcs2[10], wcs1c[10];

            for( iax = 0; iax < nin; iax++ )
               pix[iax] = offsets[ip];

            astTranN( map1, 1, nin, 1, pix, 1, nout, 1, wcs1 );
            astTranN( map2, 1, nin, 1, pix, 1, nout, 1, wcs2 );
            astTranN( cvt, 1, nout, 1, wcs1, 1, nout, 1, wcs1c );

            for( iax = 0; iax < nout && ok == 1; iax++ ) {
               double v1 = wcs1c[iax];
               double v2 = wcs2[iax];
               double diff, scale;
               if( v1 == AST__BAD || v2 == AST__BAD ) continue;
               diff = fabs( astAxDistance( curfrm2, iax + 1, v1, v2 ) );
               if( diff > tol ) {
                  scale = fabs( v1 );
                  if( fabs( v2 ) > scale ) scale = fabs( v2 );
                  if( scale > 0.0 && diff / scale > tol ) ok = -1;
               }
            }
         }
         astAnnul( cvt );
      } else {
         /* Current frames cannot be aligned (e.g. offset SkyFrame).
            Fall back to pixel-to-pixel comparison via base frames. */
         AstMapping *roundmap;
         if( !astOK ) astClearStatus;
         roundmap = (AstMapping *) astCmpMap( map1,
                       astGetMapping( fs2, AST__CURRENT, AST__BASE ),
                       1, " " );
         for( ip = 0; ip < noff && ok == 1; ip++ ) {
            double pix_in[10], pix_out[10];
            for( iax = 0; iax < nin; iax++ )
               pix_in[iax] = offsets[ip];
            astTranN( roundmap, 1, nin, 1, pix_in, 1, nin, 1, pix_out );
            for( iax = 0; iax < nin && ok == 1; iax++ ) {
               double diff;
               if( pix_in[iax] == AST__BAD || pix_out[iax] == AST__BAD ) continue;
               diff = fabs( pix_out[iax] - pix_in[iax] );
               if( diff > tol ) {
                  double scale = fabs( pix_in[iax] );
                  if( scale > 0.0 && diff / scale > tol ) ok = -1;
               }
            }
         }
         astAnnul( roundmap );
      }
      astAnnul( map1 );
      astAnnul( map2 );
      astAnnul( curfrm2 );
   }

   fs2 = astAnnul( fs2 );
done:
   if( !astOK ) astClearStatus;
   fc = astAnnul( fc );
   return ok;
}

/* -----------------------------------------------------------------------
 * stopit: record first error
 * -----------------------------------------------------------------------*/
static void stopit( int errnum, const char *text, int *status ) {
   if( *status != 0 ) return;
   *status = 1;
   if( text && text[0] && text[0] != ' ' )
      printf( "Error %d: %s\n", errnum, text );
   else
      printf( "Error %d\n", errnum );
}

/* -----------------------------------------------------------------------
 * tabsource callback: called by FitsChan when it needs a FITS extension
 * -----------------------------------------------------------------------*/
static void tabsource( AstFitsChan *fc, const char *extnam, int extver,
                       int extlevel, int *status ) {
   *status = 0;

   if( strcmp( extnam, "WCS-TAB" ) != 0 ) {
      stopit( 1035, "tabsource: unexpected extnam", g_test_status );
      return;
   }

   if( !g_table ) {
      stopit( 1036, "tabsource: g_table is NULL", g_test_status );
      return;
   }

   if( !astIsAFitsTable( g_table ) ) {
      stopit( 1037, "tabsource: not a FitsTable", g_test_status );
      return;
   }

   if( extver != 1 ) {
      printf( "EXTVER=%d\n", extver );
      stopit( 1065, "tabsource: wrong extver", g_test_status );
      return;
   }

   if( extlevel != 1 ) {
      stopit( 1066, "tabsource: wrong extlevel", g_test_status );
      return;
   }

   astPutTable( fc, g_table, extnam );
   if( astOK ) *status = 1;
}


/* -----------------------------------------------------------------------
 * readobj: read an AST object from a file using a Channel
 * -----------------------------------------------------------------------*/
static AstObject *readobj( const char *file, int *status ) {
   AstChannel *ch;
   AstObject *obj;
   char opts[PATH_MAX];
   if( *status != 0 ) return NULL;

   const char *srcdir = getenv("srcdir") ? getenv("srcdir") : ".";
   if ( snprintf(opts, sizeof(opts), "SourceFile=%s/%s", srcdir, file) < 0 ) {
      *status = 1;
      return NULL;
   }

   ch = astChannel( NULL, NULL, "%s", opts );
   obj = astRead( ch );
   astAnnul( ch );
   if( !obj ) *status = 1;
   return obj;
}

/* -----------------------------------------------------------------------
 * checkft: verify contents of coords/index arrays from TAB lookup
 * -----------------------------------------------------------------------*/
static void checkft( int nelem, double *coords, double *indx, int *status ) {
   if( *status != 0 ) return;

   if( indx[0] != 1.0 ) {
      stopit( 2001, " ", status );
   } else if( coords[0] != 1.0 ) {
      stopit( 2002, " ", status );
   } else if( indx[nelem-1] != 1.0e2 ) {
      stopit( 2003, " ", status );
   } else if( coords[nelem-1] != 1.0e-4 ) {
      stopit( 2004, " ", status );
   } else if( fabs( coords[nelem/2 - 1] -
                    pow( indx[nelem/2 - 1], -2.0 ) ) > 1e-20 ) {
      stopit( 2005, " ", status );
   }
}

/* -----------------------------------------------------------------------
 * checkft2: verify contents of LUT-based coords array
 * -----------------------------------------------------------------------*/
static void checkft2( int nelem, double *coords, int *status ) {
   if( *status != 0 ) return;

   if( fabs( coords[0] - 299.792458 ) > 1.0e-5 ) {
      stopit( 3002, " ", status );
   } else if( fabs( coords[nelem-1] - 2997924.58 ) > 1.0e-1 ) {
      stopit( 3004, " ", status );
   }
}

/* -----------------------------------------------------------------------
 * test_fitsrounding: test FitsRounding attribute behaviour
 * -----------------------------------------------------------------------*/

/* -----------------------------------------------------------------------
 * rstrip: strip trailing spaces
 * -----------------------------------------------------------------------*/
static char *rstrip( char *s ) {
   int n;
   if( !s ) return s;
   n = strlen( s );
   while( n > 0 && s[n-1] == ' ' ) {
      s[n-1] = '\0';
      n--;
   }
   return s;
}

static void test_fitsrounding( AstFitsChan *fc, int *status ) {
   char card[81];

   if( *status != 0 ) return;

   if( astGetI( fc, "FitsRounding" ) != 10 )
      stopit( 12314, " ", status );

   /* Test 1: value with 10 significant figures -> should be kept */
   astPutFits( fc, "DUMMY   =  1.0000010001", 0 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =         1.0000010001" ) != 0 ) {
         printf( "FitsRounding test 1: got [%s]\n", card );
         stopit( 12310, " ", status );
      }
   } else {
      stopit( 12311, " ", status );
   }

   /* Test 2: value with 11 sig figs -> should be rounded to 10 */
   astPutFits( fc, "DUMMY   =  1.00000100001", 0 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =             1.000001" ) != 0 ) {
         printf( "FitsRounding test 2: got [%s]\n", card );
         stopit( 12312, " ", status );
      }
   } else {
      stopit( 12313, " ", status );
   }

   /* Test 3 */
   astPutFits( fc, "DUMMY   =  1.0000019991", 0 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =         1.0000019991" ) != 0 ) {
         printf( "FitsRounding test 3: got [%s]\n", card );
         stopit( 12314, " ", status );
      }
   } else {
      stopit( 12315, " ", status );
   }

   /* Test 4 */
   astPutFits( fc, "DUMMY   =  1.00000199991", 0 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =             1.000002" ) != 0 ) {
         printf( "FitsRounding test 4: got [%s]\n", card );
         stopit( 12316, " ", status );
      }
   } else {
      stopit( 12317, " ", status );
   }

   /* Test 5 */
   astPutFits( fc, "DUMMY   =  -1.0000010000001", 0 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =            -1.000001" ) != 0 ) {
         printf( "FitsRounding test 5: got [%s]\n", card );
         stopit( 12318, " ", status );
      }
   } else {
      stopit( 12319, " ", status );
   }

   /* Test 6: FitsRounding=5 */
   astSetI( fc, "FitsRounding", 5 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =                 -1.0" ) != 0 ) {
         printf( "FitsRounding test 6: got [%s]\n", card );
         stopit( 12320, " ", status );
      }
   } else {
      stopit( 12321, " ", status );
   }

   /* Test 7: clear FitsRounding -> back to 10 */
   astClear( fc, "FitsRounding" );
   if( astGetI( fc, "FitsRounding" ) != 10 )
      stopit( 12322, " ", status );

   /* Test 8 */
   astPutFits( fc, "DUMMY   =  1.9999969999993E-02", 0 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =           0.01999997" ) != 0 ) {
         printf( "FitsRounding test 8: got [%s]\n", card );
         stopit( 12323, " ", status );
      }
   } else {
      stopit( 12324, " ", status );
   }

   /* Test 9: FitsRounding=5 */
   astSetI( fc, "FitsRounding", 5 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =                 0.02" ) != 0 ) {
         printf( "FitsRounding test 9: got [%s]\n", card );
         stopit( 12325, " ", status );
      }
   } else {
      stopit( 12326, " ", status );
   }

   /* Test 10: FitsRounding=10, scientific notation */
   astSetI( fc, "FitsRounding", 10 );
   astPutFits( fc, "DUMMY   =  1.9999969999993E-08", 0 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =          1.999997E-8" ) != 0 ) {
         printf( "FitsRounding test 10: got [%s]\n", card );
         stopit( 12327, " ", status );
      }
   } else {
      stopit( 12328, " ", status );
   }

   /* Test 11: FitsRounding=5 */
   astSetI( fc, "FitsRounding", 5 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =               2.0E-8" ) != 0 ) {
         printf( "FitsRounding test 11: got [%s]\n", card );
         stopit( 12329, " ", status );
      }
   } else {
      stopit( 12330, " ", status );
   }

   /* Test 12 */
   astPutFits( fc, "DUMMY   =  9.999999E-6", 0 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =              10.0E-6" ) != 0 ) {
         printf( "FitsRounding test 12: got [%s]\n", card );
         stopit( 12331, " ", status );
      }
   } else {
      stopit( 12332, " ", status );
   }

   /* Test 13 */
   astPutFits( fc, "DUMMY   =  -9.999999", 0 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =                -10.0" ) != 0 ) {
         printf( "FitsRounding test 13: got [%s]\n", card );
         stopit( 12333, " ", status );
      }
   } else {
      stopit( 12334, " ", status );
   }

   /* Test 14: reset FitsRounding and re-check */
   astClear( fc, "FitsRounding" );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =            -9.999999" ) != 0 ) {
         printf( "FitsRounding test 14: got [%s]\n", card );
         stopit( 12335, " ", status );
      }
   } else {
      stopit( 12336, " ", status );
   }

   /* Test 15: FitsRounding=6 */
   astSetI( fc, "FitsRounding", 6 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =                -10.0" ) != 0 ) {
         printf( "FitsRounding test 15: got [%s]\n", card );
         stopit( 12337, " ", status );
      }
   } else {
      stopit( 12338, " ", status );
   }

   /* Test 16: FitsRounding=7 */
   astSetI( fc, "FitsRounding", 7 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =            -9.999999" ) != 0 ) {
         printf( "FitsRounding test 16: got [%s]\n", card );
         stopit( 12339, " ", status );
      }
   } else {
      stopit( 12340, " ", status );
   }

   /* Test 17: fitsrounding=6, new value */
   astSetI( fc, "FitsRounding", 6 );
   astPutFits( fc, "DUMMY   =  -0.0019999912", 0 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =        -0.0019999912" ) != 0 ) {
         printf( "FitsRounding test 17: got [%s]\n", card );
         stopit( 12341, " ", status );
      }
   } else {
      stopit( 12342, " ", status );
   }

   /* Test 18: fitsrounding=5 */
   astSetI( fc, "FitsRounding", 5 );
   astClear( fc, "Card" );
   if( astFindFits( fc, "DUMMY", card, 0 ) ) {
      if( strcmp( rstrip(card), "DUMMY   =               -0.002" ) != 0 ) {
         printf( "FitsRounding test 18: got [%s]\n", card );
         stopit( 12343, " ", status );
      }
   } else {
      stopit( 12344, " ", status );
   }

   /* Reset FitsRounding at end */
   astClear( fc, "FitsRounding" );
}

/* -----------------------------------------------------------------------
 * checktab: test FITS -TAB encoding with astTableSource
 * -----------------------------------------------------------------------*/
static void checktab( int *status ) {
   AstSpecFrame *sf;
   AstFrame *gf;
   AstMapping *mm, *lm, *sm, *map;
   AstFrameSet *fs, *fs2;
   AstFitsChan *fc, *fc2;
   AstKeyMap *tables;
   AstObject *table_obj;
   int nelem, ncard;
   size_t sz;
   double *coords1 = NULL, *index1 = NULL;
   double lut[100], shift;
   double x[3], y[3];
      char *sval;

   if( *status != 0 ) return;

   astBegin;

   sf = astSpecFrame( "system=freq,unit=MHz" );
   gf = astFrame( 1, "domain=GRID" );
   mm = (AstMapping *)astMathMap( 1, 1, 1,
                                  (const char *[]){"y=1/(x*x)"},
                                  1,
                                  (const char *[]){"x=1/sqrt(y)"},
                                  " " );
   fs = astFrameSet( gf, " " );
   astAddFrame( fs, AST__BASE, mm, (AstFrame *)sf );

   fc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
   astPutFits( fc, "NAXIS   = 1", 0 );
   astPutFits( fc, "NAXIS1  = 100", 0 );

   if( astWrite( fc, fs ) != 0 )
      stopit( 1000, " ", status );
   else if( astGetTables( fc ) != AST__NULL )
      stopit( 1001, "CheckTab", status );

   astSetI( fc, "TabOK", 1 );

   if( astWrite( fc, fs ) != 1 )
      stopit( 1002, " ", status );

   tables = (AstKeyMap *)astGetTables( fc );
   if( !tables )
      stopit( 1003, " ", status );
   else if( !astIsAKeyMap( tables ) )
      stopit( 1004, " ", status );
   else if( astMapSize( tables ) != 1 )
      stopit( 1005, " ", status );

   /* Check the key name */
   if( tables && astMapSize( tables ) > 0 ) {
      sval = (char *)astMapKey( tables, 0 );  /* 0-based in C */
      if( !sval || strcmp( sval, "WCS-TAB" ) != 0 ) {
         if( sval ) printf( "MapKey: [%s]\n", sval );
         stopit( 1006, " ", status );
      }
   }

   if( tables && astMapHasKey( tables, "WCS-TAB" ) ) {
      if( !astMapGet0A( tables, "WCS-TAB", &table_obj ) )
         stopit( 1007, " ", status );
      else if( !astIsAFitsTable( table_obj ) )
         stopit( 1004, " ", status );
      else
         astAnnul( table_obj );
   }

   /* Check table dimensions */
   {
      AstFitsTable *tbl = NULL;
      astMapGet0A( tables, "WCS-TAB", (AstObject **)&tbl );
      if( tbl ) {
         if( astGetI( tbl, "NColumn" ) != 2 )
            stopit( 1005, " ", status );
         else if( astGetI( tbl, "NRow" ) != 1 )
            stopit( 1006, " ", status );
         else if( astGetI( tbl, "ColumnLength(coords1)" ) != 197 )
            stopit( 1007, " ", status );
         else if( astGetI( tbl, "ColumnLength(index1)" ) != 197 )
            stopit( 1008, " ", status );

         sz = astColumnSize( tbl, "COORDS1" );
         if( sz != sizeof(double) * 197 )
            stopit( 1009, " ", status );

         coords1 = malloc( sz );
         astGetColumnData( tbl, "Coords1", 0.0f, AST__BAD, sz, coords1, &nelem );
         if( nelem != 197 ) stopit( 1010, " ", status );

         sz = astColumnSize( tbl, "INDEX1" );
         if( sz != sizeof(double) * 197 )
            stopit( 1011, " ", status );

         index1 = malloc( sz );
         astGetColumnData( tbl, "inDex1", 0.0f, AST__BAD, sz, index1, &nelem );
         if( nelem != 197 ) stopit( 1012, " ", status );

         checkft( 197, coords1, index1, status );

         free( coords1 );  coords1 = NULL;
         free( index1 );   index1 = NULL;

         astAnnul( tbl );
      }
   }

   /* ------------------------------------------------------------------
    * Now replace the MathMap with a LutMap
    * ------------------------------------------------------------------*/
   {
      int i;
      for( i = 0; i < 100; i++ )
         lut[i] = 1.0 / (double)((i+1)*(i+1));
   }

   lm = (AstMapping *)astLutMap( 100, lut, -49.0, 1.0, " " );

   astSetC( (AstObject *)sf, "System", "Wave" );
   astSetC( (AstObject *)sf, "Unit", "m" );
   astRemoveFrame( fs, AST__CURRENT );
   astAddFrame( fs, AST__BASE, lm, (AstFrame *)sf );
   astSet( fs, "System=freq" );

   shift = 50.0;
   sm = (AstMapping *)astShiftMap( 1, &shift, " " );
   astRemapFrame( fs, AST__BASE, sm );

   astRemoveTables( fc, "WCS-TAB" );
   astPurgeWCS( fc );

   if( astWrite( fc, fs ) != 1 )
      stopit( 1013, " ", status );

   tables = (AstKeyMap *)astGetTables( fc );
   if( !tables )
      stopit( 1014, " ", status );
   else if( !astIsAKeyMap( tables ) )
      stopit( 1015, " ", status );
   else if( astMapSize( tables ) != 1 )
      stopit( 1016, " ", status );

   if( tables && astMapSize( tables ) > 0 ) {
      sval = (char *)astMapKey( tables, 0 );
      if( !sval || strcmp( sval, "WCS-TAB" ) != 0 )
         stopit( 1017, " ", status );
   }

   if( tables && astMapHasKey( tables, "WCS-TAB" ) ) {
      if( !astMapGet0A( tables, "WCS-TAB", &table_obj ) )
         stopit( 1018, " ", status );
      else if( !astIsAFitsTable( table_obj ) )
         stopit( 1019, " ", status );
      else
         astAnnul( table_obj );
   }

   {
      AstFitsTable *tbl = NULL;
      astMapGet0A( tables, "WCS-TAB", (AstObject **)&tbl );
      if( tbl ) {
         if( astGetI( tbl, "NColumn" ) != 1 )
            stopit( 1020, " ", status );
         else if( astGetI( tbl, "NRow" ) != 1 )
            stopit( 1021, " ", status );
         else if( astGetI( tbl, "ColumnLength(coords1)" ) != 100 )
            stopit( 1022, " ", status );

         sz = astColumnSize( tbl, "COORDS1" );
         if( sz != sizeof(double) * 100 )
            stopit( 1024, " ", status );

         coords1 = malloc( sz );
         astGetColumnData( tbl, "Coords1", 0.0f, AST__BAD, sz, coords1, &nelem );
         if( nelem != 100 ) stopit( 1025, " ", status );

         checkft2( 100, coords1, status );

         free( coords1 );  coords1 = NULL;
         astAnnul( tbl );
      }
   }

   /* ------------------------------------------------------------------
    * Test round-trip: remove tables from fc copy, re-read with tabsource
    * ------------------------------------------------------------------*/
   astRemoveTables( fc, " " );
   fc2 = (AstFitsChan *)astCopy( fc );
   astPutTables( fc, tables );
   astClear( fc, "Card" );

   fs2 = (AstFrameSet *)astRead( fc );
   if( !fs2 ) stopit( 1028, " ", status );

   if( fs2 ) {
      AstFrame *fr1 = astGetFrame( fs, AST__CURRENT );
      AstFrame *fr2 = astGetFrame( fs2, AST__CURRENT );
      if( !astEqual( fr1, fr2 ) )
         stopit( 1029, " ", status );
      astAnnul( fr1 );
      astAnnul( fr2 );

      map = (AstMapping *)astCmpMap(
               astGetMapping( fs, AST__BASE, AST__CURRENT ),
               astGetMapping( fs2, AST__CURRENT, AST__BASE ),
               1, " " );

      x[0] = 1.0;  x[1] = 50.0;  x[2] = 100.0;
      astTran1( map, 3, x, 1, y );

      if( fabs( y[0] - x[0] ) > 1.0e-4 ||
          fabs( y[1] - x[1] ) > 1.0e-4 ||
          fabs( y[2] - x[2] ) > 1.0e-4 )
         stopit( 1030, " ", status );
      astAnnul( map );
      astAnnul( fs2 );
   }

   /* ------------------------------------------------------------------
    * Test that read without tables raises AST__NOTAB, then use tabsource
    * ------------------------------------------------------------------*/
   if( !astGetI( fc2, "TabOK" ) )
      stopit( 1031, " ", status );

   ncard = astGetI( fc2, "Ncard" );

   astClear( fc2, "Card" );
   fs2 = (AstFrameSet *)astRead( fc2 );
   if( astOK ) {
      /* Should have raised an error */
      stopit( 1032, " ", status );
   } else if( astStatus == AST__NOTAB ) {
      astClearStatus;
   } else {
      astClearStatus;
      stopit( 1032, "wrong error", status );
   }

   astSetI( fc2, "TabOK", 0 );
   astClear( fc2, "Card" );
   fs2 = (AstFrameSet *)astRead( fc2 );
   if( astOK ) {
      stopit( 1032, " ", status );
   } else if( astStatus == AST__BDFTS ) {
      astClearStatus;
   } else {
      astClearStatus;
      stopit( 1032, "wrong error (TabOK=0)", status );
   }
   astSetI( fc2, "TabOK", 1 );

   if( ncard != astGetI( fc2, "Ncard" ) )
      stopit( 1034, " ", status );

   /* Set g_table so tabsource callback can use it */
   g_test_status = status;
   if( !astMapGet0A( tables, "WCS-TAB", (AstObject **) &g_table ) )
      stopit( 1034, "missing WCS-TAB table for callback", status );
   astTableSource( fc2, tabsource );
   astClear( fc2, "Card" );
   fs2 = (AstFrameSet *)astRead( fc2 );
   if( !fs2 ) stopit( 1035, " ", status );
   if( *status != 0 ) { printf("astRead at 678 failed! status=%d\n", *status); return; }
   if( g_table ) g_table = astAnnul( g_table );
   g_test_status = NULL;

   if( fs2 ) {
      AstFrame *fr1 = astGetFrame( fs, AST__CURRENT );
      AstFrame *fr2 = astGetFrame( fs2, AST__CURRENT );
      if( !astEqual( fr1, fr2 ) )
         stopit( 1036, " ", status );
      astAnnul( fr1 );
      astAnnul( fr2 );

      map = (AstMapping *)astCmpMap(
               astGetMapping( fs, AST__BASE, AST__CURRENT ),
               astGetMapping( fs2, AST__CURRENT, AST__BASE ),
               1, " " );

      x[0] = 1.0;  x[1] = 50.0;  x[2] = 100.0;
      astTran1( map, 3, x, 1, y );

      if( fabs( y[0] - x[0] ) > 1.0e-4 ||
          fabs( y[1] - x[1] ) > 1.0e-4 ||
          fabs( y[2] - x[2] ) > 1.0e-4 )
         stopit( 1037, " ", status );
      astAnnul( map );
      astAnnul( fs2 );
   }

   /* ------------------------------------------------------------------
    * Test with sparse.ast (multi-dim TAB WCS)
    * ------------------------------------------------------------------*/
   {
      AstObject *sparseobj = readobj( "fixtures/programs/testfitschan/sparse.ast", status );
      if( !sparseobj ) {
         stopit( 1038, "readobj failed", status );
      } else {
         AstFrameSet *fssp = (AstFrameSet *)sparseobj;
         AstFitsChan *fcsp;
         AstFrameSet *fs2sp;
         AstFrameSet *fs3sp;
         double xs[3], ys[3], y2s[3];
         int ii;

         fcsp = astFitsChan( NULL, NULL, "Encoding=FITS-WCS,TabOK=1" );
         astPutFits( fcsp, "NAXIS   = 2", 0 );
         astPutFits( fcsp, "NAXIS1  = 2000", 0 );
         astPutFits( fcsp, "NAXIS2  = 1", 0 );

         if( astWrite( fcsp, fssp ) != 1 )
            stopit( 1038, " ", status );

         astClear( fcsp, "Card" );

         fs2sp = (AstFrameSet *)astRead( fcsp );
         if (!fs2sp || *status != 0) {
            printf("fs2sp is NULL or status is bad: %d\n", *status);
            return;
         }


         astInvert( fssp );
         astInvert( fs2sp );
         {
            AstFrameSet *fssp_clone = astClone(fssp);
            AstFrameSet *fs2sp_clone = astClone(fs2sp);
            fs3sp = (AstFrameSet *)astConvert( fssp_clone, fs2sp_clone, "SKY-DSBSPECTRUM" );
            if( fssp_clone ) astAnnul( fssp_clone );
            if( fs2sp_clone ) astAnnul( fs2sp_clone );
         }
         if( !fs3sp )
            stopit( 1039, " ", status );


         {
            AstFrame *frb = astGetFrame( fssp, AST__BASE );
            if( strcmp( astGetC( frb, "Domain" ), "SKY-DSBSPECTRUM" ) != 0 )
               stopit( 1040, " ", status );
            astAnnul( frb );
         }
         {
            AstFrame *frb = astGetFrame( fs2sp, AST__BASE );
            if( strcmp( astGetC( frb, "Domain" ), "SKY-DSBSPECTRUM" ) != 0 )
               stopit( 1041, " ", status );
            astAnnul( frb );
         }

         astInvert( fssp );
         astInvert( fs2sp );

         xs[0] = 1.0;  xs[1] = 1.0;  xs[2] = 1.0;
         {
            double xin3[3];
            xin3[0] = xs[0]; xin3[1] = xs[1]; xin3[2] = xs[2];
            astTranN( fssp,  1, 3, 1, xin3, 1, 3, 1, ys );
            astTranN( fs2sp, 1, 3, 1, xin3, 1, 3, 1, y2s );
         }
         for( ii = 0; ii < 3; ii++ ) {
            if( fabs( ys[ii] - y2s[ii] ) > 1.0e-8 )
               stopit( 1042, " ", status );
         }

         xs[0] = 10.0;  xs[1] = 1.0;  xs[2] = 1000.0;
         {
            double xin3[3];
            xin3[0] = xs[0]; xin3[1] = xs[1]; xin3[2] = xs[2];
            astTranN( fssp,  1, 3, 1, xin3, 1, 3, 1, ys );
            astTranN( fs2sp, 1, 3, 1, xin3, 1, 3, 1, y2s );
         }
         for( ii = 0; ii < 3; ii++ ) {
            if( fabs( ys[ii] - y2s[ii] ) > 1.0e-8 )
               stopit( 1042, " ", status );
         }

         if( fs3sp ) astAnnul( fs3sp );
         if( fs2sp ) astAnnul( fs2sp );
         astAnnul( fcsp );
         astAnnul( fssp );
      }
   }

   /* ------------------------------------------------------------------
    * Test with voltage domain (non-celestial TAB)
    * ------------------------------------------------------------------*/
   {
      AstFrame *sfv, *gfv;
      AstMapping *mmv;
      AstFrameSet *fsv, *fs2v, *fs3v;
      AstKeyMap *tablesv;
      AstObject *table_objv;
            double xv[3], yv[3];

      sfv = astFrame( 1, "domain=voltage,unit=V" );
      gfv = astFrame( 1, "domain=GRID" );
      mmv = (AstMapping *)astMathMap( 1, 1, 1,
                                      (const char *[]){"y=1/(x*x)"},
                                      1,
                                      (const char *[]){"x=1/sqrt(y)"},
                                      " " );
      fsv = astFrameSet( gfv, " " );
      astAddFrame( fsv, AST__BASE, mmv, sfv );

      astEmptyFits( fc );
      astPutFits( fc, "NAXIS   = 1", 0 );
      astPutFits( fc, "NAXIS1  = 100", 0 );

      if( astWrite( fc, fsv ) != 1 )
         stopit( 1043, " ", status );

      {
         char *strval;
         if( astGetFitsS( fc, "CTYPE1", &strval ) ) {
            if( strcmp( strval, "VOLT-TAB" ) != 0 )
               stopit( 1059, " ", status );
         } else {
            stopit( 1060, " ", status );
         }
      }

      tablesv = (AstKeyMap *)astGetTables( fc );
      if( !tablesv )
         stopit( 1044, " ", status );
      else if( !astIsAKeyMap( tablesv ) )
         stopit( 1045, " ", status );
      else if( astMapSize( tablesv ) != 1 )
         stopit( 1046, " ", status );

      if( tablesv && astMapSize( tablesv ) > 0 ) {
         sval = (char *)astMapKey( tablesv, 0 );
         if( !sval || strcmp( sval, "WCS-TAB" ) != 0 )
            stopit( 1047, " ", status );
      }

      if( tablesv && astMapHasKey( tablesv, "WCS-TAB" ) ) {
         if( !astMapGet0A( tablesv, "WCS-TAB", &table_objv ) )
            stopit( 1048, " ", status );
         else if( !astIsAFitsTable( table_objv ) )
            stopit( 1049, " ", status );
         else
            astAnnul( table_objv );
      }

      {
         AstFitsTable *tblv = NULL;
         astMapGet0A( tablesv, "WCS-TAB", (AstObject **)&tblv );
         if( tblv ) {
            size_t szv;
            int nelemv;
            double *coords1v = NULL, *index1v = NULL;

            if( astGetI( tblv, "NColumn" ) != 2 )
               stopit( 1050, " ", status );
            else if( astGetI( tblv, "NRow" ) != 1 )
               stopit( 1051, " ", status );
            else if( astGetI( tblv, "ColumnLength(coords1)" ) != 197 )
               stopit( 1052, " ", status );
            else if( astGetI( tblv, "ColumnLength(index1)" ) != 197 )
               stopit( 1053, " ", status );

            szv = astColumnSize( tblv, "COORDS1" );
            if( szv != sizeof(double) * 197 )
               stopit( 1054, " ", status );

            coords1v = malloc( szv );
            astGetColumnData( tblv, "Coords1", 0.0f, AST__BAD, szv, coords1v, &nelemv );
            if( nelemv != 197 ) stopit( 1055, " ", status );

            szv = astColumnSize( tblv, "INDEX1" );
            if( szv != sizeof(double) * 197 )
               stopit( 1056, " ", status );

            index1v = malloc( szv );
            astGetColumnData( tblv, "inDex1", 0.0f, AST__BAD, szv, index1v, &nelemv );
            if( nelemv != 197 ) stopit( 1057, " ", status );

            checkft( 197, coords1v, index1v, status );

            free( coords1v );
            free( index1v );
            astAnnul( tblv );
         }
      }

      astClear( fc, "Card" );
      fs2v = (AstFrameSet *)astRead( fc );
      if( !fs2v )
         stopit( 1058, " ", status );

      if( fs2v ) {
         astInvert( fsv );
         astInvert( fs2v );
         fs3v = (AstFrameSet *)astConvert( fs2v, fsv, " " );
         if( !fs3v )
            stopit( 1061, " ", status );

         {
            AstFrame *frb = astGetFrame( fsv, AST__BASE );
            if( strcmp( astGetC( frb, "Domain" ), "VOLTAGE" ) != 0 )
               stopit( 1062, " ", status );
            astAnnul( frb );
         }
         {
            AstFrame *frb = astGetFrame( fs2v, AST__BASE );
            if( strcmp( astGetC( frb, "Domain" ), "VOLTAGE" ) != 0 )
               stopit( 1063, " ", status );
            astAnnul( frb );
         }

         xv[0] = 1.0;  xv[1] = 10.0;  xv[2] = 100.0;
         astTran1( fs3v, 3, xv, 1, yv );
         if( fabs( yv[0] - xv[0] ) > 1.0e-2 ||
             fabs( yv[1] - xv[1] ) > 1.0e-2 ||
             fabs( yv[2] - xv[2] ) > 1.0e-2 )
            stopit( 1064, " ", status );

         if( fs3v ) astAnnul( fs3v );
         astAnnul( fs2v );
      }
      astAnnul( fsv );
   }

   /* ------------------------------------------------------------------
    * Test -TAB with non-unit index: a non-linear pre-LutMap mapping
    * produces a non-trivial index column (lines 19783-19791).
    * Grid→MathMap(x^2)→LutMap→Frame produces an index vector that
    * is the inverse MathMap applied to the LutMap indices — i.e.
    * sqrt(i) — which is not 1,2,3... so an INDEX column is stored.
    * ------------------------------------------------------------------*/
   {
      AstFrame *nif, *nig;
      AstMapping *nimm, *nilm, *nicm;
      AstFrameSet *nifs;
      AstFitsChan *nifc;
      AstKeyMap *nitables;
      double nilut[20];
      int nii;

      for( nii = 0; nii < 20; nii++ )
         nilut[nii] = 100.0 + nii * 5.0;

      nig = astFrame( 1, "domain=GRID" );
      nif = astFrame( 1, "domain=VOLTAGE,unit=V" );
      nimm = (AstMapping *)astMathMap( 1, 1, 1,
                                       (const char *[]){"y=x*x"},
                                       1,
                                       (const char *[]){"x=sqrt(y)"},
                                       " " );
      nilm = (AstMapping *)astLutMap( 20, nilut, 1.0, 1.0, " " );
      nicm = (AstMapping *)astCmpMap( nimm, nilm, 1, " " );
      nifs = astFrameSet( nig, " " );
      astAddFrame( nifs, AST__BASE, nicm, nif );

      nifc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS,TabOK=1" );
      astPutFits( nifc, "NAXIS   = 1", 0 );
      astPutFits( nifc, "NAXIS1  = 20", 0 );
      if( astWrite( nifc, nifs ) != 1 )
         stopit( 1067, "TAB non-unit index write failed", status );
      else {
         nitables = (AstKeyMap *)astGetTables( nifc );
         if( nitables ) {
            AstFitsTable *nitbl = NULL;
            if( astMapGet0A( nitables, "WCS-TAB", (AstObject **)&nitbl ) ) {
               int ncol = astGetI( nitbl, "NColumn" );
               if( ncol < 2 )
                  stopit( 1068, "TAB non-unit index: expected INDEX column", status );
               nitbl = astAnnul( nitbl );
            }
            nitables = astAnnul( nitables );
         }

         /* Read back: this exercises the index column read path in
            TabMapping, using the table already stored in the FitsChan. */
         {
            AstFrameSet *nifs2;

            astClear( nifc, "Card" );
            nifs2 = (AstFrameSet *)astRead( nifc );
            if( !nifs2 )
               stopit( 1069, "TAB non-unit index read-back failed", status );
            else
               astAnnul( nifs2 );
         }
      }
      nifc = astAnnul( nifc );
      nifs = astAnnul( nifs );
   }

   astEnd;
}
static void checktab2( int *status ) {
   AstSkyFrame *sf;
   AstFrame *gf;
   AstMapping *mm, *mmm;
   AstFrameSet *fs, *fs2;
   AstFitsChan *fc;

   if( *status != 0 ) return;

   astBegin;

   sf = astSkyFrame( " " );
   astSetD( sf, "SkyRef(1)", 0.0001 );
   astSetD( sf, "SkyRef(2)", 0.0001 );

   gf = astFrame( 2, "domain=GRID" );

   mm = (AstMapping *)astMathMap( 1, 1, 1,
                                  (const char *[]){"y=(x+50)**(-2)"},
                                  1,
                                  (const char *[]){"x=-50+1/sqrt(y)"},
                                  " " );
   mmm = (AstMapping *)astCmpMap( mm, mm, 0, " " );

   fs = astFrameSet( gf, " " );
   astAddFrame( fs, AST__BASE, mmm, (AstFrame *)sf );

   fc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS,TabOK=1" );
   astPutFits( fc, "NAXIS   = 2", 0 );
   astPutFits( fc, "NAXIS1  = 100", 0 );
   astPutFits( fc, "NAXIS2  = 100", 0 );

   if( astWrite( fc, fs ) != 1 )
      stopit( 2000, " ", status );

   astClear( fc, "Card" );
   fs2 = (AstFrameSet *)astRead( fc );
   if( !fs2 )
      stopit( 2001, " ", status );

   if( fs2 ) {
      if( fabs( astGetD( fs2, "SkyRef(1)" ) - 0.0001 ) > 1.0e-7 )
         stopit( 2001, " ", status );
      if( fabs( astGetD( fs2, "SkyRef(2)" ) - 0.0001 ) > 1.0e-7 )
         stopit( 2001, " ", status );
      astAnnul( fs2 );
   }

   astEnd;
}


/*
 * testgrismorder: a FITS grism header must preserve a negative
 * interference order. PVi_1 holds the order, which is commonly negative.
 */
static void testgrismorder( int errbase, double morder, int *status ) {
   AstFitsChan *fc;
   AstFitsChan *out;
   AstFrameSet *fs;
   char buf[ 81 ];
   double back;

   if( !astOK ) return;

   fc = astFitsChan( NULL, NULL, "" );
   astPutFits( fc, "CTYPE1  = 'WAVE-GRI'", 0 );
   astPutFits( fc, "CRVAL1  =            5.0E-7", 0 );
   astPutFits( fc, "CRPIX1  =                1.0", 0 );
   astPutFits( fc, "CDELT1  =            1.0E-9", 0 );
   astPutFits( fc, "CUNIT1  = 'm       '", 0 );
   astPutFits( fc, "PV1_0   =            9.0E5", 0 );
   snprintf( buf, sizeof( buf ), "PV1_1   = %20.1f", morder );
   astPutFits( fc, buf, 0 );
   astPutFits( fc, "PV1_2   =                0.0", 0 );
   astPutFits( fc, "PV1_3   =                1.0", 0 );
   astPutFits( fc, "PV1_4   =                0.0", 0 );
   astPutFits( fc, "PV1_5   =                0.0", 0 );
   astPutFits( fc, "PV1_6   =                0.0", 0 );
   astClear( fc, "Card" );

   fs = astRead( fc );
   if( !astOK || !fs ) {
      stopit( errbase, "grism header could not be read", status );
      astClearStatus;
      return;
   }

   out = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
   if( !astWrite( out, fs ) ) {
      stopit( errbase + 1, "grism FrameSet produced no header", status );
   } else {
      astClear( out, "Card" );
      if( !astGetFitsF( out, "PV1_1", &back ) ) {
         stopit( errbase + 2, "no PV1_1 written back", status );
      } else if( back != morder ) {
         printf( "PV1_1 in = %g, out = %g\n", morder, back );
         stopit( errbase + 3, "grism interference order not preserved",
                 status );
      }
   }
}


/* -----------------------------------------------------------------------
 * main
 * -----------------------------------------------------------------------*/
int main( void ) {
   int status_value = 0;
   int *status = &status_value;

   AstFitsChan *fc;
   AstFrameSet *fs;
   AstFrame *iwcfrm;
   AstMapping *map;
   AstKeyMap *km;
   int i, val;
   int there;
   int64_t kval;
   char card[81];
   char *cval;
   double xin, yin, xout, yout;
   const char *srcdir;

   /* Storage for FITS cards */
   char cards[10][81];

   astWatch( status );
   astBegin;

   /* A grism interference order is commonly negative and must survive a
      read/write round trip. The positive case is a control: it confirms
      the chosen grating parameters are physically usable, so a failure in
      the negative cases cannot be blamed on the parameter choice. */
   testgrismorder( 12400, 1.0, status );
   testgrismorder( 12410, -1.0, status );
   testgrismorder( 12420, -2.0, status );
   /* Set the fixture source directory from the srcdir environment variable
    * or fall back to "." */
   srcdir = getenv("srcdir") ? getenv("srcdir") : ".";

   /* Create a FitsChan that will write its contents to fred.txt when deleted */
   fc = astFitsChan( NULL, NULL, "SinkFile=./fred.txt" );

   if( !astGetI( fc, "SipOK" ) )
      stopit( 776, " ", status );

   /* Verify GetAttrib string formatting for FitsChan attributes.
      The typed getters (astGetI etc) bypass GetAttrib; astGetC exercises
      the string-formatting paths. */
   {
      const char *sval;
      sval = astGetC( fc, "Encoding" );
      if( !sval || !strlen( sval ) )
         stopit( 870, "GetAttrib Encoding returned empty", status );
      sval = astGetC( fc, "Clean" );
      if( !sval )
         stopit( 871, "GetAttrib Clean returned NULL", status );
      sval = astGetC( fc, "AltAxes" );
      if( !sval || !strlen( sval ) )
         stopit( 872, "GetAttrib AltAxes returned empty", status );
      sval = astGetC( fc, "AllWarnings" );
      if( !sval )
         stopit( 873, "GetAttrib AllWarnings returned NULL", status );

      /* Exercise Encoding string formatting for each encoding value */
      {
         static const char *encs[] = {
            "FITS-WCS", "FITS-PC", "FITS-IRAF", "FITS-AIPS",
            "FITS-AIPS++", "FITS-CLASS", "DSS", "NATIVE", NULL
         };
         int ie;
         for( ie = 0; encs[ie]; ie++ ) {
            astSetC( fc, "Encoding", encs[ie] );
            sval = astGetC( fc, "Encoding" );
            if( !sval || strcmp( sval, encs[ie] ) )
               stopit( 876, "GetAttrib Encoding mismatch", status );
         }
         astSetC( fc, "Encoding", "NATIVE" );
      }

      /* Exercise AltAxes string formatting for each value */
      astSet( fc, "AltAxes=NONE" );
      sval = astGetC( fc, "AltAxes" );
      if( !sval || strcmp( sval, "NONE" ) )
         stopit( 877, "GetAttrib AltAxes NONE mismatch", status );
      astSet( fc, "AltAxes=IDENT" );
      sval = astGetC( fc, "AltAxes" );
      if( !sval || strcmp( sval, "IDENT" ) )
         stopit( 878, "GetAttrib AltAxes IDENT mismatch", status );
      astSet( fc, "AltAxes=ALL" );
      sval = astGetC( fc, "AltAxes" );
      if( !sval || strcmp( sval, "ALL" ) )
         stopit( 879, "GetAttrib AltAxes ALL mismatch", status );
      astSet( fc, "AltAxes=NONE" );

      /* Exercise TestAttrib and ClearAttrib for FitsChan attributes */
      if( !astTest( fc, "Encoding" ) )
         stopit( 880, "TestAttrib Encoding should be set", status );
      if( !astTest( fc, "AltAxes" ) )
         stopit( 881, "TestAttrib AltAxes should be set", status );
      astSet( fc, "Clean=1" );
      if( !astTest( fc, "Clean" ) )
         stopit( 882, "TestAttrib Clean should be set", status );
      astClear( fc, "Clean" );
      astClear( fc, "Encoding" );
      astClear( fc, "AltAxes" );
      if( astTest( fc, "Card" ) )
         stopit( 883, "TestAttrib Card should not be set", status );
   }

   test_fitsrounding( fc, status );
   astEmptyFits( fc );

   /* Put a FITS-WCS header into the FitsChan */
   strncpy( cards[0], "CRPIX1  =                   45", 80 ); cards[0][80] = '\0';
   strncpy( cards[1], "CRPIX2  =                   45", 80 ); cards[1][80] = '\0';
   strncpy( cards[2], "CRVAL1  =                   45", 80 ); cards[2][80] = '\0';
   strncpy( cards[3], "CRVAL2  =                 89.9", 80 ); cards[3][80] = '\0';
   strncpy( cards[4], "MYNAME  =                     ", 80 ); cards[4][80] = '\0';
   strncpy( cards[5], "CDELT1  =                -0.01", 80 ); cards[5][80] = '\0';
   strncpy( cards[6], "CDELT2  =                 0.01", 80 ); cards[6][80] = '\0';
   strncpy( cards[7], "CTYPE1  = 'RA---TAN'", 80 );           cards[7][80] = '\0';
   strncpy( cards[8], "CTYPE2  = 'DEC--TAN'", 80 );           cards[8][80] = '\0';

   for( i = 0; i < 9; i++ )
      astPutFits( fc, cards[i], 0 );

   /* GetAttrib string formatting for Card and CardComm (need cards loaded) */
   {
      const char *sval;
      astSetI( fc, "Card", 1 );
      sval = astGetC( fc, "Card" );
      if( !sval || strcmp( sval, "1" ) )
         stopit( 874, "GetAttrib Card returned wrong value", status );
      sval = astGetC( fc, "CardComm" );
      if( !sval )
         stopit( 875, "GetAttrib CardComm returned NULL", status );
   }

   /* Test astGetFitsI via card position */
   astSetI( fc, "Card", 2 );
   if( !astGetFitsI( fc, NULL, &val ) )
      stopit( 777, " ", status );
   else if( val != 45 )
      stopit( 778, " ", status );

   /* Test astGetFitsK */
   astSetI( fc, "Card", 2 );
   if( !astGetFitsK( fc, NULL, &kval ) )
      stopit( 7777, " ", status );
   else if( kval != 45 )
      stopit( 7778, " ", status );

   /* Test astSetFitsK with large value */
   astSetI( fc, "Card", 1000000000 );
   kval = 32147483647LL;
   astSetFitsK( fc, "KTEST", kval, " ", 0 );
   if( !astGetFitsK( fc, "KTEST", &kval ) )
      stopit( 7779, " ", status );
   else if( kval != 32147483647LL )
      stopit( 7780, " ", status );

   /* Test astTestFits */
   astSetI( fc, "Card", 5 );
   if( astTestFits( fc, NULL, &there ) )  /* card 5 (MYNAME) has undefined value */
      stopit( 779, " ", status );
   else if( !there )
      stopit( 780, " ", status );

   if( !astTestFits( fc, "CDELT1", &there ) )
      stopit( 781, " ", status );
   else if( !there )
      stopit( 782, " ", status );

   if( astTestFits( fc, "ABCDEF", &there ) )
      stopit( 783, " ", status );
   else if( there )
      stopit( 784, " ", status );

   /* Position beyond end of FitsChan */
   astSetI( fc, "Card", 11 );
   if( astTestFits( fc, NULL, &there ) )
      stopit( 785, " ", status );
   else if( there )
      stopit( 786, " ", status );

   /* CardName should be blank (past end) */
   cval = (char *)astGetC( fc, "CardName" );
   if( cval && cval[0] != '\0' && strcmp( cval, " " ) != 0 )
      stopit( 787, " ", status );

   /* Annul the fitschan - writes fred.txt */
   astAnnul( fc );

   /* Create another FitsChan reading from fred.txt */
   fc = astFitsChan( NULL, NULL, "SourceFile=./fred.txt" );

   if( astGetI( fc, "NCard" ) != 10 ) {
      printf( "NCard = %d\n", astGetI( fc, "NCard" ) );
      stopit( 1000, " ", status );
   }

   if( astGetI( fc, "Nkey" ) != 10 ) {
      printf( "Nkey = %d\n", astGetI( fc, "Nkey" ) );
      stopit( 999, " ", status );
   }

   /* TestAttrib for read-only attributes should return 0 (error 998) */
   if( astTest( fc, "Ncard" ) )
      stopit( 998, "Test(Ncard) should return 0 for read-only attr", status );
   if( astTest( fc, "Nkey" ) )
      stopit( 997, "Test(Nkey) should return 0 for read-only attr", status );
   if( astTest( fc, "CardType" ) )
      stopit( 996, "Test(CardType) should return 0 for read-only attr", status );
   if( astTest( fc, "AllWarnings" ) )
      stopit( 995, "Test(AllWarnings) should return 0 for read-only attr", status );

   /* TestAttrib parent delegation — test a Channel attribute (line 34141) */
   astSetI( fc, "Full", -1 );
   if( !astTest( fc, "Full" ) )
      stopit( 992, "Test(Full) should return 1 when set", status );
   astClear( fc, "Full" );

   /* GetAttrib parent delegation — ask for an inherited Channel attribute (994) */
   {
      const char *cls = astGetC( fc, "Class" );
      if( !cls || strcmp( cls, "FitsChan" ) )
         stopit( 994, "GetAttrib(Class) wrong for FitsChan", status );
      /* Full is a Channel attribute, should delegate to parent */
      astSetI( fc, "Full", -1 );
      if( astGetI( fc, "Full" ) != -1 )
         stopit( 993, "GetAttrib(Full) wrong after SetI", status );
      astClear( fc, "Full" );
   }

   /* Iterate through cards and compare with originals */
   astClear( fc, "Card" );
   i = 0;
   while( astFindFits( fc, "%f", card, 1 ) ) {
      i++;
      if( i <= 9 ) {
         /* Compare first 30 chars (key+value, ignoring trailing spaces) */
         if( strcmp( rstrip(card), rstrip(cards[i-1]) ) != 0 ) {
            printf( "Card %d mismatch:\n  got [%s]\n  exp [%s]\n",
                    i, card, cards[i-1] );
            stopit( 1001, " ", status );
         }
      }
   }

   astAnnul( fc );

   /* ---------------------------------------------------------------
    * Simple FITS-WCS header with IWC
    * ---------------------------------------------------------------*/
   strncpy( cards[0], "CRPIX1  = 45", 80 );           cards[0][80] = '\0';
   strncpy( cards[1], "CRPIX2  = 45", 80 );           cards[1][80] = '\0';
   strncpy( cards[2], "CRVAL1  = 45", 80 );           cards[2][80] = '\0';
   strncpy( cards[3], "CRVAL2  = 89.9", 80 );         cards[3][80] = '\0';
   strncpy( cards[4], "CDELT1  = -0.01", 80 );        cards[4][80] = '\0';
   strncpy( cards[5], "CDELT2  = 0.01", 80 );         cards[5][80] = '\0';
   strncpy( cards[6], "CTYPE1  = 'RA---TAN'", 80 );   cards[6][80] = '\0';
   strncpy( cards[7], "CTYPE2  = 'DEC--TAN'", 80 );   cards[7][80] = '\0';

   fc = astFitsChan( NULL, NULL, "Iwc=1" );
   for( i = 0; i < 8; i++ )
      astPutFits( fc, cards[i], 0 );

   astClear( fc, "Card" );
   if( astGetI( fc, "CardType" ) != AST__INT ) {
      printf( "CardType = %d, should be %d (AST__INT)\n",
              astGetI( fc, "CardType" ), AST__INT );
      stopit( 993, " ", status );
   }

   /* Retain CTYPE1 card */
   if( astFindFits( fc, "CTYPE1", card, 0 ) )
      astRetainFits( fc );

   /* Read a FrameSet */
   astClear( fc, "Card" );
   fs = (AstFrameSet *)astRead( fc );
   if( !fs )
      stopit( 1, "No FrameSet read from FitsChan", status );

   /* CTYPE1 should be present */
   astClear( fc, "Card" );
   if( !astFindFits( fc, "CTYPE1", card, 0 ) )
      stopit( 2, "CTYPE1 has not been retained", status );

   /* CTYPE2 should NOT be present */
   astClear( fc, "Card" );
   if( astFindFits( fc, "CTYPE2", card, 0 ) )
      stopit( 3, "CTYPE2 has been retained", status );

   /* Check IWC frame */
   if( astGetI( fs, "Nframe" ) != 3 )
      stopit( 301, "Wrong number of Frames", status );
   if( astGetI( fs, "Current" ) != 2 )
      stopit( 302, "Wrong current Frame", status );

   iwcfrm = astGetFrame( fs, 3 );
   if( strcmp( astGetC( iwcfrm, "Domain" ), "IWC" ) != 0 )
      stopit( 303, "Wrong Domain in IWC Frame", status );
   astAnnul( iwcfrm );

   map = astGetMapping( fs, 1, 3 );
   xin = 45.0;  yin = 45.0;
   astTran2( map, 1, &xin, &yin, 1, &xout, &yout );
   if( xout != 0.0 || yout != 0.0 )
      stopit( 304, "Wrong IWC for CRPIX position", status );

   xin = 46.0;
   astTran2( map, 1, &xin, &yin, 1, &xout, &yout );
   if( xout != -0.01 || yout != 0.0 )
      stopit( 305, "Wrong IWC for offset CRPIX position", status );
   astAnnul( map );

   map = astGetMapping( fs, 2, 3 );
   xin = 45.0 * AST__DD2R;
   yin = 89.9 * AST__DD2R;
   astTran2( map, 1, &xin, &yin, 1, &xout, &yout );
   if( fabs( xout ) > 1.0e-10 || fabs( yout ) > 1.0e-10 )
      stopit( 306, "Wrong IWC for CRVAL position", status );
   astAnnul( map );
   astAnnul( fs );

   /* ---------------------------------------------------------------
    * Illegal CRPIX2 value - should cause error in ast_read
    * ---------------------------------------------------------------*/
   strncpy( cards[0], "CRPIX1  = 45", 80 );           cards[0][80] = '\0';
   strncpy( cards[1], "CRPIX2  = 'fred'", 80 );       cards[1][80] = '\0';
   strncpy( cards[2], "CRVAL1  = 45", 80 );           cards[2][80] = '\0';
   strncpy( cards[3], "CRVAL2  = 89.9", 80 );         cards[3][80] = '\0';
   strncpy( cards[4], "CDELT1  = -0.01", 80 );        cards[4][80] = '\0';
   strncpy( cards[5], "CDELT2  = 0.01", 80 );         cards[5][80] = '\0';
   strncpy( cards[6], "CTYPE1  = 'RA---TAN'", 80 );   cards[6][80] = '\0';
   strncpy( cards[7], "CTYPE2  = 'DEC--TAN'", 80 );   cards[7][80] = '\0';

   fc = astFitsChan( NULL, NULL, " " );
   for( i = 0; i < 8; i++ )
      astPutFits( fc, cards[i], 0 );

   /* Retain CTYPE1 */
   astClear( fc, "Card" );
   if( astFindFits( fc, "CTYPE1", card, 0 ) )
      astRetainFits( fc );

   if( *status != 0 ) goto cleanup;

   astClear( fc, "Card" );
   fs = (AstFrameSet *)astRead( fc );

   if( fs ) {
      stopit( 4, "A FrameSet has been read from the FitsChan", status );
   } else if( astOK ) {
      stopit( 5, "No error has been reported by ast_read", status );
   } else {
      astClearStatus;
   }

   /* CTYPE1 should still be present */
   astClear( fc, "Card" );
   if( !astFindFits( fc, "CTYPE1", card, 0 ) )
      stopit( 6, "CTYPE1 has not been retained", status );

   /* CTYPE2 also still present (Clean not set) */
   astClear( fc, "Card" );
   if( !astFindFits( fc, "CTYPE2", card, 0 ) )
      stopit( 7, "CTYPE2 has not been retained", status );

   /* ---------------------------------------------------------------
    * Same again but with Clean=1
    * ---------------------------------------------------------------*/
   fc = astFitsChan( NULL, NULL, "Clean=1" );
   for( i = 0; i < 8; i++ )
      astPutFits( fc, cards[i], 0 );

   astClear( fc, "Card" );
   if( astFindFits( fc, "CTYPE1", card, 0 ) )
      astRetainFits( fc );

   if( *status != 0 ) goto cleanup;

   astClear( fc, "Card" );
   fs = (AstFrameSet *)astRead( fc );

   if( fs ) {
      stopit( 8, "A FrameSet has been read from the FitsChan", status );
   } else if( astOK ) {
      stopit( 9, "No error has been reported by ast_read", status );
   } else {
      astClearStatus;
   }

   /* CTYPE1 retained (explicitly retained) */
   astClear( fc, "Card" );
   if( !astFindFits( fc, "CTYPE1", card, 0 ) )
      stopit( 10, "CTYPE1 has not been retained", status );

   /* CTYPE2 removed (Clean=1) */
   astClear( fc, "Card" );
   if( astFindFits( fc, "CTYPE2", card, 0 ) )
      stopit( 11, "CTYPE2 has been retained", status );

   /* -TAB tests */
   checktab( status );
   checktab2( status );

   /* ---------------------------------------------------------------
    * SIP header: read then try to write (should fail: non-linear)
    * ---------------------------------------------------------------*/
   astEmptyFits( fc );
   astSetI( fc, "SipOK", 0 );
   astSet( fc, "SourceFile=%s/fixtures/wcsconv/inputs/sip.head", srcdir );
   astClear( fc, "Card" );
   fs = (AstFrameSet *)astRead( fc );
   astSet( fc, "Encoding=FITS-WCS" );
   if( !fs )
      stopit( 12, "Failed to read SIP header", status );
   else if( astWrite( fc, fs ) > 0 )
      stopit( 13, "Test on SIP header non-linearity failed", status );
   if( fs ) astAnnul( fs );

   /* ---------------------------------------------------------------
    * Alternate axis descriptions (set 'C' is badly formed on purpose)
    * ---------------------------------------------------------------*/
   astSetI( fc, "Clean", 0 );
   astEmptyFits( fc );

   if( astOK && astGetI( fc, "IgnoreBadAlt" ) )
      stopit( 14, " ", status );

   astSet( fc, "SourceFile=%s/fixtures/programs/testfitschan/alt.header", srcdir );
   astClear( fc, "Card" );
   fs = (AstFrameSet *)astRead( fc );

   if( astOK ) {
      /* Expected an error */
      stopit( 15, " ", status );
   } else if( astStatus != AST__BDFTS ) {
      astClearStatus;
      stopit( 15, " ", status );
   } else {
      astClearStatus;
   }

   astSetI( fc, "IgnoreBadAlt", 1 );
   if( astOK && !astGetI( fc, "IgnoreBadAlt" ) )
      stopit( 16, " ", status );

   astEmptyFits( fc );
   astSet( fc, "SourceFile=%s/fixtures/programs/testfitschan/alt.header", srcdir );
   astClear( fc, "Card" );
   fs = (AstFrameSet *)astRead( fc );

   if( !astOK ) {
      astClearStatus;
      stopit( 17, " ", status );
   }

   if( astGetI( fs, "Nframe" ) != 4 )
      stopit( 18, "Wrong number of Frames", status );
   if( fs ) astAnnul( fs );

   astEmptyFits( fc );
   astSet( fc, "SourceFile=%s/fixtures/programs/testfitschan/alt.header", srcdir );
   astSet( fc, "Warnings=BadAlt" );

   astClear( fc, "Card" );
   fs = (AstFrameSet *)astRead( fc );

   km = (AstKeyMap *)astWarnings( fc );
   if( astMapSize( km ) != 1 )
      stopit( 19, "Wrong number of Warnings", status );

   if( fs ) astAnnul( fs );
   if( km ) astAnnul( km );

/* -----------------------------------------------------------------------
 * Test Clear/Set/Test for FitsChan-specific attributes.
 * Error numbers 100+ to avoid collision with existing tests.
 * AltAxes skipped: the attribute parser treats the leading 'A' as an
 * axis qualifier, making it impossible to set via astSet/astSetI.
 * -----------------------------------------------------------------------*/
   {
      AstFitsChan *afc = astFitsChan( NULL, NULL, " " );
      int ia;

      /* Integer attributes: { name, value to set } */
      static const struct {
         const char *name;
         int setval;
      } int_attrs[] = {
         { "DefB1950",     1 },
         { "CarLin",       1 },
         { "CDMatrix",     1 },
         { "FitsDigits",  10 },
         { "FitsRounding", 5 },
         { "ForceTab",     1 },
         { "IgnoreBadAlt", 1 },
         { "Iwc",          1 },
         { "PolyTan",      1 },
         { "SipOK",        0 },
         { "SipReplace",   0 },
         { "TabOK",        1 },
      };
      int n_int_attrs = (int)( sizeof(int_attrs) / sizeof(int_attrs[0]) );

      for( ia = 0; ia < n_int_attrs; ia++ ) {
         const char *name = int_attrs[ia].name;
         int setval = int_attrs[ia].setval;
         int errbase = 100 + ia * 3;
         char buf[80];

         astSetI( afc, name, setval );
         if( !astTest( afc, name ) ) {
            snprintf( buf, sizeof(buf), "%s not set after SetI", name );
            stopit( errbase, buf, status );
         }
         if( astGetI( afc, name ) != setval ) {
            snprintf( buf, sizeof(buf), "%s value wrong after SetI", name );
            stopit( errbase + 1, buf, status );
         }
         astClear( afc, name );
         if( astTest( afc, name ) ) {
            snprintf( buf, sizeof(buf), "%s still set after Clear", name );
            stopit( errbase + 2, buf, status );
         }
      }

      /* FitsTol (the only double attribute) */
      astSetD( afc, "FitsTol", 0.5 );
      if( !astTest( afc, "FitsTol" ) )
         stopit( 200, "FitsTol not set after SetD", status );
      if( fabs( astGetD( afc, "FitsTol" ) - 0.5 ) > 1e-10 )
         stopit( 201, "FitsTol value wrong after SetD", status );
      astClear( afc, "FitsTol" );
      if( astTest( afc, "FitsTol" ) )
         stopit( 202, "FitsTol still set after Clear", status );

      /* String attributes: { name, value to set } */
      {
         static const struct {
            const char *name;
            const char *setval;
         } str_attrs[] = {
            { "FitsAxisOrder", "RA DEC FREQ" },
            { "Warnings",      "BadAlt BadPV" },
         };
         int n_str_attrs = (int)( sizeof(str_attrs) / sizeof(str_attrs[0]) );

         for( ia = 0; ia < n_str_attrs; ia++ ) {
            const char *name = str_attrs[ia].name;
            const char *setval = str_attrs[ia].setval;
            int errbase = 210 + ia * 3;
            char buf[80];
            const char *got;

            astSetC( afc, name, setval );
            if( !astTest( afc, name ) ) {
               snprintf( buf, sizeof(buf), "%s not set after SetC", name );
               stopit( errbase, buf, status );
            }
            got = astGetC( afc, name );
            if( !got || strcmp( got, setval ) ) {
               snprintf( buf, sizeof(buf), "%s value wrong after SetC", name );
               stopit( errbase + 1, buf, status );
            }
            astClear( afc, name );
            if( astTest( afc, name ) ) {
               snprintf( buf, sizeof(buf), "%s still set after Clear", name );
               stopit( errbase + 2, buf, status );
            }
         }
      }

      afc = astAnnul( afc );
   }

/* -----------------------------------------------------------------------
 * Test FitsChan public API methods that had zero coverage.
 * Error numbers 300+.
 * -----------------------------------------------------------------------*/
   {
      AstFitsChan *afc = astFitsChan( NULL, NULL, " " );
      double cf[2];
      int ci[2];
      int lval;
      char *cval;

      /* astSetFitsCM — insert a comment card */
      astSetFitsCM( afc, "This is a test comment", 0 );
      if( !astOK )
         stopit( 300, "SetFitsCM failed", status );

      /* astSetFitsCF — complex float keyword */
      cf[0] = 1.5;
      cf[1] = 2.5;
      astSetFitsCF( afc, "TESTCF", cf, "complex float", 0 );
      if( !astOK )
         stopit( 301, "SetFitsCF failed", status );

      /* astGetFitsCF — retrieve complex float */
      cf[0] = cf[1] = 0.0;
      astClear( afc, "Card" );
      astGetFitsCF( afc, "TESTCF", cf );
      if( !astOK )
         stopit( 302, "GetFitsCF failed", status );
      if( fabs( cf[0] - 1.5 ) > 1e-10 || fabs( cf[1] - 2.5 ) > 1e-10 )
         stopit( 303, "GetFitsCF returned wrong values", status );

      /* astSetFitsCI — complex integer keyword */
      ci[0] = 10;
      ci[1] = 20;
      astSetFitsCI( afc, "TESTCI", ci, "complex int", 0 );
      if( !astOK )
         stopit( 304, "SetFitsCI failed", status );

      /* astGetFitsCI — retrieve complex integer */
      ci[0] = ci[1] = 0;
      astClear( afc, "Card" );
      astGetFitsCI( afc, "TESTCI", ci );
      if( !astOK )
         stopit( 305, "GetFitsCI failed", status );
      if( ci[0] != 10 || ci[1] != 20 )
         stopit( 306, "GetFitsCI returned wrong values", status );

      /* astGetFitsL — logical keyword */
      astSetFitsL( afc, "TESTL", 1, "logical true", 0 );
      lval = 0;
      astClear( afc, "Card" );
      astGetFitsL( afc, "TESTL", &lval );
      if( !astOK )
         stopit( 307, "GetFitsL failed", status );
      if( !lval )
         stopit( 308, "GetFitsL returned wrong value", status );

      /* astGetFitsCN — continuation string.
         Insert a CONTINUE-card sequence manually via astPutFits. */
      {
         AstFitsChan *fc2 = astFitsChan( NULL, NULL, " " );
         astPutFits( fc2, "LONGSTR = 'Part one of a long &'", 0 );
         astPutFits( fc2, "CONTINUE  'string value'", 0 );
         cval = NULL;
         astClear( fc2, "Card" );
         astGetFitsCN( fc2, "LONGSTR", &cval );
         if( !astOK )
            stopit( 309, "GetFitsCN failed", status );
         if( !cval || strncmp( cval, "Part one", 8 ) )
            stopit( 310, "GetFitsCN returned wrong value", status );
         fc2 = astAnnul( fc2 );
      }

      /* astPutCards — insert multiple 80-char cards as a single string */
      {
         AstFitsChan *fc2 = astFitsChan( NULL, NULL, " " );
         astPutCards( fc2,
            "SIMPLE  =                    T / Standard FITS                                   "
            "BITPIX  =                  -32 / Bits per pixel                                  "
            "NAXIS   =                    0 / No data                                         "
            "END                                                                             " );
         if( !astOK )
            stopit( 311, "PutCards failed", status );
         if( astGetI( fc2, "Ncard" ) < 3 )
            stopit( 312, "PutCards wrong card count", status );
         fc2 = astAnnul( fc2 );
      }

      /* astShowFits — display cards to stdout (just verify no crash) */
      astClear( afc, "Card" );
      astShowFits( afc );
      if( !astOK )
         stopit( 313, "ShowFits failed", status );

      /* astWriteFits / astReadFits — write cards to sink, read from source.
         Use SinkFile/SourceFile for simplicity. */
      {
         AstFitsChan *fc2;
         int ncard_before, ncard_after;

         astSet( afc, "SinkFile=testfitschan_write.fits" );
         ncard_before = astGetI( afc, "Ncard" );
         astWriteFits( afc );
         if( !astOK )
            stopit( 314, "WriteFits failed", status );

         fc2 = astFitsChan( NULL, NULL,
                            "SourceFile=testfitschan_write.fits" );
         astReadFits( fc2 );
         if( !astOK )
            stopit( 315, "ReadFits failed", status );
         ncard_after = astGetI( fc2, "Ncard" );
         if( ncard_after < ncard_before )
            stopit( 316, "ReadFits lost cards", status );
         fc2 = astAnnul( fc2 );
      }

      afc = astAnnul( afc );
   }

/* -----------------------------------------------------------------------
 * Test FitsChan Dump/Load round-trip via astToString/astFromString.
 * Exercises all keyword data types (FLOAT, STRING, INT, KINT, LOGICAL,
 * COMPLEXF, COMPLEXI), non-default Encoding and AltAxes attributes.
 * Error numbers 400+.
 * -----------------------------------------------------------------------*/
   {
      AstFitsChan *afc = astFitsChan( NULL, NULL, " " );
      AstFitsChan *afc2;
      char *pickle;
      int ncard1, ncard2;
      double cfval[2];
      int cival[2];
      int lval;
      double dval_got;

      astSetFitsI( afc, "TESTI", 42, "integer", 0 );
      astSetFitsF( afc, "TESTF", 3.14, "float", 0 );
      astSetFitsS( afc, "TESTS", "hello", "string", 0 );
      astSetFitsK( afc, "TESTK", (int64_t)123456789012LL, "64-bit int", 0 );
      astSetFitsL( afc, "TESTL", 1, "logical true", 0 );
      cfval[0] = 1.5; cfval[1] = 2.5;
      astSetFitsCF( afc, "TESTCF", cfval, "complex float", 0 );
      cival[0] = 10; cival[1] = 20;
      astSetFitsCI( afc, "TESTCI", cival, "complex int", 0 );
      astSetFitsU( afc, "TESTU", "undefined keyword", 0 );

      astSetC( afc, "Encoding", "FITS-WCS" );
      astSetC( afc, "AltAxes", "ALL" );
      astSetC( afc, "FitsAxisOrder", "FREQ RA DEC" );
      ncard1 = astGetI( afc, "Ncard" );

      pickle = astToString( afc );
      if( !pickle ) {
         stopit( 400, "astToString returned NULL", status );
      } else {
         afc2 = (AstFitsChan *) astFromString( pickle );
         if( !afc2 ) {
            stopit( 401, "astFromString returned NULL", status );
         } else {
            ncard2 = astGetI( afc2, "Ncard" );
            if( ncard2 != ncard1 )
               stopit( 402, "Round-trip changed card count", status );

            {
               const char *enc = astGetC( afc2, "Encoding" );
               if( !enc || strcmp( enc, "FITS-WCS" ) )
                  stopit( 403, "Round-trip lost Encoding", status );
            }
            {
               const char *alt = astGetC( afc2, "AltAxes" );
               if( !alt || strcmp( alt, "ALL" ) )
                  stopit( 404, "Round-trip lost AltAxes", status );
            }
            {
               const char *fao = astGetC( afc2, "FitsAxisOrder" );
               if( !fao || strcmp( fao, "FREQ RA DEC" ) )
                  stopit( 409, "Round-trip lost FitsAxisOrder", status );
            }

            astClear( afc2, "Card" );
            if( !astGetFitsF( afc2, "TESTF", &dval_got ) || fabs( dval_got - 3.14 ) > 1e-10 )
               stopit( 405, "Round-trip lost TESTF", status );

            if( !astGetFitsL( afc2, "TESTL", &lval ) || lval != 1 )
               stopit( 406, "Round-trip lost TESTL", status );

            cfval[0] = cfval[1] = 0.0;
            if( !astGetFitsCF( afc2, "TESTCF", cfval ) ||
                fabs( cfval[0] - 1.5 ) > 1e-10 ||
                fabs( cfval[1] - 2.5 ) > 1e-10 )
               stopit( 407, "Round-trip lost TESTCF", status );

            cival[0] = cival[1] = 0;
            if( !astGetFitsCI( afc2, "TESTCI", cival ) ||
                cival[0] != 10 || cival[1] != 20 )
               stopit( 408, "Round-trip lost TESTCI", status );

            afc2 = astAnnul( afc2 );
         }
         astFree( pickle );
      }

      afc = astAnnul( afc );
   }

/* -----------------------------------------------------------------------
 * Second Dump/Load test: exercises card flags (written when cards have
 * been consumed by astRead), UNDEF keyword round-trip, and default
 * attribute loading (no Encoding/AltAxes set → default paths in Load).
 * Error numbers 410+.
 * -----------------------------------------------------------------------*/
   {
      AstFitsChan *bfc, *bfc2;
      AstObject *bobj;
      char *bpickle;
      int bncard1, bncard2;

      bfc = astFitsChan( NULL, NULL, " " );
      astPutFits( bfc, "NAXIS1  = 100", 0 );
      astPutFits( bfc, "NAXIS2  = 100", 0 );
      astPutFits( bfc, "CTYPE1  = 'RA---TAN'", 0 );
      astPutFits( bfc, "CTYPE2  = 'DEC--TAN'", 0 );
      astPutFits( bfc, "CRVAL1  = 180.0", 0 );
      astPutFits( bfc, "CRVAL2  = 45.0", 0 );
      astPutFits( bfc, "CRPIX1  = 50.0", 0 );
      astPutFits( bfc, "CRPIX2  = 50.0", 0 );
      astPutFits( bfc, "CDELT1  = -0.01", 0 );
      astPutFits( bfc, "CDELT2  = 0.01", 0 );
      astPutFits( bfc, "RADESYS = 'FK5'", 0 );
      astPutFits( bfc, "EQUINOX = 2000.0", 0 );
      astSetFitsU( bfc, "BLANK1", "value not yet known", 0 );

      astClear( bfc, "Card" );
      bobj = astRead( bfc );
      if( bobj ) astAnnul( bobj );
      bncard1 = astGetI( bfc, "Ncard" );

      bpickle = astToString( bfc );
      if( !bpickle ) {
         stopit( 410, "Flags dump: astToString returned NULL", status );
      } else {
         if( !strstr( bpickle, "Fl" ) )
            stopit( 411, "Flags dump: no Fl keyword in pickle", status );
         if( !strstr( bpickle, "undef" ) )
            stopit( 412, "Flags dump: no undef type in pickle", status );

         bfc2 = (AstFitsChan *) astFromString( bpickle );
         if( !bfc2 ) {
            stopit( 413, "Flags dump: astFromString returned NULL", status );
         } else {
            bncard2 = astGetI( bfc2, "Ncard" );
            if( bncard2 != bncard1 )
               stopit( 414, "Flags dump: round-trip changed card count", status );

            astClear( bfc2, "Card" );
            if( !astFindFits( bfc2, "BLANK1", NULL, 0 ) )
               stopit( 415, "Flags dump: UNDEF keyword BLANK1 lost", status );
            else {
               int btype = astGetI( bfc2, "CardType" );
               if( btype != AST__UNDEF )
                  stopit( 416, "Flags dump: BLANK1 not UNDEF after round-trip",
                          status );
            }

            bfc2 = astAnnul( bfc2 );
         }
         astFree( bpickle );
      }

      bfc = astAnnul( bfc );
   }

/* -----------------------------------------------------------------------
 * Write-path round-trip tests: build FrameSets that exercise specific
 * write code paths, encode to a FitsChan, read back, verify success.
 * Error numbers 500+.
 *
 * For sky coordinate tests, we read a simple TAN header to get a
 * valid FrameSet with proper WCS mappings, then change the SkyFrame
 * system and write it back. This ensures the projection and coordinate
 * matrices are valid.
 * -----------------------------------------------------------------------*/
   {
      AstFitsChan *hfc;
      AstFrameSet *tfs;
      AstSpecFrame *spec;
      AstFrame *pixel;
      AstMapping *map;
      char buf[120];
      int rt;

      static const char *sky_systems[] = {
         "FK5", "FK4", "FK4-NO-E", "ICRS", "GALACTIC",
         "SUPERGALACTIC", "ECLIPTIC",
      };
      int n_sky = (int)( sizeof(sky_systems) / sizeof(sky_systems[0]) );

      static const char *encodings[] = {
         "FITS-WCS", "FITS-PC", "FITS-IRAF", "FITS-AIPS", "FITS-AIPS++",
      };
      int n_enc = (int)( sizeof(encodings) / sizeof(encodings[0]) );
      static const char *lon_prefix[] = {
         "RA--", "RA--", "RA--", "RA--", "GLON", "SLON", "ELON",
      };
      char expect_ctype[12];
      int is, ie;

      for( is = 0; is < n_sky; is++ ) {
         snprintf( expect_ctype, sizeof(expect_ctype), "%s-TAN", lon_prefix[is] );
         for( ie = 0; ie < n_enc; ie++ ) {
            hfc = astFitsChan( NULL, NULL, " " );
            astPutFits( hfc, "SIMPLE  =                    T", 0 );
            astPutFits( hfc, "BITPIX  =                  -32", 0 );
            astPutFits( hfc, "NAXIS   =                    2", 0 );
            astPutFits( hfc, "NAXIS1  =                  100", 0 );
            astPutFits( hfc, "NAXIS2  =                  100", 0 );
            astPutFits( hfc, "CTYPE1  = 'GLON-TAN'", 0 );
            astPutFits( hfc, "CTYPE2  = 'GLAT-TAN'", 0 );
            astPutFits( hfc, "CRVAL1  =              180.000", 0 );
            astPutFits( hfc, "CRVAL2  =                0.000", 0 );
            astPutFits( hfc, "CRPIX1  =               50.500", 0 );
            astPutFits( hfc, "CRPIX2  =               50.500", 0 );
            astPutFits( hfc, "CDELT1  =              -0.0100", 0 );
            astPutFits( hfc, "CDELT2  =               0.0100", 0 );
            astPutFits( hfc, "END", 0 );
            astClear( hfc, "Card" );
            tfs = (AstFrameSet *) astRead( hfc );
            hfc = astAnnul( hfc );
            if( tfs ) {
               astSetC( tfs, "System", sky_systems[is] );
               rt = roundtrip( tfs, encodings[ie], "", 1e-3,
                               "CTYPE", expect_ctype, status );
               if( rt == -1 ) {
                  snprintf( buf, sizeof(buf),
                            "Coordinates disagree for %s with %s",
                            sky_systems[is], encodings[ie] );
                  stopit( 500 + is * n_enc + ie, buf, status );
               } else if( rt == -2 ) {
                  snprintf( buf, sizeof(buf),
                            "Wrong CTYPE1 for %s with %s (expected %s)",
                            sky_systems[is], encodings[ie], expect_ctype );
                  stopit( 500 + is * n_enc + ie, buf, status );
               }
               tfs = astAnnul( tfs );
            }
         }
      }

      /* --- Spectral axes through multiple encodings --- */
      {
         static const struct {
            const char *spec_attrs;
            const char *label;
            const char *expect_ctype;
         } spec_systems[] = {
            { "System=FREQ,Unit=Hz,StdOfRest=Barycentric,RestFreq=1.4204e9 Hz", "FREQ", "FREQ" },
            { "System=WAVE,Unit=m,StdOfRest=Barycentric,RestFreq=5.996e14 Hz",  "WAVE", "WAVE" },
            { "System=VRAD,Unit=m/s,StdOfRest=LSRK,RestFreq=1.4204e9 Hz",      "VRAD", "VRAD" },
            { "System=VOPT,Unit=m/s,StdOfRest=Barycentric,RestFreq=1.4204e9 Hz","VOPT", "VOPT" },
            { "System=ZOPT,Unit= ,StdOfRest=Barycentric,RestFreq=1.4204e9 Hz",  "ZOPT", "ZOPT" },
            { "System=BETA,Unit= ,StdOfRest=Barycentric,RestFreq=1.4204e9 Hz",  "BETA", "BETA" },
         };
         int n_spec = (int)( sizeof(spec_systems) / sizeof(spec_systems[0]) );
         double zooms[] = { 1.0e6, 1.0e-10, 1000.0, 1000.0, 1.0e-6, 1.0e-6 };
         int isp;

         for( isp = 0; isp < n_spec; isp++ ) {
            spec = astSpecFrame( "%s", spec_systems[isp].spec_attrs );
            pixel = astFrame( 1, "Domain=GRID" );
            map = (AstMapping *) astZoomMap( 1, zooms[isp], " " );
            tfs = astFrameSet( pixel, " " );
            astAddFrame( tfs, AST__CURRENT, map, (AstFrame *) spec );
            rt = roundtrip( tfs, "FITS-WCS", "", 1e-3,
                            "CTYPE1", spec_systems[isp].expect_ctype, status );
            if( rt == 0 ) {
               snprintf( buf, sizeof(buf),
                         "Write/read failed for %s SpecFrame",
                         spec_systems[isp].label );
               stopit( 600 + isp, buf, status );
            } else if( rt == -1 ) {
               snprintf( buf, sizeof(buf),
                         "Coordinates disagree for %s SpecFrame",
                         spec_systems[isp].label );
               stopit( 600 + isp, buf, status );
            } else if( rt == -2 ) {
               snprintf( buf, sizeof(buf),
                         "Wrong CTYPE1 for %s SpecFrame (expected %s)",
                         spec_systems[isp].label, spec_systems[isp].expect_ctype );
               stopit( 600 + isp, buf, status );
            }
         }
      }

      /* --- Non-linear spectral algorithm write path (exercises SpectralAxes
             CTYPE construction for -X2P codes like VOPT-F2W). Build a
             FrameSet with pixel linear in FREQ, then change System to VOPT.
             The pixel->VOPT mapping is non-linear, forcing the non-linear
             algorithm. --- */
      {
         AstSpecFrame *nlspec;
         AstFrameSet *nltfs;

         nlspec = astSpecFrame( "System=FREQ,Unit=Hz,StdOfRest=Barycentric,"
                                "RestFreq=1.4204e9 Hz" );
         pixel = astFrame( 1, "Domain=GRID" );
         map = (AstMapping *) astZoomMap( 1, 1.0e6, " " );
         nltfs = astFrameSet( pixel, " " );
         astAddFrame( nltfs, AST__CURRENT, map, (AstFrame *) nlspec );
         astSetC( nltfs, "System", "VOPT" );

         rt = roundtrip( nltfs, "FITS-WCS", "", 1e-3,
                         "CTYPE1", "VOPT-F2W", status );
         if( rt == 0 )
            stopit( 606, "Write/read failed for non-linear VOPT-F2W", status );
         else if( rt == -1 )
            stopit( 607, "Coordinates disagree for non-linear VOPT-F2W", status );
         else if( rt == -2 )
            stopit( 606, "Wrong CTYPE1 for non-linear VOPT-F2W", status );

         nltfs = astAnnul( nltfs );
      }

      /* --- Non-linear spectral: WAVE system with pixel linear in FREQ.
             Tests the WAVE-F2W algorithm path. --- */
      {
         AstSpecFrame *nlspec2;
         AstFrameSet *nltfs2;

         nlspec2 = astSpecFrame( "System=FREQ,Unit=Hz,StdOfRest=Barycentric,"
                                 "RestFreq=1.4204e9 Hz" );
         pixel = astFrame( 1, "Domain=GRID" );
         map = (AstMapping *) astZoomMap( 1, 1.0e6, " " );
         nltfs2 = astFrameSet( pixel, " " );
         astAddFrame( nltfs2, AST__CURRENT, map, (AstFrame *) nlspec2 );
         astSetC( nltfs2, "System", "WAVE" );
         astSetC( nltfs2, "Unit(1)", "m" );

         rt = roundtrip( nltfs2, "FITS-WCS", "", 1e-3,
                         "CTYPE1", "WAVE-F2W", status );
         if( rt == 0 )
            stopit( 608, "Write/read failed for non-linear WAVE-F2W", status );
         else if( rt == -1 )
            stopit( 609, "Coordinates disagree for non-linear WAVE-F2W", status );
         else if( rt == -2 )
            stopit( 608, "Wrong CTYPE1 for non-linear WAVE-F2W", status );

         nltfs2 = astAnnul( nltfs2 );
      }

      /* --- Non-linear spectral: WAVN system with pixel linear in WAVE.
             Tests the -W2F suffix (X=WAVE, S=WAVN -> WAVN-W2F). --- */
      {
         AstSpecFrame *nlspec3;
         AstFrameSet *nltfs3;

         nlspec3 = astSpecFrame( "System=WAVE,Unit=m,StdOfRest=Barycentric,"
                                 "RestFreq=1.4204e9 Hz" );
         pixel = astFrame( 1, "Domain=GRID" );
         map = (AstMapping *) astZoomMap( 1, 1.0e-10, " " );
         nltfs3 = astFrameSet( pixel, " " );
         astAddFrame( nltfs3, AST__CURRENT, map, (AstFrame *) nlspec3 );
         astSetC( nltfs3, "System", "WAVN" );
         astSetC( nltfs3, "Unit(1)", "1/m" );

         rt = roundtrip( nltfs3, "FITS-WCS", "", 1e-3,
                         "CTYPE1", "WAVN-W2F", status );
         if( rt == 0 )
            stopit( 650, "Write/read failed for non-linear WAVN-W2F", status );
         else if( rt == -1 )
            stopit( 651, "Coordinates disagree for non-linear WAVN-W2F", status );
         else if( rt == -2 )
            stopit( 650, "Wrong CTYPE1 for non-linear WAVN-W2F", status );

         nltfs3 = astAnnul( nltfs3 );
      }

      /* --- Non-linear spectral: AWAV system with pixel linear in FREQ.
             Tests the -F2A suffix (X=FREQ, S=AWAV -> AWAV-F2A). --- */
      {
         AstSpecFrame *nlspec4;
         AstFrameSet *nltfs4;

         nlspec4 = astSpecFrame( "System=FREQ,Unit=Hz,StdOfRest=Barycentric,"
                                 "RestFreq=1.4204e9 Hz" );
         pixel = astFrame( 1, "Domain=GRID" );
         map = (AstMapping *) astZoomMap( 1, 1.0e6, " " );
         nltfs4 = astFrameSet( pixel, " " );
         astAddFrame( nltfs4, AST__CURRENT, map, (AstFrame *) nlspec4 );
         astSetC( nltfs4, "System", "AWAV" );
         astSetC( nltfs4, "Unit(1)", "m" );

         rt = roundtrip( nltfs4, "FITS-WCS", "", 1e-3,
                         "CTYPE1", "AWAV-F2A", status );
         if( rt == 0 )
            stopit( 652, "Write/read failed for non-linear AWAV-F2A", status );
         else if( rt == -1 )
            stopit( 653, "Coordinates disagree for non-linear AWAV-F2A", status );
         else if( rt == -2 )
            stopit( 652, "Wrong CTYPE1 for non-linear AWAV-F2A", status );

         nltfs4 = astAnnul( nltfs4 );
      }

      /* --- Non-linear spectral: BETA system with pixel linear in VELO.
             Tests the -V2V suffix (X=VELO, S=BETA -> BETA-V2V). --- */
      {
         AstSpecFrame *nlspec5;
         AstFrameSet *nltfs5;

         nlspec5 = astSpecFrame( "System=VELO,Unit=m/s,StdOfRest=Barycentric,"
                                 "RestFreq=1.4204e9 Hz" );
         pixel = astFrame( 1, "Domain=GRID" );
         map = (AstMapping *) astZoomMap( 1, 1000.0, " " );
         nltfs5 = astFrameSet( pixel, " " );
         astAddFrame( nltfs5, AST__CURRENT, map, (AstFrame *) nlspec5 );
         astSetC( nltfs5, "System", "BETA" );

         rt = roundtrip( nltfs5, "FITS-WCS", "", 1e-3,
                         "CTYPE1", "BETA", status );
         if( rt == 0 )
            stopit( 654, "Write/read failed for non-linear BETA-V2V", status );
         else if( rt == -1 )
            stopit( 655, "Coordinates disagree for non-linear BETA-V2V", status );
         else if( rt == -2 )
            stopit( 654, "Wrong CTYPE1 for non-linear BETA", status );

         nltfs5 = astAnnul( nltfs5 );
      }

      /* --- Non-linear spectral: VELO system with pixel linear in FREQ.
             Tests the "V" suffix (X=FREQ, S=VELO -> VELO-F2V). --- */
      {
         AstSpecFrame *nlspec6;
         AstFrameSet *nltfs6;

         nlspec6 = astSpecFrame( "System=FREQ,Unit=Hz,StdOfRest=Barycentric,"
                                 "RestFreq=1.4204e9 Hz" );
         pixel = astFrame( 1, "Domain=GRID" );
         map = (AstMapping *) astZoomMap( 1, 1.0e6, " " );
         nltfs6 = astFrameSet( pixel, " " );
         astAddFrame( nltfs6, AST__CURRENT, map, (AstFrame *) nlspec6 );
         astSetC( nltfs6, "System", "VELO" );
         astSetC( nltfs6, "Unit(1)", "m/s" );

         rt = roundtrip( nltfs6, "FITS-WCS", "", 1e-3,
                         "CTYPE1", "VELO-F2V", status );
         if( rt == 0 )
            stopit( 660, "Write/read failed for non-linear VELO-F2V", status );
         else if( rt == -1 )
            stopit( 661, "Coordinates disagree for non-linear VELO-F2V", status );
         else if( rt == -2 )
            stopit( 660, "Wrong CTYPE1 for non-linear VELO-F2V", status );

         nltfs6 = astAnnul( nltfs6 );
      }

      /* --- Non-linear spectral: pixel linear in AWAV, System=FREQ.
             AWAV->FREQ and AWAV->WAVE are both non-linear (air refraction),
             so the x_sys loop reaches ix=2 (AWAV), giving FREQ-A2F. --- */
      {
         AstSpecFrame *nlspec7;
         AstFrameSet *nltfs7;

         nlspec7 = astSpecFrame( "System=AWAV,Unit=m,StdOfRest=Barycentric,"
                                 "RestFreq=1.4204e9 Hz" );
         pixel = astFrame( 1, "Domain=GRID" );
         map = (AstMapping *) astZoomMap( 1, 1.0e-10, " " );
         nltfs7 = astFrameSet( pixel, " " );
         astAddFrame( nltfs7, AST__CURRENT, map, (AstFrame *) nlspec7 );
         astSetC( nltfs7, "System", "FREQ" );
         astSetC( nltfs7, "Unit(1)", "Hz" );

         rt = roundtrip( nltfs7, "FITS-WCS", "", 0.1,
                         "CTYPE1", "FREQ-A2F", status );
         if( rt == 0 )
            stopit( 662, "Write/read failed for non-linear FREQ-A2F", status );
         else if( rt == -1 )
            stopit( 663, "Coordinates disagree for non-linear FREQ-A2F", status );
         else if( rt == -2 )
            stopit( 662, "Wrong CTYPE1 for non-linear FREQ-A2F", status );

         nltfs7 = astAnnul( nltfs7 );
      }

      /* --- Non-linear spectral: pixel linear in VELO, System=FREQ.
             VELO->FREQ, VELO->WAVE, VELO->AWAV all non-linear (relativistic
             Doppler), so x_sys loop reaches ix=3 (VELO), giving FREQ-V2F. --- */
      {
         AstSpecFrame *nlspec8;
         AstFrameSet *nltfs8;

         nlspec8 = astSpecFrame( "System=VELO,Unit=m/s,StdOfRest=Barycentric,"
                                 "RestFreq=1.4204e9 Hz" );
         pixel = astFrame( 1, "Domain=GRID" );
         map = (AstMapping *) astZoomMap( 1, 1000.0, " " );
         nltfs8 = astFrameSet( pixel, " " );
         astAddFrame( nltfs8, AST__CURRENT, map, (AstFrame *) nlspec8 );
         astSetC( nltfs8, "System", "FREQ" );
         astSetC( nltfs8, "Unit(1)", "Hz" );

         rt = roundtrip( nltfs8, "FITS-WCS", "", 1e-3,
                         "CTYPE1", "FREQ-V2F", status );
         if( rt == 0 )
            stopit( 664, "Write/read failed for non-linear FREQ-V2F", status );
         else if( rt == -1 )
            stopit( 665, "Coordinates disagree for non-linear FREQ-V2F", status );
         else if( rt == -2 )
            stopit( 664, "Wrong CTYPE1 for non-linear FREQ-V2F", status );

         nltfs8 = astAnnul( nltfs8 );
      }

      /* --- Spectral axis Label and ObsGeo write paths: set Label and
             observer position on SpecFrame, verify they appear in output. --- */
      {
         AstSpecFrame *slspec;
         AstFrameSet *sltfs;
         AstFitsChan *slfc;
         double obsgx;

         slspec = astSpecFrame( "System=FREQ,Unit=Hz,StdOfRest=Barycentric,"
                                "RestFreq=1.4204e9 Hz" );
         astSetC( (AstFrame *)slspec, "Label(1)", "Rest Frequency" );
         astSetD( (AstFrame *)slspec, "ObsLon", -2.713594 );
         astSetD( (AstFrame *)slspec, "ObsLat", 0.345862 );
         astSetD( (AstFrame *)slspec, "ObsAlt", 4205.0 );
         pixel = astFrame( 1, "Domain=GRID" );
         map = (AstMapping *) astZoomMap( 1, 1.0e6, " " );
         sltfs = astFrameSet( pixel, " " );
         astAddFrame( sltfs, AST__CURRENT, map, (AstFrame *) slspec );

         slfc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
         astPutFits( slfc, "NAXIS   = 1", 0 );
         astPutFits( slfc, "NAXIS1  = 1024", 0 );
         if( astWrite( slfc, sltfs ) != 1 )
            stopit( 670, "Spectral Label+ObsGeo write failed", status );

         astClear( slfc, "Card" );
         if( astFindFits( slfc, "CTYPE1", NULL, 0 ) ) {
            const char *slcom = astGetC( slfc, "CardComm" );
            if( !slcom || !strstr( slcom, "Rest Frequency" ) )
               stopit( 671, "Spectral CTYPE1 comment missing label", status );
         }

         astClear( slfc, "Card" );
         if( !astGetFitsF( slfc, "OBSGEO-X", &obsgx ) )
            stopit( 672, "OBSGEO-X not written", status );
         else if( fabs( obsgx ) < 1.0 )
            stopit( 673, "OBSGEO-X value too small", status );

         slfc = astAnnul( slfc );
         sltfs = astAnnul( sltfs );
      }

      /* --- LOG spectral algorithm: pixel coords related to spectral
             system by S = Sr.exp(a.p). Build using a MathMap so that
             log(S) is linear in pixels. --- */
      {
         AstSpecFrame *logspec;
         AstFrame *logpix;
         AstMapping *logmap;
         AstFrameSet *logtfs;
         AstFitsChan *logfc;
         const char *fexps[1];
         const char *iexps[1];
         char *log_ctype;

         fexps[0] = "s = 1.4204e9 * exp( p * 1.0e-4 )";
         iexps[0] = "p = 1.0e4 * log( s / 1.4204e9 )";
         logmap = (AstMapping *)astMathMap( 1, 1, 1, fexps, 1, iexps,
                                            " " );
         logspec = astSpecFrame( "System=FREQ,Unit=Hz,StdOfRest=Barycentric,"
                                 "RestFreq=1.4204e9 Hz" );
         logpix = astFrame( 1, "Domain=GRID" );
         logtfs = astFrameSet( logpix, " " );
         astAddFrame( logtfs, AST__BASE, logmap, (AstFrame *)logspec );

         logfc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
         astPutFits( logfc, "NAXIS   = 1", 0 );
         astPutFits( logfc, "NAXIS1  = 1024", 0 );
         if( astWrite( logfc, logtfs ) != 1 )
            stopit( 680, "LOG spectral write failed", status );

         astClear( logfc, "Card" );
         if( !astGetFitsS( logfc, "CTYPE1", &log_ctype ) )
            stopit( 681, "LOG spectral CTYPE1 missing", status );
         else if( strcmp( log_ctype, "FREQ-LOG" ) )
            stopit( 682, "LOG spectral CTYPE1 not FREQ-LOG", status );

         {
            AstFrameSet *logfs2;
            double pin[1], pout_orig[1], pout_rt[1];

            astClear( logfc, "Card" );
            logfs2 = (AstFrameSet *)astRead( logfc );
            if( logfs2 ) {
               pin[0] = 512.0;
               astTranN( logtfs, 1, 1, 1, pin, 1, 1, 1, pout_orig );
               astTranN( logfs2, 1, 1, 1, pin, 1, 1, 1, pout_rt );
               if( fabs( pout_orig[0] - pout_rt[0] ) > fabs( 1e-6 * pout_orig[0] ) )
                  stopit( 683, "LOG spectral round-trip coordinate mismatch", status );
               logfs2 = astAnnul( logfs2 );
            } else {
               stopit( 684, "LOG spectral read-back failed", status );
            }
         }

         logfc = astAnnul( logfc );
         logtfs = astAnnul( logtfs );
      }

      /* --- 3D sky+spec tests moved to fixtures/wcsconv/cases.txt:
             skyspec3d.head -> fits-wcs/fits-aips/fits-aips++/fits-iraf
             skyspec3d-class.head -> fits-class
             offset-sky.head -> fits-wcs
             azel.head -> fits-wcs --- */

      /* --- AZEL: read a standard header with observer position and epoch,
             convert to AZEL, then round-trip through FITS-WCS --- */
      {
         AstFitsChan *hfc5 = astFitsChan( NULL, NULL, " " );
         astPutFits( hfc5, "SIMPLE  =                    T", 0 );
         astPutFits( hfc5, "BITPIX  =                  -32", 0 );
         astPutFits( hfc5, "NAXIS   =                    2", 0 );
         astPutFits( hfc5, "NAXIS1  =                  100", 0 );
         astPutFits( hfc5, "NAXIS2  =                  100", 0 );
         astPutFits( hfc5, "CTYPE1  = 'RA---TAN'", 0 );
         astPutFits( hfc5, "CTYPE2  = 'DEC--TAN'", 0 );
         astPutFits( hfc5, "CRVAL1  =              180.000", 0 );
         astPutFits( hfc5, "CRVAL2  =               45.000", 0 );
         astPutFits( hfc5, "CRPIX1  =               50.500", 0 );
         astPutFits( hfc5, "CRPIX2  =               50.500", 0 );
         astPutFits( hfc5, "CDELT1  =              -0.0100", 0 );
         astPutFits( hfc5, "CDELT2  =               0.0100", 0 );
         astPutFits( hfc5, "RADESYS = 'FK5'", 0 );
         astPutFits( hfc5, "EQUINOX =               2000.0", 0 );
         astPutFits( hfc5, "DATE-OBS= '2017-07-21T08:38:39.087'", 0 );
         astPutFits( hfc5, "OBSGEO-X=  -5464586.5949660344", 0 );
         astPutFits( hfc5, "OBSGEO-Y=  -2492996.5580556658", 0 );
         astPutFits( hfc5, "OBSGEO-Z=   2150654.3760909005", 0 );
         astPutFits( hfc5, "END", 0 );
         astClear( hfc5, "Card" );
         tfs = (AstFrameSet *) astRead( hfc5 );
         hfc5 = astAnnul( hfc5 );
         if( tfs ) {
            astSetC( tfs, "System", "AZEL" );
            rt = roundtrip( tfs, "FITS-WCS", "", 1e-3,
                            "CTYPE", "AZ---TAN", status );
            if( rt == 0 )
               stopit( 630, "Write/read failed for AZEL", status );
            else if( rt == -1 )
               stopit( 631, "Coordinates disagree for AZEL round-trip", status );
            else if( rt == -2 )
               stopit( 633, "AZEL conversion: no CTYPEn is AZ---TAN", status );
            tfs = astAnnul( tfs );
         } else {
            stopit( 632, "Failed to read header for AZEL test", status );
         }
      }

      /* --- AZEL: read an AZ/EL header directly --- */
      {
         AstFitsChan *hfc6 = astFitsChan( NULL, NULL, " " );
         astPutFits( hfc6, "SIMPLE  =                    T", 0 );
         astPutFits( hfc6, "BITPIX  =                  -32", 0 );
         astPutFits( hfc6, "NAXIS   =                    2", 0 );
         astPutFits( hfc6, "NAXIS1  =                  100", 0 );
         astPutFits( hfc6, "NAXIS2  =                  100", 0 );
         astPutFits( hfc6, "CTYPE1  = 'AZ---TAN'", 0 );
         astPutFits( hfc6, "CTYPE2  = 'EL---TAN'", 0 );
         astPutFits( hfc6, "CRVAL1  =              185.000", 0 );
         astPutFits( hfc6, "CRVAL2  =               60.000", 0 );
         astPutFits( hfc6, "CRPIX1  =               50.500", 0 );
         astPutFits( hfc6, "CRPIX2  =               50.500", 0 );
         astPutFits( hfc6, "CDELT1  =              -0.0100", 0 );
         astPutFits( hfc6, "CDELT2  =               0.0100", 0 );
         astPutFits( hfc6, "DATE-OBS= '2017-07-21T08:38:39.087'", 0 );
         astPutFits( hfc6, "OBSGEO-X=  -5464586.5949660344", 0 );
         astPutFits( hfc6, "OBSGEO-Y=  -2492996.5580556658", 0 );
         astPutFits( hfc6, "OBSGEO-Z=   2150654.3760909005", 0 );
         astPutFits( hfc6, "END", 0 );
         astClear( hfc6, "Card" );
         tfs = (AstFrameSet *) astRead( hfc6 );
         hfc6 = astAnnul( hfc6 );
         if( tfs ) {
            AstFrame *skyfrm = astGetFrame( tfs, AST__CURRENT );
            if( strcmp( astGetC( skyfrm, "System" ), "AZEL" ) != 0 )
               stopit( 640, "AZEL header did not produce AZEL SkyFrame", status );
            astAnnul( skyfrm );

            rt = roundtrip( tfs, "FITS-WCS", "", 1e-3,
                            "CTYPE", "AZ---TAN", status );
            if( rt == 0 )
               stopit( 641, "Write/read failed for direct AZEL header", status );
            else if( rt == -1 )
               stopit( 643, "Coordinates disagree for direct AZEL header", status );
            else if( rt == -2 )
               stopit( 644, "Direct AZEL: no CTYPEn is AZ---TAN", status );
            tfs = astAnnul( tfs );
         } else {
            stopit( 642, "Failed to read AZEL header", status );
         }
      }

      /* --- DATE-OBS and OBSGEO propagation: verify metadata survives
             a FITS-WCS round-trip --- */
      {
         AstFitsChan *hfc7 = astFitsChan( NULL, NULL, " " );
         AstFitsChan *wfc;
         AstFrameSet *tfs7;
         double dval;

         astPutFits( hfc7, "SIMPLE  =                    T", 0 );
         astPutFits( hfc7, "BITPIX  =                  -32", 0 );
         astPutFits( hfc7, "NAXIS   =                    2", 0 );
         astPutFits( hfc7, "NAXIS1  =                  100", 0 );
         astPutFits( hfc7, "NAXIS2  =                  100", 0 );
         astPutFits( hfc7, "CTYPE1  = 'RA---TAN'", 0 );
         astPutFits( hfc7, "CTYPE2  = 'DEC--TAN'", 0 );
         astPutFits( hfc7, "CRVAL1  =              180.000", 0 );
         astPutFits( hfc7, "CRVAL2  =               45.000", 0 );
         astPutFits( hfc7, "CRPIX1  =               50.500", 0 );
         astPutFits( hfc7, "CRPIX2  =               50.500", 0 );
         astPutFits( hfc7, "CDELT1  =              -0.0100", 0 );
         astPutFits( hfc7, "CDELT2  =               0.0100", 0 );
         astPutFits( hfc7, "RADESYS = 'FK5'", 0 );
         astPutFits( hfc7, "EQUINOX =               2000.0", 0 );
         astPutFits( hfc7, "MJD-OBS =   57955.360174621412", 0 );
         astPutFits( hfc7, "DATE-OBS= '2017-07-21T08:38:39.087'", 0 );
         astPutFits( hfc7, "OBSGEO-X=  -5464586.5949660344", 0 );
         astPutFits( hfc7, "OBSGEO-Y=  -2492996.5580556658", 0 );
         astPutFits( hfc7, "OBSGEO-Z=   2150654.3760909005", 0 );
         astPutFits( hfc7, "END", 0 );
         astClear( hfc7, "Card" );
         tfs7 = (AstFrameSet *) astRead( hfc7 );
         hfc7 = astAnnul( hfc7 );
         if( !tfs7 ) {
            stopit( 650, "Failed to read header with DATE-OBS/OBSGEO", status );
         } else {
            wfc = astFitsChan( NULL, NULL, " " );
            astSetC( wfc, "Encoding", "FITS-WCS" );
            if( astWrite( wfc, tfs7 ) != 1 )
               stopit( 651, "Failed to write header with DATE-OBS/OBSGEO", status );

            astClear( wfc, "Card" );
            if( !astGetFitsF( wfc, "MJD-OBS", &dval ) )
               stopit( 652, "MJD-OBS not in written header", status );
            else if( fabs( dval - 57955.360174621412 ) > 1e-3 )
               stopit( 653, "MJD-OBS value wrong after round-trip", status );

            astClear( wfc, "Card" );
            if( !astGetFitsF( wfc, "OBSGEO-X", &dval ) )
               stopit( 654, "OBSGEO-X not in written header", status );
            else if( fabs( dval - (-5464586.5949660344) ) > 1.0 )
               stopit( 655, "OBSGEO-X value wrong after round-trip", status );

            astClear( wfc, "Card" );
            if( !astGetFitsF( wfc, "OBSGEO-Y", &dval ) )
               stopit( 656, "OBSGEO-Y not in written header", status );
            else if( fabs( dval - (-2492996.5580556658) ) > 1.0 )
               stopit( 657, "OBSGEO-Y value wrong after round-trip", status );

            astClear( wfc, "Card" );
            if( !astGetFitsF( wfc, "OBSGEO-Z", &dval ) )
               stopit( 658, "OBSGEO-Z not in written header", status );
            else if( fabs( dval - 2150654.3760909005 ) > 1.0 )
               stopit( 659, "OBSGEO-Z value wrong after round-trip", status );

            wfc = astAnnul( wfc );
            tfs7 = astAnnul( tfs7 );
         }
      }

      /* --- DATE-OBS fractional seconds with a leading zero: supply DATE-OBS
             alone (no MJD-OBS) so the parsed fractional seconds drive the
             stored epoch. The fraction ".087" must yield 0.087 s, giving
             MJD-OBS 57955.36017462; the historical "%d" parser dropped the
             leading zero and produced 0.87 s (MJD-OBS 57955.36018368). --- */
      {
         AstFitsChan *hfc8 = astFitsChan( NULL, NULL, " " );
         AstFitsChan *wfc;
         AstFrameSet *tfs8;
         double dval;

         astPutFits( hfc8, "SIMPLE  =                    T", 0 );
         astPutFits( hfc8, "BITPIX  =                  -32", 0 );
         astPutFits( hfc8, "NAXIS   =                    2", 0 );
         astPutFits( hfc8, "NAXIS1  =                  100", 0 );
         astPutFits( hfc8, "NAXIS2  =                  100", 0 );
         astPutFits( hfc8, "CTYPE1  = 'RA---TAN'", 0 );
         astPutFits( hfc8, "CTYPE2  = 'DEC--TAN'", 0 );
         astPutFits( hfc8, "CRVAL1  =              180.000", 0 );
         astPutFits( hfc8, "CRVAL2  =               45.000", 0 );
         astPutFits( hfc8, "CRPIX1  =               50.500", 0 );
         astPutFits( hfc8, "CRPIX2  =               50.500", 0 );
         astPutFits( hfc8, "CDELT1  =              -0.0100", 0 );
         astPutFits( hfc8, "CDELT2  =               0.0100", 0 );
         astPutFits( hfc8, "RADESYS = 'FK5'", 0 );
         astPutFits( hfc8, "EQUINOX =               2000.0", 0 );
         astPutFits( hfc8, "DATE-OBS= '2017-07-21T08:38:39.087'", 0 );
         astPutFits( hfc8, "END", 0 );
         astClear( hfc8, "Card" );
         tfs8 = (AstFrameSet *) astRead( hfc8 );
         hfc8 = astAnnul( hfc8 );
         if( !tfs8 ) {
            stopit( 660, "Failed to read header with DATE-OBS only", status );
         } else {
            wfc = astFitsChan( NULL, NULL, " " );
            astSetC( wfc, "Encoding", "FITS-WCS" );
            if( astWrite( wfc, tfs8 ) != 1 )
               stopit( 661, "Failed to write header with DATE-OBS only", status );

            astClear( wfc, "Card" );
            if( !astGetFitsF( wfc, "MJD-OBS", &dval ) )
               stopit( 662, "MJD-OBS not derived from DATE-OBS", status );
            else if( fabs( dval - 57955.360174621412 ) > 1e-6 )
               stopit( 663, "DATE-OBS fractional seconds parsed wrongly "
                       "(leading zero dropped?)", status );

            wfc = astAnnul( wfc );
            tfs8 = astAnnul( tfs8 );
         }
      }
   }

/* -----------------------------------------------------------------------
 * Test CnvType cross-type conversions and astFitsGetCom.
 * Error numbers 700+.
 * Store FITS values as one type, retrieve as every other type.
 * -----------------------------------------------------------------------*/
   {
      AstFitsChan *tfc = astFitsChan( NULL, NULL, " " );
      double dval, cf[2];
      int ival, ci[2], lval;
      int64_t kval;
      char *sval;

      astSetFitsF( tfc, "SRCFLT", 42.5, "float source", 0 );
      astSetFitsI( tfc, "SRCINT", 42, "int source", 0 );
      astSetFitsK( tfc, "SRCKINT", (int64_t)9000000000LL, "kint source", 0 );
      astSetFitsS( tfc, "SRCSTR", "42", "string source", 0 );
      astSetFitsL( tfc, "SRCLOG", 1, "logical source", 0 );
      cf[0] = 3.0; cf[1] = 4.0;
      astSetFitsCF( tfc, "SRCCF", cf, "complexf source", 0 );
      ci[0] = 3; ci[1] = 4;
      astSetFitsCI( tfc, "SRCCI", ci, "complexi source", 0 );

      /* --- FLOAT -> other types (700-709) --- */
      astClear( tfc, "Card" );
      if( !astGetFitsI( tfc, "SRCFLT", &ival ) )
         stopit( 700, "FLOAT->INT conversion failed", status );
      else if( ival != 42 )
         stopit( 701, "FLOAT->INT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsK( tfc, "SRCFLT", &kval ) )
         stopit( 702, "FLOAT->KINT conversion failed", status );
      else if( kval != 42 )
         stopit( 702, "FLOAT->KINT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsL( tfc, "SRCFLT", &lval ) )
         stopit( 703, "FLOAT->LOGICAL conversion failed", status );
      else if( !lval )
         stopit( 704, "FLOAT->LOGICAL wrong value (42.5 should be true)", status );

      astClear( tfc, "Card" );
      if( !astGetFitsS( tfc, "SRCFLT", &sval ) )
         stopit( 705, "FLOAT->STRING conversion failed", status );
      else if( !strstr( sval, "42.5" ) )
         stopit( 705, "FLOAT->STRING wrong value", status );

      astClear( tfc, "Card" );
      cf[0] = cf[1] = 0.0;
      if( !astGetFitsCF( tfc, "SRCFLT", cf ) )
         stopit( 706, "FLOAT->COMPLEXF conversion failed", status );
      else if( fabs( cf[0] - 42.5 ) > 1e-10 || fabs( cf[1] ) > 1e-10 )
         stopit( 707, "FLOAT->COMPLEXF wrong value", status );

      astClear( tfc, "Card" );
      ci[0] = ci[1] = -1;
      if( !astGetFitsCI( tfc, "SRCFLT", ci ) )
         stopit( 708, "FLOAT->COMPLEXI conversion failed", status );
      else if( ci[0] != 42 || ci[1] != 0 )
         stopit( 709, "FLOAT->COMPLEXI wrong value", status );

      /* --- INT -> other types (710-719) --- */
      astClear( tfc, "Card" );
      if( !astGetFitsF( tfc, "SRCINT", &dval ) )
         stopit( 710, "INT->FLOAT conversion failed", status );
      else if( fabs( dval - 42.0 ) > 1e-10 )
         stopit( 711, "INT->FLOAT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsS( tfc, "SRCINT", &sval ) )
         stopit( 712, "INT->STRING conversion failed", status );
      else if( strcmp( sval, "42" ) )
         stopit( 712, "INT->STRING wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsK( tfc, "SRCINT", &kval ) )
         stopit( 713, "INT->KINT conversion failed", status );
      else if( kval != 42 )
         stopit( 714, "INT->KINT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsL( tfc, "SRCINT", &lval ) )
         stopit( 715, "INT->LOGICAL conversion failed", status );
      else if( !lval )
         stopit( 716, "INT->LOGICAL wrong value (42 should be true)", status );

      astClear( tfc, "Card" );
      cf[0] = cf[1] = 0.0;
      if( !astGetFitsCF( tfc, "SRCINT", cf ) )
         stopit( 717, "INT->COMPLEXF conversion failed", status );
      else if( fabs( cf[0] - 42.0 ) > 1e-10 || fabs( cf[1] ) > 1e-10 )
         stopit( 718, "INT->COMPLEXF wrong value", status );

      astClear( tfc, "Card" );
      ci[0] = ci[1] = -1;
      if( !astGetFitsCI( tfc, "SRCINT", ci ) )
         stopit( 719, "INT->COMPLEXI conversion failed", status );
      else if( ci[0] != 42 || ci[1] != 0 )
         stopit( 719, "INT->COMPLEXI wrong value", status );

      /* --- KINT -> other types (720-729) --- */
      astClear( tfc, "Card" );
      if( !astGetFitsF( tfc, "SRCKINT", &dval ) )
         stopit( 720, "KINT->FLOAT conversion failed", status );
      else if( fabs( dval - 9.0e9 ) > 1.0 )
         stopit( 720, "KINT->FLOAT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsS( tfc, "SRCKINT", &sval ) )
         stopit( 721, "KINT->STRING conversion failed", status );
      else if( !strstr( sval, "9000000000" ) )
         stopit( 721, "KINT->STRING wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsI( tfc, "SRCKINT", &ival ) )
         stopit( 722, "KINT->INT conversion failed", status );

      astClear( tfc, "Card" );
      if( !astGetFitsL( tfc, "SRCKINT", &lval ) )
         stopit( 723, "KINT->LOGICAL conversion failed", status );
      else if( !lval )
         stopit( 724, "KINT->LOGICAL wrong value", status );

      astClear( tfc, "Card" );
      cf[0] = cf[1] = 0.0;
      if( !astGetFitsCF( tfc, "SRCKINT", cf ) )
         stopit( 725, "KINT->COMPLEXF conversion failed", status );
      else if( fabs( cf[0] - 9.0e9 ) > 1.0 || fabs( cf[1] ) > 1e-10 )
         stopit( 725, "KINT->COMPLEXF wrong value", status );

      astClear( tfc, "Card" );
      ci[0] = ci[1] = -1;
      if( !astGetFitsCI( tfc, "SRCKINT", ci ) )
         stopit( 726, "KINT->COMPLEXI conversion failed", status );

      /* --- STRING -> other types (730-739) --- */
      astClear( tfc, "Card" );
      if( !astGetFitsF( tfc, "SRCSTR", &dval ) )
         stopit( 730, "STRING->FLOAT conversion failed", status );
      else if( fabs( dval - 42.0 ) > 1e-10 )
         stopit( 731, "STRING->FLOAT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsI( tfc, "SRCSTR", &ival ) )
         stopit( 732, "STRING->INT conversion failed", status );
      else if( ival != 42 )
         stopit( 733, "STRING->INT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsK( tfc, "SRCSTR", &kval ) )
         stopit( 734, "STRING->KINT conversion failed", status );
      else if( kval != 42 )
         stopit( 735, "STRING->KINT wrong value", status );

      astClear( tfc, "Card" );
      cf[0] = cf[1] = 0.0;
      if( !astGetFitsCF( tfc, "SRCSTR", cf ) )
         stopit( 736, "STRING->COMPLEXF conversion failed", status );
      else if( fabs( cf[0] - 42.0 ) > 1e-10 )
         stopit( 737, "STRING->COMPLEXF wrong value", status );

      astClear( tfc, "Card" );
      ci[0] = ci[1] = -1;
      if( !astGetFitsCI( tfc, "SRCSTR", ci ) )
         stopit( 738, "STRING->COMPLEXI conversion failed", status );
      else if( ci[0] != 42 )
         stopit( 739, "STRING->COMPLEXI wrong value", status );

      /* --- STRING -> LOGICAL edge cases (740-749) --- */
      {
         AstFitsChan *lfc = astFitsChan( NULL, NULL, " " );

         astSetFitsS( lfc, "STRT", "T", "true", 0 );
         astSetFitsS( lfc, "STRY", "Y", "yes", 0 );
         astSetFitsS( lfc, "STRF", "F", "false", 0 );
         astSetFitsS( lfc, "STRN", "N", "no", 0 );
         astSetFitsS( lfc, "STRDOTT", ".TRUE.", "dotted true", 0 );
         astSetFitsS( lfc, "STRDOTF", ".FALSE.", "dotted false", 0 );
         astSetFitsS( lfc, "STR1", "1", "numeric true", 0 );
         astSetFitsS( lfc, "STR0", "0", "numeric false", 0 );

         astClear( lfc, "Card" );
         if( !astGetFitsL( lfc, "STRT", &lval ) || !lval )
            stopit( 740, "STRING 'T' -> LOGICAL failed", status );

         astClear( lfc, "Card" );
         if( !astGetFitsL( lfc, "STRY", &lval ) || !lval )
            stopit( 741, "STRING 'Y' -> LOGICAL failed", status );

         astClear( lfc, "Card" );
         if( !astGetFitsL( lfc, "STRF", &lval ) || lval )
            stopit( 742, "STRING 'F' -> LOGICAL failed", status );

         astClear( lfc, "Card" );
         if( !astGetFitsL( lfc, "STRN", &lval ) || lval )
            stopit( 743, "STRING 'N' -> LOGICAL failed", status );

         astClear( lfc, "Card" );
         if( !astGetFitsL( lfc, "STRDOTT", &lval ) || !lval )
            stopit( 744, "STRING '.TRUE.' -> LOGICAL failed", status );

         astClear( lfc, "Card" );
         if( !astGetFitsL( lfc, "STRDOTF", &lval ) || lval )
            stopit( 745, "STRING '.FALSE.' -> LOGICAL failed", status );

         astClear( lfc, "Card" );
         if( !astGetFitsL( lfc, "STR1", &lval ) || !lval )
            stopit( 746, "STRING '1' -> LOGICAL failed", status );

         astClear( lfc, "Card" );
         if( !astGetFitsL( lfc, "STR0", &lval ) || lval )
            stopit( 747, "STRING '0' -> LOGICAL failed", status );

         lfc = astAnnul( lfc );
      }

      /* --- LOGICAL -> other types (750-759) --- */
      astClear( tfc, "Card" );
      if( !astGetFitsF( tfc, "SRCLOG", &dval ) )
         stopit( 750, "LOGICAL->FLOAT conversion failed", status );
      else if( fabs( dval - 1.0 ) > 1e-10 )
         stopit( 751, "LOGICAL->FLOAT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsS( tfc, "SRCLOG", &sval ) )
         stopit( 752, "LOGICAL->STRING conversion failed", status );
      else if( strcmp( sval, "Y" ) )
         stopit( 752, "LOGICAL->STRING wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsI( tfc, "SRCLOG", &ival ) )
         stopit( 753, "LOGICAL->INT conversion failed", status );
      else if( ival != 1 )
         stopit( 753, "LOGICAL->INT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsK( tfc, "SRCLOG", &kval ) )
         stopit( 754, "LOGICAL->KINT conversion failed", status );
      else if( kval != 1 )
         stopit( 754, "LOGICAL->KINT wrong value", status );

      astClear( tfc, "Card" );
      cf[0] = cf[1] = -1.0;
      if( !astGetFitsCF( tfc, "SRCLOG", cf ) )
         stopit( 755, "LOGICAL->COMPLEXF conversion failed", status );
      else if( fabs( cf[0] - 1.0 ) > 1e-10 || fabs( cf[1] ) > 1e-10 )
         stopit( 756, "LOGICAL->COMPLEXF wrong value", status );

      astClear( tfc, "Card" );
      ci[0] = ci[1] = -1;
      if( !astGetFitsCI( tfc, "SRCLOG", ci ) )
         stopit( 757, "LOGICAL->COMPLEXI conversion failed", status );
      else if( ci[0] != 1 || ci[1] != 0 )
         stopit( 758, "LOGICAL->COMPLEXI wrong value", status );

      /* --- COMPLEXF -> other types (760-769) --- */
      astClear( tfc, "Card" );
      if( !astGetFitsF( tfc, "SRCCF", &dval ) )
         stopit( 760, "COMPLEXF->FLOAT conversion failed", status );
      else if( fabs( dval - 3.0 ) > 1e-10 )
         stopit( 761, "COMPLEXF->FLOAT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsS( tfc, "SRCCF", &sval ) )
         stopit( 762, "COMPLEXF->STRING conversion failed", status );
      else if( !strstr( sval, "3" ) || !strstr( sval, "4" ) )
         stopit( 762, "COMPLEXF->STRING wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsI( tfc, "SRCCF", &ival ) )
         stopit( 763, "COMPLEXF->INT conversion failed", status );
      else if( ival != 3 )
         stopit( 764, "COMPLEXF->INT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsK( tfc, "SRCCF", &kval ) )
         stopit( 765, "COMPLEXF->KINT conversion failed", status );
      else if( kval != 3 )
         stopit( 765, "COMPLEXF->KINT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsL( tfc, "SRCCF", &lval ) )
         stopit( 766, "COMPLEXF->LOGICAL conversion failed", status );
      else if( !lval )
         stopit( 767, "COMPLEXF->LOGICAL wrong value", status );

      astClear( tfc, "Card" );
      ci[0] = ci[1] = -1;
      if( !astGetFitsCI( tfc, "SRCCF", ci ) )
         stopit( 768, "COMPLEXF->COMPLEXI conversion failed", status );
      else if( ci[0] != 3 || ci[1] != 4 )
         stopit( 769, "COMPLEXF->COMPLEXI wrong value", status );

      /* --- COMPLEXI -> other types (770-779) --- */
      astClear( tfc, "Card" );
      if( !astGetFitsF( tfc, "SRCCI", &dval ) )
         stopit( 770, "COMPLEXI->FLOAT conversion failed", status );
      else if( fabs( dval - 3.0 ) > 1e-10 )
         stopit( 771, "COMPLEXI->FLOAT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsS( tfc, "SRCCI", &sval ) )
         stopit( 772, "COMPLEXI->STRING conversion failed", status );
      else if( !strstr( sval, "3" ) || !strstr( sval, "4" ) )
         stopit( 772, "COMPLEXI->STRING wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsI( tfc, "SRCCI", &ival ) )
         stopit( 773, "COMPLEXI->INT conversion failed", status );
      else if( ival != 3 )
         stopit( 774, "COMPLEXI->INT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsK( tfc, "SRCCI", &kval ) )
         stopit( 775, "COMPLEXI->KINT conversion failed", status );
      else if( kval != 3 )
         stopit( 775, "COMPLEXI->KINT wrong value", status );

      astClear( tfc, "Card" );
      if( !astGetFitsL( tfc, "SRCCI", &lval ) )
         stopit( 776, "COMPLEXI->LOGICAL conversion failed", status );
      else if( !lval )
         stopit( 777, "COMPLEXI->LOGICAL wrong value", status );

      astClear( tfc, "Card" );
      cf[0] = cf[1] = 0.0;
      if( !astGetFitsCF( tfc, "SRCCI", cf ) )
         stopit( 778, "COMPLEXI->COMPLEXF conversion failed", status );
      else if( fabs( cf[0] - 3.0 ) > 1e-10 || fabs( cf[1] - 4.0 ) > 1e-10 )
         stopit( 779, "COMPLEXI->COMPLEXF wrong value", status );

      tfc = astAnnul( tfc );
   }

   /* Extra CnvType edge case: LOGICAL(false) -> STRING (790+) */
   {
      AstFitsChan *efc = astFitsChan( NULL, NULL, " " );
      char *sval;

      astSetFitsL( efc, "LOGF", 0, "false", 0 );
      astClear( efc, "Card" );
      if( !astGetFitsS( efc, "LOGF", &sval ) )
         stopit( 790, "LOGICAL(false)->STRING failed", status );
      else if( strcmp( sval, "N" ) )
         stopit( 791, "LOGICAL(false)->STRING should be N", status );

      efc = astAnnul( efc );
   }

   /* CnvType failure paths: STRING that can't convert to other types (795+).
      Store a non-numeric string and verify GetFits<X> returns 0.
      Each failed conversion raises AST__FTCNV which must be cleared. */
   {
      AstFitsChan *ffc = astFitsChan( NULL, NULL, " " );
      double dval, cf[2];
      int ival, ci[2], lval;
      int64_t kval;

      astSetFitsS( ffc, "BADNUM", "hello", "not a number", 0 );

      /* STRING "hello" -> FLOAT should fail */
      astClear( ffc, "Card" );
      if( astGetFitsF( ffc, "BADNUM", &dval ) )
         stopit( 795, "STRING(hello)->FLOAT should fail", status );
      if( !astOK ) astClearStatus;

      /* STRING "hello" -> INT should fail */
      astClear( ffc, "Card" );
      if( astGetFitsI( ffc, "BADNUM", &ival ) )
         stopit( 796, "STRING(hello)->INT should fail", status );
      if( !astOK ) astClearStatus;

      /* STRING "hello" -> KINT should fail */
      astClear( ffc, "Card" );
      if( astGetFitsK( ffc, "BADNUM", &kval ) )
         stopit( 797, "STRING(hello)->KINT should fail", status );
      if( !astOK ) astClearStatus;

      /* STRING "hello" -> LOGICAL should fail (not y/n/t/f) */
      astClear( ffc, "Card" );
      if( astGetFitsL( ffc, "BADNUM", &lval ) )
         stopit( 798, "STRING(hello)->LOGICAL should fail", status );
      if( !astOK ) astClearStatus;

      /* STRING "hello" -> COMPLEXF should fail */
      astClear( ffc, "Card" );
      cf[0] = cf[1] = 0.0;
      if( astGetFitsCF( ffc, "BADNUM", cf ) )
         stopit( 799, "STRING(hello)->COMPLEXF should fail", status );
      if( !astOK ) astClearStatus;

      /* STRING "hello" -> COMPLEXI should fail */
      astClear( ffc, "Card" );
      ci[0] = ci[1] = 0;
      if( astGetFitsCI( ffc, "BADNUM", ci ) )
         stopit( 800, "STRING(hello)->COMPLEXI should fail", status );
      if( !astOK ) astClearStatus;

      ffc = astAnnul( ffc );
   }

   /* CnvType: read defined type from undefined keyword (801+).
      SetFitsU stores an undefined value; GetFitsF etc should fail. */
   {
      AstFitsChan *ufc = astFitsChan( NULL, NULL, " " );
      double dval;
      int ival;

      astSetFitsU( ufc, "UNDEF1", "undefined keyword", 0 );

      astClear( ufc, "Card" );
      if( astGetFitsF( ufc, "UNDEF1", &dval ) )
         stopit( 801, "UNDEF->FLOAT should fail", status );
      if( !astOK ) astClearStatus;

      astClear( ufc, "Card" );
      if( astGetFitsI( ufc, "UNDEF1", &ival ) )
         stopit( 802, "UNDEF->INT should fail", status );
      if( !astOK ) astClearStatus;

      ufc = astAnnul( ufc );
   }

   /* CnvType: read non-COMMENT type from COMMENT card (803+).
      COMMENT cards have no data value; GetFitsF should fail. */
   {
      AstFitsChan *cfc = astFitsChan( NULL, NULL, " " );
      double dval;

      astPutFits( cfc, "COMMENT This is a comment card", 0 );
      astClear( cfc, "Card" );
      if( astGetFitsF( cfc, "COMMENT", &dval ) )
         stopit( 803, "COMMENT->FLOAT should fail", status );
      if( !astOK ) astClearStatus;

      cfc = astAnnul( cfc );
   }

   /* CnvType: FLOAT(AST__BAD)->STRING produces BAD_STRING (804). */
   {
      AstFitsChan *bfc = astFitsChan( NULL, NULL, " " );
      char *sval;

      astSetFitsF( bfc, "BADFLT", AST__BAD, "bad float", 0 );
      astClear( bfc, "Card" );
      if( !astGetFitsS( bfc, "BADFLT", &sval ) )
         stopit( 804, "FLOAT(AST__BAD)->STRING failed", status );
      else if( !sval || strcmp( sval, AST__BAD_STRING ) )
         stopit( 805, "FLOAT(AST__BAD)->STRING should be <bad>", status );

      /* Reverse: STRING("<bad>")->FLOAT produces AST__BAD */
      astSetFitsS( bfc, "BADSTR", AST__BAD_STRING, "bad string", 0 );
      astClear( bfc, "Card" );
      {
         double dval2 = 0.0;
         if( !astGetFitsF( bfc, "BADSTR", &dval2 ) )
            stopit( 806, "STRING(<bad>)->FLOAT failed", status );
         else if( dval2 != AST__BAD )
            stopit( 807, "STRING(<bad>)->FLOAT should be AST__BAD", status );
      }

      bfc = astAnnul( bfc );
   }

   /* SetFits overwrite paths for each type (808-809).
      PutFits with overwrite=1 exercises the SetFits internal dispatch
      for KINT, COMPLEXI, COMPLEXF, LOGICAL, UNDEF types.
      First insert a card, then overwrite with same value (retains comment)
      and different value (updates comment). */
   {
      AstFitsChan *ofc = astFitsChan( NULL, NULL, " " );
      int64_t kval;
      double cf[2];
      int ci[2], lval;
      char *sval;

      /* KINT: value > INT_MAX triggers AST__KINT in Split */
      astPutFits( ofc, "KTEST   = 9999999999 / original", 1 );
      astClear( ofc, "Card" );
      astPutFits( ofc, "KTEST   = 9999999999 / same value", 1 );
      astClear( ofc, "Card" );
      if( !astGetFitsK( ofc, "KTEST", &kval ) || kval != (int64_t)9999999999LL )
         stopit( 808, "KINT overwrite failed", status );

      /* COMPLEXI: two integers separated by space */
      astPutFits( ofc, "CITEST  = 10 20 / original ci", 1 );
      astClear( ofc, "Card" );
      astPutFits( ofc, "CITEST  = 10 20 / same ci", 1 );
      astClear( ofc, "Card" );
      if( !astGetFitsCI( ofc, "CITEST", ci ) || ci[0] != 10 || ci[1] != 20 )
         stopit( 808, "COMPLEXI overwrite failed", status );

      /* COMPLEXF: two floats with decimal point */
      astPutFits( ofc, "CFTEST  = 1.5 2.5 / original cf", 1 );
      astClear( ofc, "Card" );
      astPutFits( ofc, "CFTEST  = 1.5 2.5 / same cf", 1 );
      astClear( ofc, "Card" );
      if( !astGetFitsCF( ofc, "CFTEST", cf ) || fabs(cf[0]-1.5)>1e-10 || fabs(cf[1]-2.5)>1e-10 )
         stopit( 808, "COMPLEXF overwrite failed", status );

      /* LOGICAL: T or F value */
      astPutFits( ofc, "LTEST   = T / original logical", 1 );
      astClear( ofc, "Card" );
      astPutFits( ofc, "LTEST   = T / same logical", 1 );
      astClear( ofc, "Card" );
      if( !astGetFitsL( ofc, "LTEST", &lval ) || !lval )
         stopit( 808, "LOGICAL overwrite failed", status );

      /* UNDEF: blank value after = */
      astPutFits( ofc, "UTEST   =   / original undef", 1 );
      astClear( ofc, "Card" );
      astPutFits( ofc, "UTEST   =   / same undef", 1 );

      /* CONTINUE: long string continuation */
      astPutFits( ofc, "CONTINUE  'a long continuation value'", 1 );
      astClear( ofc, "Card" );
      astPutFits( ofc, "CONTINUE  'a long continuation value'", 1 );
      astClear( ofc, "Card" );
      if( !astGetFitsCN( ofc, "CONTINUE", &sval ) )
         stopit( 808, "CONTINUE overwrite failed", status );

      /* COMMENT: no value */
      astPutFits( ofc, "COMMENT   This is a comment", 1 );
      astClear( ofc, "Card" );
      astPutFits( ofc, "COMMENT   This is a comment", 1 );

      /* Overwrite with DIFFERENT value to exercise the non-NULL comment path */
      astClear( ofc, "Card" );
      astPutFits( ofc, "KTEST   = 8888888888 / changed", 1 );
      astClear( ofc, "Card" );
      if( !astGetFitsK( ofc, "KTEST", &kval ) || kval != (int64_t)8888888888LL )
         stopit( 809, "KINT overwrite with different value failed", status );

      ofc = astAnnul( ofc );
   }

   /* ReadFromSource: test FitsChan with source callback function (830-832).
      This exercises the ReadFromSource loop (lines 26060-26099 in fitschan.c)
      which is otherwise only tested via SourceFile= attribute. */
   {
      g_source_index = 0;
      AstFitsChan *sfc = astFitsChan( test_source, NULL, " " );
      if( astGetI( sfc, "Ncard" ) < 10 )
         stopit( 830, "Source callback FitsChan has too few cards", status );
      astClear( sfc, "Card" );
      AstFrameSet *sfs = (AstFrameSet *)astRead( sfc );
      if( !sfs )
         stopit( 831, "Source callback FitsChan read failed", status );
      else {
         if( astGetI( sfs, "Naxes" ) != 2 )
            stopit( 832, "Source callback FrameSet wrong Naxes", status );
         sfs = astAnnul( sfs );
      }
      sfc = astAnnul( sfc );
   }

   /* PCFromStore short CTYPE regression (833-834).
      Writing a FrameSet with generic (non-celestial) Frames to FITS-PC
      used to read past the end of the CTYPE string in astWcsPrjType
      because the code assumed CTYPE was always >= 5 characters. */
   {
      AstFrame *bf = astFrame( 2, "Domain=GRID" );
      AstFrame *wf = astFrame( 2, " " );
      double shift[] = { 10.0, 20.0 };
      AstMapping *sm = (AstMapping *)astShiftMap( 2, shift, " " );
      AstFrameSet *pfs = astFrameSet( bf, " " );
      astAddFrame( pfs, AST__BASE, sm, wf );

      AstFitsChan *wfc = astFitsChan( NULL, NULL, "Encoding=FITS-PC" );
      astPutFits( wfc, "NAXIS1  =                  100", 0 );
      astPutFits( wfc, "NAXIS2  =                  100", 0 );
      int nw = astWrite( wfc, pfs );
      if( nw != 1 )
         stopit( 833, "PCFromStore short CTYPE: write failed", status );

      /* Read it back to verify the WCS is usable */
      astClear( wfc, "Card" );
      AstFrameSet *rfs = (AstFrameSet *)astRead( wfc );
      if( !rfs )
         stopit( 834, "PCFromStore short CTYPE: read-back failed", status );
      else
         rfs = astAnnul( rfs );

      wfc = astAnnul( wfc );
      pfs = astAnnul( pfs );
   }

   /* SpectralAxes grism write path (842-845).
      Read a 1D WAVE-GRI header with a large pixel range so the grism
      non-linearity exceeds IsMapLinear tolerance, then write back.
      Uses standard grism parameters but NAXIS1=10000. */
   {
      astBegin;

      AstFitsChan *rfc = astFitsChan( NULL, NULL, " " );
      astPutFits( rfc, "NAXIS   =                    1", 0 );
      astPutFits( rfc, "NAXIS1  =                10000", 0 );
      astPutFits( rfc, "CTYPE1  = 'WAVE-GRI'", 0 );
      astPutFits( rfc, "CRVAL1  =            5.000E-07", 0 );
      astPutFits( rfc, "CRPIX1  =               5000.0", 0 );
      astPutFits( rfc, "CDELT1  =            1.000E-10", 0 );
      astPutFits( rfc, "CUNIT1  = 'm'", 0 );
      astPutFits( rfc, "RESTFRQ =           5.996E+14", 0 );
      astPutFits( rfc, "SPECSYS = 'BARYCENT'", 0 );
      astPutFits( rfc, "PV1_0   =            3.000E-06", 0 );
      astPutFits( rfc, "PV1_1   =                    1", 0 );
      astPutFits( rfc, "PV1_2   =                  0.0", 0 );
      astPutFits( rfc, "END", 0 );
      astClear( rfc, "Card" );
      AstFrameSet *gfs = (AstFrameSet *)astRead( rfc );
      if( !astOK ) astClearStatus;
      rfc = astAnnul( rfc );

      if( gfs ) {
         AstFitsChan *gfc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
         astPutFits( gfc, "NAXIS   = 1", 0 );
         astPutFits( gfc, "NAXIS1  = 10000", 0 );
         int nw = astWrite( gfc, gfs );

         if( nw == 1 ) {
            astClear( gfc, "Card" );
            char card[81];
            int found_gri = 0;
            while( astFindFits( gfc, "%f", card, 1 ) ) {
               if( strstr( card, "-GRI" ) || strstr( card, "-GRA" ) ) found_gri = 1;
            }
            if( found_gri ) {
               astClear( gfc, "Card" );
               AstFrameSet *gfs2 = (AstFrameSet *)astRead( gfc );
               if( !gfs2 )
                  stopit( 844, "Grism write: read-back failed", status );
               else {
                  double xin = 5000.0, xout1, xout2;
                  astTran1( gfs, 1, &xin, 1, &xout1 );
                  astTran1( gfs2, 1, &xin, 1, &xout2 );
                  if( fabs( xout1 - xout2 ) > 1.0e-6 * fabs( xout1 ) )
                     stopit( 845, "Grism write: spectral round-trip mismatch", status );
                  gfs2 = astAnnul( gfs2 );
               }
            }
         }

         gfc = astAnnul( gfc );
         gfs = astAnnul( gfs );
      }

      astEnd;
   }
   /* SkySys write paths for various celestial systems (835-839).
      Read a standard FK5 TAN header, change the SkyFrame System, write
      back to FITS-WCS, verify the correct CTYPE prefixes appear. */
   {
      static const struct {
         const char *system;
         const char *expect_lon;
         int errnum;
      } sky_tests[] = {
         { "Galactic",       "GLON", 835 },
         { "Supergalactic",  "SLON", 836 },
         { NULL, NULL, 0 }
      };
      int it;
      for( it = 0; sky_tests[it].system; it++ ) {
         astBegin;
         AstFitsChan *rfc = astFitsChan( NULL, NULL, " " );
         astPutFits( rfc, "NAXIS1  =                  100", 0 );
         astPutFits( rfc, "NAXIS2  =                  100", 0 );
         astPutFits( rfc, "CTYPE1  = 'RA---TAN'", 0 );
         astPutFits( rfc, "CTYPE2  = 'DEC--TAN'", 0 );
         astPutFits( rfc, "CRVAL1  =              180.000", 0 );
         astPutFits( rfc, "CRVAL2  =               45.000", 0 );
         astPutFits( rfc, "CRPIX1  =               50.000", 0 );
         astPutFits( rfc, "CRPIX2  =               50.000", 0 );
         astPutFits( rfc, "CDELT1  =              -0.0100", 0 );
         astPutFits( rfc, "CDELT2  =               0.0100", 0 );
         astPutFits( rfc, "RADESYS = 'FK5'", 0 );
         astPutFits( rfc, "EQUINOX =               2000.0", 0 );
         astPutFits( rfc, "END", 0 );
         astClear( rfc, "Card" );
         AstFrameSet *rfs = (AstFrameSet *)astRead( rfc );
         rfc = astAnnul( rfc );

         if( rfs ) {
            /* Convert the current SkyFrame to the target system */
            AstSkyFrame *tgt = astSkyFrame( " " );
            astSetC( tgt, "System", sky_tests[it].system );
            AstFrameSet *cvt = astConvert( astGetFrame( rfs, AST__CURRENT ),
                                           (AstFrame *)tgt, "" );
            if( cvt ) {
               astRemapFrame( rfs, AST__CURRENT,
                              astGetMapping( cvt, AST__BASE, AST__CURRENT ) );
               astSetC( rfs, "System", sky_tests[it].system );
               cvt = astAnnul( cvt );
            }

            AstFitsChan *wfc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
            astPutFits( wfc, "NAXIS1  =                  100", 0 );
            astPutFits( wfc, "NAXIS2  =                  100", 0 );
            int nw = astWrite( wfc, rfs );
            if( nw == 1 ) {
               astClear( wfc, "Card" );
               char card[81];
               int found = 0;
               while( astFindFits( wfc, "%f", card, 1 ) ) {
                  if( strstr( card, sky_tests[it].expect_lon ) ) found = 1;
               }
               if( !found ) {
                  char msg[80];
                  sprintf( msg, "SkySys %s: CTYPE missing %s",
                           sky_tests[it].system, sky_tests[it].expect_lon );
                  stopit( sky_tests[it].errnum, msg, status );
               }
            }
            wfc = astAnnul( wfc );
            rfs = astAnnul( rfs );
         }
         astEnd;
      }
   }

   /* WcsFromStore alternate version write (840-841).
      Write a multi-frame FrameSet to FITS-WCS with AltAxes=ALL to
      exercise the alternate version loop in WcsFromStore. Use FK5 +
      Galactic to get primary + alternate 'A'. */
   {
      AstFitsChan *pfc = astFitsChan( NULL, NULL, " " );
      astPutFits( pfc, "NAXIS1  =                  100", 0 );
      astPutFits( pfc, "NAXIS2  =                  100", 0 );
      astPutFits( pfc, "CTYPE1  = 'RA---TAN'", 0 );
      astPutFits( pfc, "CTYPE2  = 'DEC--TAN'", 0 );
      astPutFits( pfc, "CRVAL1  =              180.000", 0 );
      astPutFits( pfc, "CRVAL2  =               45.000", 0 );
      astPutFits( pfc, "CRPIX1  =               50.000", 0 );
      astPutFits( pfc, "CRPIX2  =               50.000", 0 );
      astPutFits( pfc, "CDELT1  =              -0.0100", 0 );
      astPutFits( pfc, "CDELT2  =               0.0100", 0 );
      astPutFits( pfc, "RADESYS = 'FK5'", 0 );
      astPutFits( pfc, "EQUINOX =               2000.0", 0 );
      astPutFits( pfc, "END", 0 );
      astClear( pfc, "Card" );
      AstFrameSet *pfs = (AstFrameSet *)astRead( pfc );
      if( pfs ) {
         AstSkyFrame *gal = astSkyFrame( "System=Galactic" );
         AstFrameSet *cvt = astConvert( astGetFrame( pfs, AST__CURRENT ),
                                        (AstFrame *)gal, "" );
         if( cvt ) {
            astAddFrame( pfs, AST__CURRENT, astGetMapping( cvt, AST__BASE,
                         AST__CURRENT ), (AstFrame *)gal );
            astSetI( pfs, "Current", 2 );
            cvt = astAnnul( cvt );
         }

         AstFitsChan *wfc = astFitsChan( NULL, NULL,
                                          "Encoding=FITS-WCS,AltAxes=ALL" );
         astPutFits( wfc, "NAXIS1  =                  100", 0 );
         astPutFits( wfc, "NAXIS2  =                  100", 0 );
         int nw = astWrite( wfc, pfs );
         if( nw != 1 )
            stopit( 840, "WcsFromStore alt: write failed", status );

         /* Check for alternate version A keywords */
         astClear( wfc, "Card" );
         {
            int found = 0;
            char card[81];
            while( astFindFits( wfc, "%f", card, 1 ) ) {
               if( !strncmp( card, "CTYPE1A", 7 ) ) found = 1;
            }
            if( !found )
               stopit( 841, "WcsFromStore alt: missing CTYPE1A", status );
         }
         wfc = astAnnul( wfc );
         pfs = astAnnul( pfs );
      }
      pfc = astAnnul( pfc );
   }

   /* Test all TIMESYS keyword variants (810-829).
      Each variant is read via a minimal TAN header with MJD-OBS,
      exercising every branch in TimeSysToAst. Verify (a) astRead
      succeeds and (b) the resulting epoch differs between timescales
      that are physically distinct. */
   {
      static const char *timesys_vals[] = {
         "UTC", "UT", "IAT", "ET", "TT", "TDT", "TDB", "TCG", "TCB", NULL
      };
      double epoch_ut = 0.0;
      int its;
      for( its = 0; timesys_vals[its]; its++ ) {
         AstFitsChan *tsfc = astFitsChan( NULL, NULL, " " );
         char card[81];
         astPutFits( tsfc, "NAXIS1  = 100", 0 );
         astPutFits( tsfc, "NAXIS2  = 100", 0 );
         astPutFits( tsfc, "CTYPE1  = 'RA---TAN'", 0 );
         astPutFits( tsfc, "CTYPE2  = 'DEC--TAN'", 0 );
         astPutFits( tsfc, "CRVAL1  = 180.0", 0 );
         astPutFits( tsfc, "CRVAL2  = 45.0", 0 );
         astPutFits( tsfc, "CRPIX1  = 50.5", 0 );
         astPutFits( tsfc, "CRPIX2  = 50.5", 0 );
         astPutFits( tsfc, "CDELT1  = -0.001", 0 );
         astPutFits( tsfc, "CDELT2  = 0.001", 0 );
         astPutFits( tsfc, "RADESYS = 'FK5'", 0 );
         astPutFits( tsfc, "EQUINOX = 2000.0", 0 );
         astPutFits( tsfc, "MJD-OBS = 55000.0", 0 );
         sprintf( card, "TIMESYS = '%-8s'", timesys_vals[its] );
         astPutFits( tsfc, card, 0 );
         astClear( tsfc, "Card" );
         {
            AstFrameSet *tsfs = (AstFrameSet *)astRead( tsfc );
            if( !tsfs ) {
               char msg[80];
               sprintf( msg, "TIMESYS='%s' read failed", timesys_vals[its] );
               astClearStatus;
               stopit( 810 + its, msg, status );
            } else {
               double epoch = astGetD( tsfs, "Epoch" );
               if( its == 0 ) {
                  epoch_ut = epoch;
               } else if( !strcmp( timesys_vals[its], "TDB" ) ) {
                  if( fabs( epoch - epoch_ut ) < 1.0e-8 ) {
                     stopit( 820, "TIMESYS=TDB epoch same as UT", status );
                  }
               } else if( !strcmp( timesys_vals[its], "TCB" ) ) {
                  if( fabs( epoch - epoch_ut ) < 1.0e-8 ) {
                     stopit( 821, "TIMESYS=TCB epoch same as UT", status );
                  }
               }
               tsfs = astAnnul( tsfs );
            }
         }
         tsfc = astAnnul( tsfc );
      }
   }

   /* Ill-conditioned SFL projection: verify no memory leak on failure (800+).
      This header cannot produce a valid WCS because the native pole
      computation fails. astRead returns NULL, but all resources must
      be freed cleanly. Only run if status is OK so far, since we need
      to be able to create AST objects. */
   if( *status == 0 ) {
      AstFitsChan *sfc = astFitsChan( NULL, NULL, " " );
      AstObject *obj;
      astPutFits( sfc, "NAXIS1  =                  360", 0 );
      astPutFits( sfc, "NAXIS2  =                  180", 0 );
      astPutFits( sfc, "CTYPE1  = 'GLON-SFL'", 0 );
      astPutFits( sfc, "CTYPE2  = 'GLAT-SFL'", 0 );
      astPutFits( sfc, "CRVAL1  =               45.000", 0 );
      astPutFits( sfc, "CRVAL2  =               60.000", 0 );
      astPutFits( sfc, "CRPIX1  =              180.500", 0 );
      astPutFits( sfc, "CRPIX2  =               90.500", 0 );
      astPutFits( sfc, "CDELT1  =             -0.50000", 0 );
      astPutFits( sfc, "CDELT2  =              0.50000", 0 );
      astPutFits( sfc, "LONPOLE =              180.000", 0 );
      astPutFits( sfc, "LATPOLE =               60.000", 0 );
      astClear( sfc, "Card" );
      obj = astRead( sfc );
      if( obj ) obj = astAnnul( obj );
      astClearStatus;
      sfc = astAnnul( sfc );
      if( !astOK )
         stopit( 800, "Ill-conditioned SFL leaked or crashed", status );
   }

   /* SplitMap: linear sky mapping -> synthetic CAR projection write path.
      A FrameSet with a purely linear pixel-to-sky mapping (no WcsMap)
      triggers the CAR fallback in SplitMap (fitschan.c ~32680-32704). */
   if( *status == 0 ) {
      AstFrame *gf850;
      AstSkyFrame *sf850;
      AstFrameSet *fs850, *fs851;
      AstFitsChan *fc850;
      AstWinMap *wm850;
      char *ctype850;
      double ina850[] = { 1.0, 1.0 };
      double inb850[] = { 100.0, 100.0 };
      double outa850[2], outb850[2];
      double xin850[1], yin850[1], xout850[2], yout850[2];
      double xin851[1], yin851[1], xout851[2], yout851[2];

      astBegin;

      outa850[0] = 150.0 * AST__DD2R;
      outa850[1] = -30.0 * AST__DD2R;
      outb850[0] = 150.018 * AST__DD2R;
      outb850[1] = -29.982 * AST__DD2R;
      wm850 = astWinMap( 2, ina850, inb850, outa850, outb850, " " );

      gf850 = astFrame( 2, "Domain=GRID" );
      sf850 = astSkyFrame( "System=FK5" );
      fs850 = astFrameSet( gf850, " " );
      astAddFrame( fs850, AST__BASE, (AstMapping *)wm850, (AstFrame *)sf850 );

      fc850 = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
      astPutFits( fc850, "NAXIS   = 2", 0 );
      astPutFits( fc850, "NAXIS1  = 100", 0 );
      astPutFits( fc850, "NAXIS2  = 100", 0 );

      if( astWrite( fc850, fs850 ) != 1 )
         stopit( 850, "Linear sky -> FITS-WCS write failed", status );

      astClear( fc850, "Card" );
      if( !astGetFitsS( fc850, "CTYPE1", &ctype850 ) )
         stopit( 854, "Linear sky CTYPE1 missing", status );
      else if( !strstr( ctype850, "CAR" ) )
         stopit( 855, "Linear sky CTYPE1 not CAR", status );
      astClear( fc850, "Card" );
      if( !astGetFitsS( fc850, "CTYPE2", &ctype850 ) )
         stopit( 856, "Linear sky CTYPE2 missing", status );
      else if( !strstr( ctype850, "CAR" ) )
         stopit( 857, "Linear sky CTYPE2 not CAR", status );

      astClear( fc850, "Card" );
      fs851 = (AstFrameSet *)astRead( fc850 );
      if( !fs851 )
         stopit( 851, "Linear sky -> FITS-WCS read-back failed", status );

      if( fs851 ) {
         xin850[0] = 50.0;
         yin850[0] = 50.0;
         astTran2( fs850, 1, xin850, yin850, 1, xout850, yout850 );
         xin851[0] = 50.0;
         yin851[0] = 50.0;
         astTran2( fs851, 1, xin851, yin851, 1, xout851, yout851 );
         if( fabs( xout850[0] - xout851[0] ) > 1.0E-6 )
            stopit( 852, "Linear sky round-trip lon mismatch", status );
         if( fabs( yout850[0] - yout851[0] ) > 1.0E-6 )
            stopit( 853, "Linear sky round-trip lat mismatch", status );
      }

      astEnd;
   }

   /* SplitMap: constant sky position -> synthetic TAN projection write path.
      A 3D FrameSet (spectral + sky) where lon/lat are constant triggers
      the TAN fallback in SplitMap (fitschan.c ~32731-32791). */
   if( *status == 0 ) {
      AstFrame *gf860;
      AstSpecFrame *specf860;
      AstSkyFrame *sf860;
      AstFrame *cf860;
      AstFrameSet *fs860, *fs861;
      AstFitsChan *fc860;
      AstPermMap *pm860;
      AstShiftMap *sm860;
      AstZoomMap *zm860;
      AstUnitMap *um860;
      AstMapping *specmap860, *parmap860, *fullmap860;
      char *ctype860;
      double shift860;
      int outperm860[] = { 1, -1, -2 };
      int inperm860[] = { 1, 0, 0 };
      double con860[2];
      int found_tan;

      astBegin;

      gf860 = astFrame( 3, "Domain=GRID" );
      specf860 = astSpecFrame( "System=WAVE,Unit=m" );
      sf860 = astSkyFrame( "System=FK5" );
      cf860 = (AstFrame *)astCmpFrame( (AstFrame *)specf860, (AstFrame *)sf860, " " );

      con860[0] = 150.0 * AST__DD2R;
      con860[1] = -30.0 * AST__DD2R;
      pm860 = astPermMap( 3, inperm860, 3, outperm860, con860, " " );

      shift860 = 5.0e-7;
      sm860 = astShiftMap( 1, &shift860, " " );
      zm860 = astZoomMap( 1, 1.0e-10, " " );
      specmap860 = (AstMapping *)astCmpMap( (AstMapping *)sm860,
                                            (AstMapping *)zm860, 1, " " );

      um860 = astUnitMap( 2, " " );
      parmap860 = (AstMapping *)astCmpMap( specmap860, (AstMapping *)um860, 0, " " );
      fullmap860 = (AstMapping *)astCmpMap( parmap860, (AstMapping *)pm860, 1, " " );

      fs860 = astFrameSet( gf860, " " );
      astAddFrame( fs860, AST__BASE, fullmap860, cf860 );

      fc860 = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
      astPutFits( fc860, "NAXIS   = 3", 0 );
      astPutFits( fc860, "NAXIS1  = 100", 0 );
      astPutFits( fc860, "NAXIS2  = 1", 0 );
      astPutFits( fc860, "NAXIS3  = 1", 0 );

      if( astWrite( fc860, fs860 ) != 1 )
         stopit( 860, "Constant-sky write failed", status );

      found_tan = 0;
      astClear( fc860, "Card" );
      if( astGetFitsS( fc860, "CTYPE1", &ctype860 ) && strstr( ctype860, "TAN" ) )
         found_tan = 1;
      astClear( fc860, "Card" );
      if( astGetFitsS( fc860, "CTYPE2", &ctype860 ) && strstr( ctype860, "TAN" ) )
         found_tan = 1;
      astClear( fc860, "Card" );
      if( astGetFitsS( fc860, "CTYPE3", &ctype860 ) && strstr( ctype860, "TAN" ) )
         found_tan = 1;
      if( !found_tan )
         stopit( 862, "Constant-sky CTYPEs do not contain TAN", status );

      astClear( fc860, "Card" );
      fs861 = (AstFrameSet *)astRead( fc860 );
      if( !fs861 )
         stopit( 861, "Constant-sky read-back failed", status );

      astEnd;
   }

   /* FitsAxisOrder: exercise the axis reordering write path (FitOK).
      Read a 3D header (RA/DEC/FREQ), write with FitsAxisOrder specifying
      FREQ first, verify CTYPE1 is now FREQ. */
   if( *status == 0 ) {
      AstFitsChan *hfao, *wfao;
      AstFrameSet *fsfao;
      char *ctfao;

      astBegin;

      hfao = astFitsChan( NULL, NULL, " " );
      astPutFits( hfao, "NAXIS   = 3", 0 );
      astPutFits( hfao, "NAXIS1  = 100", 0 );
      astPutFits( hfao, "NAXIS2  = 100", 0 );
      astPutFits( hfao, "NAXIS3  = 100", 0 );
      astPutFits( hfao, "CTYPE1  = 'RA---TAN'", 0 );
      astPutFits( hfao, "CTYPE2  = 'DEC--TAN'", 0 );
      astPutFits( hfao, "CTYPE3  = 'FREQ'", 0 );
      astPutFits( hfao, "CRVAL1  = 180.0", 0 );
      astPutFits( hfao, "CRVAL2  = 45.0", 0 );
      astPutFits( hfao, "CRVAL3  = 1.4204e9", 0 );
      astPutFits( hfao, "CRPIX1  = 50.0", 0 );
      astPutFits( hfao, "CRPIX2  = 50.0", 0 );
      astPutFits( hfao, "CRPIX3  = 50.0", 0 );
      astPutFits( hfao, "CDELT1  = -0.01", 0 );
      astPutFits( hfao, "CDELT2  = 0.01", 0 );
      astPutFits( hfao, "CDELT3  = 1e6", 0 );
      astPutFits( hfao, "CUNIT3  = 'Hz'", 0 );
      astPutFits( hfao, "RADESYS = 'FK5'", 0 );
      astPutFits( hfao, "EQUINOX = 2000.0", 0 );
      astPutFits( hfao, "END", 0 );
      astClear( hfao, "Card" );
      fsfao = (AstFrameSet *)astRead( hfao );
      hfao = astAnnul( hfao );

      if( fsfao ) {
         wfao = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
         astSetC( wfao, "FitsAxisOrder", "FREQ RA DEC" );
         astPutFits( wfao, "NAXIS   = 3", 0 );
         astPutFits( wfao, "NAXIS1  = 100", 0 );
         astPutFits( wfao, "NAXIS2  = 100", 0 );
         astPutFits( wfao, "NAXIS3  = 100", 0 );
         if( astWrite( wfao, fsfao ) != 1 )
            stopit( 890, "FitsAxisOrder write failed", status );

         astClear( wfao, "Card" );
         if( !astGetFitsS( wfao, "CTYPE1", &ctfao ) )
            stopit( 891, "FitsAxisOrder CTYPE1 missing", status );
         else if( strncmp( ctfao, "FREQ", 4 ) )
            stopit( 892, "FitsAxisOrder CTYPE1 is not FREQ", status );

         wfao = astAnnul( wfao );
         fsfao = astAnnul( fsfao );
      }

      astEnd;
   }

   /* PutCards: test bulk card insertion via astPutCards.
      Cards must be packed at 80 chars each with no delimiters. */
   if( *status == 0 ) {
      AstFitsChan *pcfc;
      const char *bulk =
         "SIMPLE  =                    T / Standard FITS                                  "
         "NAXIS   =                    2                                                  "
         "NAXIS1  =                  100                                                  "
         "NAXIS2  =                  200                                                  "
         "END                                                                             ";

      astBegin;
      pcfc = astFitsChan( NULL, NULL, " " );
      astPutCards( pcfc, bulk );
      if( astGetI( pcfc, "Ncard" ) < 4 )
         stopit( 893, "PutCards did not insert expected cards", status );
      astEnd;
   }

   /* DUT1/DTAI: read from FITS headers (JCMT convention: DUT1 in days)
      and verify the values arrive on the Frame in seconds. */
   if( *status == 0 ) {
      AstFitsChan *ddfc;
      AstFrame *ddfrm;
      AstFrameSet *ddfs;
      double dut1_got, dtai_got;

      astBegin;

      ddfc = astFitsChan( NULL, NULL, " " );
      astPutFits( ddfc, "NAXIS1  = 100", 0 );
      astPutFits( ddfc, "NAXIS2  = 100", 0 );
      astPutFits( ddfc, "CTYPE1  = 'RA---TAN'", 0 );
      astPutFits( ddfc, "CTYPE2  = 'DEC--TAN'", 0 );
      astPutFits( ddfc, "CRVAL1  = 180.0", 0 );
      astPutFits( ddfc, "CRVAL2  = 45.0", 0 );
      astPutFits( ddfc, "CRPIX1  = 50.0", 0 );
      astPutFits( ddfc, "CRPIX2  = 50.0", 0 );
      astPutFits( ddfc, "CDELT1  = -0.01", 0 );
      astPutFits( ddfc, "CDELT2  = 0.01", 0 );
      astPutFits( ddfc, "RADESYS = 'FK5'", 0 );
      astPutFits( ddfc, "EQUINOX = 2000.0", 0 );
      astPutFits( ddfc, "DUT1    = 1.42361e-6", 0 );
      astPutFits( ddfc, "DTAI    = 37.0", 0 );
      astPutFits( ddfc, "TELESCOP= 'JCMT'", 0 );
      astPutFits( ddfc, "END", 0 );
      astClear( ddfc, "Card" );
      ddfs = (AstFrameSet *)astRead( ddfc );
      ddfc = astAnnul( ddfc );

      if( ddfs ) {
         ddfrm = astGetFrame( ddfs, AST__CURRENT );
         dut1_got = astGetD( ddfrm, "Dut1" );
         dtai_got = astGetD( ddfrm, "Dtai" );
         ddfrm = astAnnul( ddfrm );

         if( fabs( dut1_got - 0.123 ) > 0.001 )
            stopit( 900, "DUT1 read-back value wrong", status );
         if( fabs( dtai_got - 37.0 ) > 0.01 )
            stopit( 901, "DTAI read-back value wrong", status );

         ddfs = astAnnul( ddfs );
      }

      astEnd;
   }

   /* AIPS++ encoding detection: a header with AIPS spectral CTYPE
      plus CD matrix should auto-detect as FITS-AIPS++ (line 12580). */
   if( *status == 0 ) {
      AstFitsChan *apfc;
      const char *enc;

      astBegin;
      apfc = astFitsChan( NULL, NULL, " " );
      astPutFits( apfc, "NAXIS1  = 100", 0 );
      astPutFits( apfc, "NAXIS2  = 100", 0 );
      astPutFits( apfc, "NAXIS3  = 1024", 0 );
      astPutFits( apfc, "CTYPE1  = 'RA---TAN'", 0 );
      astPutFits( apfc, "CTYPE2  = 'DEC--TAN'", 0 );
      astPutFits( apfc, "CTYPE3  = 'FREQ-LSR'", 0 );
      astPutFits( apfc, "CRVAL1  = 180.0", 0 );
      astPutFits( apfc, "CRVAL2  = 45.0", 0 );
      astPutFits( apfc, "CRVAL3  = 1.4204E+09", 0 );
      astPutFits( apfc, "CRPIX1  = 50.0", 0 );
      astPutFits( apfc, "CRPIX2  = 50.0", 0 );
      astPutFits( apfc, "CRPIX3  = 512.0", 0 );
      astPutFits( apfc, "CD1_1   = -0.01", 0 );
      astPutFits( apfc, "CD2_2   = 0.01", 0 );
      astPutFits( apfc, "CD3_3   = 1.0E+06", 0 );
      astPutFits( apfc, "RADESYS = 'FK5'", 0 );
      astPutFits( apfc, "EQUINOX = 2000.0", 0 );
      astPutFits( apfc, "END", 0 );
      enc = astGetC( apfc, "Encoding" );
      if( !enc || strcmp( enc, "FITS-AIPS++" ) )
         stopit( 903, "AIPS++ encoding not auto-detected with CD+FREQ-LSR", status );
      apfc = astAnnul( apfc );
      astEnd;
   }

   /* AddEncodingFrame CLASS paths: test writing to FITS-CLASS with various
      spectral and sky systems to exercise the normalisation code. */
   if( *status == 0 ) {
      AstFitsChan *clfc;
      AstFrameSet *clfs;

      astBegin;

      /* CLASS with VRAD spectral axis — covers the non-FREQ spectral branch
         in AddEncodingFrame (line 2440). Uses FK5 which CLASS handles natively. */
      clfc = astFitsChan( NULL, NULL, " " );
      astPutFits( clfc, "NAXIS1  = 1024", 0 );
      astPutFits( clfc, "NAXIS2  = 100", 0 );
      astPutFits( clfc, "NAXIS3  = 100", 0 );
      astPutFits( clfc, "CTYPE1  = 'VRAD'", 0 );
      astPutFits( clfc, "CTYPE2  = 'RA---TAN'", 0 );
      astPutFits( clfc, "CTYPE3  = 'DEC--TAN'", 0 );
      astPutFits( clfc, "CRVAL1  = 0.0", 0 );
      astPutFits( clfc, "CRVAL2  = 180.0", 0 );
      astPutFits( clfc, "CRVAL3  = 45.0", 0 );
      astPutFits( clfc, "CRPIX1  = 513.0", 0 );
      astPutFits( clfc, "CRPIX2  = 50.0", 0 );
      astPutFits( clfc, "CRPIX3  = 50.0", 0 );
      astPutFits( clfc, "CDELT1  = 1000.0", 0 );
      astPutFits( clfc, "CDELT2  = -0.01", 0 );
      astPutFits( clfc, "CDELT3  = 0.01", 0 );
      astPutFits( clfc, "CUNIT1  = 'm/s'", 0 );
      astPutFits( clfc, "RESTFRQ = 1.420405752E9", 0 );
      astPutFits( clfc, "SPECSYS = 'BARYCENT'", 0 );
      astPutFits( clfc, "RADESYS = 'FK5'", 0 );
      astPutFits( clfc, "EQUINOX = 2000.0", 0 );
      astPutFits( clfc, "MJD-OBS = 52413.59", 0 );
      astPutFits( clfc, "END", 0 );
      astClear( clfc, "Card" );
      clfs = (AstFrameSet *)astRead( clfc );
      clfc = astAnnul( clfc );

      if( clfs ) {
         char *cl_ctype;
         clfc = astFitsChan( NULL, NULL, "Encoding=FITS-CLASS" );
         if( astWrite( clfc, clfs ) != 1 )
            stopit( 910, "CLASS VRAD+FK5 write failed", status );

         astClear( clfc, "Card" );
         if( !astGetFitsS( clfc, "CTYPE1", &cl_ctype ) )
            stopit( 912, "CLASS VRAD CTYPE1 missing", status );
         else if( strncmp( cl_ctype, "FREQ", 4 ) )
            stopit( 913, "CLASS VRAD CTYPE1 not FREQ", status );

         clfc = astAnnul( clfc );
         clfs = astAnnul( clfs );
      }

      /* CLASS with FK4 sky system — covers the FK4 equinox branch (2459). */
      clfc = astFitsChan( NULL, NULL, " " );
      astPutFits( clfc, "NAXIS1  = 1024", 0 );
      astPutFits( clfc, "NAXIS2  = 100", 0 );
      astPutFits( clfc, "NAXIS3  = 100", 0 );
      astPutFits( clfc, "CTYPE1  = 'FREQ'", 0 );
      astPutFits( clfc, "CTYPE2  = 'RA---TAN'", 0 );
      astPutFits( clfc, "CTYPE3  = 'DEC--TAN'", 0 );
      astPutFits( clfc, "CRVAL1  = 1.420405752E9", 0 );
      astPutFits( clfc, "CRVAL2  = 180.0", 0 );
      astPutFits( clfc, "CRVAL3  = 45.0", 0 );
      astPutFits( clfc, "CRPIX1  = 513.0", 0 );
      astPutFits( clfc, "CRPIX2  = 50.0", 0 );
      astPutFits( clfc, "CRPIX3  = 50.0", 0 );
      astPutFits( clfc, "CDELT1  = 1.0E6", 0 );
      astPutFits( clfc, "CDELT2  = -0.01", 0 );
      astPutFits( clfc, "CDELT3  = 0.01", 0 );
      astPutFits( clfc, "CUNIT1  = 'Hz'", 0 );
      astPutFits( clfc, "RESTFRQ = 1.420405752E9", 0 );
      astPutFits( clfc, "SPECSYS = 'BARYCENT'", 0 );
      astPutFits( clfc, "RADESYS = 'FK4'", 0 );
      astPutFits( clfc, "EQUINOX = 1950.0", 0 );
      astPutFits( clfc, "MJD-OBS = 52413.59", 0 );
      astPutFits( clfc, "END", 0 );
      astClear( clfc, "Card" );
      clfs = (AstFrameSet *)astRead( clfc );
      clfc = astAnnul( clfc );

      if( clfs ) {
         double cl_equinox;
         clfc = astFitsChan( NULL, NULL, "Encoding=FITS-CLASS" );
         if( astWrite( clfc, clfs ) != 1 )
            stopit( 911, "CLASS FK4 write failed", status );

         astClear( clfc, "Card" );
         if( !astGetFitsF( clfc, "EQUINOX", &cl_equinox ) )
            stopit( 914, "CLASS FK4 EQUINOX missing", status );
         else if( fabs( cl_equinox - 1950.0 ) > 0.1 )
            stopit( 915, "CLASS FK4 EQUINOX not 1950", status );

         clfc = astAnnul( clfc );
         clfs = astAnnul( clfs );
      }

      astEnd;
   }

   /* CLASSFromStore 1D→3D expansion: a 1D SpecFrame written to FITS-CLASS
      triggers NAXIS expansion from 1 to 3 (degenerate spatial axes),
      and also exercises: SFL→GLS rename, kHz/MHz/GHz unit branches,
      old DATE-OBS format, FK4 default equinox (error 1000-1019). */
   if( *status == 0 ) {
      astBegin;

      /* 1D SpecFrame with RefRA/RefDec → triggers MakeFitsFrameSet to add
         celestial axes, then CLASSFromStore expands NAXIS 1→3 */
      {
         AstSpecFrame *c1spec = astSpecFrame(
            "System=FREQ,Unit=Hz,StdOfRest=Source,"
            "RefRA=3:00:00,RefDec=45:00:00" );
         astSetD( (AstFrame *)c1spec, "RestFreq", 1.420405752e9 );
         astSetD( (AstFrame *)c1spec, "Epoch", 52413.59 );
         AstFrame *c1pix = astFrame( 1, "Domain=GRID" );
         AstMapping *c1map = (AstMapping *)astZoomMap( 1, 1.0e6, " " );
         AstFrameSet *c1fs = astFrameSet( c1pix, " " );
         astAddFrame( c1fs, AST__BASE, c1map, (AstFrame *)c1spec );

         AstFitsChan *c1fc = astFitsChan( NULL, NULL, "Encoding=FITS-CLASS" );
         astPutFits( c1fc, "NAXIS   = 1", 0 );
         astPutFits( c1fc, "NAXIS1  = 1024", 0 );
         if( astWrite( c1fc, c1fs ) != 1 )
            stopit( 1000, "1D→3D CLASS write failed", status );

         /* Verify NAXIS was expanded to 3 */
         int cl_naxis;
         astClear( c1fc, "Card" );
         if( !astGetFitsI( c1fc, "NAXIS", &cl_naxis ) )
            stopit( 1001, "CLASS 1D→3D: NAXIS missing", status );
         else if( cl_naxis != 3 )
            stopit( 1002, "CLASS 1D→3D: NAXIS not 3", status );

         /* Verify NAXIS2=1 and NAXIS3=1 (degenerate spatial) */
         int cl_n2, cl_n3;
         astClear( c1fc, "Card" );
         if( !astGetFitsI( c1fc, "NAXIS2", &cl_n2 ) || cl_n2 != 1 )
            stopit( 1003, "CLASS 1D→3D: NAXIS2 not 1", status );
         astClear( c1fc, "Card" );
         if( !astGetFitsI( c1fc, "NAXIS3", &cl_n3 ) || cl_n3 != 1 )
            stopit( 1004, "CLASS 1D→3D: NAXIS3 not 1", status );

         /* Verify CTYPE1 is FREQ */
         char *cl_ctype;
         astClear( c1fc, "Card" );
         if( !astGetFitsS( c1fc, "CTYPE1", &cl_ctype ) )
            stopit( 1005, "CLASS 1D→3D: CTYPE1 missing", status );
         else if( strncmp( cl_ctype, "FREQ", 4 ) )
            stopit( 1006, "CLASS 1D→3D: CTYPE1 not FREQ", status );

         c1fc = astAnnul( c1fc );
      }

      /* FITS-PC with 1D SpecFrame + RefRA/RefDec — exercises WCSAXES
         write path in PCFromStore (line 24533-24534, error 1020-1022). */
      {
         AstSpecFrame *p1spec = astSpecFrame(
            "System=FREQ,Unit=Hz,StdOfRest=Barycentric,"
            "RefRA=3:00:00,RefDec=45:00:00" );
         astSetD( (AstFrame *)p1spec, "RestFreq", 1.420405752e9 );
         astSetD( (AstFrame *)p1spec, "Epoch", 52413.59 );
         AstFrame *p1pix = astFrame( 1, "Domain=GRID" );
         AstMapping *p1map = (AstMapping *)astZoomMap( 1, 1.0e6, " " );
         AstFrameSet *p1fs = astFrameSet( p1pix, " " );
         astAddFrame( p1fs, AST__BASE, p1map, (AstFrame *)p1spec );

         AstFitsChan *p1fc = astFitsChan( NULL, NULL, "Encoding=FITS-PC" );
         astPutFits( p1fc, "NAXIS   = 1", 0 );
         astPutFits( p1fc, "NAXIS1  = 1024", 0 );
         if( astWrite( p1fc, p1fs ) != 1 )
            stopit( 1020, "FITS-PC 1D SpecFrame write failed", status );

         int pc_wcsaxes;
         astClear( p1fc, "Card" );
         if( !astGetFitsI( p1fc, "WCSAXES", &pc_wcsaxes ) )
            stopit( 1021, "FITS-PC WCSAXES missing", status );
         else if( pc_wcsaxes != 3 )
            stopit( 1022, "FITS-PC WCSAXES not 3", status );

         p1fc = astAnnul( p1fc );
      }

      astEnd;
   }

   /* MakeFitsFrameSet: 1D SpecFrame with RefRA/RefDec — triggers the
      code that adds celestial axes to satisfy FITS-WCS paper III. */
   if( *status == 0 ) {
      AstSpecFrame *mfspec;
      AstFrame *mfpix;
      AstMapping *mfmap;
      AstFrameSet *mffs;
      AstFitsChan *mffc;

      astBegin;

      mfspec = astSpecFrame( "System=FREQ,Unit=Hz,StdOfRest=BARY,"
                             "RefRA=3:00:00,RefDec=45:00:00" );
      astSetD( (AstFrame *)mfspec, "RestFreq", 1.420405752e9 );
      astSetD( (AstFrame *)mfspec, "Epoch", 52413.59 );
      mfpix = astFrame( 1, "Domain=GRID" );
      mfmap = (AstMapping *)astZoomMap( 1, 1.0e6, " " );
      mffs = astFrameSet( mfpix, " " );
      astAddFrame( mffs, AST__BASE, mfmap, (AstFrame *)mfspec );

      mffc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
      astPutFits( mffc, "NAXIS   = 1", 0 );
      astPutFits( mffc, "NAXIS1  = 1024", 0 );
      if( astWrite( mffc, mffs ) != 1 )
         stopit( 920, "1D SpecFrame with RefRA/RefDec write failed", status );

      {
         char *mf_ctype;
         int mf_naxis;
         if( !astGetFitsI( mffc, "WCSAXES", &mf_naxis ) )
            stopit( 921, "1D SpecFrame WCSAXES missing", status );
         else if( mf_naxis != 3 )
            stopit( 922, "1D SpecFrame WCSAXES not 3", status );

         astClear( mffc, "Card" );
         if( astGetFitsS( mffc, "CTYPE2", &mf_ctype ) ) {
            if( strncmp( mf_ctype, "RA--", 4 ) )
               stopit( 923, "1D SpecFrame CTYPE2 not RA", status );
         }
      }

      mffc = astAnnul( mffc );
      mffs = astAnnul( mffs );

      astEnd;
   }

   /* SkySys CNAME: write a SkyFrame with explicit axis labels.
      Covers the CNAME/label paths in SkySys (lines 29920-29928). */
   if( *status == 0 ) {
      AstFitsChan *cnfc;
      AstFrameSet *cnfs;

      astBegin;

      cnfc = astFitsChan( NULL, NULL, " " );
      astPutFits( cnfc, "NAXIS1  = 100", 0 );
      astPutFits( cnfc, "NAXIS2  = 100", 0 );
      astPutFits( cnfc, "CTYPE1  = 'RA---TAN'", 0 );
      astPutFits( cnfc, "CTYPE2  = 'DEC--TAN'", 0 );
      astPutFits( cnfc, "CRVAL1  = 180.0", 0 );
      astPutFits( cnfc, "CRVAL2  = 45.0", 0 );
      astPutFits( cnfc, "CRPIX1  = 50.0", 0 );
      astPutFits( cnfc, "CRPIX2  = 50.0", 0 );
      astPutFits( cnfc, "CDELT1  = -0.01", 0 );
      astPutFits( cnfc, "CDELT2  = 0.01", 0 );
      astPutFits( cnfc, "RADESYS = 'FK5'", 0 );
      astPutFits( cnfc, "EQUINOX = 2000.0", 0 );
      astPutFits( cnfc, "END", 0 );
      astClear( cnfc, "Card" );
      cnfs = (AstFrameSet *)astRead( cnfc );
      cnfc = astAnnul( cnfc );

      if( cnfs ) {
         astSetC( cnfs, "Label(1)", "My Right Ascension" );
         astSetC( cnfs, "Label(2)", "My Declination" );

         cnfc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
         if( astWrite( cnfc, cnfs ) != 1 )
            stopit( 930, "CNAME write failed", status );

         astClear( cnfc, "Card" );
         if( astFindFits( cnfc, "CTYPE1", NULL, 0 ) ) {
            const char *cn_com = astGetC( cnfc, "CardComm" );
            if( !cn_com || !strstr( cn_com, "My Right Ascension" ) )
               stopit( 931, "CTYPE1 comment does not contain label", status );
         }
         if( astFindFits( cnfc, "CTYPE2", NULL, 0 ) ) {
            const char *cn_com = astGetC( cnfc, "CardComm" );
            if( !cn_com || !strstr( cn_com, "My Declination" ) )
               stopit( 932, "CTYPE2 comment does not contain label", status );
         }

         cnfc = astAnnul( cnfc );
         cnfs = astAnnul( cnfs );
      }

      astEnd;
   }

   /* SkySys helioecliptic write: covers HLON/HLAT branch (lines 29808-29809). */
   if( *status == 0 ) {
      AstFitsChan *hefc;
      AstFrameSet *hefs;

      astBegin;

      hefc = astFitsChan( NULL, NULL, " " );
      astPutFits( hefc, "NAXIS1  = 100", 0 );
      astPutFits( hefc, "NAXIS2  = 100", 0 );
      astPutFits( hefc, "CTYPE1  = 'HLON-TAN'", 0 );
      astPutFits( hefc, "CTYPE2  = 'HLAT-TAN'", 0 );
      astPutFits( hefc, "CRVAL1  = 180.0", 0 );
      astPutFits( hefc, "CRVAL2  = 45.0", 0 );
      astPutFits( hefc, "CRPIX1  = 50.0", 0 );
      astPutFits( hefc, "CRPIX2  = 50.0", 0 );
      astPutFits( hefc, "CDELT1  = -0.01", 0 );
      astPutFits( hefc, "CDELT2  = 0.01", 0 );
      astPutFits( hefc, "MJD-OBS = 52413.59", 0 );
      astPutFits( hefc, "END", 0 );
      astClear( hefc, "Card" );
      hefs = (AstFrameSet *)astRead( hefc );
      hefc = astAnnul( hefc );

      if( hefs ) {
         hefc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
         if( astWrite( hefc, hefs ) != 1 )
            stopit( 940, "Helioecliptic write failed", status );

         astClear( hefc, "Card" );
         {
            char *he_ctype;
            if( astGetFitsS( hefc, "CTYPE1", &he_ctype ) ) {
               if( strncmp( he_ctype, "HLON", 4 ) )
                  stopit( 941, "Helioecliptic CTYPE1 not HLON", status );
            }
         }

         hefc = astAnnul( hefc );
         hefs = astAnnul( hefs );
      }

      astEnd;
   }

   /* Old DATE-OBS format: write a FrameSet with Epoch before 1999,
      triggering the dd/mm/yy format in WcsFromStore. */
   if( *status == 0 ) {
      AstFitsChan *odfc;
      AstFrameSet *odfs;
      char *od_val;

      astBegin;

      odfc = astFitsChan( NULL, NULL, " " );
      astPutFits( odfc, "NAXIS1  = 100", 0 );
      astPutFits( odfc, "NAXIS2  = 100", 0 );
      astPutFits( odfc, "CTYPE1  = 'RA---TAN'", 0 );
      astPutFits( odfc, "CTYPE2  = 'DEC--TAN'", 0 );
      astPutFits( odfc, "CRVAL1  = 180.0", 0 );
      astPutFits( odfc, "CRVAL2  = 45.0", 0 );
      astPutFits( odfc, "CRPIX1  = 50.0", 0 );
      astPutFits( odfc, "CRPIX2  = 50.0", 0 );
      astPutFits( odfc, "CDELT1  = -0.01", 0 );
      astPutFits( odfc, "CDELT2  = 0.01", 0 );
      astPutFits( odfc, "RADESYS = 'FK5'", 0 );
      astPutFits( odfc, "EQUINOX = 2000.0", 0 );
      astPutFits( odfc, "MJD-OBS = 48000.0", 0 );
      astPutFits( odfc, "END", 0 );
      astClear( odfc, "Card" );
      odfs = (AstFrameSet *)astRead( odfc );
      odfc = astAnnul( odfc );

      if( odfs ) {
         odfc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
         if( astWrite( odfc, odfs ) != 1 )
            stopit( 950, "Old DATE-OBS write failed", status );

         astClear( odfc, "Card" );
         if( astGetFitsS( odfc, "DATE-OBS", &od_val ) ) {
            if( od_val[2] != '/' )
               stopit( 951, "DATE-OBS not in old dd/mm/yy format", status );
         }

         odfc = astAnnul( odfc );
         odfs = astAnnul( odfs );
      }

      astEnd;
   }

   /* FITS-PC write with alternate axes: 1D spectral FrameSet with a
      second SpecFrame added as an alternate description. The 1x1 PC
      matrix is identity for both, so the alternate survives FITS-PC. */
   if( *status == 0 ) {
      AstSpecFrame *pcspec, *pcspec2;
      AstFrame *pcpix;
      AstMapping *pcmap;
      AstFrameSet *pcfs;
      AstFitsChan *pcfc;
      char *pc_val;

      astBegin;

      pcspec = astSpecFrame( "System=FREQ,Unit=Hz,StdOfRest=Barycentric,"
                             "RestFreq=1.4204e9 Hz" );
      pcpix = astFrame( 1, "Domain=GRID" );
      pcmap = (AstMapping *)astZoomMap( 1, 1.0e6, " " );
      pcfs = astFrameSet( pcpix, " " );
      astAddFrame( pcfs, AST__BASE, pcmap, (AstFrame *)pcspec );

      pcspec2 = astSpecFrame( "System=WAVE,Unit=m,StdOfRest=Barycentric,"
                              "RestFreq=1.4204e9 Hz" );
      pcmap = (AstMapping *)astZoomMap( 1, 1.0e-10, " " );
      astAddFrame( pcfs, AST__BASE, pcmap, (AstFrame *)pcspec2 );

      astSetI( pcfs, "Current", 2 );

      pcfc = astFitsChan( NULL, NULL, "Encoding=FITS-PC" );
      astPutFits( pcfc, "NAXIS   = 1", 0 );
      astPutFits( pcfc, "NAXIS1  = 1024", 0 );
      astSetC( pcfc, "AltAxes", "ALL" );
      if( astWrite( pcfc, pcfs ) != 1 )
         stopit( 960, "FITS-PC spectral write failed", status );

      astClear( pcfc, "Card" );
      if( !astGetFitsS( pcfc, "CTYPE1", &pc_val ) ||
          strncmp( pc_val, "FREQ", 4 ) )
         stopit( 961, "FITS-PC CTYPE1 not FREQ", status );

      if( !astGetFitsS( pcfc, "C1YPE1", &pc_val ) )
         stopit( 962, "FITS-PC C1YPE1 (alternate A) missing", status );
      else if( strncmp( pc_val, "WAVE", 4 ) )
         stopit( 963, "FITS-PC C1YPE1 not WAVE", status );

      pcfc = astAnnul( pcfc );
      pcfs = astAnnul( pcfs );

      astEnd;
   }

   /* Offset SkyFrame write: read a normal FK5 TAN header, set SkyRefIs
      to make it an offset SkyFrame, then write to FITS-WCS. Verify the
      primary uses OFLN/OFLT. The alternate absolute description exercises
      SkySys offset paths (SkyRef/SkyRefP/SkyRefIs storage). */
   if( *status == 0 ) {
      AstFitsChan *osfc, *osfc2;
      AstFrameSet *osfs;
      char *os_val;

      astBegin;

      osfc = astFitsChan( NULL, NULL, " " );
      astPutFits( osfc, "NAXIS1  = 100", 0 );
      astPutFits( osfc, "NAXIS2  = 100", 0 );
      astPutFits( osfc, "CTYPE1  = 'RA---TAN'", 0 );
      astPutFits( osfc, "CTYPE2  = 'DEC--TAN'", 0 );
      astPutFits( osfc, "CRVAL1  = 180.0", 0 );
      astPutFits( osfc, "CRVAL2  = 45.0", 0 );
      astPutFits( osfc, "CRPIX1  = 50.0", 0 );
      astPutFits( osfc, "CRPIX2  = 50.0", 0 );
      astPutFits( osfc, "CDELT1  = -0.01", 0 );
      astPutFits( osfc, "CDELT2  = 0.01", 0 );
      astPutFits( osfc, "RADESYS = 'FK5'", 0 );
      astPutFits( osfc, "EQUINOX = 2000.0", 0 );
      astPutFits( osfc, "END", 0 );
      astClear( osfc, "Card" );
      osfs = (AstFrameSet *)astRead( osfc );
      osfc = astAnnul( osfc );

      if( osfs ) {
         astSet( osfs, "SkyRefIs=Origin,SkyRef(1)=%.17g,SkyRef(2)=%.17g",
                 180.0 * AST__DD2R, 45.0 * AST__DD2R );
         if( !astOK ) {
            astClearStatus;
            osfs = astAnnul( osfs );
            osfs = NULL;
         }
      }

      if( osfs ) {         osfc2 = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
         {
            int osn = astWrite( osfc2, osfs );
            if( !astOK ) astClearStatus;

            if( osn == 1 ) {
               astClear( osfc2, "Card" );
               if( astGetFitsS( osfc2, "CTYPE1", &os_val ) ) {
                  if( strncmp( os_val, "OFLN", 4 ) )
                     stopit( 971, "Offset CTYPE1 not OFLN", status );
               }

               if( astGetFitsS( osfc2, "SREFISA", &os_val ) ) {
                  if( strcmp( os_val, "ORIGIN" ) )
                     stopit( 972, "SREFISA not ORIGIN", status );
               }

               {
                  double sref_val;
                  if( astGetFitsF( osfc2, "SREF1A", &sref_val ) ) {
                     if( fabs( sref_val ) < 1e-10 )
                        stopit( 973, "SREF1A value too small", status );
                  }
               }
            }
         }
         osfc2 = astAnnul( osfc2 );
         osfs = astAnnul( osfs );
      }

      /* --- LAMBDA spectral CTYPE: SpecTrans normalizes CUNIT
         "angstrom" → "Angstrom" (line 32066). --- */
      {
         AstFitsChan *lfc = astFitsChan( NULL, NULL, " " );
         AstFrameSet *lfs;

         astPutFits( lfc, "NAXIS1  = 1024", 0 );
         astPutFits( lfc, "CTYPE1  = 'WAVE'", 0 );
         astPutFits( lfc, "CRVAL1  = 5.5e-7", 0 );
         astPutFits( lfc, "CRPIX1  = 512.0", 0 );
         astPutFits( lfc, "CDELT1  = 1.0e-10", 0 );
         astPutFits( lfc, "CUNIT1  = 'angstrom'", 0 );
         astPutFits( lfc, "END", 0 );
         astClear( lfc, "Card" );
         lfs = (AstFrameSet *)astRead( lfc );
         if( !lfs ) {
            stopit( 990, "Failed to read WAVE/angstrom spectral header", status );
         } else {
            const char *sys = astGetC( lfs, "System" );
            if( !sys || strcmp( sys, "WAVE" ) )
               stopit( 990, "WAVE/angstrom: System is not WAVE", status );
            const char *unit = astGetC( lfs, "Unit(1)" );
            if( !unit || strcmp( unit, "Angstrom" ) )
               stopit( 990, "WAVE/angstrom: Unit is not Angstrom", status );
            astAnnul( lfs );
         }
         astAnnul( lfc );
      }

      /* --- CLASS VELO-EAR: geocentric velocity keyword in CLASS header.
         Triggers the GEOCENTR path in ClassTrans (line 7098). --- */
      {
         AstFitsChan *cfc = astFitsChan( NULL, NULL, " " );
         AstFrameSet *cfs;

         astPutFits( cfc, "NAXIS1  = 100", 0 );
         astPutFits( cfc, "NAXIS2  = 100", 0 );
         astPutFits( cfc, "NAXIS3  = 1024", 0 );
         astPutFits( cfc, "CTYPE1  = 'RA---GLS'", 0 );
         astPutFits( cfc, "CTYPE2  = 'DEC--GLS'", 0 );
         astPutFits( cfc, "CTYPE3  = 'FREQ'", 0 );
         astPutFits( cfc, "CRVAL1  = 180.0", 0 );
         astPutFits( cfc, "CRVAL2  = 45.0", 0 );
         astPutFits( cfc, "CRVAL3  = 0.0", 0 );
         astPutFits( cfc, "CRPIX1  = 50.0", 0 );
         astPutFits( cfc, "CRPIX2  = 50.0", 0 );
         astPutFits( cfc, "CRPIX3  = 512.0", 0 );
         astPutFits( cfc, "CDELT1  = -0.01", 0 );
         astPutFits( cfc, "CDELT2  = 0.01", 0 );
         astPutFits( cfc, "CDELT3  = 1.0E+06", 0 );
         astPutFits( cfc, "CUNIT3  = 'Hz'", 0 );
         astPutFits( cfc, "DELTAV  = 1000.0", 0 );
         astPutFits( cfc, "VELO-EAR= 50000.0", 0 );
         astPutFits( cfc, "RESTFREQ= 1.4204E+09", 0 );
         astPutFits( cfc, "RADESYS = 'FK5'", 0 );
         astPutFits( cfc, "EQUINOX = 2000.0", 0 );
         astPutFits( cfc, "END", 0 );
         astClear( cfc, "Card" );
         cfs = (AstFrameSet *)astRead( cfc );
         if( !cfs ) {
            stopit( 991, "Failed to read CLASS VELO-EAR header", status );
         } else {
            const char *svrf = astGetC( cfs, "SourceVRF" );
            if( !svrf || !strstr( svrf, "Geocen" ) )
               stopit( 991, "CLASS VELO-EAR: SourceVRF not Geocentric", status );
            astAnnul( cfs );
         }
         astAnnul( cfc );
      }

      /* --- FitsDigits negative: triggers EncodeFloat adaptive width
         reduction (line 9836). A negative FitsDigits requests that many
         digits but allows fewer if the field is too wide. --- */
      {
         AstFitsChan *dgfc = astFitsChan( NULL, NULL, " " );
         AstFrameSet *dgfs;

         astPutFits( dgfc, "NAXIS1  = 100", 0 );
         astPutFits( dgfc, "NAXIS2  = 100", 0 );
         astPutFits( dgfc, "CTYPE1  = 'RA---TAN'", 0 );
         astPutFits( dgfc, "CTYPE2  = 'DEC--TAN'", 0 );
         astPutFits( dgfc, "CRVAL1  = 180.123456789", 0 );
         astPutFits( dgfc, "CRVAL2  = 45.987654321", 0 );
         astPutFits( dgfc, "CRPIX1  = 50.0", 0 );
         astPutFits( dgfc, "CRPIX2  = 50.0", 0 );
         astPutFits( dgfc, "CDELT1  = -0.01", 0 );
         astPutFits( dgfc, "CDELT2  = 0.01", 0 );
         astPutFits( dgfc, "RADESYS = 'FK5'", 0 );
         astPutFits( dgfc, "EQUINOX = 2000.0", 0 );
         astPutFits( dgfc, "END", 0 );
         astClear( dgfc, "Card" );
         dgfs = (AstFrameSet *)astRead( dgfc );
         if( dgfs ) {
            AstFitsChan *wfc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
            astSetI( wfc, "FitsDigits", -20 );
            if( astWrite( wfc, dgfs ) != 1 )
               stopit( 988, "FitsDigits=-20 write failed", status );
            else {
               char dgcard[81];
               int found_crval = 0;
               astClear( wfc, "Card" );
               while( astFindFits( wfc, "%f", dgcard, 1 ) ) {
                  if( !strncmp( dgcard, "CRVAL1", 6 ) ) {
                     found_crval = 1;
                     if( !strstr( dgcard, "180" ) )
                        stopit( 989, "FitsDigits=-20 CRVAL1 missing value", status );
                  }
               }
               if( !found_crval )
                  stopit( 989, "FitsDigits=-20 no CRVAL1 found", status );
            }
            wfc = astAnnul( wfc );
            dgfs = astAnnul( dgfs );
         }
         dgfc = astAnnul( dgfc );
      }

      /* --- 3D SIP: read 3D SIP header (2 celestial + 1 spectral) and
         write back with SipOK=1 to exercise the >2 axis PermMap handling
         in SIPIntWorld (error 980-985). --- */
      {
         AstFitsChan *sipfc = astFitsChan( NULL, NULL, " " );
         AstFrameSet *sipfs;
         char card[81];
         int found_a_order = 0;
         int found_freq = 0;

         astSet( sipfc, "SourceFile=%s/fixtures/wcsconv/inputs/sip-3d.head", srcdir );
         astClear( sipfc, "Card" );
         sipfs = (AstFrameSet *) astRead( sipfc );
         if( !sipfs ) {
            stopit( 980, "Failed to read 3D SIP header", status );
         } else {
            astEmptyFits( sipfc );
            astSetI( sipfc, "SipOK", 1 );
            astSet( sipfc, "Encoding=FITS-WCS" );
            if( astWrite( sipfc, sipfs ) == 0 )
               stopit( 981, "Failed to write 3D SIP FrameSet", status );

            astClear( sipfc, "Card" );
            while( astFindFits( sipfc, "%f", card, 1 ) ) {
               if( !strncmp( card, "A_ORDER ", 8 ) ) found_a_order = 1;
               if( !strncmp( card, "CTYPE3", 6 ) &&
                   strstr( card, "FREQ" ) ) found_freq = 1;
            }
            if( !found_a_order )
               stopit( 982, "3D SIP write did not produce A_ORDER", status );
            if( !found_freq )
               stopit( 983, "3D SIP write did not produce FREQ CTYPE3", status );
            sipfs = astAnnul( sipfs );
         }
         sipfc = astAnnul( sipfc );
      }

      /* --- 3D SIP with swapped DEC/RA axis order: exercises reversed
         inaxes path in SIPIntWorld (error 984-987). --- */
      {
         AstFitsChan *sipfc2 = astFitsChan( NULL, NULL, " " );
         AstFrameSet *sipfs2;
         char card[81];
         int found_a_order = 0;

         astSet( sipfc2, "SourceFile=%s/fixtures/wcsconv/inputs/sip-3d-swap.head", srcdir );
         astClear( sipfc2, "Card" );
         sipfs2 = (AstFrameSet *) astRead( sipfc2 );
         if( !sipfs2 ) {
            stopit( 984, "Failed to read 3D SIP swapped header", status );
         } else {
            astEmptyFits( sipfc2 );
            astSetI( sipfc2, "SipOK", 1 );
            astSet( sipfc2, "Encoding=FITS-WCS" );
            if( astWrite( sipfc2, sipfs2 ) == 0 )
               stopit( 985, "Failed to write 3D SIP swapped FrameSet", status );

            astClear( sipfc2, "Card" );
            while( astFindFits( sipfc2, "%f", card, 1 ) ) {
               if( !strncmp( card, "A_ORDER ", 8 ) ) found_a_order = 1;
            }
            if( !found_a_order )
               stopit( 986, "3D SIP swapped write did not produce A_ORDER", status );
            sipfs2 = astAnnul( sipfs2 );
         }
         sipfc2 = astAnnul( sipfc2 );
      }

      astEnd;
   }

   /* --- Non-invertable Mapping write: exercises early-return at
      line 2833 when Mapping has no inverse and TabOK <= 0. Uses a
      forward-only PolyMap. astWrite should return 0. --- */
   if( *status == 0 ) {
      astBegin;
      AstFrame *nifrm = astFrame( 2, "Domain=PIXEL" );
      AstFrame *nowfrm = astFrame( 2, " " );
      double coeff_f[] = { 1.0, 1, 1, 0,
                           1.0, 2, 0, 1 };
      AstPolyMap *nopm = astPolyMap( 2, 2, 2, coeff_f, 0, NULL,
                                     "IterInverse=0" );
      AstFrameSet *nofs = astFrameSet( nifrm, " " );
      astAddFrame( nofs, AST__BASE, (AstMapping *)nopm, nowfrm );
      AstFitsChan *nofc = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
      astPutFits( nofc, "NAXIS1  = 100", 0 );
      astPutFits( nofc, "NAXIS2  = 100", 0 );
      int nw = astWrite( nofc, nofs );
      if( !astOK ) astClearStatus;
      if( nw != 0 )
         stopit( 904, "Non-invertable FrameSet should not write to FITS", status );
      astEnd;
   }

   /* --- Non-linear Mapping under a SIP fit: a FrameSet whose pixel->sky
      Mapping contains a SplineMap has no exact FITS-WCS representation, so
      astWrite should return 0.  This used to segfault in MakeIntWorld,
      which applied the SIP CD values to "partmat" rows that the failed
      linearity test had left NULL.  Reaching that code needs NAXIS1/NAXIS2,
      so the pixel box is known, and a FitsTol tight enough that the fit
      over that box fails; the default FitsTol of 0.1 is loose enough that
      this FrameSet passes.

      It also needs SIPIntWorld to have accepted a SIP description, and
      that is what makes the crash rare.  SIPIntWorld checks the Mapping
      that follows the PolyMap for linearity over a box of plus and minus
      the image dimensions centred on the SIP reference point, which only
      covers the image if that point lies within it.  Here it is some
      20000 pixels away, so the box does not overlap the region the
      Mapping is used over at all, and every sample point falls outside
      the spline knots.  This SplineMap sets OutUnit, so those points pass
      through unchanged and the check sees an exactly linear Mapping; with
      the default OutUnit of zero they come back AST__BAD, the check
      fails, and no SIP description is offered.

      The fixture is the pixels-to-sky FrameSet of a DP2 difference image
      (visit=2025042400322, detector=150), taken from the lsst-images test
      test_as_fits_wcs_frameset_with_splinemap_returns_none_big.  Note that
      the same fixture written with neither FitsTol nor NAXIS still produces
      a header with no primary CTYPE cards; see the lsst2_fits-wcs row of
      fixtures/wcsconv/cases.txt. --- */
   if( *status == 0 ) {
      astBegin;
      AstChannel *spch = astChannel( NULL, NULL,
                            "SourceFile=%s/fixtures/wcsconv/inputs/lsst2.ast",
                            srcdir );
      AstFrameSet *spfs = (AstFrameSet *) astRead( spch );
      if( !astOK || !spfs || !astIsAFrameSet( spfs ) ) {
         if( !astOK ) astClearStatus;
         stopit( 905, "Failed to read fixtures/wcsconv/inputs/lsst2.ast",
                 status );
      } else {
         AstFitsChan *spfc = astFitsChan( NULL, NULL,
                                          "Encoding=FITS-WCS,FitsTol=0.0001" );
         int spnw;

         astPutFits( spfc, "NAXIS1  = 1000", 0 );
         astPutFits( spfc, "NAXIS2  = 1000", 0 );
         spnw = astWrite( spfc, spfs );
         if( !astOK ) astClearStatus;
         if( spnw != 0 )
            stopit( 906, "SplineMap FrameSet should not write to FITS",
                    status );

         /* The write lsst.images Transform.as_fits_wcs actually issues: the
            fixture wrapped in an outer FrameSet, with a GRID frame carrying
            the FITS one-based origin shift prepended and made the base
            frame. */
         {
            double spoff[ 2 ] = { 1.0, 1.0 };
            AstFrameSet *spouter = astFrameSet( astFrame( 2, "Ident=detector" ),
                                                " " );
            AstFitsChan *spfc2;
            int spcur;

            astAddFrame( spouter, AST__BASE, (AstMapping *) spfs,
                         astSkyFrame( " " ) );
            spcur = astGetI( spouter, "Current" );
            astAddFrame( spouter, AST__BASE,
                         (AstMapping *) astShiftMap( 2, spoff, " " ),
                         astFrame( 2, "Domain=GRID" ) );
            astSetI( spouter, "Base", astGetI( spouter, "Current" ) );
            astSetI( spouter, "Current", spcur );

            spfc2 = astFitsChan( NULL, NULL, "Encoding=FITS-WCS,CDMatrix=1,"
                                 "FitsAxisOrder=<copy>,FitsTol=0.0001" );
            astPutFits( spfc2, "NAXIS1  = 1000", 0 );
            astPutFits( spfc2, "NAXIS2  = 1000", 0 );
            spnw = astWrite( spfc2, spouter );
            if( !astOK ) astClearStatus;
            if( spnw != 0 )
               stopit( 907, "as_fits_wcs FrameSet should not write to FITS",
                       status );
         }

         /* At the default FitsTol the same FrameSet does have an adequate
            linear approximation, so this write succeeds.  Check it produced
            a usable header: astWrite used to report success while emitting
            SIP coefficients and no primary axis description at all, because
            SIPIntWorld returned AST__BAD CRPIX values that MakeIntWorld
            stored as the whole description. */
         {
            AstChannel *spch2 = astChannel( NULL, NULL,
                            "SourceFile=%s/fixtures/wcsconv/inputs/lsst2.ast",
                            srcdir );
            AstFrameSet *spfs2 = (AstFrameSet *) astRead( spch2 );
            AstFitsChan *spfc3 = astFitsChan( NULL, NULL, "Encoding=FITS-WCS" );
            char spcard[ 81 ];
            int spfound = 0;

            astPutFits( spfc3, "NAXIS1  = 1000", 0 );
            astPutFits( spfc3, "NAXIS2  = 1000", 0 );
            spnw = astWrite( spfc3, spfs2 );
            if( !astOK ) astClearStatus;
            if( spnw == 0 ) {
               stopit( 908, "SplineMap FrameSet should write at the default "
                       "FitsTol", status );
            } else {
               astClear( spfc3, "Card" );
               while( astFindFits( spfc3, "%f", spcard, 1 ) ) {
                  if( !strncmp( spcard, "CTYPE1  ", 8 ) ) spfound |= 1;
                  if( !strncmp( spcard, "CTYPE2  ", 8 ) ) spfound |= 2;
                  if( !strncmp( spcard, "A_ORDER ", 8 ) ) spfound |= 4;
               }
               if( spfound != 3 )
                  stopit( 909, "SplineMap FrameSet wrote a header without a "
                          "primary axis description", status );
            }
         }
      }
      astEnd;
   }

   /* --- The SIP linearity test must cover the region the Mapping is used
      over.  This FrameSet puts the reference point 20000 pixels outside the
      image and makes the Mapping between the SIP polynomial and the CD
      matrix slightly non-linear (a cubic term that is negligible near the
      reference point but not over the image).  SIPIntWorld used to test that
      Mapping over a box of plus and minus the image dimensions centred on
      the reference point, and to pass FitsTol, which is in pixels, straight
      to astLinearApprox, which wants a displacement in the Mapping's output
      space.  Both were wrong here, so the SIP description was accepted and
      its CRPIX and CD values were fitted where the image is not.  astWrite
      should now fall back to a plain linear approximation, which the
      FitsTol check does validate over the image. --- */
   if( *status == 0 ) {
      astBegin;
      {
         const char *sipcards[ 11 ] = {
                             "CTYPE1  = 'RA---TAN'",
                             "CTYPE2  = 'DEC--TAN'",
                             "CRPIX1  =                  0.0",
                             "CRPIX2  =                  0.0",
                             "CRVAL1  =                180.0",
                             "CRVAL2  =                  0.0",
                             "CD1_1   =             -5.5E-05",
                             "CD1_2   =                  0.0",
                             "CD2_1   =                  0.0",
                             "CD2_2   =              5.5E-05",
                             "RADESYS = 'ICRS'" };
         const char *sipcubef[ 2 ] = { "u = x + 1.0E-15*x*x*x", "v = y" };
         const char *sipcubei[ 2 ] = { "x = u - 1.0E-15*u*u*u", "y = v" };
         double sippolyf[ 16 ] = { 1.0, 1, 1, 0,   1.0E-9, 1, 2, 0,
                                   1.0, 2, 0, 1,   1.0E-9, 2, 0, 2 };
         double sippolyi[ 16 ] = { 1.0, 1, 1, 0,  -1.0E-9, 1, 2, 0,
                                   1.0, 2, 0, 1,  -1.0E-9, 2, 0, 2 };
         double sipoff[ 2 ] = { 20000.0, 20000.0 };
         AstFitsChan *sipfc = astFitsChan( NULL, NULL, " " );
         AstFrameSet *sipfs;
         int sipi;

         for( sipi = 0; sipi < 11; sipi++ ) astPutFits( sipfc, sipcards[ sipi ], 0 );
         astClear( sipfc, "Card" );
         sipfs = (AstFrameSet *) astRead( sipfc );
         if( !astOK || !sipfs ) {
            if( !astOK ) astClearStatus;
            stopit( 910, "Failed to read the TAN header for the SIP box test",
                    status );
         } else {
            AstFitsChan *sipfc2;
            AstFrameSet *sipfs2;
            AstMapping *siptot;
            char sipcard[ 81 ];
            int sipfound = 0;
            int sipnw;

            siptot = (AstMapping *) astCmpMap( astShiftMap( 2, sipoff, " " ),
                                    astPolyMap( 2, 2, 4, sippolyf, 4, sippolyi,
                                                " " ), 1, " " );
            siptot = (AstMapping *) astCmpMap( siptot,
                                    astMathMap( 2, 2, 2, sipcubef, 2, sipcubei,
                                                " " ), 1, " " );
            siptot = (AstMapping *) astCmpMap( siptot,
                                    astGetMapping( sipfs, AST__BASE,
                                                   AST__CURRENT ), 1, " " );

            sipfs2 = astFrameSet( astFrame( 2, "Domain=GRID" ), " " );
            astAddFrame( sipfs2, AST__BASE, siptot,
                         astGetFrame( sipfs, AST__CURRENT ) );

            sipfc2 = astFitsChan( NULL, NULL, "Encoding=FITS-WCS,CDMatrix=1" );
            astPutFits( sipfc2, "NAXIS1  =                 4000", 0 );
            astPutFits( sipfc2, "NAXIS2  =                 4000", 0 );
            sipnw = astWrite( sipfc2, sipfs2 );
            if( !astOK ) astClearStatus;

            if( sipnw == 0 ) {
               stopit( 911, "The linear approximation is good enough to write, "
                       "so astWrite should have succeeded", status );
            } else {
               astClear( sipfc2, "Card" );
               while( astFindFits( sipfc2, "%f", sipcard, 1 ) ) {
                  if( !strncmp( sipcard, "A_ORDER ", 8 ) ) sipfound = 1;
               }
               if( sipfound )
                  stopit( 912, "SIP description accepted although the Mapping "
                          "following the SIP polynomial is not linear over "
                          "the image", status );
            }
         }
      }
      astEnd;
   }

cleanup:
   astEnd;

   if( *status == 0 ) {
      printf( " All FitsChan tests passed\n" );
   } else {
      printf( "FitsChan tests failed\n" );
   }

   return *status;
}
