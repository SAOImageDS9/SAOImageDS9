/*
*+
*  Name:
*     palOne2One

*  Purpose:
*     File containing simple PAL wrappers for SLA routines that are identical in SOFA

*  Invocation:
*     Matches SLA API

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Description:
*     Some SOFA/ERFA routines are identical to their SLA counterparts. PAL provides
*     direct counterparts to these although it is generally a better idea to
*     use the SOFA/ERFA routine directly in new code.
*
*     The PAL routines with direct equivalents in SOFA/ERFA are:
*     - palCldj
*     - palDbear
*     - palDaf2r
*     - palDav2m
*     - palDcc2s
*     - palDcs2c
*     - palDd2tf
*     - palDimxv
*     - palDm2av
*     - palDjcl
*     - palDmxm
*     - palDmxv
*     - palDpav
*     - palDr2af
*     - palDr2tf
*     - palDranrm
*     - palDsep
*     - palDsepv
*     - palDtf2d
*     - palDtf2r
*     - palDvdv
*     - palDvn
*     - palDvxv
*     - palEpb
*     - palEpb2d
*     - palEpj
*     - palEpj2d
*     - palEqeqx
*     - palFk5hz
*     - palGmst
*     - palGmsta
*     - palHfk5z
*     - palRefcoq

*  Authors:
*     TIMJ: Tim Jenness (JAC, Hawaii)
*     DSB: David S Berry (JAC, Hawaii)
*     {enter_new_authors_here}

*  Notes:
*     - Do not call these functions from other PAL functions. Always use
*       the SOFA/ERFA routines directly in new code.
*     - These are implemented as real functions rather than C preprocessor
*       macros so there may be a performance penalty in using the PAL
*       version instead of the SOFA/ERFA version.
*     - Routines that take MJDs have SOFA/ERFA equivalents that have an explicit
*       MJD offset included.
*     - palEqeqx, palGmst and palGmsta use the IAU 2006 precession model.

*  History:
*     2012-02-10 (TIMJ):
*        Initial version
*        Adapted with permission from the Fortran SLALIB library.
*     2012-03-23 (TIMJ):
*        Update prologue.
*     2012-05-09 (DSBJ):
*        Move palDrange into a separate file.
*     2014-07-15 (TIMJ):
*        SOFA now has palRefcoq equivalent.
*     {enter_further_changes_here}

*  Copyright:
*     Copyright (C) 2014 Tim Jenness
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
#include "palmac.h"
#include "pal1sofa.h"

/*
*+
*  Name:
*     palCldj

*  Purpose:
*     Gregorian Calendar to Modified Julian Date

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palCldj( int iy, int im, int id, double *djm, int *j );

*  Arguments:
*     iy = int (Given)
*        Year in Gregorian calendar
*     im = int (Given)
*        Month in Gregorian calendar
*     id = int (Given)
*        Day in Gregorian calendar
*     djm = double * (Returned)
*        Modified Julian Date (JD-2400000.5) for 0 hrs
*     j = int * (Returned)
*        status: 0 = OK, 1 = bad year (MJD not computed),
*        2 = bad month (MJD not computed), 3 = bad day (MJD computed).

*  Description:
*     Gregorian calendar to Modified Julian Date.

*  Notes:
*     - Uses eraCal2jd(). See SOFA/ERFA documentation for details.

*-
*/

void palCldj ( int iy, int im, int id, double *djm, int *j ) {
  double djm0;
  *j = eraCal2jd( iy, im, id, &djm0, djm );
}

/*
*+
*  Name:
*     palDbear

*  Purpose:
*     Bearing (position angle) of one point on a sphere relative to another

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     pa = palDbear( double a1, double b1, double a2, double b2 );

*  Arguments:
*     a1 = double (Given)
*        Longitude of point A (e.g. RA) in radians.
*     a2 = double (Given)
*        Latitude of point A (e.g. Dec) in radians.
*     b1 = double (Given)
*        Longitude of point B in radians.
*     b2 = double (Given)
*        Latitude of point B in radians.

*  Returned Value:
*     The result is the bearing (position angle), in radians, of point
*     A2,B2 as seen from point A1,B1.  It is in the range +/- pi.  If
*     A2,B2 is due east of A1,B1 the bearing is +pi/2.  Zero is returned
*     if the two points are coincident.

*  Description:
*     Bearing (position angle) of one point in a sphere relative to another.

*  Notes:
*     - Uses eraPas(). See SOFA/ERFA documentation for details.

*-
*/

