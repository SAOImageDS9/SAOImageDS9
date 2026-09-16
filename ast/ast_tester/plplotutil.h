#if !defined( PLPLOTUTIL_INCLUDED ) /* Include this file only once */
#define PLPLOTUTIL_INCLUDED

/*
*+
*  Name:
*     plplotutil.h

*  Type:
*     C include file.

*  Purpose:
*     Define the interface to the plplotutil.c test utility module.

*  Invocation:
*     #include "plplotutil.h"

*  Description:
*     This include file defines the interface to the plplotutil module and
*     provides the type definitions, function prototypes and macros, etc.
*     needed to use this module.

*  Inheritance:
*     The plplotutil module is not a class and does not inherit.

*  Copyright:
*     Copyright (C) 2026 Council for the Central Laboratory of the
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
*     EMB: E. Madison Bray (STScI)

*  History:
*     24-APR-2026 (EMB):
*        Original version.
*/

/* Function prototypes. */
/* ==================== */
void astPlSetupDevice( const char * );

#endif /* PLPLOTUTIL_INCLUDE */
