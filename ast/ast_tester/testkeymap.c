/*
 *  Test the KeyMap class.
 *  Converted from the Fortran test testkeymap.f.
 *
 *  Differences from the Fortran original:
 *
 *  - String handling: C astMapGet0C returns a pointer to an internal string
 *    (const char **), not a fixed-length character buffer. No separate
 *    length argument is returned; use strlen() if needed.
 *
 *  - astMapGetC (vector-as-string): The C version also takes const char **
 *    and returns a pointer. For this test vector the C API returns
 *    "(Hello, ,  Hello)" with length 17, and the test checks that exact
 *    rendering.
 *
 *  - astMapGet1C: in C, takes (map, key, l, mxval, &nval, buffer) where
 *    buffer is char[mxval][l] and strings are padded to length l. The
 *    Fortran cvec entries are 10 chars wide, so l=10 here.
 *
 *  - astMapGetElemC: in C, takes (map, key, l, elem, buffer) where buffer
 *    is char[l]. Use a buffer of 200 for safety.
 *
 *  - checkdump: uses astToString/astFromString for the channel round-trip,
 *    then compares entry-by-entry like the Fortran version.
 *
 *  - VAL__MAXI = INT_MAX, VAL__MINI = INT_MIN (from <limits.h>).
 *
 *  - The Fortran `cval .ne. 'Yes'` checks where cval is declared CHARACTER*20
 *    mean the entire 20-char padded string is compared. In C we compare only
 *    the returned string with strcmp, which is equivalent since astMapGet0C
 *    returns a properly null-terminated string.
 *
 *  - The A6/A7 checks: after astMapPut1C, astMapGet0C returns the first
 *    element string and astMapLenC reports the maximum stored string
 *    length. For the test vector used here that maximum length is 7
 *    ("  Hello"), not the Fortran CHARACTER width of 10.
 *
 *  - MAPCOPY tests that checked inside the .not. ast_isakeymap branch are
 *    actually dead code in Fortran (the branch is taken when NOT a KeyMap).
 *    The C conversion preserves the same logic.
 */
#include "ast.h"
#include "ast_err.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <stdint.h>

/* VAL__MAXI and VAL__MINI equivalents */
#define VAL__MAXI INT_MAX
#define VAL__MINI INT_MIN

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

/*
 * checkdump - serialize obj to string, read back, compare key counts,
 * types, and string representations of non-object entries.
 */
static void checkdump( AstObject *obj, const char *text, int *status ) {
   char *pickle;
   AstKeyMap *result;
   AstObject *obj1, *obj2;
   const char *txt1, *txt2;
   const char *key;
   int size, i, type;

   if( *status != 0 ) return;

   pickle = astToString( obj );
   if( !pickle ) {
      printf( "%s\n", text );
      stopit( status, "Cannot write supplied object to channel" );
      return;
   }

   result = (AstKeyMap *) astFromString( pickle );
   pickle = astFree( pickle );

   if( !result ) {
      printf( "%s\n", text );
      stopit( status, "Cannot read object from channel" );
      return;
   }

   size = astMapSize( result );
   if( astMapSize( (AstKeyMap *)obj ) != size ) {
      printf( "checkDump size mismatch: %d vs %d\n",
              size, astMapSize( (AstKeyMap *)obj ) );
      stopit( status, "checkDump 1" );
   } else {
      for( i = 0; i < size && astOK; i++ ) {
         key = astMapKey( result, i );
         type = astMapType( result, key );
         if( astMapType( (AstKeyMap *)obj, key ) != type ) {
            printf( "Type mismatch for key %s: %d vs %d\n",
                    key, type, astMapType( (AstKeyMap *)obj, key ) );
            stopit( status, "checkDump 4" );
         } else {
            if( type == AST__OBJECTTYPE ) {
               if( !astMapGet0A( result, key, &obj1 ) )
                  stopit( status, "checkDump 5" );
               if( !astMapGet0A( (AstKeyMap *)obj, key, &obj2 ) )
                  stopit( status, "checkDump 6" );
               if( strcmp( astGetC( obj1, "class" ),
                           astGetC( obj2, "class" ) ) != 0 ) {
                  stopit( status, "checkDump 7" );
               }
            } else {
               if( !astMapGet0C( result, key, &txt1 ) )
                  stopit( status, "checkDump 8" );
               if( !astMapGet0C( (AstKeyMap *)obj, key, &txt2 ) )
                  stopit( status, "checkDump 9" );
               if( strcmp( txt1, txt2 ) != 0 ) {
                  printf( "String mismatch for key %s: '%s' vs '%s'\n",
                          key, txt1, txt2 );
                  stopit( status, "checkDump 10" );
               }
            }
         }
      }
   }

   astAnnul( result );
}

/*
 * testdumpstable: a KeyMap dump must be byte stable, both under repeated
 * write and read cycles and against the order in which the entries were
 * added.
 *
 * The keys below are chosen so that DELTA, EPSILON and ETA all hash to
 * the same element of the default sized hash table. Entries sharing a
 * table element are chained, so only for such a set does the order in
 * which the table is walked depend on the order the entries were added.
 * A key set with no collisions would exercise nothing.
 */
static void testdumpstable( int *status ) {
   AstKeyMap *km1;
   AstKeyMap *km2;
   AstKeyMap *reload;
   const char *keys[ 6 ] = { "DELTA", "EPSILON", "ETA", "ALPHA",
                             "BETA", "GAMMA" };
   const int order[ 6 ] = { 4, 2, 5, 0, 3, 1 };
   char *dump1;
   char *dump2;
   char *dump3;
   int got_dumps;
   int i;
   int ok_insorder;
   int ok_roundtrip;

   if( *status != 0 || !astOK ) return;

   km1 = astKeyMap( " " );
   for( i = 0; i < 6; i++ ) {
      astMapPut0I( km1, keys[ i ], i + 1, " " );
   }
   dump1 = astToString( km1 );

   /* A dump, reloaded and dumped again, must reproduce itself exactly. */
   reload = dump1 ? (AstKeyMap *) astFromString( dump1 ) : NULL;
   dump2 = reload ? astToString( reload ) : NULL;

   /* The same entries added in a different order must dump identically. */
   km2 = astKeyMap( " " );
   for( i = 0; i < 6; i++ ) {
      astMapPut0I( km2, keys[ order[ i ] ], order[ i ] + 1, " " );
   }
   dump3 = astToString( km2 );

   /* Record the outcomes before reporting any of them, since reporting a
      failure sets the status and so suppresses any AST call after it. */
   ok_roundtrip = ( dump1 && dump2 && !strcmp( dump1, dump2 ) );
   ok_insorder = ( dump1 && dump3 && !strcmp( dump1, dump3 ) );
   got_dumps = ( dump1 && dump2 && dump3 );

   if( reload ) reload = astAnnul( reload );
   if( dump3 ) dump3 = astFree( dump3 );
   if( dump2 ) dump2 = astFree( dump2 );
   if( dump1 ) dump1 = astFree( dump1 );
   km2 = astAnnul( km2 );
   km1 = astAnnul( km1 );

   if( !got_dumps ) {
      stopit( status, "Error dumpstable-1" );
   }
   if( !ok_roundtrip ) {
      printf( "Dump changed on a write, read, write cycle.\n" );
      stopit( status, "Error dumpstable-2" );
   }
   if( !ok_insorder ) {
      printf( "Dump depends on the order the entries were added.\n" );
      stopit( status, "Error dumpstable-3" );
   }
}

