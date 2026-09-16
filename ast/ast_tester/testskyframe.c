/*
 *  Test the SkyFrame class.
 *  Converted from the Fortran test testskyframe.f.
 *  Direct conversion; no material differences from the Fortran original.
 */
#include "ast.h"
#include <stdio.h>
#include <math.h>

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   AstSkyFrame *sf1, *sf2;
   AstFrameSet *fs;
   double vals[5];

   astWatch( status );

   sf1 = astSkyFrame( "system=fk5,epoch=2015.0" );
   sf2 = astSkyFrame( "system=fk5,epoch=2015.1" );
   fs = astConvert( sf1, sf2, "SKY" );
   if( !fs ) {
      stopit( status, "Error 0" );
   }

   if( fs && !astIsAUnitMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
      stopit( status, "Error 1" );
   }

   if( astGetD( sf1, "SkyTol" ) != 0.001 ) {
      stopit( status, "Error 2" );
   }

   astSetD( sf2, "SkyTol", 1.0e-6 );
   fs = astConvert( sf1, sf2, "SKY" );

   if( fs && astIsAUnitMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
      stopit( status, "Error 3" );
   }

   sf2 = astSkyFrame( "system=fk5,epoch=2016.6" );
   fs = astConvert( sf1, sf2, "SKY" );
   if( fs && astIsAUnitMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
      stopit( status, "Error 4" );
   }

   vals[0] = 6.1;
   vals[1] = 6.15;
   vals[2] = 6.2;
   vals[3] = 6.25;
   vals[4] = 6.3;
   astAxNorm( sf1, 1, 0, 5, vals );
   if( vals[0] != 6.1 ||
       vals[1] != 6.15 ||
       vals[2] != 6.2 ||
       vals[3] != 6.25 ||
       vals[4] != 6.3 - 2*AST__DPI ) {
      stopit( status, "Error 5" );
   }

   astAxNorm( sf1, 1, 1, 5, vals );
   if( fabs( vals[0] - (6.1 - 2*AST__DPI) ) > 1.0e-10 ||
       fabs( vals[1] - (6.15 - 2*AST__DPI) ) > 1.0e-10 ||
       fabs( vals[2] - (6.2 - 2*AST__DPI) ) > 1.0e-10 ||
       fabs( vals[3] - (6.25 - 2*AST__DPI) ) > 1.0e-10 ||
       fabs( vals[4] - (6.3 - 2*AST__DPI) ) > 1.0e-10 ) {
      stopit( status, "Error 6" );
   }

   if( *status == 0 ) {
      printf( " All SkyFrame tests passed\n" );
   } else {
      printf( "SkyFrame tests failed\n" );
   }
   return *status;
}
