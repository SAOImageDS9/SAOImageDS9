/*
 *  Test the LutMap class.
 *  Converted from the Fortran test testlutmap.f.
 *  Direct conversion; no material differences from the Fortran original.
 */
#include "ast.h"
#include <stdio.h>

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

static int mismatch_range( const double x[ static 7 ], const double y[ static 7 ],
                           int start, int end ) {
   int i;
   for( i = start; i < end; i++ ) {
      if( x[ i ] != y[ i ] ) return 1;
   }
   return 0;
}

static int mismatch_value_range( const double x[ static 7 ], double value,
                                 int start, int end ) {
   int i;
   for( i = start; i < end; i++ ) {
      if( x[ i ] != value ) return 1;
   }
   return 0;
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   AstLutMap *lm;
   double lut1[] = { -1, 0, 1, 2, 3, 4, 5, 6, 7, 8 };
   double x[7], y[7];

   astWatch( status );
   astBegin;

   /* Linear LUT: output = input for the range -1..8 */
   lm = astLutMap( 10, lut1, -1.0, 1.0, " " );
   x[0] = -2.0; x[1] = -1.0; x[2] = -0.5; x[3] = 3.0;
   x[4] = 7.5;  x[5] = 8.0;  x[6] = 8.5;

   astTran1( lm, 7, x, 1, y );
   if( mismatch_range( x, y, 0, 7 ) ) stopit( status, "Error 1" );

   astTran1( lm, 7, y, 0, x );
   if( mismatch_range( x, y, 0, 7 ) ) stopit( status, "Error 2" );

   /* LUT with duplicate first value (flat start). */
   lut1[0] = lut1[1]; /* lut1[0] = 0 */
   lm = astLutMap( 10, lut1, -1.0, 1.0, " " );
   x[0] = -2.0; x[1] = -1.0; x[2] = -0.5; x[3] = 0.5;
   x[4] = 3.0;  x[5] = 8.0;  x[6] = 8.5;

   astTran1( lm, 7, x, 1, y );
   if( mismatch_value_range( y, 0.0, 0, 3 ) ) stopit( status, "Error 3" );
   if( mismatch_range( x, y, 3, 7 ) ) stopit( status, "Error 4" );

   astTran1( lm, 7, y, 0, x );
   if( mismatch_value_range( x, AST__BAD, 0, 3 ) ) stopit( status, "Error 5" );
   if( mismatch_range( x, y, 3, 7 ) ) stopit( status, "Error 6" );

   /* LUT with a BAD value in the middle. */
   lut1[4] = AST__BAD;
   lm = astLutMap( 10, lut1, -1.0, 1.0, " " );
   x[0] = -2.0; x[1] = -1.0; x[2] = -0.5; x[3] = 0.5;
   x[4] = 3.0;  x[5] = 8.0;  x[6] = 8.5;

   astTran1( lm, 7, x, 1, y );
   if( mismatch_value_range( y, 0.0, 0, 3 ) ) stopit( status, "Error 7" );
   if( y[4] != AST__BAD ) stopit( status, "Error 8" );
   y[4] = x[4];
   if( mismatch_range( x, y, 3, 7 ) ) stopit( status, "Error 9" );

   astTran1( lm, 7, y, 0, x );
   if( mismatch_value_range( x, AST__BAD, 0, 3 ) ) stopit( status, "Error 10" );
   if( x[4] != AST__BAD ) stopit( status, "Error 11" );
   x[4] = y[4];
   if( mismatch_range( x, y, 3, 7 ) ) stopit( status, "Error 12" );

   astEnd;
   astFlushMemory( 1 );

   if( *status == 0 ) {
      printf( " All LutMap tests passed\n" );
   } else {
      printf( "LutMap tests failed\n" );
   }
   return *status;
}
