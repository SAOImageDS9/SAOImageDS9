/*
*  Name:
*     grf_log.h

*  Purpose:
*     Declare initialisation functions for the logging GRF module.

*  Description:
*     The logging GRF module (grf_log.c) implements the standard GRF
*     graphics interface against a virtual viewport with no external
*     dependencies.  It can optionally log every GRF call to a FILE
*     for analysis.  This header declares the non-standard
*     initialisation and shutdown functions; the standard GRF entry
*     points (astGLine, astGText, etc.) are declared in grf.h.

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
*/

#ifndef GRF_LOG_H_INCLUDED
#define GRF_LOG_H_INCLUDED

#include <stdio.h>

void astGrfLogInit( FILE *logfile );
void astGrfLogSetSvg( FILE *svgfile, int width, int height );
void astGrfLogClose( void );

#endif
