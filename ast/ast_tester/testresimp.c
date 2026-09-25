#define astCLASS testresimp

#include "ast_err.h"
#include "error.h"
#include "object.h"
#include "shiftmap.h"
#include "unitmap.h"
#include "zoommap.h"
#include "cmpmap.h"
#include "winmap.h"
#include "mapping.h"

void astBegin_( void );
void astEnd_( int * );

int main( void ){
   int status_value = 0;
   int *status = &status_value;
   double shift;
   AstMapping *map1, *map2;
   int series, inv1, inv2;
   AstShiftMap *sm1;
   AstZoomMap *zm1;
   AstCmpMap *cm1, *cm2;
   AstMapping *m1, *m2;

   astBegin_();

   shift = 1.0;
   sm1 = astShiftMap( 1, &shift, " ", status );
   zm1 = astZoomMap( 1, 2.0, " ", status );
   cm1 = astCmpMap( sm1, zm1, 1, " ", status );
   m1 = astCopy( cm1 );
   astInvert( m1 );
   cm2 = astCmpMap( cm1, m1, 1, " ", status );
   m2 = astSimplify( cm2 );

   if( !astIsAUnitMap( m2 ) && astOK ){
      astError( AST__INTER, "Error 1\n",  status );
   }

   astSetRestrictedSimplify(cm2);
   if( !astRestrictedSimplify(cm2) && astOK ){
      astError( AST__INTER, "Error 2\n",  status );
   }

   m2 = astSimplify( cm2 );
   if( (AstMapping *) cm2 != m2 && astOK ){
      astError( AST__INTER, "Error 3\n",  status );
   }

   astSetAllowSimplify( zm1 );
   m1 = astCopy( cm1 );
   astInvert( m1 );
   cm2 = astCmpMap( cm1, m1, 1, " ", status );
   m2 = astSimplify( cm2 );
   if( !astIsAUnitMap( m2 ) && astOK ){
      astError( AST__INTER, "Error 4\n",  status );
   }

   astSetRestrictedSimplify( cm2 );
   m2 = astSimplify( cm2 );
   if( astIsAUnitMap( m2 ) && astOK ){
      astError( AST__INTER, "Error 5\n",  status );
   }

   astDecompose( m2, &map1, &map2, &series, &inv1, &inv2  );
   if( ( !astIsAShiftMap( map1 ) || !astIsAShiftMap( map2 ) ) && astOK ){
      astError( AST__INTER, "Error 6\n",  status );
   }
   if( inv1 && astOK ){
      astError( AST__INTER, "Error 7\n",  status );
   }
   if( !inv2 && astOK ){
      astError( AST__INTER, "Error 8\n",  status );
   }




   shift = 1.0;
   sm1 = astShiftMap( 1, &shift, " ", status );
   zm1 = astZoomMap( 1, 2.0, " ", status );
   shift = -2.0;
   AstShiftMap *sm2 = astShiftMap( 1, &shift, " ", status );
   cm1 = astCmpMap( sm1, zm1, 1, " ", status );
   cm2 = astCmpMap( cm1, sm2, 1, " ", status );

   m2 = astSimplify( cm2 );
   if( !astIsAZoomMap( m2 ) && astOK ){
      astError( AST__INTER, "Error 9\n",  status );
   }
   if( ( astGetZoom( m2 ) != 2.0 ) && astOK ){
      astError( AST__INTER, "Error 10\n",  status );
   }

   astSetRestrictedSimplify( cm2 );
   astSetAllowSimplify( zm1 );

   m2 = astSimplify( cm2 );
   astDecompose( m2, &map1, &map2, &series, &inv1, &inv2  );

   if( ( !astIsAWinMap( map1 ) || !astIsAShiftMap( map2 ) ) && astOK ){
      astError( AST__INTER, "Error 11\n",  status );
   }
   if( inv1 && astOK ){
      astError( AST__INTER, "Error 12\n",  status );
   }
   if( inv2 && astOK ){
      astError( AST__INTER, "Error 13\n",  status );
   }


   double ina = 1.0;
   double inb = 2.0;
   double outa = 1.2;
   double outb = 2.2;
   AstWinMap *wm = astWinMap( 1, &ina, &inb, &outa, &outb, " ", status );
   shift = 1.0;
   sm1 = astShiftMap( 1, &shift, " ", status );
   cm1 = astCmpMap( wm, sm1, 1, " ", status );
   m2 = astSimplify( cm1 );

   astEnd_( status );

   if( astOK ) {
      printf(" All restricted simplify tests passed\n");
   } else {
      printf("Restricted simplify tests failed\n");
   }
}
