/*
 *  simplify: read a Mapping from an AST dump, simplify it, and write
 *  the simplified Mapping to an output file.  Ported from
 *  ast_tester/simplify.f.
 *
 *  Usage:
 *     simplify <in file> <out file>
 *
 *  Parameters:
 *     in file   A text file containing an AST dump of a Mapping.
 *     out file  The output file.  Contains an AST dump of the
 *               simplified Mapping on exit.
 *
 *  Differences from the Fortran original:
 *
 *  - The SOURCE and SINK Fortran subroutines that shuttled lines through
 *    UNIT=10 are replaced by astChannel's SourceFile / SinkFile
 *    attributes; no callback plumbing is needed.
 *
 *  - Fortran DELETEFILE subroutine replaced by unlink(3).
 *
 *  - Exit code is non-zero on usage error or AST failure (Fortran
 *    silently RETURNs) so ctest can distinguish success from "no args
 *    supplied".
 */

#include "ast.h"

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

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
   int status_value = 0;
   int *status = &status_value;

   AstChannel *chan = NULL;
   AstObject *object = NULL;
   AstMapping *smap = NULL;

   if( argc < 3 ) {
      fprintf( stderr, "Usage: simplify <in file> <out file>\n" );
      return 1;
   }

   const char *in_file  = argv[1];
   const char *out_file = argv[2];

   astWatch( status );
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

   chan = astChannel( NULL, NULL, "SourceFile=%s", in_file );
   object = astRead( chan );
   astAnnul( chan );

   if( !object ) {
      fprintf( stderr, "simplify: no Mapping could be read from %s\n",
               in_file );
      return 1;
   }

   unlink( out_file );

   smap = astSimplify( object );

   chan = astChannel( NULL, NULL, "SinkFile=%s", out_file );
   if( astWrite( chan, smap ) != 1 ) {
      fprintf( stderr,
               "simplify: Simplified Mapping read from %s could not "
               "be written out.\n", in_file );
   }
   astAnnul( chan );
   astAnnul( smap );
   astAnnul( object );

   return astOK ? 0 : 1;
}
