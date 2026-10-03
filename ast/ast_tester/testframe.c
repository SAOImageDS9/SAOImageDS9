#include <math.h>
#include <string.h>
#include "sae_par.h"
#include "ast.h"
#include "ast_err.h"

int main( void ) {
   int status = SAI__OK;
   astWatch( &status );

   AstFrame* frame = astFrame( 1, " " );
   astSetC( frame, "Unit(1)", "s*(m/s)" );
   const char* result = astGetC( frame, "NormUnit(1)" );

   if( strcmp( result, "m" ) ) {
      astError( AST__INTER, "NormUnit did not give expected result" );
   }

/* astAxAngle: when the offset position has a zero component on the
   measured axis but a non-zero component on the other axis, the angle is
   still well defined. Previously the nudge applied to break the
   degeneracy was scaled by a stale loop index, collapsing the offset
   point onto the reference point and returning AST__BAD. */
   {
      AstFrame *f2 = astFrame( 2, " " );
      double a1[2] = { 0.0, 0.0 }, b1[2] = { 1.0, 0.0 };
      double a2[2] = { 0.0, 5.0 }, b2[2] = { 3.0, 2.0 };
      double ang1 = astAxAngle( f2, a1, b1, 1 );
      double ang2 = astAxAngle( f2, a2, b2, 1 );

      if( astOK && ang1 == AST__BAD ) {
         astError( AST__INTER, "astAxAngle returned AST__BAD for "
                   "(0,0)->(1,0) on axis 1" );
      }
      if( astOK && fabs( ang2 - M_PI/4.0 ) > 1.0E-10 ) {
         astError( AST__INTER, "astAxAngle gave %g, expected PI/4 for "
                   "(0,5)->(3,2) on axis 1", ang2 );
      }
      f2 = astAnnul( f2 );
   }

   if( astOK ) {
      printf(" All Frame tests passed\n");
   } else {
      printf("Frame tests failed\n");
   }
   return astOK ? 0 : 1;
}
