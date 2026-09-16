/*
 *  ast_astequal: semantic equality check for two AST object files.
 *  Both files must be in the same encoding.
 *
 *  Usage:
 *     ast_astequal <file_a> <file_b> <encoding> [<attrs>]
 *
 *  Reads both files as AST Objects (via astChannel for AST dumps, via
 *  astFitsChan for every other encoding) and exits 0 if astEqual
 *  reports the two Objects equivalent, 1 if not, 2 on any internal
 *  failure.
 *
 *  This complements byte-level diff tests: astEqual absorbs
 *  platform-specific serialisation and 1-ulp arithmetic drift that a
 *  textual comparison can trip over, while the string test still
 *  catches unintentional changes to AST's output format.
 */

#include "ast.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>

static AstObject *read_file( const char *path, const char *encoding,
                             const char *attrs ) {
   AstObject *obj = NULL;

   if( strcasecmp( encoding, "AST" ) == 0 ) {
      AstChannel *chan = astChannel( NULL, NULL, "SourceFile=%s", path );
      obj = astRead( chan );
      astAnnul( chan );
   } else {
      AstFitsChan *fc = astFitsChan( NULL, NULL, "%s", attrs );
      FILE *fp = fopen( path, "r" );
      char line[256];
      if( !fp ) {
         fprintf( stderr, "ast_astequal: cannot open '%s'\n", path );
         astAnnul( fc );
         return NULL;
      }
      while( fgets( line, (int) sizeof( line ), fp ) ) {
         size_t n = strlen( line );
         while( n > 0 && ( line[n-1] == '\n' || line[n-1] == '\r' ) ) {
            line[--n] = '\0';
         }
         astPutFits( fc, line, 0 );
      }
      fclose( fp );
      astClear( fc, "CARD" );
      obj = astRead( fc );
      astAnnul( fc );
   }

   return obj;
}

/* Identity transformation used by the IntraMaps in the simplify fixtures.
   ast_astequal must register the same intra-map functions as simplify.c so
   that it can read fixture files that contain IntraMaps. */
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

   if( argc < 4 ) {
      fprintf( stderr,
               "Usage: ast_astequal <file_a> <file_b> <encoding> "
               "[<attrs>]\n" );
      return 2;
   }

   const char *fa    = argv[1];
   const char *fb    = argv[2];
   const char *enc   = argv[3];
   const char *attrs = ( argc >= 5 ) ? argv[4] : " ";

   astWatch( status );
   astTune( "ObjectCaching", 1 );

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

   AstObject *a = read_file( fa, enc, attrs );
   AstObject *b = read_file( fb, enc, attrs );

   if( !a || !b || !astOK ) {
      fprintf( stderr,
               "ast_astequal: could not read one or both files "
               "(%s, %s)\n", fa, fb );
      if( a ) astAnnul( a );
      if( b ) astAnnul( b );
      return 2;
   }

   int equal = astEqual( a, b );
   if( !equal ) {
      fprintf( stderr,
               "ast_astequal: astEqual returned 0 for %s vs %s\n",
               fa, fb );
   }

   astAnnul( a );
   astAnnul( b );

   if( !astOK ) return 2;
   return equal ? 0 : 1;
}
