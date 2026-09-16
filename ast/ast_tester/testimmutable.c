/*
 *  A Mapping attribute may be changed only while the Mapping is unshared.
 *
 *  SUN/210, "Changing Attributes of a Mapping": attribute values should be
 *  set when the Mapping is created and not changed afterwards, because a
 *  Mapping is often later included in another Object and there may then be
 *  many active references to it, so a change made through one reference is
 *  seen through all of them. AST reports an error for such a change unless
 *  the Mapping's reference count is one. The Invert attribute is exempt and
 *  can be changed at any time.
 *
 *  Every Mapping class with a settable attribute is checked here: the
 *  change must succeed while the reference count is one, and must report
 *  AST__IMMUT once the Mapping has been cloned. Clearing the attribute is
 *  as much of a change as setting it, so both are checked.
 *
 *  PermMap's PermSplit and WcsMap's FITSProj and LonCheck are absent below
 *  because they are protected: neither GetAttrib nor SetAttrib recognises
 *  them, so no amount of astSet reaches them and only AST itself can change
 *  them.
 *
 *  The outcomes are collected rather than reported as they happen, since
 *  reporting sets the status and would suppress every AST call after it.
 */
#include "ast.h"
#include "ast_err.h"
#include <stdio.h>

static int nfail = 0;

static void fail( const char *cls, const char *attrib, const char *what ) {
   printf( "%s %s %s\n", cls, attrib, what );
   nfail++;
}

/* Transformation function for the IntraMap. The IntraMap is never used to
   transform anything here, so this only has to exist. */
static void ImmutableTran( AstMapping *mapping, int npoint, int ncoord_in,
                           const double *ptr_in[], int forward,
                           int ncoord_out, double *ptr_out[] ) {
   int icoord;
   int ipoint;

   (void) mapping;
   (void) forward;

   for( icoord = 0; icoord < ncoord_out; icoord++ ) {
      for( ipoint = 0; ipoint < npoint; ipoint++ ) {
         ptr_out[ icoord ][ ipoint ] = ( icoord < ncoord_in ) ?
            ptr_in[ icoord ][ ipoint ] : AST__BAD;
      }
   }
}

static AstMapping *MakeZoomMap( void ) {
   return (AstMapping *) astZoomMap( 2, 2.0, " " );
}

static AstMapping *MakeGrismMap( void ) {
   return (AstMapping *) astGrismMap( " " );
}

static AstMapping *MakePcdMap( void ) {
   double centre[ 2 ] = { 0.0, 0.0 };
   return (AstMapping *) astPcdMap( 0.01, centre, " " );
}

static AstMapping *MakeLutMap( void ) {
   double lut[ 3 ] = { 1.0, 2.0, 3.0 };
   return (AstMapping *) astLutMap( 3, lut, 1.0, 1.0, " " );
}

static AstMapping *MakeSphMap( void ) {
   return (AstMapping *) astSphMap( " " );
}

static AstMapping *MakeIntraMap( void ) {
   return (AstMapping *) astIntraMap( "immutabletran", 1, 1, " " );
}

static AstMapping *MakeMathMap( void ) {
   const char *fwd[ 1 ] = { "y = x" };
   const char *inv[ 1 ] = { "x = y" };
   return (AstMapping *) astMathMap( 1, 1, 1, fwd, 1, inv, " " );
}

static AstMapping *MakePolyMap( void ) {
   double coeff[ 3 ] = { 1.0, 1, 1 };
   return (AstMapping *) astPolyMap( 1, 1, 1, coeff, 0, NULL, " " );
}

static AstMapping *MakeSplineMap( void ) {
   double tx[ 2 ] = { 0.0, 1.0 };
   double ty[ 2 ] = { 0.0, 1.0 };
   double cu[ 1 ] = { 1.5 };
   double cv[ 1 ] = { 2.5 };
   return (AstMapping *) astSplineMap( 1, 1, 1, 1, tx, ty, cu, cv, " " );
}

typedef AstMapping *(*Maker)( void );

typedef struct {
   const char *cls;
   Maker make;
   const char *attrib;
   const char *value;
} Case;

