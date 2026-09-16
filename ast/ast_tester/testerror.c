#include "ast.h"

#define ERRVAL -1234
static int flag;

static void myPutErr( int status_value, const char *message );

int main( void ){
   double a[2] = {0.0,0.0};

/* Initialise the flag that indicates if the error handler has been
   called. */
   flag = 0;

/* Register the error handler. */
   astSetPutErr( myPutErr );

/* Generate an error by making a ShiftMap with a negative number of axes.
   The error handler will set the flag to a special value. */
   astShiftMap( -1, a, " " );

/* Clear the error status. */
   astClearStatus;

/* Clear the error reporter so that the default error reporter is used. */
   astSetPutErr( NULL );

/* Report an error if the flag was not set to the correct value. */
   if( flag != ERRVAL ) {
      astError( AST__INTER, "Error reporting function has not been "
                "called." );
   }

   if( astOK ) {
      printf(" All Error tests passed\n");
   } else {
      printf("Error tests failed\n");
   }
   return astOK ? 0 : 1;

}

static void myPutErr( int status_value, const char *message ) {
   (void) status_value;
   (void) message;
   flag = ERRVAL;
}
