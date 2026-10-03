/*
 *  Test the CmpMap class (MapSplit).
 *  Converted from the Fortran test testcmpmap.f.
 *
 *  The Fortran version reads splittest1.ast via a channel source callback
 *  subroutine reading from a Fortran unit. This C version uses the
 *  Channel SourceFile attribute instead, which is functionally equivalent.
 */
#include "ast.h"
#include <stdio.h>
#include <stdlib.h>

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

static AstObject *readobj( const char *file, int *status ) {
   AstChannel *ch;
   AstObject *obj;
   const char *srcdir = getenv("srcdir") ? getenv("srcdir") : ".";
   if( *status != 0 ) return NULL;
   ch = astChannel( NULL, NULL, " " );
   astSet( ch, "SourceFile=%s/%s", srcdir, file );
   obj = astRead( ch );
   astAnnul( ch );
   return obj;
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   int in[7], out[7];
   double x[7], y[7], y2[7], matrix[3];
   AstMapping *m1, *m2, *m3, *m4, *m5;

   matrix[0] = -1.0;
   matrix[1] = 1.0;
   matrix[2] = 2.0;

   astWatch( status );
   astBegin;

   m1 = (AstMapping *)astUnitMap( 1, " " );
   m2 = (AstMapping *)astZoomMap( 2, 2.0, " " );
   m3 = (AstMapping *)astMatrixMap( 3, 3, 1, matrix, " " );
   m4 = (AstMapping *)astCmpMap(
            astCmpMap( m1, m2, 0, " " ), m3, 0, " " );

   in[0] = 3; in[1] = 6; in[2] = 4;
   astMapSplit( m4, 3, in, out, &m5 );
   if( !m5 ) {
      stopit( status, "Error 1" );
   } else if( astGetI( m5, "Nin" ) != 3 ) {
      stopit( status, "Error 2" );
   } else if( astGetI( m5, "Nout" ) != 3 ) {
      stopit( status, "Error 3" );
   }

   if( out[0] != 3 ) stopit( status, "Error 4" );
   if( out[1] != 4 ) stopit( status, "Error 5" );
   if( out[2] != 6 ) stopit( status, "Error 6" );

   /* Read a Mapping from file and test MapSplit. */
   m1 = (AstMapping *)readobj( "fixtures/programs/testcmpmap/splittest1.ast", status );
   if( m1 && astOK ) {
      in[0] = 1;
      astMapSplit( m1, 1, in, out, &m2 );
      if( m2 ) stopit( status, "Error 7" );

      in[0] = 1; in[1] = 4; in[2] = 2;
      astMapSplit( m1, 3, in, out, &m2 );
      if( !m2 ) {
         stopit( status, "Error 8" );
      } else if( astGetI( m2, "Nin" ) != 3 ) {
         stopit( status, "Error 9" );
      } else if( astGetI( m2, "Nout" ) != 3 ) {
         stopit( status, "Error 10" );
      }

      /* Transform with the original and split mapping, compare results. */
      x[0] = 1.0; x[1] = 2.0; x[2] = 4.0; x[3] = 8.0;
      astTranN( m1, 1, 4, 1, x, 1, 4, 1, y );

      x[0] = 1.0; x[1] = 8.0; x[2] = 2.0;
      astTranN( m2, 1, 3, 1, x, 1, 3, 1, y2 );

      if( y2[0] != y[0] ) stopit( status, "Error 11" );
      if( y2[1] != y[1] ) stopit( status, "Error 12" );
      if( y2[2] != y[3] ) stopit( status, "Error 13" );
   }

   astEnd;
   astFlushMemory( 1 );

   if( *status == 0 ) {
      printf( " All CmpMap tests passed\n" );
   } else {
      printf( "CmpMap tests failed\n" );
   }
   return *status;
}
