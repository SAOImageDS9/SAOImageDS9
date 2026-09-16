/*
 *  Test the Table class.
 *  Converted from the Fortran test testtable.f.
 *
 *  Known differences from the Fortran version:
 *
 *  - The Fortran checkDump subroutine used COMMON-block Channel source/sink
 *    callbacks with an in-memory buffer.  The C version replaces this with
 *    astToString / astFromString for the serialise-and-read-back round-trip,
 *    which is simpler and avoids reproducing the source/sink machinery.
 *
 *  - err_mark / err_rlse are omitted; astWatch(&status) + astClearStatus
 *    are used for error-recovery blocks instead.
 *
 *  - Fortran byte (signed, -128..127) maps to C unsigned char because that
 *    is what the AST C API uses for AST__BYTETYPE.  The value 255 stored in
 *    Fortran as -1 (signed) is stored and retrieved as 255 (unsigned) in C.
 *    Similarly, the value -10 (signed) is stored/retrieved as 246 (unsigned).
 *    The comparisons below use (signed char) casts to match the Fortran logic.
 *
 *  - Fortran integer*8 maps to int64_t (from <stdint.h>).
 *
 *  - astColumnName() returns const char * in C; the Fortran version returned
 *    a CHARACTER string.  Both use 1-based indexing.
 *
 *  - The Fortran text(2,2)*10 array used for MapPut1C / MapGet1C is replaced
 *    by a flat const char * pointer array in C.
 *
 *  - astMapGetElemC requires an explicit buffer-length argument in C.
 *
 *  - astMapGet0B returns into an unsigned char * in the C API.
 */

#include "ast.h"
#include "ast_err.h"
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdint.h>
#include <stdlib.h>

static void stopit( int *status, const char *text ) {
   if( *status != 0 ) return;
   *status = 1;
   printf( "%s\n", text );
}

/*
 * checkDump: serialise obj to a string and read it back; verify the
 * round-tripped object is a Table with the same NRow and MapSize as the
 * original.  Replaces the Fortran checkDump which used Channel callbacks.
 */
static void checkDump( AstObject *obj, const char *text, int *status ) {
   char *dump;
   AstObject *result;
   int nrow, nrowold, size;

   if( *status != 0 ) return;

   dump = astToString( obj );
   if( !dump ) {
      printf( "%s\n", text );
      stopit( status, "Cannot serialise supplied object" );
      return;
   }

   result = astFromString( dump );
   astFree( dump );

   if( !result ) {
      printf( "%s\n", text );
      stopit( status, "Cannot read object from string" );
      return;
   }

   if( !astIsATable( result ) ) {
      stopit( status, "Object read from string is not a Table" );
      astAnnul( result );
      return;
   }

   nrowold = astGetI( obj, "NRow" );
   nrow    = astGetI( result, "NRow" );
   if( nrow != nrowold ) {
      printf( "%d %d\n", nrow, nrowold );
      stopit( status, "checkDump 0" );
   }

   size = astMapSize( result );
   if( astMapSize( obj ) != size ) {
      printf( "%d %d\n", size, astMapSize( obj ) );
      stopit( status, "checkDump 1" );
   } else {
      int i;
      for( i = 1; i <= size; i++ ) {
         const char *key = astMapKey( result, i - 1 );
         int type = astMapType( result, key );
         if( astMapType( obj, key ) != type ) {
            printf( "%d %d\n", type, astMapType( obj, key ) );
            stopit( status, "checkDump 4" );
         } else {
            if( type == AST__OBJECTTYPE ) {
               AstObject *obj1 = NULL, *obj2 = NULL;
               if( !astMapGet0A( result, key, &obj1 ) )
                  stopit( status, "checkDump 5" );
               if( !astMapGet0A( obj, key, &obj2 ) )
                  stopit( status, "checkDump 6" );
               if( obj1 && obj2 &&
                   strcmp( astGetC( obj1, "class" ),
                           astGetC( obj2, "class" ) ) != 0 ) {
                  stopit( status, "checkDump 7" );
               }
               if( obj1 ) astAnnul( obj1 );
               if( obj2 ) astAnnul( obj2 );
            } else {
               const char *txt1 = NULL, *txt2 = NULL;
               if( !astMapGet0C( result, key, &txt1 ) )
                  stopit( status, "checkDump 8" );
               if( !astMapGet0C( obj, key, &txt2 ) )
                  stopit( status, "checkDump 9" );
               if( txt1 && txt2 && strcmp( txt1, txt2 ) != 0 ) {
                  stopit( status, "checkDump 10" );
               }
            }
         }
      }
   }

   astAnnul( result );
}

/*
 * checkpurge: test astPurgeRows.
 */
