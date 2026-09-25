/*
 *  roundtrip — read one native-encoded Object and dump it straight back.
 *
 *  Usage:
 *     roundtrip <in> <out>
 *
 *  The output should be byte-identical to the input: reading a dump and
 *  writing it again is the identity, and the ctests registered against this
 *  program assert exactly that over the whole fixture corpus.
 *
 *  This is the only test that can see an attribute lost on load.  Both
 *  simplify test families call astSimplify after reading, and astSimplify sets
 *  IsSimple on every node it visits, so a record dropped by a loader is put
 *  straight back and the comparison cannot tell.  That is why the IsSimp
 *  loader defect fixed in this branch survived: nothing here compared a dump
 *  against a re-dump of the same object.
 *
 *  Channel attributes match those the fixtures were written with -- the
 *  defaults, as gen_simplify_fixtures uses -- so any difference is the
 *  library's, not the harness's.
 */
#include "ast.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* A fixture holding an IntraMap names a transformation function that has to be
   registered before the dump can be read, exactly as simplify.c does.  Without
   this the read fails and the fixture would have to be excluded, which would
   lose the round-trip check for nine fixtures. */
static void TestIntraTran( AstMapping *mapping, int npoint, int ncoord_in,
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

int main( int argc, char *argv[] ) {
   AstChannel *chin;
   AstChannel *chout;
   AstObject *obj;
   int status_value = 0;
   int *status = &status_value;

   if( argc != 3 ) {
      fprintf( stderr, "usage: roundtrip <in> <out>\n" );
      return 2;
   }

   astWatch( &status_value );

/* The same four registrations simplify.c makes, so the same fixtures are
   readable here. */
   astIntraReg_( "simplifyidentity", 1, 1, TestIntraTran,
                 AST__SIMPFI | AST__SIMPIF,
                 "Identity IntraMap for simplify fixtures",
                 "AST test suite", "starlink-ast", status );
   astIntraReg_( "simplifyidentity2", 1, 1, TestIntraTran,
                 AST__SIMPFI | AST__SIMPIF,
                 "Second identity IntraMap for simplify fixtures",
                 "AST test suite", "starlink-ast", status );
   astIntraReg_( "nosimpfi", 1, 1, TestIntraTran, AST__SIMPIF,
                 "IntraMap without SIMPFI for simplify fixtures",
                 "AST test suite", "starlink-ast", status );
   astIntraReg_( "nosimpif", 1, 1, TestIntraTran, AST__SIMPFI,
                 "IntraMap without SIMPIF for simplify fixtures",
                 "AST test suite", "starlink-ast", status );

   astBegin;

   chin = astChannel( NULL, NULL, "SourceFile=%s", argv[ 1 ] );
   obj = astRead( chin );
   if( !obj ) {
      fprintf( stderr, "roundtrip: astRead failed for %s\n", argv[ 1 ] );
      astEnd;
      return 1;
   }

   chout = astChannel( NULL, NULL, "SinkFile=%s", argv[ 2 ] );
   if( astWrite( chout, obj ) != 1 ) {
      fprintf( stderr, "roundtrip: astWrite failed for %s\n", argv[ 2 ] );
      astEnd;
      return 1;
   }

   astEnd;
   return ( status_value != 0 );
}
