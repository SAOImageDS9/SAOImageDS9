/*
 *  Test the astRate function.
 *  Converted from the Fortran test testrate.f.
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
   double at[4], r, mat[4], b1[2], b2[2], a1[2], a2[4], zero = 0.0;
   AstMapping *m;
   AstMapping *c1, *c2, *c3, *c4;

   astWatch( status );

   at[0] = 10.0;
   at[1] = 1.2e6;

   /* UnitMap */
   m = (AstMapping *)astUnitMap( 2, " " );
   r = astRate( m, at, 1, 1 ); if( r != 1.0 ) stopit( 1, r, status );
   r = astRate( m, at, 2, 1 ); if( r != 0.0 ) stopit( 2, r, status );
   astInvert( m );
   r = astRate( m, at, 1, 1 ); if( r != 1.0 ) stopit( 202, r, status );

   /* ZoomMap */
   m = (AstMapping *)astZoomMap( 2, 2.0, " " );
   r = astRate( m, at, 1, 1 ); if( r != 2.0 ) stopit( 3, r, status );
   r = astRate( m, at, 2, 1 ); if( r != 0.0 ) stopit( 4, r, status );
   astInvert( m );
   r = astRate( m, at, 1, 1 ); if( r != 0.5 ) stopit( 402, r, status );

   /* MatrixMap (unit) */
   m = (AstMapping *)astMatrixMap( 2, 2, 2, mat, " " );
   r = astRate( m, at, 1, 1 ); if( r != 1.0 ) stopit( 5, r, status );
   r = astRate( m, at, 2, 1 ); if( r != 0.0 ) stopit( 6, r, status );
   astInvert( m );
   r = astRate( m, at, 1, 1 ); if( r != 1.0 ) stopit( 602, r, status );
   r = astRate( m, at, 1, 2 ); if( r != 0.0 ) stopit( 603, r, status );

   /* MatrixMap (diagonal) */
   mat[0] = -2.0; mat[1] = 1.5;
   m = (AstMapping *)astMatrixMap( 2, 2, 1, mat, " " );
   r = astRate( m, at, 1, 1 ); if( r != -2.0 ) stopit( 7, r, status );
   r = astRate( m, at, 2, 2 ); if( r != 1.5 ) stopit( 8, r, status );
   r = astRate( m, at, 1, 2 ); if( r != 0.0 ) stopit( 9, r, status );
   r = astRate( m, at, 2, 1 ); if( r != 0.0 ) stopit( 10, r, status );
   astInvert( m );
   r = astRate( m, at, 1, 1 ); if( r != -0.5 ) stopit( 1002, r, status );

   /* MatrixMap (full) */
   mat[0] = 1.2; mat[1] = 1.6; mat[2] = -1.6; mat[3] = 2.2;
   m = (AstMapping *)astMatrixMap( 2, 2, 0, mat, " " );
   r = astRate( m, at, 1, 1 ); if( r != 1.2 ) stopit( 11, r, status );
   r = astRate( m, at, 2, 2 ); if( r != 2.2 ) stopit( 12, r, status );
   r = astRate( m, at, 1, 2 ); if( r != 1.6 ) stopit( 13, r, status );
   r = astRate( m, at, 2, 1 ); if( r != -1.6 ) stopit( 14, r, status );
   astInvert( m );
   r = astRate( m, at, 1, 1 );
   if( fabs( r - 0.423076923 ) > 1.0e-6 ) stopit( 15, r, status );
   r = astRate( m, at, 2, 2 );
   if( fabs( r - 0.230769231 ) > 1.0e-6 ) stopit( 16, r, status );
   r = astRate( m, at, 1, 2 );
   if( fabs( r + 0.307692308 ) > 1.0e-6 ) stopit( 17, r, status );
   r = astRate( m, at, 2, 1 );
   if( fabs( r - 0.307692308 ) > 1.0e-6 ) stopit( 18, r, status );

   /* ShiftMap */
   mat[0] = -1.2; mat[1] = 1.2;
   m = (AstMapping *)astShiftMap( 2, mat, " " );
   r = astRate( m, at, 1, 1 ); if( r != 1.0 ) stopit( 20, r, status );
   r = astRate( m, at, 2, 1 ); if( r != 0.0 ) stopit( 21, r, status );
   astInvert( m );
   r = astRate( m, at, 1, 1 ); if( r != 1.0 ) stopit( 23, r, status );

   /* WinMap */
   a1[0] = 0.0; a1[1] = 0.0;
   a2[0] = 1.0; a2[1] = 1.0;
   b1[0] = 0.5; b1[1] = 0.5;
   b2[0] = 2.5; b2[1] = 2.5;
   m = (AstMapping *)astWinMap( 2, a1, a2, b1, b2, " " );
   r = astRate( m, at, 1, 1 ); if( r != 2.0 ) stopit( 24, r, status );
   r = astRate( m, at, 2, 1 ); if( r != 0.0 ) stopit( 25, r, status );
   r = astRate( m, at, 2, 2 ); if( r != 2.0 ) stopit( 26, r, status );
   r = astRate( m, at, 1, 2 ); if( r != 0.0 ) stopit( 27, r, status );
   astInvert( m );
   r = astRate( m, at, 1, 1 ); if( r != 0.5 ) stopit( 29, r, status );
   r = astRate( m, at, 2, 1 ); if( r != 0.0 ) stopit( 30, r, status );
   r = astRate( m, at, 2, 2 ); if( r != 0.5 ) stopit( 31, r, status );
   r = astRate( m, at, 1, 2 ); if( r != 0.0 ) stopit( 32, r, status );

   /* PermMap */
   outp[0] = 2; outp[1] = 1;
   inp[0] = 1;  inp[1] = 2;
   m = (AstMapping *)astPermMap( 2, inp, 2, outp, &zero, " " );
   r = astRate( m, at, 1, 1 ); if( r != 0.0 ) stopit( 34, r, status );
   r = astRate( m, at, 2, 1 ); if( r != 1.0 ) stopit( 35, r, status );
   r = astRate( m, at, 2, 2 ); if( r != 0.0 ) stopit( 37, r, status );
   r = astRate( m, at, 1, 2 ); if( r != 1.0 ) stopit( 38, r, status );
   astInvert( m );
   r = astRate( m, at, 1, 1 ); if( r != 1.0 ) stopit( 40, r, status );
   r = astRate( m, at, 2, 1 ); if( r != 0.0 ) stopit( 41, r, status );
   r = astRate( m, at, 2, 2 ); if( r != 1.0 ) stopit( 43, r, status );
   r = astRate( m, at, 1, 2 ); if( r != 0.0 ) stopit( 44, r, status );

   /* TranMap */
   a1[0] = 0.0; a1[1] = 0.0;
   a2[0] = 1.0; a2[1] = 1.0;
   b1[0] = 0.5; b1[1] = 0.5;
   b2[0] = 2.5; b2[1] = 2.5;
   c1 = (AstMapping *)astWinMap( 2, a1, a2, b1, b2, " " );
   mat[0] = 1.2; mat[1] = 1.6; mat[2] = -1.6; mat[3] = 2.2;
   c2 = (AstMapping *)astMatrixMap( 2, 2, 0, mat, " " );
   m = (AstMapping *)astTranMap( c1, c2, " " );
   r = astRate( m, at, 1, 1 ); if( r != 2.0 ) stopit( 46, r, status );
   r = astRate( m, at, 2, 1 ); if( r != 0.0 ) stopit( 47, r, status );
   r = astRate( m, at, 2, 2 ); if( r != 2.0 ) stopit( 48, r, status );
   r = astRate( m, at, 1, 2 ); if( r != 0.0 ) stopit( 49, r, status );
   astInvert( m );
   r = astRate( m, at, 1, 1 );
   if( fabs( r - 0.423076923 ) > 1.0e-6 ) stopit( 51, r, status );
   r = astRate( m, at, 2, 2 );
   if( fabs( r - 0.230769231 ) > 1.0e-6 ) stopit( 52, r, status );
   r = astRate( m, at, 1, 2 );
   if( fabs( r + 0.307692308 ) > 1.0e-6 ) stopit( 53, r, status );
   r = astRate( m, at, 2, 1 );
   if( fabs( r - 0.307692308 ) > 1.0e-6 ) stopit( 54, r, status );

   /* CmpMap */
   mat[0] = -1.0; mat[1] = 1.0;
   c1 = (AstMapping *)astShiftMap( 2, mat, " " );
   mat[0] = 1.0; mat[1] = 2.0; mat[2] = -2.0; mat[3] = 3.0;
   c2 = (AstMapping *)astMatrixMap( 2, 2, 0, mat, " " );
   c3 = (AstMapping *)astCmpMap( c1, c2, 0, " " );

   outp[0] = 3; outp[1] = 4; outp[2] = 1; outp[3] = 2;
   inp[0] = 3;  inp[1] = 4;  inp[2] = 1;  inp[3] = 2;
   c1 = (AstMapping *)astPermMap( 4, inp, 4, outp, &zero, " " );
   c2 = (AstMapping *)astZoomMap( 4, 0.25, " " );
   astInvert( c2 );
   c4 = (AstMapping *)astCmpMap( c1, c2, 1, " " );
   astInvert( c4 );
   m = (AstMapping *)astCmpMap( c3, c4, 1, " " );
   astInvert( c2 );
   astInvert( c3 );
   astInvert( c4 );

   at[0] = 1.0; at[1] = 2.0; at[2] = 3.0; at[3] = 4.0;
   r = astRate( m, at, 1, 1 ); if( r != 0.0 ) stopit( 55, r, status );
   r = astRate( m, at, 1, 2 ); if( r != 0.0 ) stopit( 56, r, status );
   r = astRate( m, at, 1, 3 );
   if( fabs( r - 0.25 ) > 1.0e-6 ) stopit( 57, r, status );
   r = astRate( m, at, 1, 4 ); if( r != 0.5 ) stopit( 58, r, status );
   r = astRate( m, at, 3, 1 ); if( r != 0.25 ) stopit( 59, r, status );
   r = astRate( m, at, 3, 2 ); if( r != 0.0 ) stopit( 60, r, status );
   r = astRate( m, at, 3, 3 ); if( r != 0.0 ) stopit( 61, r, status );
   r = astRate( m, at, 3, 4 ); if( r != 0.0 ) stopit( 62, r, status );

   astInvert( m );
   r = astRate( m, at, 1, 1 ); if( r != 0.0 ) stopit( 63, r, status );
   r = astRate( m, at, 1, 2 ); if( r != 0.0 ) stopit( 64, r, status );
   r = astRate( m, at, 1, 3 ); if( r != 4.0 ) stopit( 65, r, status );
   r = astRate( m, at, 1, 4 ); if( r != 0.0 ) stopit( 66, r, status );
   r = astRate( m, at, 3, 1 );
   if( fabs( r - 12.0/7.0 ) > 1.0e-6 ) stopit( 67, r, status );
   r = astRate( m, at, 3, 2 );
   if( fabs( r - (-8.0/7.0) ) > 1.0e-6 ) stopit( 68, r, status );
   r = astRate( m, at, 3, 3 ); if( r != 0.0 ) stopit( 69, r, status );
   r = astRate( m, at, 3, 4 ); if( r != 0.0 ) stopit( 70, r, status );

   if( *status == 0 ) {
      printf( " All astRate tests passed\n" );
   } else {
      printf( "astRate tests failed\n" );
   }
   return *status;
}
