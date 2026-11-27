/*
 * Test astConvert/astFindFrame public behaviour.
 */
#include "ast.h"
#include "ast_err.h"
#include <stdio.h>

int main( void ){
   int status_value = 0;
   int *status = &status_value;

   AstFrameSet *fs;
   AstSkyFrame *sf;
   AstSpecFrame *df;
   AstCmpFrame *cf;
   AstFrame *bf;
   AstFrame *target, *template;

   astWatch( status );
   astBegin;

   sf = astSkyFrame( " " );
   df = astSpecFrame( " " );
   cf = astCmpFrame( df, sf, " " );
   bf = astFrame( 2, "Domain=SKY" );

   fs = astConvert( bf, sf, " " );
   if( fs ) {
      if( !astEqual( astGetFrame( fs, AST__BASE ), bf ) && astOK ) {
         astError( AST__INTER, "Error 1\n" );
      } else if( !astEqual( astGetFrame( fs, AST__CURRENT ), sf ) && astOK ) {
         astError( AST__INTER, "Error 2\n" );
      } else if( !astIsAUnitMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
         astError( AST__INTER, "Error 3\n" );
      }
   } else {
      astError( AST__INTER, "Error 4\n" );
   }

   fs = astConvert( sf, bf, " " );
   if( fs ) {
      if( !astEqual( astGetFrame( fs, AST__BASE ), sf ) && astOK ) {
         astError( AST__INTER, "Error 5\n" );
      } else if( !astEqual( astGetFrame( fs, AST__CURRENT ), bf ) && astOK ) {
         astError( AST__INTER, "Error 6\n" );
      } else if( !astIsAUnitMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
         astError( AST__INTER, "Error 7\n" );
      }
   } else {
      astError( AST__INTER, "Error 8\n" );
   }


   astSetC( bf, "Domain", "NOTSKY" );
   fs = astConvert( bf, sf, " " );
   if( fs ) {
      astShow( fs );
      astError( AST__INTER, "Error 9\n" );
   }

   fs = astConvert( sf, bf, " " );
   if( fs ) {
      astShow( fs );
      astError( AST__INTER, "Error 10\n" );
   }

   astClear( bf, "Domain" );

   fs = astConvert( bf, sf, " " );
   if( fs ) {
      if( !astEqual( astGetFrame( fs, AST__BASE ), bf ) && astOK ) {
         astError( AST__INTER, "Error 11\n" );
      } else if( !astEqual( astGetFrame( fs, AST__CURRENT ), sf ) && astOK ) {
         astError( AST__INTER, "Error 12\n" );
      } else if( !astIsAUnitMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
         astError( AST__INTER, "Error 13\n" );
      }
   } else {
      astError( AST__INTER, "Error 14\n" );
   }

   fs = astConvert( sf, bf, " " );
   if( fs ) {
      if( !astEqual( astGetFrame( fs, AST__BASE ), sf ) && astOK ) {
         astError( AST__INTER, "Error 15\n" );
      } else if( !astEqual( astGetFrame( fs, AST__CURRENT ), bf ) && astOK ) {
         astError( AST__INTER, "Error 16\n" );
      } else if( !astIsAUnitMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
         astError( AST__INTER, "Error 17\n" );
      }
   } else {
      astError( AST__INTER, "Error 18\n" );
   }


   fs = astConvert( bf, cf, " " );
   if( fs ) {
      if( !astEqual( astGetFrame( fs, AST__BASE ), bf ) && astOK ) {
         astError( AST__INTER, "Error 19\n" );
      } else if( !astEqual( astGetFrame( fs, AST__CURRENT ), cf ) && astOK ) {
         astError( AST__INTER, "Error 20\n" );
      } else if( !astIsAPermMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
         astError( AST__INTER, "Error 21\n" );
      }
   } else {
      astError( AST__INTER, "Error 22\n" );
   }

   fs = astConvert( cf, bf, " " );
   if( fs ) {
      if( !astEqual( astGetFrame( fs, AST__BASE ), cf ) && astOK ) {
         astError( AST__INTER, "Error 23\n" );
      } else if( !astEqual( astGetFrame( fs, AST__CURRENT ), bf ) && astOK ) {
         astError( AST__INTER, "Error 24\n" );
      } else if( !astIsAPermMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
         astError( AST__INTER, "Error 25\n" );
      }
   } else {
      astError( AST__INTER, "Error 26\n" );
   }


   astSetC( bf, "Domain", "NOTSKY" );
   fs = astConvert( bf, cf, " " );
   if( fs ) {
      astShow( fs );
      astError( AST__INTER, "Error 27\n" );
   }

   fs = astConvert( cf, bf, " " );
   if( fs ) {
      astShow( fs );
      astError( AST__INTER, "Error 28\n" );
   }


   astSetC( bf, "Domain", "SKY" );
   fs = astConvert( bf, cf, " " );
   if( fs ) {
      if( !astEqual( astGetFrame( fs, AST__BASE ), bf ) && astOK ) {
         astError( AST__INTER, "Error 29\n" );
      } else if( !astEqual( astGetFrame( fs, AST__CURRENT ), cf ) && astOK ) {
         astError( AST__INTER, "Error 30\n" );
      } else if( !astIsAPermMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
         astError( AST__INTER, "Error 31\n" );
      }
   } else {
      astError( AST__INTER, "Error 32\n" );
   }

   fs = astConvert( cf, bf, " " );
   if( fs ) {
      if( !astEqual( astGetFrame( fs, AST__BASE ), cf ) && astOK ) {
         astError( AST__INTER, "Error 33\n" );
      } else if( !astEqual( astGetFrame( fs, AST__CURRENT ), bf ) && astOK ) {
         astError( AST__INTER, "Error 34\n" );
      } else if( !astIsAPermMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
         astError( AST__INTER, "Error 35\n" );
      }
   } else {
      astError( AST__INTER, "Error 36\n" );
   }


   fs = astConvert( sf, cf, " " );
   if( fs ) {
      if( !astEqual( astGetFrame( fs, AST__BASE ), sf ) && astOK ) {
         astError( AST__INTER, "Error 37\n" );
      } else if( !astEqual( astGetFrame( fs, AST__CURRENT ), cf ) && astOK ) {
         astError( AST__INTER, "Error 38\n" );
      } else if( !astIsAPermMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
         astError( AST__INTER, "Error 39\n" );
      }
   } else {
      astError( AST__INTER, "Error 40\n" );
   }

   fs = astConvert( cf, sf, " " );
   if( fs ) {
      if( !astEqual( astGetFrame( fs, AST__BASE ), cf ) && astOK ) {
         astError( AST__INTER, "Error 41\n" );
      } else if( !astEqual( astGetFrame( fs, AST__CURRENT ), sf ) && astOK ) {
         astError( AST__INTER, "Error 42\n" );
      } else if( !astIsAPermMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
         astError( AST__INTER, "Error 43\n" );
      }
   } else {
      astError( AST__INTER, "Error 44\n" );
   }


   fs = astFindFrame( sf, cf, " " );
   if( !fs && astOK ) {
      astError( AST__INTER, "Error 45\n" );
   }

   fs = astFindFrame( cf, sf, " " );
   if( fs && astOK ) {
      astError( AST__INTER, "Error 46\n" );
   }

   astSetI( sf, "MaxAxes", 3 );
   astSetI( sf, "MinAxes", 1 );

   fs = astFindFrame( cf, sf, " " );
   if( !fs && astOK ) {
      astError( AST__INTER, "Error 47\n" );
   } else {
      if( !astEqual( astGetFrame( fs, AST__BASE ), cf ) && astOK ) {
         astError( AST__INTER, "Error 48\n" );
      } else if( !astEqual( astGetFrame( fs, AST__CURRENT ), sf ) && astOK ) {
         astError( AST__INTER, "Error 49\n" );
      } else if( !astIsAPermMap( astGetMapping( fs, AST__BASE, AST__CURRENT ) ) ) {
         astError( AST__INTER, "Error 50\n" );
      }
   }

   target = astFrame( 2, "Domain=ARDAPP" );
   template = (AstFrame *) astSkyFrame( "System=GAPPT" );
   fs = astFindFrame( target, template, " " );
   if( fs && astOK ) {
      astError( AST__INTER, "Error 51\n" );
   }




   astEnd;

   if( astOK ) {
      printf(" All astConvert tests passed\n");
   } else {
      printf("astConvert tests failed\n");
   }

   return *status;
}
