/*
 *  Test that a dumped IsSimp card survives being read back.
 *
 *  astLoadMapping installs the simplified record from the IsSimp card
 *  (mapping.c:24137) and runs before any class-specific card is read.  Each
 *  subclass loader then validates the attribute it just read by re-applying it
 *  through the private Set... function, as the comment at zoommap.c:2231
 *  describes.  For a class whose setter clears the simplified records, that
 *  call discarded the record the parent had just installed, so the library
 *  could not read back the card it wrote.
 *
 *  Ten classes have both a clear-on-set setter and a loader that calls it.
 *  The defect needs a dump carrying the IsSimp card *and* the triggering
 *  attribute, and the fixture corpus only witnesses four of the ten
 *  (ZoomMap, PcdMap, MathMap, GrismMap), so every class is built here with
 *  its attribute deliberately set rather than left to the corpus.
 *
 *  PermMap's PermSplit and WcsMap's FITSProj / LonCheck are protected: they
 *  are absent from both classes' SetAttrib, so they are set through the
 *  protected C functions, which is why this file compiles with astCLASS.
 */
#define astCLASS testissimp

#include "ast_err.h"
#include "error.h"
#include "object.h"
#include "mapping.h"
#include "channel.h"
#include "memory.h"
#include "zoommap.h"
#include "pcdmap.h"
#include "permmap.h"
#include "lutmap.h"
#include "sphmap.h"
#include "mathmap.h"
#include "polymap.h"
#include "splinemap.h"
#include "wcsmap.h"
#include "grismmap.h"

#include <stdio.h>
#include <string.h>

void astBegin_( void );
void astEnd_( int * );

/* Simplify the Mapping, dump it, read the dump back, and report whether the
   IsSimp card survived.  Increments *fails for each class that loses it, and
   reports every class rather than stopping at the first, so a fix can be
   verified class by class. */
