/*
 *  Test the astTranGrid function.
 *  Converted from the Fortran test testtrangrid.f.
 *  Direct conversion; no material differences from the Fortran original.
 */
#include "ast.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

#define MAXPNT 50000

static void stopit( int itest, int j, int i, double got, int expected,
                    int *status ) {
   if( *status != 0 ) return;
   printf( "Test %d failed at point %d axis %d: %g should be %d\n",
           itest, j, i, got, expected );
   *status = 1;
}

static void testgrid( AstMapping *map, int nin, const int lbnd[],
                      const int ubnd[], double tol, int maxpix,
                      int fwd, int nout, int outdim, int itest,
                      int *status ) {
   double out[MAXPNT * 3], in[MAXPNT * 3];
   int pos[3], i, j;

   if( *status != 0 ) return;
   if( outdim > MAXPNT ) {
      printf( "Array length exceeded\n" );
      *status = 1;
      return;
   }

   astTranGrid( map, nin, lbnd, ubnd, tol, maxpix, fwd, nout, MAXPNT, out );
   astTranN( map, outdim, nout, MAXPNT, out, !fwd, nin, MAXPNT, in );

   if( !astOK ) return;

   for( i = 0; i < nin; i++ ) pos[i] = lbnd[i];

   for( j = 0; j < outdim; j++ ) {
      for( i = 0; i < nin; i++ ) {
         double val = in[j + MAXPNT * i];
         if( pos[i] != 0 ) {
            if( fabs( val - pos[i] ) > 1.0e-6 * fabs( 0.5 * ( val + pos[i] ) ) ) {
               stopit( itest, j, i, val, pos[i], status );
               return;
            }
         } else {
            if( fabs( val ) > 1.0e-5 ) {
               stopit( itest, j, i, val, pos[i], status );
               return;
            }
         }
      }

      pos[0]++;
      if( pos[0] > ubnd[0] ) {
         pos[0] = lbnd[0];
         if( nin > 1 ) {
            pos[1]++;
            if( pos[1] > ubnd[1] ) {
               pos[1] = lbnd[1];
               if( nin > 2 ) pos[2]++;
            }
         }
      }
   }
}

static void testgridpair( AstMapping *map, double tol, int maxpix,
                          int itest, int *status ) {
   int lbnd[] = { -6, 0, 10 };
   int ubnd[] = { 15, 30, 40 };
   double dlbnd[3], dubnd[3], dlbndi[3], dubndi[3], xl[3], xu[3];
   int lbndi[3], ubndi[3];
   int nin, nout, i, outdim;

   if( *status != 0 ) return;

   nin = astGetI( map, "Nin" );
   nout = astGetI( map, "Nout" );

   outdim = 1;
   for( i = 0; i < nin; i++ ) {
      outdim *= ( ubnd[i] - lbnd[i] + 1 );
      dlbnd[i] = lbnd[i];
      dubnd[i] = ubnd[i];
   }
   testgrid( map, nin, lbnd, ubnd, tol, maxpix, 1, nout, outdim,
             itest, status );

   outdim = 1;
   for( i = 0; i < nout; i++ ) {
      astMapBox( map, dlbnd, dubnd, 1, i + 1, &dlbndi[i], &dubndi[i],
                 xl, xu );
      lbndi[i] = (int)dlbndi[i];
      ubndi[i] = (int)dubndi[i];
      outdim *= ( ubndi[i] - lbndi[i] + 1 );
   }
   testgrid( map, nout, lbndi, ubndi, tol, maxpix, 0, nin, outdim,
             itest + 1, status );
}