static void checkpurge( int *status ) {
   AstTable *table;
   int ival;

   if( *status != 0 ) return;

   table = astTable( " " );

   astAddColumn( table, "Fred", AST__INTTYPE, 0, 0, " " );
   astAddColumn( table, "Tom",  AST__INTTYPE, 0, 0, " " );

   astMapPut0I( table, "Fred(2)", 123,  " " );
   astMapPut0I( table, "Fred(4)", 456,  " " );
   astMapPut0I( table, "Tom(1)",  -123, " " );
   astMapPut0I( table, "Tom(2)",  -456, " " );
   astMapPut0I( table, "Tom(6)",  0,    " " );

   if( astGetI( table, "NRow" ) != 6 )
      stopit( status, "Table error purge-1" );

   astMapRemove( table, "Tom(6)" );
   if( astGetI( table, "NRow" ) != 6 )
      stopit( status, "Table error purge-2" );

   astPurgeRows( table );
   if( astGetI( table, "NRow" ) != 3 ) {
      printf( "ZZ: %d\n", astGetI( table, "NRow" ) );
      stopit( status, "Table error purge-3" );
   }

   if( astMapGet0I( table, "Tom(1)", &ival ) ) {
      if( ival != -123 ) stopit( status, "Table error purge-4" );
   } else {
      stopit( status, "Table error purge-5" );
   }

   if( astMapGet0I( table, "Tom(2)", &ival ) ) {
      if( ival != -456 ) stopit( status, "Table error purge-6" );
   } else {
      stopit( status, "Table error purge-7" );
   }

   if( astMapGet0I( table, "Fred(1)", &ival ) )
      stopit( status, "Table error purge-8" );

   if( astMapGet0I( table, "Fred(2)", &ival ) ) {
      if( ival != 123 ) stopit( status, "Table error purge-9" );
   } else {
      stopit( status, "Table error purge-10" );
   }

   if( astMapGet0I( table, "Fred(3)", &ival ) ) {
      if( ival != 456 ) stopit( status, "Table error purge-11" );
   } else {
      stopit( status, "Table error purge-12" );
   }

   astAnnul( table );
}


