/*
 *  Test the FrameSet class (variants, mirroring, dump/restore).
 *  Converted from the Fortran test testframeset.f.
 *
 *  The Fortran checkdump used COMMON-block channel source/sink callbacks
 *  and CHR_FANDL for string trimming. This C version uses
 *  astToString/astFromString for the round-trip. It also verifies the
 *  restored object is a FrameSet with astIsAFrameSet.
 *
 *  Error 24 tests that setting Variant on a frame without variants
 *  raises AST__ATTIN. The Fortran version used err_annul to clear the
 *  error; this C version uses astClearStatus after checking !astOK.
 */
#include "ast.h"
#include "ast_err.h"
#include <stdio.h>
#include <string.h>
#include <math.h>

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

static AstFrameSet *checkdump( AstFrameSet *obj, int *status ) {
   char *pickle;
   AstObject *result;
   if( *status != 0 ) return NULL;

   pickle = astToString( (AstObject *)obj );
   if( !pickle ) {
      stopit( status, "checkdump: cannot write object" );
      return NULL;
   }
   result = astFromString( pickle );
   pickle = astFree( pickle );
   if( !result ) {
      stopit( status, "checkdump: cannot read object" );
      return NULL;
   }
   if( !astIsAFrameSet( result ) ) {
      stopit( status, "checkdump: result is not a FrameSet" );
      return NULL;
   }
   return (AstFrameSet *)result;
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   double ina[2], inb[2], outa[2], outb[2], xin, yin, xout, yout;
   const char *text;
   AstFrame *pfrm, *ffrm;
   AstWinMap *p2fmap, *p2fmap2;
   AstFrameSet *fs, *result;
   AstMapping *map;
   int orig;

   astWatch( status );
   astBegin;

   pfrm = astFrame( 2, "Domain=PIXEL" );
   ffrm = astFrame( 2, "Domain=FPLANE" );

   ina[0] = 1.0;   ina[1] = 1.0;
   inb[0] = 100.0;  inb[1] = 200.0;
   outa[0] = -2.5;  outa[1] = -1.0;
   outb[0] = 2.5;   outb[1] = 1.0;
   p2fmap = astWinMap( 2, ina, inb, outa, outb, " " );

   fs = astFrameSet( pfrm, " " );
   astAddFrame( fs, AST__CURRENT, p2fmap, ffrm );

   /* Test setting Base/Current by domain name. */
   astSetC( fs, "Base", "Fplane" );
   if( astGetI( fs, "Base" ) != 2 )
      stopit( status, "Error -3" );

   astSetC( fs, "Base", "pixel" );
   if( astGetI( fs, "Base" ) != 1 )
      stopit( status, "Error -2" );

   astSetC( fs, "Current", "PIXEL" );
   if( astGetI( fs, "Current" ) != 1 )
      stopit( status, "Error -1" );

   astSetC( fs, "Current", "fplane" );
   if( astGetI( fs, "Current" ) != 2 )
      stopit( status, "Error 0" );

   /* Variant tests. */
   text = astGetC( fs, "AllVariants" );
   if( strcmp( text, "FPLANE" ) )
      stopit( status, "Error 1" );

   text = astGetC( fs, "Variant" );
   if( strcmp( text, "FPLANE" ) )
      stopit( status, "Error 2" );

   if( astTest( fs, "Variant" ) )
      stopit( status, "Error 3" );

   /* Add a variant with NULL mapping (just renames current). */
   astAddVariant( fs, NULL, "FP1" );

   text = astGetC( fs, "AllVariants" );
   if( strcmp( text, "FP1" ) )
      stopit( status, "Error 4" );

   text = astGetC( fs, "Variant" );
   if( strcmp( text, "FP1" ) )
      stopit( status, "Error 5" );

   if( !astTest( fs, "Variant" ) )
      stopit( status, "Error 6" );

   astClear( fs, "Variant" );

   text = astGetC( fs, "AllVariants" );
   if( strcmp( text, "FPLANE" ) )
      stopit( status, "Error 7" );

   text = astGetC( fs, "Variant" );
   if( strcmp( text, "FPLANE" ) )
      stopit( status, "Error 8" );

   if( astTest( fs, "Variant" ) )
      stopit( status, "Error 9" );

   /* Re-add FP1, then add FP2 with a different mapping. */
   astAddVariant( fs, NULL, "FP1" );

   outa[0] = 100.0;  outa[1] = 100.0;
   outb[0] = 200.0;  outb[1] = 200.0;
   p2fmap2 = astWinMap( 2, ina, inb, outa, outb, " " );

   astInvert( p2fmap );
   astAddVariant( fs,
      astSimplify( astCmpMap( p2fmap, p2fmap2, 1, " " ) ),
      "FP2" );

   text = astGetC( fs, "AllVariants" );
   if( strcmp( text, "FP1 FP2" ) )
      stopit( status, "Error 10" );

   text = astGetC( fs, "Variant" );
   if( strcmp( text, "FP2" ) )
      stopit( status, "Error 11" );

   if( !astTest( fs, "Variant" ) )
      stopit( status, "Error 12" );

   xin = 50.5; yin = 100.5;
   astTran2( fs, 1, &xin, &yin, 1, &xout, &yout );
   if( fabs( xout - 150.0 ) > 1.0e-6 || fabs( yout - 150.0 ) > 1.0e-6 )
      stopit( status, "Error 13" );

   astSetC( fs, "Variant", "FP1" );
   astTran2( fs, 1, &xin, &yin, 1, &xout, &yout );
   if( fabs( xout - 0.0 ) > 1.0e-6 || fabs( yout - 0.0 ) > 1.0e-6 )
      stopit( status, "Error 14" );

   /* Add FP3 variant. */
   outa[0] = -100.0;  outa[1] = -100.0;
   outb[0] = -200.0;  outb[1] = -200.0;
   p2fmap2 = astWinMap( 2, ina, inb, outa, outb, " " );

   map = astGetMapping( fs, AST__CURRENT, AST__BASE );
   astAddVariant( fs,
      astSimplify( astCmpMap( map, p2fmap2, 1, " " ) ),
      "FP3" );

   text = astGetC( fs, "AllVariants" );
   if( strcmp( text, "FP1 FP2 FP3" ) )
      stopit( status, "Error 15" );

   text = astGetC( fs, "Variant" );
   if( strcmp( text, "FP3" ) )
      stopit( status, "Error 16" );

   if( !astTest( fs, "Variant" ) )
      stopit( status, "Error 17" );

   astTran2( fs, 1, &xin, &yin, 1, &xout, &yout );
   if( fabs( xout + 150.0 ) > 1.0e-6 || fabs( yout + 150.0 ) > 1.0e-6 )
      stopit( status, "Error 18" );

   astSetC( fs, "Variant", "FP2" );
   astTran2( fs, 1, &xin, &yin, 1, &xout, &yout );
   if( fabs( xout - 150.0 ) > 1.0e-6 || fabs( yout - 150.0 ) > 1.0e-6 )
      stopit( status, "Error 19" );

   /* Dump/restore round-trip. */
   result = checkdump( fs, status );

   if( result ) {
      text = astGetC( result, "AllVariants" );
      if( strcmp( text, "FP1 FP2 FP3" ) )
         stopit( status, "Error 20" );

      text = astGetC( result, "Variant" );
      if( strcmp( text, "FP2" ) )
         stopit( status, "Error 21" );

      astTran2( result, 1, &xin, &yin, 1, &xout, &yout );
      if( fabs( xout - 150.0 ) > 1.0e-6 || fabs( yout - 150.0 ) > 1.0e-6 )
         stopit( status, "Error 22" );
   }

   /* Add a new frame (DSB) on top of the current variant frame. */
   orig = astGetI( fs, "Current" );
   astAddFrame( fs, AST__CURRENT, astUnitMap( 2, " " ),
                astFrame( 2, "Domain=DSB" ) );

   astTran2( fs, 1, &xin, &yin, 1, &xout, &yout );
   if( fabs( xout - 150.0 ) > 1.0e-6 || fabs( yout - 150.0 ) > 1.0e-6 )
      stopit( status, "Error 23" );

   /* Setting Variant on a frame without variants should raise AST__ATTIN. */
   if( astOK ) {
      astSetC( fs, "Variant", "FP1" );
      if( !astOK ) {
         astClearStatus;
      } else {
         stopit( status, "Error 24" );
      }
   }

   text = astGetC( fs, "AllVariants" );
   if( strcmp( text, "DSB" ) )
      stopit( status, "Error 25" );

   text = astGetC( fs, "Variant" );
   if( strcmp( text, "DSB" ) )
      stopit( status, "Error 26" );

   if( astTest( fs, "Variant" ) )
      stopit( status, "Error 27" );

   /* Mirror variants from the original frame. */
   astMirrorVariants( fs, orig );

   text = astGetC( fs, "AllVariants" );
   if( strcmp( text, "FP1 FP2 FP3" ) )
      stopit( status, "Error 28" );

   text = astGetC( fs, "Variant" );
   if( strcmp( text, "FP2" ) )
      stopit( status, "Error 29" );

   if( !astTest( fs, "Variant" ) )
      stopit( status, "Error 30" );

   astTran2( fs, 1, &xin, &yin, 1, &xout, &yout );
   if( fabs( xout - 150.0 ) > 1.0e-6 || fabs( yout - 150.0 ) > 1.0e-6 )
      stopit( status, "Error 31" );

   astSet( fs, "Variant=FP1" );
   text = astGetC( fs, "Variant" );
   if( strcmp( text, "FP1" ) )
      stopit( status, "Error 32" );

   astTran2( fs, 1, &xin, &yin, 1, &xout, &yout );
   if( fabs( xout - 0.0 ) > 1.0e-6 || fabs( yout - 0.0 ) > 1.0e-6 )
      stopit( status, "Error 33" );

   /* Second dump/restore round-trip. */
   result = checkdump( fs, status );

   if( result ) {
      text = astGetC( result, "AllVariants" );
      if( strcmp( text, "FP1 FP2 FP3" ) )
         stopit( status, "Error 34" );

      text = astGetC( result, "Variant" );
      if( strcmp( text, "FP1" ) )
         stopit( status, "Error 35" );

      astTran2( result, 1, &xin, &yin, 1, &xout, &yout );
      if( fabs( xout - 0.0 ) > 1.0e-6 || fabs( yout - 0.0 ) > 1.0e-6 )
         stopit( status, "Error 36" );
   }

   /* Test astCopy preserves variants. */
   result = astCopy( fs );

   text = astGetC( result, "AllVariants" );
   if( strcmp( text, "FP1 FP2 FP3" ) )
      stopit( status, "Error 37" );

   text = astGetC( result, "Variant" );
   if( strcmp( text, "FP1" ) )
      stopit( status, "Error 38" );

   astTran2( result, 1, &xin, &yin, 1, &xout, &yout );
   if( fabs( xout - 0.0 ) > 1.0e-6 || fabs( yout - 0.0 ) > 1.0e-6 )
      stopit( status, "Error 39" );

   /* Clearing Variant on the mirrored frame should revert to DSB. */
   astClear( fs, "Variant" );
   text = astGetC( fs, "Variant" );
   if( strcmp( text, "DSB" ) )
      stopit( status, "Error 40" );

   astEnd;

   if( *status == 0 ) {
      printf( " All FrameSet tests passed\n" );
   } else {
      printf( "FrameSet tests failed\n" );
   }
   return *status;
}
