/*
 *  Test the Channel class (file-based I/O).
 *  Converted from the Fortran test testchannel.f.
 *
 *  This C version cleans up the temporary files (fred.txt, fred2.txt)
 *  on exit; the Fortran version leaves them behind.
 */
#include "ast.h"
#include "ast_err.h"
#include <stdio.h>
#include <string.h>

static void stopit( int i, int *status ) {
   if( *status != 0 ) return;
   printf( "Error %d\n", i );
   *status = 1;
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   AstSkyFrame *sf, *sf2;
   AstChannel *ch;
   char buff[60];

   astWatch( status );
   astBegin;

   /* Test TuneC for header delimiter. */
   astTuneC( "hrdel", AST__TUNULLC, buff, sizeof(buff) );
   if( strcmp( buff, "%-%^50+%s70+h%+" ) != 0 && astOK ) {
      stopit( 0, status );
   }
   astTuneC( "hrdel", "junk", buff, sizeof(buff) );
   astTuneC( "hrdel", AST__TUNULLC, buff, sizeof(buff) );
   if( strcmp( buff, "junk" ) != 0 && astOK ) {
      stopit( -1, status );
   }

   /* Write a SkyFrame to a file via a Channel. */
   sf = astSkyFrame( " " );
   ch = astChannel( NULL, NULL, "SinkFile=./fred.txt" );
   if( astWrite( ch, sf ) != 1 ) {
      stopit( 1, status );
   }

   /* Attempting to read while SinkFile is still set should give RDERR. */
   astSet( ch, "SourceFile=./fred.txt" );
   if( astOK ) {
      sf2 = (AstSkyFrame *)astRead( ch );
      if( astStatus == AST__RDERR ) {
         astClearStatus;
      } else {
         stopit( 7, status );
      }
   }

   /* Clear the SinkFile, then read back from the file. */
   astClear( ch, "SinkFile" );
   astSet( ch, "SourceFile=./fred.txt" );
   sf2 = (AstSkyFrame *)astRead( ch );
   if( !sf2 ) stopit( 2, status );
   if( sf2 && !astEqual( sf, sf2 ) ) {
      stopit( 3, status );
   }

   /* Write to a second file and read it back. */
   astSet( ch, "SinkFile=./fred2.txt" );
   if( astWrite( ch, sf ) != 1 ) {
      stopit( 4, status );
   }
   astClear( ch, "SinkFile" );

   astSet( ch, "SourceFile=./fred2.txt" );
   sf2 = (AstSkyFrame *)astRead( ch );
   if( !sf2 ) stopit( 5, status );
   if( sf2 && !astEqual( sf, sf2 ) ) {
      stopit( 6, status );
   }

   astEnd;

   /* Clean up temp files. */
   remove( "./fred.txt" );
   remove( "./fred2.txt" );

   if( *status == 0 ) {
      printf( " All Channel tests passed\n" );
   } else {
      printf( "Channel tests failed\n" );
   }
   return *status;
}
