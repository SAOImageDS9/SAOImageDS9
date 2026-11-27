/*
 *  Test the SpecFrame class.
 *  Converted from the Fortran test testspecframe.f.
 *  The checkdump round-trip uses astToString/astFromString instead of
 *  Fortran channel source/sink callbacks.
 */
#include "ast.h"
#include <stdio.h>
#include <math.h>
#include <string.h>

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

static void checkdump( AstObject *obj, const char *text, int *status ) {
   char *pickle;
   AstObject *result;
   if( *status != 0 ) return;

   pickle = astToString( obj );
   if( !pickle ) { stopit( status, text ); return; }
   result = astFromString( pickle );
   pickle = astFree( pickle );
   if( !result ) { stopit( status, text ); return; }

   if( astGetD( obj, "SpecOrigin" ) != astGetD( result, "SpecOrigin" ) ) {
      stopit( status, text );
   }
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   double rf, x, y;
   AstSpecFrame *sf, *sf1, *sf2;
   AstFrameSet *fs;

   astWatch( status );
   astBegin;

   sf = astSpecFrame( "system=freq,unit=Hz" );
   if( astGetD( sf, "SpecOrigin" ) != 0.0 ) stopit( status, "Error 0" );

   rf = astGetD( sf, "RestFreq" );
   astSetD( sf, "SpecOrigin", rf * 1.0e9 );
   if( fabs( astGetD( sf, "SpecOrigin" ) - rf * 1.0e9 ) > 0.1 )
      stopit( status, "Error 1" );

   astSetC( sf, "Unit(1)", "GHz" );
   if( astGetD( sf, "SpecOrigin" ) != rf )
      stopit( status, "Error 2" );

   checkdump( (AstObject *)sf, "Error 3", status );

   astSetC( sf, "System", "vrad" );
   if( fabs( astGetD( sf, "SpecOrigin" ) ) > 1.0e-8 )
      stopit( status, "Error 4" );

   astSetC( sf, "System", "freq" );
   astSetC( sf, "Unit(1)", "Hz" );
   if( fabs( astGetD( sf, "SpecOrigin" ) - rf * 1.0e9 ) > 0.1 )
      stopit( status, "Error 5" );

   astSetC( sf, "StdOfRest", "LSRD" );
   if( fabs( astGetD( sf, "SpecOrigin" ) - rf * 1.00000212890848e9 ) > 10.0 )
      stopit( status, "Error 6" );

   /* Test SpecOrigin offset in conversions. */
   sf1 = astSpecFrame( "system=freq,unit=Hz" );
   astSetD( sf1, "SpecOrigin", 1.0e20 );
   sf2 = astSpecFrame( "system=freq,unit=Hz" );
   astSetD( sf2, "SpecOrigin", 1.01e20 );
   fs = astConvert( sf1, sf2, "" );

   x = 0.03e20;
   astTran1( fs, 1, &x, 1, &y );
   if( fabs( y - 0.02e20 ) > 0.0 ) stopit( status, "Error 7" );

   if( astGetL( sf1, "AlignSpecOffset" ) ) stopit( status, "Error 8" );
   astSetL( sf1, "AlignSpecOffset", 1 );
   astSetL( sf2, "AlignSpecOffset", 1 );
   fs = astConvert( sf1, sf2, "" );

   x = 0.03e20;
   astTran1( fs, 1, &x, 1, &y );
   if( fabs( y - x ) > 0.0 ) stopit( status, "Error 9" );

   /* Test SourceVel frame changes. */
   sf = astSpecFrame( "system=freq,unit=Hz" );
   astSetC( sf, "SourceVRF", "LSRK" );
   astSetD( sf, "SourceVel", 1000.0 );
   astSetC( sf, "SourceVRF", "BARY" );
   astSetC( sf, "SourceSys", "ZOPT" );
   if( fabs( astGetD( sf, "SourceVel" ) - 0.00334028336870307 ) > 1.0e-10 )
      stopit( status, "Error 11" );

   checkdump( (AstObject *)sf, "Error 10", status );

   astSetC( sf, "SourceVRF", "LSRK" );
   astSetC( sf, "SourceSys", "VREL" );
   if( fabs( astGetD( sf, "SourceVel" ) - 1000.0 ) > 1.0e-6 )
      stopit( status, "Error 12" );

   astEnd;

   if( *status == 0 ) {
      printf( " All SpecFrame tests passed\n" );
   } else {
      printf( "SpecFrame tests failed\n" );
   }
   return *status;
}
