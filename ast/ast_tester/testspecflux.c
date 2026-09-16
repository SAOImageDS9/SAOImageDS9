/*
 *  Test the SpecFluxFrame class.
 *  Converted from the Fortran test testspecflux.f.
 *
 *  The checkdump round-trip uses astToString/astFromString instead of
 *  Fortran channel source/sink callbacks. As in the Fortran original,
 *  the round-trip check verifies that the serialised and restored object
 *  preserves the SpecVal attribute.
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
   if( !result ) {
      stopit( status, text );
   } else if( astGetD( obj, "specval" ) != astGetD( result, "specval" ) ) {
      stopit( status, "Object has changed" );
   }
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   double xin, xout, yin, yout;
   int perm[2];
   AstSpecFrame *sf;
   AstFluxFrame *ff, *ff2;
   AstSpecFluxFrame *sff, *sff2, *csff;
   AstFrameSet *fs;

   astWatch( status );
   astBegin;

   sf = astSpecFrame( "system=freq,unit=GHz" );
   ff = astFluxFrame( 123.0, sf, "Unit=Jy" );
   sff = astSpecFluxFrame( sf, ff, " " );

   if( strcmp( astGetC( sff, "Class" ), "SpecFluxFrame" ) )
      stopit( status, "Error 0" );
   if( astGetD( sff, "specval" ) != 123.0 ) stopit( status, "Error 1" );
   if( astTest( sff, "specval" ) ) stopit( status, "Error 2" );

   astSetD( sff, "specval", 333.3 );
   if( astGetD( sff, "specval" ) != 333.3 ) stopit( status, "Error 3" );
   if( !astTest( sff, "specval" ) ) stopit( status, "Error 4" );

   astClear( sff, "specval" );
   if( astGetD( sff, "specval" ) != 123.0 ) stopit( status, "Error 5" );
   if( astTest( sff, "specval" ) ) stopit( status, "Error 6" );

   checkdump( (AstObject *)sff, "CheckDump 1", status );

   ff2 = astFluxFrame( 123.1, sf, "System=flxdnw" );
   if( strcmp( astGetC( ff2, "Unit" ), "W/m^2/Angstrom" ) )
      stopit( status, "Error 6B" );
   if( strcmp( astGetC( ff2, "System" ), "FLXDNW" ) )
      stopit( status, "Error 6C" );

   sff2 = astSpecFluxFrame( sf, ff2, " " );
   if( strcmp( astGetC( sff2, "Class" ), "SpecFluxFrame" ) )
      stopit( status, "Error 7" );

   csff = astCopy( sff );
   fs = astConvert( sff, sff2, " " );
   if( !fs ) stopit( status, "Error 8" );

   if( fs ) {
      yin = 1.0; xin = 2.0;
      astTran2( fs, 1, &xin, &yin, 1, &xout, &yout );
      if( fabs( yout - 1.33425638e-26 ) > 1.0e-32 )
         stopit( status, "Error 9" );
      if( xout != 2.0 ) stopit( status, "Error 10" );
   }

   perm[0] = 2; perm[1] = 1;
   astPermAxes( sff2, perm );
   fs = astConvert( sff, sff2, " " );
   if( !fs ) stopit( status, "Error 11" );
   if( fs ) {
      xin = 2.0; yin = 1.0;
      astTran2( fs, 1, &xin, &yin, 1, &xout, &yout );
      if( fabs( xout - 1.33425638e-26 ) > 1.0e-32 )
         stopit( status, "Error 12" );
      if( yout != 2.0 ) stopit( status, "Error 13" );
   }

   perm[0] = 2; perm[1] = 1;
   astPermAxes( sff, perm );
   fs = astConvert( sff, sff2, " " );
   if( !fs ) stopit( status, "Error 14" );
   if( fs ) {
      yin = 2.0; xin = 1.0;
      astTran2( fs, 1, &xin, &yin, 1, &xout, &yout );
      if( fabs( xout - 1.33425638e-26 ) > 1.0e-32 )
         stopit( status, "Error 15" );
      if( yout != 2.0 ) stopit( status, "Error 16" );
   }

   /* Log flux units. */
   ff2 = astFluxFrame( AST__BAD, NULL, "Unit=log(W/m2/nm)" );
   if( strcmp( astGetC( ff2, "System" ), "FLXDNW" ) )
      stopit( status, "Error 17" );
   sff2 = astSpecFluxFrame( sf, ff2, " " );
   fs = astConvert( csff, sff2, " " );
   if( !fs ) stopit( status, "Error 18" );
   if( fs ) {
      yin = 1.0; xin = 2.0;
      astTran2( fs, 1, &xin, &yin, 1, &xout, &yout );
      if( fabs( yout + 24.8747607 ) > 0.000001 )
         stopit( status, "Error 19" );
      if( xout != 2.0 ) stopit( status, "Error 20" );

      astTran2( fs, 1, &xout, &yout, 0, &xin, &yin );
      if( fabs( xin - 2.0 ) > 1.0e-9 ) stopit( status, "Error 21" );
      if( fabs( yin - 1.0 ) > 1.0e-9 ) stopit( status, "Error 22" );
   }

   /* Surface brightness conversions. */
   ff2 = astFluxFrame( AST__BAD, NULL, "Unit=log(W/m2/nm/sr)" );
   if( strcmp( astGetC( ff2, "System" ), "SFCBRW" ) )
      stopit( status, "Error 23" );
   sff2 = astSpecFluxFrame( sf, ff2, " " );

   sf = astSpecFrame( "system=freq,unit=GHz" );
   ff = astFluxFrame( 123.0, sf, "Unit=Jy/deg**2" );
   if( strcmp( astGetC( ff, "System" ), "SFCBR" ) )
      stopit( status, "Error 24" );
   sff = astSpecFluxFrame( sf, ff, " " );

   fs = astConvert( sff, sff2, " " );
   if( !fs ) stopit( status, "Error 25" );
   if( fs ) {
      yin = 1.0; xin = 2.0;
      astTran2( fs, 1, &xin, &yin, 1, &xout, &yout );
      if( fabs( yout + 21.3585154 ) > 0.000001 )
         stopit( status, "Error 26" );
      if( xout != 2.0 ) stopit( status, "Error 27" );

      astTran2( fs, 1, &xout, &yout, 0, &xin, &yin );
      if( fabs( xin - 2.0 ) > 1.0e-9 ) stopit( status, "Error 28" );
      if( fabs( yin - 1.0 ) > 1.0e-9 ) stopit( status, "Error 29" );
   }

   /* A SpecFluxFrame must compare equal to a separately-constructed but
      identical SpecFluxFrame, and to a copy of itself. The conversion
      between them always carries a flux-rescaling RateMap, so this only
      holds if MakeSFMapping short-circuits to a UnitMap when the
      components are equal. */
   {
      AstSpecFrame *esf = astSpecFrame( "system=freq" );
      AstFluxFrame *eff = astFluxFrame( AST__BAD, NULL, "system=flxdn" );
      AstFluxFrame *eff2 = astFluxFrame( AST__BAD, NULL, "system=flxdnw" );
      AstSpecFluxFrame *ea = astSpecFluxFrame( esf, eff, " " );
      AstSpecFluxFrame *eb = astSpecFluxFrame( esf, eff, " " );
      AstSpecFluxFrame *ec = astCopy( ea );
      AstSpecFluxFrame *ed = astSpecFluxFrame( esf, eff2, " " );

      if( !astEqual( ea, eb ) )
         stopit( status, "Error 30" );
      if( !astEqual( ea, ec ) )
         stopit( status, "Error 31" );
      if( astEqual( ea, ed ) )
         stopit( status, "Error 32" );
   }

   astEnd;

   if( *status == 0 ) {
      printf( " All SpecFluxFrame tests passed\n" );
   } else {
      printf( "SpecFluxFrame tests failed\n" );
   }
   return *status;
}
