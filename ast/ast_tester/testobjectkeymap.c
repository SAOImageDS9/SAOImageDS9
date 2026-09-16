/* Test program for the protected astGetKeyMap method of the Object class.
 *
 * astGetKeyMap is a protected method, so (like testaxis.c and
 * testunitnorm.c) this test is compiled with astCLASS defined and uses the
 * protected interface directly.
 *
 * The behaviour covered here includes:
 *   - Lazy creation of an empty KeyMap on first access
 *   - Repeated requests returning references to the same KeyMap
 *   - A deep-copy of the KeyMap taken by astCopy
 *   - Serialisation that preserves a non-empty KeyMap but omits an empty
 *     one (ensuring that existing Object dumps are unmodified)
 *   - Inclusion of the KeyMap in the reported ObjSize.
 */

#include <stdio.h>
#include <string.h>
#include "sae_par.h"
#include "ast_err.h"

/* Just ensure astCLASS is defined; what it's defined as is arbitrary for this
   purpose */
#define astCLASS testobjectkeymap
#include "memory.h"
#include "object.h"
#include "frame.h"
#include "keymap.h"

void astBegin_( void );
void astEnd_( int * );

static void TestCreate( int *status ) {
   AstFrame *frm = astFrame( 2, " ", status );
   AstKeyMap *km1;
   AstKeyMap *km2;

/* A new Object has no associated KeyMap, and astHasKeyMap does not create
   one. */
   if( astHasKeyMap( frm ) && astOK )
      astError( AST__INTER, "TestCreate: New Object already has a KeyMap.\n", status );  /* LCOV_EXCL_LINE */

/* A new Object lazily creates an empty KeyMap on the first request. */
   km1 = astGetKeyMap( frm );
   if( !km1 && astOK ) {
      astError( AST__INTER, "TestCreate: astGetKeyMap returned NULL.\n", status );  /* LCOV_EXCL_LINE */
   } else if( astMapSize( km1 ) != 0 && astOK ) {
      astError( AST__INTER, "TestCreate: New KeyMap not empty (size %d).\n", status, astMapSize( km1 ) );  /* LCOV_EXCL_LINE */
   }

/* After astGetKeyMap the Object reports that it has a KeyMap. */
   if( !astHasKeyMap( frm ) && astOK )
      astError( AST__INTER, "TestCreate: astHasKeyMap false after astGetKeyMap.\n", status );  /* LCOV_EXCL_LINE */

/* Repeated requests return references to the same KeyMap. Compare with
   astSame rather than the pointer values directly--since this is just testing
   the internal interface comparing pointers directly happens to work too, but
   that's an implementation detal. Better stick to the API contract, also in
   case we make this a public API later. */
   km2 = astGetKeyMap( frm );
   if( !astSame( km1, km2 ) && astOK )
      astError( AST__INTER, "TestCreate: astGetKeyMap returned different KeyMaps.\n", status );  /* LCOV_EXCL_LINE */

   km1 = astAnnul( km1 );
   km2 = astAnnul( km2 );
   frm = astAnnul( frm );
}

static void TestCopy( int *status ) {
   AstFrame *frm = astFrame( 2, " ", status );
   AstFrame *copy;
   AstKeyMap *km1;
   AstKeyMap *km2;
   int v;

/* Store some data in the KeyMap. */
   km1 = astGetKeyMap( frm );
   astMapPut0I( km1, "answer", 42, NULL );

/* astCopy takes a deep-copy of the KeyMap. */
   copy = astCopy( frm );
   km2 = astGetKeyMap( copy );
   if( astSame( km1, km2 ) && astOK )
      astError( AST__INTER, "TestCopy: Copy shares its KeyMap with the original.\n", status );  /* LCOV_EXCL_LINE */
   v = 0;
   if( ( !astMapGet0I( km2, "answer", &v ) || v != 42 ) && astOK )
      astError( AST__INTER, "TestCopy: Copied KeyMap is missing data (got %d).\n", status, v );  /* LCOV_EXCL_LINE */

/* Modifying the copy's KeyMap does not affect the original. */
   astMapPut0I( km2, "answer", 7, NULL );
   v = 0;
   astMapGet0I( km1, "answer", &v );
   if( v != 42 && astOK )
      astError( AST__INTER, "TestCopy: Modifying the copy affected the original (got %d).\n", status, v );  /* LCOV_EXCL_LINE */

   km1 = astAnnul( km1 );
   km2 = astAnnul( km2 );
   frm = astAnnul( frm );
   copy = astAnnul( copy );
}