double palDbear ( double a1, double b1, double a2, double b2 ) {
  return eraPas( a1, b1, a2, b2 );
}

/*
*+
*  Name:
*     palDaf2r

*  Purpose:
*     Convert degrees, arcminutes, arcseconds to radians

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDaf2r( int ideg, int iamin, double asec, double *rad, int *j );

*  Arguments:
*     ideg = int (Given)
*        Degrees.
*     iamin = int (Given)
*        Arcminutes.
*     iasec = double (Given)
*        Arcseconds.
*     rad = double * (Returned)
*        Angle in radians.
*     j = int * (Returned)
*        Status: 0 = OK, 1 = "ideg" out of range 0-359,
*                2 = "iamin" outside of range 0-59,
*                2 = "asec" outside range 0-59.99999

*  Description:
*     Convert degrees, arcminutes, arcseconds to radians.

*  Notes:
*     - Uses eraAf2a(). See SOFA/ERFA documentation for details.

*-
*/

/* Arguments differ slightly. Assumes that the sign is always positive
   and dealt with externally. */
void palDaf2r ( int ideg, int iamin, double asec, double *rad, int *j ) {
  *j = eraAf2a( ' ', ideg, iamin, asec, rad );
}

/*
*+
*  Name:
*     palDav2m

*  Purpose:
*     Form the rotation matrix corresponding to a given axial vector.

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDav2m( double axvec[3], double rmat[3][3] );

*  Arguments:
*     axvec = double [3] (Given)
*       Axial vector (radians)
*     rmat = double [3][3] (Returned)
*       Rotation matrix.

*  Description:
*     A rotation matrix describes a rotation about some arbitrary axis,
*     called the Euler axis.  The "axial vector" supplied to this routine
*     has the same direction as the Euler axis, and its magnitude is the
*     amount of rotation in radians.

*  Notes:
*     - Uses eraRv2m(). See SOFA/ERFA documentation for details.

*-
*/

void palDav2m ( double axvec[3], double rmat[3][3] ) {
  eraRv2m( axvec, rmat );
}

/*
*+
*  Name:
*     palDcc2s

*  Purpose:
*     Cartesian to spherical coordinates

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDcc2s( double v[3], double *a, double *b );

*  Arguments:
*     v = double [3] (Given)
*        x, y, z vector.
*     a = double * (Returned)
*        Spherical coordinate (radians)
*     b = double * (Returned)
*        Spherical coordinate (radians)

*  Description:
*     The spherical coordinates are longitude (+ve anticlockwise looking
*     from the +ve latitude pole) and latitude.  The Cartesian coordinates
*     are right handed, with the x axis at zero longitude and latitude, and
*     the z axis at the +ve latitude pole.

*  Notes:
*     - Uses eraC2s(). See SOFA/ERFA documentation for details.

*-
*/

void palDcc2s ( double v[3], double *a, double *b ) {
  eraC2s( v, a, b );
}

/*
*+
*  Name:
*     palDcs2c

*  Purpose:
*     Spherical coordinates to direction cosines

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDcs2c( double a, double b, double v[3] );

*  Arguments:
*     a = double (Given)
*        Spherical coordinate in radians (ra, long etc).
*     b = double (Given)
*        Spherical coordinate in radians (dec, lat etc).
*     v = double [3] (Returned)
*        x, y, z vector

*  Description:
*     The spherical coordinates are longitude (+ve anticlockwise looking
*     from the +ve latitude pole) and latitude.  The Cartesian coordinates
*     are right handed, with the x axis at zero longitude and latitude, and
*     the z axis at the +ve latitude pole.

*  Notes:
*     - Uses eraS2c(). See SOFA/ERFA documentation for details.

*-
*/

void palDcs2c ( double a, double b, double v[3] ) {
  eraS2c( a, b, v );
}

/*
*+
*  Name:
*     palDd2tf

*  Purpose:
*     Convert an interval in days into hours, minutes, seconds

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDd2tf( int ndp, double days, char *sign, int ihmsf[4] );

*  Arguments:
*     ndp = int (Given)
*        Number of decimal places of seconds
*     days = double (Given)
*        Interval in days
*     sign = char * (Returned)
*        '+' or '-' (single character, not string)
*     ihmsf = int [4] (Returned)
*        Hours, minutes, seconds, fraction

*  Description:
*     Convert and interval in days into hours, minutes, seconds.

*  Notes:
*     - Uses eraD2tf(). See SOFA/ERFA documentation for details.

*-
*/

