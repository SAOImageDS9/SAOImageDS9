#include "ast.h"
#include <stdio.h>
#include <string.h>

int main(){
   const char *routine;
   const char *file;
   int i;
   int line;
   char *pickle1;
   char *pickle2;
   AstSkyFrame *sf = astSkyFrame( " " );
   AstFrame *bf = astFrame( 2, "Domain=SKY" );
   AstFrameSet *fs = astConvert( bf, sf, " " );
   AstKeyMap *km;
   void *p;

   if( fs ) {
      pickle1 = astToString( fs );
      AstFrameSet *fs2 = astFromString( pickle1 );
      pickle2 = astToString( fs2 );
      if( pickle1 && pickle2 ) {
         if( strcmp( pickle1, pickle2 ) && astOK ) {
            astError( AST__INTER, "Error 1\n" );
         }
      } else if( astOK ) {
         astError( AST__INTER, "Error 2\n" );
      }


      pickle1 = astFree( pickle1 );
      pickle2 = astFree( pickle2 );

      if( fs2 && !astEqual( fs, fs2 ) && astOK ) {
         astError( AST__INTER, "Error 3\n" );
      }

      astCreatedAt( bf, &routine, &file, &line );
      if( ( !routine || strcmp( routine, "main" ) ) && astOK ) {
         astError( AST__INTER, "Error 31\n" );
      }
      if( ( !file || strcmp( file, "testobject.c" ) ) && astOK ) {
         astError( AST__INTER, "Error 32\n" );
      }
      if( line != 13 && astOK ) {
         astError( AST__INTER, "Error 33 (line is %d)\n", line );
      }


      km = astActiveObjects( NULL, 0, 0 );
      if( !km && astOK ) {
         astError( AST__INTER, "Error 34\n" );
      } else {
         int nkey = astMapSize( km );
         if( nkey != 3 && astOK ) {
            astError( AST__INTER, "Error 35 (nkey is %d)\n", nkey );
         }

         astSetC( km, "SortBy", "KeyUp" );
         for( i=0; i < 3; i++ ){
            const char *key = astMapKey( km, i );
            if( i == 0 ) {
               if( strcmp( key, "Frame" ) && astOK ) {
                  astError( AST__INTER, "Error 36 (key 0 is '%s')\n", key );
               } else if( astMapLength(km,key) != 1 && astOK ) {
                  astError( AST__INTER, "Error 361 (%d)\n", astMapLength(km,key) );
               } else if( ( !astMapGetElemP( km, key, 0, &p ) || ( p != bf ) ) && astOK ) {
                  astError( AST__INTER, "Error 362\n" );
               } else {
                  astCreatedAt( p, &routine, &file, &line );
                  if( ( !routine || strcmp( routine, "main" ) ) && astOK ) {
                     astError( AST__INTER, "Error 363\n" );
                  }
                  if( ( !file || strcmp( file, "testobject.c" ) ) && astOK ) {
                     astError( AST__INTER, "Error 364\n" );
                  }
                  if( line != 13 && astOK ) {
                     astError( AST__INTER, "Error 365 (line is %d)\n", line );
                  }
               }
            } else if( i == 1 ) {
               if( strcmp( key, "FrameSet" ) && astOK ) {
                  astError( AST__INTER, "Error 37 (key 1 is '%s')\n", key );
               } else if( astMapLength(km,key) != 2 && astOK ) {
                  astError( AST__INTER, "Error 371 (%d)\n", astMapLength(km,key) );
               } else if( ( !astMapGetElemP( km, key, 1, &p ) || ( p != fs2 ) ) && astOK ) {
                  astError( AST__INTER, "Error 372\n" );
               } else {
                  astCreatedAt( p, &routine, &file, &line );
                  if( ( !routine || strcmp( routine, "main" ) ) && astOK ) {
                     astError( AST__INTER, "Error 373\n" );
                  }
                  if( ( !file || strcmp( file, "testobject.c" ) ) && astOK ) {
                     astError( AST__INTER, "Error 374\n" );
                  }
                  if( line != 20 && astOK ) {
                     astError( AST__INTER, "Error 375 (line is %d)\n", line );
                  }
               }
            } else {
               if( strcmp( key, "SkyFrame" ) && astOK ) {
                  astError( AST__INTER, "Error 38 (key 2 is '%s')\n", key );
               } else if( astMapLength(km,key) != 1 && astOK ) {
                  astError( AST__INTER, "Error 381 (%d)\n", astMapLength(km,key) );
               }
            }
         }
      }
      km = astAnnul( km );

   } else if( astOK ){
      astError( AST__INTER, "Error 4\n"  );
   }

   if( astOK ) {
      printf(" All Object tests passed\n");
   } else {
      printf("Object tests failed\n");
   }
}