static const Case cases[] = {
   { "ZoomMap",   MakeZoomMap,   "Zoom",         "3.0"    },
   { "GrismMap",  MakeGrismMap,  "GrismNR",      "1.5"    },
   { "GrismMap",  MakeGrismMap,  "GrismWaveR",   "5.0e-7" },
   { "PcdMap",    MakePcdMap,    "Disco",        "0.02"   },
   { "PcdMap",    MakePcdMap,    "PcdCen(1)",    "1.0"    },
   { "LutMap",    MakeLutMap,    "LutInterp",    "1"      },
   { "LutMap",    MakeLutMap,    "LutEpsilon",   "1.0e-8" },
   { "SphMap",    MakeSphMap,    "UnitRadius",   "1"      },
   { "SphMap",    MakeSphMap,    "PolarLong",    "0.5"    },
   { "IntraMap",  MakeIntraMap,  "IntraFlag",    "tag"    },
   { "MathMap",   MakeMathMap,   "Seed",         "42"     },
   { "MathMap",   MakeMathMap,   "SimpFI",       "1"      },
   { "MathMap",   MakeMathMap,   "SimpIF",       "1"      },
   { "PolyMap",   MakePolyMap,   "IterInverse",  "0"      },
   { "PolyMap",   MakePolyMap,   "NiterInverse", "5"      },
   { "PolyMap",   MakePolyMap,   "TolInverse",   "1.0e-7" },
   { "SplineMap", MakeSplineMap, "InvNiter",     "5"      },
   { "SplineMap", MakeSplineMap, "InvTol",       "1.0e-6" },
   { "SplineMap", MakeSplineMap, "OutUnit",      "1"      }
};

static void CheckCase( const Case *c ) {
   AstMapping *clone;
   AstMapping *map;
   int free_ok;
   int immut_clear;
   int immut_set;

   astClearStatus;
   map = c->make();
   if( !map || !astOK ) {
      astClearStatus;
      fail( c->cls, c->attrib, "could not be constructed" );
      return;
   }

/* While nothing else refers to the Mapping the change is allowed. */
   astSet( map, "%s=%s", c->attrib, c->value );
   free_ok = astOK;
   astClearStatus;

/* Cloning it gives a second reference, and the change must now be
   refused. */
   clone = astClone( map );
   astSet( map, "%s=%s", c->attrib, c->value );
   immut_set = ( astStatus == AST__IMMUT );
   astClearStatus;

   astClear( map, c->attrib );
   immut_clear = ( astStatus == AST__IMMUT );
   astClearStatus;

   clone = astAnnul( clone );
   map = astAnnul( map );
   astClearStatus;

   if( !free_ok ) {
      fail( c->cls, c->attrib, "could not be set on an unshared Mapping" );
   }
   if( !immut_set ) {
      fail( c->cls, c->attrib, "was set on a cloned Mapping without reporting "
                               "AST__IMMUT" );
   }
   if( !immut_clear ) {
      fail( c->cls, c->attrib, "was cleared on a cloned Mapping without "
                               "reporting AST__IMMUT" );
   }
}

/* Invert is exempt from the rule, whether the Mapping is shared through a
   clone or through membership of a CmpMap. */
static void CheckInvertExempt( void ) {
   AstMapping *clone;
   AstMapping *map;
   int ok_clone;
   int ok_cmpmap;

   astClearStatus;
   map = (AstMapping *) astZoomMap( 1, 2.0, " " );
   clone = astClone( map );
   astSetI( map, "Invert", 1 );
   ok_clone = astOK;
   astClearStatus;
   clone = astAnnul( clone );

   (void) astCmpMap( map, astUnitMap( 1, " " ), 1, " " );
   astSetI( map, "Invert", 0 );
   ok_cmpmap = astOK;
   astClearStatus;
   map = astAnnul( map );
   astClearStatus;

   if( !ok_clone ) {
      fail( "ZoomMap", "Invert", "could not be set on a cloned Mapping" );
   }
   if( !ok_cmpmap ) {
      fail( "ZoomMap", "Invert", "could not be set on a Mapping held in a "
                                 "CmpMap" );
   }
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   size_t i;

   astWatch( status );

   astIntraReg_( "immutabletran", 1, 1, ImmutableTran,
                 AST__SIMPFI | AST__SIMPIF,
                 "Identity IntraMap for the immutability test",
                 "AST test suite", "starlink-ast", status );

   astBegin;

   for( i = 0; i < sizeof( cases ) / sizeof( cases[ 0 ] ); i++ ) {
      CheckCase( &cases[ i ] );
   }

   CheckInvertExempt();

   astEnd;

   if( nfail ) {
      printf( "Immutability tests failed (%d failures)\n", nfail );
      return 1;
   }
   printf( " All immutability tests passed\n" );
   return 0;
}
