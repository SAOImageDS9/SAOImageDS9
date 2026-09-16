/*
 * testslamap: SlaMap regression tests (C only; no Fortran original).
 *
 * An SlaMap conversion whose stored argument is AST__BAD (e.g. an
 * ecliptic conversion with an undefined epoch) cannot be evaluated: its
 * transform must return AST__BAD for every point rather than propagating
 * NaN through the underlying PAL routines, and must not raise an AST
 * error.
 */
#include "ast.h"
#include <stdio.h>

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   double args[ 1 ];
   double xin[ 1 ] = { 1.0 };
   double yin[ 1 ] = { 0.5 };
   double xout[ 1 ], yout[ 1 ];

   astWatch( status );
   astBegin;

   AstSlaMap *sm = astSlaMap( 0, " " );
   args[ 0 ] = AST__BAD;
   astSlaAdd( sm, "EQECL", 1, args );

   astTran2( sm, 1, xin, yin, 1, xout, yout );

   if( !astOK ) {
      printf( "Error 1: transform with BAD argument raised an AST error\n" );
   } else if( xout[ 0 ] != AST__BAD || yout[ 0 ] != AST__BAD ) {
      printf( "Error 2: got (%.17g,%.17g), expected AST__BAD\n",
              xout[ 0 ], yout[ 0 ] );
      *status = 1;
   }

   astEnd;

   if( *status == 0 ) {
      printf( " All SlaMap tests passed\n" );
   } else {
      printf( "SlaMap tests failed\n" );
   }
   return *status;
}