int main( void ) {
   int status_value = 0;
   int *status = &status_value;
   AstTable *table, *table2;
   int dims[7], ival, nval;
   int64_t kvals[2];
   /* Byte arrays: C API uses unsigned char for AST__BYTETYPE */
   unsigned char bytes[2];
   unsigned char bval;
   float rval;
   const char *cval;
   /* Text array for MapPut1C / MapGet1C: 4 strings, each up to 10 chars.
      Corresponds to Fortran text(2,2)*10 stored in column-major order:
      text(1,1), text(2,1), text(1,2), text(2,2).
      astMapGet1C writes into a flat char buffer, l bytes per element. */
   const char *text_put[4];
   /* Buffer for MapGet1C: 4 strings * 11 bytes each (10 chars + null) */
   char text_get[4 * 11];

   astWatch( status );
   astBegin;

   table = astTable( " " );

   /* --- error-recovery tests --- */

   /* "Fred" is not a valid column name before it has been added (BADKEY) */
   astMapPut0I( table, "Fred", 123, "com 1" );
   if( !astOK ) {
      astClearStatus;
   } else {
      stopit( status, "Table error 1" );
   }

   astMapPut0I( table, "Fred(2)", 123, "com 1" );
   if( !astOK ) {
      astClearStatus;
   } else {
      stopit( status, "Table error 2" );
   }

   /* Add column Fred with shape (5,2) of FLOATTYPE */
   dims[0] = 5;
   dims[1] = 2;
   astAddColumn( table, "Fred", AST__FLOATTYPE, 2, dims, " " );

   if( astGetI( table, "NColumn" ) != 1 )
      stopit( status, "Table error 2b" );

   if( strcmp( astColumnName( table, 1 ), "FRED" ) != 0 )
      stopit( status, "Table error 2c" );

   if( astGetI( table, "ColumnType(Fred)" ) != AST__FLOATTYPE )
      stopit( status, "Table error 2d" );

   astColumnShape( table, "Fred", 2, &nval, dims );
   if( nval != 2 )
      stopit( status, "Table error 2e" );
   else if( dims[0] != 5 )
      stopit( status, "Table error 2f" );
   else if( dims[1] != 2 )
      stopit( status, "Table error 2g" );

   if( strcmp( astGetC( table, "ColumnUnit(Fred)" ), " " ) != 0 )
      stopit( status, "Table error 2h" );

   /* Putting an integer into a FLOATTYPE column should fail (BADTYP) */
   astMapPut0I( table, "Fred(2)", 123, "com 1" );
   if( !astOK ) {
      astClearStatus;
   } else {
      stopit( status, "Table error 3" );
   }

   /* Putting a float (wrong element type for vector column) should also fail */
   astMapPut0F( table, "Fred(2)", 123.0f, "com 1" );
   if( !astOK ) {
      astClearStatus;
   } else {
      stopit( status, "Table error 4" );
   }

   /* Re-adding an existing column should fail (OLDCOL) */
   astAddColumn( table, "Fred", AST__FLOATTYPE, 0, 0, "pW" );
   if( !astOK ) {
      astClearStatus;
   } else {
      stopit( status, "Table error 5" );
   }

   astRemoveColumn( table, "Fred" );

   if( astGetI( table, "NColumn" ) != 0 )
      stopit( status, "Table error 5b" );

   /* Re-add Fred with unit "pW" (scalar this time) */
   astAddColumn( table, "Fred", AST__FLOATTYPE, 0, 0, "pW" );

   astMapPut0F( table, "Fred(1)", -123.0f, "com 1" );
   astMapPut0F( table, "Fred(2)",  123.0f, "com 2" );

   if( astMapGet0F( table, "Fred(2)", &rval ) ) {
      if( rval != 123.0f ) stopit( status, "Table error 6" );
   } else {
      stopit( status, "Table error 7" );
   }

   if( strcmp( astGetC( table, "ColumnUnit(Fred)" ), "pW" ) != 0 )
      stopit( status, "Table error 7b" );

   /* Add Dick as OBJECTTYPE column; putting a self-reference should fail
      (KYCIR – key creates circularity) */
   astAddColumn( table, "Dick", AST__OBJECTTYPE, 0, 0, "W/m**2" );
   astMapPut0A( table, "Dick(1)", (AstObject *)table, "com 1" );
   if( !astOK ) {
      astClearStatus;
   } else {
      stopit( status, "Table error 8" );
   }

   if( astGetI( table, "NColumn" ) != 2 )
      stopit( status, "Table error 8b" );

   if( strcmp( astColumnName( table, 1 ), "FRED" ) != 0 )
      stopit( status, "Table error 8c" );

   if( strcmp( astColumnName( table, 2 ), "DICK" ) != 0 )
      stopit( status, "Table error 8d" );

   astRemoveColumn( table, "Dick" );

   if( astGetI( table, "NRow" ) != 2 )
      stopit( status, "Table error 9" );

   /* Getting row 3 (doesn't exist) should return false */
   if( astMapGet0F( table, "Fred(3)", &rval ) )
      stopit( status, "Table error 10" );

   /* Getting Fred(2) as integer */
   if( astMapGet0I( table, "Fred(2)", &ival ) ) {
      if( ival != 123 ) stopit( status, "Table error 11" );
   } else {
      stopit( status, "Table error 12" );
   }

   /* Getting Fred(2) as string */
   if( astMapGet0C( table, "Fred(2)", &cval ) ) {
      if( strcmp( cval, "123" ) != 0 ) stopit( status, "Table error 13" );
      if( (int)strlen( cval ) != 3 )   stopit( status, "Table error 14" );
   } else {
      stopit( status, "Table error 15" );
   }

   /* RemoveRow: row 3 doesn't exist so NRow stays at 2 */
   astRemoveRow( table, 3 );
   if( astGetI( table, "NRow" ) != 2 )
      stopit( status, "Table error 16" );

   astRemoveRow( table, 2 );
   if( astGetI( table, "NRow" ) != 1 )
      stopit( status, "Table error 17" );

   if( astMapGet0F( table, "Fred(2)", &rval ) )
      stopit( status, "Table error 18" );

   /* Parameters */
   astAddParameter( table, "COLOUR" );
   if( !astHasParameter( table, "COLOUR" ) )
      stopit( status, "Table error 18_1" );

   astMapPut0C( table, "COLOUR", "Red", " " );
   if( astMapGet0C( table, "COLOUR", &cval ) ) {
      if( strcmp( cval, "Red" ) != 0 ) stopit( status, "Table error 18_3" );
      if( (int)strlen( cval ) != 3 )   stopit( status, "Table error 18_4" );
   } else {
      stopit( status, "Table error 18_5" );
   }

   astRemoveParameter( table, "COLOUR" );
   if( astHasParameter( table, "COLOUR" ) )
      stopit( status, "Table error 18_2" );

   /* Dump round-trip */
   checkDump( (AstObject *)table, "checkDump 1 ", status );

   /* Copy */
   table2 = (AstTable *)astCopy( table );

   if( astMapGet0C( table2, "Fred(1)", &cval ) ) {
      if( strcmp( cval, "-123" ) != 0 ) stopit( status, "Table error 19" );
      if( (int)strlen( cval ) != 4 )    stopit( status, "Table error 20" );
   } else {
      stopit( status, "Table error 21" );
   }

   /* String column Dick with shape (2,2) */
   dims[0] = 2;
   dims[1] = 2;
   astAddColumn( table, "Dick", AST__STRINGTYPE, 2, dims, " " );

   /* Fortran text(2,2)*10 in column-major order:
      text(1,1)="One", text(2,1)="two", text(1,2)="three", text(2,2)="FouR" */
   text_put[0] = "One";
   text_put[1] = "two";
   text_put[2] = "three";
   text_put[3] = "FouR";

   astMapPut1C( table, "Dick(4)", 4, text_put, "jjjj" );
   /* astMapGet1C writes l bytes per string into the flat buffer */
   if( astMapGet1C( table, "Dick(4)", 11, 4, &nval, text_get ) ) {
      if( strcmp( text_get,        "One" )   != 0 ) stopit( status, "Table error 22" );
      if( strcmp( text_get + 11,   "two" )   != 0 ) stopit( status, "Table error 23" );
      if( strcmp( text_get + 22,   "three" ) != 0 ) stopit( status, "Table error 24" );
      if( strcmp( text_get + 33,   "FouR" )  != 0 ) stopit( status, "Table error 25" );
      if( nval != 4 )                               stopit( status, "Table error 26" );
   } else {
      stopit( status, "Table error 27" );
   }

   /* ElemC: put element 3 (1-based) */
   astMapPutElemC( table, "Dick(4)", 3, "OHOHOHOH" );
   {
      char elembuf[30];
      if( astMapGetElemC( table, "Dick(4)", sizeof(elembuf)-1, 3, elembuf ) ) {
         if( strcmp( elembuf, "OHOHOHOH" ) != 0 )
            stopit( status, "Table error 28" );
      } else {
         stopit( status, "Table error 29" );
      }
   }

   /* ColumnLenC reflects the longest string stored.
      The Fortran test uses CHARACTER*10 (space-padded to width 10) and
      expects 10 here.  In C, strings are not padded, so the longest
      stored string ("OHOHOHOH", 8 chars) gives ColumnLenC == 8. */
   if( astGetI( table, "ColumnLenC(Dick)" ) != 8 )
      stopit( status, "Table error 29b" );

   /* Byte column HeHe with shape (1,2) */
   dims[0] = 1;
   dims[1] = 2;
   astAddColumn( table, "HeHe", AST__BYTETYPE, 2, dims, " " );
   bytes[0] = 127;
   bytes[1] = 255;   /* Fortran stored 255 as signed -1; unsigned 255 in C */
   astMapPut1B( table, "HeHe(2)", 2, bytes, "jjjj" );
   if( astMapGet1B( table, "HeHe(2)", 2, &nval, bytes ) ) {
      if( nval != 2 )                            stopit( status, "Table error 30" );
      if( bytes[0] != 127 )                      stopit( status, "Table error 31" );
      /* Fortran: bytes(1,2) .ne. -1  →  unsigned 255 == (unsigned char)(-1) */
      if( bytes[1] != (unsigned char)(-1) )      stopit( status, "Table error 32" );
   } else {
      stopit( status, "Table error 33" );
   }

   /* Scalar byte column GoGo */
   astAddColumn( table, "GoGo", AST__BYTETYPE, 0, 0, " " );
   /* Fortran: mapput0b with -10 (signed); C API takes unsigned char,
      so cast (unsigned char)(-10) = 246 */
   astMapPut0B( table, "GoGo(2)", (unsigned char)(-10), " " );
   if( astMapGet0B( table, "GoGo(2)", &bval ) ) {
      /* Fortran: bval .ne. -10  →  (signed char)bval != -10 */
      if( (signed char)bval != -10 ) stopit( status, "Table error 33" );
   } else {
      stopit( status, "Table error 34" );
   }

   /* PurgeRows test */
   checkpurge( status );

   /* HasColumn */
   if( !astHasColumn( table, "GoGo" ) )
      stopit( status, "Table error 35" );
   else if( astHasColumn( table, "dodo" ) )
      stopit( status, "Table error 36" );

   astRemoveColumn( table, "GoGo" );
   if( astHasColumn( table, "GoGo" ) )
      stopit( status, "Table error 37" );

   /* int64_t (KINTTYPE) column FredK with shape (2,) */
   dims[0] = 2;
   astAddColumn( table, "FredK", AST__KINTTYPE, 1, dims, " " );

   kvals[0] =  1;
   kvals[1] = -1;
   astMapPut1K( table, "FredK(1)", 2, kvals, " " );
   if( astMapGet1K( table, "FredK(1)", 2, &nval, kvals ) ) {
      if( nval != 2 )         stopit( status, "Table error 38" );
      if( kvals[0] != 1 )     stopit( status, "Table error 39" );
      if( kvals[1] != -1 )    stopit( status, "Table error 40" );
   } else {
      stopit( status, "Table error 41" );
   }

   astEnd;
   astFlushMemory( 1 );

   if( *status == 0 ) {
      printf( " All Table tests passed\n" );
   } else {
      printf( "Table tests failed\n" );
   }
   return *status;
}
