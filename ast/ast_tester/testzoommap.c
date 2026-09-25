/*
 *  Test the ZoomMap class.
 *  Converted from the Fortran test testzoommap.f.
 *
 *  The Fortran version uses err_mark/err_rlse to bracket the immutability
 *  tests, and checks for the specific AST__IMMUT error code via the
 *  Fortran STATUS variable. This C version checks astStatus directly and
 *  uses a simpler error recovery pattern.
 */
#include "ast.h"
#include "ast_err.h"
#include <stdio.h>

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   AstZoomMap *zm;

   astWatch( status );
   astBegin;

   zm = astZoomMap( 1, -1.0, " " );
   if( !astTest( zm, "Zoom" ) ) {
      stopit( status, "Error 1" );
   } else if( astGetD( zm, "Zoom" ) != -1.0 ) {
      stopit( status, "Error 2" );
   }

   astClear( zm, "Zoom" );
   if( astTest( zm, "Zoom" ) ) {
      stopit( status, "Error 3" );
   } else if( astGetD( zm, "Zoom" ) != 1.0 ) {
      stopit( status, "Error 4" );
   }

   astSetD( zm, "Zoom", 2.5 );
   if( !astTest( zm, "Zoom" ) ) {
      stopit( status, "Error 5" );
   } else if( astGetD( zm, "Zoom" ) != 2.5 ) {
      stopit( status, "Error 6" );
   }

   /* Placing the ZoomMap in a CmpMap makes it immutable. */
   astCmpMap( zm, astUnitMap( 1, " " ), 1, " " );

   if( !astTest( zm, "Zoom" ) ) {
      stopit( status, "Error 7" );
   } else if( astGetD( zm, "Zoom" ) != 2.5 ) {
      stopit( status, "Error 8" );
   }

   /* Attempting to set an immutable attribute should trigger AST__IMMUT. */
   if( astOK ) {
      int old = astStatus;
      astSetD( zm, "Zoom", 1.5 );
      if( astStatus == AST__IMMUT ) {
         astClearStatus;
      } else if( old == 0 ) {
         stopit( status, "Error 9" );
      }
   }

   if( astOK ) {
      int old = astStatus;
      astClear( zm, "Zoom" );
      if( astStatus == AST__IMMUT ) {
         astClearStatus;
      } else if( old == 0 ) {
         stopit( status, "Error 11" );
      }
   }

   astEnd;
   astFlushMemory( 1 );

   if( *status == 0 ) {
      printf( " All ZoomMap tests passed\n" );
   } else {
      printf( "ZoomMap tests failed\n" );
   }
   return *status;
}