static void TestToString( int *status ) {
   AstFrame *frm1 = astFrame( 2, " ", status );
   AstFrame *frm2;
   AstFrame *empty;
   AstKeyMap *km1;
   AstKeyMap *km2;
   AstKeyMap *km3;
   char *str;
   int v;

/* Store some data in the KeyMap. */
   km1 = astGetKeyMap( frm1 );
   astMapPut0I( km1, "answer", 42, NULL );

/* A non-empty KeyMap survives a round trip. */
   str = astToString( frm1 );
   if( str && !strstr( str, "KeyMap" ) && astOK )
      astError( AST__INTER, "TestToString: Non-empty KeyMap was not serialised.\n", status );  /* LCOV_EXCL_LINE */
   frm2 = astFromString( str );
   km2 = astGetKeyMap( frm2 );
   v = 0;
   if( ( !astMapGet0I( km2, "answer", &v ) || v != 42 ) && astOK )
      astError( AST__INTER, "TestToString: Reloaded KeyMap is missing data (got %d).\n", status, v );  /* LCOV_EXCL_LINE */
   str = astFree( str );

/* An empty KeyMap is not serialised at all, so the dump of an Object whose
   KeyMap exists but is empty must be free of any "KeyMap" item. */
   empty = astFrame( 2, " ", status );
   km3 = astGetKeyMap( empty );
   str = astToString( empty );
   if( str && strstr( str, "KeyMap" ) && astOK )
      astError( AST__INTER, "TestToString: Empty KeyMap was serialised.\n", status );  /* LCOV_EXCL_LINE */
   str = astFree( str );

   km1 = astAnnul( km1 );
   km2 = astAnnul( km2 );
   km3 = astAnnul( km3 );
   frm1 = astAnnul( frm1 );
   frm2 = astAnnul( frm2 );
   empty = astAnnul( empty );
}

static void TestObjSize( int *status ) {
   AstFrame *frm = astFrame( 2, " ", status );
   AstKeyMap *km;
   size_t kmsize;
   size_t size0;
   size_t size1;

/* The reported size of the Object before it has an associated KeyMap. */
   size0 = astGetObjSize( frm );

/* Creating the KeyMap and re-measuring should increase the reported size
   by exactly the size of the KeyMap, confirming that astGetObjSize takes
   the associated KeyMap into account. */
   km = astGetKeyMap( frm );
   kmsize = astGetObjSize( km );

   if( kmsize == 0 && astOK )
      astError( AST__INTER, "TestObjSize: KeyMap size should be non-zero\n", status ); /* LCOV_EXCL_LINE */

   size1 = astGetObjSize( frm );
   if( size1 != size0 + kmsize && astOK )
      astError( AST__INTER, "TestObjSize: ObjSize does not include the KeyMap (%d != %d + %d).\n", status, (int) size1, (int) size0, (int) kmsize );  /* LCOV_EXCL_LINE */

   km = astAnnul( km );
   frm = astAnnul( frm );
}

int main( void ) {
   int _status = SAI__OK;
   int *status = &_status;
   astWatch( status );
   astBegin_();

   TestCreate( status );
   TestCopy( status );
   TestToString( status );
   TestObjSize( status );

   astEnd_( status );

   if( astOK ) {
      printf(" All Object KeyMap tests passed\n");
      return 0;
   } else {
      printf("Object KeyMap tests failed\n");  /* LCOV_EXCL_LINE */
      return 1;
   }
}
