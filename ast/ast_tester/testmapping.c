/*
 *  Test Mapping class (PolyMap / LinearApprox).
 *  Converted from the Fortran test testmapping.f.
 *  Direct conversion; no material differences from the Fortran original.
 */
#include "ast.h"
#include <stdio.h>
#include <string.h>

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

/* Count the occurrences of "text" in "str". */
static int countstr( const char *str, const char *text ) {
   const char *p = str;
   int result = 0;
   size_t len = strlen( text );

   while( ( p = strstr( p, text ) ) ) {
      result++;
      p += len;
   }
   return result;
}

/* CmpMap equality must retain its usual effective-order and effective-sense
   semantics when Ident prevents MapList from decomposing the outer CmpMap. */
static void testprotectedcmpequal( int *status ) {
   AstCmpMap *a;
   AstCmpMap *b;
   AstZoomMap *a1;
   AstZoomMap *a2;
   AstZoomMap *b1;
   AstZoomMap *b2;
   int equal;

   if( *status != 0 || !astOK ) return;

   a1 = astZoomMap( 1, 2.0, " " );
   a2 = astZoomMap( 1, 3.0, " " );
   a = astCmpMap( a1, a2, 1, "Ident=keep" );

   /* Inverting this reversed series pair gives the same effective
      sequence and component senses as a. */
   b1 = astZoomMap( 1, 3.0, "Invert=1" );
   b2 = astZoomMap( 1, 2.0, "Invert=1" );
   b = astCmpMap( b1, b2, 1, "Ident=keep,Invert=1" );

   equal = astEqual( a, b );

   a = astAnnul( a );
   b = astAnnul( b );
   a1 = astAnnul( a1 );
   a2 = astAnnul( a2 );
   b1 = astAnnul( b1 );
   b2 = astAnnul( b2 );

   if( !equal ) stopit( status, "Error protectedcmpequal-1" );
}

/* Comparing protected CmpMaps that share a component must not alter the
   live Invert value of that component. */
static void testprotectedcmpequalstable( int *status ) {
   AstCmpMap *a;
   AstCmpMap *b;
   AstZoomMap *map1;
   AstZoomMap *map2;
   int after;
   int before;
   int equal;

   if( *status != 0 || !astOK ) return;

   map1 = astZoomMap( 1, 2.0, " " );
   map2 = astZoomMap( 1, 3.0, " " );
   a = astCmpMap( map1, map2, 1, "Ident=keep" );
   b = astCmpMap( map1, map2, 1, "Ident=keep" );

   /* The CmpMaps retain the construction-time value, but callers remain
      free to change the shared Mapping's live attribute afterwards. */
   astInvert( map1 );
   before = astGetI( map1, "Invert" );
   equal = astEqual( a, b );
   after = astGetI( map1, "Invert" );

   a = astAnnul( a );
   b = astAnnul( b );
   map1 = astAnnul( map1 );
   map2 = astAnnul( map2 );

   if( !equal ) stopit( status, "Error protectedcmpequalstable-1" );
   if( before != 1 || after != before ) {
      stopit( status, "Error protectedcmpequalstable-2" );
   }
}

/* A simplified two component parallel CmpMap. The first component is a
   ZoomMap that was itself the result of a simplification, so both the
   CmpMap and that component are recorded as having been simplified. The
   second component is non-linear, which is what stops the whole tree
   collapsing into a single Mapping. */
static AstMapping *simplifiedtree( void ) {
   double coeff[ 8 ] = { 1.0, 1, 2, 0,
                         1.0, 2, 0, 2 };
   AstMapping *inner;
   AstMapping *poly;
   AstMapping *result;

   inner = astSimplify( astCmpMap( astZoomMap( 2, 2.0, " " ),
                                   astZoomMap( 2, 3.0, " " ), 1, " " ) );
   poly = (AstMapping *) astPolyMap( 2, 2, 2, coeff, 0, NULL, " " );
   result = astSimplify( astCmpMap( inner, poly, 0, " " ) );

   inner = astAnnul( inner );
   poly = astAnnul( poly );

   return result;
}

/*
 * astEqual is documented as a comparison, so it must not change how
 * either operand serialises. The CmpMap implementation decomposes both
 * operands into their live components and lines them up by setting their
 * Invert flags, which used to discard the record that a component had
 * been simplified.
 */
