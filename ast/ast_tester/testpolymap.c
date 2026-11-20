/*
 *  Test the PolyMap class (PolyTran, PolyCoeffs, IterInverse).
 *  Converted from the Fortran test testpolymap.f.
 *  Direct conversion; no material differences from the Fortran original.
 */
#include "ast.h"
#include <stdio.h>
#include <math.h>

static void stopit( int i, int *status ) {
   if( *status != 0 ) return;
   printf( "Error %d\n", i );
   *status = 1;
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   int i, nco;
   double lbnd[] = { -1000.0, -1000.0 };
   double ubnd[] = { 1000.0, 1000.0 };
   double acc = 1.0e-7, errlim, maxacc = 1.0e-3;
   int maxord = 10;
   double xin[3], yin[3], xout[3], yout[3], xin2[3], yin2[3];
   double cofs[20];
   AstPolyMap *pm, *pm2;
   AstMapping *simplified;

   double coeff[] = { 1.0, 1, 0, 0,
                      2.0, 1, 1, 0,
                      1.0, 2, 0, 0,
                      3.0, 2, 0, 1 };

   double coeffb[] = { 1.0, 1, 0, 0,
                       0.5, 1, 0, 0,
                       2.0, 1, 1, 0,
                       1.0, 2, 0, 0,
                       3.0, 2, 0, 1,
                      -0.5, 2, 0, 1 };

   double coeff2[] = { 1.0, 1, 0, 0,
                       2.0, 1, 1, 0,
                       1.0, 1, 0, 1,
                       1.0, 2, 0, 0,
                       1.0, 2, 1, 0,
                       2.0, 2, 0, 1 };

   double coeff3[] = { -0.1,   1, 0, 0,
                        0.99,  1, 1, 0,
                        1.0e-4,1, 1, 1,
                       -0.1,   2, 0, 0,
                        0.99,  2, 0, 1,
                        1.0e-4,2, 1, 1 };

   double coeff_1d[] = { 1.0, 1, 0,
                         2.0, 1, 1 };

   double coeff_2in1out[] = { 2.0, 1, 2, 0,
                              3.0, 1, 0, 1 };

   errlim = 1000 * acc;

   astWatch( status );
   astBegin;

   /* Basic 2D PolyMap and PolyCoeffs. */
   pm = astPolyMap( 2, 2, 4, coeff, 0, coeff, " " );

   astPolyCoeffs( pm, 1, 0, NULL, &nco );
   if( nco != 4 ) stopit( -1, status );

   astPolyCoeffs( pm, 0, 0, NULL, &nco );
   if( nco != 0 ) stopit( -2, status );

   astPolyCoeffs( pm, 1, 20, cofs, &nco );
   if( nco != 4 ) stopit( -3, status );
   for( i = 0; i < 16; i++ ) {
      if( cofs[i] != coeff[i] ) stopit( -4, status );
   }

   /* PolyTran: fit inverse and test round-trip. */
   pm2 = astPolyTran( pm, 0, acc, maxacc, maxord, lbnd, ubnd );
   xin[0] = 1.0;  xin[1] = 100.0;  xin[2] = -50.0;
   yin[0] = 1.0;  yin[1] = 100.0;  yin[2] = -50.0;

   astTran2( pm2, 3, xin, yin, 1, xout, yout );
   astTran2( pm2, 3, xout, yout, 0, xin2, yin2 );
   for( i = 0; i < 3; i++ ) {
      if( fabs( xin[i] - xin2[i] ) > errlim ) stopit( 1, status );
      if( fabs( yin[i] - yin2[i] ) > errlim ) stopit( 2, status );
   }

   /* IterInverse round-trip. */
   astSetL( pm2, "IterInverse", 1 );
   astTran2( pm2, 3, xout, yout, 0, xin2, yin2 );
   for( i = 0; i < 3; i++ ) {
      if( fabs( xin[i] - xin2[i] ) > errlim ) stopit( 1001, status );
      if( fabs( yin[i] - yin2[i] ) > errlim ) stopit( 1002, status );
   }

   /* Linear PolyMap should simplify to WinMap. */
   simplified = astSimplify( pm );
   if( !astIsAWinMap( simplified ) ) stopit( 1003, status );
   xin[0] = 1.0; yin[0] = 2.0;
   astTran2( simplified, 1, xin, yin, 1, xout, yout );
   if( xout[0] != 3.0 || yout[0] != 7.0 ) stopit( 1004, status );

   /* PolyMap with extra terms should also simplify to WinMap. */
   pm = astPolyMap( 2, 2, 6, coeffb, 0, coeffb, " " );
   simplified = astSimplify( pm );
   if( !astIsAWinMap( simplified ) ) stopit( 1005, status );
   xin[0] = 1.0; yin[0] = 2.0;
   astTran2( simplified, 1, xin, yin, 1, xout, yout );
   if( xout[0] != 3.5 || yout[0] != 6.0 ) stopit( 1006, status );

   /* 1D PolyMap. */
   pm = astPolyMap( 1, 1, 2, coeff_1d, 0, coeff_1d, " " );
   pm2 = astPolyTran( pm, 0, acc, maxacc, maxord, lbnd, ubnd );
   xin[0] = 1.0; xin[1] = 100.0; xin[2] = -50.0;
   astTran1( pm2, 3, xin, 1, xout );
   astTran1( pm2, 3, xout, 0, xin2 );
   for( i = 0; i < 3; i++ ) {
      if( fabs( xin[i] - xin2[i] ) > errlim ) stopit( 3, status );
   }

   astSetL( pm2, "IterInverse", 1 );
   astTran1( pm2, 3, xout, 0, xin2 );
   for( i = 0; i < 3; i++ ) {
      if( fabs( xin[i] - xin2[i] ) > errlim ) stopit( 3001, status );
   }

   /* Non-linear 2D: simplify should remain PolyMap. */
   pm = astPolyMap( 2, 2, 6, coeff2, 0, coeff2, " " );
   simplified = astSimplify( pm );
   if( !astIsAPolyMap( simplified ) ) stopit( 3002, status );
   if( !astEqual( simplified, pm ) ) stopit( 3003, status );

   pm2 = astPolyTran( pm, 0, acc, maxacc, maxord, lbnd, ubnd );
   xin[0] = 1.0;  xin[1] = 100.0;  xin[2] = -50.0;
   yin[0] = 1.0;  yin[1] = 100.0;  yin[2] = -50.0;
   astTran2( pm2, 3, xin, yin, 1, xout, yout );
   astTran2( pm2, 3, xout, yout, 0, xin2, yin2 );
   for( i = 0; i < 3; i++ ) {
      if( fabs( xin[i] - xin2[i] ) > errlim ) stopit( 4, status );
      if( fabs( yin[i] - yin2[i] ) > errlim ) stopit( 5, status );
   }

   astSetL( pm2, "IterInverse", 1 );
   astTran2( pm2, 3, xout, yout, 0, xin2, yin2 );
   for( i = 0; i < 3; i++ ) {
      if( fabs( xin[i] - xin2[i] ) > errlim ) stopit( 4001, status );
      if( fabs( yin[i] - yin2[i] ) > errlim ) stopit( 5001, status );
   }

   /* Another 2D non-linear PolyMap. */
   pm = astPolyMap( 2, 2, 6, coeff3, 0, coeff3, " " );
   pm2 = astPolyTran( pm, 0, acc, maxacc, maxord, lbnd, ubnd );
   xin[0] = 1.0;  xin[1] = 100.0;  xin[2] = -50.0;
   yin[0] = 1.0;  yin[1] = 100.0;  yin[2] = -50.0;
   astTran2( pm2, 3, xin, yin, 1, xout, yout );
   astTran2( pm2, 3, xout, yout, 0, xin2, yin2 );
   for( i = 0; i < 3; i++ ) {
      if( fabs( xin[i] - xin2[i] ) > errlim ) stopit( 6, status );
      if( fabs( yin[i] - yin2[i] ) > errlim ) stopit( 7, status );
   }

   astSetL( pm2, "IterInverse", 1 );
   astTran2( pm2, 3, xout, yout, 0, xin2, yin2 );
   for( i = 0; i < 3; i++ ) {
      if( fabs( xin[i] - xin2[i] ) > errlim ) stopit( 6001, status );
      if( fabs( yin[i] - yin2[i] ) > errlim ) stopit( 7001, status );
   }

   /* IterInverse attribute behaviour. */
   if( !astGetL( pm, "TranForward" ) ) stopit( 8001, status );
   if( !astGetL( pm, "IterInverse" ) ) stopit( 8002, status );
   if( !astGetL( pm, "TranInverse" ) ) stopit( 8003, status );

   astSetL( pm, "IterInverse", 0 );
   if( !astGetL( pm, "TranForward" ) ) stopit( 8004, status );
   if( astGetL( pm, "IterInverse" ) ) stopit( 8005, status );
   if( astGetL( pm, "TranInverse" ) ) stopit( 8006, status );

   astInvert( pm );
   if( astGetL( pm, "TranForward" ) ) stopit( 8007, status );
   if( astGetL( pm, "IterInverse" ) ) stopit( 8008, status );
   if( !astGetL( pm, "TranInverse" ) ) stopit( 8009, status );

   astSetL( pm, "IterInverse", 1 );
   if( !astGetL( pm, "TranForward" ) ) stopit( 8010, status );
   if( !astGetL( pm, "IterInverse" ) ) stopit( 8011, status );
   if( !astGetL( pm, "TranInverse" ) ) stopit( 8012, status );

   astInvert( pm );
   if( !astGetL( pm, "TranForward" ) ) stopit( 8013, status );
   if( !astGetL( pm, "IterInverse" ) ) stopit( 8014, status );
   if( !astGetL( pm, "TranInverse" ) ) stopit( 8015, status );

   /* A PolyMap with unequal Nin and Nout cannot use an iterative inverse,
      so IterInverse must default to zero for a forward-only 2-in 1-out
      PolyMap, and the map must not claim to define an inverse
      transformation. */
   pm2 = astPolyMap( 2, 1, 2, coeff_2in1out, 0, NULL, " " );
   if( astGetL( pm2, "IterInverse" ) ) stopit( 8016, status );
   if( astGetL( pm2, "TranInverse" ) ) stopit( 8017, status );
   if( !astGetL( pm2, "TranForward" ) ) stopit( 8018, status );

   astEnd;
   astFlushMemory( 1 );

   if( *status == 0 ) {
      printf( " All PolyMap tests passed\n" );
   } else {
      printf( "PolyMap tests failed\n" );
   }
   return *status;
}
