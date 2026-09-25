#if !defined( PL3D_INCLUDED ) /* Include this file only once */
#define PL3D_INCLUDED
/*
*+
*  Name:
*     pl3d.h

*  Type:
*     C include file.

*  Purpose:
*     Define the interface to the pl3d module

*  Invocation:
*     #include "pl3d.h"

*  Description:
*     This include file defines the interface to the pl3d module
*     (implemented in file grf3d_plplot.c) and provides the type
*     definitions, function prototypes and macros, etc. needed to
*     use this module.
*
*     The functions in the pl3d interface provide control of the view
*     of the 3D world coordinate system visible on the 2D PLplot
*     viewport. They are provided for users of the PLplot implementation
*     of the grf3D interface distributed with AST. No calls to these
*     functions are made from within AST itself.

*  Copyright:
*     Copyright (C) 2007 Science & Technology Facilities Council.
*     Copyright (C) 2026 Tim Jenness.
*     All Rights Reserved.

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
*     DSB: David S. Berry (JACH - UCLan)
*     TIMJ: Tim Jenness (tjenness@lsst.org)

*  History:
*     20-JUN-2007 (DSB):
*        Original version (as pg3d.h for PGPLOT).
*     15-APR-2026 (TIMJ):
*        PLplot equivalent of pg3d.h, using PL3D prefix.
*-
*/

int PL3DRotateEye( int, float );
int PL3DSetCamera( float[3], float[3], float[3], float );
int PL3DSetEye( float[3] );
int PL3DSetTarget( float[3] );
int PL3DSetUp( float[3] );
int PL3DSetScreen( float );
int PL3DForward( float );
int PL3DAutoCamera( float[3], float[3] );
int PL3DFindNearest( int, float *, float *, float *, int * );
int PL3DGetCamera( float[3], float[3], float[3], float * );
int PL3DRotateTarget( int, float );

#endif
