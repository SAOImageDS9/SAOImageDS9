/*
 *  Test the FluxFrame class.
 *  Converted from the Fortran test testflux.f.
 *
 *  The checkdump round-trip uses astToString/astFromString instead of
 *  Fortran channel source/sink callbacks with COMMON blocks. The
 *  comparison checks the "specval" attribute only (same as the Fortran).
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
   if( astGetD( obj, "specval" ) != astGetD( result, "specval" ) ) {
      stopit( status, text );
   }
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   double xin, xout;
   AstSpecFrame *sf, *sf2;
   AstFluxFrame *ff, *ff2;
   AstFrameSet *fs;
   AstMapping *mp;

   astWatch( status );
   astBegin;

   sf = astSpecFrame( "system=freq,unit=GHz" );
   ff = astFluxFrame( 123.0, sf, " " );

   if( astGetD( ff, "specval" ) != 123.0 ) stopit( status, "Error 1" );
   if( astTest( ff, "specval" ) ) stopit( status, "Error 2" );

   astSetD( ff, "specval", 333.3 );
   if( astGetD( ff, "specval" ) != 333.3 ) stopit( status, "Error 3" );
   if( !astTest( ff, "specval" ) ) stopit( status, "Error 4" );

   astClear( ff, "specval" );
   if( astGetD( ff, "specval" ) != 123.0 ) stopit( status, "Error 5" );
   if( astTest( ff, "specval" ) ) stopit( status, "Error 6" );

   checkdump( (AstObject *)ff, "CheckDump 1", status );

   /* Convert between FluxFrames with similar specval. */
   ff2 = astFluxFrame( 123.1, sf, " " );
   fs = astConvert( ff, ff2, " " );
   if( !fs ) {
      stopit( status, "Error 8" );
   } else {
      mp = astGetMapping( fs, AST__BASE, AST__CURRENT );
      if( !astIsAUnitMap( mp ) ) stopit( status, "Error 9" );
   }

   /* W/m^2/Hz conversions. */
   ff = astFluxFrame( 123.0, sf, "unit=W/m^2/Hz" );
   if( strcmp( astGetC( ff, "System" ), "FLXDN" ) )
      stopit( status, "Error 10" );

   ff2 = astFluxFrame( 123.0, sf, "unit=W/m^2/GHz" );
   if( strcmp( astGetC( ff2, "System" ), "FLXDN" ) )
      stopit( status, "Error 11" );

   fs = astConvert( ff2, ff, " " );
   if( !fs ) {
      stopit( status, "Error 12" );
   } else {
      mp = astGetMapping( fs, AST__BASE, AST__CURRENT );
      if( !astIsAZoomMap( mp ) ) {
         stopit( status, "Error 13" );
      } else if( fabs( astGetD( mp, "Zoom" ) - 1.0e-9 ) > 1.0e-24 ) {
         stopit( status, "Error 14" );
      }
   }

   /* W/m^2/m (FLXDNW) conversions. */
   ff = astFluxFrame( 123.0, sf, "unit=W/m^2/m" );
   if( strcmp( astGetC( ff, "System" ), "FLXDNW" ) )
      stopit( status, "Error 15" );

   sf2 = astSpecFrame( "system=freq,unit=Hz" );
   ff2 = astFluxFrame( 123.0e9, sf2, "unit=W/m^2/Angstrom" );
   if( strcmp( astGetC( ff2, "System" ), "FLXDNW" ) )
      stopit( status, "Error 16" );

   fs = astConvert( ff2, ff, " " );
   if( !fs ) {
      stopit( status, "Error 17" );
   } else {
      mp = astGetMapping( fs, AST__BASE, AST__CURRENT );
      if( !astIsAZoomMap( mp ) ) {
         stopit( status, "Error 18" );
      } else if( astGetD( mp, "Zoom" ) != 1.0e10 ) {
         stopit( status, "Error 19" );
      }
   }

   /* Cross-system with wavelength SpecFrame. */
   ff = astFluxFrame( 123.0, sf, "unit=W/m^2/m" );
   if( strcmp( astGetC( ff, "System" ), "FLXDNW" ) )
      stopit( status, "Error 20" );
   sf2 = astSpecFrame( "system=wave,unit=nm" );
   ff2 = astFluxFrame( 2437337.06, sf2, "unit=W/m^2/Angstrom" );
   if( strcmp( astGetC( ff2, "System" ), "FLXDNW" ) )
      stopit( status, "Error 21" );
   fs = astConvert( ff, ff2, " " );
   if( !fs ) {
      stopit( status, "Error 22" );
   } else {
      mp = astGetMapping( fs, AST__BASE, AST__CURRENT );
      if( !astIsAZoomMap( mp ) ) {
         stopit( status, "Error 23" );
      } else if( astGetD( mp, "Zoom" ) != 1.0e-10 ) {
         stopit( status, "Error 24" );
      }
   }

   /* Frequency-to-wavelength flux density conversion. */
   sf = astSpecFrame( "system=freq,unit=GHz" );
   ff = astFluxFrame( 123.0, sf, "unit=W/m^2/Hz" );
   sf2 = astSpecFrame( "system=wave,unit=nm" );
   ff2 = astFluxFrame( 2437337.06, sf2, "unit=W/m^2/m" );
   fs = astConvert( ff, ff2, " " );
   if( !fs ) {
      stopit( status, "Error 25" );
   } else {
      xin = 1.0e-13;
      astTran1( fs, 1, &xin, 1, &xout );
      if( fabs( xout - 5.04649119 ) > 1.0e-6 )
         stopit( status, "Error 26" );
   }

   /* Surface brightness. */
   sf = astSpecFrame( "system=freq,unit=GHz" );
   ff = astFluxFrame( 123.0, sf, "unit=W/m^2/Hz/arcsec**2" );
   if( strcmp( astGetC( ff, "System" ), "SFCBR" ) )
      stopit( status, "Error 27a" );

   sf2 = astSpecFrame( "system=wave,unit=nm" );
   ff2 = astFluxFrame( 2437337.06, sf2, "unit=W/m^2/m/deg**2" );
   if( strcmp( astGetC( ff2, "System" ), "SFCBRW" ) )
      stopit( status, "Error 27b" );

   fs = astConvert( ff, ff2, " " );
   if( !fs ) {
      stopit( status, "Error 27" );
   } else {
      xin = 1.0e-13;
      astTran1( fs, 1, &xin, 1, &xout );
      if( fabs( xout - 65402525.8 ) > 1.0 )
         stopit( status, "Error 28" );
   }

   /* Incompatible frames should not convert. */
   ff = astFluxFrame( 123.0, sf, "unit=W/m^2/Hz/arcsec**2" );
   ff2 = astFluxFrame( 2437337.06, sf2, "unit=W/m^2/m" );
   fs = astConvert( ff, ff2, " " );
   if( fs ) stopit( status, "Error 29" );

   astEnd;

   if( *status == 0 ) {
      printf( " All FluxFrame tests passed\n" );
   } else {
      printf( "FluxFrame tests failed\n" );
   }
   return *status;
}
