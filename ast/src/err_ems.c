/*
*  Name:
*     err_ems.c

*  Purpose:
*     Implement the "err" module for the EMS error system.

*  Description:
*     This file implements an alternative "err" module for the AST
*     library. It is used to deliver error messages through the
*     Starlink EMS error message system (Starlink System Note 4)
*     rather than by the default mechanism.

*  Copyright:
*     Copyright (C) 2008 Science and Technology Facilities Council.
*     Copyright (C) 1997-2006 Council for the Central Laboratory of the
*     Research Councils

*  Licence:
*     This program is free software: you can redistribute it and/or
*     modify it under the terms of the GNU Lesser General Public
*     License as published by the Free Software Foundation, either
*     version 3 of the License, or (at your option) any later
*     version.
*     
*     This program is distributed in the hope that it will be useful,
*     but WITHOUT ANY WARRANTY; without even the implied warranty of
*     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
*     GNU Lesser General Public License for more details.
*     
*     You should have received a copy of the GNU Lesser General
*     License along with this program.  If not, see
*     <http://www.gnu.org/licenses/>.

*  Authors:
*     RFWS: R.F. Warren-Smith (STARLINK)
*     {enter_new_authors_here}

*  History:
*     6-NOV-1996 (DSB):
*        Original version.
*     16-SEP-2008 (TIMJ):
*        Use modern EMS interface
*     {enter_changes_here}
*/

/* Module Macros. */
/* ============== */
/* Define the astCLASS macro (even although this is not a class
   implementation). This indicates to header files that they should
   make "protected" symbols available. */
#define astCLASS

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */
#include "err.h"                 /* Interface to this module */
#include "ems.h"                 /* Interface to the EMS system */

/* Function implementations. */
/* ========================= */
void astPutErr_( int status, const char *message ) {
/*
*+
*  Name:
*     astPutErr

*  Purpose:
*     Deliver an error message.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "err.h"
*     void astPutErr( int status, const char *message )

*  Description:
*     This function delivers an error message and (optionally) an
*     accompanying status value to the user. It may be re-implemented
*     in order to deliver error messages in different ways, according
*     to the environment in which the AST library is being used.

*  Parameters:
*     status
*        The error status value.
*     message
*        A pointer to a null-terminated character string containing
*        the error message to be delivered. This should not contain
*        newline characters.

*  Notes:
*     - This function is documented as "protected" but, in fact, is
*     publicly accessible so that it may be re-implemented as
*     required.
*-
*/

/* Local Variables: */
   int local_status;             /* Local status value */

/* Make a copy of the status value supplied. Then invoke ems_rep_c to
   report the error message through EMS and to associate the error
   status with it. Ignore any returned status value. */
   local_status = status;
   emsRep( "AST_ERROR", message, &local_status );
}
