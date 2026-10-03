/*
 *  Test the NormMap class.
 *  Converted from the Fortran test testnormmap.f.
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
   int perm[3];
   double at[3], bt[3];
   AstFrame *f;
   AstMapping *m, *m2, *m3;

   astWatch( status );
   astBegin;

   f = (AstFrame *)astCmpFrame( astSpecFrame( " " ),
                                astSkyFrame( " " ), " " );
   perm[0] = 3;
   perm[1] = 1;
   perm[2] = 2;
   astPermAxes( f, perm );
   m = (AstMapping *)astNormMap( f, " " );

   if( astGetI( m, "Nin" ) != 3 ) stopit( 1, status );
   if( astGetI( m, "Nout" ) != 3 ) stopit( 2, status );
   if( !astGetL( m, "TranForward" ) ) stopit( 3, status );
   if( !astGetL( m, "TranInverse" ) ) stopit( 4, status );

   /* NormMap composed with its inverse should simplify to UnitMap. */
   m2 = astCopy( m );
   astInvert( m2 );
   m3 = astSimplify( astCmpMap( m, m2, 1, " " ) );
   if( !astIsAUnitMap( m3 ) ) stopit( 5, status );

   at[0] = 2.0;
   at[1] = 3.0e4;
   at[2] = 1.0;
   astTranN( m, 1, 3, 1, at, 1, 3, 1, bt );

   if( fabs( bt[0] - 1.14159265 ) > 1.0e-6 ) stopit( 6, status );
   if( bt[1] != 3.0e4 ) stopit( 7, status );
   if( fabs( bt[2] - 4.14159265 ) > 1.0e-6 ) stopit( 8, status );

   /* Adjacent identical NormMaps should simplify to a single NormMap. */
   m2 = (AstMapping *)astCmpMap(
            astCmpMap( m, astCopy( m ), 1, " " ),
            astCmpMap( m, astCopy( m ), 1, " " ), 1, " " );
   m3 = astSimplify( m2 );
   if( !astIsANormMap( m3 ) ) stopit( 9, status );

   /* NormMap encapsulating a basic Frame should simplify to UnitMap. */
   m = (AstMapping *)astNormMap( astFrame( 2, " " ), " " );
   m2 = astSimplify( m );
   if( !astIsAUnitMap( m2 ) ) stopit( 10, status );

   astEnd;
   astFlushMemory( 1 );

   if( *status == 0 ) {
      printf( " All NormMap tests passed\n" );
   } else {
      printf( "NormMap tests failed\n" );
   }
   return *status;
}