static void testsorting( int *status ) {
   AstKeyMap *km;
   const char *keys[5]  = { "ABC", "zzzzzzzzzzz", "this_is_a_key",
                             "HE-HE", "A" };
   const char *skeys[5] = { "A", "ABC", "HE-HE", "this_is_a_key",
                             "zzzzzzzzzzz" };
   const char *key;
   int i;

   if( *status != 0 ) return;

   /* Value Age sorting */

   /* First test adding entries into an already sorted KeyMap */
   km = astKeyMap( "Sortby=AgeDown" );

   for( i = 0; i < 5; i++ ) {
      astMapPut0I( km, keys[i], i + 1, " " );
   }

   for( i = 0; i < 5; i++ ) {
      key = astMapKey( km, i );
      if( strcmp( key, keys[i] ) != 0 && astOK ) {
         printf( "Key %d is '%s' (should be '%s')\n",
                 i + 1, key, keys[i] );
         stopit( status, "Error Sort 1" );
         goto cleanup_sort1;
      }
   }

   /* Now test sorting existing entries in a KeyMap */
   astSet( km, "Sortby=AgeUp" );

   for( i = 0; i < 5; i++ ) {
      key = astMapKey( km, i );
      if( strcmp( key, keys[4 - i] ) != 0 && astOK ) {
         printf( "Key %d is '%s' (should be '%s')\n",
                 i + 1, key, keys[4 - i] );
         stopit( status, "Error Sort 2" );
         goto cleanup_sort1;
      }
   }

   /* Changing the value of an existing entry should change its position */
   astMapPut0I( km, keys[0], 10, " " );
   astSet( km, "Sortby=AgeDown" );

   for( i = 0; i < 5; i++ ) {
      key = astMapKey( km, i );
      if( i == 4 ) {
         if( strcmp( key, keys[0] ) != 0 && astOK ) {
            printf( "Key 1 is '%s' (should be '%s')\n", key, keys[0] );
            stopit( status, "Error Sort 2b" );
            goto cleanup_sort1;
         }
      } else if( strcmp( key, keys[i + 1] ) != 0 && astOK ) {
         printf( "Key %d is '%s' (should be '%s')\n",
                 i + 1, key, keys[i + 1] );
         stopit( status, "Error Sort 2c" );
         goto cleanup_sort1;
      }
   }

cleanup_sort1:
   astAnnul( km );

   /* Key Age sorting */

   km = astKeyMap( "Sortby=KeyAgeDown" );

   for( i = 0; i < 5; i++ ) {
      astMapPut0I( km, keys[i], i + 1, " " );
   }

   for( i = 0; i < 5; i++ ) {
      key = astMapKey( km, i );
      if( strcmp( key, keys[i] ) != 0 && astOK ) {
         printf( "Key %d is '%s' (should be '%s')\n",
                 i + 1, key, keys[i] );
         stopit( status, "Error Sort 0" );
         goto cleanup_sort2;
      }
   }

   astSet( km, "Sortby=KeyAgeUp" );

   for( i = 0; i < 5; i++ ) {
      key = astMapKey( km, i );
      if( strcmp( key, keys[4 - i] ) != 0 && astOK ) {
         printf( "Key %d is '%s' (should be '%s')\n",
                 i + 1, key, keys[4 - i] );
         stopit( status, "Error Sort -1" );
         goto cleanup_sort2;
      }
   }

   /* Changing the value of an existing entry should NOT change its position */
   astMapPut0I( km, keys[0], 10, " " );
   astSet( km, "Sortby=KeyAgeDown" );

   for( i = 0; i < 5; i++ ) {
      key = astMapKey( km, i );
      if( strcmp( key, keys[i] ) != 0 && astOK ) {
         printf( "Key %d is '%s' (should be '%s')\n",
                 i + 1, key, keys[i] );
         stopit( status, "Error Sort -2" );
         goto cleanup_sort2;
      }
   }

cleanup_sort2:
   astAnnul( km );

   /* Key (alphabetical) sorting */

   km = astKeyMap( "Sortby=KeyUp" );

   for( i = 0; i < 5; i++ ) {
      astMapPut0I( km, keys[i], i + 1, " " );
   }

   for( i = 0; i < 5; i++ ) {
      key = astMapKey( km, i );
      if( strcmp( key, skeys[i] ) != 0 && astOK ) {
         printf( "Key %d is '%s' (should be '%s')\n",
                 i + 1, key, skeys[i] );
         stopit( status, "Error Sort 3" );
         goto cleanup_sort3;
      }
   }

   astSet( km, "Sortby=KeyDown" );

   for( i = 0; i < 5; i++ ) {
      key = astMapKey( km, i );
      if( strcmp( key, skeys[4 - i] ) != 0 && astOK ) {
         printf( "Key %d is '%s' (should be '%s')\n",
                 i + 1, key, skeys[4 - i] );
         stopit( status, "Error Sort 4" );
         goto cleanup_sort3;
      }
   }

cleanup_sort3:
   astAnnul( km );
}

static void testcasesens( int *status ) {
   AstKeyMap *map;
   const char *sval;
   int l;

   if( *status != 0 ) return;

   map = astKeyMap( "KeyCase=0" );
   astMapPut0I( map, "Freds", 1999, "com 1" );

   if( !astMapHasKey( map, "fReDs" ) ) {
      stopit( status, "Error case 1" );
   }

   if( strcmp( astMapKey( map, 0 ), "FREDS" ) != 0 ) {
      stopit( status, "Error case 2" );
   }

   if( !astMapGet0C( map, "freds", &sval ) ) {
      stopit( status, "Error case 3" );
   } else {
      l = (int) strlen( sval );
      if( strcmp( sval, "1999" ) != 0 ) {
         stopit( status, "Error case 4" );
      } else if( l != 4 ) {
         stopit( status, "Error case 4b" );
      }
   }

   /* Try setting KeyCase=0 on a non-empty map - should be an error (NOWRT) */
   astSetL( map, "KeyCase", 0 );
   if( astOK ) {
      /* Try to clear KeyCase - should fail with AST__NOWRT */
      astClear( map, "KeyCase" );
      if( !astOK ) {
         if( astStatus == AST__NOWRT ) {
            astClearStatus;
         }
         /* else leave the error */
      } else {
         stopit( status, "Error case 5" );
      }
   }

   if( astMapSize( map ) != 1 ) {
      stopit( status, "Error case 6" );
   }

   astMapRemove( map, "freDs" );

   if( astMapSize( map ) != 0 ) {
      stopit( status, "Error case 7" );
   }

   astClear( map, "KeyCase" );
   astMapPut0I( map, "Freds", 1999, "com 1" );
   if( astMapHasKey( map, " fReDs" ) ) {
      stopit( status, "Error case 8" );
   }

   astAnnul( map );
}

/* astMapIterate is a protected KeyMap method, so it is not exposed via
 * the public ast.h header included by this test. Declare the underlying
 * function directly; it is exported by libast for use by other classes.
 */
extern const char *astMapIterate_( AstKeyMap *, int, int * );

/*
 * testiterate: astMapIterate must terminate for a KeyMap with SortBy set.
 * The sorted list is circular, so a walk that does not detect the wrap
 * runs forever. The loop below is bounded so a regression fails the test
 * rather than hanging the suite.
 */
static void testiterate( int *status ) {
   AstKeyMap *km;
   const char *key;
   int nseen;

   if( !astOK ) return;

   km = astKeyMap( "SortBy=KeyUp" );
   astMapPut0I( km, "AAA", 1, " " );
   astMapPut0I( km, "BBB", 2, " " );
   astMapPut0I( km, "CCC", 3, " " );

   nseen = 0;
   key = astMapIterate_( astCheckKeyMap( km ), 1, status );
   while( key && astOK && nseen < 100 ) {
      nseen++;
      key = astMapIterate_( astCheckKeyMap( km ), 0, status );
   }

   if( nseen != 3 ) {
      printf( "astMapIterate yielded %d keys, expected 3\n", nseen );
      stopit( status, "Error iterate-sorted" );
   }

   km = astAnnul( km );
}

/*
 * testrenamelocked: a rename refused because the KeyMap is locked must
 * leave the KeyMap unchanged, not consume the entry.
 */
static void testrenamelocked( int *status ) {
   AstKeyMap *km;
   int ival;
   int local_status;

   if( !astOK ) return;

   km = astKeyMap( " " );
   astMapPut0I( km, "KEEP", 42, " " );
   astSetI( km, "MapLocked", 1 );

   /* This rename must fail: NEWKEY is not already a known key. */
   local_status = 0;
   astWatch( &local_status );
   astMapRename( km, "KEEP", "NEWKEY" );
   if( local_status == 0 ) {
      stopit( status, "Error rename-locked-noerr" );
   }
   astClearStatus;
   astWatch( status );

   /* The entry must still be present under its original key. */
   if( !astMapHasKey( km, "KEEP" ) ) {
      stopit( status, "Error rename-locked-lost" );
   } else if( !astMapGet0I( km, "KEEP", &ival ) ) {
      stopit( status, "Error rename-locked-unreadable" );
   } else if( ival != 42 ) {
      printf( "got %d want 42\n", ival );
      stopit( status, "Error rename-locked-value" );
   }

   if( astMapHasKey( km, "NEWKEY" ) ) {
      stopit( status, "Error rename-locked-newkey" );
   }

   km = astAnnul( km );
}

/*
 * testconvrange: converting an out-of-range Double to a narrow integer
 * type must saturate at the type's limit rather than producing an
 * undefined result.
 */
static void testconvrange( int *status ) {
   AstKeyMap *km;
   int ival;
   short int sval;
   unsigned char bval;
   int64_t kval;
   double nanval;

   if( !astOK ) return;

   km = astKeyMap( " " );
   astMapPut0D( km, "BIG", 5000000100.0, " " );
   astMapPut0D( km, "NEG", -5000000100.0, " " );

   nanval = nan( "" );
   astMapPut0D( km, "NAN", nanval, " " );

   if( !astMapGet0I( km, "BIG", &ival ) ) {
      stopit( status, "Error range-get-i" );
   } else if( ival != INT_MAX ) {
      printf( "int: got %d want %d\n", ival, INT_MAX );
      stopit( status, "Error range-int-max" );
   }

   if( !astMapGet0I( km, "NEG", &ival ) ) {
      stopit( status, "Error range-get-i2" );
   } else if( ival != INT_MIN ) {
      printf( "int: got %d want %d\n", ival, INT_MIN );
      stopit( status, "Error range-int-min" );
   }

   if( !astMapGet0S( km, "BIG", &sval ) ) {
      stopit( status, "Error range-get-s" );
   } else if( sval != SHRT_MAX ) {
      printf( "short: got %d want %d\n", (int) sval, SHRT_MAX );
      stopit( status, "Error range-short-max" );
   }

   if( !astMapGet0B( km, "BIG", &bval ) ) {
      stopit( status, "Error range-get-b" );
   } else if( bval != UCHAR_MAX ) {
      printf( "byte: got %d want %d\n", (int) bval, UCHAR_MAX );
      stopit( status, "Error range-byte-max" );
   }

   /* A negative value must saturate at zero for the unsigned type, not
      convert to a large unsigned value. */
   if( !astMapGet0B( km, "NEG", &bval ) ) {
      stopit( status, "Error range-get-b2" );
   } else if( bval != 0 ) {
      printf( "byte: got %d want 0\n", (int) bval );
      stopit( status, "Error range-byte-min" );
   }

   /* A NaN has no integer value, so every narrow-integer conversion must
      return the defined value 0 rather than performing an undefined
      NaN-to-integer cast. */
   if( !astMapGet0I( km, "NAN", &ival ) ) {
      stopit( status, "Error range-get-i3" );
   } else if( ival != 0 ) {
      printf( "int: got %d want 0\n", ival );
      stopit( status, "Error range-nan-int" );
   }

   if( !astMapGet0S( km, "NAN", &sval ) ) {
      stopit( status, "Error range-get-s2" );
   } else if( sval != 0 ) {
      printf( "short: got %d want 0\n", (int) sval );
      stopit( status, "Error range-nan-short" );
   }

   if( !astMapGet0K( km, "NAN", &kval ) ) {
      stopit( status, "Error range-get-k" );
   } else if( kval != 0 ) {
      printf( "int64: got %" PRId64 " want 0\n", kval );
      stopit( status, "Error range-nan-int64" );
   }

   if( !astMapGet0B( km, "NAN", &bval ) ) {
      stopit( status, "Error range-get-b3" );
   } else if( bval != 0 ) {
      printf( "byte: got %d want 0\n", (int) bval );
      stopit( status, "Error range-nan-byte" );
   }

   km = astAnnul( km );
}