void palDd2tf ( int ndp, double days, char *sign, int ihmsf[4] ) {
  eraD2tf( ndp, days, sign, ihmsf );
}

/*
*+
*  Name:
*     palDimxv

*  Purpose:
*     Perform the 3-D backward unitary transformation

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDimxv( double dm[3][3], double va[3], double vb[3] );

*  Arguments:
*     dm = double [3][3] (Given)
*        Matrix
*     va = double [3] (Given)
*        vector
*     vb = double [3] (Returned)
*        Result vector

*  Description:
*     Perform the 3-D backward unitary transformation.

*  Notes:
*     - Uses eraTrxp(). See SOFA/ERFA documentation for details.

*-
*/

void palDimxv ( double dm[3][3], double va[3], double vb[3] ) {
  eraTrxp( dm, va, vb );
}

/*
*+
*  Name:
*     palDm2av

*  Purpose:
*     From a rotation matrix, determine the corresponding axial vector

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDm2av( double rmat[3][3], double axvec[3] );

*  Arguments:
*     rmat = double [3][3] (Given)
*        Rotation matrix
*     axvec = double [3] (Returned)
*        Axial vector (radians)

*  Description:
*     A rotation matrix describes a rotation about some arbitrary axis,
*     called the Euler axis.  The "axial vector" returned by this routine
*     has the same direction as the Euler axis, and its magnitude is the
*     amount of rotation in radians.  (The magnitude and direction can be
*     separated by means of the routine palDvn.)

*  Notes:
*     - Uses eraRm2v(). See SOFA/ERFA documentation for details.

*-
*/

void palDm2av ( double rmat[3][3], double axvec[3] ) {
  eraRm2v( rmat, axvec );
}

/*
*+
*  Name:
*     palDjcl

*  Purpose:
*     Modified Julian Date to Gregorian year, month, day and fraction of day

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDjcl( double djm, int *iy, int *im, int *id, double *fd, int *j );

*  Arguments:
*     djm = double (Given)
*        modified Julian Date (JD-2400000.5)
*     iy = int * (Returned)
*        year
*     im = int * (Returned)
*        month
*     id = int * (Returned)
*        day
*     fd = double * (Returned)
*        Fraction of day.

*  Description:
*     Modified Julian Date to Gregorian year, month, day and fraction of day.

*  Notes:
*     - Uses eraJd2cal(). See SOFA/ERFA documentation for details.

*-
*/

/* Requires additional SLA MJD reference date */
void palDjcl ( double djm, int *iy, int *im, int *id, double *fd, int *j ) {
  *j = eraJd2cal( PAL__MJD0, djm, iy, im, id, fd );
}

/*
*+
*  Name:
*     palDmxm

*  Purpose:
*     Product of two 3x3 matrices

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDmxm( double a[3][3], double b[3][3], double c[3][3] );

*  Arguments:
*     a = double [3][3] (Given)
*        Matrix
*     b = double [3][3] (Given)
*        Matrix
*     c = double [3][3] (Returned)
*        Matrix result

*  Description:
*     Product of two 3x3 matrices.

*  Notes:
*     - Uses eraRxr(). See SOFA/ERFA documentation for details.

*-
*/

void palDmxm ( double a[3][3], double b[3][3], double c[3][3] ) {
  eraRxr( a, b, c );
}

/*
*+
*  Name:
*     palDmxv

*  Purpose:
*     Performs the 3-D forward unitary transformation

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDmxv( double dm[3][3], double va[3], double vb[3] );

*  Arguments:
*     dm = double [3][3] (Given)
*        matrix
*     va = double [3] (Given)
*        vector
*     dp = double [3] (Returned)
*        result vector

*  Description:
*     Performs the 3-D forward unitary transformation.

*  Notes:
*     - Uses eraRxp(). See SOFA/ERFA documentation for details.

*-
*/

void palDmxv ( double dm[3][3], double va[3], double vb[3] ) {
  eraRxp( dm, va, vb );
}