static void testequaldumpstable( int *status ) {
   AstMapping *t;
   AstMapping *u;
   char *dump1;
   char *dump2;
   int equal;
   int got_dumps;
   int ntag;
   int stable;

   if( *status != 0 || !astOK ) return;

   t = simplifiedtree();
   u = simplifiedtree();

   dump1 = astToString( t );
   equal = astEqual( t, u );
   dump2 = astToString( t );

   /* Record the outcomes before reporting any of them, since reporting a
      failure sets the status and so suppresses any AST call after it. */
   got_dumps = ( dump1 && dump2 );
   stable = ( got_dumps && !strcmp( dump1, dump2 ) );
   ntag = dump1 ? countstr( dump1, "IsSimp" ) : 0;

   if( dump2 ) dump2 = astFree( dump2 );
   if( dump1 ) dump1 = astFree( dump1 );
   u = astAnnul( u );
   t = astAnnul( t );

   if( !got_dumps ) {
      stopit( status, "Error equaldump-1" );
   }
   if( !equal ) {
      stopit( status, "Error equaldump-2" );
   }

   /* Both the CmpMap and its ZoomMap component are results of a
      simplification, so the dump must tag both. Without this the stability
      check below would pass on a dump that tags nothing. */
   if( ntag != 2 ) {
      printf( "Dump has %d IsSimp cards, expected 2.\n", ntag );
      stopit( status, "Error equaldump-3" );
   }
   if( !stable ) {
      printf( "Dump changed as a result of comparing the Mapping.\n" );
      stopit( status, "Error equaldump-4" );
   }
}

/*
 * Whether a Mapping needs re-simplifying, and so whether its dump is
 * tagged, depends on the orientation it is in and on nothing else. A
 * simplified Mapping that is inverted needs looking at again, since the
 * inverse may simplify differently, but restoring the original Invert
 * value restores the original Mapping and hence the original dump.
 */
static void testsimplevsinvert( int *status ) {
   AstMapping *s;
   char *dump_fwd;
   char *dump_inv;
   char *dump_back;
   int got_dumps;
   int inv;
   int simple_back;
   int simple_inv;
   int simple_noop;
   int simple_simp;

   if( *status != 0 || !astOK ) return;

   s = astSimplify( astCmpMap( astZoomMap( 1, 2.0, " " ),
                               astZoomMap( 1, 3.0, " " ), 1, " " ) );
   simple_simp = astGetI( s, "IsSimple" );
   dump_fwd = astToString( s );

   /* Setting Invert to the value it already holds leaves the Mapping
      unchanged, so it must leave IsSimple alone too. */
   inv = astGetI( s, "Invert" );
   astSetI( s, "Invert", inv );
   simple_noop = astGetI( s, "IsSimple" );

   /* Inverting it really does change it. */
   astSetI( s, "Invert", !inv );
   simple_inv = astGetI( s, "IsSimple" );
   dump_inv = astToString( s );

   /* Inverting it back restores what was simplified. */
   astSetI( s, "Invert", inv );
   simple_back = astGetI( s, "IsSimple" );
   dump_back = astToString( s );

   /* Record the outcomes before reporting any of them, since reporting a
      failure sets the status and so suppresses any AST call after it. */
   got_dumps = ( dump_fwd && dump_inv && dump_back );

   if( dump_back ) dump_back = astFree( dump_back );
   if( dump_inv ) dump_inv = astFree( dump_inv );
   if( dump_fwd ) dump_fwd = astFree( dump_fwd );
   s = astAnnul( s );

   if( !got_dumps ) {
      stopit( status, "Error simpinvert-1" );
   }
   if( !simple_simp ) {
      stopit( status, "Error simpinvert-2" );
   }
   if( !simple_noop ) {
      printf( "Setting Invert to the value it already held cleared "
              "IsSimple.\n" );
      stopit( status, "Error simpinvert-3" );
   }
   if( simple_inv ) {
      printf( "Inverting a simplified Mapping left IsSimple set.\n" );
      stopit( status, "Error simpinvert-4" );
   }
   if( !simple_back ) {
      printf( "Restoring Invert did not restore IsSimple.\n" );
      stopit( status, "Error simpinvert-5" );
   }
}

