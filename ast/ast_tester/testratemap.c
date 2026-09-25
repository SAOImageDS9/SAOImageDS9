/*
 *  Test the RateMap class.
 *  Converted from the Fortran test testratemap.f.
 *  Direct conversion; no material differences from the Fortran original.
 */
#include "ast.h"
#include <stdio.h>
#include <math.h>

static void stopit( int i, double r, int *status ) {
   if( *status != 0 ) return;
   printf( "Error %d: %g\n", i, r );
   *status = 1;
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   int outp[4], inp[4];
   double at[4], r, mat[4];
   AstShiftMap *c1s;
   AstMatrixMap *c2m;
   AstMapping *c3, *c4, *m;
   AstPermMap *c1p;
   AstZoomMap *c2z;
   AstRateMap *rm;

   astWatch( status );

   at[0] = 10.0;
   at[1] = 1.2e6;

   mat[0] = -1.0;
   mat[1] = 1.0;
   c1s = astShiftMap( 2, mat, " " );
   mat[0] = 1.0; mat[1] = 2.0; mat[2] = -2.0; mat[3] = 3.0;
   c2m = astMatrixMap( 2, 2, 0, mat, " " );
   c3 = (AstMapping *)astCmpMap( c1s, c2m, 0, " " );

   outp[0] = 3; outp[1] = 4; outp[2] = 1; outp[3] = 2;
   inp[0]  = 3; inp[1]  = 4; inp[2]  = 1; inp[3]  = 2;
   { double zero = 0.0;
   c1p = astPermMap( 4, inp, 4, outp, &zero, " " ); }
   c2z = astZoomMap( 4, 0.25, " " );
   astInvert( c2z );

   c4 = (AstMapping *)astCmpMap( c1p, c2z, 1, " " );
   astInvert( c4 );

   m = (AstMapping *)astCmpMap( c3, c4, 1, " " );

   astInvert( c2z );
   astInvert( c3 );
   astInvert( c4 );

   rm = astRateMap( m, 1, 1, " " );
   at[0] = 1.0; at[1] = 2.0; at[2] = 3.0; at[3] = 4.0;
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 0.0 ) stopit( 1, r, status );
   if( !astGetL( rm, "TranForward" ) ) stopit( 2, r, status );
   if( astGetL( rm, "TranInverse" ) ) stopit( 3, r, status );

   rm = astRateMap( m, 1, 2, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 0.0 ) stopit( 4, r, status );

   rm = astRateMap( m, 1, 3, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( fabs( r - 0.25 ) > 1.0e-6 ) stopit( 5, r, status );

   rm = astRateMap( m, 1, 4, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 0.5 ) stopit( 6, r, status );

   rm = astRateMap( m, 3, 1, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 0.25 ) stopit( 7, r, status );

   rm = astRateMap( m, 3, 2, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 0.0 ) stopit( 8, r, status );

   rm = astRateMap( m, 3, 3, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 0.0 ) stopit( 9, r, status );

   rm = astRateMap( m, 3, 4, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 0.0 ) stopit( 10, r, status );

   /* Test with inverted mapping. */
   astInvert( m );

   rm = astRateMap( m, 1, 1, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 0.0 ) stopit( 11, r, status );

   rm = astRateMap( m, 1, 2, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 0.0 ) stopit( 12, r, status );

   rm = astRateMap( m, 1, 3, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 4.0 ) stopit( 13, r, status );

   rm = astRateMap( m, 1, 4, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 0.0 ) stopit( 14, r, status );

   rm = astRateMap( m, 3, 1, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( fabs( r - 12.0/7.0 ) > 1.0e-6 ) stopit( 15, r, status );

   rm = astRateMap( m, 3, 2, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( fabs( r - (-8.0/7.0) ) > 1.0e-6 ) stopit( 16, r, status );

   rm = astRateMap( m, 3, 3, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 0.0 ) stopit( 17, r, status );

   rm = astRateMap( m, 3, 4, " " );
   astTranN( rm, 1, 4, 1, at, 1, 1, 1, &r );
   if( r != 0.0 ) stopit( 18, r, status );

   if( *status == 0 ) {
      printf( " All RateMap tests passed\n" );
   } else {
      printf( "RateMap tests failed\n" );
   }
   return *status;
}
