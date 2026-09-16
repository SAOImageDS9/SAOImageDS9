#include <string.h>
#include "sae_par.h"
#include "ast_err.h"

#define astCLASS testunitnorm
#include "unit.h"

void astBegin_( void );
void astEnd_( int * );

int main( void ) {
   int _status = SAI__OK;
   int* status = &_status;
   astWatch( status );
   astBegin_();

   const char* result = astUnitNormaliser_("s*(m/s)", status);

   if( strcmp( result, "m" ) ) {
      astError_( AST__INTER, "UnitNormaliser did not give expected result", status );
   }

   astEnd_( status );

   if( astOK ) {
      printf(" All UnitNormaliser tests passed\n");
   } else {
      printf("UnitNormaliser tests failed\n");
   }
   return astOK ? 0 : 1;
}