/*
*+
*  Name:
*     palDpav

*  Purpose:
*     Position angle of one celestial direction with respect to another

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     pa = palDpav( double v1[3], double v2[3] );

*  Arguments:
*     v1 = double [3] (Given)
*        direction cosines of one point.
*     v2 = double [3] (Given)
*        direction cosines of the other point.

*  Returned Value:
*     The result is the bearing (position angle), in radians, of point
*     V2 with respect to point V1.  It is in the range +/- pi.  The
*     sense is such that if V2 is a small distance east of V1, the
*     bearing is about +pi/2.  Zero is returned if the two points
*     are coincident.

*  Description:
*     Position angle of one celestial direction with respect to another.

*  Notes:
*     - The coordinate frames correspond to RA,Dec, Long,Lat etc.
*     - Uses eraPap(). See SOFA/ERFA documentation for details.

*-
*/

double palDpav ( double v1[3], double v2[3] ) {
  return eraPap( v1, v2 );
}

/*
*+
*  Name:
*     palDr2af

*  Purpose:
*     Convert an angle in radians to degrees, arcminutes, arcseconds

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDr2af( int ndp, double angle, char *sign, int idmsf[4] );

*  Arguments:
*     ndp = int (Given)
*        number of decimal places of arcseconds
*     angle = double (Given)
*        angle in radians
*     sign = char * (Returned)
*        '+' or '-' (single character)
*     idmsf = int [4] (Returned)
*        Degrees, arcminutes, arcseconds, fraction

*  Description:
*     Convert an angle in radians to degrees, arcminutes, arcseconds.

*  Notes:
*     - Uses eraA2af(). See SOFA/ERFA documentation for details.

*-
*/

void palDr2af ( int ndp, double angle, char *sign, int idmsf[4] ) {
  eraA2af( ndp, angle, sign, idmsf );
}

/*
*+
*  Name:
*     palDr2tf

*  Purpose:
*     Convert an angle in radians to hours, minutes, seconds

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDr2tf ( int ndp, double angle, char *sign, int ihmsf[4] );

*  Arguments:
*     ndp = int (Given)
*        number of decimal places of arcseconds
*     angle = double (Given)
*        angle in radians
*     sign = char * (Returned)
*        '+' or '-' (single character)
*     idmsf = int [4] (Returned)
*        Hours, minutes, seconds, fraction

*  Description:
*     Convert an angle in radians to hours, minutes, seconds.

*  Notes:
*     - Uses eraA2tf(). See SOFA/ERFA documentation for details.

*-
*/

void palDr2tf( int ndp, double angle, char *sign, int ihmsf[4] ) {
  eraA2tf( ndp, angle, sign, ihmsf );
}

/*
*+
*  Name:
*     palDranrm

*  Purpose:
*     Normalize angle into range 0-2 pi

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     norm = palDranrm( double angle );

*  Arguments:
*     angle = double (Given)
*        angle in radians

*  Returned Value:
*     Angle expressed in the range 0-2 pi

*  Description:
*     Normalize angle into range 0-2 pi.

*  Notes:
*     - Uses eraAnp(). See SOFA/ERFA documentation for details.

*-
*/

double palDranrm ( double angle ) {
  return eraAnp( angle );
}

/*
*+
*  Name:
*     palDsep

*  Purpose:
*     Angle between two points on a sphere

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     ang = palDsep( double a1, double b1, double a2, double b2 );

*  Arguments:
*     a1 = double (Given)
*        Spherical coordinate of one point (radians)
*     b1 = double (Given)
*        Spherical coordinate of one point (radians)
*     a2 = double (Given)
*        Spherical coordinate of other point (radians)
*     b2 = double (Given)
*        Spherical coordinate of other point (radians)

*  Returned Value:
*     Angle, in radians, between the two points. Always positive.

*  Description:
*     Angle between two points on a sphere.

*  Notes:
*     - The spherical coordinates are [RA,Dec], [Long,Lat] etc, in radians.
*     - Uses eraSeps(). See SOFA/ERFA documentation for details.

*-
*/

double palDsep ( double a1, double b1, double a2, double b2 ) {
  return eraSeps( a1, b1, a2, b2 );
}

/*
*+
*  Name:
*     palDsepv

*  Purpose:
*     Angle between two vectors

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     ang = palDsepv( double v1[3], double v2[3] );

*  Arguments:
*     v1 = double [3] (Given)
*        First vector
*     v2 = double [3] (Given)
*        Second vector

*  Returned Value:
*     Angle, in radians, between the two points. Always positive.

*  Description:
*     Angle between two vectors.

*  Notes:
*     - Uses eraSepp(). See SOFA/ERFA documentation for details.

*-
*/