/* As above, but checking the dumps rather than the attribute. Split out so
   that the two sets of outcomes are reported independently. */
static void testsimplevsinvertdump( int *status ) {
   AstMapping *s;
   char *dump_fwd;
   char *dump_inv;
   char *dump_back;
   int got_dumps;
   int inv;
   int tagged_back;
   int tagged_fwd;
   int tagged_inv;
   int stable;

   if( *status != 0 || !astOK ) return;

   s = astSimplify( astCmpMap( astZoomMap( 1, 2.0, " " ),
                               astZoomMap( 1, 3.0, " " ), 1, " " ) );
   dump_fwd = astToString( s );
   inv = astGetI( s, "Invert" );
   astSetI( s, "Invert", !inv );
   dump_inv = astToString( s );
   astSetI( s, "Invert", inv );
   dump_back = astToString( s );

   got_dumps = ( dump_fwd && dump_inv && dump_back );
   tagged_fwd = ( dump_fwd && countstr( dump_fwd, "IsSimp" ) == 1 );
   tagged_inv = ( dump_inv && countstr( dump_inv, "IsSimp" ) == 1 );
   tagged_back = ( dump_back && countstr( dump_back, "IsSimp" ) == 1 );
   stable = ( dump_fwd && dump_back && !strcmp( dump_fwd, dump_back ) );

   if( dump_back ) dump_back = astFree( dump_back );
   if( dump_inv ) dump_inv = astFree( dump_inv );
   if( dump_fwd ) dump_fwd = astFree( dump_fwd );
   s = astAnnul( s );

   if( !got_dumps ) {
      stopit( status, "Error simpinvertdump-1" );
   }
   if( !tagged_fwd ) {
      stopit( status, "Error simpinvertdump-2" );
   }
   if( tagged_inv ) {
      printf( "Dump of an inverted Mapping claims it needs no "
              "re-simplifying.\n" );
      stopit( status, "Error simpinvertdump-3" );
   }
   if( !tagged_back ) {
      printf( "Dump lost its IsSimp card over an invert and back.\n" );
      stopit( status, "Error simpinvertdump-4" );
   }
   if( !stable ) {
      printf( "Dump changed over an invert and back.\n" );
      stopit( status, "Error simpinvertdump-5" );
   }
}

/*
 * IsSimple is advisory: reporting that a Mapping may need re-simplifying
 * is always safe, whereas reporting that it does not can suppress a
 * simplification that is available. So anything that changes what a
 * Mapping does must discard the record, including a change made through
 * one of the Mapping's own attributes and a transformation replaced by
 * astPolyTran.
 */
static void testmutationclearssimple( int *status ) {
   /* out1 = x + 0.1*x^2, out2 = y + 0.1*y^2. Monotonic over the bounds
      below, so the inverse can be fitted, and not the identity, so it does
      not simplify away to a UnitMap. */
   double coeff[ 16 ] = { 1.0, 1, 1, 0,
                          0.1, 1, 2, 0,
                          1.0, 2, 0, 1,
                          0.1, 2, 0, 2 };
   double lbnd[ 2 ] = { -1.0, -1.0 };
   double ubnd[ 2 ] = { 1.0, 1.0 };
   AstMapping *cleared;
   AstMapping *fitted;
   AstMapping *input;
   AstMapping *set;
   int simple_afterclear;
   int simple_afterfit;
   int simple_afterset;
   int simple_cleared;
   int simple_fitted;
   int simple_set;

   if( *status != 0 || !astOK ) return;

   /* Setting an attribute that changes the inverse transformation. Only an
      unshared Mapping can be changed at all, so drop the reference to the
      input and leave the simplified Mapping held only here. */
   input = (AstMapping *) astPolyMap( 2, 2, 4, coeff, 0, NULL, " " );
   set = astSimplify( input );
   input = astAnnul( input );
   simple_set = astGetI( set, "IsSimple" );
   astSetI( set, "IterInverse", 0 );
   simple_afterset = astGetI( set, "IsSimple" );
   set = astAnnul( set );

   /* Clearing one back to its default changes the Mapping just as much. */
   input = (AstMapping *) astPolyMap( 2, 2, 4, coeff, 0, NULL, " " );
   astSetI( input, "IterInverse", 0 );
   cleared = astSimplify( input );
   input = astAnnul( input );
   simple_cleared = astGetI( cleared, "IsSimple" );
   astClear( cleared, "IterInverse" );
   simple_afterclear = astGetI( cleared, "IsSimple" );
   cleared = astAnnul( cleared );

   /* astPolyTran returns a copy of the PolyMap with one of its
      transformations replaced, so the copy must not inherit the record. */
   fitted = astSimplify( astPolyMap( 2, 2, 4, coeff, 0, NULL, " " ) );
   simple_fitted = astGetI( fitted, "IsSimple" );
   fitted = (AstMapping *) astPolyTran( (AstPolyMap *) fitted, 0, 1.0E-5,
                                        1.0E-3, 8, lbnd, ubnd );
   simple_afterfit = fitted ? astGetI( fitted, "IsSimple" ) : -1;
   if( fitted ) fitted = astAnnul( fitted );

   if( !simple_set || !simple_cleared || !simple_fitted ) {
      stopit( status, "Error mutation-1" );
   }
   if( simple_afterset ) {
      printf( "Setting an attribute left IsSimple set.\n" );
      stopit( status, "Error mutation-2" );
   }
   if( simple_afterclear ) {
      printf( "Clearing an attribute left IsSimple set.\n" );
      stopit( status, "Error mutation-3" );
   }
   if( simple_afterfit != 0 ) {
      printf( "astPolyTran returned a Mapping reporting IsSimple = %d.\n",
              simple_afterfit );
      stopit( status, "Error mutation-4" );
   }
}

