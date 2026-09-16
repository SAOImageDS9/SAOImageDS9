#include <string.h>
#include "sae_par.h"
#include "ast_err.h"

#define astCLASS testaxis
#include "object.h"
#include "axis.h"

void astBegin_( void );
void astEnd_( int * );

int main( void ) {
   int _status = SAI__OK;
   int* status = &_status;
   astWatch( status );
   astBegin_();

   AstAxis* axis = astAxis_( " ", status );
   astSetC_( (AstObject*) axis, "Unit", "s*(m/s)", status );
   const char* result = astGetC_( (AstObject*) axis, "NormUnit", status );

   if( strcmp( result, "m" ) ) {
      astError_( AST__INTER, "NormUnit did not give expected result", status );
   }

   astEnd_( status );

   if( astOK ) {
      printf(" All Axis tests passed\n");
   } else {
      printf("Axis tests failed\n");
   }
   return astOK ? 0 : 1;
}