double palDsepv ( double v1[3], double v2[3] ) {
  return eraSepp( v1, v2 );
}

/*
*+
*  Name:
*     palDtf2d

*  Purpose:
*     Convert hours, minutes, seconds to days

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDtf2d( int ihour, int imin, double sec, double *days, int *j );

*  Arguments:
*     ihour = int (Given)
*        Hours
*     imin = int (Given)
*        Minutes
*     sec = double (Given)
*        Seconds
*     days = double * (Returned)
*        Interval in days
*     j = int * (Returned)
*        status: 0 = ok, 1 = ihour outside range 0-23,
*        2 = imin outside range 0-59, 3 = sec outside range 0-59.999...

*  Description:
*     Convert hours, minutes, seconds to days.

*  Notes:
*     - Uses eraTf2d(). See SOFA/ERFA documentation for details.

*-
*/

/* Assumes that the sign is always positive and is dealt with externally */
void palDtf2d ( int ihour, int imin, double sec, double *days, int *j ) {
  *j = eraTf2d( ' ', ihour, imin, sec, days );
}

/*
*+
*  Name:
*     palDtf2r

*  Purpose:
*     Convert hours, minutes, seconds to radians

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDtf2r( int ihour, int imin, double sec, double *rad, int *j );

*  Arguments:
*     ihour = int (Given)
*        Hours
*     imin = int (Given)
*        Minutes
*     sec = double (Given)
*        Seconds
*     days = double * (Returned)
*        Angle in radians
*     j = int * (Returned)
*        status: 0 = ok, 1 = ihour outside range 0-23,
*        2 = imin outside range 0-59, 3 = sec outside range 0-59.999...

*  Description:
*     Convert hours, minutes, seconds to radians.

*  Notes:
*     - Uses eraTf2a(). See SOFA/ERFA documentation for details.

*-
*/

/* Assumes that the sign is dealt with outside this routine */
void palDtf2r ( int ihour, int imin, double sec, double *rad, int *j ) {
  *j = eraTf2a( ' ', ihour, imin, sec, rad );
}

/*
*+
*  Name:
*     palDvdv

*  Purpose:
*     Scalar product of two 3-vectors

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     prod = palDvdv ( double va[3], double vb[3] );

*  Arguments:
*     va = double [3] (Given)
*        First vector
*     vb = double [3] (Given)
*        Second vector

*  Returned Value:
*     Scalar product va.vb

*  Description:
*     Scalar product of two 3-vectors.

*  Notes:
*     - Uses eraPdp(). See SOFA/ERFA documentation for details.

*-
*/

double palDvdv ( double va[3], double vb[3] ) {
  return eraPdp( va, vb );
}

/*
*+
*  Name:
*     palDvn

*  Purpose:
*     Normalizes a 3-vector also giving the modulus

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDvn( double v[3], double uv[3], double *vm );

*  Arguments:
*     v = double [3] (Given)
*        vector
*     uv = double [3] (Returned)
*        unit vector in direction of "v"
*     vm = double * (Returned)
*        modulus of "v"

*  Description:
*     Normalizes a 3-vector also giving the modulus.

*  Notes:
*     - Uses eraPn(). See SOFA/ERFA documentation for details.

*-
*/

/* Note that the arguments are flipped */
void palDvn ( double v[3], double uv[3], double *vm ) {
  eraPn( v, vm, uv );
}

/*
*+
*  Name:
*     palDvxv

*  Purpose:
*     Vector product of two 3-vectors

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palDvxv( double va[3], double vb[3], double vc[3] );

*  Arguments:
*     va = double [3] (Given)
*        First vector
*     vb = double [3] (Given)
*        Second vector
*     vc = double [3] (Returned)
*        Result vector

*  Description:
*     Vector product of two 3-vectors.

*  Notes:
*     - Uses eraPxp(). See SOFA/ERFA documentation for details.

*-
*/

void palDvxv ( double va[3], double vb[3], double vc[3] ) {
  eraPxp( va, vb, vc );
}

/*
*+
*  Name:
*     palEpb

*  Purpose:
*     Conversion of modified Julian Data to Besselian Epoch

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     epb = palEpb ( double date );

*  Arguments:
*     date = double (Given)
*        Modified Julian Date (JD - 2400000.5)

*  Returned Value:
*      Besselian epoch.

*  Description:
*     Conversion of modified Julian Data to Besselian Epoch.

*  Notes:
*     - Uses eraEpb(). See SOFA/ERFA documentation for details.

*-
*/