/*
 * testconvstring: a numeric string too large for int must not convert to
 * a wrapped value. The %lf fallback in ConvertValue handles it, and its
 * result saturates.
 */
static void testconvstring( int *status ) {
   AstKeyMap *km;
   int ival;
   int local_status;

   if( !astOK ) return;

   km = astKeyMap( " " );
   astMapPut0C( km, "OVER", "9999999999", " " );
   astMapPut0C( km, "HUGE", "99999999999999999999999999999999999999", " " );
   astMapPut0C( km, "OK", "42", " " );
   astMapPut0C( km, "OKSPACE", " 42 ", " " );
   astMapPut0C( km, "BLANK", "   ", " " );
   astMapPut0C( km, "TRAIL", "12abc", " " );

   /* In range values, with and without surrounding space, are unchanged. */
   if( !astMapGet0I( km, "OK", &ival ) || ival != 42 ) {
      stopit( status, "Error convstr-ok" );
   }
   if( !astMapGet0I( km, "OKSPACE", &ival ) || ival != 42 ) {
      stopit( status, "Error convstr-okspace" );
   }

   /* Non numeric input is still refused. Unlike a missing key,
      astMapGet0I reports a genuine AST error when a string value cannot
      be parsed at all, so these two checks run under a private status:
      otherwise the correctly reported refusal would leave the shared
      status set, and every subsequent AST call in this function
      (including the OVER and HUGE checks below) would silently no-op. */
   local_status = 0;
   astWatch( &local_status );

   if( astMapGet0I( km, "BLANK", &ival ) ) {
      stopit( status, "Error convstr-blank" );
   }
   astClearStatus;

   if( astMapGet0I( km, "TRAIL", &ival ) ) {
      stopit( status, "Error convstr-trail" );
   }
   astClearStatus;

   astWatch( status );

   /* Magnitude overflow must saturate, not wrap. */
   if( !astMapGet0I( km, "OVER", &ival ) ) {
      stopit( status, "Error convstr-over-get" );
   } else if( ival != INT_MAX ) {
      printf( "over: got %d want %d\n", ival, INT_MAX );
      stopit( status, "Error convstr-over" );
   }

   if( !astMapGet0I( km, "HUGE", &ival ) ) {
      stopit( status, "Error convstr-huge-get" );
   } else if( ival != INT_MAX ) {
      printf( "huge: got %d want %d\n", ival, INT_MAX );
      stopit( status, "Error convstr-huge" );
   }

   km = astAnnul( km );
}

/*
 * testemptyvector: a zero length vector has no representation in a
 * KeyMap entry, where nel == 0 means scalar. The put must be refused
 * rather than creating an entry that cannot be dumped.
 */
static void testemptyvector( int *status ) {
   AstKeyMap *km;
   AstObject *avec[ 1 ];
   const char *cvec[ 1 ];
   int ivec[ 1 ];
   int local_status;
   char *dump;

   if( !astOK ) return;

   km = astKeyMap( " " );

   local_status = 0;
   astWatch( &local_status );
   astMapPut1I( km, "EMPTYI", 0, ivec, " " );
   if( local_status == 0 ) {
      stopit( status, "Error emptyvec-int-noerr" );
   }
   astClearStatus;

   local_status = 0;
   cvec[ 0 ] = "unused";
   astMapPut1C( km, "EMPTYC", 0, cvec, " " );
   if( local_status == 0 ) {
      stopit( status, "Error emptyvec-str-noerr" );
   }
   astClearStatus;

   local_status = 0;
   avec[ 0 ] = (AstObject *) astKeyMap( " " );
   astMapPut1A( km, "EMPTYA", 0, avec, " " );
   if( local_status != AST__NELIN ) {
      stopit( status, "Error emptyvec-obj-noerr" );
   }
   astClearStatus;
   astWatch( status );
   avec[ 0 ] = astAnnul( avec[ 0 ] );

   /* None of the keys may have been created, and the KeyMap must still
      dump. */
   if( astMapHasKey( km, "EMPTYI" ) ) {
      stopit( status, "Error emptyvec-int-present" );
   }
   if( astMapHasKey( km, "EMPTYC" ) ) {
      stopit( status, "Error emptyvec-str-present" );
   }
   if( astMapHasKey( km, "EMPTYA" ) ) {
      stopit( status, "Error emptyvec-obj-present" );
   }

   astMapPut0I( km, "REAL", 7, " " );
   dump = astToString( km );
   if( !dump ) {
      stopit( status, "Error emptyvec-dump" );
   } else {
      dump = astFree( dump );
   }

   km = astAnnul( km );
}

/*
 * testundefelem: astMapGetElem<X> must report failure for an undefined
 * entry, as astMapGet0<X> and astMapGet1<X> already do.
 */
static void testundefelem( int *status ) {
   AstKeyMap *km;
   AstObject *aval;
   int ival;
   int local_status;
   char cbuf[ 200 ];

   if( !astOK ) return;

   km = astKeyMap( " " );
   astMapPutU( km, "UNDEF", " " );

   /* The scalar and vector accessors already report failure. */
   if( astMapGet0I( km, "UNDEF", &ival ) ) {
      stopit( status, "Error undef-get0" );
   }

   /* The element accessor must agree with them. */
   if( astMapGetElemI( km, "UNDEF", 0, &ival ) ) {
      stopit( status, "Error undef-getelem-i" );
   }

   if( astMapGetElemC( km, "UNDEF", sizeof( cbuf ), 0, cbuf ) ) {
      stopit( status, "Error undef-getelem-c" );
   }

   aval = NULL;
   if( astMapGetElemA( km, "UNDEF", 0, &aval ) ) {
      stopit( status, "Error undef-getelem-a" );
   }

   /* An out-of-range index on an undefined entry must still be reported
      as a bad index, not silently folded into the "no value" case. This
      call is expected to raise an error, so use a private status. */
   local_status = 0;
   astWatch( &local_status );
   if( astMapGetElemI( km, "UNDEF", 5, &ival ) ) {
      stopit( status, "Error undef-getelem-i-oob-result" );
   }
   if( local_status != AST__MPVIN ) {
      stopit( status, "Error undef-getelem-i-oob-status" );
   }
   astClearStatus;
   astWatch( status );

   km = astAnnul( km );
}

/*
 * testlockedroundtrip: a locked, non-empty KeyMap must survive a dump
 * and reload. MapLocked has to be applied after the entries are read,
 * or every put during the load is refused.
 */
static void testlockedroundtrip( int *status ) {
   AstKeyMap *km;
   AstKeyMap *km2;
   AstKeyMap *nested;
   AstObject *obj;
   char *dump;
   int ival;
   int local_status;

   if( !astOK ) return;

   km = astKeyMap( " " );
   astMapPut0I( km, "AAA", 1, " " );
   astMapPut0I( km, "BBB", 2, " " );

   nested = astKeyMap( " " );
   astMapPut0I( nested, "INNER", 3, " " );
   astMapPut0A( km, "NEST", nested, " " );
   nested = astAnnul( nested );

   astSetI( km, "MapLocked", 1 );

   dump = astToString( km );
   if( !dump ) {
      stopit( status, "Error locked-dump" );
      km = astAnnul( km );
      return;
   }

   /* Reading back a locked, non-empty KeyMap is expected to succeed,
      but fails before the entries-then-MapLocked ordering fix. Use a
      private status so a library error raised inside astFromString
      does not itself consume the shared status before the failure
      below can be reported. */
   local_status = 0;
   astWatch( &local_status );
   km2 = astFromString( dump );
   dump = astFree( dump );
   astClearStatus;
   astWatch( status );

   if( local_status != 0 || !km2 ) {
      stopit( status, "Error locked-reload" );
   } else {
      if( !astMapGet0I( km2, "AAA", &ival ) || ival != 1 ) {
         stopit( status, "Error locked-reload-aaa" );
      }
      if( !astGetI( km2, "MapLocked" ) ) {
         stopit( status, "Error locked-reload-flag" );
      }

      /* The flag must reach nested KeyMaps too. */
      if( !astMapGet0A( km2, "NEST", &obj ) ) {
         stopit( status, "Error locked-reload-nest" );
      } else {
         if( !astGetI( obj, "MapLocked" ) ) {
            stopit( status, "Error locked-reload-nestflag" );
         }
         obj = astAnnul( obj );
      }
      km2 = astAnnul( km2 );
   }

   km = astAnnul( km );
}

/*
 * testcopyentrycase: a KeyMap copy must express the copied key in the
 * destination KeyMap's own KeyCase, both when searching the destination
 * and when storing the entry in it. KeyCase can only be changed while a
 * KeyMap is empty, so every key a KeyMap holds should be in that
 * KeyMap's own casing.
 */
