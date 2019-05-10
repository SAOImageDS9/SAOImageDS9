/*
*+
*  Name:
*     palMapqkz

*  Purpose:
*     Quick mean to apparent place (no proper motion or parallax).

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     void palMapqkz( double rm, double dm, double amprms[21],
*                     double *ra, double *da )

*  Arguments:
*     rm = double (Given)
*        Mean RA (radians).
*     dm = double (Given)
*        Mean Dec (radians).
*     amprms = double[21] (Given)
*        Star-independent mean-to-apparent parameters (see palMappa):
*        (0-3)    not used
*        (4-6)    heliocentric direction of the Earth (unit vector)
*        (7)      not used
*        (8-10)   abv: barycentric Earth velocity in units of c
*        (11)     sqrt(1-v^2) where v=modulus(abv)
*        (12-20)  precession/nutation (3,3) matrix
*     ra = double * (Returned)
*        Apparent RA (radians).
*     da = double * (Returned)
*        Apparent Dec (radians).

*  Description:
*     Quick mean to apparent place:  transform a star RA,dec from
*     mean place to geocentric apparent place, given the
*     star-independent parameters, and assuming zero parallax
*     and proper motion.
*
*     Use of this function is appropriate when efficiency is important
*     and where many star positions, all with parallax and proper
*     motion either zero or already allowed for, and all referred to
*     the same equator and equinox, are to be transformed for one
*     epoch.  The star-independent parameters can be obtained by
*     calling the palMappa function.
*
*     The corresponding function for the case of non-zero parallax
*     and proper motion is palMapqk.

*  Notes:
*     - The reference systems and timescales used are IAU 2006.
*     - The mean place rm, dm and the vectors amprms[1-3] and amprms[4-6]
*       are referred to the mean equinox and equator of the epoch
*       specified when generating the precession/nutation matrix
*       amprms[12-20].  In the call to palMappa (q.v.) normally used
*       to populate amprms, this epoch is the first argument (eq).
*     - The vector amprms(4-6) is referred to the mean equinox and
*       equator of epoch eq.
*     - Strictly speaking, the routine is not valid for solar-system
*       sources, though the error will usually be extremely small.
*       However, to prevent gross errors in the case where the
*       position of the Sun is specified, the gravitational
*       deflection term is restrained within about 920 arcsec of the
*       centre of the Sun's disc.  The term has a maximum value of
*       about 1.85 arcsec at this radius, and decreases to zero as
*       the centre of the disc is approached.

*  Authors:
*     PTW: Pat Wallace (STFC)
*     {enter_new_authors_here}

*  History:
*     2012-02-13 (PTW):
*        Initial version.
*        Adapted with permission from the Fortran SLALIB library.
*     {enter_further_changes_here}

*  Copyright:
*     Copyright (C) 1999 Rutherford Appleton Laboratory
*     Copyright (C) 2012 Science and Technology Facilities Council.
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

*  Bugs:
*     {note_any_bugs_here}
*-
*/

#include "pal.h"
#include "pal1sofa.h"

void palMapqkz ( double rm, double dm, double amprms[21], double *ra,
                 double *da ){

/* Local Variables: */
   int i;
   double ab1, abv[3], p[3], w, p1dv, p2[3], p3[3];
   double gr2e, pde, pdep1, ehn[3], p1[3];

/* Unpack scalar and vector parameters. */
   ab1 = amprms[11];
   gr2e = amprms[7];
   for( i = 0; i < 3; i++ ) {
      abv[i] = amprms[i+8];
      ehn[i] = amprms[i+4];
   }

/* Spherical to x,y,z. */
   eraS2c( rm, dm, p );

/* Light deflection (restrained within the Sun's disc) */
   pde = eraPdp( p, ehn );
   pdep1 = pde + 1.0;
   w = gr2e / ( pdep1 > 1.0e-5 ? pdep1 : 1.0e-5 );
   for( i = 0; i < 3; i++) {
      p1[i] = p[i] + w * ( ehn[i] - pde * p[i] );
   }

/* Aberration. */
   p1dv = eraPdp( p1, abv );
   w = 1.0 + p1dv / ( ab1 + 1.0 );
   for( i = 0; i < 3; i++ ) {
      p2[i] = ( ( ab1 * p1[i] ) + ( w * abv[i] ) );
   }

/* Precession and nutation. */
   eraRxp( (double(*)[3]) &amprms[12], p2, p3 );

/* Geocentric apparent RA,dec. */
   eraC2s( p3, ra, da );
   *ra = eraAnp( *ra );
}