/* Requires additional SLA MJD reference date */
double palEpb ( double date ) {
  return eraEpb( PAL__MJD0, date );
}

/*
*+
*  Name:
*     palEpb2d

*  Purpose:
*     Conversion of Besselian Epoch to Modified Julian Date

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     mjd = palEpb2d ( double epb );

*  Arguments:
*     epb = double (Given)
*        Besselian Epoch

*  Returned Value:
*     Modified Julian Date (JD - 2400000.5)

*  Description:
*     Conversion of Besselian Epoch to Modified Julian Date.

*  Notes:
*     - Uses eraEpb2jd(). See SOFA/ERFA documentation for details.

*-
*/


double palEpb2d ( double epb ) {
  double djm0, djm;
  eraEpb2jd( epb, &djm0, &djm );
  return djm;
}

/*
*+
*  Name:
*     palEpj

*  Purpose:
*     Conversion of Modified Julian Date to Julian Epoch

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     epj = palEpj ( double date );

*  Arguments:
*     date = double (Given)
*        Modified Julian Date (JD - 2400000.5)

*  Returned Value:
*     The Julian Epoch.

*  Description:
*     Conversion of Modified Julian Date to Julian Epoch.

*  Notes:
*     - Uses eraEpj(). See SOFA/ERFA documentation for details.

*-
*/

/* Requires additional SLA MJD reference date */
double palEpj ( double date ) {
  return eraEpj( PAL__MJD0, date );
}

/*
*+
*  Name:
*     palEpj2d

*  Purpose:
*     Conversion of Julian Epoch to Modified Julian Date

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     mjd = palEpj2d ( double epj );

*  Arguments:
*     epj = double (Given)
*        Julian Epoch.

*  Returned Value:
*     Modified Julian Date (JD - 2400000.5)

*  Description:
*     Conversion of Julian Epoch to Modified Julian Date.

*  Notes:
*     - Uses eraEpj2d(). See SOFA/ERFA documentation for details.

*-
*/
double palEpj2d ( double epj ) {
  double djm0, djm;
  eraEpj2jd( epj, &djm0, &djm );
  return djm;
}

/*
*+
*  Name:
*     palEqeqx

*  Purpose:
*     Equation of the equinoxes (IAU 2000/2006)

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palEqeqx( double date );

*  Arguments:
*     date = double (Given)
*        TT as Modified Julian Date (JD-400000.5)

*  Description:
*     Equation of the equinoxes (IAU 2000/2006).

*  Notes:
*     - Uses eraEe06a(). See SOFA/ERFA documentation for details.

*-
*/

/* Requires additional SLA MJD reference date */
double palEqeqx ( double date ) {
  return eraEe06a( PAL__MJD0, date );
}

/*
*+
*  Name:
*     palFk5hz

*  Purpose:
*     Transform an FK5 (J2000) star position into the frame of the
*     Hipparcos catalogue.

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palFk5hz ( double r5, double d5, double epoch,
*                double *rh, double *dh );

*  Arguments:
*     r5 = double (Given)
*        FK5 RA (radians), equinox J2000, epoch "epoch"
*     d5 = double (Given)
*        FK5 dec (radians), equinox J2000, epoch "epoch"
*     epoch = double (Given)
*        Julian epoch
*     rh = double * (Returned)
*        RA (radians)
*     dh = double * (Returned)
*        Dec (radians)

*  Description:
*     Transform an FK5 (J2000) star position into the frame of the
*     Hipparcos catalogue.

*  Notes:
*     - Assumes zero Hipparcos proper motion.
*     - Uses eraEpj2jd() and eraFk5hz.
*       See SOFA/ERFA documentation for details.

*-
*/

void palFk5hz ( double r5, double d5, double epoch,
                double *rh, double *dh ) {
  /* Need to convert epoch to Julian date first */
  double date1, date2;
  eraEpj2jd( epoch, &date1, &date2 );
  eraFk5hz( r5, d5, date1, date2, rh, dh );
}

/*
*+
*  Name:
*     palGmst

*  Purpose:
*     Greenwich mean sidereal time (consistent with IAU 2006 precession).

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     mst = palGmst ( double ut1 );

*  Arguments:
*     ut1 = double (Given)
*        Universal time (UT1) expressed as modified Julian Date (JD-2400000.5)

*  Returned Value:
*     Greenwich mean sidereal time

*  Description:
*     Greenwich mean sidereal time (consistent with IAU 2006 precession).

*  Notes:
*     - Uses eraGmst06(). See SOFA/ERFA documentation for details.

*-
*/