/*
 * The record that astSimplify produced a Mapping must not survive a change
 * to an attribute that the Mapping's own simplification depends on. A
 * ZoomMap whose Zoom is one is a UnitMap, and a PcdMap whose Disco is zero
 * is a UnitMap, so in both cases the change makes a simplification available
 * that the stale record would suppress.
 *
 * Each Mapping below is left held only by this function, since an attribute
 * of a shared Mapping cannot be changed at all.
 */
static void testselfsimplifyafterset( int *status ) {
   double centre[ 2 ] = { 0.0, 0.0 };
   AstMapping *input;
   AstMapping *pcd;
   AstMapping *resimp;
   AstMapping *zoom;
   int unit_pcd;
   int unit_zoom;

   if( *status != 0 || !astOK ) return;

   /* Simplifying two ZoomMaps in series gives a single simplified ZoomMap. */
   input = (AstMapping *) astCmpMap( astZoomMap( 2, 2.0, " " ),
                                     astZoomMap( 2, 3.0, " " ), 1, " " );
   zoom = astSimplify( input );
   input = astAnnul( input );

   astSetD( zoom, "Zoom", 1.0 );
   resimp = astSimplify( zoom );
   unit_zoom = astIsAUnitMap( resimp );
   resimp = astAnnul( resimp );
   zoom = astAnnul( zoom );

   /* Simplifying a PcdMap in series with a UnitMap gives back the PcdMap. */
   input = (AstMapping *) astCmpMap( astPcdMap( 0.01, centre, " " ),
                                     astUnitMap( 2, " " ), 1, " " );
   pcd = astSimplify( input );
   input = astAnnul( input );

   astSetD( pcd, "Disco", 0.0 );
   resimp = astSimplify( pcd );
   unit_pcd = astIsAUnitMap( resimp );
   resimp = astAnnul( resimp );
   pcd = astAnnul( pcd );

   if( !unit_zoom ) {
      printf( "A simplified ZoomMap set to a unit Zoom did not simplify to a "
              "UnitMap.\n" );
      stopit( status, "Error selfsimp-1" );
   }
   if( !unit_pcd ) {
      printf( "A simplified PcdMap set to a zero Disco did not simplify to a "
              "UnitMap.\n" );
      stopit( status, "Error selfsimp-2" );
   }
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   AstPolyMap *pm;
   double coeff[20], fit[6], lbnd[2], ubnd[2];

   /* Coefficients for a 2-in 2-out polynomial:
      out1 = 1.0 + 2.0*x
      out2 = 1.0 + 3.0*y + 3.0*y^2  */
   double c[] = { 1.0, 1, 0, 0,
                  2.0, 1, 1, 0,
                  1.0, 2, 0, 0,
                  3.0, 2, 0, 1,
                  3.0, 1, 0, 2 };

   memcpy( coeff, c, sizeof( coeff ) );

   astWatch( status );
   astBegin;

   pm = astPolyMap( 2, 2, 4, coeff, 0, coeff, " " );

   lbnd[0] = -1.0;
   lbnd[1] = -1.0;
   ubnd[0] = 1.0;
   ubnd[1] = 1.0;
   if( astLinearApprox( pm, lbnd, ubnd, 0.001, fit ) ) {
      if( fit[0] != 1.0 || fit[1] != 1.0 ||
          fit[2] != 2.0 || fit[3] != 0.0 ||
          fit[4] != 0.0 || fit[5] != 3.0 ) {
         stopit( status, "Error 0" );
      }
   } else {
      stopit( status, "Error 1" );
   }

   coeff[12] = AST__BAD;
   pm = astPolyMap( 2, 2, 4, coeff, 0, coeff, " " );

   if( astLinearApprox( pm, lbnd, ubnd, 0.001, fit ) ) {
      if( fit[0] != 1.0 || fit[1] != AST__BAD ||
          fit[2] != 2.0 || fit[3] != 0.0 ||
          fit[4] != AST__BAD || fit[5] != AST__BAD ) {
         stopit( status, "Error 2" );
      }
   } else {
      stopit( status, "Error 3" );
   }

   pm = astPolyMap( 2, 2, 5, coeff, 0, coeff, " " );
   if( astLinearApprox( pm, lbnd, ubnd, 0.001, fit ) ) {
      stopit( status, "Error 4" );
   }

   /* PermMap equality must take the referenced constant *values* into
      account, not just the constant *indices*. Two PermMaps that feed an
      axis from the same constant slot but store different values there
      must compare unequal. */
   {
      int perm1[1] = { -1 };       /* feed axis from constant index 0 */
      int perm2[1] = { -2 };       /* feed axis from constant index 1 */
      double con5[1] = { 5.0 };
      double con7[1] = { 7.0 };
      double con95[2] = { 9.0, 5.0 };  /* index 1 holds 5.0 */
      double con57[2] = { 5.0, 7.0 };
      double con59[2] = { 5.0, 9.0 };
      AstPermMap *a, *b;

      /* Same index (-1), differing constant values -> unequal. */
      a = astPermMap( 1, perm1, 1, perm1, con5, " " );
      b = astPermMap( 1, perm1, 1, perm1, con7, " " );
      if( astEqual( a, b ) ) stopit( status, "Error 5" );
      a = astAnnul( a );
      b = astAnnul( b );

      /* Same index (-1), identical constant values -> equal. */
      a = astPermMap( 1, perm1, 1, perm1, con5, " " );
      b = astPermMap( 1, perm1, 1, perm1, con5, " " );
      if( !astEqual( a, b ) ) stopit( status, "Error 6" );
      a = astAnnul( a );
      b = astAnnul( b );

      /* Different indices (-1 vs -2) referencing equal values (both 5.0)
         -> equal. */
      a = astPermMap( 1, perm1, 1, perm1, con5,  " " );
      b = astPermMap( 1, perm2, 1, perm2, con95, " " );
      if( !astEqual( a, b ) ) stopit( status, "Error 7" );
      a = astAnnul( a );
      b = astAnnul( b );

      /* Differing unreferenced surplus constants -> still equal (only the
         referenced slot, index 0, matters here). */
      a = astPermMap( 1, perm1, 1, perm1, con57, " " );
      b = astPermMap( 1, perm1, 1, perm1, con59, " " );
      if( !astEqual( a, b ) ) stopit( status, "Error 8" );
      a = astAnnul( a );
      b = astAnnul( b );
   }

   testequaldumpstable( status );

   testprotectedcmpequal( status );

   testprotectedcmpequalstable( status );

   testsimplevsinvert( status );

   testsimplevsinvertdump( status );

   testmutationclearssimple( status );

   testselfsimplifyafterset( status );

   astEnd;

   if( *status == 0 ) {
      printf( " All Mapping tests passed\n" );
   } else {
      printf( "Mapping tests failed\n" );
   }
   return *status;
}