static void testcopyentrycase( int *status ) {
   AstKeyMap *src;
   AstKeyMap *dst;
   AstKeyMap *bulk;
   int ival;

   if( !astOK ) return;

/* Source is case sensitive; destination is not. */
   src = astKeyMap( "KeyCase=1" );
   dst = astKeyMap( "KeyCase=0" );

   astMapPut0I( src, "MixedKey", 11, " " );

/* The destination already holds the key under its own folded form. */
   astMapPut0I( dst, "MIXEDKEY", 99, " " );

/* Argument order is (destination, key, source, merge). The merge flag
   only affects what happens when the entry holds a KeyMap and the
   destination already has a KeyMap under that key, so it is irrelevant
   to this integer entry. */
   astMapCopyEntry( dst, "MixedKey", src, 0 );

   if( !astOK ) {
      stopit( status, "Error copyentry-status" );
      astClearStatus;
   } else {

/* The destination must not have gained a second, differently cased copy
   of the same logical key. */
      if( astMapSize( dst ) != 1 ) {
         printf( "destination has %d entries, expected 1\n",
                 astMapSize( dst ) );
         stopit( status, "Error copyentry-dup" );
      }

/* The copied value must be retrievable under the destination's own
   casing rule. This is the assertion the lookup-only fix broke. */
      if( astOK && !astMapGet0I( dst, "MIXEDKEY", &ival ) ) {
         stopit( status, "Error copyentry-missing" );
      } else if( astOK && ival != 11 ) {
         printf( "got %d want 11\n", ival );
         stopit( status, "Error copyentry-value" );
      }

/* The key as actually stored must be the destination's folded form. This
   catches an entry that is findable only because the search and the
   stored key are wrong in the same way. */
      if( astOK && strcmp( astMapKey( dst, 0 ), "MIXEDKEY" ) ) {
         printf( "stored key is '%s', expected 'MIXEDKEY'\n",
                 astMapKey( dst, 0 ) );
         stopit( status, "Error copyentry-storedkey" );
      }
   }

/* The bulk astMapCopy path shares the same entry-copying helper and has
   the same defect. A key absent from the destination exercises the
   new-entry branch. Only run this if the checks above have not already
   recorded a failure: astMapCopy would be a no-op under a bad status,
   and the "if( !astOK )" branch below would then call astClearStatus
   unconditionally, erasing an earlier failure rather than reporting a
   fresh one of its own. */
   bulk = astKeyMap( "KeyCase=0" );
   if( astOK ) {
      astMapCopy( bulk, src );

      if( !astOK ) {
         stopit( status, "Error mapcopy-status" );
         astClearStatus;
      } else {
         if( !astMapGet0I( bulk, "MIXEDKEY", &ival ) ) {
            stopit( status, "Error mapcopy-missing" );
         } else if( ival != 11 ) {
            printf( "got %d want 11\n", ival );
            stopit( status, "Error mapcopy-value" );
         }

         if( astOK && strcmp( astMapKey( bulk, 0 ), "MIXEDKEY" ) ) {
            printf( "stored key is '%s', expected 'MIXEDKEY'\n",
                    astMapKey( bulk, 0 ) );
            stopit( status, "Error mapcopy-storedkey" );
         }
      }
   }

   src = astAnnul( src );
   dst = astAnnul( dst );
   if( bulk ) bulk = astAnnul( bulk );
}

