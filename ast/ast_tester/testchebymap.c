/*
 *  Test the ChebyMap class.
 *  Converted from the Fortran test testchebymap.f.
 *
 *  The checkdump round-trip uses Channel SinkFile/SourceFile instead of
 *  Fortran channel source/sink callbacks (functionally equivalent).
 */
#include "ast.h"
#include <stdio.h>
#include <math.h>

static void stopit( int i, int *status ) {
   if( *status != 0 ) return;
   printf( "Error %d\n", i );
   *status = 1;
}

static void checkdump( AstObject *obj, int *status ) {
   AstChannel *ch;
   AstObject *result;
   if( *status != 0 ) return;
   ch = astChannel( NULL, NULL, " " );
   astSet( ch, "SinkFile=fred.tmp" );
   if( astWrite( ch, obj ) != 1 ) { stopit( -1, status ); return; }
   astClear( ch, "SinkFile" );
   astSet( ch, "SourceFile=fred.tmp" );
   result = astRead( ch );
   if( !result ) { stopit( -2, status ); return; }
   astClear( ch, "SourceFile" );
   if( !astEqual( result, obj ) ) stopit( -3, status );
   remove( "fred.tmp" );
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   int i, j, nco;
   double lbnd[2], ubnd[2], dval;
   double dlbnd[2], dubnd[2], tlbnd[2], tubnd[2];
   double xin[5], xout[5], xrec[5], yrec[5], work[5];
   double yin[5], yout[5], xi, yi, xv, yv;
   double cofs[100];
   AstChebyMap *cm, *cm2, *cm3;

   /*  f(x) = 1.5*T0(x') - 1.0*T2(x') + 2.0*T3(x') + 1.3*T4(x') */
   double coeffs_1[] = { 1.5, 1, 0,
                         -1.0, 1, 2,
                          2.0, 1, 3,
                          1.3, 1, 4 };

   /* f(x) = 1.0*T0(x') - 2.0*T1(x') */
   double coeffs_2[] = { 1.0, 1, 0,
                         -2.0, 1, 1 };

   /* fx(x,y) = 1.0*T0(x')T0(y') - 2.0*T1(x')T2(y') + T1(y')
      fy(x,y) = 1.5*T0(x')T0(y') - 2.5*T1(x')T2(y') */
   double coeffs_3[] = { 1.0, 1, 0, 0,
                         -2.0, 1, 1, 2,
                          1.0, 1, 0, 1,
                          1.5, 2, 0, 0,
                         -2.5, 2, 1, 2 };

   /* fx(x,y) = T1(x') + T1(y')
      fy(x,y) = T1(x') - T1(y') */
   double coeffs_4[] = { 1.0, 1, 1, 0,
                         1.0, 1, 0, 1,
                         1.0, 2, 1, 0,
                        -1.0, 2, 0, 1 };

   astWatch( status );
   astBegin;

   lbnd[0] = -1.0; lbnd[1] = -1.0;
   ubnd[0] = 1.0;  ubnd[1] = 1.0;

   xin[0] = -1.0; xin[1] = -0.5; xin[2] = 0.0; xin[3] = 0.5; xin[4] = 1.0;

   /* 1D order 1: constant = 1.5 */
   cm = astChebyMap( 1, 1, 1, coeffs_1, 0, NULL, lbnd, ubnd, lbnd, ubnd, " " );
   astTran1( cm, 5, xin, 1, xout );
   for( i = 0; i < 5; i++ )
      if( xout[i] != 1.5 ) stopit( 0, status );

   /* 1D order 3: 2.5 - 2*x^2 */
   cm = astChebyMap( 1, 1, 2, coeffs_1, 0, NULL, lbnd, ubnd, lbnd, ubnd, " " );
   astTran1( cm, 5, xin, 1, xout );
   for( i = 0; i < 5; i++ ) {
      dval = 2.5 - 2.0*xin[i]*xin[i];
      if( xout[i] != dval ) stopit( 1, status );
   }

   /* 1D order 4: 2.5 - 6x - 2x^2 + 8x^3 */
   cm = astChebyMap( 1, 1, 3, coeffs_1, 0, NULL, lbnd, ubnd, lbnd, ubnd, " " );
   astTran1( cm, 5, xin, 1, xout );
   for( i = 0; i < 5; i++ ) {
      dval = 2.5 - 6.0*xin[i] - 2.0*xin[i]*xin[i] + 8.0*xin[i]*xin[i]*xin[i];
      if( xout[i] != dval ) stopit( 2, status );
   }

   /* 1D order 5: full Chebyshev evaluation */
   cm = astChebyMap( 1, 1, 4, coeffs_1, 0, NULL, lbnd, ubnd, lbnd, ubnd, " " );
   astTran1( cm, 5, xin, 1, xout );
   for( i = 0; i < 5; i++ ) {
      work[0] = 1.0;
      work[1] = xin[i];
      for( j = 2; j < 5; j++ )
         work[j] = 2.0*xin[i]*work[j-1] - work[j-2];
      dval = 1.5*work[0] - 1.0*work[2] + 2.0*work[3] + 1.3*work[4];
      if( xout[i] != dval ) stopit( 3, status );
   }

   if( astGetL( cm, "IterInverse" ) ) stopit( 4, status );

   /* PolyTran on 1D ChebyMap, order 2: 1 - 2*x */
   lbnd[0] = -1.0; ubnd[0] = 1.0;
   cm = astChebyMap( 1, 1, 2, coeffs_2, 0, NULL, lbnd, ubnd, lbnd, ubnd, " " );
   cm2 = astPolyTran( cm, 0, 0.01, 0.01, 5, lbnd, ubnd );
   if( !cm2 ) {
      stopit( 5, status );
   } else {
      xin[0] = -1.0; xin[1] = -0.5; xin[2] = 0.0; xin[3] = 0.5; xin[4] = 1.0;
      astTran1( cm2, 5, xin, 1, xout );
      astTran1( cm2, 5, xout, 0, xrec );
      for( i = 0; i < 5; i++ )
         if( fabs( xrec[i] - xin[i] ) > 1.0e-3*fabs( xin[i] ) )
            stopit( 6, status );

      astChebyDomain( cm2, 0, dlbnd, dubnd );
      if( dlbnd[0] != -1.0 ) stopit( 501, status );
      if( dubnd[0] != 3.0 ) stopit( 502, status );

      astPolyCoeffs( cm2, 0, 100, cofs, &nco );
      if( nco != 1 ) stopit( 503, status );
      if( fabs( cofs[0] + 1.0 ) > 1.0e-10 ) stopit( 504, status );
      if( fabs( cofs[1] - 1.0 ) > 1.0e-10 ) stopit( 505, status );
      if( fabs( cofs[2] - 1.0 ) > 1.0e-10 ) stopit( 506, status );
   }

   /* PolyTran on 1D ChebyMap, order 5 with wider domain */
   lbnd[0] = -100.0; ubnd[0] = 100.0;
   cm = astChebyMap( 1, 1, 4, coeffs_1, 0, NULL, lbnd, ubnd, lbnd, ubnd, " " );
   { double fit_lbnd = -5.0, fit_ubnd = 50.0;
   cm2 = astPolyTran( cm, 0, 0.01, 0.01, 10, &fit_lbnd, &fit_ubnd ); }
   if( !cm2 ) {
      stopit( 7, status );
   } else {
      xin[0] = 0.0; xin[1] = 10.0; xin[2] = 20.0; xin[3] = 30.0; xin[4] = 40.0;
      astTran1( cm2, 5, xin, 1, xout );
      astTran1( cm2, 5, xout, 0, xrec );
      for( i = 0; i < 5; i++ )
         if( fabs( xrec[i] - xin[i] ) > 0.01 ) stopit( 8, status );
   }

   /* astEqual and astCopy */
   cm3 = astCopy( cm2 );
   if( !astEqual( cm2, cm3 ) ) stopit( 9, status );

   checkdump( (AstObject *)cm2, status );

   /* Simple 2D ChebyMap: fx = T1(x')+T1(y'), fy = T1(x')-T1(y') */
   lbnd[0] = -1.0; lbnd[1] = -1.0;
   ubnd[0] = 1.0;  ubnd[1] = 1.0;
   cm = astChebyMap( 2, 2, 4, coeffs_4, 0, NULL, lbnd, ubnd, lbnd, ubnd, " " );

   cm2 = astCopy( cm );
   astInvert( cm2 );
   cm3 = (AstChebyMap *)astSimplify( astCmpMap( cm, cm2, 1, " " ) );
   if( !astIsAUnitMap( cm3 ) ) stopit( 1000, status );

   xin[0] = 0.5; xin[1] = 0.0; xin[2] = -0.5; xin[3] = 0.0;
   yin[0] = 0.0; yin[1] = 0.5; yin[2] = 0.0;  yin[3] = -0.5;
   astTran2( cm, 4, xin, yin, 1, xout, yout );
   for( i = 0; i < 4; i++ ) {
      xv = xin[i] + yin[i];
      yv = xin[i] - yin[i];
      if( fabs( xout[i] - xv ) > 1.0e-6*fabs(xv) ||
          fabs( yout[i] - yv ) > 1.0e-6*fabs(yv) )
         stopit( 101, status );
   }

   cm2 = astPolyTran( cm, 0, 0.01, 0.01, 10, lbnd, ubnd );
   if( !cm2 ) {
      stopit( 102, status );
   } else {
      astTran2( cm2, 4, xout, yout, 0, xrec, yrec );
      for( i = 0; i < 4; i++ )
         if( fabs( xrec[i] - xin[i] ) > 0.01 ||
             fabs( yrec[i] - yin[i] ) > 0.01 )
            stopit( 103, status );
   }

   astPolyCoeffs( cm2, 0, 100, cofs, &nco );
   if( nco != 4 ) {
      stopit( 104, status );
   } else {
      for( i = 0; i < 16; i++ )
         if( fabs( cofs[i] - coeffs_4[i] ) > 0.01 ) stopit( 105, status );
   }

   astChebyDomain( cm2, 0, dlbnd, dubnd );
   if( dlbnd[0] != -2.0 ) stopit( 106, status );
   if( dlbnd[1] != -2.0 ) stopit( 107, status );
   if( dubnd[0] != 2.0 ) stopit( 108, status );
   if( dubnd[1] != 2.0 ) stopit( 109, status );

   /* 2D ChebyMap with non-unit domain */
   lbnd[0] = 0.0; lbnd[1] = 0.0;
   ubnd[0] = 10.0; ubnd[1] = 10.0;
   cm = astChebyMap( 2, 2, 5, coeffs_3, 0, NULL, lbnd, ubnd, lbnd, ubnd, " " );

   xin[0] = 0.0; xin[1] = 2.0; xin[2] = 6.0; xin[3] = 10.0;
   yin[0] = 2.0; yin[1] = 5.0; yin[2] = 8.0; yin[3] = 0.0;
   astTran2( cm, 4, xin, yin, 1, xout, yout );
   for( i = 0; i < 4; i++ ) {
      xi = 2.0*(xin[i] - lbnd[0])/(ubnd[0] - lbnd[0]) - 1.0;
      yi = 2.0*(yin[i] - lbnd[1])/(ubnd[1] - lbnd[1]) - 1.0;
      xv = 1 - 2*xi*(2*yi*yi - 1) + yi;
      yv = 1.5 - 2.5*xi*(2*yi*yi - 1);
      if( fabs( xout[i] - xv ) > 1.0e-6*fabs(xv) ||
          fabs( yout[i] - yv ) > 1.0e-6*fabs(yv) )
         stopit( 10, status );
   }

   /* 2D PolyTran inverse */
   tlbnd[0] = 4.0; tlbnd[1] = 4.0;
   tubnd[0] = 6.0; tubnd[1] = 6.0;
   cm2 = astPolyTran( cm, 0, 0.01, 0.01, 10, tlbnd, tubnd );
   if( !cm2 ) {
      stopit( 11, status );
   } else {
      xin[0] = 4.0; xin[1] = 4.5; xin[2] = 5.0; xin[3] = 5.5;
      yin[0] = 6.0; yin[1] = 5.5; yin[2] = 5.0; yin[3] = 4.5;
      astTran2( cm2, 4, xin, yin, 1, xout, yout );
      astTran2( cm2, 4, xout, yout, 0, xrec, yrec );
      for( i = 0; i < 4; i++ )
         if( fabs( xrec[i] - xin[i] ) > 0.01 ||
             fabs( yrec[i] - yin[i] ) > 0.01 )
            stopit( 12, status );
   }

   /* Test recovery of forward coefficients */
   astPolyCoeffs( cm2, 1, 0, NULL, &nco );
   if( nco != 5 ) stopit( 13, status );

   astPolyCoeffs( cm2, 1, 100, cofs, &nco );
   if( nco != 5 ) {
      stopit( 14, status );
   } else {
      for( i = 0; i < 20; i++ )
         if( cofs[i] != coeffs_3[i] ) stopit( 15, status );
   }

   /* Test recovery of inverse coefficients */
   astPolyCoeffs( cm2, 0, 0, NULL, &nco );
   if( nco != 9 ) stopit( 16, status );

   astPolyCoeffs( cm2, 0, 100, cofs, &nco );
   if( nco != 9 ) {
      stopit( 17, status );
   } else {
      if( fabs( cofs[0] - 5.0000000000000018 ) > 1.0e-6 ) stopit( 18, status );
      if( fabs( cofs[12] - 0.35096188953505458 ) > 1.0e-6 ) stopit( 19, status );
      if( cofs[14] != 2.0 ) stopit( 20, status );
   }

   /* Domain bounding box */
   astChebyDomain( cm, 1, dlbnd, dubnd );
   if( dlbnd[0] != lbnd[0] ) stopit( 21, status );
   if( dlbnd[1] != lbnd[1] ) stopit( 22, status );
   if( dubnd[0] != ubnd[0] ) stopit( 23, status );
   if( dubnd[1] != ubnd[1] ) stopit( 24, status );

   astChebyDomain( cm, 0, dlbnd, dubnd );
   if( dlbnd[0] != -2.0 ) stopit( 25, status );
   if( dlbnd[1] != -1.0 ) stopit( 26, status );
   if( dubnd[0] != 4.0 ) stopit( 27, status );
   if( dubnd[1] != 4.0 ) stopit( 28, status );

   astChebyDomain( cm2, 1, dlbnd, dubnd );
   if( dlbnd[0] != lbnd[0] ) stopit( 29, status );
   if( dlbnd[1] != lbnd[1] ) stopit( 30, status );
   if( dubnd[0] != ubnd[0] ) stopit( 31, status );
   if( dubnd[1] != ubnd[1] ) stopit( 32, status );

   astChebyDomain( cm2, 0, dlbnd, dubnd );
   if( fabs( dlbnd[0] - 0.432 ) > 1.0e-6 ) stopit( 33, status );
   if( fabs( dlbnd[1] - 1.000816 ) > 1.0e-6 ) stopit( 34, status );
   if( fabs( dubnd[0] - 1.568 ) > 1.0e-6 ) stopit( 35, status );
   if( fabs( dubnd[1] - 1.9991836 ) > 1.0e-6 ) stopit( 36, status );

   /* astRate at x0=0 for a ChebyMap defined only over [-1,1]. The
    * derivative is well defined there, but a too-large initial search
    * interval used to push the sample points outside the domain, making
    * astRate return AST__BAD at x0=0 (while x0=0.5 worked). f(x)=3*T1(x)
    * is the linear map f(x)=3x, so the gradient is 3 everywhere. */
   {
      double rate_coeffs[] = { 3.0, 1, 1 };
      double rlbnd = -1.0, rubnd = 1.0;
      double zero_at[1] = { 0.0 }, half_at[1] = { 0.5 }, rr;
      AstChebyMap *rcm = astChebyMap( 1, 1, 1, rate_coeffs, 0, NULL,
                                      &rlbnd, &rubnd, &rlbnd, &rubnd, " " );
      rr = astRate( (AstMapping *)rcm, half_at, 1, 1 );
      if( fabs( rr - 3.0 ) > 1.0e-6 ) stopit( 600, status );
      rr = astRate( (AstMapping *)rcm, zero_at, 1, 1 );
      if( rr == AST__BAD || fabs( rr - 3.0 ) > 1.0e-6 ) stopit( 601, status );
   }

   astEnd;
   astFlushMemory( 1 );

   if( *status == 0 ) {
      printf( " All ChebyMap tests passed\n" );
   } else {
      printf( "ChebyMap tests failed\n" );
   }
   return *status;
}
