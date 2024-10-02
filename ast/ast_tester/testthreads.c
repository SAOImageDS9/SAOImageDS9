#include "sae_par.h"
#include "ast.h"
#include "ast_err.h"
#include "mers.h"
#include <pthread.h>

void *worker( void *ptr );

typedef struct MyData {
   AstObject *obj;
   int lock;
} MyData;

int main(){
   pthread_t thread1, thread2;
   MyData data1, data2;
   int status = SAI__OK;

   errMark();
   astWatch( &status );


/* Create a UnitMap, unlock it, and then create two threads and tell them
   to use the UnitMap to transform a point. This should fail in the threads
   do not lock the UnitMap pointer */
   data1.obj = (AstObject *) astUnitMap( 1, " " );
   data2.obj = data1.obj;
   astUnlock( data1.obj, 1 );
   data1.lock = 0;
   data2.lock = 0;

   if( pthread_create( &thread1, NULL, worker, &data1 ) ) {
      astError( AST__INTER, "Error creating thread1");
   } else if( pthread_create( &thread2, NULL, worker, &data2 ) ) {
      astError( AST__INTER, "Error creating thread2");
   }

/* Wait for both threads to finish. */
   if( astOK ) {
      if( pthread_join( thread1, NULL) ) {
         astError( AST__INTER, "Error joining thread1\n");
      } else if( pthread_join( thread2, NULL) ) {
         astError( AST__INTER, "Error joining thread2\n");
      }
   }

/* Retrieve the status value */
   errStat( &status );

/* Check the appropriate error occurred. */
   if( status == AST__LCKERR ) {
      errAnnul( &status );
   } else {
      if( status == 0 ) status = 1;
      errRep( " ", "Error 1", &status );
   }


/* Do the same again but this time, send unlocked independent copies of the
   UnitMap to the workers and tell the workers to lock the pointer before
   using it. This should work. */
   astLock( data1.obj, 0 );
   data2.obj = astCopy( data1.obj );
   astUnlock( data1.obj, 1 );
   astUnlock( data2.obj, 1 );
   data1.lock = 1;
   data2.lock = 1;

   if( pthread_create( &thread1, NULL, worker, &data1 ) ) {
      astError( AST__INTER, "Error creating thread1");
   } else if( pthread_create( &thread2, NULL, worker, &data2 ) ) {
      astError( AST__INTER, "Error creating thread2");
   }

   if( astOK ) {
      if( pthread_join( thread1, NULL) ) {
         astError( AST__INTER, "Error joining thread1\n");
      } else if( pthread_join( thread2, NULL) ) {
         astError( AST__INTER, "Error joining thread2\n");
      }
   }

   errStat( &status );

   if( status != SAI__OK ) errRep( " ", "Error 2", &status );









   errRlse();
   if( astOK ) {
      printf(" All thread tests passed\n");
   } else {
      printf("Thread tests failed\n");
   }

}

void *worker( void *ptr ) {
   double xin, xout;
   MyData *data = (MyData *) ptr;

   if( data->lock ) astLock( data->obj, 0 );

   xin = 0;
   astTran1( data->obj, 1, &xin, 1, &xout );

   if( data->lock ) astUnlock( data->obj, 1 );
}