/* Note that SOFA/ERFA has more accurate time arguments
   and we use the 2006 precession model */
double palGmst ( double ut1 ) {
  return eraGmst06( PAL__MJD0, ut1, PAL__MJD0, ut1 );
}

/*
*+
*  Name:
*     palGmsta

*  Purpose:
*     Greenwich mean sidereal time (consistent with IAU 2006 precession).

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     mst = palGmsta ( double date, double ut1 );

*  Arguments:
*     date = double (Given)
*        UT1 date (MJD: integer part of JD-2400000.5)
*     ut1 = double (Given)
*        UT1 time (fraction of a day)

*  Returned Value:
*     Greenwich mean sidereal time (in range 0 to 2 pi)

*  Description:
*     Greenwich mean sidereal time (consistent with IAU 2006 precession).

*  Notes:
*     - For best accuracy use eraGmst06() directly.
*     - Uses eraGmst06(). See SOFA/ERFA documentation for details.

*-
*/

/* Slightly better but still not as accurate as SOFA/ERFA */

double palGmsta( double date, double ut ) {
  date += PAL__MJD0;
  return eraGmst06( date, ut, date, ut );
}

/*
*+
*  Name:
*     palHfk5z

*  Purpose:
*     Hipparcos star position to FK5 J2000

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palHfk5z( double rh, double dh, double epoch,
*               double *r5, double *d5, double *dr5, double *dd5 );

*  Arguments:
*     rh = double (Given)
*        Hipparcos RA (radians)
*     dh = double (Given)
*        Hipparcos Dec (radians)
*     epoch = double (Given)
*        Julian epoch (TDB)
*     r5 = double * (Returned)
*        RA (radians, FK5, equinox J2000, epoch "epoch")
*     d5 = double * (Returned)
*        Dec (radians, FK5, equinox J2000, epoch "epoch")

*  Description:
*     Transform a Hipparcos star position into FK5 J2000, assuming
*     zero Hipparcos proper motion.

*  Notes:
*     - Uses eraEpj2jd and eraHfk5z(). See SOFA/ERFA documentation for details.

*-
*/

void palHfk5z ( double rh, double dh, double epoch,
                double *r5, double *d5, double *dr5, double *dd5 ) {
  /* Need to convert epoch to Julian date first */
  double date1, date2;
  eraEpj2jd( epoch, &date1, &date2 );
  eraHfk5z( rh, dh, date1, date2, r5, d5, dr5, dd5 );
}

/*
*+
*  Name:
*     palRefcoq

*  Purpose:
*     Determine the constants A and B in the atmospheric refraction model

*  Language:
*     Starlink ANSI C

*  Type of Module:
*     Library routine

*  Invocation:
*     palRefcoq( double tdk, double pmb, double rh, double wl,
*                double *refa, double *refb );

*  Arguments:
*     tdk = double (Given)
*        Ambient temperature at the observer (K)
*     pmb = double (Given)
*        Pressure at the observer (millibar)
*     rh =  double (Given)
*        Relative humidity at the observer (range 0-1)
*     wl =  double (Given)
*        Effective wavelength of the source (micrometre).
*        Radio refraction is chosen by specifying wl > 100 micrometres.
*     refa = double * (Returned)
*        tan Z coefficient (radian)
*     refb = double * (Returned)
*        tan**3 Z coefficient (radian)

*  Description:
*     Determine the constants A and B in the atmospheric refraction
*     model dZ = A tan Z + B tan**3 Z.  This is a fast alternative
*     to the palRefco routine.
*
*     Z is the "observed" zenith distance (i.e. affected by refraction)
*     and dZ is what to add to Z to give the "topocentric" (i.e. in vacuo)
*     zenith distance.

*  Notes:
*     - Uses eraRefco(). See SOFA/ERFA documentation for details.
*     - Note that the SOFA/ERFA routine uses different order of
*       of arguments and uses deg C rather than K.

*-
*/

void palRefcoq ( double tdk, double pmb, double rh, double wl,
                 double *refa, double *refb ) {
  /* Note that SLA (and therefore PAL) uses units of kelvin
     but SOFA/ERFA uses deg C */
  eraRefco( pmb, tdk - 273.15, rh, wl, refa, refb );
}