static void testmap( AstMapping *map, int itest, double tol, int *status ) {
   if( *status != 0 ) return;
   testgridpair( map, tol, 100, itest * 10, status );
   testgridpair( map, 0.0, 100, itest * 10 + 2, status );
   testgridpair( map, tol, 4, itest * 10 + 4, status );
   testgridpair( map, 0.0, 4, itest * 10 + 6, status );
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   double mat[4], a1[2], a2[2], b1[2], b2[2], zero = 0.0;
   int outp[3], inp[3], i;
   AstMapping *m;
   AstFitsChan *fc;
   AstFrameSet *fs;
   char *cards[] = {
      "CTYPE1  = 'RA---TAN'",
      "CTYPE2  = 'DEC--TAN'",
      "CRPIX1  = 20",
      "CRPIX2  = 20",
      "CRVAL1  = 0.0",
      "CRVAL2  = 0.0",
      "CROTA1  = 30.0",
      "CDELT1  = -0.001",
      "CDELT2  = 0.001"
   };

   astWatch( status );
   astBegin;

   /* UnitMap */
   m = (AstMapping *)astUnitMap( 2, " " );
   testmap( m, 1, 0.5, status );

   /* ZoomMap */
   m = (AstMapping *)astZoomMap( 2, 2.0, " " );
   testmap( m, 2, 0.5, status );

   /* MatrixMap (unit) */
   m = (AstMapping *)astMatrixMap( 2, 2, 2, mat, " " );
   testmap( m, 3, 0.5, status );

   /* PermMap */
   outp[0] = 2; outp[1] = 1;
   inp[0] = 2;  inp[1] = 1;
   m = (AstMapping *)astPermMap( 2, inp, 2, outp, &zero, " " );
   testmap( m, 4, 0.5, status );

   /* TranMap */
   a1[0] = 0.0; a1[1] = 0.0;
   a2[0] = 1.0; a2[1] = 1.0;
   b1[0] = 0.5; b1[1] = 0.5;
   b2[0] = 2.5; b2[1] = 2.5;
   { AstMapping *c1 = (AstMapping *)astWinMap( 2, a1, a2, b1, b2, " " );
     AstMapping *c2 = astCopy( c1 );
     m = (AstMapping *)astTranMap( c1, c2, " " ); }
   testmap( m, 5, 0.5, status );

   /* 3D CmpMap */
   { double sh = -1.0;
     AstMapping *c1 = (AstMapping *)astShiftMap( 1, &sh, " " );
     mat[0] = 1.0; mat[1] = 2.0; mat[2] = -2.0; mat[3] = 3.0;
     AstMapping *c2 = (AstMapping *)astMatrixMap( 2, 2, 0, mat, " " );
     AstMapping *c3 = (AstMapping *)astCmpMap( c1, c2, 0, " " );

     outp[0] = 3; outp[1] = 2; outp[2] = 1;
     inp[0] = 3;  inp[1] = 2;  inp[2] = 1;
     c1 = (AstMapping *)astPermMap( 3, inp, 3, outp, &zero, " " );
     c2 = (AstMapping *)astZoomMap( 3, 0.25, " " );
     astInvert( c2 );
     AstMapping *c4 = (AstMapping *)astCmpMap( c1, c2, 1, " " );
     astInvert( c4 );
     m = (AstMapping *)astCmpMap( c3, c4, 1, " " ); }
   testmap( m, 6, 0.5, status );

   /* 1D non-linear (MathMap) */
   { const char *fwd = "y=x**3";
     const char *inv = "x=sign((abs(y)**(1/3)),y)";
     m = (AstMapping *)astMathMap( 1, 1, 1, &fwd, 1, &inv, " " ); }
   testmap( m, 7, 0.0001, status );

   /* FITS-WCS pixel->sky mapping */
   fc = astFitsChan( NULL, NULL, " " );
   for( i = 0; i < 9; i++ )
      astPutFits( fc, cards[i], 0 );
   astClear( fc, "Card" );
   fs = (AstFrameSet *)astRead( fc );
   testmap( (AstMapping *)fs, 8, 0.0001, status );

   astEnd;

   if( *status == 0 ) {
      printf( " All astTranGrid tests passed\n" );
   } else {
      printf( "astTranGrid tests failed\n" );
   }
   return *status;
}