static void checkround( int *fails, AstMapping *map, const char *what,
                        int *status ) {
   AstMapping *reloaded;
   AstMapping *simp;
   char *dump;

   if( !astOK ) {
      printf( "  %-10s an earlier error left astOK false\n", what );
      (*fails)++;
      return;
   }

   simp = astSimplify( map );
   if( !astOK ) {
      printf( "  %-10s astSimplify raised an error\n", what );
      (*fails)++;
      return;
   }
   if( !astGetI( simp, "IsSimple" ) ) {
      printf( "  %-10s astSimplify did not set IsSimple\n", what );
      (*fails)++;
      simp = astAnnul( simp );
      return;
   }

   dump = astToString( simp );
   if( !dump || !strstr( dump, "IsSimp" ) ) {
      printf( "  %-10s dump carries no IsSimp card\n", what );
      (*fails)++;
   } else {
      reloaded = astFromString( dump );
      if( !astOK ) {
         printf( "  %-10s astFromString raised an error\n", what );
         (*fails)++;
      } else if( !astGetI( reloaded, "IsSimple" ) ) {
         printf( "  %-10s IsSimp card lost on read-back\n", what );
         (*fails)++;
      } else {
         printf( "  %-10s ok\n", what );
      }
      reloaded = astAnnul( reloaded );
   }

   if( dump ) dump = astFree( dump );
   simp = astAnnul( simp );
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   int fails = 0;

   astBegin_();

   printf( "IsSimp survives a read, per class:\n" );

/* ZoomMap: Zoom is a constructor argument, so it is always set. */
   {
      AstZoomMap *m = astZoomMap( 1, 3.5, " ", status );
      checkround( &fails, (AstMapping *) m, "zoommap", status );
      m = astAnnul( m );
   }

/* PcdMap: Disco and both PcdCen axes are constructor arguments. */
   {
      double centre[ 2 ] = { 1.0, 2.0 };
      AstPcdMap *m = astPcdMap( 0.5, centre, " ", status );
      checkround( &fails, (AstMapping *) m, "pcdmap", status );
      m = astAnnul( m );
   }

/* PermMap: PermSplit is protected.  The corpus has 21 fixtures whose PermMap
   carries an IsSimp card, but none sets PmSplt, so none reaches the loader's
   validating call. */
   {
      int inperm[ 2 ] = { 2, 1 };
      int outperm[ 2 ] = { 2, 1 };
      AstPermMap *m = astPermMap( 2, inperm, 2, outperm, NULL, " ", status );
      astSetPermSplit( m, 1 );
      checkround( &fails, (AstMapping *) m, "permmap", status );
      m = astAnnul( m );
   }

/* LutMap: a non-linear table, so it does not simplify to a WinMap. */
   {
      double lut[ 4 ] = { 0.0, 1.0, 4.0, 9.0 };
      AstLutMap *m = astLutMap( 4, lut, 1.0, 1.0,
                                "LutInterp=1,LutEpsilon=1e-8", status );
      checkround( &fails, (AstMapping *) m, "lutmap", status );
      m = astAnnul( m );
   }

/* SphMap: neither UnitRadius nor PolarLong is a constructor argument. */
   {
      AstSphMap *m = astSphMap( "UnitRadius=1,PolarLong=0.5", status );
      checkround( &fails, (AstMapping *) m, "sphmap", status );
      m = astAnnul( m );
   }

/* MathMap: SimpFI, SimpIF and Seed all clear, and the loader reaches each. */
   {
      const char *fwd[ 1 ] = { "y = x * x" };
      const char *inv[ 1 ] = { "x = sqrt( y )" };
      AstMathMap *m = astMathMap( 1, 1, 1, fwd, 1, inv,
                                  "SimpFI=1,SimpIF=1,Seed=42", status );
      checkround( &fails, (AstMapping *) m, "mathmap", status );
      m = astAnnul( m );
   }

/* PolyMap: a quadratic, so it does not reduce to a linear Mapping. */
   {
      double cf[ 3 ] = { 1.0, 1.0, 2.0 };
      double ci[ 3 ] = { 1.0, 1.0, 1.0 };
      AstPolyMap *m = astPolyMap( 1, 1, 1, cf, 1, ci,
                       "IterInverse=1,NiterInverse=10,TolInverse=1e-8", status );
      checkround( &fails, (AstMapping *) m, "polymap", status );
      m = astAnnul( m );
   }

/* SplineMap: the minimal order-1, one-knot form testsplinemap_c.c uses. */
   {
      double tx[ 2 ] = { 0.0, 1.0 };
      double ty[ 2 ] = { 0.0, 1.0 };
      double cu[ 1 ] = { 1.5 };
      double cv[ 1 ] = { 2.5 };
      AstSplineMap *m = astSplineMap( 1, 1, 1, 1, tx, ty, cu, cv,
                                      "InvNiter=20,InvTol=1e-7", status );
      checkround( &fails, (AstMapping *) m, "splinemap", status );
      m = astAnnul( m );
   }

/* WcsMap: FITSProj and LonCheck are protected. */
   {
      AstWcsMap *m = astWcsMap( 2, AST__TAN, 1, 2, " ", status );
      astSetFITSProj( m, 1 );
      astSetLonCheck( m, 1 );
      checkround( &fails, (AstMapping *) m, "wcsmap", status );
      m = astAnnul( m );
   }

/* GrismMap: all eight Grism* attributes clear, and the loader reaches each. */
   {
      AstGrismMap *m = astGrismMap( "GrismNR=1.5,GrismNRP=0.1,GrismWaveR=5e-7,"
                                    "GrismAlpha=0.1,GrismG=100000,GrismM=1,"
                                    "GrismEps=0.05,GrismTheta=0.02", status );
      checkround( &fails, (AstMapping *) m, "grismmap", status );
      m = astAnnul( m );
   }

/* The guard the fix rests on is general: a set to the value an attribute
   already holds cannot invalidate a recorded simplification, whoever the
   caller is.  A set to a different value still must.

   astSimplify returns a clone, and a cloned Mapping refuses an attribute
   change (AST__IMMUT), so the record is installed directly here -- which
   astCLASS makes available -- on an object with a single reference. */
   if( astOK ) {
      AstZoomMap *m = astZoomMap( 1, 3.5, " ", status );

      astSetIsSimple( m );
      if( !astIsSimple( m ) ) {
         printf( "  astSetIsSimple did not take\n" );
         fails++;
      }

      astSetD( m, "Zoom", astGetD( m, "Zoom" ) );
      if( !astIsSimple( m ) ) {
         printf( "  a no-op set cleared IsSimple\n" );
         fails++;
      }

      astSetD( m, "Zoom", 7.0 );
      if( astIsSimple( m ) ) {
         printf( "  a real change did not clear IsSimple\n" );
         fails++;
      }

      m = astAnnul( m );
   }

/* Seed has a separate set/unset flag.  Explicitly setting the generated
   default value is therefore a real state change even though the integer
   stored in the seed field does not change. */
   if( astOK ) {
      const char *fwd[ 1 ] = { "y = x" };
      const char *inv[ 1 ] = { "x = y" };
      AstMathMap *m = astMathMap( 1, 1, 1, fwd, 1, inv, " ", status );
      int seed = astGetSeed( m );

      if( astTestSeed( m ) ) {
         printf( "  a new MathMap unexpectedly has an explicit Seed\n" );
         fails++;
      }

      astSetIsSimple( m );
      astSetSeed( m, seed );
      if( !astTestSeed( m ) ) {
         printf( "  setting the default Seed did not make it explicit\n" );
         fails++;
      }
      if( astIsSimple( m ) ) {
         printf( "  setting an unset Seed to its default did not clear IsSimple\n" );
         fails++;
      }

      m = astAnnul( m );
   }

   astEnd_( status );

   if( !astOK || fails ) {
      printf( "IsSimp round-trip tests failed (%d)\n", fails );
      return 1;
   }
   printf( "IsSimp round-trip tests passed\n" );
   return 0;
}