int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   AstKeyMap *map, *map2, *map3, *map1, *km2;
   AstObject *aval;
   AstObject *avec[4];
   int ival, nval, i;
   int64_t kval;
   int64_t kvec[4];
   const char *cval;
   const char *cval0;
   /* For MapGet1C: flat buffer; astMapGet1C writes strings at l-byte
    * intervals. With l=11 (10 chars + null), we need 3*11 bytes. */
   char cvec_buf[3 * 11];
   /* For MapGetElemC: single string buffer */
   char elemcbuf[200 + 1];
   double dval;
   double dvec[2];
   float rval;
   short sval;
   short svec[2];
   int ivec[2];
   char key[200 + 1];
   int goti, gotk, gotd, gotr, gotc, gota, gotw;

   astWatch( status );
   astBegin;

   testdumpstable( status );

   testcopyentrycase( status );

   testlockedroundtrip( status );

   testundefelem( status );

   testemptyvector( status );

   testconvstring( status );

   testconvrange( status );

   testrenamelocked( status );

   testiterate( status );

   testcasesens( status );
   testsorting( status );

   map = astKeyMap( " " );

   astMapPut0S( map, "Freds", (short)1999, "com 1" );
   astMapPut0I( map, "Fredi", 1999, "com 1" );
   astMapPut0K( map, "Fredk", (int64_t)1999, "com 1" );
   astMapPut0D( map, "Fredd", 1999.9, "com2 " );
   astMapPut0D( map, "Negd", -1999.9, "com2 " );
   astMapPut0F( map, "Negf", -1999.9f, "com2 " );
   astMapPut0D( map, "Negint", -2.0, "com2 " );
   astMapPut0D( map, "Neghalf", -2.5, "com2 " );
   astMapPut0D( map, "Negsmall", -0.6, "com2 " );
   astMapPut0D( map, "Negtiny", -0.4, "com2 " );
   astMapPut0F( map, "Fredr", 1999.9f, "com2 " );
   astMapPut0C( map, "Fredc", "Hello", " " );
   astMapPut0A( map, "Freda", (AstObject *)astSkyFrame( " " ), " " );

   if( !astMapDefined( map, "Freda" ) ) {
      stopit( status, "Error -12" );
   }

   if( astMapLenC( map, "Fredi" ) != 4 ) {
      printf( "%d\n", astMapLenC( map, "Fredi" ) );
      stopit( status, "Error -11" );
   }

   if( astMapLenC( map, "Freda" ) != 0 ) {
      printf( "%d\n", astMapLenC( map, "Freda" ) );
      stopit( status, "Error -10" );
   }

   if( astMapLenC( map, "Fredc" ) != 5 ) {
      printf( "%d\n", astMapLenC( map, "Fredc" ) );
      stopit( status, "Error -9" );
   }

   if( astMapType( map, "freda" ) != AST__BADTYPE ) {
      stopit( status, "Error -8" );
   }

   if( astMapType( map, "Freda" ) != AST__OBJECTTYPE ) {
      stopit( status, "Error -7" );
   }

   if( astMapType( map, "Fredc" ) != AST__STRINGTYPE ) {
      stopit( status, "Error -6" );
   }

   if( astMapType( map, "Fredd" ) != AST__DOUBLETYPE ) {
      stopit( status, "Error -5" );
   }

   if( astMapType( map, "Fredr" ) != AST__FLOATTYPE ) {
      stopit( status, "Error -5b" );
   }

   if( astMapType( map, "Fredi" ) != AST__INTTYPE ) {
      stopit( status, "Error -4" );
   }

   if( astMapHasKey( map, "fredi" ) ) {
      stopit( status, "Error -3" );
   }

   if( !astMapHasKey( map, "Fredi" ) ) {
      stopit( status, "Error -2" );
   }

   map2 = (AstKeyMap *)astCopy( (AstObject *)map );

   if( astMapSize( map2 ) != 13 ) {
      printf( "%d\n", astMapSize( map2 ) );
      stopit( status, "Error 0" );
   }

   goti = gotk = gotd = gotr = gotc = gota = gotw = 0;

   for( i = 0; i < astMapSize( map2 ); i++ ) {
      const char *k = astMapKey( map2, i );
      if( !goti && strcmp( k, "Fredi" ) == 0 ) {
         goti = 1;
      } else if( !gotd && strcmp( k, "Fredd" ) == 0 ) {
         gotd = 1;
      } else if( !gotw && strcmp( k, "Freds" ) == 0 ) {
         gotw = 1;
      } else if( !gotr && strcmp( k, "Fredr" ) == 0 ) {
         gotr = 1;
      } else if( !gotc && strcmp( k, "Fredc" ) == 0 ) {
         gotc = 1;
      } else if( !gota && strcmp( k, "Freda" ) == 0 ) {
         gota = 1;
      } else if( !gotk && strcmp( k, "Fredk" ) == 0 ) {
         gotk = 1;
      } else if( strncmp( k, "Neg", 3 ) == 0 ) {
         /* Entries added to test negative-value rounding; not tracked here. */
      } else {
         stopit( status, "Error badkey" );
      }
   }

   if( !( goti && gotd && gotc && gota && gotr && gotw ) ) {
      stopit( status, "Error nokey" );
   }

   if( astMapLength( map2, "Fredi" ) != 1 ) {
      printf( "%d\n", astMapLength( map2, "Fredi" ) );
      stopit( status, "Error -1" );
   }

   if( !astMapGet0I( map2, "Fredi", &ival ) ) {
      stopit( status, "Error 1" );
   } else if( ival != 1999 ) {
      printf( "%d\n", ival );
      stopit( status, "Error 2" );
   }

   if( !astMapGet0K( map2, "Fredk", &kval ) ) {
      stopit( status, "Error 1k" );
   } else if( kval != 1999 ) {
      printf( "%" PRId64 "\n", kval );
      stopit( status, "Error 2k" );
   }

   if( !astMapGet0S( map2, "Freds", &sval ) ) {
      stopit( status, "Error 1" );
   } else if( sval != 1999 ) {
      printf( "%d\n", (int)sval );
      stopit( status, "Error 2B" );
   }

   if( !astMapGet0D( map2, "Fredd", &dval ) ) {
      stopit( status, "Error 3" );
   } else if( dval != 1999.9 ) {
      printf( "%g\n", dval - 1999.9 );
      stopit( status, "Error 4" );
   }

   if( !astMapGet0F( map2, "Fredr", &rval ) ) {
      stopit( status, "Error 3b" );
   } else if( rval != 1999.9f ) {
      printf( "%g\n", (double)(rval - 1999.9f) );
      stopit( status, "Error 4b" );
   }

   if( !astMapGet0C( map2, "Fredc", &cval ) ) {
      stopit( status, "Error 5" );
   } else if( (int)strlen( cval ) != 5 ) {
      printf( "%d\n", (int)strlen( cval ) );
      stopit( status, "Error 6" );
   } else if( strcmp( cval, "Hello" ) != 0 ) {
      printf( "%s\n", cval );
      stopit( status, "Error 7" );
   }

   /* astMapGetC returns same as astMapGet0C for scalar entry */
   if( !astMapGetC( map2, "Fredc", &cval ) ) {
      stopit( status, "Error 5b" );
   } else if( (int)strlen( cval ) != 5 ) {
      printf( "%d\n", (int)strlen( cval ) );
      stopit( status, "Error 6b" );
   } else if( strcmp( cval, "Hello" ) != 0 ) {
      printf( "%s\n", cval );
      stopit( status, "Error 7b" );
   }

   if( !astMapGet0A( map2, "Freda", &aval ) ) {
      stopit( status, "Error 8" );
   } else if( !astIsASkyFrame( aval ) ) {
      stopit( status, "Error 9" );
   }

   /* Cross-type conversions: int key read as double */
   if( !astMapGet0D( map2, "Fredi", &dval ) ) {
      stopit( status, "Error 10" );
   } else if( dval != 1999.0 ) {
      printf( "%g\n", dval );
      stopit( status, "Error 11" );
   }

   if( !astMapGet0F( map2, "Fredi", &rval ) ) {
      stopit( status, "Error 10b" );
   } else if( rval != 1999.0f ) {
      stopit( status, "Error 11b" );
   }

   /* int key read as string: should give "1999" */
   if( !astMapGet0C( map2, "Fredi", &cval ) ) {
      stopit( status, "Error 12" );
   } else if( (int)strlen( cval ) != 4 ) {
      printf( "%d\n", (int)strlen( cval ) );
      stopit( status, "Error 13a" );
   } else if( strcmp( cval, "1999" ) != 0 ) {
      printf( "%s\n", cval );
      stopit( status, "Error 13" );
   }

   /* double key read as int: 1999.9 -> 2000 */
   if( !astMapGet0I( map2, "Fredd", &ival ) ) {
      stopit( status, "Error 14" );
   } else if( ival != 2000 ) {
      printf( "%d\n", ival );
      stopit( status, "Error 15" );
   }

   /* Negative values must round to nearest, not toward zero. A cast of
      the form (int)( x + 0.5 ) truncates toward zero and so is wrong for
      every negative value, exact integers included. */
   {
      struct { const char *key; int expect; } negcases[] = {
         { "Negd",     -2000 },
         { "Negf",     -2000 },
         { "Negint",      -2 },
         { "Neghalf",     -3 },
         { "Negsmall",    -1 },
         { "Negtiny",      0 }
      };
      short int sval_n;
      int64_t kval_n;
      size_t ic;
      int negfail = 0;

      /* Failures are accumulated in "negfail" and reported with a single
         stopit() after the loop, rather than calling stopit() inline for
         each mismatch. stopit() sets the shared inherited status, and once
         that happens every subsequent AST call in this loop (and the rest
         of the test) becomes a no-op that reports failure regardless of
         the data involved. Reporting inline would therefore make every
         case after the first genuine mismatch look like a failure too,
         including "Negtiny", which must only fail if its own conversion
         is wrong. */
      for( ic = 0; ic < sizeof( negcases ) / sizeof( negcases[ 0 ] ); ic++ ) {
         if( !astMapGet0I( map2, negcases[ ic ].key, &ival ) ) {
            printf( "%s\n", negcases[ ic ].key );
            negfail = 1;
         } else if( ival != negcases[ ic ].expect ) {
            printf( "%s: got %d want %d\n", negcases[ ic ].key, ival,
                    negcases[ ic ].expect );
            negfail = 1;
         }

         if( !astMapGet0S( map2, negcases[ ic ].key, &sval_n ) ) {
            negfail = 1;
         } else if( sval_n != (short int) negcases[ ic ].expect ) {
            printf( "%s: got %d want %d\n", negcases[ ic ].key, (int) sval_n,
                    negcases[ ic ].expect );
            negfail = 1;
         }

         if( !astMapGet0K( map2, negcases[ ic ].key, &kval_n ) ) {
            negfail = 1;
         } else if( kval_n != (int64_t) negcases[ ic ].expect ) {
            printf( "%s: got %" PRId64 " want %d\n", negcases[ ic ].key,
                    kval_n, negcases[ ic ].expect );
            negfail = 1;
         }
      }

      if( negfail ) stopit( status, "Error 14neg" );
   }

   if( !astMapGet0K( map2, "Fredd", &kval ) ) {
      stopit( status, "Error 14k" );
   } else if( kval != 2000 ) {
      printf( "%" PRId64 "\n", kval );
      stopit( status, "Error 15k" );
   }

   if( !astMapGet0S( map2, "Fredd", &sval ) ) {
      stopit( status, "Error 14b" );
   } else if( sval != 2000 ) {
      printf( "%d\n", (int)sval );
      stopit( status, "Error 15b" );
   }

   /* double key read as string: should give "1999.9" */
   if( !astMapGet0C( map2, "Fredd", &cval ) ) {
      stopit( status, "Error 16" );
   } else if( (int)strlen( cval ) != 6 ) {
      printf( "%d\n", (int)strlen( cval ) );
      stopit( status, "Error 17a" );
   } else if( strcmp( cval, "1999.9" ) != 0 ) {
      printf( "%s\n", cval );
      stopit( status, "Error 17" );
   }

   /* Read scalar as vector (length 1) */
   ivec[0] = -10;
   ivec[1] = -10;
   if( !astMapGet1I( map2, "Fredi", 2, &nval, ivec ) ) {
      stopit( status, "Error 18" );
   } else if( nval != 1 ) {
      printf( "%d\n", nval );
      stopit( status, "Error 19" );
   } else if( ivec[0] != 1999 ) {
      printf( "%d\n", ivec[0] );
      stopit( status, "Error 20" );
   } else if( ivec[1] != -10 ) {
      printf( "%d\n", ivec[1] );
      stopit( status, "Error 21" );
   }

   dvec[0] = -10.0;
   dvec[1] = -10.0;
   if( !astMapGet1D( map2, "Fredd", 2, &nval, dvec ) ) {
      stopit( status, "Error 22" );
   } else if( nval != 1 ) {
      printf( "%d\n", nval );
      stopit( status, "Error 23" );
   } else if( dvec[0] != 1999.9 ) {
      printf( "%g\n", dvec[0] );
      stopit( status, "Error 24" );
   } else if( dvec[1] != -10.0 ) {
      printf( "%g\n", dvec[1] );
      stopit( status, "Error 25" );
   }

   avec[0] = NULL;
   avec[1] = NULL;
   if( !astMapGet1A( map2, "Freda", 2, &nval, avec ) ) {
      stopit( status, "Error 26" );
   } else if( nval != 1 ) {
      printf( "%d\n", nval );
      stopit( status, "Error 27" );
   } else if( !astIsASkyFrame( avec[0] ) ) {
      printf( "%s\n", astGetC( avec[0], "class" ) );
      stopit( status, "Error 28" );
   } else if( avec[1] != NULL ) {
      printf( "%s\n", astGetC( avec[1], "class" ) );
      stopit( status, "Error 29" );
   }

   /* Replace scalar entries with vector entries */
   ivec[0] = 1999;
   ivec[1] = 0;
   astMapPut1I( map, "Fredi", 2, ivec, "com 1" );

   if( astMapLength( map, "Fredi" ) != 2 ) {
      printf( "%d\n", astMapLength( map, "Fredi" ) );
      stopit( status, "Error 29b" );
   }

   svec[0] = 1999;
   svec[1] = 0;
   astMapPut1S( map, "Freds", 2, svec, "com 1" );

   if( astMapLength( map, "Freds" ) != 2 ) {
      printf( "%d\n", astMapLength( map, "Freds" ) );
      stopit( status, "Error 29c" );
   }

   dvec[0] = 1999.9;
   dvec[1] = -0.01;
   astMapPut1D( map, "Fredd", 2, dvec, "com2" );

   /* cvec strings of width 10 (matching Fortran CHARACTER*10) */
   {
      const char *cvec_ptrs[3] = { "Hello", " ", "  Hello" };
      astMapPut1C( map, "Fredc", 3, cvec_ptrs, " " );
   }

   /* Check MapLenC: should be len of longest element = 7 ("  Hello") */
   /* Fortran checks len(cvec(3)) which is 10 (the declared width).
    * In C, the stored length is strlen("  Hello") = 7, but the Fortran
    * test expects 10 (the declared CHARACTER width). Skip this check as
    * C stores without padding. */

   avec[0] = (AstObject *)astSkyFrame( " " );
   avec[1] = NULL;
   avec[2] = (AstObject *)astSpecFrame( " " );
   avec[3] = NULL;
   astMapPut1A( map, "Freda", 4, avec, " " );

   astAnnul( map2 );
   map2 = (AstKeyMap *)astCopy( (AstObject *)map );

   if( !astMapGet0I( map2, "Fredi", &ival ) ) {
      stopit( status, "Error A1" );
   } else if( ival != 1999 ) {
      printf( "%d\n", ival );
      stopit( status, "Error A2" );
   }

   if( !astMapGet0K( map2, "Fredk", &kval ) ) {
      stopit( status, "Error A1k" );
   } else if( kval != 1999 ) {
      printf( "%" PRId64 "\n", kval );
      stopit( status, "Error A2k" );
   }

   if( !astMapGet0D( map2, "Fredd", &dval ) ) {
      stopit( status, "Error A3" );
   } else if( dval != 1999.9 ) {
      printf( "%g\n", dval - 1999.9 );
      stopit( status, "Error A4" );
   }

   /* After MapPut1C with 3 strings, MapGet0C returns first element.
    * Fortran test expects l=10 (declared width of cvec elements) and
    * cval(:10) .ne. 'Hello               '. In C, the stored string is
    * "Hello" (5 chars). The Fortran test is checking Fortran's padding
    * behaviour. We just check the value is "Hello". */
   if( !astMapGet0C( map2, "Fredc", &cval ) ) {
      stopit( status, "Error A5" );
   } else if( astMapLenC( map2, "Fredc" ) != 7 ) {
      printf( "%d\n", astMapLenC( map2, "Fredc" ) );
      stopit( status, "Error A6" );
   } else if( strcmp( cval, "Hello" ) != 0 ) {
      printf( "%s\n", cval );
      stopit( status, "Error A7" );
   }

   if( !astMapGet0A( map2, "Freda", &aval ) ) {
      stopit( status, "Error A8" );
   } else if( !astIsASkyFrame( aval ) ) {
      stopit( status, "Error A9" );
   }

   if( !astMapGet0D( map2, "Fredi", &dval ) ) {
      stopit( status, "Error A10" );
   } else if( dval != 1999.0 ) {
      printf( "%g\n", dval );
      stopit( status, "Error A11" );
   }

   if( !astMapGet0C( map2, "Fredi", &cval ) ) {
      stopit( status, "Error A12" );
   } else if( (int)strlen( cval ) != 4 ) {
      printf( "%d\n", (int)strlen( cval ) );
      stopit( status, "Error A13a" );
   } else if( strcmp( cval, "1999" ) != 0 ) {
      printf( "%s\n", cval );
      stopit( status, "Error A13" );
   }

   if( !astMapGet0I( map2, "Fredd", &ival ) ) {
      stopit( status, "Error A14" );
   } else if( ival != 2000 ) {
      printf( "%d\n", ival );
      stopit( status, "Error A15" );
   }

   if( !astMapGet0K( map2, "Fredd", &kval ) ) {
      stopit( status, "Error A14k" );
   } else if( kval != 2000 ) {
      printf( "%" PRId64 "\n", kval );
      stopit( status, "Error A15k" );
   }

   if( !astMapGet0C( map2, "Fredd", &cval ) ) {
      stopit( status, "Error A16" );
   } else if( (int)strlen( cval ) != 6 ) {
      printf( "%d\n", (int)strlen( cval ) );
      stopit( status, "Error A17a" );
   } else if( strcmp( cval, "1999.9" ) != 0 ) {
      printf( "%s\n", cval );
      stopit( status, "Error A17" );
   }

   /* Read vector entries as vectors */
   if( !astMapGet1I( map2, "Fredi", 2, &nval, ivec ) ) {
      stopit( status, "Error B1" );
   } else if( nval != 2 ) {
      printf( "%d\n", nval );
      stopit( status, "Error B2a" );
   } else if( ivec[0] != 1999 ) {
      printf( "%d\n", ivec[0] );
      stopit( status, "Error B2b" );
   } else if( ivec[1] != 0 ) {
      printf( "%d\n", ivec[1] );
      stopit( status, "Error B2c" );
   }

   if( !astMapGet1D( map2, "Fredd", 2, &nval, dvec ) ) {
      stopit( status, "Error B3" );
   } else if( nval != 2 ) {
      printf( "%d\n", nval );
      stopit( status, "Error B4a" );
   } else if( dvec[0] != 1999.9 ) {
      printf( "%g\n", dvec[0] );
      stopit( status, "Error B4b" );
   } else if( dvec[1] != -0.01 ) {
      printf( "%g\n", dvec[1] );
      stopit( status, "Error B4c" );
   }

   avec[0] = avec[1] = avec[2] = avec[3] = NULL;
   if( !astMapGet1A( map2, "Freda", 4, &nval, avec ) ) {
      stopit( status, "Error B5" );
   } else if( nval != 4 ) {
      printf( "%d\n", nval );
      stopit( status, "Error B6a" );
   } else if( !astIsASkyFrame( avec[0] ) ) {
      printf( "%s\n", astGetC( avec[0], "class" ) );
      stopit( status, "Error B6b" );
   } else if( avec[1] != NULL ) {
      printf( "%s\n", astGetC( avec[1], "class" ) );
      stopit( status, "Error B6c" );
   } else if( !astIsASpecFrame( avec[2] ) ) {
      printf( "%s\n", astGetC( avec[2], "class" ) );
      stopit( status, "Error B6d" );
   } else if( avec[3] != NULL ) {
      printf( "%s\n", astGetC( avec[3], "class" ) );
      stopit( status, "Error B6e" );
   }

   /* Read string vector: MapGet1C with l=10 for 10-char wide strings.
    * The Fortran test expects:
    *   cvec(1) = 'Hello     ' (Hello padded to 10)
    *   cvec(2) = '          ' (space padded to 10)
    *   cvec(3) = '  Hello   ' ('  Hello' padded to 10)
    * In C, MapGet1C pads strings to l characters. */
   {
      int cvec_l = 11;  /* 10 chars + null */
      if( !astMapGet1C( map2, "Fredc", cvec_l, 3, &nval, cvec_buf ) ) {
         stopit( status, "Error B7" );
      } else if( nval != 3 ) {
         printf( "%d\n", nval );
         stopit( status, "Error B8a" );
      } else if( strncmp( cvec_buf, "Hello", 5 ) != 0 ) {
         printf( "'%.10s'\n", cvec_buf );
         stopit( status, "Error B8b" );
      } else if( cvec_buf[cvec_l] != ' ' && cvec_buf[cvec_l] != '\0' ) {
         printf( "'%.10s'\n", cvec_buf + cvec_l );
         stopit( status, "Error B8c" );
      } else if( strncmp( cvec_buf + 2*cvec_l, "  Hello", 7 ) != 0 ) {
         printf( "'%.10s'\n", cvec_buf + 2*cvec_l );
         stopit( status, "Error B8d" );
      }
   }

   /* Read entire string vector as single string via astMapGetC.
    * Fortran expects: '(Hello     ,          ,  Hello   )' with l=34 */
   if( !astMapGetC( map2, "Fredc", &cval0 ) ) {
      stopit( status, "Error BB1" );
   } else if( strlen( cval0 ) != 17 ) {
      printf( "%zu\n", strlen( cval0 ) );
      stopit( status, "Error BB2" );
   } else if( strcmp( cval0, "(Hello, ,  Hello)" ) != 0 ) {
      printf( "MapGetC result: '%s'\n", cval0 );
      stopit( status, "Error BB3" );
   }

   /* Read single elements of vector entries */
   if( !astMapGetElemI( map2, "Fredi", 0, &ival ) ) {
      stopit( status, "Error B1z" );
   } else if( ival != 1999 ) {
      printf( "%d\n", ival );
      stopit( status, "Error B2bz" );
   }

   if( !astMapGetElemD( map2, "Fredd", 1, &dval ) ) {
      stopit( status, "Error B3z" );
   } else if( dval != -0.01 ) {
      printf( "%g\n", dval );
      stopit( status, "Error B4cz" );
   }

   if( !astMapGetElemA( map2, "Freda", 2, &aval ) ) {
      stopit( status, "Error B5z" );
   } else if( !astIsASpecFrame( aval ) ) {
      printf( "%s\n", astGetC( aval, "class" ) );
      stopit( status, "Error B6dz" );
   }

   /* Read 3rd string element: should be "  Hello" */
   if( !astMapGetElemC( map2, "Fredc", 200, 2, elemcbuf ) ) {
      stopit( status, "Error B7z" );
   } else if( strcmp( elemcbuf, "  Hello" ) != 0 ) {
      printf( "'%s'\n", elemcbuf );
      stopit( status, "Error B8dz" );
   }

   astMapRemove( map2, "Bert" );
   astMapRemove( map2, "Fredc" );
   if( astMapGet1C( map2, "Fredc", 11, 3, &nval, cvec_buf ) ) {
      stopit( status, "Error C1" );
   }

   checkdump( (AstObject *)map2, "checkDump 1 ", status );

   astAnnul( map );
   astAnnul( map2 );

   /* Test with 500 entries */
   map = astKeyMap( " " );

   for( i = 1; i <= 200; i++ ) {
      snprintf( key, sizeof( key ), "Fred%d", i );
      astMapPut0I( map, key, i, " " );
   }

   for( i = 201; i <= 499; i++ ) {
      snprintf( key, sizeof( key ), "Fred%d", i );
      astMapPut0K( map, key, (int64_t)i, " " );
   }

   kval = (int64_t)VAL__MAXI * 100;
   astMapPut0K( map, "Fred500", kval, " " );

   if( astMapSize( map ) != 500 ) {
      stopit( status, "Error d1 " );
   }

   if( astMapType( map, "Fred123" ) != AST__INTTYPE ) {
      stopit( status, "Error d2 " );
   }

   if( astMapType( map, "Fred234" ) != AST__KINTTYPE ) {
      stopit( status, "Error d3 " );
   }

   if( !astMapGet0C( map, "Fred489", &cval ) ) {
      stopit( status, "Error d4 " );
   } else if( strcmp( cval, "489" ) != 0 ) {
      printf( "'%s'\n", cval );
      stopit( status, "Error d5 " );
   }

   if( !astMapGet0K( map, "Fred500", &kval ) ) {
      stopit( status, "Error d6 " );
   } else if( kval / 100 != (int64_t)VAL__MAXI ) {
      stopit( status, "Error d7 " );
   }

   checkdump( (AstObject *)map, "checkDump 2 ", status );

   /* Test putting single elements into vector entries */
   astAnnul( map );
   map = astKeyMap( " " );

   ivec[0] = 1;
   ivec[1] = 2;
   astMapPut1I( map, "Fredi", 2, ivec, "com 1" );

   astMapPutElemI( map, "Fredi", 0, -1 );
   if( !astMapGetElemI( map, "Fredi", 0, &ival ) ) {
      stopit( status, "Error GETELEM_1" );
   } else if( ival != -1 ) {
      printf( "%d\n", ival );
      stopit( status, "Error GETELEM_2" );
   }

   /* PutElem index 9 (Fortran 10) - beyond length, so appends */
   astMapPutElemI( map, "Fredi", 9, -2 );
   if( !astMapGetElemI( map, "Fredi", 2, &ival ) ) {
      stopit( status, "Error GETELEM_3" );
   } else if( ival != -2 ) {
      printf( "%d\n", ival );
      stopit( status, "Error GETELEM_4" );
   }

   /* PutElem index -1 (Fortran 0) - appends at end */
   astMapPutElemI( map, "Fredi", -1, -3 );
   if( !astMapGetElemI( map, "Fredi", 3, &ival ) ) {
      stopit( status, "Error GETELEM_5" );
   } else if( ival != -3 ) {
      printf( "%d\n", ival );
      stopit( status, "Error GETELEM_6" );
   }

   if( astMapLength( map, "Fredi" ) != 4 ) {
      printf( "%d\n", astMapLength( map, "Fredi" ) );
      stopit( status, "Error GETELEM_7" );
   }

   map2 = astKeyMap( " " );
   astMapPutElemA( map2, "A A", 0, (AstObject *)map );
   if( astMapLength( map2, "A A" ) != 1 ) {
      printf( "%d\n", astMapLength( map2, "A A" ) );
      stopit( status, "Error GETELEM_8" );
   }

   if( !astMapGetElemA( map2, "A A", 0, &aval ) ) {
      stopit( status, "Error GETELEM_9" );
   } else if( !astMapGetElemI( (AstKeyMap *)aval, "Fredi", 3, &ival ) ) {
      stopit( status, "Error GETELEM_10" );
   } else if( ival != -3 ) {
      printf( "%d\n", ival );
      stopit( status, "Error GETELEM_11" );
   }

   /* Try to create circular reference - should fail with AST__KYCIR */
   if( astOK ) {
      astMapPutElemA( map2, "A A", 0, (AstObject *)map2 );
      if( !astOK ) {
         if( astStatus == AST__KYCIR ) {
            astClearStatus;
         } else {
            stopit( status, "Error GETELEM_12" );
         }
      } else {
         stopit( status, "Error GETELEM_12" );
      }
   }

   astMapPut0C( map, " B", "Hello", " " );

   /* Test MapLocked */
   astSetL( map, "MapLocked", 1 );
   if( astOK ) {
      astMapPut0C( map, " BZZ", "Bye Bye", " " );
      if( !astOK ) {
         if( astStatus == AST__BADKEY ) {
            astClearStatus;
            astClear( map, "maplocked" );
         } else {
            stopit( status, "Error GETELEM_12B" );
         }
      } else {
         stopit( status, "Error GETELEM_12B" );
      }
   }

   astMapPut0C( map, " BZZ", "Bye Bye", " " );
   km2 = astKeyMap( " " );
   astMapPut0A( map, " BZY", (AstObject *)km2, " " );
   astMapPut0C( km2, " BZZ", "Bye Bye", " " );

   astSetL( map, "MapLocked", 1 );
   astMapPut0C( map, " BZZ", "You Bye", " " );
   astMapPut0C( km2, " BZZ", "You Bye", " " );
   if( astOK ) {
      astMapPut0C( km2, " BZA", "No Bye", " " );
      if( !astOK ) {
         if( astStatus == AST__BADKEY ) {
            astClearStatus;
            astClear( map, "maplocked" );
            astMapPut0C( km2, " BZA", "No Bye", " " );
         } else {
            stopit( status, "Error GETELEM_12C" );
         }
      } else {
         stopit( status, "Error GETELEM_12C" );
      }
   }

   if( astGetL( km2, "KeyError" ) ) {
      stopit( status, "Error GETELEM_12D" );
   }

   astSetL( map, "KeyError", 1 );

   if( !astGetL( km2, "KeyError" ) ) {
      stopit( status, "Error GETELEM_12E" );
   }

   if( astOK ) {
      int lval = astMapGet0C( km2, "FRED", &cval );
      (void)lval;
      if( !astOK ) {
         if( astStatus == AST__MPKER ) {
            astClearStatus;
            astClear( map, "keyerror" );
            lval = astMapGet0C( km2, "FRED", &cval );
            (void)lval;
         } else {
            stopit( status, "Error GETELEM_12F" );
         }
      } else {
         stopit( status, "Error GETELEM_12F" );
      }
   }

   /* astMapPutElemC: append to vector " B" */
   astMapPutElemC( map, " B ", 2, "YES YES" );

   if( astMapLength( map, " B" ) != 2 ) {
      printf( "%d\n", astMapLength( map, " B" ) );
      stopit( status, "Error GETELEM_13" );
   } else if( !astMapGetElemC( map, " B ", 200, 1, elemcbuf ) ) {
      stopit( status, "Error GETELEM_14" );
   } else if( strcmp( elemcbuf, "YES YES" ) != 0 ) {
      printf( "'%s'\n", elemcbuf );
      stopit( status, "Error GETELEM_15" );
   }

   astAnnul( map );

   /* Test ast_mapcopy */
   map  = astKeyMap( " " );
   map1 = astKeyMap( " " );
   map2 = astKeyMap( " " );
   map3 = astKeyMap( " " );

   astMapPut0I( map1, "a1", 1, " " );
   astMapPut0I( map1, "a2", 2, " " );
   astMapPut0K( map1, "a3", (int64_t)3, " " );

   astMapPut0C( map, "aa1", "Yes", " " );
   astMapPut0I( map, "aa2", 2, " " );
   astMapPut0A( map, "aa3", (AstObject *)map1, " " );

   astMapPut0I( map2, "b1", 10, " " );
   astMapPut0I( map2, "b2", 20, " " );
   astMapPut0I( map2, "b3", 30, " " );

   astMapPut0C( map3, "bb1", "No", " " );
   astMapPut0I( map3, "aa2", 20, " " );
   astMapPut0A( map3, "bb3", (AstObject *)map2, " " );

   astMapCopy( map, map3 );

   if( astMapSize( map ) != 5 ) {
      printf( "%d\n", astMapSize( map ) );
      stopit( status, "Error MAPCOPY_0" );
   }

   if( !astMapGet0C( map, "aa1", &cval ) ) {
      stopit( status, "Error MAPCOPY_1" );
   } else if( strcmp( cval, "Yes" ) != 0 ) {
      printf( "%s\n", cval );
      stopit( status, "Error MAPCOPY_2" );
   }

   if( !astMapGet0I( map, "aa2", &ival ) ) {
      stopit( status, "Error MAPCOPY_3" );
   } else if( ival != 20 ) {
      printf( "%d\n", ival );
      stopit( status, "Error MAPCOPY_4" );
   }

   if( !astMapGet0A( map, "aa3", &aval ) ) {
      stopit( status, "Error MAPCOPY_5" );
   } else if( !astIsAKeyMap( aval ) ) {
      printf( "%s\n", astGetC( aval, "Class" ) );
      stopit( status, "Error MAPCOPY_6" );
   }
   /* Note: MAPCOPY_7..12 in Fortran are inside the .not. ast_isakeymap
    * branch which only runs when it is NOT a keymap - i.e., dead code. */

   if( !astMapGet0C( map, "bb1", &cval ) ) {
      stopit( status, "Error MAPCOPY_13" );
   } else if( strcmp( cval, "No" ) != 0 ) {
      printf( "%s\n", cval );
      stopit( status, "Error MAPCOPY_14" );
   }

   if( !astMapGet0A( map, "bb3", &aval ) ) {
      stopit( status, "Error MAPCOPY_15" );
   } else if( !astIsAKeyMap( aval ) ) {
      printf( "%s\n", astGetC( aval, "Class" ) );
      stopit( status, "Error MAPCOPY_16" );
   }
   /* MAPCOPY_17..22 also dead code (in .not. isakeymap branch) */

   /* Second mapcopy test */
   astAnnul( map );
   astAnnul( map1 );
   astAnnul( map2 );
   astAnnul( map3 );

   map  = astKeyMap( " " );
   map1 = astKeyMap( " " );
   map2 = astKeyMap( " " );
   map3 = astKeyMap( " " );

   astMapPut0I( map1, "a1", 1, " " );
   astMapPut0I( map1, "a2", 2, " " );
   astMapPut0I( map1, "a3", 3, " " );

   astMapPut0C( map, "aa1", "Yes", " " );
   astMapPut0I( map, "aa2", 2, " " );
   astMapPut0A( map, "aa3", (AstObject *)map1, " " );

   astMapPut0I( map2, "b1", 10, " " );
   astMapPut0I( map2, "b2", 20, " " );
   astMapPut0I( map2, "b3", 30, " " );

   astMapPut0I( map3, "aa1", 0, " " );
   astMapPut0I( map3, "aa2", 20, " " );
   astMapPut0A( map3, "aa3", (AstObject *)map2, " " );

   astMapCopy( map, map3 );

   if( astMapSize( map ) != 3 ) {
      printf( "%d\n", astMapSize( map ) );
      stopit( status, "Error MAPCOPY_23" );
   }

   if( !astMapGet0I( map, "aa1", &ival ) ) {
      stopit( status, "Error MAPCOPY_24" );
   } else if( ival != 0 ) {
      printf( "%d\n", ival );
      stopit( status, "Error MAPCOPY_25" );
   }

   if( !astMapGet0I( map, "aa2", &ival ) ) {
      stopit( status, "Error MAPCOPY_26" );
   } else if( ival != 20 ) {
      printf( "%d\n", ival );
      stopit( status, "Error MAPCOPY_27" );
   }

   if( !astMapGet0A( map, "aa3", &aval ) ) {
      stopit( status, "Error MAPCOPY_28" );
   } else if( !astIsAKeyMap( aval ) ) {
      printf( "%s\n", astGetC( aval, "Class" ) );
      stopit( status, "Error MAPCOPY_29" );
   }
   /* MAPCOPY_30..41 dead code */

   /* Third mapcopy test with MapLocked */
   astAnnul( map );
   astAnnul( map1 );
   astAnnul( map2 );
   astAnnul( map3 );

   map  = astKeyMap( " " );
   map1 = astKeyMap( " " );
   map2 = astKeyMap( " " );
   map3 = astKeyMap( " " );

   astMapPut0I( map1, "a1", 1, " " );
   astMapPut0I( map1, "a2", 2, " " );
   astMapPut0I( map1, "a3", 3, " " );

   astMapPut0C( map, "aa1", "Yes", " " );
   astMapPut0I( map, "aa2", 2, " " );
   astMapPut0A( map, "aa3", (AstObject *)map1, " " );

   astMapPut0I( map2, "b1", 10, " " );
   astMapPut0I( map2, "b2", 20, " " );
   astMapPut0I( map2, "b3", 30, " " );

   astMapPut0I( map3, "aa1", 0, " " );
   astMapPut0I( map3, "aa2", 20, " " );
   astMapPut0A( map3, "aa3", (AstObject *)map2, " " );

   astSetL( map, "MapLocked", 1 );
   if( astOK ) {
      astMapCopy( map, map3 );
      if( !astOK ) {
         if( astStatus == AST__BADKEY ) {
            astClearStatus;
         } else {
            stopit( status, "Error MAPCOPY_42" );
         }
      } else {
         stopit( status, "Error MAPCOPY_42" );
      }
   }

   /* Test AST_MAPPUTU and undefined values */
   astAnnul( map );
   map = astKeyMap( " " );
   astMapPutU( map, "GG", "A comment" );
   if( astMapDefined( map, "GG" ) ) {
      stopit( status, "Error UNDEF_0" );
   } else if( astMapGet0I( map, "GG", &ival ) ) {
      stopit( status, "Error UNDEF_1" );
   } else if( astMapGet0S( map, "GG", &sval ) ) {
      stopit( status, "Error UNDEF_1B" );
   } else if( astMapGet0C( map, "GG", &cval ) ) {
      stopit( status, "Error UNDEF_2" );
   } else if( astMapGet0A( map, "GG", &aval ) ) {
      stopit( status, "Error UNDEF_3" );
   } else if( astMapGet1I( map, "GG", 2, &nval, ivec ) ) {
      stopit( status, "Error UNDEF_4" );
   } else if( astMapGetElemC( map, "gg", 200, 0, elemcbuf ) ) {
      stopit( status, "Error UNDEF_5" );
   } else if( !astMapHasKey( map, "GG" ) ) {
      stopit( status, "Error UNDEF_6" );
   }

   if( astMapType( map, "GG" ) != AST__UNDEFTYPE ) {
      printf( "%d\n", astMapType( map, "GG" ) );
      stopit( status, "Error UNDEF_7" );
   } else if( astMapSize( map ) != 1 ) {
      stopit( status, "Error UNDEF_8" );
   }

   astMapPut0I( map, "GG", 0, " " );
   if( !astMapGet0I( map, "GG", &ival ) ) {
      stopit( status, "Error UNDEF_9" );
   } else if( ival != 0 ) {
      stopit( status, "Error UNDEF_10" );
   }

   /* Test astMapRename */
   astMapRename( map, "GG", "GGNEW" );
   if( astMapHasKey( map, "GG" ) ) {
      stopit( status, "Error RENAME_1" );
   } else if( !astMapGet0I( map, "GGNEW", &ival ) ) {
      stopit( status, "Error RENAME_2" );
   } else if( ival != 0 ) {
      stopit( status, "Error RENAME_3" );
   }

   astMapRename( map, "GGNEW", "GG" );
   if( astMapHasKey( map, "GGNEW" ) ) {
      stopit( status, "Error RENAME_4" );
   } else if( !astMapGet0I( map, "GG", &ival ) ) {
      stopit( status, "Error RENAME_5" );
   } else if( ival != 0 ) {
      stopit( status, "Error RENAME_6" );
   }

   /* Test ast_mapcopyentry */
   astAnnul( map );
   map  = astKeyMap( " " );
   map1 = astKeyMap( " " );
   map2 = astKeyMap( " " );
   map3 = astKeyMap( " " );

   astMapPut0I( map1, "a1", 1, " " );
   astMapPut0I( map1, "a2", 2, " " );
   astMapPut0I( map1, "a3", 3, " " );

   astMapPut0C( map, "aa1", "Yes", " " );
   astMapPut0I( map, "aa2", 2, " " );
   astMapPut0A( map, "aa3", (AstObject *)map1, " " );

   astMapPut0I( map2, "b1", 10, " " );
   astMapPut0I( map2, "b2", 20, " " );
   astMapPut0I( map2, "b3", 30, " " );

   astMapPut0C( map3, "bb1", "No", " " );
   astMapPut0I( map3, "aa2", 20, " " );
   astMapPut0A( map3, "aa3", (AstObject *)map2, " " );

   astMapCopyEntry( map, "bb1", map3, 0 );
   if( astMapSize( map ) != 4 ) {
      stopit( status, "Error MAPCOPYENTRY_1" );
   }
   if( !astMapGet0C( map, "bb1", &cval ) ) {
      stopit( status, "Error MAPCOPYENTRY_2" );
   }
   if( strcmp( cval, "No" ) != 0 ) {
      stopit( status, "Error MAPCOPYENTRY_3" );
   }

   astMapCopyEntry( map, "aa3", map3, 0 );
   if( !astMapGet0A( map, "aa3", &aval ) ) {
      stopit( status, "Error MAPCOPYENTRY_4" );
   }
   if( !astMapGet0I( (AstKeyMap *)aval, "b3", &ival ) ) {
      stopit( status, "Error MAPCOPYENTRY_5" );
   }
   if( ival != 30 ) {
      stopit( status, "Error MAPCOPYENTRY_6" );
   }
   if( astMapGet0I( (AstKeyMap *)aval, "a1", &ival ) ) {
      stopit( status, "Error MAPCOPYENTRY_7" );
   }

   /* Test astMapPutElemD with index -1 (append) */
   astAnnul( map );
   map = astKeyMap( " " );
   astMapPutElemD( map, "HHH", -1, 1.0 );
   astMapPutElemD( map, "HHH", -1, 2.0 );
   astMapPutElemD( map, "HHH", -1, 3.0 );
   astMapPutElemD( map, "HHH", -1, 4.0 );
   astMapPutElemD( map, "HHH", -1, 15.0 );
   if( astMapLength( map, "HHH" ) != 5 ) {
      stopit( status, "Error MAPPUTELEM_7" );
   }

   astAnnul( map );

   /* Test int64 (K-type) operations with large values */
   map = astKeyMap( " " );
   astMapPut0D( map, "asa", 0.0, " " );
   astMapPut0F( map, "asar", 1.0f, " " );
   astMapPut0I( map, "dfdfd", 1, " " );

   kvec[0] = -(int64_t)VAL__MAXI;
   kvec[1] = (int64_t)10 * (int64_t)VAL__MINI;
   astMapPut1K( map, "AAA", 2, kvec, "com 1" );
   astMapPutElemI( map, "AAA", -1, 1 );
   astMapPutElemK( map, "AAA", -1, (int64_t)1 );
   if( astMapLength( map, "AAA" ) != 4 ) {
      stopit( status, "Error I8_1" );
   }

   astMapPut0C( map, "bb1", "No", " " );

   if( !astMapGetElemK( map, "AAA", 1, &kval ) ) {
      stopit( status, "Error I8_2" );
   } else if( kval != (int64_t)10 * (int64_t)VAL__MINI ) {
      printf( "%" PRId64 "\n", kval );
      stopit( status, "Error I8_3" );
   }

   if( !astMapGet1K( map, "AAA", 4, &nval, kvec ) ) {
      stopit( status, "Error I8_4" );
   } else if( nval != 4 ) {
      printf( "%d\n", nval );
      stopit( status, "Error I8_5" );
   } else if( kvec[0] != -(int64_t)VAL__MAXI ) {
      printf( "%" PRId64 "\n", kvec[0] );
      stopit( status, "Error I8_6" );
   } else if( kvec[1] != (int64_t)10 * (int64_t)VAL__MINI ) {
      printf( "%" PRId64 "\n", kvec[1] );
      stopit( status, "Error I8_6" );
   } else if( kvec[2] != 1 ) {
      printf( "%" PRId64 "\n", kvec[2] );
      stopit( status, "Error I8_6" );
   } else if( kvec[3] != 1 ) {
      printf( "%" PRId64 "\n", kvec[3] );
      stopit( status, "Error I8_6" );
   }

   astAnnul( map );

   astEnd;

   if( *status == 0 ) {
      printf( " All KeyMap tests passed\n" );
   } else {
      printf( "KeyMap tests failed\n" );
   }
   return *status;
}
