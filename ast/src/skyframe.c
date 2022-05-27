/*
*class++
*  Name:
*     SkyFrame

*  Purpose:
*     Celestial coordinate system description.

*  Constructor Function:
c     astSkyFrame
f     AST_SKYFRAME

*  Description:
*     A SkyFrame is a specialised form of Frame which describes
*     celestial longitude/latitude coordinate systems. The particular
*     celestial coordinate system to be represented is specified by
*     setting the SkyFrame's System attribute (currently, the default
*     is ICRS) qualified, as necessary, by a mean Equinox value and/or
*     an Epoch.
*
*     For each of the supported celestial coordinate systems, a SkyFrame
*     can apply an optional shift of origin to create a coordinate system
*     representing offsets within the celestial coordinate system from some
*     specified reference point. This offset coordinate system can also be
*     rotated to define new longitude and latitude axes. See attributes
*     SkyRef, SkyRefIs, SkyRefP and AlignOffset.
*
*     All the coordinate values used by a SkyFrame are in
*     radians. These may be formatted in more conventional ways for
c     display by using astFormat.
f     display by using AST_FORMAT.
*     For a SkyFrame, the Unit attribute describes the formatted value of
*     a SkyFrame axis, and may for instance be "h:m:s", indicating that a
*     formatted axis value contains colon-separated fields for hours, minutes
*     and seconds. On the other hand, the InternalUnit attribute for a
*     SkyFrame is always set to "rad" (i.e. radians), indicating that the
*     unformatted (i.e. floating point) axis values used by application code
*     are always in units of radians

*  Inheritance:
*     The SkyFrame class inherits from the Frame class.

*  Attributes:
*     In addition to those attributes common to all Frames, every
*     SkyFrame also has the following attributes:
*
*     - AlignOffset: Align SkyFrames using the offset coordinate system?
*     - AsTime(axis): Format celestial coordinates as times?
*     - Equinox: Epoch of the mean equinox
*     - IsLatAxis: Is the specified axis the latitude axis?
*     - IsLonAxis: Is the specified axis the longitude axis?
*     - LatAxis: Index of the latitude axis
*     - LonAxis: Index of the longitude axis
*     - NegLon: Display longitude values in the range [-pi,pi]?
*     - Projection: Sky projection description.
*     - SkyRef: Position defining location of the offset coordinate system
*     - SkyRefIs: Selects the nature of the offset coordinate system
*     - SkyRefP: Position defining orientation of the offset coordinate system
*     - SkyTol: Smallest significant shift in sky coordinates

*  Functions:
*     In addition to those
c     functions
f     routines
*     applicable to all Frames, the following
c     functions
f     routines
*     may also be applied to all SkyFrames:
*
c     - astSkyOffsetMap: Obtain a Mapping from absolute to offset coordinates
f     - AST_SKYOFFSETMAP: Obtain a Mapping from absolute to offset coordinates

*  Copyright:
*     Copyright (C) 1997-2006 Council for the Central Laboratory of the
*     Research Councils
*     Copyright (C) 2010 Science & Technology Facilities Council.
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
*     RFWS: R.F. Warren-Smith (Starlink)
*     DSB: David S. Berry (Starlink)
*     BEC: Brad Cavanagh (JAC, Hawaii)

*  History:
*     4-MAR-1996 (RFWS):
*        Original version.
*     17-MAY-1996 (RFWS):
*        Tidied up, etc.
*     31-JUL-1996 (RFWS):
*        Added support for attributes and a public interface.
*     11-SEP-1996 (RFWS):
*        Added Gap (written by DSB).
*     24-SEP-1996 (RFWS):
*        Added I/O facilities.
*     27-FEB-1997 (RFWS):
*        Improved the public prologues.
*     27-MAY-1997 (RFWS):
*        Modified to use a new public interface to the SlaMap class
*        and to use the astSimplify method to remove redundant
*        conversions.
*     16-JUN-1997 (RFWS):
*        Fixed bug in axis associations returned by astMatch if axes
*        were swapped.
*     16-JUL-1997 (RFWS):
*        Added Projection attribute.
*     14-NOV-1997 (RFWS):
*        Corrected the omission of axis permutations from astNorm.
*     21-JAN-1998 (RFWS):
*        Ensure that Title and Domain values appropriate to a SkyFrame
*        are preserved if a Frame result is generated by SubFrame.
*     26-FEB-1998 (RFWS):
*        Over-ride the astUnformat method.
*     3-APR-2001 (DSB):
*        Added "Unknown" option for the System attribute. Added read-only
*        attributes LatAxis and LonAxis.
*     21-JUN-2001 (DSB):
*        Added astAngle and astOffset2.
*     4-SEP-2001 (DSB):
*        Added NegLon attribute, and astResolve method.
*     9-SEP-2001 (DSB):
*        Added astBear method.
*     21-SEP-2001 (DSB):
*        Removed astBear method.
*     10-OCT-2002 (DSB):
*        Moved definitions of macros for SkyFrame system values from
*        this file into skyframe.h.
*     24-OCT-2002 (DSB):
*        Modified MakeSkyMapping so that any two SkyFrames with system=unknown
*        are assumed to be related by a UnitMap. previously, they were
*        considered to be unrelated, resulting in no ability to convert from
*        one to the other. This could result for instance in astConvert
*        being unable to find a maping from a SkyFrame to itself.
*     15-NOV-2002 (DSB):
*        Moved System and Epoch attributes to the Frame class.
*     8-JAN-2003 (DSB):
*        Changed private InitVtab method to protected astInitSkyFrameVtab
*        method.
*     11-JUN-2003 (DSB):
*        Added ICRS option for System attribute, and made it the default
*        in place of FK5.
*     27-SEP-2003 (DSB):
*        Added HELIOECLIPTIC option for System attribute.
*     19-APR-2004 (DSB):
*        Added SkyRef, SkyRefIs, SkyRefP and AlignOffset attributes.
*     8-SEP-2004 (DSB):
*        Added astResolvePoints method.
*     2-DEC-2004 (DSB):
*        Added System "J2000"
*     27-JAN-2005 (DSB):
*        Fix memory leaks in astLoadSkyFrame_ and Match.
*     7-APR-2005 (DSB):
*        Allow SkyRefIs to be set to "Ignored".
*     12-MAY-2005 (DSB):
*        Override astNormBox method.
*     15-AUG-2005 (DSB):
*        Added AZEL system.
*     13-SEP-2005 (DSB):
*        Override astClearSystem so that SkyRef/SkyRefPcan be converted
*        from the original System to the default System.
*     19-SEP-2005 (DSB):
*        Changed default for SkyRefIs from ORIGIN to IGNORED.
*     14-FEB-2006 (DSB):
*        Override astGetObjSize.
*     22-FEB-2006 (DSB):
*        Store the Local Apparent Sidereal Time in the SkyFrame structure
*        in order to avoid expensive re-computations.
*     22-AUG-2006 (DSB):
*        Ensure the cached Local Apparent Siderial Time is initialised
*        when initialising or loading a SkyFrame.
*     22-SEP-2006 (DSB):
*        Report an error in SetSystem if it is not possible to convert
*        from old to new systems.
*     3-OCT-2006 (DSB):
*        Added Equation of Equinoxes to the SkyFrame structure.
*     6-OCT-2006 (DSB):
*        - Guard against annulling null pointers in subFrame.
*        - Add Dut1 attribute
*        - Use linear approximation for LAST over short periods (less
*          than 0.001 of a day)
*        - Remove Equation of Equinoxes from the SkyFrame structure.
*     10-OCT-2006 (DSB):
*        Use "AlOff" instead of "AlignOffset" as the external channel name
*        for the AlignOffset attribute. The longer form exceeded the
*        limit that can be used by the Channel class.
*     14-OCT-2006 (DSB):
*        - Move Dut1 attribute to the Frame class.
*        - Use the TimeFrame class to do the TDB->LAST conversions.
*     17-JAN-2007 (DSB):
*        - Use a UnitMap to align offset coordinate systems in two
*        SkyFrames, regardless of other attribute values.
*        - Only align in offset coordinates if both target and template
*        have a non-zero value for AlignOffset.
*     23-JAN-2007 (DSB):
*        Modified so that a SkyFrame can be used as a template to find a
*        SkyFrame contained within a CmpFrame. This involves changes in
*        Match and the removal of the local versions of SetMaxAxes and
*        SetMinAxes.
*     4-JUL-2007 (DSB):
*        Modified GetLast to use the correct solar to sidereal conversion
*        factor. As a consequence the largest acceptable epoch gap before
*        the LAST needs to be recalculated has been increased.
*     11-JUL-2007 (DSB):
*        Override astSetEpoch and astClearEpoch by implementations which
*        update the LAST value stored in the SkyFrame.
*     7-AUG-2007 (DSB):
*        - Set a value for the CentreZero attribute when extracting a
*        SkyAxis from a SkyFrame in function SubFrame.
*        - In SubFrame, clear extended attributes such as System after
*        all axis attributes have been "fixated.
*     30-AUG-2007 (DSB):
*        Override astSetDut1 and astClearDut1 by implementations which
*        update the LAST value stored in the SkyFrame.
*     31-AUG-2007 (DSB):
*        - Cache the magnitude of the diurnal aberration vector in the
*        SkyFrame structure for use when correcting for diurnal aberration.
*        - Modify the azel conversions to include correction for diurnal
*        aberration.
*        - Override astClearObsLat and astSetObsLat by implementations which
*        reset the magnitude of the diurnal aberration vector.
*     3-SEP-2007 (DSB):
*        In SubFrame, since AlignSystem is extended by the SkyFrame class
*        it needs to be cleared before invoking the parent SubFrame
*        method in cases where the result Frame is not a SkyFrame.
*     2-OCT-2007 (DSB):
*        In Overlay, clear AlignSystem as well as System before calling
*        the parent overlay method.
*     10-OCT-2007 (DSB):
*        In MakeSkyMapping, correct the usage of variables "system" and
*        "align_sys" when aligning in AZEL.
*     18-OCT-2007 (DSB):
*        Compare target and template AlignSystem values in Match, rather
*        than comparing target and result AlignSystem values in MakeSkyMapping
*        (since result is basically a copy of target).
*     27-NOV-2007 (DSB):
*        - Modify SetSystem to ensure that SkyRef and SkyRefP position are
*        always transformed as absolute values, rather than as offset
*        values.
*        - Modify SubMatch so that a value of zero is assumed for
*        AlignOffset when restoring thre integrity of a FrameSet.
*     15-DEC-2008 (DSB):
*        Improve calculation of approximate Local Apparent Sidereal time
*        by finding and using the ratio of solar to sidereal time
*        independently for each approximation period.
*     14-JAN-2009 (DSB):
*        Override the astIntersect method.
*     21-JAN-2009 (DSB):
*        Fix mis-use of results buffers for GetFormat and GetAttrib.
*     16-JUN-2009 (DSB):
*        All sky coordinate systems currently supported by SkyFrame are
*        left handed. So fix GetDirection method to return zero for all
*        longitude axes and 1 for all latitude axes.
*     18-JUN-2009 (DSB):
*        Incorporate the new ObsAlt attribute.
*     23-SEP-2009 (DSB):
*        Allow some rounding error when checking for changes in SetObsLon
*        and SetDut1. This reduces the number of times the expensive
*        calculation of LAST is performed.
*     24-SEP-2009 (DSB);
*        Create a static cache of LAST values stored in the class virtual
*        function table. These are used in preference to calculating a new
*        value from scratch.
*     25-SEP-2009 (DSB);
*        Do not calculate LAST until it is needed.
*     12-OCT-2009 (DSB);
*        - Handle 2.PI->0 discontinuity in cached LAST values.
*     12-OCT-2009 (BEC);
*        - Fix bug in caching LAST value.
*     31-OCT-2009 (DSB);
*        Correct SetCachedLAST to handle cases where the epoch to be
*        stored is smaller than any epoch already in the table.
*     24-NOV-2009 (DSB):
*        - In CalcLast, only use end values form the table of stored
*        LAST values if the corresponding epochs are within 0.001 of
*        a second of the required epoch (this tolerance used to be
*        0.1 seconds).
*        - Do not clear the cached LAST value in SetEpoch and ClearEpoch.
*     8-MAR-2010 (DSB):
*        Add astSkyOffsetMap method.
*     7-APR-2010 (DSB):
*        Add IsLatAxis and IsLonAxis attributes.
*     11-MAY-2010 (DSB):
*        In SetSystem, clear SkyRefP as well as SkyRef.
*     22-MAR-2011 (DSB):
*        Override astFrameGrid method.
*     29-APR-2011 (DSB):
*        Prevent astFindFrame from matching a subclass template against a
*        superclass target.
*     23-MAY-2011 (DSB):
*        Truncate returned PointSet in function FrameGrid to exclude unused points.
*     24-MAY-2011 (DSB):
*        When clearing or setting the System attribute, clear SkyRef rather
*        than reporting an error if the Mapping from the old System to the
*        new System is unknown.
*     30-NOV-2011 (DSB):
*        When aligning two SkyFrames in the system specified by AlignSystem,
*        do not assume inappropriate default equinox values for systems
*        that are not referred to the equinox specified by the Equinox attribute.
*     26-APR-2012 (DSB):
*        - Correct Dump function so that any axis permutation is taken into
*        account when dumping SkyFrame attributes that have a separate value
*        for each axis (e.g. SkyRef and SkyRefP).
*        - Take axis permutation into account when setting a new value
*        for attributes that have a separate value for each axis (e.g.
*        SkyRef and SkyRefP).
*        - Remove the code that overrides ClearEpoch and SetEpoch (these
*        overrides have not been needed since the changes made on
*        24/11/2009).
*     27-APR-2012 (DSB):
*        - Correct astLoadSkyFrame function so that any axis permutation is
*        taken into account when loading SkyFrame attributes that have a
*        separate value for each axis.
*     25-JUL-2013 (DSB):
*        Use a single table of cached LAST values for all threads, rather
*        than a separate table for each thread. The problem with a table per
*        thread  is that if you have N threads, each table contains only
*        one N'th of the total number of cached values, resulting in
*        poorer accuracy, and small variations in interpolated LAST value
*        depending on the way the cached values are distributed amongst the
*        N threads.
*     6-AST-2013 (DSB):
*        Fix the use of the read-write lock that is used to serialise
*        access to the table of cached LAST values. This bug could
*        cause occasional problems where an AST pointer would became
*        invalid for no apparent reason.
*     21-FEB-2014 (DSB):
*        Rounding errors in the SkyLineDef constructor could result in the line
*        between coincident points being given a non-zero length.
*     6-JUL-2015 (DSB):
*        Added SkyTol attribute.
*     3-FEB-2017 (GSB):
*        Override astSetDtai and astClearDtai.
*     6-APR-2017 (GSB):
*        Added dtai to AstSkyLastTable.
*     10-APR-2017 (GSB):
*        Added macro to test floating point equality and used it for Dtai.
*     30-JAN-2020 (DSB):
*        Reduce the tolerance in LineIncludes from 1E-8 to 1E-10.
*     11-MAR-2020 (DSB):
*         In Overlay, only clear the results Units, Label, etc if the result
*         and template Systems differ AND the template System has been set
*         explicitly.
*     9-JUN-2021 (DSB):
*         astLineCrossing now returns the distance from the line start to
*         the crossing. This distance takes account of which half of the
*         great circle contains the crossing.
*class--
*/

/* Module Macros. */
/* ============== */
/* Set the name of the class we are implementing. This indicates to
   the header files that define class interfaces that they should make
   "protected" symbols available. */
#define astCLASS SkyFrame

/* Define the first and last acceptable System values. */
#define FIRST_SYSTEM AST__FK4
#define LAST_SYSTEM AST__AZEL

/* Speed of light (AU per day) (from SLA_AOPPA) */
#define C 173.14463331

/* Ratio between solar and sidereal time (from SLA_AOPPA) */
#define SOLSID 1.00273790935

/* Define values for the different values of the SkyRefIs attribute. */
#define POLE_STRING "Pole"
#define ORIGIN_STRING "Origin"
#define IGNORED_STRING "Ignored"

/* Define other numerical constants for use in this module. */
#define GETATTRIB_BUFF_LEN 200
#define GETFORMAT_BUFF_LEN 50
#define GETLABEL_BUFF_LEN 40
#define GETSYMBOL_BUFF_LEN 20
#define GETTITLE_BUFF_LEN 200

/* A macro which returns a flag indicating if the supplied system is
   references to the equinox specified by the Equinox attribute. */
#define EQREF(system) \
((system==AST__FK4||system==AST__FK4_NO_E||system==AST__FK5||system==AST__ECLIPTIC)?1:0)

/* Check for floating point equality (within the given tolerance), taking
   bad values into account. */
#define EQUAL(aa,bb,tol) (((aa)==AST__BAD)?(((bb)==AST__BAD)?1:0):(((bb)==AST__BAD)?0:(fabs((aa)-(bb))<=(tol))))

/*
*
*  Name:
*     MAKE_CLEAR

*  Purpose:
*     Implement a method to clear a single value in a multi-valued attribute.

*  Type:
*     Private macro.

*  Synopsis:
*     #include "skyframe.h"
*     MAKE_CLEAR(attr,component,assign,nval)

*  Class Membership:
*     Defined by the SkyFrame class.

*  Description:
*     This macro expands to an implementation of a private member function of
*     the form:
*
*        static void Clear<Attribute>( AstSkyFrame *this, int axis )
*
*     and an external interface function of the form:
*
*        void astClear<Attribute>_( AstSkyFrame *this, int axis )
*
*     which implement a method for clearing a single value in a specified
*     multi-valued attribute for an axis of a SkyFrame.

*  Parameters:
*     attr
*        The name of the attribute to be cleared, as it appears in the function
*        name (e.g. Label in "astClearLabelAt").
*     component
*        The name of the class structure component that holds the attribute
*        value.
*     assign
*        An expression that evaluates to the value to assign to the component
*        to clear its value.
*     nval
*        Specifies the number of values in the multi-valued attribute. The
*        "axis" values supplied to the created function should be in the
*        range zero to (nval - 1).

*  Notes:
*     -  To avoid problems with some compilers, you should not leave any white
*     space around the macro arguments.
*
*/

/* Define the macro. */
#define MAKE_CLEAR(attr,component,assign,nval) \
\
/* Private member function. */ \
/* ------------------------ */ \
static void Clear##attr( AstSkyFrame *this, int axis, int *status ) { \
\
   int axis_p; \
\
/* Check the global error status. */ \
   if ( !astOK ) return; \
\
/* Validate and permute the axis index. */ \
   axis_p = astValidateAxis( this, axis, 1, "astClear" #attr ); \
\
/* Assign the "clear" value. */ \
   if( astOK ) { \
      this->component[ axis_p ] = (assign); \
   } \
} \
\
/* External interface. */ \
/* ------------------- */ \
void astClear##attr##_( AstSkyFrame *this, int axis, int *status ) { \
\
/* Check the global error status. */ \
   if ( !astOK ) return; \
\
/* Invoke the required method via the virtual function table. */ \
   (**astMEMBER(this,SkyFrame,Clear##attr))( this, axis, status ); \
}


/*
*
*  Name:
*     MAKE_GET

*  Purpose:
*     Implement a method to get a single value in a multi-valued attribute.

*  Type:
*     Private macro.

*  Synopsis:
*     #include "skyframe.h"
*     MAKE_GET(attr,type,bad_value,assign,nval)

*  Class Membership:
*     Defined by the SkyFrame class.

*  Description:
*     This macro expands to an implementation of a private member function of
*     the form:
*
*        static <Type> Get<Attribute>( AstSkyFrame *this, int axis )
*
*     and an external interface function of the form:
*
*        <Type> astGet<Attribute>_( AstSkyFrame *this, int axis )
*
*     which implement a method for getting a single value from a specified
*     multi-valued attribute for an axis of a SkyFrame.

*  Parameters:
*     attr
*        The name of the attribute whose value is to be obtained, as it
*        appears in the function name (e.g. Label in "astGetLabel").
*     type
*        The C type of the attribute.
*     bad_value
*        A constant value to return if the global error status is set, or if
*        the function fails.
*     assign
*        An expression that evaluates to the value to be returned. This can
*        use the string "axis" to represent the zero-based value index.
*     nval
*        Specifies the number of values in the multi-valued attribute. The
*        "axis" values supplied to the created function should be in the
*        range zero to (nval - 1).

*  Notes:
*     -  To avoid problems with some compilers, you should not leave any white
*     space around the macro arguments.
*
*/

/* Define the macro. */
#define MAKE_GET(attr,type,bad_value,assign,nval) \
\
/* Private member function. */ \
/* ------------------------ */ \
static type Get##attr( AstSkyFrame *this, int axis, int *status ) { \
   int axis_p;                   /* Permuted axis index */ \
   type result;                  /* Result to be returned */ \
\
/* Initialise */\
   result = (bad_value); \
\
/* Check the global error status. */ \
   if ( !astOK ) return result; \
\
/* Validate and permute the axis index. */ \
   axis_p = astValidateAxis( this, axis, 1, "astGet" #attr ); \
\
/* Assign the result value. */ \
   if( astOK ) { \
      result = (assign); \
   } \
\
/* Check for errors and clear the result if necessary. */ \
   if ( !astOK ) result = (bad_value); \
\
/* Return the result. */ \
   return result; \
} \
/* External interface. */ \
/* ------------------- */  \
type astGet##attr##_( AstSkyFrame *this, int axis, int *status ) { \
\
/* Check the global error status. */ \
   if ( !astOK ) return (bad_value); \
\
/* Invoke the required method via the virtual function table. */ \
   return (**astMEMBER(this,SkyFrame,Get##attr))( this, axis, status ); \
}

/*
*
*  Name:
*     MAKE_SET

*  Purpose:
*     Implement a method to set a single value in a multi-valued attribute
*     for a SkyFrame.

*  Type:
*     Private macro.

*  Synopsis:
*     #include "skyframe.h"
*     MAKE_SET(attr,type,component,assign,nval)

*  Class Membership:
*     Defined by the SkyFrame class.

*  Description:
*     This macro expands to an implementation of a private member function of
*     the form:
*
*        static void Set<Attribute>( AstSkyFrame *this, int axis, <Type> value )
*
*     and an external interface function of the form:
*
*        void astSet<Attribute>_( AstSkyFrame *this, int axis, <Type> value )
*
*     which implement a method for setting a single value in a specified
*     multi-valued attribute for a SkyFrame.

*  Parameters:
*      attr
*         The name of the attribute to be set, as it appears in the function
*         name (e.g. Label in "astSetLabelAt").
*      type
*         The C type of the attribute.
*      component
*         The name of the class structure component that holds the attribute
*         value.
*      assign
*         An expression that evaluates to the value to be assigned to the
*         component.
*      nval
*         Specifies the number of values in the multi-valued attribute. The
*         "axis" values supplied to the created function should be in the
*         range zero to (nval - 1).

*  Notes:
*     -  To avoid problems with some compilers, you should not leave any white
*     space around the macro arguments.
*-
*/

/* Define the macro. */
#define MAKE_SET(attr,type,component,assign,nval) \
\
/* Private member function. */ \
/* ------------------------ */ \
static void Set##attr( AstSkyFrame *this, int axis, type value, int *status ) { \
\
   int axis_p; \
\
/* Check the global error status. */ \
   if ( !astOK ) return; \
\
/* Validate and permute the axis index. */ \
   axis_p = astValidateAxis( this, axis, 1, "astSet" #attr ); \
\
/* Store the new value in the structure component. */ \
   if( astOK ) { \
      this->component[ axis_p ] = (assign); \
   } \
} \
\
/* External interface. */ \
/* ------------------- */ \
void astSet##attr##_( AstSkyFrame *this, int axis, type value, int *status ) { \
\
/* Check the global error status. */ \
   if ( !astOK ) return; \
\
/* Invoke the required method via the virtual function table. */ \
   (**astMEMBER(this,SkyFrame,Set##attr))( this, axis, value, status ); \
}

/*
*
*  Name:
*     MAKE_TEST

*  Purpose:
*     Implement a method to test if a single value has been set in a
*     multi-valued attribute for a class.

*  Type:
*     Private macro.

*  Synopsis:
*     #include "skyframe.h"
*     MAKE_TEST(attr,assign,nval)

*  Class Membership:
*     Defined by the SkyFrame class.

*  Description:
*     This macro expands to an implementation of a private member function of
*     the form:
*
*        static int Test<Attribute>( AstSkyFrame *this, int axis )
*
*     and an external interface function of the form:
*
*        int astTest<Attribute>_( AstSkyFrame *this, int axis )
*
*     which implement a method for testing if a single value in a specified
*     multi-valued attribute has been set for a class.

*  Parameters:
*      attr
*         The name of the attribute to be tested, as it appears in the function
*         name (e.g. Label in "astTestLabelAt").
*      assign
*         An expression that evaluates to 0 or 1, to be used as the returned
*         value. This can use the string "axis" to represent the zero-based
*         index of the value within the attribute.
*      nval
*         Specifies the number of values in the multi-valued attribute. The
*         "axis" values supplied to the created function should be in the
*         range zero to (nval - 1).

*  Notes:
*     -  To avoid problems with some compilers, you should not leave any white
*     space around the macro arguments.
*-
*/

/* Define the macro. */
#define MAKE_TEST(attr,assign,nval) \
\
/* Private member function. */ \
/* ------------------------ */ \
static int Test##attr( AstSkyFrame *this, int axis, int *status ) { \
   int result;                   /* Value to return */ \
   int axis_p;                   /* Permuted axis index */ \
\
/* Initialise */ \
   result =0; \
\
/* Check the global error status. */ \
   if ( !astOK ) return result; \
\
/* Validate and permute the axis index. */ \
   axis_p = astValidateAxis( this, axis, 1, "astTest" #attr ); \
\
/* Assign the result value. */ \
   if( astOK ) { \
      result = (assign); \
   } \
\
/* Check for errors and clear the result if necessary. */ \
   if ( !astOK ) result = 0; \
\
/* Return the result. */ \
   return result; \
} \
/* External interface. */ \
/* ------------------- */ \
int astTest##attr##_( AstSkyFrame *this, int axis, int *status ) { \
\
/* Check the global error status. */ \
   if ( !astOK ) return 0; \
\
/* Invoke the required method via the virtual function table. */ \
   return (**astMEMBER(this,SkyFrame,Test##attr))( this, axis, status ); \
}


/* Header files. */
/* ============= */
/* Interface definitions. */
/* ---------------------- */

#include "globals.h"             /* Thread-safe global data access */
#include "error.h"               /* Error reporting facilities */
#include "memory.h"              /* Memory allocation facilities */
#include "globals.h"             /* Thread-safe global data access */
#include "object.h"              /* Base Object class */
#include "pointset.h"            /* Sets of points (for AST__BAD) */
#include "unitmap.h"             /* Unit Mappings */
#include "permmap.h"             /* Coordinate permutations */
#include "cmpmap.h"              /* Compound Mappings */
#include "slamap.h"              /* SLALIB sky coordinate Mappings */
#include "timemap.h"             /* Time conversions */
#include "skyaxis.h"             /* Sky axes */
#include "frame.h"               /* Parent Frame class */
#include "region.h"              /* Regions within Frames */
#include "matrixmap.h"           /* Matrix multiplication */
#include "sphmap.h"              /* Cartesian<->Spherical transformations */
#include "skyframe.h"            /* Interface definition for this class */
#include "pal.h"                 /* SLALIB library interface */
#include "wcsmap.h"              /* Factors of PI */
#include "timeframe.h"           /* Time system transformations */

/* Error code definitions. */
/* ----------------------- */
#include "ast_err.h"             /* AST error codes */

/* C header files. */
/* --------------- */
#include <ctype.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/* Type Definitions. */
/* ================= */

/* Cached Line structure. */
/* ---------------------- */
/* This structure contains information describing a line segment within a
   SkyFrame. It differs from the AstLineDef defined in frame.h because
   positions are represented by 3D (x,y,z) cartesian coords rather than
   2D (long,lat) coords. */

typedef struct SkyLineDef {
   AstFrame *frame;            /* Pointer to Frame in which the line is defined */
   double length;              /* Line length */
   int infinite;               /* Disregard the start and end of the line? */
   double start[3];            /* Unit vector defining start of line */
   double end[3];              /* Unit vector defining end of line */
   double dir[3];              /* Unit vector defining line direction */
   double q[3];                /* Unit vector perpendicular to line */
   double start_2d[2];
   double end_2d[2];
} SkyLineDef;

/* Module Variables. */
/* ================= */

/* Address of this static variable is used as a unique identifier for
   member of this class. */
static int class_check;

/* Pointers to parent class methods which are used or extended by this
   class. */

static AstPointSet *(* parent_normalpoints)( AstFrame *, AstPointSet *, int, AstPointSet *, int * );
static AstSystemType (* parent_getalignsystem)( AstFrame *, int * );
static AstSystemType (* parent_getsystem)( AstFrame *, int * );
static const char *(* parent_format)( AstFrame *, int, double, int * );
static const char *(* parent_getattrib)( AstObject *, const char *, int * );
static const char *(* parent_getdomain)( AstFrame *, int * );
static const char *(* parent_getformat)( AstFrame *, int, int * );
static const char *(* parent_getlabel)( AstFrame *, int, int * );
static const char *(* parent_getsymbol)( AstFrame *, int, int * );
static const char *(* parent_gettitle)( AstFrame *, int * );
static const char *(* parent_getunit)( AstFrame *, int, int * );
static double (* parent_gap)( AstFrame *, int, double, int *, int * );
static double (* parent_getbottom)( AstFrame *, int, int * );
static double (* parent_getepoch)( AstFrame *, int * );
static double (* parent_gettop)( AstFrame *, int, int * );
static int (* parent_getdirection)( AstFrame *, int, int * );
static size_t (* parent_getobjsize)( AstObject *, int * );
static int (* parent_match)( AstFrame *, AstFrame *, int, int **, int **, AstMapping **, AstFrame **, int * );
static int (* parent_subframe)( AstFrame *, AstFrame *, int, const int *, const int *, AstMapping **, AstFrame **, int * );
static int (* parent_testattrib)( AstObject *, const char *, int * );
static int (* parent_testformat)( AstFrame *, int, int * );
static int (* parent_unformat)( AstFrame *, int, const char *, double *, int * );
static void (* parent_clearattrib)( AstObject *, const char *, int * );
static void (* parent_cleardtai)( AstFrame *, int * );
static void (* parent_cleardut1)( AstFrame *, int * );
static void (* parent_clearformat)( AstFrame *, int, int * );
static void (* parent_clearobsalt)( AstFrame *, int * );
static void (* parent_clearobslat)( AstFrame *, int * );
static void (* parent_clearobslon)( AstFrame *, int * );
static void (* parent_clearsystem)( AstFrame *, int * );
static void (* parent_overlay)( AstFrame *, const int *, AstFrame *, int * );
static void (* parent_setattrib)( AstObject *, const char *, int * );
static void (* parent_setdtai)( AstFrame *, double, int * );
static void (* parent_setdut1)( AstFrame *, double, int * );
static void (* parent_setformat)( AstFrame *, int, const char *, int * );
static void (* parent_setobsalt)( AstFrame *, double, int * );
static void (* parent_setobslat)( AstFrame *, double, int * );
static void (* parent_setobslon)( AstFrame *, double, int * );
static void (* parent_setsystem)( AstFrame *, AstSystemType, int * );

/* Factors for converting between hours, degrees and radians. */
static double hr2rad;
static double deg2rad;
static double pi;
static double piby2;

/* Table of cached Local Apparent Sidereal Time values and corresponding
   epochs. */
static int nlast_tables = 0;
static AstSkyLastTable **last_tables = NULL;


/* Define macros for accessing each item of thread specific global data. */
#ifdef THREAD_SAFE

/* Define how to initialise thread-specific globals. */
#define GLOBAL_inits \
   globals->Class_Init = 0; \
   globals->GetAttrib_Buff[ 0 ] = 0; \
   globals->GetFormat_Buff[ 0 ] = 0; \
   globals->GetLabel_Buff[ 0 ] = 0; \
   globals->GetSymbol_Buff[ 0 ] = 0; \
   globals->GetTitle_Buff[ 0 ] = 0; \
   globals->GetTitle_Buff2[ 0 ] = 0; \
   globals->TDBFrame = NULL; \
   globals->LASTFrame = NULL; \

/* Create the function that initialises global data for this module. */
astMAKE_INITGLOBALS(SkyFrame)

/* Define macros for accessing each item of thread specific global data. */
#define class_init astGLOBAL(SkyFrame,Class_Init)
#define class_vtab astGLOBAL(SkyFrame,Class_Vtab)
#define getattrib_buff astGLOBAL(SkyFrame,GetAttrib_Buff)
#define getformat_buff astGLOBAL(SkyFrame,GetFormat_Buff)
#define getlabel_buff astGLOBAL(SkyFrame,GetLabel_Buff)
#define getsymbol_buff astGLOBAL(SkyFrame,GetSymbol_Buff)
#define gettitle_buff astGLOBAL(SkyFrame,GetTitle_Buff)
#define gettitle_buff2 astGLOBAL(SkyFrame,GetTitle_Buff2)
#define tdbframe astGLOBAL(SkyFrame,TDBFrame)
#define lastframe astGLOBAL(SkyFrame,LASTFrame)



static pthread_mutex_t mutex2 = PTHREAD_MUTEX_INITIALIZER;
#define LOCK_MUTEX2 pthread_mutex_lock( &mutex2 );
#define UNLOCK_MUTEX2 pthread_mutex_unlock( &mutex2 );

/* A read-write lock used to protect the table of cached LAST values so
   that multiple threads can read simultaneously so long as no threads are
   writing to the table. */
static pthread_rwlock_t rwlock1=PTHREAD_RWLOCK_INITIALIZER;
#define LOCK_WLOCK1 pthread_rwlock_wrlock( &rwlock1 );
#define LOCK_RLOCK1 pthread_rwlock_rdlock( &rwlock1 );
#define UNLOCK_RWLOCK1 pthread_rwlock_unlock( &rwlock1 );

/* If thread safety is not needed, declare and initialise globals at static
   variables. */
#else

/* Buffer returned by GetAttrib. */
static char getattrib_buff[ GETATTRIB_BUFF_LEN + 1 ];

/* Buffer returned by GetFormat. */
static char getformat_buff[ GETFORMAT_BUFF_LEN + 1 ];

/* Default GetLabel string buffer */
static char getlabel_buff[ GETLABEL_BUFF_LEN + 1 ];

/* Default GetSymbol buffer */
static char getsymbol_buff[ GETSYMBOL_BUFF_LEN + 1 ];

/* Default Title string buffer */
static char gettitle_buff[ AST__SKYFRAME_GETTITLE_BUFF_LEN + 1 ];
static char gettitle_buff2[ AST__SKYFRAME_GETTITLE_BUFF_LEN + 1 ];

/* TimeFrames for doing TDB<->LAST conversions. */
static AstTimeFrame *tdbframe = NULL;
static AstTimeFrame *lastframe = NULL;


/* Define the class virtual function table and its initialisation flag
   as static variables. */
static AstSkyFrameVtab class_vtab;   /* Virtual function table */
static int class_init = 0;       /* Virtual function table initialised? */

#define LOCK_MUTEX2
#define UNLOCK_MUTEX2

#define LOCK_WLOCK1
#define LOCK_RLOCK1
#define UNLOCK_RWLOCK1

#endif


/* Prototypes for Private Member Functions. */
/* ======================================== */
static AstLineDef *LineDef( AstFrame *, const double[2], const double[2], int * );
static AstMapping *SkyOffsetMap( AstSkyFrame *, int * );
static AstPointSet *FrameGrid( AstFrame *, int, const double *, const double *, int * );
static AstPointSet *ResolvePoints( AstFrame *, const double [], const double [], AstPointSet *, AstPointSet *, int * );
static AstSystemType GetAlignSystem( AstFrame *, int * );
static AstSystemType GetSystem( AstFrame *, int * );
static AstSystemType SystemCode( AstFrame *, const char *, int * );
static AstSystemType ValidateSystem( AstFrame *, AstSystemType, const char *, int * );
static const char *Format( AstFrame *, int, double, int * );
static const char *GetAttrib( AstObject *, const char *, int * );
static const char *GetDomain( AstFrame *, int * );
static const char *GetFormat( AstFrame *, int, int * );
static const char *GetLabel( AstFrame *, int, int * );
static const char *GetProjection( AstSkyFrame *, int * );
static const char *GetSymbol( AstFrame *, int, int * );
static const char *GetTitle( AstFrame *, int * );
static const char *GetUnit( AstFrame *, int, int * );
static const char *SystemString( AstFrame *, AstSystemType, int * );
static double Angle( AstFrame *, const double[], const double[], const double[], int * );
static double CalcLAST( AstSkyFrame *, double, double, double, double, double, double, int * );
static double Distance( AstFrame *, const double[], const double[], int * );
static double Gap( AstFrame *, int, double, int *, int * );
static double GetBottom( AstFrame *, int, int * );
static double GetCachedLAST( AstSkyFrame *, double, double, double, double, double, double, int * );
static double GetEpoch( AstFrame *, int * );
static double GetEquinox( AstSkyFrame *, int * );
static void SetCachedLAST( AstSkyFrame *, double, double, double, double, double, double, double, int * );
static void SetLast( AstSkyFrame *, int * );
static double GetTop( AstFrame *, int, int * );
static double Offset2( AstFrame *, const double[2], double, double, double[2], int * );
static double GetDiurab( AstSkyFrame *, int * );
static double GetLAST( AstSkyFrame *, int * );
static int GetActiveUnit( AstFrame *, int * );
static int GetAsTime( AstSkyFrame *, int, int * );
static int GetDirection( AstFrame *, int, int * );
static int GetIsLatAxis( AstSkyFrame *, int, int * );
static int GetIsLonAxis( AstSkyFrame *, int, int * );
static int GetLatAxis( AstSkyFrame *, int * );
static int GetLonAxis( AstSkyFrame *, int * );
static int GetNegLon( AstSkyFrame *, int * );
static size_t GetObjSize( AstObject *, int * );
static int IsEquatorial( AstSystemType, int * );
static int LineContains( AstFrame *, AstLineDef *, int, double *, int * );
static int LineCrossing( AstFrame *, AstLineDef *, AstLineDef *, double[5], double *, int * );
static int LineIncludes( SkyLineDef *, double[3], double *, int * );
static int MakeSkyMapping( AstSkyFrame *, AstSkyFrame *, AstSystemType, AstMapping **, int * );
static int Match( AstFrame *, AstFrame *, int, int **, int **, AstMapping **, AstFrame **, int * );
static int SubFrame( AstFrame *, AstFrame *, int, const int *, const int *, AstMapping **, AstFrame **, int * );
static int TestActiveUnit( AstFrame *, int * );
static int TestAsTime( AstSkyFrame *, int, int * );
static int TestAttrib( AstObject *, const char *, int * );
static int TestEquinox( AstSkyFrame *, int * );
static int TestNegLon( AstSkyFrame *, int * );
static int TestProjection( AstSkyFrame *, int * );
static int TestSlaUnit( AstSkyFrame *, AstSkyFrame *, AstSlaMap *, int * );
static int Unformat( AstFrame *, int, const char *, double *, int * );
static AstPointSet *NormalPoints( AstFrame *, AstPointSet *, int, AstPointSet *, int * );
static void ClearAsTime( AstSkyFrame *, int, int * );
static void ClearAttrib( AstObject *, const char *, int * );
static void ClearDtai( AstFrame *, int * );
static void ClearDut1( AstFrame *, int * );
static void ClearEquinox( AstSkyFrame *, int * );
static void ClearNegLon( AstSkyFrame *, int * );
static void ClearObsAlt( AstFrame *, int * );
static void ClearObsLat( AstFrame *, int * );
static void ClearObsLon( AstFrame *, int * );
static void ClearProjection( AstSkyFrame *, int * );
static void ClearSystem( AstFrame *, int * );
static void Copy( const AstObject *, AstObject *, int * );
static void Delete( AstObject *, int * );
static void Dump( AstObject *, AstChannel *, int * );
static void Intersect( AstFrame *, const double[2], const double[2], const double[2], const double[2], double[2], int * );
static void LineOffset( AstFrame *, AstLineDef *, double, double, double[2], int * );
static void MatchAxesX( AstFrame *, AstFrame *, int *, int * );
static void Norm( AstFrame *, double[], int * );
static void NormBox( AstFrame *, double[], double[], AstMapping *, int * );
static void Offset( AstFrame *, const double[], const double[], double, double[], int * );
static void Overlay( AstFrame *, const int *, AstFrame *, int * );
static void Resolve( AstFrame *, const double [], const double [], const double [], double [], double *, double *, int * );
static void SetAsTime( AstSkyFrame *, int, int, int * );
static void SetAttrib( AstObject *, const char *, int * );
static void SetDtai( AstFrame *, double, int * );
static void SetDut1( AstFrame *, double, int * );
static void SetEquinox( AstSkyFrame *, double, int * );
static void SetNegLon( AstSkyFrame *, int, int * );
static void SetObsAlt( AstFrame *, double, int * );
static void SetObsLat( AstFrame *, double, int * );
static void SetObsLon( AstFrame *, double, int * );
static void SetProjection( AstSkyFrame *, const char *, int * );
static void SetSystem( AstFrame *, AstSystemType, int * );
static void Shapp( double, double *, double *, double, double *, int * );
static void Shcal( double, double, double, double *, double *, int * );
static void VerifyMSMAttrs( AstSkyFrame *, AstSkyFrame *, int, const char *, const char *, int * );

static double GetSkyRef( AstSkyFrame *, int, int * );
static int TestSkyRef( AstSkyFrame *, int, int * );
static void SetSkyRef( AstSkyFrame *, int, double, int * );
static void ClearSkyRef( AstSkyFrame *, int, int * );

static double GetSkyRefP( AstSkyFrame *, int, int * );
static int TestSkyRefP( AstSkyFrame *, int, int * );
static void SetSkyRefP( AstSkyFrame *, int, double, int * );
static void ClearSkyRefP( AstSkyFrame *, int, int * );

static int GetSkyRefIs( AstSkyFrame *, int * );
static int TestSkyRefIs( AstSkyFrame *, int * );
static void SetSkyRefIs( AstSkyFrame *, int, int * );
static void ClearSkyRefIs( AstSkyFrame *, int * );

static int GetAlignOffset( AstSkyFrame *, int * );
static int TestAlignOffset( AstSkyFrame *, int * );
static void SetAlignOffset( AstSkyFrame *, int, int * );
static void ClearAlignOffset( AstSkyFrame *, int * );

static double GetSkyTol( AstSkyFrame *, int * );
static int TestSkyTol( AstSkyFrame *, int * );
static void SetSkyTol( AstSkyFrame *, double, int * );
static void ClearSkyTol( AstSkyFrame *, int * );

/* Member functions. */
/* ================= */
static double Angle( AstFrame *this_frame, const double a[],
                     const double b[], const double c[], int *status ) {
/*
*  Name:
*     Angle

*  Purpose:
*     Calculate the angle subtended by two points at a third point.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     double Angle( AstFrame *this_frame, const double a[],
*                   const double b[], const double c[], int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astAngle method
*     inherited from the Frame class).

*  Description:
*     This function finds the angle at point B between the line
*     joining points A and B, and the line joining points C
*     and B. These lines will in fact be geodesic curves (great circles).

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     a
*        An array of double, with one element for each SkyFrame axis,
*        containing the coordinates of the first point.
*     b
*        An array of double, with one element for each SkyFrame axis,
*        containing the coordinates of the second point.
*     c
*        An array of double, with one element for each SkyFrame axis,
*        containing the coordinates of the third point.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The angle in radians, from the line AB to the line CB, in
*     the range $\pm \pi$ with positive rotation is in the same sense
*     as rotation from axis 2 to axis 1.

*  Notes:
*     - This function will return a "bad" result value (AST__BAD) if
*     any of the input coordinates has this value.
*     - A "bad" value will also be returned if points A and B are
*     co-incident, or if points B and C are co-incident.
*     - A "bad" value will also be returned if this function is
*     invoked with the AST error status set, or if it should fail for
*     any reason.
*/

   AstSkyFrame *this;            /* Pointer to SkyFrame structure */
   const int *perm;              /* Axis permutation array */
   double aa[ 2 ];               /* Permuted a coordinates */
   double anga;                  /* Angle from north to the line BA */
   double angc;                  /* Angle from north to the line BC */
   double bb[ 2 ];               /* Permuted b coordinates */
   double cc[ 2 ];               /* Permuted c coordinates */
   double result;                /* Value to return */

/* Initialise. */
   result = AST__BAD;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Obtain a pointer to the SkyFrame's axis permutation array. */
   perm = astGetPerm( this );
   if ( astOK ) {

/* Check that all supplied coordinates are OK. */
      if ( ( a[ 0 ] != AST__BAD ) && ( a[ 1 ] != AST__BAD ) &&
           ( b[ 0 ] != AST__BAD ) && ( b[ 1 ] != AST__BAD ) &&
           ( c[ 0 ] != AST__BAD ) && ( c[ 1 ] != AST__BAD ) ) {

/* Apply the axis permutation array to obtain the coordinates of the
   three points in the required (longitude,latitude) order. */
         aa[ perm[ 0 ] ] = a[ 0 ];
         aa[ perm[ 1 ] ] = a[ 1 ];
         bb[ perm[ 0 ] ] = b[ 0 ];
         bb[ perm[ 1 ] ] = b[ 1 ];
         cc[ perm[ 0 ] ] = c[ 0 ];
         cc[ perm[ 1 ] ] = c[ 1 ];

/* Check that A and B are not co-incident. */
         if( aa[ 0 ] != bb[ 0 ] || aa[ 1 ] != bb[ 1 ] ) {

/* Check that C and B are not co-incident. */
            if( cc[ 0 ] != bb[ 0 ] || cc[ 1 ] != bb[ 1 ] ) {

/* Find the angle from north to the line BA. */
               anga = palDbear( bb[ 0 ], bb[ 1 ], aa[ 0 ], aa[ 1 ] );

/* Find the angle from north to the line BC. */
               angc = palDbear( bb[ 0 ], bb[ 1 ], cc[ 0 ], cc[ 1 ] );

/* Find the difference. */
               result = angc - anga;

/* This value is the angle from north, but we want the angle from axis 2.
   If the axes have been swapped so that axis 2 is actually the longitude
   axis, then we need to correct this result. */
               if( perm[ 0 ] != 0 ) result = piby2 - result;

/* Fold the result into the range +/- PI. */
               result = palDrange( result );
            }
         }
      }
   }

/* Return the result. */
   return result;
}

static double CalcLAST( AstSkyFrame *this, double epoch, double obslon,
                        double obslat, double obsalt, double dut1, double dtai,
                        int *status ) {
/*
*  Name:
*     CalcLAST

*  Purpose:
*     Calculate the Local Appearent Sidereal Time for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     double CalcLAST( AstSkyFrame *this, double epoch, double obslon,
*                      double obslat, double obsalt, double dut1, double dtai,
*                      int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function calculates and returns the Local Apparent Sidereal Time
*     at the given epoch, etc.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     epoch
*        The epoch (MJD).
*     obslon
*        Observatory geodetic longitude (radians)
*     obslat
*        Observatory geodetic latitude (radians)
*     obsalt
*        Observatory geodetic altitude (metres)
*     dut1
*        The UT1-UTC correction, in seconds.
*     dtai
*        The TAI-UTC correction, in seconds.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*    The Local Apparent Sidereal Time, in radians.

*  Notes:
*     -  A value of AST__BAD will be returned if this function is invoked
*     with the global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   astDECLARE_GLOBALS /* Declare the thread specific global data */
   AstFrameSet *fs;   /* Mapping from TDB offset to LAST offset */
   double epoch0;     /* Supplied epoch value */
   double result;     /* Returned LAST value */

/* Get a pointer to the structure holding thread-specific global data. */
   astGET_GLOBALS(this);

/* Check the global error status. */
   if ( !astOK ) return AST__BAD;

/* See if the required LAST value can be determined from the cached LAST
   values in the SkyFrame virtual function table. */
   result = GetCachedLAST( this, epoch, obslon, obslat, obsalt, dut1, dtai,
                           status );

/* If not, we do an exact calculation from scratch. */
   if( result == AST__BAD ) {

/* If not yet done, create two TimeFrames. Note, this is done here
   rather than in astInitSkyFrameVtab in order to avoid infinite vtab
   initialisation loops (caused by the TimeFrame class containing a
   static SkyFrame). */
      if( ! tdbframe ) {
         astBeginPM;
         tdbframe = astTimeFrame( "system=mjd,timescale=tdb", status );
         lastframe = astTimeFrame( "system=mjd,timescale=last", status );
         astEndPM;
      }

/* For better accuracy, use this integer part of the epoch as the origin of
   the two TimeFrames. */
      astSetTimeOrigin( tdbframe, (int) epoch );
      astSetTimeOrigin( lastframe, (int) epoch );

/* Convert the absolute Epoch value to an offset from the above origin. */
      epoch0 = epoch;
      epoch -= (int) epoch;

/* Store the observers position in the two TimeFrames. */
      astSetObsLon( tdbframe, obslon );
      astSetObsLon( lastframe, obslon );

      astSetObsLat( tdbframe, obslat );
      astSetObsLat( lastframe, obslat );

      astSetObsAlt( tdbframe, obsalt );
      astSetObsAlt( lastframe, obsalt );

/* Store the DUT1 value. */
      astSetDut1( tdbframe, dut1 );
      astSetDut1( lastframe, dut1 );

/* Store the DTAI value. */
      if ( dtai == AST__BAD ) {
         astClearDtai( tdbframe );
         astClearDtai( lastframe );
      }
      else {
         astSetDtai( tdbframe, dtai );
         astSetDtai( lastframe, dtai );
      }

/* Get the conversion from tdb mjd offset to last mjd offset. */
      fs = astConvert( tdbframe, lastframe, "" );

/* Use it to transform the SkyFrame Epoch from TDB offset to LAST offset. */
      astTran1( fs, 1, &epoch, 1, &epoch );
      fs = astAnnul( fs );

/* Convert the LAST offset from days to radians. */
      result = ( epoch - (int) epoch )*2*AST__DPI;

/* Cache the new LAST value in the SkyFrame virtual function table. */
      SetCachedLAST( this, result, epoch0, obslon, obslat, obsalt, dut1, dtai,
                     status );
   }

/* Return the required LAST value. */
   return result;
}

static void ClearAsTime( AstSkyFrame *this, int axis, int *status ) {
/*
*  Name:
*     ClearAsTime

*  Purpose:
*     Clear the value of the AsTime attribute for a SkyFrame's axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void ClearAsTime( AstSkyFrame *this, int axis, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function clears any value that has been set for the AsTime
*     attribute for a specified axis of a SkyFrame. This attribute indicates
*     whether axis values should be formatted as times (as opposed to angles)
*     by default.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Index of the axis for which the value is to be cleared (zero based).
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     void.
*/

/* Local Variables: */
   AstAxis *ax;                  /* Pointer to Axis object */

/* Check the global error status. */
   if ( !astOK ) return;

/* Validate the axis index. */
   (void) astValidateAxis( this, axis, 1, "astClearAsTime" );

/* Obtain a pointer to the Axis object. */
   ax = astGetAxis( this, axis );

/* If the Axis is a SkyAxis, clear the AsTime attribute (if it is not a
   SkyAxis, it will not have this attribute anyway). */
   if ( astIsASkyAxis( ax ) ) astClearAxisAsTime( ax );

/* Annul the Axis pointer. */
   ax = astAnnul( ax );
}

static void ClearAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     ClearAttrib

*  Purpose:
*     Clear an attribute value for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void ClearAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astClearAttrib protected
*     method inherited from the Frame class).

*  Description:
*     This function clears the value of a specified attribute for a
*     SkyFrame, so that the default value will subsequently be used.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     attrib
*        Pointer to a null terminated string specifying the attribute
*        name.  This should be in lower case with no surrounding white
*        space.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     - This function uses one-based axis numbering so that it is
*     suitable for external (public) use.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   int axis;                     /* SkyFrame axis number */
   int len;                      /* Length of attrib string */
   int nc;                       /* No. characters read by astSscanf */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_object;

/* Obtain the length of the "attrib" string. */
   len = strlen( attrib );

/* Check the attribute name and clear the appropriate attribute. */

/* AsTime(axis). */
/* ------------- */
   if ( nc = 0,
        ( 1 == astSscanf( attrib, "astime(%d)%n", &axis, &nc ) )
        && ( nc >= len ) ) {
      astClearAsTime( this, axis - 1 );

/* Equinox. */
/* -------- */
   } else if ( !strcmp( attrib, "equinox" ) ) {
      astClearEquinox( this );

/* NegLon. */
/* ------- */
   } else if ( !strcmp( attrib, "neglon" ) ) {
      astClearNegLon( this );

/* Projection. */
/* ----------- */
   } else if ( !strcmp( attrib, "projection" ) ) {
      astClearProjection( this );

/* SkyRef. */
/* ------- */
   } else if ( !strcmp( attrib, "skyref" ) ) {
      astClearSkyRef( this, 0 );
      astClearSkyRef( this, 1 );

/* SkyTol. */
/* ------- */
   } else if ( !strcmp( attrib, "skytol" ) ) {
      astClearSkyTol( this );

/* SkyRef(axis). */
/* ------------- */
   } else if ( nc = 0,
        ( 1 == astSscanf( attrib, "skyref(%d)%n", &axis, &nc ) )
        && ( nc >= len ) ) {
      astClearSkyRef( this, axis - 1 );

/* SkyRefP. */
/* -------- */
   } else if ( !strcmp( attrib, "skyrefp" ) ) {
      astClearSkyRefP( this, 0 );
      astClearSkyRefP( this, 1 );

/* SkyRefP(axis). */
/* ------------- */
   } else if ( nc = 0,
        ( 1 == astSscanf( attrib, "skyrefp(%d)%n", &axis, &nc ) )
        && ( nc >= len ) ) {
      astClearSkyRefP( this, axis - 1 );

/* SkyRefIs. */
/* --------- */
   } else if ( !strcmp( attrib, "skyrefis" ) ) {
      astClearSkyRefIs( this );

/* AlignOffset. */
/* ------------ */
   } else if ( !strcmp( attrib, "alignoffset" ) ) {
      astClearAlignOffset( this );

/* If the name was not recognised, test if it matches any of the
   read-only attributes of this class. If it does, then report an
   error. */
   } else if ( !strncmp( attrib, "islataxis", 9 ) ||
               !strncmp( attrib, "islonaxis", 9 ) ||
               !strcmp( attrib, "lataxis" ) ||
               !strcmp( attrib, "lonaxis" ) ) {
      astError( AST__NOWRT, "astClear: Invalid attempt to clear the \"%s\" "
                "value for a %s.", status, attrib, astGetClass( this ) );
      astError( AST__NOWRT, "This is a read-only attribute." , status);

/* If the attribute is not recognised, pass it on to the parent method
   for further interpretation. */
   } else {
      (*parent_clearattrib)( this_object, attrib, status );
   }
}

static void ClearDtai( AstFrame *this, int *status ) {
/*
*  Name:
*     ClearDtai

*  Purpose:
*     Clear the value of the Dtai attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void ClearDtai( AstFrame *this, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astClearDtai method
*     inherited from the Frame class).

*  Description:
*     This function clears the Dtai value and updates the LAST value
*     stored in the SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   double orig;

/* Check the global error status. */
   if ( !astOK ) return;

/* Note the original value */
   orig = astGetDtai( this );

/* Invoke the parent method to clear the Frame Dtai */
   (*parent_cleardtai)( this, status );

/* If the DTAI value has changed significantly, indicate that the LAST value
   will need to be re-calculated when it is next needed. */
   if( ! EQUAL( orig, astGetDtai( this ), 1.0E-6 ) ) {
      ( (AstSkyFrame *) this )->last = AST__BAD;
      ( (AstSkyFrame *) this )->eplast = AST__BAD;
      ( (AstSkyFrame *) this )->klast = AST__BAD;
   }
}

static void ClearDut1( AstFrame *this, int *status ) {
/*
*  Name:
*     ClearDut1

*  Purpose:
*     Clear the value of the Dut1 attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void ClearDut1( AstFrame *this, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astClearDut1 method
*     inherited from the Frame class).

*  Description:
*     This function clears the Dut1 value and updates the LAST value
*     stored in the SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   double orig;

/* Check the global error status. */
   if ( !astOK ) return;

/* Note the original value */
   orig = astGetDut1( this );

/* Invoke the parent method to clear the Frame Dut1 */
   (*parent_cleardut1)( this, status );

/* If the DUT1 value has changed significantly, indicate that the LAST value
   will need to be re-calculated when it is next needed. */
   if( fabs( orig - astGetDut1( this ) ) > 1.0E-6 ) {
      ( (AstSkyFrame *) this )->last = AST__BAD;
      ( (AstSkyFrame *) this )->eplast = AST__BAD;
      ( (AstSkyFrame *) this )->klast = AST__BAD;
   }
}

static void ClearObsAlt( AstFrame *this, int *status ) {
/*
*  Name:
*     ClearObsAlt

*  Purpose:
*     Clear the value of the ObsAlt attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void ClearObsAlt( AstFrame *this, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astClearObsAlt method
*     inherited from the Frame class).

*  Description:
*     This function clears the ObsAlt value.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   double orig;

/* Check the global error status. */
   if ( !astOK ) return;

/* Note the original value */
   orig = astGetObsAlt( this );

/* Invoke the parent method to clear the Frame ObsAlt. */
   (*parent_clearobsalt)( this, status );

/* If the altitude has changed significantly, indicate that the LAST value
   and magnitude of the diurnal aberration vector will need to be
   re-calculated when next needed. */
   if( fabs( orig - astGetObsAlt( this ) ) > 0.001 ) {
      ( (AstSkyFrame *) this )->last = AST__BAD;
      ( (AstSkyFrame *) this )->eplast = AST__BAD;
      ( (AstSkyFrame *) this )->klast = AST__BAD;
      ( (AstSkyFrame *) this )->diurab = AST__BAD;
   }
}

static void ClearObsLat( AstFrame *this, int *status ) {
/*
*  Name:
*     ClearObsLat

*  Purpose:
*     Clear the value of the ObsLat attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void ClearObsLat( AstFrame *this, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astClearObsLat method
*     inherited from the Frame class).

*  Description:
*     This function clears the ObsLat value.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   double orig;

/* Check the global error status. */
   if ( !astOK ) return;

/* Note the original value */
   orig = astGetObsLat( this );

/* Invoke the parent method to clear the Frame ObsLat. */
   (*parent_clearobslat)( this, status );

/* If the altitude has changed significantly, indicate that the LAST value
   and magnitude of the diurnal aberration vector will need to be
   re-calculated when next needed. */
   if( fabs( orig - astGetObsLat( this ) ) > 1.0E-8 ) {
      ( (AstSkyFrame *) this )->last = AST__BAD;
      ( (AstSkyFrame *) this )->eplast = AST__BAD;
      ( (AstSkyFrame *) this )->klast = AST__BAD;
      ( (AstSkyFrame *) this )->diurab = AST__BAD;
   }
}

static void ClearObsLon( AstFrame *this, int *status ) {
/*
*  Name:
*     ClearObsLon

*  Purpose:
*     Clear the value of the ObsLon attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void ClearObsLon( AstFrame *this, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astClearObsLon method
*     inherited from the Frame class).

*  Description:
*     This function clears the ObsLon value.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   double orig;

/* Check the global error status. */
   if ( !astOK ) return;

/* Note the original value */
   orig = astGetObsLon( this );

/* Invoke the parent method to clear the Frame ObsLon. */
   (*parent_clearobslon)( this, status );

/* If the longitude has changed significantly, indicate that the LAST value
   will need to be re-calculated when it is next needed. */
   if( fabs( orig - astGetObsLon( this ) ) > 1.0E-8 ) {
      ( (AstSkyFrame *) this )->last = AST__BAD;
      ( (AstSkyFrame *) this )->eplast = AST__BAD;
      ( (AstSkyFrame *) this )->klast = AST__BAD;
   }
}

static void ClearSystem( AstFrame *this_frame, int *status ) {
/*
*  Name:
*     ClearSystem

*  Purpose:
*     Clear the System attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void ClearSystem( AstFrame *this_frame, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astClearSystem protected
*     method inherited from the Frame class).

*  Description:
*     This function clears the System attribute for a SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstFrameSet *fs;              /* FrameSet to be used as the Mapping */
   AstSkyFrame *sfrm;            /* Copy of original SkyFrame */
   AstSkyFrame *this;            /* Pointer to SkyFrame structure */
   double xin[ 2 ];              /* Axis 0 values */
   double yin[ 2 ];              /* Axis 1 values */
   double xout[ 2 ];             /* Axis 0 values */
   double yout[ 2 ];             /* Axis 1 values */
   int skyref_set;               /* Is either SkyRef attribute set? */
   int skyrefp_set;              /* Is either SkyRefP attribute set? */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* See if either the SkyRef or SkyRefP attribute is set. */
   skyref_set = astTestSkyRef( this, 0 ) || astTestSkyRef( this, 1 );
   skyrefp_set = astTestSkyRefP( this, 0 ) || astTestSkyRefP( this, 1 );

/* If so, we will need to transform their values into the new coordinate
   system. Save a copy of the SkyFrame with its original System value. */
   sfrm = ( skyref_set || skyrefp_set )?astCopy( this ):NULL;

/* Use the parent method to clear the System value. */
   (*parent_clearsystem)( this_frame, status );

/* Now modify the SkyRef and SkyRefP attributes if necessary. */
   if( sfrm ) {

/* Save the SkyRef and SkyRefP values. */
      xin[ 0 ] = astGetSkyRef( sfrm, 0 );
      xin[ 1 ] = astGetSkyRefP( sfrm, 0 );
      yin[ 0 ] = astGetSkyRef( sfrm, 1 );
      yin[ 1 ] = astGetSkyRefP( sfrm, 1 );

/* Clear the SkyRef values to avoid infinite recursion in the following
   call to astConvert. */
      if( skyref_set ) {
         astClearSkyRef( sfrm, 0 );
         astClearSkyRef( sfrm, 1 );
         astClearSkyRef( this, 0 );
         astClearSkyRef( this, 1 );
      }

/* Get the Mapping from the original System to the default System. Invoking
   astConvert will recursively invoke ClearSystem again. This is why we need
   to be careful to ensure that SkyRef is cleared above - doing so ensure
   we do not end up with infinite recursion. */
      fs = astConvert( sfrm, this, "" );

/* Check the Mapping was found. */
      if( fs ) {

/* Use the Mapping to find the SkyRef and SkyRefP positions in the default
   coordinate system. */
         astTran2( fs, 2, xin, yin, 1, xout, yout );

/* Store the values as required. */
         if( skyref_set ) {
            astSetSkyRef( this, 0, xout[ 0 ] );
            astSetSkyRef( this, 1, yout[ 0 ] );
         }

         if( skyrefp_set ) {
            astSetSkyRefP( this, 0, xout[ 1 ] );
            astSetSkyRefP( this, 1, yout[ 1 ] );
         }

/* Free resources. */
         fs = astAnnul( fs );

/* If the Mapping is not defined, we cannot convert the SkyRef or SkyRefP
   positions in the new Frame so clear them. */
      } else {
         if( skyref_set ) {
            astClearSkyRef( this, 0 );
            astClearSkyRef( this, 1 );
         }
         if( skyrefp_set ) {
            astClearSkyRefP( this, 0 );
            astClearSkyRefP( this, 1 );
         }
      }

/* Free resources. */
      sfrm = astAnnul( sfrm );
   }
}

static double Distance( AstFrame *this_frame,
                        const double point1[], const double point2[], int *status ) {
/*
*  Name:
*     Distance

*  Purpose:
*     Calculate the distance between two points.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     double Distance( AstFrame *this,
*                      const double point1[], const double point2[], int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astDistance method
*     inherited from the Frame class).

*  Description:
*     This function finds the distance between two points whose
*     SkyFrame coordinates are given. The distance calculated is that
*     along the geodesic curve (i.e. great circle) that joins the two
*     points.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     point1
*        An array of double, with one element for each SkyFrame axis,
*        containing the coordinates of the first point.
*     point2
*        An array of double, with one element for each SkyFrame axis,
*        containing the coordinates of the second point.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The distance between the two points, in radians.

*  Notes:
*     - This function will return a "bad" result value (AST__BAD) if
*     any of the input coordinates has this value.
*     - A "bad" value will also be returned if this function is
*     invoked with the AST error status set or if it should fail for
*     any reason.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to SkyFrame structure */
   const int *perm;              /* Axis permutation array */
   double p1[ 2 ];               /* Permuted point1 coordinates */
   double p2[ 2 ];               /* Permuted point2 coordinates */
   double result;                /* Value to return */

/* Initialise. */
   result = AST__BAD;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Obtain a pointer to the SkyFrame's axis permutation array. */
   perm = astGetPerm( this );
   if ( astOK ) {

/* Check that all supplied coordinates are OK. */
      if ( ( point1[ 0 ] != AST__BAD ) && ( point1[ 1 ] != AST__BAD ) &&
           ( point2[ 0 ] != AST__BAD ) && ( point2[ 1 ] != AST__BAD ) ) {

/* Apply the axis permutation array to obtain the coordinates of the
   two points in the required (longitude,latitude) order. */
         p1[ perm[ 0 ] ] = point1[ 0 ];
         p1[ perm[ 1 ] ] = point1[ 1 ];
         p2[ perm[ 0 ] ] = point2[ 0 ];
         p2[ perm[ 1 ] ] = point2[ 1 ];

/* Calculate the great circle distance between the points in radians. */
         result = palDsep( p1[ 0 ], p1[ 1 ], p2[ 0 ], p2[ 1 ] );
      }
   }

/* Return the result. */
   return result;
}

static const char *Format( AstFrame *this_frame, int axis, double value, int *status ) {
/*
*  Name:
*     Format

*  Purpose:
*     Format a coordinate value for a SkyFrame axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     const char *Format( AstFrame *this, int axis, double value, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astFormat method inherited
*     from the Frame class).

*  Description:
*     This function returns a pointer to a string containing the formatted
*     (character) version of a coordinate value for a SkyFrame axis. The
*     formatting applied is that specified by a previous invocation of the
*     astSetFormat method. A suitable default format is applied if necessary,
*     and this may depend on which sky coordinate system the SkyFrame
*     describes.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        The number of the axis (zero-based) for which formatting is to be
*        performed.
*     value
*        The coordinate value to be formatted, in radians.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to a null-terminated string containing the formatted value.

*  Notes:
*     -  A NULL pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   const char *result;           /* Pointer value to return */
   int format_set;               /* Format attribute set? */

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Validate the axis index. */
   (void) astValidateAxis( this, axis, 1, "astFormat" );

/* Determine if a Format value has been set for the axis and set a temporary
   value if it has not. Use the GetFormat member function for this class
   together with member functions inherited from the parent class (rather than
   using the object's methods directly) because if any of these methods have
   been over-ridden by a derived class the Format string syntax may no longer
   be compatible with this class. */
   format_set = (*parent_testformat)( this_frame, axis, status );
   if ( !format_set ) {
      (*parent_setformat)( this_frame, axis, GetFormat( this_frame, axis, status ), status );
   }

/* Use the Format member function inherited from the parent class to format the
   value and return a pointer to the resulting string. */
   result = (*parent_format)( this_frame, axis, value, status );

/* If necessary, clear any temporary Format value that was set above. */
   if ( !format_set ) (*parent_clearformat)( this_frame, axis, status );

/* If an error occurred, clear the returned value. */
   if ( !astOK ) result = NULL;

/* Return the result. */
   return result;
}

static AstPointSet *FrameGrid( AstFrame *this_object, int size, const double *lbnd,
                               const double *ubnd, int *status ){
/*
*  Name:
*     FrameGrid

*  Purpose:
*     Return a grid of points covering a rectangular area of a Frame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     AstPointSet *FrameGrid( AstFrame *this_frame, int size,
*                             const double *lbnd, const double *ubnd,
*                             int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the protected astFrameGrid
*     method inherited from the Frame class).

*  Description:
*     This function returns a PointSet containing positions spread
*     approximately evenly throughtout a specified rectangular area of
*     the Frame.

*  Parameters:
*     this
*        Pointer to the Frame.
*     size
*        The preferred number of points in the returned PointSet. The
*        actual number of points in the returned PointSet may be
*        different, but an attempt is made to stick reasonably closely to
*        the supplied value.
*     lbnd
*        Pointer to an array holding the lower bound of the rectangular
*        area on each Frame axis. The array should have one element for
*        each Frame axis.
*     ubnd
*        Pointer to an array holding the upper bound of the rectangular
*        area on each Frame axis. The array should have one element for
*        each Frame axis.

*  Returned Value:
*     A pointer to a new PointSet holding the grid of points.

*  Notes:
*     - A NULL pointer is returned if an error occurs.
*/

/* Local Variables: */
   AstPointSet *result;
   AstSkyFrame *this;
   double **ptr;
   double box_area;
   double cl;
   double dlon;
   double hilat;
   double hilon;
   double inclon;
   double lat_size;
   double lat;
   double lon;
   double lolon;
   double lon_size;
   double lolat;
   double totlen;
   int ilat;
   int ilon;
   int imer;
   int ip;
   int ipar;
   int ipmax;
   int nmer;
   int npar;

/* Initialise. */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_object;

/* Get the zero-based indices of the longitude and latitude axes. */
   ilon = astGetLonAxis( this );
   ilat = 1 - ilon;

/* The latitude bounds may not be the right way round so check for it. */
   if( lbnd[ ilat ] <= ubnd[ ilat ] ) {
      lolat = lbnd[ ilat ];
      hilat = ubnd[ ilat ];
   } else {
      lolat = ubnd[ ilat ];
      hilat = lbnd[ ilat ];
   }

/* Check all bounds are good. Also check the size is positive. */
   lolon = lbnd[ ilon ];
   hilon = ubnd[ ilon ];
   if( size > 0 && lolat != AST__BAD && hilat != AST__BAD &&
       lolon != AST__BAD && hilon != AST__BAD ) {

/* Ensure the longitude bounds are in the range 0-2PI. */
      lolon = palDranrm( lolon );
      hilon = palDranrm( hilon );

/* If the upper longitude limit is less than the lower limit, add 2.PI */
      if( hilon <= lolon &&
          ubnd[ ilon ] != lbnd[ ilon ] ) hilon += 2*AST__DPI;

/* Get the total area of the box in steradians. */
      dlon = hilon - lolon;
      box_area = fabs( dlon*( sin( hilat ) - sin( lolat ) ) );

/* Get the nominal size of a square grid cell, in radians. */
      lat_size = sqrt( box_area/size );

/* How many parallels should we use to cover the box? Ensure we use at
   least two. These parallels pass through the centre of the grid cells. */
      npar = (int)( 0.5 + ( hilat - lolat )/lat_size );
      if( npar < 2 ) npar = 2;

/* Find the actual sample size implied by this number of parallels. */
      lat_size = ( hilat - lolat )/npar;

/* Find the total arc length of the parallels. */
      totlen = 0.0;
      lat = lolat + 0.5*lat_size;
      for( ipar = 0; ipar < npar; ipar++ ) {
         totlen += dlon*cos( lat );
         lat += lat_size;
      }

/* If we space "size" samples evenly over this total arc-length, what is
   the arc-distance between samples? */
      lon_size = totlen/size;

/* Create a PointSet in which to store the grid. Make it bigger than
   necessary in order to leave room for extra samples caused by integer
   truncation. */
      ipmax = 2*size;
      result = astPointSet( ipmax, 2, " ", status );
      ptr = astGetPoints( result );
      if( astOK ) {

/* Loop over all the parallels. */
         ip = 0;
         lat = lolat + 0.5*lat_size;
         for( ipar = 0; ipar < npar; ipar++ ) {

/* Get the longitude increment between samples on this parallel. */
            cl = cos( lat );
            inclon = ( cl != 0.0 ) ? lon_size/cl : 0.0;

/* Get the number of longitude samples for this parallel. Reduce it if
   it would extend beyond the end of the PointSet. */
            nmer = dlon/inclon;
            if( ip + nmer >= ipmax ) nmer = ipmax - ip;

/* Adjust the longitude increment to take up any slack caused by the
   above integer division. */
            inclon = dlon/nmer;

/* Produce the samples for the current parallel. */
            lon = lolon + 0.5*inclon;
            for( imer = 0; imer < nmer; imer++ ) {
               ptr[ ilon ][ ip ] = lon;
               ptr[ ilat ][ ip ] = lat;

               lon += inclon;
               ip++;
            }

/* Get the latitude on the next parallel. */
            lat += lat_size;
         }

/* Truncate the PointSet to exclude unused elements at the end. */
         astSetNpoint( result, ip );
      }

/* Report error if supplied values were bad. */
   } else if( astOK ) {
      if( size < 1 ) {
         astError( AST__ATTIN, "astFrameGrid(%s): The supplied grid "
                   "size (%d) is invalid (programming error).",
                   status, astGetClass( this ), size );
      } else {
         astError( AST__ATTIN, "astFrameGrid(%s): One of more of the "
                   "supplied bounds is AST__BAD (programming error).",
                   status, astGetClass( this ) );
      }
   }

/* Annul the returned PointSet if an error has occurred. */
   if( !astOK ) result = astAnnul( result );

/* Return the PointSet holding the grid. */
   return result;
}

static double Gap( AstFrame *this_frame, int axis, double gap, int *ntick, int *status ) {
/*
*  Name:
*     Gap

*  Purpose:
*     Find a "nice" gap for tabulating SkyFrame axis values.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     double Gap( AstFrame *this, int axis, double gap, int *ntick, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the protected astGap method
*     inherited from the Frame class).

*  Description:
*     This function returns a gap size which produces a nicely spaced
*     series of formatted values for a SkyFrame axis, the returned gap
*     size being as close as possible to the supplied target gap
*     size. It also returns a convenient number of divisions into
*     which the gap can be divided.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        The number of the axis (zero-based) for which a gap is to be found.
*     gap
*        The target gap size.
*     ntick
*        Address of an int in which to return a convenient number of
*        divisions into which the gap can be divided.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The nice gap size.

*  Notes:
*     - A value of zero is returned if the target gap size is zero.
*     - A negative gap size is returned if the supplied gap size is negative.
*     - A value of zero will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   double result;                /* Gap value to return */
   int format_set;               /* Format attribute set? */

/* Check the global error status. */
   if ( !astOK ) return 0.0;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Validate the axis index. */
   (void) astValidateAxis( this, axis, 1, "astGap" );

/* Determine if a Format value has been set for the axis and set a
   temporary value if it has not. Use the GetFormat member function
   for this class together with member functions inherited from the
   parent class (rather than using the object's methods directly)
   because if any of these methods have been over-ridden by a derived
   class the Format string syntax may no longer be compatible with
   this class. */
   format_set = (*parent_testformat)( this_frame, axis, status );
   if ( !format_set ) {
      (*parent_setformat)( this_frame, axis, GetFormat( this_frame, axis, status ), status );
   }

/* Use the Gap member function inherited from the parent class to find
   the gap size. */
   result = (*parent_gap)( this_frame, axis, gap, ntick, status );

/* If necessary, clear any temporary Format value that was set above. */
   if ( !format_set ) (*parent_clearformat)( this_frame, axis, status );

/* If an error occurred, clear the returned value. */
   if ( !astOK ) result = 0.0;

/* Return the result. */
   return result;
}

static size_t GetObjSize( AstObject *this_object, int *status ) {
/*
*  Name:
*     GetObjSize

*  Purpose:
*     Return the in-memory size of an Object.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     size_t GetObjSize( AstObject *this, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetObjSize protected
*     method inherited from the parent class).

*  Description:
*     This function returns the in-memory size of the supplied SkyFrame,
*     in bytes.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The Object size, in bytes.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the global status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstSkyFrame *this;         /* Pointer to SkyFrame structure */
   size_t result;             /* Result value to return */

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointers to the SkyFrame structure. */
   this = (AstSkyFrame *) this_object;

/* Invoke the GetObjSize method inherited from the parent class, and then
   add on any components of the class structure defined by thsi class
   which are stored in dynamically allocated memory. */
   result = (*parent_getobjsize)( this_object, status );
   result += astTSizeOf( this->projection );

/* If an error occurred, clear the result value. */
   if ( !astOK ) result = 0;

/* Return the result, */
   return result;
}

static int GetActiveUnit( AstFrame *this_frame, int *status ) {
/*
*  Name:
*     GetActiveUnit

*  Purpose:
*     Obtain the value of the ActiveUnit flag for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int GetActiveUnit( AstFrame *this_frame, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetActiveUnit protected
*     method inherited from the Frame class).

*  Description:
*    This function returns the value of the ActiveUnit flag for a
*    SkyFrame, which is always 0.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The value to use for the ActiveUnit flag (0).

*/
   return 0;
}

static int GetAsTime( AstSkyFrame *this, int axis, int *status ) {
/*
*  Name:
*     GetAsTime

*  Purpose:
*     Obtain the value of the AsTime attribute for a SkyFrame's axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int GetAsTime( AstSkyFrame *this, int axis, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function returns the boolean value of the AsTime attribute for a
*     specified axis of a SkyFrame. This value indicates whether axis values
*     should be formatted as times (as opposed to angles) by default.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Index of the axis for which information is required (zero based).
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Zero or one, according to the setting of the AsTime attribute (if no
*     value has previously been set, a suitable default is returned).

*  Notes:
*     -  A value of zero will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstAxis *ax;                  /* Pointer to Axis object */
   int axis_p;                   /* Permuted axis index */
   int result;                   /* Result to be returned */

/* Check the global error status. */
   if ( !astOK ) return 0;

/* Initialise. */
   result = 0;

/* Validate and permute the axis index. */
   axis_p = astValidateAxis( this, axis, 1, "astGetAsTime" );

/* Obtain a pointer to the required Axis object. */
   ax = astGetAxis( this, axis );

/* Determine if the AsTime attribute has been set for the axis (this can only
   be the case if the object is a SkyAxis). If the attribute is set, obtain its
   value. */
   if ( astIsASkyAxis( ax ) && astTestAxisAsTime( ax ) ) {
      result = astGetAxisAsTime( ax );

/* Otherwise, check which (permuted) axis is involved. Only the first
   (longitude) axis may be displayed as a time by default. */
   } else if ( axis_p == 0 ) {

/* Test for those coordinate systems which normally have their longitude axes
   displayed as times (basically, those that involve the Earth's equator) and
   set the returned value appropriately. */
      result = IsEquatorial( astGetSystem( this ), status );
   }

/* Annul the Axis object pointer. */
   ax = astAnnul( ax );

/* Return the result. */
   return result;
}

static const char *GetAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     GetAttrib

*  Purpose:
*     Get the value of a specified attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     const char *GetAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the protected astGetAttrib
*     method inherited from the Frame class).

*  Description:
*     This function returns a pointer to the value of a specified
*     attribute for a SkyFrame, formatted as a character string.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     attrib
*        Pointer to a null-terminated string containing the name of
*        the attribute whose value is required. This name should be in
*        lower case, with all white space removed.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     - Pointer to a null-terminated string containing the attribute
*     value.

*  Notes:
*     - This function uses one-based axis numbering so that it is
*     suitable for external (public) use.
*     - The returned string pointer may point at memory allocated
*     within the SkyFrame, or at static memory. The contents of the
*     string may be over-written or the pointer may become invalid
*     following a further invocation of the same function or any
*     modification of the SkyFrame. A copy of the string should
*     therefore be made if necessary.
*     - A NULL pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Declare the thread specific global data */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   const char *cval;             /* Pointer to character attribute value */
   const char *result;           /* Pointer value to return */
   double dval;                  /* Floating point attribute value */
   double equinox;               /* Equinox attribute value (as MJD) */
   int as_time;                  /* AsTime attribute value */
   int axis;                     /* SkyFrame axis number */
   int ival;                     /* Integer attribute value */
   int len;                      /* Length of attrib string */
   int nc;                       /* No. characters read by astSscanf */
   int neglon;                   /* Display long. values as [-pi,pi]? */

/* Initialise. */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Get a pointer to the structure holding thread-specific global data. */
   astGET_GLOBALS(this_object);

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_object;

/* Obtain the length of the attrib string. */
   len = strlen( attrib );

/* Compare "attrib" with each recognised attribute name in turn,
   obtaining the value of the required attribute. If necessary, write
   the value into "getattrib_buff" as a null-terminated string in an appropriate
   format.  Set "result" to point at the result string. */

/* AsTime(axis). */
/* ------------- */
   if ( nc = 0,
        ( 1 == astSscanf( attrib, "astime(%d)%n", &axis, &nc ) )
        && ( nc >= len ) ) {
      as_time = astGetAsTime( this, axis - 1 );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", as_time );
         result = getattrib_buff;
      }

/* Equinox. */
/* -------- */
   } else if ( !strcmp( attrib, "equinox" ) ) {
      equinox = astGetEquinox( this );
      if ( astOK ) {

/* Format the Equinox as decimal years. Use a Besselian epoch if it
   will be less than 1984.0, otherwise use a Julian epoch. */
         result = astFmtDecimalYr( ( equinox < palEpj2d( 1984.0 ) ) ?
                                   palEpb( equinox ) : palEpj( equinox ),
                                   AST__DBL_DIG );
      }

/* IsLatAxis(axis) */
/* --------------- */
   } else if ( nc = 0,
               ( 1 == astSscanf( attrib, "islataxis(%d)%n", &axis, &nc ) )
               && ( nc >= len ) ) {
      ival = astGetIsLatAxis( this, axis - 1 );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

/* IsLonAxis(axis) */
/* --------------- */
   } else if ( nc = 0,
               ( 1 == astSscanf( attrib, "islonaxis(%d)%n", &axis, &nc ) )
               && ( nc >= len ) ) {
      ival = astGetIsLonAxis( this, axis - 1 );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

/* LatAxis */
/* -------- */
   } else if ( !strcmp( attrib, "lataxis" ) ) {
      axis = astGetLatAxis( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", axis + 1 );
         result = getattrib_buff;
      }

/* LonAxis */
/* -------- */
   } else if ( !strcmp( attrib, "lonaxis" ) ) {
      axis = astGetLonAxis( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", axis + 1 );
         result = getattrib_buff;
      }

/* NegLon */
/* ------ */
   } else if ( !strcmp( attrib, "neglon" ) ) {
      neglon = astGetNegLon( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", neglon );
         result = getattrib_buff;
      }

/* SkyTol */
/* ------ */
   } else if ( !strcmp( attrib, "skytol" ) ) {
      dval = astGetSkyTol( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%.*g", AST__DBL_DIG, dval );
         result = getattrib_buff;
      }

/* Projection. */
/* ----------- */
   } else if ( !strcmp( attrib, "projection" ) ) {
      result = astGetProjection( this );

/* SkyRef. */
/* ------- */
   } else if ( !strcmp( attrib, "skyref" ) ) {
      cval = astFormat( this, 0, astGetSkyRef( this, 0 ) );
      if ( astOK ) {
         nc = sprintf( getattrib_buff, "%s, ", cval );
         cval = astFormat( this, 1, astGetSkyRef( this, 1 ) );
         if ( astOK ) {
            (void) sprintf( getattrib_buff + nc, "%s", cval );
            result = getattrib_buff;
         }
      }

/* SkyRef(axis). */
/* ------------- */
   } else if ( nc = 0,
        ( 1 == astSscanf( attrib, "skyref(%d)%n", &axis, &nc ) )
        && ( nc >= len ) ) {
      dval = astGetSkyRef( this, axis - 1 );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%.*g", AST__DBL_DIG, dval );
         result = getattrib_buff;
      }

/* SkyRefP. */
/* -------- */
   } else if ( !strcmp( attrib, "skyrefp" ) ) {
      cval = astFormat( this, 0, astGetSkyRefP( this, 0 ) );
      if ( astOK ) {
         nc = sprintf( getattrib_buff, "%s, ", cval );
         cval = astFormat( this, 1, astGetSkyRefP( this, 1 ) );
         if ( astOK ) {
            (void) sprintf( getattrib_buff + nc, "%s", cval );
            result = getattrib_buff;
         }
      }

/* SkyRefP(axis). */
/* -------------- */
   } else if ( nc = 0,
        ( 1 == astSscanf( attrib, "skyrefp(%d)%n", &axis, &nc ) )
        && ( nc >= len ) ) {
      dval = astGetSkyRefP( this, axis - 1 );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%.*g", AST__DBL_DIG, dval );
         result = getattrib_buff;
      }

/* SkyRefIs. */
/* --------- */
   } else if ( !strcmp( attrib, "skyrefis" ) ) {
      ival = astGetSkyRefIs( this );
      if ( astOK ) {
         if( ival == AST__POLE_REF ){
            result = POLE_STRING;
         } else if( ival == AST__IGNORED_REF ){
            result = IGNORED_STRING;
         } else {
            result = ORIGIN_STRING;
         }
      }

/* AlignOffset */
/* ----------- */
   } else if ( !strcmp( attrib, "alignoffset" ) ) {
      ival = astGetAlignOffset( this );
      if ( astOK ) {
         (void) sprintf( getattrib_buff, "%d", ival );
         result = getattrib_buff;
      }

/* If the attribute name was not recognised, pass it on to the parent
   method for further interpretation. */
   } else {
      result = (*parent_getattrib)( this_object, attrib, status );
   }

/* Return the result. */
   return result;
}

static int GetDirection( AstFrame *this_frame, int axis, int *status ) {
/*
*  Name:
*     GetDirection

*  Purpose:
*     Obtain the value of the Direction attribute for a SkyFrame axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int GetDirection( AstFrame *this_frame, int axis, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetDirection method inherited
*     from the Frame class).

*  Description:
*     This function returns the value of the Direction attribute for a
*     specified axis of a SkyFrame. A suitable default value is returned if no
*     Direction value has previously been set.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Axis index (zero-based) identifying the axis for which information is
*        required.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Zero or one, depending on the Direction attribute value.

*  Notes:
*     -  A value of zero will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   int axis_p;                   /* Permuted axis index */
   int result;                   /* Result to be returned */

/* Check the global error status. */
   if ( !astOK ) return 0;

/* Initialise. */
   result = 0;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Validate and permute the axis index. */
   axis_p = astValidateAxis( this, axis, 1, "astGetDirection" );

/* Check if a value has been set for the axis Direction attribute. If so,
   obtain its value. */
   if ( astTestDirection( this, axis ) ) {
      result = (*parent_getdirection)( this_frame, axis, status );

/* Otherwise, we will generate a default Direction value. Currently all
   systems supported by SkyFrame are left handed, so all longitude axes
   are reversed and all latitude axes are not reversed. */
   } else if( axis_p == 0 ) {
      result = 0;
   } else {
      result = 1;
   }

/* If an error occurred, clear the result value. */
   if ( !astOK ) result = 0;

/* Return the result. */
   return result;
}

static double GetBottom( AstFrame *this_frame, int axis, int *status ) {
/*
*  Name:
*     GetBottom

*  Purpose:
*     Obtain the value of the Bottom attribute for a SkyFrame axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     double GetBottom( AstFrame *this_frame, int axis, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetBottom method inherited
*     from the Frame class).

*  Description:
*     This function returns the value of the Bottom attribute for a
*     specified axis of a SkyFrame. A suitable default value is returned if no
*     value has previously been set.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Axis index (zero-based) identifying the axis for which information is
*        required.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The Bottom value to use.

*  Notes:
*     -  A value of -DBL_MAX will be returned if this function is invoked
*     with the global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   int axis_p;                   /* Permuted axis index */
   double result;                /* Result to be returned */

/* Check the global error status. */
   if ( !astOK ) return -DBL_MAX;

/* Initialise. */
   result = -DBL_MAX;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Validate and permute the axis index. */
   axis_p = astValidateAxis( this, axis, 1, "astGetBottom" );

/* Check if a value has been set for the axis Bottom attribute. If so,
   obtain its value. */
   if ( astTestBottom( this, axis ) ) {
      result = (*parent_getbottom)( this_frame, axis, status );

/* Otherwise, we will return a default Bottom value appropriate to the
   SkyFrame class. */
   } else {

/* If it is a latitude axis return -pi/2. */
      if( axis_p == 1 ) {
         result = -piby2;

/* If it is a longitude value return -DBL_MAX (i.e. no lower limit). */
      } else {
         result = -DBL_MAX;
      }
   }

/* If an error occurred, clear the result value. */
   if ( !astOK ) result = -DBL_MAX;

/* Return the result. */
   return result;
}

static double GetCachedLAST( AstSkyFrame *this, double epoch, double obslon,
                             double obslat, double obsalt, double dut1,
                             double dtai, int *status ) {
/*
*  Name:
*     GetCachedLAST

*  Purpose:
*     Attempt to get a LAST value from the cache in the SkyFrame vtab.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     double GetCachedLAST( AstSkyFrame *this, double epoch, double obslon,
*                           double obslat, double obsalt, double dut1,
*                           double dtai, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function searches the static cache of LAST values held in the
*     SkyFrame virtual function table for a value that corresponds to the
*     supplied parameter values. If one is found, it is returned.
*     Otherwise AST__BAD is found.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     epoch
*        The epoch (MJD).
*     obslon
*        Observatory geodetic longitude (radians)
*     obslat
*        Observatory geodetic latitude (radians)
*     obsalt
*        Observatory geodetic altitude (metres)
*     dut1
*        The UT1-UTC correction, in seconds.
*     dtai
*        The TAI-UTC correction, in seconds.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*    The Local Apparent Sidereal Time, in radians.

*  Notes:
*     -  A value of AST__BAD will be returned if this function is invoked
*     with the global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   astDECLARE_GLOBALS
   AstSkyLastTable *table;
   double *ep;
   double *lp;
   double dep;
   double result;
   int ihi;
   int ilo;
   int itable;
   int itest;

/* Get a pointer to the structure holding thread-specific global data. */
   astGET_GLOBALS(this);

/* Initialise */
   result = AST__BAD;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Wait until the table is not being written to by any thread. This also
   prevents a thread from writing to the table whilst we are reading it. */
   LOCK_RLOCK1

/* Loop round every LAST table held in the vtab. Each table refers to a
   different observatory position and/or DUT1 and/or DTAI value. */
   for( itable = 0; itable < nlast_tables; itable++ ) {
      table = last_tables[ itable ];

/* See if the table refers to the given position, dut1 and dtai value, allowing
   some small tolerance. */
      if( fabs( table->obslat - obslat ) < 2.0E-7 &&
          fabs( table->obslon - obslon ) < 2.0E-7 &&
          fabs( table->obsalt - obsalt ) < 1.0 &&
          fabs( table->dut1 - dut1 ) < 1.0E-5 &&
          EQUAL( table->dtai, dtai, 1.0E-5 ) ) {

/* Get pointers to the array of epoch and corresponding LAST values in
   the table. */
         ep = table->epoch;
         lp = table->last;

/* The values in the epoch array are monotonic increasing. Do a binary chop
   within the table's epoch array to find the earliest entry that has a
   value equal to or greater than the supplied epoch value. */
         ilo = 0;
         ihi = table->nentry - 1;
         while( ihi > ilo ) {
            itest = ( ilo + ihi )/2;
            if( ep[ itest ] >= epoch ) {
               ihi = itest;
            } else {
               ilo = itest + 1;
            }
         }

/* Get the difference between the epoch at the entry selected above and
   the requested epoch. */
         dep = ep[ ilo ] - epoch;

/* If the entry selected above is the first entry in the table, it can
   only be used if it is within 0.001 second of the requested epoch. */
         if( ilo == 0 ) {
            if( fabs( dep ) < 0.001/86400.0 ) {
               result = lp[ 0 ];
            }

/* If the list of epoch values contained no value that was greater than
   the supplied epoch value, then we can use the last entry if
   it is no more than 0.001 second away from the requested epoch. */
         } else if( dep <= 0.0 ) {
            if( fabs( dep ) < 0.001/86400.0 ) {
                result = lp[ ilo ];
            }


/* Otherwise, see if the entry selected above is sufficiently close to
   its lower neighbour (i.e. closer than 0.4 days) to allow a reasonably
   accurate LAST value to be determined by interpolation. */
         } else if( ep[ ilo ] - ep[ ilo - 1 ] < 0.4 ) {
            ep += ilo - 1;
            lp += ilo - 1;
            result = *lp + ( epoch - *ep )*( lp[ 1 ] - *lp )/( ep[ 1 ] - *ep );

/* If the neighbouring point is too far away for interpolation to be
   reliable, then we can only use the point if it is within 0.001 seconds of
   the requested epoch. */
         } else if( fabs( dep ) < 0.001/86400.0 ) {
            result = lp[ ilo ];
         }

/* If we have found the right table, we do not need to look at any other
   tables, so leave the table loop. */
         break;
      }
   }

/* Indicate that threads may now write to the table. */
   UNLOCK_RWLOCK1

/* Ensure the returned value is within the range 0 - 2.PI. */
   if( result != AST__BAD ) {
      while( result > 2*AST__DPI ) result -= 2*AST__DPI;
      while( result < 0.0 ) result += 2*AST__DPI;
   }

/* Return the required LAST value. */
   return result;
}

static double GetEpoch( AstFrame *this_frame, int *status ) {
/*
*  Name:
*     GetEpoch

*  Purpose:
*     Obtain the value of the Epoch attribute for a SkyFrame axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     double GetEpoch( AstFrame *this_frame, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetEpoch method inherited
*     from the Frame class).

*  Description:
*     This function returns the value of the Epoch attribute for a
*     SkyFrame. A suitable default value is returned if no value has
*     previously been set.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The Epoch value to use.

*  Notes:
*     -  A value of AST__BAD will be returned if this function is invoked
*     with the global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   AstSystemType system;         /* System attribute */
   double result;                /* Result to be returned */

/* Check the global error status. */
   if ( !astOK ) return AST__BAD;

/* Initialise. */
   result = AST__BAD;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Check if a value has been set for the Epoch attribute. If so, obtain its
   value. */
   if ( astTestEpoch( this ) ) {
      result = (*parent_getepoch)( this_frame, status );

/* Otherwise, we will return a default Epoch value appropriate to the
   SkyFrame class. */
   } else {

/* Provide a default value of B1950.0 or J2000.0 depending on the System
   setting. */
      system = astGetSystem( this );
      if( system  == AST__FK4 || system == AST__FK4_NO_E ) {
         result = palEpb2d( 1950.0 );
      } else {
         result = palEpj2d( 2000.0 );
      }
   }

/* If an error occurred, clear the result value. */
   if ( !astOK ) result = AST__BAD;

/* Return the result. */
   return result;
}

static double GetTop( AstFrame *this_frame, int axis, int *status ) {
/*
*  Name:
*     GetTop

*  Purpose:
*     Obtain the value of the Top attribute for a SkyFrame axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     double GetTop( AstFrame *this_frame, int axis, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetTop method inherited
*     from the Frame class).

*  Description:
*     This function returns the value of the Top attribute for a
*     specified axis of a SkyFrame. A suitable default value is returned if no
*     value has previously been set.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Axis index (zero-based) identifying the axis for which information is
*        required.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The Top value to use.

*  Notes:
*     -  A value of DBL_MAX will be returned if this function is invoked
*     with the global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   int axis_p;                   /* Permuted axis index */
   double result;                /* Result to be returned */

/* Check the global error status. */
   if ( !astOK ) return DBL_MAX;

/* Initialise. */
   result = DBL_MAX;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Validate and permute the axis index. */
   axis_p = astValidateAxis( this, axis, 1, "astGetTop" );

/* Check if a value has been set for the axis Top attribute. If so,
   obtain its value. */
   if ( astTestTop( this, axis ) ) {
      result = (*parent_gettop)( this_frame, axis, status );

/* Otherwise, we will return a default Top value appropriate to the
   SkyFrame class. */
   } else {

/* If this is a latitude axis return pi/2. */
      if( axis_p == 1 ) {
         result = piby2;

/* If it is a longitude value return DBL_MAX (i.e. no upper limit). */
      } else {
         result = DBL_MAX;
      }
   }

/* If an error occurred, clear the result value. */
   if ( !astOK ) result = DBL_MAX;

/* Return the result. */
   return result;
}

static const char *GetDomain( AstFrame *this_frame, int *status ) {
/*
*  Name:
*     GetDomain

*  Purpose:
*     Obtain a pointer to the Domain attribute string for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     const char *GetDomain( AstFrame *this, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetDomain protected
*     method inherited from the Frame class).

*  Description:
*    This function returns a pointer to the Domain attribute string
*    for a SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to a constant null-terminated string containing the
*     Domain value.

*  Notes:
*     - The returned pointer or the string it refers to may become
*     invalid following further invocation of this function or
*     modification of the SkyFrame.
*     - A NULL pointer is returned if this function is invoked with
*     the global error status set or if it should fail for any reason.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to SkyFrame structure */
   const char *result;           /* Pointer value to return */

/* Initialise. */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* If a Domain attribute string has been set, invoke the parent method
   to obtain a pointer to it. */
   if ( astTestDomain( this ) ) {
      result = (*parent_getdomain)( this_frame, status );

/* Otherwise, provide a pointer to a suitable default string. */
   } else {
      result = "SKY";
   }

/* Return the result. */
   return result;
}

static const char *GetFormat( AstFrame *this_frame, int axis, int *status ) {
/*
*  Name:
*     GetFormat

*  Purpose:
*     Access the Format string for a SkyFrame axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     const char *GetFormat( AstFrame *this, int axis )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetFormat method inherited
*     from the Frame class).

*  Description:
*     This function returns a pointer to the Format string for a specified axis
*     of a SkyFrame. A pointer to a suitable default string is returned if no
*     Format value has previously been set.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Axis index (zero-based) identifying the axis for which information is
*        required.

*  Returned Value:
*     Pointer to a null-terminated character string containing the requested
*     information.

*  Notes:
*     -  A NULL pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Declare the thread specific global data */
   AstAxis *ax;                  /* Pointer to Axis object */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   const char *result;           /* Pointer value to return */
   int as_time;                  /* Value of AsTime attribute */
   int as_time_set;              /* AsTime attribute set? */
   int axis_p;                   /* Permuted axis index */
   int digits;                   /* Number of digits of precision */
   int is_latitude;              /* Value of IsLatitude attribute */
   int is_latitude_set;          /* IsLatitude attribute set? */
   int parent;                   /* Use parent method? */
   int skyaxis;                  /* Is the Axis a SkyAxis? */

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Get a pointer to the structure holding thread-specific global data. */
   astGET_GLOBALS(this_frame);

/* Initialise. */
   result = NULL;
   as_time_set = 0;
   is_latitude = 0;
   is_latitude_set = 0;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Validate and permute the axis index. */
   axis_p = astValidateAxis( this, axis, 1, "astGetFormat" );

/* Obtain a pointer to the Axis structure. */
   ax = astGetAxis( this, axis );

/* Decide whether the parent astGetFormat method is able to provide the format
   string we require. We must use the parent method if the Axis is not a
   SkyAxis, because the syntax of the Format string would become unsuitable
   for use with the Axis astFormat method if it was over-ridden here. We also
   use the parent method to return a Format pointer if an explicit Format
   string has already been set. */
   skyaxis = astIsASkyAxis( ax );
   parent = ( !skyaxis || (*parent_testformat)( this_frame, axis, status ) );

/* If neither of the above conditions apply, we may still be able to use the
   parent method if the Axis (actually a SkyAxis) is required to behave as a
   normal RA or DEC axis, as this is the standard behaviour provided by the
   SkyAxis class. Examine the SkyFrame's System attribute to determine if its
   axes should behave in this way. */
   if ( !parent ) parent = IsEquatorial( astGetSystem( this ), status );

/* If using the parent method and dealing with a SkyAxis, determine the
   settings of any attributes that may affect the Format string. */
   if ( astOK ) {
      if ( parent ) {
         if ( skyaxis ) {
            as_time_set = astTestAsTime( this, axis );
            is_latitude_set = astTestAxisIsLatitude( ax );
            is_latitude = astGetAxisIsLatitude( ax );

/* If no AsTime value is set for the axis, set a temporary value as determined
   by the astGetAsTime method, which supplies suitable defaults for the axes of
   a SkyFrame. */
            if ( !as_time_set ) {
               astSetAsTime( this, axis, astGetAsTime( this, axis ) );
	    }

/* Temporarly over-ride the SkyAxis IsLatitude attribute, regardless of its
   setting, as the second axis of a SkyFrame is always the latitude axis. */
            astSetAxisIsLatitude( ax, axis_p == 1 );
         }

/* Invoke the parent method to obtain a pointer to the Format string. */
         result = (*parent_getformat)( this_frame, axis, status );

/* Now restore the attributes that were temporarily over-ridden above to their
   previous states. */
         if ( skyaxis ) {
            if ( !as_time_set ) astClearAsTime( this, axis );
            if ( !is_latitude_set ) {
               astClearAxisIsLatitude( ax );
            } else {
               astSetAxisIsLatitude( ax, is_latitude );
            }
         }

/* If the parent method is unsuitable, we must construct a new Format string
   here. This affects only those coordinate systems whose axes do not behave
   like standard RA/DEC axes (e.g. typically ecliptic, galactic and
   supergalactic coordinates). For these, we format values as decimal degrees
   (or decimal hours if the AsTime attribute is set). Obtain the AsTime
   value. */
      } else {
         as_time = astGetAsTime( this, axis );

/* Determine how many digits of precision to use. This is obtained from the
   SkyAxis Digits attribute (if set), otherwise from the Digits attribute of
   the enclosing SkyFrame. */
         if ( astTestAxisDigits( ax ) ) {
            digits = astGetAxisDigits( ax );
         } else {
            digits = astGetDigits( this );
         }

/* If a time format is required, generate a Format string using decimal
   hours. */
         if ( astOK ) {
            if ( as_time ) {
               if ( digits <= 2 ) {
                  result = "h";
               } else {
                  (void) sprintf( getformat_buff, "h.%d", digits - 2 );
                  result = getformat_buff;
               }

/* Otherwise use decimal degrees. */
            } else {
               if ( digits <= 3 ) {
                  result = "d";
               } else {
                  (void) sprintf( getformat_buff, "d.%d", digits - 3 );
                  result = getformat_buff;
               }
	    }
	 }
      }
   }

/* Annul the Axis pointer. */
   ax = astAnnul( ax );

/* If an error occurred, clear the returned value. */
   if ( !astOK ) result = NULL;

/* Return the result. */
   return result;
}

static const char *GetLabel( AstFrame *this, int axis, int *status ) {
/*
*  Name:
*     GetLabel

*  Purpose:
*     Access the Label string for a SkyFrame axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     const char *GetLabel( AstFrame *this, int axis, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetLabel method inherited
*     from the Frame class).

*  Description:
*     This function returns a pointer to the Label string for a specified axis
*     of a SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Axis index (zero-based) identifying the axis for which information is
*        required.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to a constant null-terminated character string containing the
*     requested information.

*  Notes:
*     -  A NULL pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Declare the thread specific global data */
   AstSystemType system;         /* Code identifying type of sky coordinates */
   const char *result;           /* Pointer to label string */
   int axis_p;                   /* Permuted axis index */

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Get a pointer to the structure holding thread-specific global data. */
   astGET_GLOBALS(this);

/* Initialise. */
   result = NULL;

/* Validate and permute the axis index. */
   axis_p = astValidateAxis( this, axis, 1, "astGetLabel" );

/* Check if a value has been set for the required axis label string. If so,
   invoke the parent astGetLabel method to obtain a pointer to it. */
   if ( astTestLabel( this, axis ) ) {
      result = (*parent_getlabel)( this, axis, status );

/* Otherwise, identify the sky coordinate system described by the SkyFrame. */
   } else {
      system = astGetSystem( this );

/* If OK, supply a pointer to a suitable default label string. */
      if ( astOK ) {

/* Equatorial coordinate systems. */
         if ( IsEquatorial( system, status ) ) {
	    result = ( axis_p == 0 ) ? "Right ascension" :
	                               "Declination";

/* Ecliptic coordinates. */
         } else if ( system == AST__ECLIPTIC ) {
	    result = ( axis_p == 0 ) ? "Ecliptic longitude" :
                                       "Ecliptic latitude";

/* Helio-ecliptic coordinates. */
         } else if ( system == AST__HELIOECLIPTIC ) {
	    result = ( axis_p == 0 ) ? "Helio-ecliptic longitude" :
                                       "Helio-ecliptic latitude";

/* AzEl coordinates. */
         } else if ( system == AST__AZEL ) {
	    result = ( axis_p == 0 ) ? "Azimuth" :
                                       "Elevation";

/* Galactic coordinates. */
         } else if ( system == AST__GALACTIC ) {
	    result = ( axis_p == 0 ) ? "Galactic longitude" :
                                       "Galactic latitude";

/* Supergalactic coordinates. */
         } else if ( system == AST__SUPERGALACTIC ) {
	    result = ( axis_p == 0 ) ? "Supergalactic longitude" :
                                       "Supergalactic latitude";

/* Unknown spherical coordinates. */
         } else if ( system == AST__UNKNOWN ) {
	    result = ( axis_p == 0 ) ? "Longitude" :
                                       "Latitude";

/* Report an error if the coordinate system was not recognised. */
         } else {
	    astError( AST__SCSIN, "astGetLabel(%s): Corrupt %s contains "
		      "invalid sky coordinate system identification code "
		      "(%d).", status, astGetClass( this ), astGetClass( this ),
		      (int) system );
         }

/* If the SkyRef attribute has a set value, append " offset" to the label. */
         if( astGetSkyRefIs( this ) != AST__IGNORED_REF &&
             ( astTestSkyRef( this, 0 ) || astTestSkyRef( this, 1 ) ) ) {
            sprintf( getlabel_buff, "%s offset", result );
            result = getlabel_buff;
         }
      }
   }

/* Return the result. */
   return result;
}

static double GetDiurab( AstSkyFrame *this, int *status ) {
/*
*  Name:
*     GetDiurab

*  Purpose:
*     Return the magnitude of the diurnal aberration vector.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     double GetDiurab( AstSkyFrame *this, int *status )

*  Class Membership:
*     SkyFrame member function

*  Description:
*     This function returns the  magnitude of the diurnal aberration
*     vector.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The magnitude of the diurnal aberration vector.

*/

/* Local Variables: */
   double uau;
   double vau;

/* Check the global error status. */
   if ( !astOK ) return AST__BAD;

/* If the magnitude of the diurnal aberration vector has not yet been
   found, find it now, and cache it in the SkyFrame structure. The cached
   value will be reset to AST__BAD if the ObsLat attribute value is
   changed. This code is transliterated from SLA_AOPPA. */
   if( this->diurab == AST__BAD ) {
      palGeoc( astGetObsLat( this ), astGetObsAlt( this ), &uau, &vau );
      this->diurab = 2*AST__DPI*uau*SOLSID/C;
   }

/* Return the result, */
   return this->diurab;
}

static double GetLAST( AstSkyFrame *this, int *status ) {
/*
*  Name:
*     GetLAST

*  Purpose:
*     Return the Local Apparent Sidereal Time for the SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     double GetLAST( AstSkyFrame *this, int *status )

*  Class Membership:
*     SkyFrame member function

*  Description:
*     This function returns the Local Apparent Sidereal Time (LAST)
*     at the moment intime given by the Epoch attribute of the SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The LAST value.

*/

/* Local Variables: */
   double dlast;                 /* Change in LAST */
   double epoch;                 /* Epoch (TDB MJD) */
   double last1;                 /* LAST at end of current interval */
   double result;                /* Result value to return */
   double delta_epoch;           /* Change in Epoch */

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* The "last" component of the SkyFrame structure holds the accurate
   LAST at the moment in time given by the "eplast" (a TDB MJD) component
   of the SkyFrame structure. If the current value of the SkyFrame's
   Epoch attribute is not much different to "eplast" (within 0.4 of a day),
   then the returned LAST value is the "last" value plus the difference
   between Epoch and "eplast", converted from solar to sidereal time,
   then converted to radians. This approximation seems to be good to less
   than a tenth of an arcsecond. If this approximation cannot be used,
   invoke SetLast to recalculate the accurate LAST and update the "eplast"
   and "last" values. */
   if( this->eplast != AST__BAD ) {
      epoch = astGetEpoch( this );
      delta_epoch = epoch - this->eplast;

/* Return the current LAST value if the epoch has not changed. */
      if( delta_epoch == 0.0 ) {
         result = this->last;

/* If the previous full calculation of LAST was less than 0.4 days ago,
   use a linear approximation to LAST. */
      } else if( fabs( delta_epoch ) < 0.4 ) {

/* If we do not know the ratio of sidereal to solar time at the current
   epoch, calculate it now. This involves a full calculation of LAST at
   the end of the current linear approximation period. */
         if( this->klast == AST__BAD ) {
            last1 = CalcLAST( this, this->eplast + 0.4, astGetObsLon( this ),
                              astGetObsLat( this ), astGetObsAlt( this ),
                              astGetDut1( this ), astGetDtai( this ), status );

/* Ensure the change in LAST is positive so that we get a positive ratio. */
            dlast = last1 - this->last;
            if( dlast < 0.0 ) dlast += 2*AST__DPI;
            this->klast = 2*AST__DPI*0.4/dlast;
         }

/* Now use the ratio of solar to sidereal time to calculate the linear
   approximation to LAST. */
         result = this->last + 2*AST__DPI*delta_epoch/this->klast;

/* If the last accurate calculation of LAST was more than 0.4 days ago,
   do a full accurate calculation. */
      } else {
         SetLast( this, status );
         result = this->last;
      }

/* If we have not yet done an accurate calculation of LAST, do one now. */
   } else {
      SetLast( this, status );
      result = this->last;
   }

/* Return the result, */
   return result;
}

static int GetIsLatAxis( AstSkyFrame *this, int axis, int *status ) {
/*
*  Name:
*     GetIsLatAxis

*  Purpose:
*     Test an axis to see if it is a latitude axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int GetIsLatAxis( AstSkyFrame *this, int axis, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function tests if a SkyFrame axis is a celestial latitude axis.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Zero based axis index.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     One if the supplied axis is a celestial latitude axis, and zero
*     otherwise.

*  Notes:
*     -  A value of zero will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   int result;                   /* Result to be returned */

/* Check the global error status. */
   if ( !astOK ) return 0;

/* Get the index of the latitude axis and compare to the supplied axis
   index. */
   result = ( axis == astGetLatAxis( this ) );

/* Return the result. */
   return astOK ? result : 0;

}

static int GetIsLonAxis( AstSkyFrame *this, int axis, int *status ) {
/*
*  Name:
*     GetIsLonAxis

*  Purpose:
*     Test an axis to see if it is a longitude axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int GetIsLonAxis( AstSkyFrame *this, int axis, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function tests if a SkyFrame axis is a celestial longitude axis.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Zero based axis index.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     One if the supplied axis is a celestial longitude axis, and zero
*     otherwise.

*  Notes:
*     -  A value of zero will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   int result;                   /* Result to be returned */

/* Check the global error status. */
   if ( !astOK ) return 0;

/* Get the index of the longitude axis and compare to the supplied axis
   index. */
   result = ( axis == astGetLonAxis( this ) );

/* Return the result. */
   return astOK ? result : 0;

}

static int GetLatAxis( AstSkyFrame *this, int *status ) {
/*
*  Name:
*     GetLatAxis

*  Purpose:
*     Obtain the index of the latitude axis of a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int GetLatAxis( AstSkyFrame *this, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function returns the zero-based index of the latitude axis of
*     a SkyFrame, taking into account any current axis permutation.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The zero based axis index (0 or 1) of the latitude axis.

*  Notes:
*     -  A value of one will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   int result;                   /* Result to be returned */
   const int *perm;              /* Axis permutation array */

/* Check the global error status. */
   if ( !astOK ) return 1;

/* Initialise. */
   result = 1;

/* Obtain a pointer to the SkyFrame's axis permutation array. */
   perm = astGetPerm( this );
   if ( astOK ) {

/* Identify the latitude axis. */
      if( perm[ 0 ] == 1 ) {
         result = 0;
      } else {
         result = 1;
      }

   }

/* Return the result. */
   return result;

}

static int GetLonAxis( AstSkyFrame *this, int *status ) {
/*
*  Name:
*     GetLonAxis

*  Purpose:
*     Obtain the index of the longitude axis of a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int GetLonAxis( AstSkyFrame *this, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function returns the zero-based index of the longitude axis of
*     a SkyFrame, taking into account any current axis permutation.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The zero based axis index (0 or 1) of the longitude axis.

*  Notes:
*     -  A value of zero will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   int result;                   /* Result to be returned */
   const int *perm;              /* Axis permutation array */

/* Check the global error status. */
   if ( !astOK ) return 0;

/* Initialise. */
   result = 0;

/* Obtain a pointer to the SkyFrame's axis permutation array. */
   perm = astGetPerm( this );
   if ( astOK ) {

/* Identify the longitude axis. */
      if( perm[ 0 ] == 0 ) {
         result = 0;
      } else {
         result = 1;
      }

   }

/* Return the result. */
   return result;

}

static double GetSkyRefP( AstSkyFrame *this, int axis, int *status ) {
/*
*  Name:
*     GetSkyRefP

*  Purpose:
*     Obtain the value of the SkyRefP attribute for a SkyFrame axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     double GetSkyRefP( AstSkyFrame *this, int axis, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function returns the value of the SkyRefP attribute for a
*     SkyFrame axis, providing suitable defaults.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Axis index (zero-based) identifying the axis for which information is
*        required.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The SkyRefP value to be used.

*  Notes:
*     -  A value of zero will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   double result;                /* Returned value */
   int axis_p;                   /* Permuted axis index */

/* Initialise. */
   result = 0.0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Validate and permute the axis index. */
   axis_p = astValidateAxis( this, axis, 1, "astGetSkyRefP" );

/* Check if a value has been set for the required axis. If so, return it. */
   if( this->skyrefp[ axis_p ] != AST__BAD ) {
      result = this->skyrefp[ axis_p ];

/* Otherwise, return the default value */
   } else {

/* The default longitude value is always zero. */
      if( axis_p == 0 ) {
         result= 0.0;

/* The default latitude value depends on SkyRef. The usual default is the
   north pole. The exception to this is if the SkyRef attribute identifies
   either the north or the south pole, in which case the origin is used as
   the default. Allow some tolerance. */
      } else if( fabs( cos( this->skyref[ 1 ] ) ) > 1.0E-10 ) {
         result = pi/2;

      } else {
         result = 0.0;
      }
   }

/* Return the result. */
   return result;
}

static const char *GetSymbol( AstFrame *this, int axis, int *status ) {
/*
*  Name:
*     GetSymbol

*  Purpose:
*     Obtain a pointer to the Symbol string for a SkyFrame axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     const char *GetSymbol( AstFrame *this, int axis, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetSymbol method inherited
*     from the Frame class).

*  Description:
*     This function returns a pointer to the Symbol string for a specified axis
*     of a SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Axis index (zero-based) identifying the axis for which information is
*        required.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to a constant null-terminated character string containing the
*     requested information.

*  Notes:
*     -  A NULL pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Declare the thread specific global data */
   AstSystemType system;         /* Code identifying type of sky coordinates */
   const char *result;           /* Pointer to symbol string */
   int axis_p;                   /* Permuted axis index */

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Get a pointer to the structure holding thread-specific global data. */
   astGET_GLOBALS(this);

/* Initialise. */
   result = NULL;

/* Validate and permute the axis index. */
   axis_p = astValidateAxis( this, axis, 1, "astGetSymbol" );

/* Check if a value has been set for the required axis symbol string. If so,
   invoke the parent astGetSymbol method to obtain a pointer to it. */
   if ( astTestSymbol( this, axis ) ) {
      result = (*parent_getsymbol)( this, axis, status );

/* Otherwise, identify the sky coordinate system described by the SkyFrame. */
   } else {
      system = astGetSystem( this );

/* If OK, supply a pointer to a suitable default Symbol string. */
      if ( astOK ) {

/* Equatorial coordinate systems. */
         if ( IsEquatorial( system, status ) ) {
	    result = ( axis_p == 0 ) ? "RA" : "Dec";

/* Ecliptic coordinates. */
         } else if ( system == AST__ECLIPTIC ) {
	    result = ( axis_p == 0 ) ? "Lambda" : "Beta";

/* Helio-ecliptic coordinates. */
         } else if ( system == AST__HELIOECLIPTIC ) {
	    result = ( axis_p == 0 ) ? "Lambda" : "Beta";

/* AzEl coordinates. */
         } else if ( system == AST__AZEL ) {
	    result = ( axis_p == 0 ) ? "Az" : "El";

/* Galactic coordinates. */
         } else if ( system == AST__GALACTIC ) {
	    result = ( axis_p == 0 ) ? "l" : "b";

/* Supergalactic coordinates. */
         } else if ( system == AST__SUPERGALACTIC ) {
	    result = ( axis_p == 0 ) ? "SGL" : "SGB";

/* Unknown spherical coordinates. */
         } else if ( system == AST__UNKNOWN ) {
	    result = ( axis_p == 0 ) ? "Lon" : "Lat";

/* Report an error if the coordinate system was not recognised. */
         } else {
	    astError( AST__SCSIN, "astGetSymbol(%s): Corrupt %s contains "
		      "invalid sky coordinate system identification code "
		      "(%d).", status, astGetClass( this ), astGetClass( this ),
		      (int) system );
         }

/* If the SkyRef attribute had a set value, prepend "D" (for "delta") to the
   Symbol. */
         if( astGetSkyRefIs( this ) != AST__IGNORED_REF &&
             ( astTestSkyRef( this, 0 ) || astTestSkyRef( this, 1 ) ) ) {
            sprintf( getsymbol_buff, "D%s", result );
            result = getsymbol_buff;
         }
      }
   }

/* Return the result. */
   return result;
}

static AstSystemType GetAlignSystem( AstFrame *this_frame, int *status ) {
/*
*  Name:
*     GetAlignSystem

*  Purpose:
*     Obtain the AlignSystem attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     AstSystemType GetAlignSystem( AstFrame *this_frame, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetAlignSystem protected
*     method inherited from the Frame class).

*  Description:
*     This function returns the AlignSystem attribute for a SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The AlignSystem value.

*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to SkyFrame structure */
   AstSystemType result;         /* Value to return */

/* Initialise. */
   result = AST__BADSYSTEM;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* If a AlignSystem attribute has been set, invoke the parent method to obtain
   it. */
   if ( astTestAlignSystem( this ) ) {
      result = (*parent_getalignsystem)( this_frame, status );

/* Otherwise, provide a suitable default. */
   } else {
      result = AST__ICRS;
   }

/* Return the result. */
   return result;
}

static AstSystemType GetSystem( AstFrame *this_frame, int *status ) {
/*
*  Name:
*     GetSystem

*  Purpose:
*     Obtain the System attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     AstSystemType GetSystem( AstFrame *this_frame, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetSystem protected
*     method inherited from the Frame class).

*  Description:
*     This function returns the System attribute for a SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The System value.

*  Notes:
*     - AST__BADSYSTEM is returned if this function is invoked with
*     the global error status set or if it should fail for any reason.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to SkyFrame structure */
   AstSystemType result;         /* Value to return */

/* Initialise. */
   result = AST__BADSYSTEM;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* If a System attribute has been set, invoke the parent method to obtain
   it. */
   if ( astTestSystem( this ) ) {
      result = (*parent_getsystem)( this_frame, status );

/* Otherwise, provide a suitable default. */
   } else {
      result = AST__ICRS;
   }

/* Return the result. */
   return result;
}

static const char *GetTitle( AstFrame *this_frame, int *status ) {
/*
*  Name:
*     GetTitle

*  Purpose:
*     Obtain a pointer to the Title string for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     const char *GetTitle( AstFrame *this_frame, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetTitle method inherited
*     from the Frame class).

*  Description:
*     This function returns a pointer to the Title string for a SkyFrame.
*     A pointer to a suitable default string is returned if no Title value has
*     previously been set.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to a null-terminated character string containing the requested
*     information.

*  Notes:
*     -  A NULL pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Declare the thread specific global data */
   AstSkyFrame *this;            /* Pointer to SkyFrame structure */
   AstSystemType system;         /* Code identifying type of sky coordinates */
   const char *extra;            /* Pointer to extra information */
   const char *p;                /* Character pointer */
   const char *projection;       /* Pointer to sky projection description */
   const char *result;           /* Pointer to result string */
   const char *word;             /* Pointer to critical word */
   double epoch;                 /* Value of Epoch attribute */
   double equinox;               /* Value of Equinox attribute */
   int lextra;                   /* Length of extra information */
   int offset;                   /* Using offset coordinate system? */
   int pos;                      /* Buffer position to enter text */

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Get a pointer to the structure holding thread-specific global data. */
   astGET_GLOBALS(this_frame);

/* Initialise. */
   result = NULL;
   pos = 0;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* See if a Title string has been set. If so, use the parent astGetTitle
   method to obtain a pointer to it. */
   if ( astTestTitle( this ) ) {
      result = (*parent_gettitle)( this_frame, status );

/* Otherwise, we will generate a default Title string. Obtain the values of the
   SkyFrame's attributes that determine what this string will be. */
   } else {
      epoch = astGetEpoch( this );
      equinox = astGetEquinox( this );
      projection = astGetProjection( this );
      system = astGetSystem( this );

/* See if an offset coordinate system is being used.*/
      offset = ( astTestSkyRef( this, 0 ) || astTestSkyRef( this, 1 ) )
               && ( astGetSkyRefIs( this ) != AST__IGNORED_REF );

/* Use this to determine if the word "coordinates" or "offsets" should be
   used.*/
      word = offset ? "offsets" : "coordinates";

/* Classify the coordinate system type and create an appropriate Title
   string.  (Note that when invoking the astFmtDecimalYr function we must
   use a separate sprintf on each occasion so as not to over-write its
   internal buffer before the result string has been used.) */
      if ( astOK ) {
         result = gettitle_buff;
         switch ( system ) {

/* FK4 equatorial coordinates. */
/* --------------------------- */
/* Display the Equinox and Epoch values. */
	 case AST__FK4:
	    pos = sprintf( gettitle_buff, "FK4 equatorial %s", word );
            if( astTestEquinox( this ) || astGetUseDefs( this ) ) {
   	       pos += sprintf( gettitle_buff + pos, "; mean equinox B%s",
		               astFmtDecimalYr( palEpb( equinox ), 9 ) );
            }
            if( astTestEpoch( this ) || astGetUseDefs( this ) ) {
               pos += sprintf( gettitle_buff + pos,
                               "; epoch B%s", astFmtDecimalYr( palEpb( epoch ), 9 ) );
            }
	    break;

/* FK4 coordinates with no E-terms of aberration. */
/* ---------------------------------------------- */
/* Display the Equinox and Epoch values. */
	 case AST__FK4_NO_E:
	    pos = sprintf( gettitle_buff, "FK4 equatorial %s; no E-terms", word );
            if( astTestEquinox( this ) || astGetUseDefs( this ) ) {
   	       pos += sprintf( gettitle_buff + pos, "; mean equinox B%s",
		               astFmtDecimalYr( palEpb( equinox ), 9 ) );
            }
            if( astTestEpoch( this ) || astGetUseDefs( this ) ) {
               pos += sprintf( gettitle_buff + pos,
                               "; epoch B%s", astFmtDecimalYr( palEpb( epoch ), 9 ) );
            }
	    break;

/* FK5 equatorial coordinates. */
/* --------------------------- */
/* Display only the Equinox value. */
	 case AST__FK5:
	    pos = sprintf( gettitle_buff, "FK5 equatorial %s", word );
            if( astTestEquinox( this ) || astGetUseDefs( this ) ) {
   	       pos += sprintf( gettitle_buff + pos, "; mean equinox J%s",
		               astFmtDecimalYr( palEpj( equinox ), 9 ) );
            }
	    break;

/* J2000 equatorial coordinates. */
/* ----------------------------- */
/* Based on the dynamically determined mean equator and equinox of J2000,
   rather than on a model such as FK4 or FK5 */
	 case AST__J2000:
	    pos = sprintf( gettitle_buff, "J2000 equatorial %s", word );
	    break;

/* ICRS coordinates. */
/* ----------------- */
/* ICRS is only like RA/Dec by co-incidence, it is not really an
   equatorial system by definition. */
	 case AST__ICRS:
	    pos = sprintf( gettitle_buff, "ICRS %s", word );
	    break;

/* AzEl coordinates. */
/* ----------------- */
	 case AST__AZEL:
	    pos = sprintf( gettitle_buff, "Horizon (Azimuth/Elevation) %s", word );
	    break;

/* Geocentric apparent equatorial coordinates. */
/* ------------------------------------------ */
/* Display only the Epoch value. */
	 case AST__GAPPT:
	    pos = sprintf( gettitle_buff,
                           "Geocentric apparent equatorial %s; "
                           "; epoch J%s", word, astFmtDecimalYr( palEpj( epoch ), 9 ) );
	    break;

/* Ecliptic coordinates. */
/* --------------------- */
/* Display only the Equinox value. */
	 case AST__ECLIPTIC:
	    pos = sprintf( gettitle_buff, "Ecliptic %s", word );
            if( astTestEquinox( this ) || astGetUseDefs( this ) ) {
   	       pos += sprintf( gettitle_buff + pos, "; mean equinox J%s",
		               astFmtDecimalYr( palEpj( equinox ), 9 ) );
            }
	    break;

/* Helio-ecliptic coordinates. */
/* --------------------------- */
/* Display only the Epoch value (equinox is fixed). */
	 case AST__HELIOECLIPTIC:
	    pos = sprintf( gettitle_buff, "Helio-ecliptic %s; mean equinox J2000", word );
            if( astTestEpoch( this ) || astGetUseDefs( this ) ) {
   	       pos += sprintf( gettitle_buff + pos, "; epoch J%s",
		               astFmtDecimalYr( palEpj( epoch ), 9 ) );
            }
	    break;

/* Galactic coordinates. */
/* --------------------- */
/* Do not display an Equinox or Epoch value. */
	 case AST__GALACTIC:
	    pos = sprintf( gettitle_buff, "IAU (1958) galactic %s", word );
	    break;

/* Supergalactic coordinates. */
/* -------------------------- */
/* Do not display an Equinox or Epoch value. */
	 case AST__SUPERGALACTIC:
	    pos = sprintf( gettitle_buff,
                           "De Vaucouleurs supergalactic %s", word );
	    break;

/* Unknown coordinates. */
/* -------------------------- */
	 case AST__UNKNOWN:
	    pos = sprintf( gettitle_buff,
                           "Spherical %s", word );
	    break;

/* Report an error if the coordinate system was not recognised. */
	 default:
	    astError( AST__SCSIN, "astGetTitle(%s): Corrupt %s contains "
		      "invalid sky coordinate system identification code "
		      "(%d).", status, astGetClass( this ), astGetClass( this ),
		     (int) system );
	    break;
         }

/* If OK, we add either a description of the sky projection, or (if used)
   a description of the origin or pole of the offset coordinate system.
   We include only one of these two strings in order to keep the length
   of the title down to a reasonable value.*/
         if ( astOK ) {

/* If the SkyRef attribute has set values, create a description of the offset
   coordinate system. */
            if( offset ){
               word = ( astGetSkyRefIs( this ) == AST__POLE_REF )?"pole":"origin";
               lextra = sprintf( gettitle_buff2, "%s at %s ", word,
                           astFormat( this, 0, astGetSkyRef( this, 0 ) ) );
               lextra += sprintf( gettitle_buff2 + lextra, "%s",
                           astFormat( this, 1, astGetSkyRef( this, 1 ) ) );
               extra = gettitle_buff2;

/* Otherwise, get the sky projection description. */
            } else {
               extra = projection;

/* Determine the length of the extra information, after removing trailing
   white space. */
               for ( lextra = (int) strlen( extra ); lextra > 0; lextra-- ) {
                  if ( !isspace( extra[ lextra - 1 ] ) ) break;
               }
            }

/* If non-blank extra information is available, append it to the title string,
   checking that the end of the buffer is not over-run. */
            if ( lextra ) {
               p = "; ";
               while ( ( pos < AST__SKYFRAME_GETTITLE_BUFF_LEN ) && *p ) gettitle_buff[ pos++ ] = *p++;
               p = extra;
               while ( ( pos < AST__SKYFRAME_GETTITLE_BUFF_LEN ) &&
                       ( p < ( extra + lextra ) ) ) gettitle_buff[ pos++ ] = *p++;
               if( extra == projection ) {
                  p = " projection";
                  while ( ( pos < AST__SKYFRAME_GETTITLE_BUFF_LEN ) && *p ) gettitle_buff[ pos++ ] = *p++;
               }
               gettitle_buff[ pos ] = '\0';
            }
         }
      }
   }

/* If an error occurred, clear the returned pointer value. */
   if ( !astOK ) result = NULL;

/* Return the result. */
   return result;
}

static const char *GetUnit( AstFrame *this_frame, int axis, int *status ) {
/*
*  Name:
*     GetUnit

*  Purpose:
*     Obtain a pointer to the Unit string for a SkyFrame's axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     const char *GetUnit( AstFrame *this_frame, int axis )

*  Class Membership:
*     SkyFrame member function (over-rides the astGetUnit method inherited
*     from the Frame class).

*  Description:
*     This function returns a pointer to the Unit string for a specified axis
*     of a SkyFrame. If the Unit attribute has not been set for the axis, a
*     pointer to a suitable default string is returned instead. This string may
*     depend on the value of the Format attribute for the axis and, in turn, on
*     the type of sky coordinate system that the SkyFrame describes.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        The number of the axis (zero-based) for which information is required.

*  Returned Value:
*     A pointer to a null-terminated string containing the Unit value.

*  Notes:
*     -  A NULL pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   const char *result;           /* Pointer value to return */
   int format_set;               /* Format attribute set? */

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Validate the axis index. */
   (void) astValidateAxis( this, axis, 1, "astGetUnit" );

/* The Unit value may depend on the value of the Format attribute, so
   determine if a Format value has been set for the axis and set a
   temporary value if it has not. Use the GetFormat member function
   for this class together with member functions inherited from the
   parent class (rather than using the object's methods directly)
   because if any of these methods have been over-ridden by a derived
   class the Format string syntax may no longer be compatible with
   this class. */
   format_set = (*parent_testformat)( this_frame, axis, status );
   if ( !format_set ) {
      (*parent_setformat)( this_frame, axis, GetFormat( this_frame, axis, status ), status );
   }

/* Use the parent GetUnit method to return a pointer to the required Unit
   string. */
   result = (*parent_getunit)( this_frame, axis, status );

/* If necessary, clear any temporary Format value that was set above. */
   if ( !format_set ) (*parent_clearformat)( this_frame, axis, status );

/* If an error occurred, clear the returned value. */
   if ( !astOK ) result = NULL;

/* Return the result. */
   return result;
}

void astInitSkyFrameVtab_(  AstSkyFrameVtab *vtab, const char *name, int *status ) {
/*
*+
*  Name:
*     astInitSkyFrameVtab

*  Purpose:
*     Initialise a virtual function table for a SkyFrame.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "skyframe.h"
*     void astInitSkyFrameVtab( AstSkyFrameVtab *vtab, const char *name )

*  Class Membership:
*     SkyFrame vtab initialiser.

*  Description:
*     This function initialises the component of a virtual function
*     table which is used by the SkyFrame class.

*  Parameters:
*     vtab
*        Pointer to the virtual function table. The components used by
*        all ancestral classes will be initialised if they have not already
*        been initialised.
*     name
*        Pointer to a constant null-terminated character string which contains
*        the name of the class to which the virtual function table belongs (it
*        is this pointer value that will subsequently be returned by the Object
*        astClass function).
*-
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstFrameVtab *frame;          /* Pointer to Frame component of Vtab */
   AstObjectVtab *object;        /* Pointer to Object component of Vtab */
   int stat;                     /* SLALIB status */

/* Check the local error status. */
   if ( !astOK ) return;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Initialize the component of the virtual function table used by the
   parent class. */
   astInitFrameVtab( (AstFrameVtab *) vtab, name );

/* Store a unique "magic" value in the virtual function table. This
   will be used (by astIsASkyFrame) to determine if an object belongs
   to this class.  We can conveniently use the address of the (static)
   class_check variable to generate this unique value. */
   vtab->id.check = &class_check;
   vtab->id.parent = &(((AstFrameVtab *) vtab)->id);

/* Initialise member function pointers. */
/* ------------------------------------ */
/* Store pointers to the member functions (implemented here) that
   provide virtual methods for this class. */
   vtab->ClearAsTime = ClearAsTime;
   vtab->ClearEquinox = ClearEquinox;
   vtab->ClearNegLon = ClearNegLon;
   vtab->ClearProjection = ClearProjection;
   vtab->GetAsTime = GetAsTime;
   vtab->GetEquinox = GetEquinox;
   vtab->GetNegLon = GetNegLon;
   vtab->GetIsLatAxis = GetIsLatAxis;
   vtab->GetIsLonAxis = GetIsLonAxis;
   vtab->GetLatAxis = GetLatAxis;
   vtab->GetLonAxis = GetLonAxis;
   vtab->GetProjection = GetProjection;
   vtab->SetAsTime = SetAsTime;
   vtab->SetEquinox = SetEquinox;
   vtab->SetNegLon = SetNegLon;
   vtab->SetProjection = SetProjection;
   vtab->SkyOffsetMap = SkyOffsetMap;
   vtab->TestAsTime = TestAsTime;
   vtab->TestEquinox = TestEquinox;
   vtab->TestNegLon = TestNegLon;
   vtab->TestProjection = TestProjection;

   vtab->TestSkyTol = TestSkyTol;
   vtab->SetSkyTol = SetSkyTol;
   vtab->GetSkyTol = GetSkyTol;
   vtab->ClearSkyTol = ClearSkyTol;

   vtab->TestSkyRef = TestSkyRef;
   vtab->SetSkyRef = SetSkyRef;
   vtab->GetSkyRef = GetSkyRef;
   vtab->ClearSkyRef = ClearSkyRef;

   vtab->TestSkyRefP = TestSkyRefP;
   vtab->SetSkyRefP = SetSkyRefP;
   vtab->GetSkyRefP = GetSkyRefP;
   vtab->ClearSkyRefP = ClearSkyRefP;

   vtab->TestSkyRefIs = TestSkyRefIs;
   vtab->SetSkyRefIs = SetSkyRefIs;
   vtab->GetSkyRefIs = GetSkyRefIs;
   vtab->ClearSkyRefIs = ClearSkyRefIs;

   vtab->TestAlignOffset = TestAlignOffset;
   vtab->SetAlignOffset = SetAlignOffset;
   vtab->GetAlignOffset = GetAlignOffset;
   vtab->ClearAlignOffset = ClearAlignOffset;

/* Save the inherited pointers to methods that will be extended, and
   replace them with pointers to the new member functions. */
   object = (AstObjectVtab *) vtab;
   frame = (AstFrameVtab *) vtab;
   parent_getobjsize = object->GetObjSize;
   object->GetObjSize = GetObjSize;

   parent_clearattrib = object->ClearAttrib;
   object->ClearAttrib = ClearAttrib;
   parent_getattrib = object->GetAttrib;
   object->GetAttrib = GetAttrib;
   parent_setattrib = object->SetAttrib;
   object->SetAttrib = SetAttrib;
   parent_testattrib = object->TestAttrib;
   object->TestAttrib = TestAttrib;

   parent_gettop = frame->GetTop;
   frame->GetTop = GetTop;

   parent_normalpoints = frame->NormalPoints;
   frame->NormalPoints = NormalPoints;

   parent_setobsalt = frame->SetObsAlt;
   frame->SetObsAlt = SetObsAlt;

   parent_setobslat = frame->SetObsLat;
   frame->SetObsLat = SetObsLat;

   parent_setobslon = frame->SetObsLon;
   frame->SetObsLon = SetObsLon;

   parent_clearobslon = frame->ClearObsLon;
   frame->ClearObsLon = ClearObsLon;

   parent_clearobsalt = frame->ClearObsAlt;
   frame->ClearObsAlt = ClearObsAlt;

   parent_clearobslat = frame->ClearObsLat;
   frame->ClearObsLat = ClearObsLat;

   parent_getbottom = frame->GetBottom;
   frame->GetBottom = GetBottom;

   parent_getepoch = frame->GetEpoch;
   frame->GetEpoch = GetEpoch;

   parent_format = frame->Format;
   frame->Format = Format;
   parent_gap = frame->Gap;
   frame->Gap = Gap;
   parent_getdirection = frame->GetDirection;
   frame->GetDirection = GetDirection;
   parent_getdomain = frame->GetDomain;
   frame->GetDomain = GetDomain;
   parent_getsystem = frame->GetSystem;
   frame->GetSystem = GetSystem;
   parent_setsystem = frame->SetSystem;
   frame->SetSystem = SetSystem;
   parent_clearsystem = frame->ClearSystem;
   frame->ClearSystem = ClearSystem;
   parent_getalignsystem = frame->GetAlignSystem;
   frame->GetAlignSystem = GetAlignSystem;
   parent_getformat = frame->GetFormat;
   frame->GetFormat = GetFormat;
   parent_getlabel = frame->GetLabel;
   frame->GetLabel = GetLabel;
   parent_getsymbol = frame->GetSymbol;
   frame->GetSymbol = GetSymbol;
   parent_gettitle = frame->GetTitle;
   frame->GetTitle = GetTitle;
   parent_getunit = frame->GetUnit;
   frame->GetUnit = GetUnit;
   parent_match = frame->Match;
   frame->Match = Match;
   parent_overlay = frame->Overlay;
   frame->Overlay = Overlay;
   parent_subframe = frame->SubFrame;
   frame->SubFrame = SubFrame;
   parent_unformat = frame->Unformat;
   frame->Unformat = Unformat;

   parent_setdtai = frame->SetDtai;
   frame->SetDtai = SetDtai;
   parent_setdut1 = frame->SetDut1;
   frame->SetDut1 = SetDut1;

   parent_cleardtai = frame->ClearDtai;
   frame->ClearDtai = ClearDtai;
   parent_cleardut1 = frame->ClearDut1;
   frame->ClearDut1 = ClearDut1;

/* Store replacement pointers for methods which will be over-ridden by new
   member functions implemented here. */
   frame->Angle = Angle;
   frame->Distance = Distance;
   frame->FrameGrid = FrameGrid;
   frame->Intersect = Intersect;
   frame->Norm = Norm;
   frame->NormBox = NormBox;
   frame->Resolve = Resolve;
   frame->ResolvePoints = ResolvePoints;
   frame->Offset = Offset;
   frame->Offset2 = Offset2;
   frame->ValidateSystem = ValidateSystem;
   frame->SystemString = SystemString;
   frame->SystemCode = SystemCode;
   frame->LineDef = LineDef;
   frame->LineContains = LineContains;
   frame->LineCrossing = LineCrossing;
   frame->LineOffset = LineOffset;
   frame->GetActiveUnit = GetActiveUnit;
   frame->TestActiveUnit = TestActiveUnit;
   frame->MatchAxesX = MatchAxesX;

/* Store pointers to inherited methods that will be invoked explicitly
   by this class. */
   parent_clearformat = frame->ClearFormat;
   parent_setformat = frame->SetFormat;
   parent_testformat = frame->TestFormat;

/* Declare the copy constructor, destructor and class dump
   function. */
   astSetCopy( vtab, Copy );
   astSetDelete( vtab, Delete );
   astSetDump( vtab, Dump, "SkyFrame",
               "Description of celestial coordinate system" );

/* Initialize constants for converting between hours, degrees and
   radians, etc.. */
   LOCK_MUTEX2
   palDtf2r( 1, 0, 0.0, &hr2rad, &stat );
   palDaf2r( 1, 0, 0.0, &deg2rad, &stat );
   palDaf2r( 180, 0, 0.0, &pi, &stat );
   piby2 = 0.5*pi;
   UNLOCK_MUTEX2

/* If we have just initialised the vtab for the current class, indicate
   that the vtab is now initialised, and store a pointer to the class
   identifier in the base "object" level of the vtab. */
   if( vtab == &class_vtab ) {
      class_init = 1;
      astSetVtabClassIdentifier( vtab, &(vtab->id) );
   }
}

static void Intersect( AstFrame *this_frame, const double a1[2],
                       const double a2[2], const double b1[2],
                       const double b2[2], double cross[2],
                       int *status ) {
/*
*  Name:
*     Intersect

*  Purpose:
*     Find the point of intersection between two geodesic curves.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void Intersect( AstFrame *this_frame, const double a1[2],
*                      const double a2[2], const double b1[2],
*                      const double b2[2], double cross[2],
*                      int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astIntersect method
*     inherited from the Frame class).

*  Description:
*     This function finds the coordinate values at the point of
*     intersection between two geodesic curves. Each curve is specified
*     by two points on the curve.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     a1
*        An array of double, with one element for each Frame axis.
*        This should contain the coordinates of a point on the first
*        geodesic curve.
*     a2
*        An array of double, with one element for each Frame axis.
*        This should contain the coordinates of a second point on the
*        first geodesic curve.
*     b1
*        An array of double, with one element for each Frame axis.
*        This should contain the coordinates of a point on the second
*        geodesic curve.
*     b2
*        An array of double, with one element for each Frame axis.
*        This should contain the coordinates of a second point on
*        the second geodesic curve.
*     cross
*        An array of double, with one element for each Frame axis
*        in which the coordinates of the required intersection
*        point will be returned. These will be AST__BAD if the curves do
*        not intersect.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     - The geodesic curve used by this function is the path of
*     shortest distance between two points, as defined by the
*     astDistance function.
*     - This function will return "bad" coordinate values (AST__BAD)
*     if any of the input coordinates has this value.
*     - For SkyFrames each curve will be a great circle, and in general
*     each pair of curves will intersect at two diametrically opposite
*     points on the sky. The returned position is the one which is
*     closest to point "a1".
*/

/* Local Variables: */
   AstSkyFrame *this;          /* Pointer to the SkyFrame structure */
   const int *perm;            /* Pointer to axis permutation array */
   double aa1[ 2 ];            /* Permuted coordinates for a1 */
   double aa2[ 2 ];            /* Permuted coordinates for a2 */
   double bb1[ 2 ];            /* Permuted coordinates for b1 */
   double bb2[ 2 ];            /* Permuted coordinates for b2 */
   double cc[ 2 ];             /* Permuted coords at intersection */
   double d1;                  /* Cos(distance from a1 to vp) */
   double d2;                  /* Cos(distance from a1 to -vp) */
   double na[ 3 ];             /* Normal to the a1/a2 great circle */
   double nb[ 3 ];             /* Normal to the b1/b2 great circle */
   double va1[ 3 ];            /* Vector pointing at a1 */
   double va2[ 3 ];            /* Vector pointing at a2 */
   double vb1[ 3 ];            /* Vector pointing at b1 */
   double vb2[ 3 ];            /* Vector pointing at b2 */
   double vmod;                /* Length of "vp" */
   double vp[ 3 ];             /* Vector pointing at the intersection */
   double vpn[ 3 ];            /* Normalised vp */
   int iaxis;                  /* Axis index */

/* Initialise. */
   cross[ 0 ] = AST__BAD;
   cross[ 1 ] = AST__BAD;

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Check that all supplied values are OK. */
   if ( ( a1[ 0 ] != AST__BAD ) && ( a1[ 1 ] != AST__BAD ) &&
        ( a2[ 0 ] != AST__BAD ) && ( a2[ 1 ] != AST__BAD ) &&
        ( b1[ 0 ] != AST__BAD ) && ( b1[ 1 ] != AST__BAD ) &&
        ( b2[ 0 ] != AST__BAD ) && ( b2[ 1 ] != AST__BAD ) ) {

/* Obtain a pointer to the SkyFrame's axis permutation array. */
      perm = astGetPerm( this );
      if ( astOK ) {

/* Apply the axis permutation array to obtain the coordinates of
   the points in the required (longitude,latitude) order. */
         for( iaxis = 0; iaxis < 2; iaxis++ ) {
            aa1[ perm[ iaxis ] ] = a1[ iaxis ];
            aa2[ perm[ iaxis ] ] = a2[ iaxis ];
            bb1[ perm[ iaxis ] ] = b1[ iaxis ];
            bb2[ perm[ iaxis ] ] = b2[ iaxis ];
         }

/* Convert each (lon,lat) pair into a unit length 3-vector. */
         palDcs2c( aa1[ 0 ], aa1[ 1 ], va1 );
         palDcs2c( aa2[ 0 ], aa2[ 1 ], va2 );
         palDcs2c( bb1[ 0 ], bb1[ 1 ], vb1 );
         palDcs2c( bb2[ 0 ], bb2[ 1 ], vb2 );

/* Find the normal vectors to the two great cicles. */
         palDvxv( va1, va2, na );
         palDvxv( vb1, vb2, nb );

/* The cross product of the two normal vectors points to one of the
   two diametrically opposite intersections. */
         palDvxv( na, nb, vp );

/* Normalise the "vp" vector, also obtaining its original modulus. */
         palDvn( vp, vpn, &vmod );
         if( vmod != 0.0 ) {

/* We want the intersection which is closest to "a1". The dot product
   gives the cos(distance) between two positions. So find the dot
   product between "a1" and "vpn", and then between "a1" and the point
   diametrically opposite "vpn". */
            d1 = palDvdv( vpn, va1 );
            vpn[ 0 ] = -vpn[ 0 ];
            vpn[ 1 ] = -vpn[ 1 ];
            vpn[ 2 ] = -vpn[ 2 ];
            d2 = palDvdv( vpn, va1 );

/* Revert to "vpn" if it is closer to "a1". */
            if( d1 > d2 ) {
               vpn[ 0 ] = -vpn[ 0 ];
               vpn[ 1 ] = -vpn[ 1 ];
               vpn[ 2 ] = -vpn[ 2 ];
            }

/* Convert the vector back into a (lon,lat) pair, and put the longitude
   into the range 0 to 2.pi. */
            palDcc2s( vpn, cc, cc + 1 );
            *cc = palDranrm( *cc );

/* Permute the result coordinates to undo the effect of the SkyFrame
   axis permutation array. */
            cross[ 0 ] = cc[ perm[ 0 ] ];
            cross[ 1 ] = cc[ perm[ 1 ] ];
         }
      }
   }
}

static int IsEquatorial( AstSystemType system, int *status ) {
/*
*  Name:
*     IsEquatorial

*  Purpose:
*     Test for an equatorial sky coordinate system.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int IsEquatorial( AstSystemType system, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function returns a boolean value to indicate if a sky coordinate
*     system is equatorial.

*  Parameters:
*     system
*        Code to identify the sky coordinate system.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Non-zero if the sky coordinate system is equatorial, otherwise zero.

*  Notes:
*     -  A value of zero is returned if this function is invoked with the
*     global error status set or if it should fail for any reason.
*/

/* Local Variables: */
   int result;                   /* Result value to return */

/* Check the global error status. */
   if ( !astOK ) return 0;

/* Determine if the sky coordinate system is an equatorial one. Note,
   ICRS is not equatorial by definition, but is included here because it
   is normally treated as an equatorial system in terms of the axis
   labels, formats, etc. */
   result = ( ( system == AST__FK4 ) ||
              ( system == AST__FK4_NO_E ) ||
              ( system == AST__ICRS ) ||
              ( system == AST__FK5 ) ||
              ( system == AST__J2000 ) ||
              ( system == AST__GAPPT ) );

/* Return the result. */
   return result;
}

static int LineContains( AstFrame *this, AstLineDef *l, int def, double *point, int *status ) {
/*
*  Name:
*     LineContains

*  Purpose:
*     Determine if a line contains a point.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int LineContains( AstFrame *this, AstLineDef *l, int def, double *point, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the protected astLineContains
*     method inherited from the Frame class).

*  Description:
*     This function determines if the supplied point is on the supplied
*     line within the supplied Frame. The start point of the line is
*     considered to be within the line, but the end point is not. The tests
*     are that the point of closest approach of the line to the point should
*     be between the start and end, and that the distance from the point to
*     the point of closest aproach should be less than 1.0E-7 of the length
*     of the line.

*  Parameters:
*     this
*        Pointer to the Frame.
*     l
*        Pointer to the structure defining the line.
*     def
*        Should be set non-zero if the "point" array was created by a
*        call to astLineCrossing (in which case it may contain extra
*        information following the axis values),and zero otherwise.
*     point
*        Point to an array containing the axis values of the point to be
*        tested, possibly followed by extra cached information (see "def").
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A non-zero value is returned if the line contains the point.

*  Notes:
*     - The pointer supplied for "l" should have been created using the
*     astLineDef method. These structures contained cached information about
*     the lines which improve the efficiency of this method when many
*     repeated calls are made. An error will be reported if the structure
*     does not refer to the Frame specified by "this".
*     - Zero will be returned if this function is invoked with the global
*     error status set, or if it should fail for any reason.
*-
*/

/* Local Variables: */
   SkyLineDef *sl;               /* SkyLine information */
   const int *perm;              /* Pointer to axis permutation array */
   double *b;                    /* Pointer to Cartesian coords array */
   double bb[3];                 /* Buffer for Cartesian coords */
   double p1[2];                 /* Buffer for Spherical coords */
   double t1, t2;
   int result;                   /* Returned value */

/* Initialise */
   result =0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Check that the line refers to the supplied Frame. */
   if( l->frame != this ) {
      astError( AST__INTER, "astLineContains(%s): The supplied line does "
                "not relate to the supplied %s (AST internal programming "
                "error).", status, astGetClass( this ), astGetClass( this ) );

/* Check the axis values are good */
   } else if( point[ 0 ] != AST__BAD && point[ 1 ] != AST__BAD ){

/* Get a pointer to an array holding the corresponding Cartesian coords. */
      if( def ) {
         b = point + 2;

      } else {
         perm = astGetPerm( this );
         if ( perm ) {
            p1[ perm[ 0 ] ] = point[ 0 ];
            p1[ perm[ 1 ] ] = point[ 1 ];
            palDcs2c( p1[ 0 ], p1[ 1 ], bb );
            b = bb;
         } else {
            b = NULL;
         }
      }

/* Recast the supplied AstLineDef into a SkyLineDef to get the different
   structure (we know from the above check on the Frame that it is safe to
   do this). */
      sl = (SkyLineDef *) l;

/* Check that the point of closest approach of the line to the point is
   within the limits of the line. */
      if( LineIncludes( sl, b, NULL, status ) ){

/* Check that the point is 90 degrees away from the pole of the great
   circle containing the line. */
        t1 = palDvdv( sl->q, b );
        t2 = 1.0E-7*sl->length;
        if( t2 < 1.0E-10 ) t2 = 1.0E-10;
        if( fabs( t1 ) <= t2 ) result = 1;
     }
   }

/* Return the result. */
   return result;
}

static int LineCrossing( AstFrame *this, AstLineDef *l1, AstLineDef *l2,
                         double cross[5], double *dist, int *status ) {
/*
*  Name:
*     LineCrossing

*  Purpose:
*     Determine if two lines cross.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int LineCrossing( AstFrame *this, AstLineDef *l1, AstLineDef *l2,
*                       double cross[5], double *dist, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the protected astLineCrossing
*     method inherited from the Frame class).

*  Description:
*     This function determines if the two suplied line segments cross,
*     and if so returns the axis values at the point where they cross.
*     A flag is also returned indicating if the crossing point occurs
*     within the length of both line segments, or outside one or both of
*     the line segments.

*  Parameters:
*     this
*        Pointer to the Frame.
*     l1
*        Pointer to the structure defining the first line.
*     l2
*        Pointer to the structure defining the second line.
*     cross
*        Pointer to an array in which to return the axis values at the
*        crossing. If NULL is supplied the axis values are not returned. If the
*        lines are parallel (i.e. do not cross) then AST__BAD is returned for
*        all axis values. Note usable axis values are returned even if the
*        lines cross outside the segment defined by the start and end points
*        of the lines. The order of axes in the returned array will take
*        account of the current axis permutation array if appropriate. Note,
*        sub-classes such as SkyFrame may append extra values to the end
*        of the basic frame axis values.
*     dist
*        Pointer to a double in which to return the distance from the
*        start of line "l1" to the crossing point. May be NULL if not
*        required. Returned equal to zero if an error occurs.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A non-zero value is returned if the lines cross at a point which is
*     within the [start,end) segment of both lines. If the crossing point
*     is outside this segment on either line, or if the lines are parallel,
*     zero is returned. Note, the start point is considered to be inside
*     the length of the segment, but the end point is outside.

*  Notes:
*     - The pointers supplied for "l1" and "l2" should have been created
*     using the astLineDef method. These structures contained cached
*     information about the lines which improve the efficiency of this method
*     when many repeated calls are made. An error will be reported if
*     either structure does not refer to the Frame specified by "this".
*     - Zero will be returned if this function is invoked with the global
*     error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   SkyLineDef *sl1;              /* SkyLine information for line 1 */
   SkyLineDef *sl2;              /* SkyLine information for line 2 */
   const int *perm;              /* Pointer to axis permutation array */
   double crossing[5];           /* Local array to use if no array supplied */
   double *b;                    /* Pointer to Cartesian coords */
   double len;                   /* Vector length */
   double p[ 2 ];                /* Temporary (lon,lat) pair */
   double temp[ 3 ];             /* Temporary vector */
   int result;                   /* Returned value */

/* Initialise */
   result = 0;
   if( dist ) *dist = 0.0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Use a local array for storage if no array was supplied. */
   if( !cross ) cross = crossing;

/* Check that both lines refer to the supplied Frame. */
   if( l1->frame != this ) {
      astError( AST__INTER, "astLineCrossing(%s): First supplied line does "
                "not relate to the supplied %s (AST internal programming "
                "error).", status, astGetClass( this ), astGetClass( this ) );

   } else if( l2->frame != this ) {
      astError( AST__INTER, "astLineCrossing(%s): Second supplied line does "
                "not relate to the supplied %s (AST internal programming "
                "error).", status, astGetClass( this ), astGetClass( this ) );

/* Recast the supplied AstLineDefs into a SkyLineDefs to get the different
   structure (we know from the above check on the Frame that it is safe to
   do this). */
   } else {
      sl1 = (SkyLineDef *) l1;
      sl2 = (SkyLineDef *) l2;

/* Point of intersection of the two great circles is perpendicular to the
   pole vectors of both great circles. Put the Cartesian coords in elements
   2 to 4 of the returned array. */
      palDvxv( sl1->q, sl2->q, temp );
      b = cross + 2;
      palDvn( temp, b, &len );

/* See if this point is within the length of both arcs. If so return it. */
      if( LineIncludes( sl2, b, NULL, status ) && LineIncludes( sl1, b, dist, status ) ) {
         result = 1;

/* If not, see if the negated b vector is within the length of both arcs.
   If so return it. Otherwise, we return zero. */
      } else {
         b[ 0 ] *= -1.0;
         b[ 1 ] *= -1.0;
         b[ 2 ] *= -1.0;
         if( LineIncludes( sl2, b, NULL, status ) && LineIncludes( sl1, b, dist, status ) ) result = 1;
      }

/* Store the spherical coords in elements 0 and 1 of the returned array. */
      palDcc2s( b, p, p + 1 );

/* Permute the spherical axis value into the order used by the SkyFrame. */
      perm = astGetPerm( this );
      if( perm ){
         cross[ 0 ] = p[ perm[ 0 ] ];
         cross[ 1 ] = p[ perm[ 1 ] ];
      }
   }

/* If an error occurred, return 0. */
   if( !astOK ) {
      result = 0;
      if( dist ) *dist = 0.0;
   }

/* Return the result. */
   return result;
}

static AstLineDef *LineDef( AstFrame *this, const double start[2],
                            const double end[2], int *status ) {
/*
*  Name:
*     LineDef

*  Purpose:
*     Creates a structure describing a line segment in a 2D Frame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     AstLineDef *LineDef( AstFrame *this, const double start[2],
*                          const double end[2], int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the protected astLineDef
*     method inherited from the Frame class).

*  Description:
*     This function creates a structure containing information describing a
*     given line segment within the supplied 2D Frame. This may include
*     information which allows other methods such as astLineCrossing to
*     function more efficiently. Thus the returned structure acts as a
*     cache to store intermediate values used by these other methods.

*  Parameters:
*     this
*        Pointer to the Frame. Must have 2 axes.
*     start
*        An array of 2 doubles marking the start of the line segment.
*     end
*        An array of 2 doubles marking the end of the line segment.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to the memory structure containing the description of the
*     line. This structure should be freed using astFree when no longer
*     needed. A NULL pointer is returned (without error) if any of the
*     supplied axis values are AST__BAD.

*  Notes:
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   SkyLineDef *result;           /* Returned value */
   const int *perm;              /* Axis permutation array */
   double le;                    /* Length of end vector */
   double len;                   /* Permuted point1 coordinates */
   double ls;                    /* Length of start vector */
   double p1[ 2 ];               /* Permuted point1 coordinates */
   double p2[ 2 ];               /* Permuted point2 coordinates */
   double temp[3];               /* Cartesian coords at offset position */

/* Initialise */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Check the axis values are good */
   if( start[ 0 ] != AST__BAD && start[ 1 ] != AST__BAD &&
       end[ 0 ] != AST__BAD && end[ 1 ] != AST__BAD ) {

/* Allocate memory for the returned structure. */
      result = astMalloc( sizeof( SkyLineDef ) );

/* Obtain a pointer to the SkyFrame's axis permutation array. */
      perm = astGetPerm( this );
      if ( perm ) {

/* Apply the axis permutation array to obtain the coordinates of the two
   input points in the required (longitude,latitude) order. */
         p1[ perm[ 0 ] ] = start[ 0 ];
         p1[ perm[ 1 ] ] = start[ 1 ];
         p2[ perm[ 0 ] ] = end[ 0 ];
         p2[ perm[ 1 ] ] = end[ 1 ];

/* Convert each point into a 3-vector of unit length and store in the
   returned structure. */
         palDcs2c( p1[ 0 ], p1[ 1 ], result->start );
         palDcs2c( p2[ 0 ], p2[ 1 ], result->end );

/* Calculate the great circle distance between the points in radians and
   store in the result structure. Correct for rounding errors in palDcs2c
   that can result in the vectors not having exactly unit length. */
         result->length = palDvdv( result->start, result->end );
         ls = result->start[0]*result->start[0] +
              result->start[1]*result->start[1] +
              result->start[2]*result->start[2];
         le = result->end[0]*result->end[0] +
              result->end[1]*result->end[1] +
              result->end[2]*result->end[2];
         result->length = acos( result->length/sqrt( ls*le ) );

/* Find a unit vector representing the pole of the system in which the
   equator is given by the great circle. This is such that going the
   short way from the start to the end, the pole is to the left of the
   line as seen by the observer (i.e. from the centre of the sphere).
   If the line has zero length, or 180 degrees length, the pole is
   undefined, so we use an arbitrary value. */
         if( result->length == 0.0 || result->length > pi - 5.0E-11 ) {
            palDcs2c( p1[ 0 ] + 0.01, p1[ 1 ] + 0.01, temp );
            palDvxv( temp, result->start, result->dir );
         } else {
            palDvxv( result->end, result->start, result->dir );
         }
         palDvn( result->dir, result->q, &len );

/* Also store a point which is 90 degrees along the great circle from the
   start. */
         palDvxv( result->start, result->q, result->dir );

/* Store a pointer to the defining SkyFrame. */
         result->frame = this;

/* Indicate that the line is considered to be terminated at the start and
   end points. */
         result->infinite = 0;

/* Normalise the spherical start and end positions stored in the returned
   structure. */
         result->start_2d[ 0 ] = start[ 0 ];
         result->start_2d[ 1 ] = start[ 1 ];
         result->end_2d[ 0 ] = end[ 0 ];
         result->end_2d[ 1 ] = end[ 1 ];

         astNorm( this, result->start_2d );
         astNorm( this, result->end_2d );
      }
   }

/* Free the returned pointer if an error occurred. */
   if( !astOK ) result = astFree( result );

/* Return a pointer to the output structure. */
   return (AstLineDef *) result;
}

static int LineIncludes( SkyLineDef *l, double point[3], double *dist,
                         int *status ) {
/*
*  Name:
*     LineIncludes

*  Purpose:
*     Determine if a line includes a point which is known to be in the
*     great circle.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int LineIncludes( SkyLineDef *l, double point[3], double *dist,
*                       int *status )

*  Class Membership:
*     SkyFrame member function

*  Description:
*     The supplied point is assumed to be a point on the great circle of
*     which the supplied line is a segment. This function returns true if
*     "point" is within the bounds of the segment (the end point of the
*     line is assumed * not to be part of the segment).

*  Parameters:
*     l
*        Pointer to the structure defining the line.
*     point
*        An array holding the Cartesian coords of the point to be tested.
*     dist
*        Pointer to a double in which to return the distance from the
*        start of line "l" to the crossing point. May be NULL if not
*        required. Returned equal to zero if an error occurs.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A non-zero value is returned if the line includes the point.

*  Notes:
*     - Zero will be returned if this function is invoked with the global
*     error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   double t1, t2, t3;
   int result;

/* Initialise */
   if( dist ) *dist = 0.0;

/* Check the global error status. */
   if ( !astOK ) return 0;

/* Get the unsigned distance of the point in radians from the start of the
   line, in the range 0 - 180 degs (t2). */
   t1 = palDvdv( l->start, point );
   t2 = acos( t1 );

/* Get the cosine of the distance in radians from the point to the line's
   quarter point (the point on the line that is 90 degrees away from the
   line's start). */
   t3 = palDvdv( l->dir, point );

/* If the point is more than 90 degrees away from the quarter point, then
   it is in the second half of the great circle (i.e. the half that does not
   include the quarter point). So change "t2" to be the distance from the
   start, along the line in the forward direction, to the point (it is
   currently the distance in the reverse direction). */
   if( t3 < -1.0E-10 ) t2 = 2*AST__DPI - t2;

/* If the line is of infinite length, it is assumed to include the supplied
   point. */
   if( l->infinite ) {
      result = 1;

/* If the line is not infinite, check the distance from the start of the
   line to the point is less than the line length. */
   } else {
      result = ((l->length > 0) ? t2 < l->length : t2 == 0.0 );
   }

   if( dist ) *dist = t2;
   return result;
}

static void LineOffset( AstFrame *this, AstLineDef *line, double par,
                        double prp, double point[2], int *status ){
/*
*  Name:
*     LineOffset

*  Purpose:
*     Find a position close to a line.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void LineOffset( AstFrame *this, AstLineDef *line, double par,
*                      double prp, double point[2], int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the protected astLineOffset
*     method inherited from the Frame class).

*  Description:
*     This function returns a position formed by moving a given distance along
*     the supplied line, and then a given distance away from the supplied line.

*  Parameters:
*     this
*        Pointer to the Frame.
*     line
*        Pointer to the structure defining the line.
*     par
*        The distance to move along the line from the start towards the end.
*     prp
*        The distance to move at right angles to the line. Positive
*        values result in movement to the left of the line, as seen from
*        the observer, when moving from start towards the end.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     - The pointer supplied for "line" should have been created using the
*     astLineDef method. This structure contains cached information about the
*     line which improves the efficiency of this method when many repeated
*     calls are made. An error will be reported if the structure does not
*     refer to the Frame specified by "this".
*-
*/

/* Local Variables; */
    SkyLineDef *sl;
    const int *perm;
    double c;
    double nx;
    double ny;
    double nz;
    double p[2];
    double s;
    double v[3];

/* Check the global error status. */
   if ( !astOK ) return;

/* Check that the line refers to the supplied Frame. */
   if( line->frame != this ) {
      astError( AST__INTER, "astLineOffset(%s): The supplied line does "
                "not relate to the supplied %s (AST internal programming "
                "error).", status, astGetClass( this ), astGetClass( this ) );

/* This implementation uses spherical geometry. */
   } else {

/* Get a pointer to the SkyLineDef structure. */
      sl = (SkyLineDef *) line;

/* Move a distance par from start to end. */
      c = cos( par );
      s = sin( par );
      nx = c * sl->start[ 0 ] + s * sl->dir[ 0 ];
      ny = c * sl->start[ 1 ] + s * sl->dir[ 1 ];
      nz = c * sl->start[ 2 ] + s * sl->dir[ 2 ];

/* Move a distance prp from this point towards the pole point. */
      if( prp != 0.0 ) {
         c = cos( prp );
         s = sin( prp );
         v[ 0 ] = c * nx + s * sl->q[ 0 ];
         v[ 1 ] = c * ny + s * sl->q[ 1 ];
         v[ 2 ] = c * nz + s * sl->q[ 2 ];
      } else {
         v[ 0 ] = nx;
         v[ 1 ] = ny;
         v[ 2 ] = nz;
      }

/* Convert to lon/lat */
      palDcc2s( v, p, p + 1 );

/* Permute the spherical axis value into the order used by the SkyFrame. */
      perm = astGetPerm( this );
      if( perm ){
         point[ 0 ] = p[ perm[ 0 ] ];
         point[ 1 ] = p[ perm[ 1 ] ];
      }
   }
}

static int MakeSkyMapping( AstSkyFrame *target, AstSkyFrame *result,
                           AstSystemType align_sys, AstMapping **map, int *status ) {
/*
*  Name:
*     MakeSkyMapping

*  Purpose:
*     Generate a Mapping between two SkyFrames.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int MakeSkyMapping( AstSkyFrame *target, AstSkyFrame *result,
*                         AstSystemType align_sys, AstMapping **map, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function takes two SkyFrames and generates a Mapping that
*     converts between them, taking account of differences in their
*     coordinate systems, equinox value, epoch, etc. (but not allowing
*     for any axis permutations).

*  Parameters:
*     target
*        Pointer to the first SkyFrame.
*     result
*        Pointer to the second SkyFrame.
*     align_sys
*        The system in which to align the two SkyFrames.
*     map
*        Pointer to a location which is to receive a pointer to the
*        returned Mapping. The forward transformation of this Mapping
*        will convert from "target" coordinates to "result"
*        coordinates, and the inverse transformation will convert in
*        the opposite direction (all coordinate values in radians).
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Non-zero if the Mapping could be generated, or zero if the two
*     SkyFrames are sufficiently un-related that no meaningful Mapping
*     can be produced.

*  Notes:
*     A value of zero is returned if this function is invoked with the
*     global error status set or if it should fail for any reason.
*/

/* Local Constants: */
#define MAX_ARGS 4               /* Max arguments for an SlaMap conversion */

/* Local Variables: */
   AstMapping *omap;             /* Mapping from coorinates to offsets */
   AstMapping *tmap2;            /* Temporary Mapping */
   AstMapping *tmap;             /* Temporary Mapping */
   AstSlaMap *slamap;            /* Pointer to SlaMap */
   AstSystemType result_system;  /* Code to identify result coordinate system */
   AstSystemType system;         /* Code to identify coordinate system */
   AstSystemType target_system;  /* Code to identify target coordinate system */
   double args[ MAX_ARGS ];      /* Conversion argument array */
   double epoch;                 /* Epoch as Modified Julian Date */
   double epoch_B;               /* Besselian epoch as decimal years */
   double epoch_J;               /* Julian epoch as decimal years */
   double equinox;               /* Equinox as Modified Julian Date */
   double equinox_B;             /* Besselian equinox as decimal years */
   double equinox_J;             /* Julian equinox as decimal years */
   double diurab;                /* Magnitude of diurnal aberration vector */
   double last;                  /* Local Apparent Sidereal Time */
   double lat;                   /* Observers latitude */
   double result_epoch;          /* Result frame Epoch */
   double result_equinox;        /* Result frame Epoch */
   double target_epoch;          /* Target frame Epoch */
   double target_equinox;        /* Target frame Epoch */
   int isunit;                   /* Is the SlaMap effectively a unit mapping? */
   int match;                    /* Mapping can be generated? */
   int step1;                    /* Convert target to FK5 J2000? */
   int step2;                    /* Convert FK5 J2000 to align sys? */
   int step3;                    /* Convert align sys to FK5 J2000? */
   int step4;                    /* Convert FK5 J2000 to result? */

/* Check the global error status. */
   if ( !astOK ) return 0;

/* Initialise the returned values. */
   match = 1;
   *map = NULL;

/* Initialise variables to avoid "used of uninitialised variable"
   messages from dumb compilers. */
   epoch_B = 0.0;
   epoch_J = 0.0;
   equinox_B = 0.0;
   equinox_J = 0.0;

/* Get the two epoch values. */
   result_epoch = astGetEpoch( result );
   target_epoch = astGetEpoch( target );

/* Get the two equinox values. */
   result_equinox = astGetEquinox( result );
   target_equinox = astGetEquinox( target );

/* Get the two system values. */
   result_system = astGetSystem( result );
   target_system = astGetSystem( target );

/* If either system is not references to the equinox given by the Equinox
   attribute, then use the equinox of the other system rather than
   adopting the arbitrary default of J2000. */
   if( !EQREF(result_system) ) result_equinox = target_equinox;
   if( !EQREF(target_system) ) target_equinox = result_equinox;

/* If both systems are unknown, assume they are the same. Return a UnitMap.
   We need to do this, otherwise a simple change of Title (for instance)
   will result in a FrameSet whose current Frame has System=AST__UNKNOWN
   loosing its integrity. */
   if( target_system == AST__UNKNOWN && result_system == AST__UNKNOWN ) {
      *map = (AstMapping *) astUnitMap( 2, "", status );
      return 1;
   }

/* The total Mapping is divided into two parts in series; the first part
   converts from the target SkyFrame to the alignment system, using the
   Epoch and Equinox of the target Frame, the second part converts from
   the alignment system to the result SkyFrame, using the Epoch and Equinox
   of the result Frame. Each of these parts has an arbitrary input and an
   output system, and therefore could be implemented using a collection
   of NxN conversions. To reduce the complexity, each part is implement
   by converting from the input system to FK5 J2000, and then from FK5
   J2000 to the output system. This scheme required only N conversions
   rather than NxN. Thus overall the total Mapping is made up of 4 steps
   in series. Some of these steps may be ommitted if they are effectively
   a UnitMap. Determine which steps need to be included. Assume all need
   to be done to begin with. */
   step1 = 1;
   step2 = 1;
   step3 = 1;
   step4 = 1;

/* If the target system is the same as the alignment system, neither of the
   first 2 steps need be done. */
   if( target_system == align_sys ) {
      step1 = 0;
      step2 = 0;
   }

/* If the result system is the same as the alignment system, neither of the
   last 2 steps need be done. */
   if( result_system == align_sys ) {
      step3 = 0;
      step4 = 0;
   }

/* If the two epochs are the same, or if the alignment system is FK5 J2000,
   steps 2 and 3 are not needed. */
   if( step2 && step3 ) {
      if( align_sys == AST__FK5 || result_epoch == target_epoch ) {
      step2 = 0;
      step3 = 0;
      }
   }

/* None are needed if the target and result SkyFrames have the same
   System, Epoch and Equinox. */
   if(  result_system == target_system &&
        result_epoch == target_epoch &&
        result_equinox == target_equinox ) {
      step1 = 0;
      step2 = 0;
      step3 = 0;
      step4 = 0;
   }

/* Create an initial (null) SlaMap. */
   slamap = astSlaMap( 0, "", status );

/* Define local macros as shorthand for adding sky coordinate
   conversions to this SlaMap.  Each macro simply stores details of
   the additional arguments in the "args" array and then calls
   astSlaAdd. The macros differ in the number of additional argument
   values. */
   #define TRANSFORM_0(cvt) \
           astSlaAdd( slamap, cvt, 0, NULL );

   #define TRANSFORM_1(cvt,arg0) \
           args[ 0 ] = arg0; \
           astSlaAdd( slamap, cvt, 1, args );

   #define TRANSFORM_2(cvt,arg0,arg1) \
           args[ 0 ] = arg0; \
           args[ 1 ] = arg1; \
           astSlaAdd( slamap, cvt, 2, args );

   #define TRANSFORM_3(cvt,arg0,arg1,arg2) \
           args[ 0 ] = arg0; \
           args[ 1 ] = arg1; \
           args[ 2 ] = arg2; \
           astSlaAdd( slamap, cvt, 3, args );

   #define TRANSFORM_4(cvt,arg0,arg1,arg2,arg3) \
           args[ 0 ] = arg0; \
           args[ 1 ] = arg1; \
           args[ 2 ] = arg2; \
           args[ 3 ] = arg3; \
           astSlaAdd( slamap, cvt, 4, args );

/* Convert _to_ FK5 J2000.0 coordinates. */
/* ===================================== */
/* The overall conversion is formulated in four phases. In this first
   phase, we convert from the target coordinate system to intermediate sky
   coordinates expressed using the FK5 system, mean equinox J2000.0. */

/* Obtain the sky coordinate system, equinox, epoch, etc, of the target
   SkyFrame. */
   system = target_system;
   equinox = target_equinox;
   epoch = target_epoch;
   last = GetLAST( target, status );
   diurab = GetDiurab( target, status );
   lat = astGetObsLat( target );
   if( astOK && step1 ) {

/* Convert the equinox and epoch values (stored as Modified Julian
   Dates) into the equivalent Besselian and Julian epochs (as decimal
   years). */
      equinox_B = palEpb( equinox );
      equinox_J = palEpj( equinox );
      epoch_B = palEpb( epoch );
      epoch_J = palEpj( epoch );

/* Formulate the conversion... */

/* From FK4. */
/* --------- */
/* If necessary, apply the old-style FK4 precession model to bring the
   equinox to B1950.0, with rigorous handling of the E-terms of
   aberration. Then convert directly to FK5 J2000.0 coordinates. */
      if ( system == AST__FK4 ) {
         VerifyMSMAttrs( target, result, 1, "Equinox Epoch", "astMatch", status );
         if ( equinox_B != 1950.0 ) {
            TRANSFORM_1( "SUBET", equinox_B )
            TRANSFORM_2( "PREBN", equinox_B, 1950.0 )
            TRANSFORM_1( "ADDET", 1950.0 )
         }
         TRANSFORM_1( "FK45Z", epoch_B )

/* From FK4 with no E-terms. */
/* ------------------------- */
/* This is the same as above, except that we do not need to subtract
      the E-terms initially as they are already absent. */
      } else if ( system == AST__FK4_NO_E ) {
         VerifyMSMAttrs( target, result, 1, "Equinox Epoch", "astMatch", status );
         if ( equinox_B != 1950.0 ) {
            TRANSFORM_2( "PREBN", equinox_B, 1950.0 )
         }
         TRANSFORM_1( "ADDET", 1950.0 )
         TRANSFORM_1( "FK45Z", epoch_B )

/* From FK5. */
/* --------- */
/* We simply need to apply a precession correction for the change of
   equinox.  Omit even this if the equinox is already J2000.0. */
      } else if ( system == AST__FK5 ) {
         VerifyMSMAttrs( target, result, 1, "Equinox", "astMatch", status );
         if ( equinox_J != 2000.0 ) {
            TRANSFORM_2( "PREC", equinox_J, 2000.0 );
         }

/* From J2000. */
/* ----------- */
/* Convert from J2000 to ICRS, then from ICRS to FK5. */
      } else if ( system == AST__J2000 ) {
         VerifyMSMAttrs( target, result, 1, "Epoch", "astMatch", status );
         TRANSFORM_0( "J2000H" )
         TRANSFORM_1( "HFK5Z", epoch_J );

/* From geocentric apparent. */
/* ------------------------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( system == AST__GAPPT ) {
         VerifyMSMAttrs( target, result, 1, "Epoch", "astMatch", status );
         TRANSFORM_2( "AMP", epoch, 2000.0 )

/* From ecliptic coordinates. */
/* -------------------------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( system == AST__ECLIPTIC ) {
         VerifyMSMAttrs( target, result, 1, "Equinox", "astMatch", status );
         TRANSFORM_1( "ECLEQ", equinox )

/* From helio-ecliptic coordinates. */
/* -------------------------------- */
      } else if ( system == AST__HELIOECLIPTIC ) {
         VerifyMSMAttrs( target, result, 1, "Epoch", "astMatch", status );
         TRANSFORM_1( "HEEQ", epoch )

/* From galactic coordinates. */
/* -------------------------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( system == AST__GALACTIC ) {
         TRANSFORM_0( "GALEQ" )

/* From ICRS. */
/* ---------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( system == AST__ICRS ) {
         VerifyMSMAttrs( target, result, 1, "Epoch", "astMatch", status );
         TRANSFORM_1( "HFK5Z", epoch_J );

/* From supergalactic coordinates. */
/* ------------------------------- */
/* Convert to galactic coordinates and then to FK5 J2000.0
      equatorial. */
      } else if ( system == AST__SUPERGALACTIC ) {
         TRANSFORM_0( "SUPGAL" )
         TRANSFORM_0( "GALEQ" )

/* From AzEl. */
/* ---------- */
/* Rotate from horizon to equator (H2E), shift hour angle into RA (H2R),
      go from geocentric apparent to FK5 J2000. */
      } else if ( system == AST__AZEL ) {
         VerifyMSMAttrs( target, result, 1, "ObsLon ObsLat Epoch", "astMatch", status );
         TRANSFORM_2( "H2E", lat, diurab )
         TRANSFORM_1( "H2R", last )
         TRANSFORM_2( "AMP", epoch, 2000.0 )

/* From unknown coordinates. */
/* ------------------------- */
/* No conversion is possible. */
      } else if ( system == AST__UNKNOWN ) {
         match = 0;
      }
   }

/* Convert _from_ FK5 J2000.0 coordinates _to_ the alignment system. */
/* ============================================================ */
/* In this second phase, we convert to the system given by the align_sys
   argument (if required), still using the properties of the target Frame. */
   if ( astOK && match && step2 ) {

/* Align in FK4. */
/* --------------- */
/* Convert directly from FK5 J2000.0 to FK4 B1950.0 coordinates at the
   appropriate epoch. Then, if necessary, apply the old-style FK4
   precession model to bring the equinox to that required, with
   rigorous handling of the E-terms of aberration. */
      if ( align_sys == AST__FK4 ) {
         VerifyMSMAttrs( target, result, 1, "Equinox Epoch", "astMatch", status );
         TRANSFORM_1( "FK54Z", epoch_B )
         if ( equinox_B != 1950.0 ) {
            TRANSFORM_1( "SUBET", 1950.0 )
            TRANSFORM_2( "PREBN", 1950.0, equinox_B )
            TRANSFORM_1( "ADDET", equinox_B )
         }

/* Align in FK4 with no E-terms. */
/* ------------------------------- */
/* This is the same as above, except that we do not need to add the
   E-terms at the end. */
      } else if ( align_sys == AST__FK4_NO_E ) {
         VerifyMSMAttrs( target, result, 1, "Equinox Epoch", "astMatch", status );
         TRANSFORM_1( "FK54Z", epoch_B )
         TRANSFORM_1( "SUBET", 1950.0 )
         if ( equinox_B != 1950.0 ) {
            TRANSFORM_2( "PREBN", 1950.0, equinox_B )
         }

/* Align in FK5. */
/* ------------- */
/* We simply need to apply a precession correction for the change of
   equinox.  Omit even this if the required equinox is J2000.0. */
      } else if ( align_sys == AST__FK5 ) {
         VerifyMSMAttrs( target, result, 1, "Equinox", "astMatch", status );
         if ( equinox_J != 2000.0 ) {
            TRANSFORM_2( "PREC", 2000.0, equinox_J )
         }

/* Align in J2000. */
/* --------------- */
/* Mov from FK5 to ICRS, and from ICRS to J2000. */
      } else if ( align_sys == AST__J2000 ) {
         VerifyMSMAttrs( target, result, 1, "Epoch", "astMatch", status );
         TRANSFORM_1( "FK5HZ", epoch_J )
         TRANSFORM_0( "HJ2000" )

/* Align in geocentric apparent. */
/* ------------------------------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( align_sys == AST__GAPPT ) {
         VerifyMSMAttrs( target, result, 1, "Epoch", "astMatch", status );
         TRANSFORM_2( "MAP", 2000.0, epoch )

/* Align in ecliptic coordinates. */
/* -------------------------------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( align_sys == AST__ECLIPTIC ) {
         VerifyMSMAttrs( target, result, 1, "Equinox", "astMatch", status );
         TRANSFORM_1( "EQECL", equinox )

/* Align in helio-ecliptic coordinates. */
/* ------------------------------------ */
      } else if ( align_sys == AST__HELIOECLIPTIC ) {
         VerifyMSMAttrs( target, result, 1, "Epoch", "astMatch", status );
         TRANSFORM_1( "EQHE", epoch )

/* Align in galactic coordinates. */
/* -------------------------------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( align_sys == AST__GALACTIC ) {
         TRANSFORM_0( "EQGAL" )

/* Align in ICRS. */
/* -------------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( align_sys == AST__ICRS ) {
         VerifyMSMAttrs( target, result, 1, "Epoch", "astMatch", status );
         TRANSFORM_1( "FK5HZ", epoch_J )

/* Align in supergalactic coordinates. */
/* ------------------------------------- */
/* Convert to galactic coordinates and then to supergalactic. */
      } else if ( align_sys == AST__SUPERGALACTIC ) {
         TRANSFORM_0( "EQGAL" )
         TRANSFORM_0( "GALSUP" )

/* Align in AzEl coordinates. */
/* -------------------------- */
/* Go from FK5 J2000 to geocentric apparent (MAP), shift RA into hour angle
   (R2H), rotate from equator to horizon (E2H). */
      } else if ( align_sys == AST__AZEL ) {
         VerifyMSMAttrs( target, result, 1, "ObsLon ObsLat Epoch", "astMatch", status );
         TRANSFORM_2( "MAP", 2000.0, epoch )
         TRANSFORM_1( "R2H", last )
         TRANSFORM_2( "E2H", lat, diurab )

/* Align in unknown coordinates. */
/* ------------------------------- */
/* No conversion is possible. */
      } else if ( align_sys == AST__UNKNOWN ) {
         match = 0;
      }
   }

/* Convert _from_ the alignment system _to_ FK5 J2000.0 coordinates */
/* =========================================================== */
/* In this third phase, we convert from the alignment system (if required)
   to the intermediate FK5 J2000 system, using the properties of the
   result SkyFrame. */

/* Obtain the sky coordinate system, equinox, epoch, etc, of the result
   SkyFrame. */
   system = result_system;
   equinox = result_equinox;
   epoch = result_epoch;
   diurab = GetDiurab( result, status );
   last = GetLAST( result, status );
   lat = astGetObsLat( result );

/* Convert the equinox and epoch values (stored as Modified Julian
   Dates) into the equivalent Besselian and Julian epochs (as decimal
   years). */
   if( astOK ) {
      equinox_B = palEpb( equinox );
      equinox_J = palEpj( equinox );
      epoch_B = palEpb( epoch );
      epoch_J = palEpj( epoch );
   }

/* Check we need to do the conversion. */
   if ( astOK && match && step3 ) {

/* Formulate the conversion... */

/* From FK4. */
/* --------- */
/* If necessary, apply the old-style FK4 precession model to bring the
   equinox to B1950.0, with rigorous handling of the E-terms of
   aberration. Then convert directly to FK5 J2000.0 coordinates. */
      if ( align_sys == AST__FK4 ) {
         VerifyMSMAttrs( target, result, 3, "Equinox Epoch", "astMatch", status );
         if ( equinox_B != 1950.0 ) {
            TRANSFORM_1( "SUBET", equinox_B )
            TRANSFORM_2( "PREBN", equinox_B, 1950.0 )
            TRANSFORM_1( "ADDET", 1950.0 )
         }
         TRANSFORM_1( "FK45Z", epoch_B )

/* From FK4 with no E-terms. */
/* ------------------------- */
/* This is the same as above, except that we do not need to subtract
   the E-terms initially as they are already absent. */
      } else if ( align_sys == AST__FK4_NO_E ) {
         VerifyMSMAttrs( target, result, 3, "Equinox Epoch", "astMatch", status );
         if ( equinox_B != 1950.0 ) {
            TRANSFORM_2( "PREBN", equinox_B, 1950.0 )
         }
         TRANSFORM_1( "ADDET", 1950.0 )
         TRANSFORM_1( "FK45Z", epoch_B )

/* From FK5. */
/* --------- */
/* We simply need to apply a precession correction for the change of
   equinox.  Omit even this if the equinox is already J2000.0. */
      } else if ( align_sys == AST__FK5 ) {
         VerifyMSMAttrs( target, result, 3, "Equinox", "astMatch", status );
         if ( equinox_J != 2000.0 ) {
            TRANSFORM_2( "PREC", equinox_J, 2000.0 );
         }

/* From geocentric apparent. */
/* ------------------------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( align_sys == AST__GAPPT ) {
         VerifyMSMAttrs( target, result, 3, "Epoch", "astMatch", status );
         TRANSFORM_2( "AMP", epoch, 2000.0 )

/* From ecliptic coordinates. */
/* -------------------------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( align_sys == AST__ECLIPTIC ) {
         VerifyMSMAttrs( target, result, 3, "Equinox", "astMatch", status );
         TRANSFORM_1( "ECLEQ", equinox )

/* From helio-ecliptic coordinates. */
/* -------------------------------- */
      } else if ( align_sys == AST__HELIOECLIPTIC ) {
         VerifyMSMAttrs( target, result, 3, "Epoch", "astMatch", status );
         TRANSFORM_1( "HEEQ", epoch )

/* From galactic coordinates. */
/* -------------------------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( align_sys == AST__GALACTIC ) {
         TRANSFORM_0( "GALEQ" )

/* From ICRS. */
/* ---------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( align_sys == AST__ICRS ) {
         VerifyMSMAttrs( target, result, 3, "Epoch", "astMatch", status );
         TRANSFORM_1( "HFK5Z", epoch_J )

/* From J2000. */
/* ----------- */
/* From J2000 to ICRS, and from ICRS to FK5. */
      } else if ( align_sys == AST__J2000 ) {
         VerifyMSMAttrs( target, result, 3, "Epoch", "astMatch", status );
         TRANSFORM_0( "J2000H" )
         TRANSFORM_1( "HFK5Z", epoch_J )

/* From supergalactic coordinates. */
/* ------------------------------- */
/* Convert to galactic coordinates and then to FK5 J2000.0
      equatorial. */
      } else if ( align_sys == AST__SUPERGALACTIC ) {
         TRANSFORM_0( "SUPGAL" )
         TRANSFORM_0( "GALEQ" )

/* From AzEl. */
/* ---------- */
/* Rotate from horizon to equator (H2E), shift hour angle into RA (H2R),
      go from geocentric apparent to FK5 J2000. */
      } else if ( align_sys == AST__AZEL ) {
         VerifyMSMAttrs( target, result, 3, "ObsLon ObsLat Epoch", "astMatch", status );
         TRANSFORM_2( "H2E", lat, diurab )
         TRANSFORM_1( "H2R", last )
         TRANSFORM_2( "AMP", epoch, 2000.0 )

/* From unknown coordinates. */
/* ------------------------------- */
/* No conversion is possible. */
      } else if ( align_sys == AST__UNKNOWN ) {
         match = 0;
      }
   }

/* Convert _from_ FK5 J2000.0 coordinates. */
/* ======================================= */
/* In this fourth and final phase, we convert to the result coordinate
   system from the intermediate FK5 J2000 sky coordinates generated above. */
   if ( astOK && match && step4 ) {

/* To FK4. */
/* ------- */
/* Convert directly from FK5 J2000.0 to FK4 B1950.0 coordinates at the
   appropriate epoch. Then, if necessary, apply the old-style FK4
   precession model to bring the equinox to that required, with
   rigorous handling of the E-terms of aberration. */
      if ( system == AST__FK4 ) {
         VerifyMSMAttrs( target, result, 3, "Equinox Epoch", "astMatch", status );
         TRANSFORM_1( "FK54Z", epoch_B )
         if ( equinox_B != 1950.0 ) {
            TRANSFORM_1( "SUBET", 1950.0 )
            TRANSFORM_2( "PREBN", 1950.0, equinox_B )
            TRANSFORM_1( "ADDET", equinox_B )
         }

/* To FK4 with no E-terms. */
/* ----------------------- */
/* This is the same as above, except that we do not need to add the
   E-terms at the end. */
      } else if ( system == AST__FK4_NO_E ) {
         VerifyMSMAttrs( target, result, 3, "Equinox Epoch", "astMatch", status );
         TRANSFORM_1( "FK54Z", epoch_B )
         TRANSFORM_1( "SUBET", 1950.0 )
         if ( equinox_B != 1950.0 ) {
            TRANSFORM_2( "PREBN", 1950.0, equinox_B )
         }

/* To FK5. */
/* ------- */
/* We simply need to apply a precession correction for the change of
   equinox.  Omit even this if the required equinox is J2000.0. */
      } else if ( system == AST__FK5 ) {
         VerifyMSMAttrs( target, result, 3, "Equinox", "astMatch", status );
         if ( equinox_J != 2000.0 ) {
            TRANSFORM_2( "PREC", 2000.0, equinox_J )
         }

/* To geocentric apparent. */
/* ----------------------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( system == AST__GAPPT ) {
         VerifyMSMAttrs( target, result, 3, "Epoch", "astMatch", status );
         TRANSFORM_2( "MAP", 2000.0, epoch )

/* To ecliptic coordinates. */
/* ------------------------ */
/* This conversion is supported directly by SLALIB. */
      } else if ( system == AST__ECLIPTIC ) {
         VerifyMSMAttrs( target, result, 3, "Equinox", "astMatch", status );
         TRANSFORM_1( "EQECL", equinox )

/* To helio-ecliptic coordinates. */
/* ------------------------------ */
      } else if ( system == AST__HELIOECLIPTIC ) {
         VerifyMSMAttrs( target, result, 3, "Epoch", "astMatch", status );
         TRANSFORM_1( "EQHE", epoch )

/* To galactic coordinates. */
/* ------------------------ */
/* This conversion is supported directly by SLALIB. */
      } else if ( system == AST__GALACTIC ) {
         TRANSFORM_0( "EQGAL" )

/* To ICRS. */
/* -------- */
/* This conversion is supported directly by SLALIB. */
      } else if ( system == AST__ICRS ) {
         VerifyMSMAttrs( target, result, 3, "Epoch", "astMatch", status );
         TRANSFORM_1( "FK5HZ", epoch_J )

/* To J2000. */
/* --------- */
/* From FK5 to ICRS, then from ICRS to J2000. */
      } else if ( system == AST__J2000 ) {
         VerifyMSMAttrs( target, result, 3, "Epoch", "astMatch", status );
         TRANSFORM_1( "FK5HZ", epoch_J )
         TRANSFORM_0( "HJ2000" )

/* To supergalactic coordinates. */
/* ----------------------------- */
/* Convert to galactic coordinates and then to supergalactic. */
      } else if ( system == AST__SUPERGALACTIC ) {
         TRANSFORM_0( "EQGAL" )
         TRANSFORM_0( "GALSUP" )

/* To AzEl */
/* ------- */
/* Go from FK5 J2000 to geocentric apparent (MAP), shift RA into hour angle
   (R2H), rotate from equator to horizon (E2H). */
      } else if ( system == AST__AZEL ) {
         VerifyMSMAttrs( target, result, 3, "ObsLon ObsLat Epoch", "astMatch", status );
         TRANSFORM_2( "MAP", 2000.0, epoch )
         TRANSFORM_1( "R2H", last )
         TRANSFORM_2( "E2H", lat, diurab )

/* To unknown coordinates. */
/* ----------------------------- */
/* No conversion is possible. */
      } else if ( system == AST__UNKNOWN ) {
         match = 0;
      }
   }

/* See of the slamap created above is effectively a unit mapping to
   within the tolerance of the more accurate SkyFrame (target or result). */
   isunit = TestSlaUnit( target, result, slamap, status );

/* Now need to take account of the possibility that the input or output
   SkyFrame may represent an offset system rather than a coordinate system.
   Form the Mapping from the target coordinate system to the associated
   offset system. A UnitMap is returned if the target does not use an
   offset system. */
   omap = SkyOffsetMap( target, status );

/* Invert it to get the Mapping from the actual used system (whther
   offsets or coordinates) to the coordinate system. */
   astInvert( omap );

/* Combine it with the slamap created earlier, so that its coordinate
   outputs feed the inputs of the slamap. We only do this if the slamap
   is not effectively a unit mapping. Annul redundant pointers afterwards. */
   if( ! isunit ) {
      tmap = (AstMapping *) astCmpMap( omap, slamap, 1, "", status );
   } else {
      tmap = astClone( omap );
   }
   omap = astAnnul( omap );
   slamap =astAnnul( slamap );

/* Now form the Mapping from the result coordinate system to the associated
   offset system. A UnitMap is returned if the result does not use an
   offset system. */
   omap = SkyOffsetMap( result, status );

/* Combine it with the above CmpMap, so that the CmpMap outputs feed the
   new Mapping inputs. Annul redundant pointers afterwards. */
   tmap2 = (AstMapping *) astCmpMap( tmap, omap, 1, "", status );
   omap =astAnnul( omap );
   tmap =astAnnul( tmap );

/* Simplify the Mapping produced above (this eliminates any redundant
   conversions) and annul the original pointer. */
   *map = astSimplify( tmap2 );
   tmap2 = astAnnul( tmap2 );

/* If an error occurred, annul the returned Mapping and clear the
   returned values. */
   if ( !astOK ) {
      *map = astAnnul( *map );
      match = -1;
   }

/* Return the result. */
   return match;

/* Undefine macros local to this function. */
#undef MAX_ARGS
#undef TRANSFORM_0
#undef TRANSFORM_1
#undef TRANSFORM_2
#undef TRANSFORM_3
}

static int Match( AstFrame *template_frame, AstFrame *target, int matchsub,
                  int **template_axes, int **target_axes, AstMapping **map,
                  AstFrame **result, int *status ) {
/*
*  Name:
*     Match

*  Purpose:
*     Determine if conversion is possible between two coordinate systems.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int Match( AstFrame *template, AstFrame *target, int matchsub,
*                int **template_axes, int **target_axes,
*                AstMapping **map, AstFrame **result, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the protected astMatch method
*     inherited from the Frame class).

*  Description:
*     This function matches a "template" SkyFrame to a "target" Frame and
*     determines whether it is possible to convert coordinates between them.
*     If it is, a mapping that performs the transformation is returned along
*     with a new Frame that describes the coordinate system that results when
*     this mapping is applied to the "target" coordinate system. In addition,
*     information is returned to allow the axes in this "result" Frame to be
*     associated with the corresponding axes in the "target" and "template"
*     Frames from which they are derived.

*  Parameters:
*     template
*        Pointer to the template SkyFrame. This describes the coordinate system
*        (or set of possible coordinate systems) into which we wish to convert
*        our coordinates.
*     target
*        Pointer to the target Frame. This describes the coordinate system in
*        which we already have coordinates.
*     matchsub
*        If zero then a match only occurs if the template is of the same
*        class as the target, or of a more specialised class. If non-zero
*        then a match can occur even if this is not the case.
*     template_axes
*        Address of a location where a pointer to int will be returned if the
*        requested coordinate conversion is possible. This pointer will point
*        at a dynamically allocated array of integers with one element for each
*        axis of the "result" Frame (see below). It must be freed by the caller
*        (using astFree) when no longer required.
*
*        For each axis in the result Frame, the corresponding element of this
*        array will return the index of the template SkyFrame axis from which
*        it is derived. If it is not derived from any template SkyFrame axis,
*        a value of -1 will be returned instead.
*     target_axes
*        Address of a location where a pointer to int will be returned if the
*        requested coordinate conversion is possible. This pointer will point
*        at a dynamically allocated array of integers with one element for each
*        axis of the "result" Frame (see below). It must be freed by the caller
*        (using astFree) when no longer required.
*
*        For each axis in the result Frame, the corresponding element of this
*        array will return the index of the target Frame axis from which it
*        is derived. If it is not derived from any target Frame axis, a value
*        of -1 will be returned instead.
*     map
*        Address of a location where a pointer to a new Mapping will be
*        returned if the requested coordinate conversion is possible. If
*        returned, the forward transformation of this Mapping may be used to
*        convert coordinates between the "target" Frame and the "result"
*        Frame (see below) and the inverse transformation will convert in the
*        opposite direction.
*     result
*        Address of a location where a pointer to a new Frame will be returned
*        if the requested coordinate conversion is possible. If returned, this
*        Frame describes the coordinate system that results from applying the
*        returned Mapping (above) to the "target" coordinate system. In
*        general, this Frame will combine attributes from (and will therefore
*        be more specific than) both the target and the template Frames. In
*        particular, when the template allows the possibility of transformaing
*        to any one of a set of alternative coordinate systems, the "result"
*        Frame will indicate which of the alternatives was used.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A non-zero value is returned if the requested coordinate conversion is
*     possible. Otherwise zero is returned (this will not in itself result in
*     an error condition).

*  Notes:
*     -  A value of zero will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.

*  Implementation Notes:
*     This implementation addresses the matching of a SkyFrame class object to
*     any other class of Frame. A SkyFrame will match any class of SkyFrame
*     (i.e. possibly from a derived class) but will not match a less
*     specialised class of Frame.
*/

/* Local Variables: */
   AstFrame *frame0;          /* Pointer to Frame underlying axis 0 */
   AstFrame *frame1;          /* Pointer to Frame underlying axis 1 */
   AstSkyFrame *template;     /* Pointer to template SkyFrame structure */
   int iaxis;                 /* Axis index */
   int iaxis0;                /* Axis index underlying axis 0 */
   int iaxis1;                /* Axis index underlying axis 1 */
   int match;                 /* Coordinate conversion possible? */
   int swap1;                 /* Template axes swapped? */
   int swap2;                 /* Target axes swapped? */
   int swap;                  /* Additional axis swap needed? */
   int target_axis0;          /* Index of 1st SkyFrame axis in the target */
   int target_axis1;          /* Index of 2nd SkyFrame axis in the target */
   int target_naxes;          /* Number of target axes */

/* Initialise the returned values. */
   *template_axes = NULL;
   *target_axes = NULL;
   *map = NULL;
   *result = NULL;
   match = 0;

/* Check the global error status. */
   if ( !astOK ) return match;

/* Initialise variables to avoid "used of uninitialised variable"
   messages from dumb compilers. */
   swap = 0;
   target_axis0 = -1;
   target_axis1 = -1;

/* Obtain a pointer to the template SkyFrame structure. */
   template = (AstSkyFrame *) template_frame;

/* Obtain the number of axes in the target Frame. */
   target_naxes = astGetNaxes( target );

/* The first criterion for a match is that the template matches as a
   Frame class object. This ensures that the number of axes (2) and
   domain, etc. of the target Frame are suitable. Invoke the parent
   "astMatch" method to verify this. */
   match = (*parent_match)( template_frame, target, matchsub,
                            template_axes, target_axes, map, result, status );

/* If a match was found, annul the returned objects, which are not
   needed, but keep the memory allocated for the axis association
   arrays, which we will re-use. */
   if ( astOK && match ) {
      *map = astAnnul( *map );
      *result = astAnnul( *result );
   }

/* If OK so far, obtain pointers to the primary Frames which underlie
   all target axes. Stop when a SkyFrame axis is found. */
   if ( match && astOK ) {

      match = 0;
      for( iaxis = 0; iaxis < target_naxes; iaxis++ ) {
         astPrimaryFrame( target, iaxis, &frame0, &iaxis0 );
         if( astIsASkyFrame( frame0 ) ) {
            target_axis0 = iaxis;
            match = 1;
            break;
         } else {
            frame0 = astAnnul( frame0 );
         }
      }

/* Check at least one SkyFrame axis was found it the target. */
      if( match ) {

/* If so, search the remaining target axes for another axis that is
   derived from the same SkyFrame. */
         match = 0;
         for( iaxis++ ; iaxis < target_naxes; iaxis++ ) {
            astPrimaryFrame( target, iaxis, &frame1, &iaxis1 );
            if( frame1 == frame0 ) {
               target_axis1 = iaxis;
               frame1 = astAnnul( frame1 );
               match = 1;
               break;
            } else {
               frame1 = astAnnul( frame1 );
            }
         }

/* Annul the remaining Frame pointer used in the above tests. */
         frame0 = astAnnul( frame0 );
      }

/* If this test is passed, we can now test that the underlying axis indices
   are 0 and 1, in either order. This then ensures that we have a
   single SkyFrame (not a compound Frame) with both axes present. */
      if ( match && astOK ) {
         match = ( ( ( iaxis0 == 0 ) && ( iaxis1 == 1 ) ) ||
                   ( ( iaxis1 == 0 ) && ( iaxis0 == 1 ) ) );
      }

   }

/* If a possible match has been detected, we must now decide how the
   order of the axes in the result Frame relates to the order of axes
   in the target Frame. There are two factors involved. The first
   depends on whether the axis permutation array for the template
   SkyFrame (whose method we are executing) causes an axis
   reversal. Determine this by permuting axis index zero. */
   if ( astOK && match ) {
      swap1 = ( astValidateAxis( template, 0, 1, "astMatch" ) != 0 );

/* The second factor depends on whether the axes of the underlying
   primary SkyFrame are reversed when seen in the target Frame. */
      swap2 = ( iaxis0 != 0 );

/* Combine these to determine if an additional axis swap will be
   needed. */
      swap = ( swap1 != swap2 );

/* Now check to see if this additional swap is permitted by the
   template's Permute attribute. */
      match = ( !swap || astGetPermute( template ) );
   }

/* If the Frames still match, we next set up the axis association
   arrays. */
   if ( astOK && match ) {

/* If the target axis order is to be preserved, then the target axis
   association involves no permutation but the template axis
   association may involve an axis swap. */
      if ( astGetPreserveAxes( template ) ) {
         (*template_axes)[ 0 ] = swap;
         (*template_axes)[ 1 ] = !swap;
         (*target_axes)[ 0 ] = target_axis0;
         (*target_axes)[ 1 ] = target_axis1;

/* Otherwise, any swap applies to the target axis association
   instead. */
      } else {
         (*template_axes)[ 0 ] = 0;
         (*template_axes)[ 1 ] = 1;
         (*target_axes)[ 0 ] = swap ? target_axis1 : target_axis0;
         (*target_axes)[ 1 ] = swap ? target_axis0 : target_axis1;
      }

/* Use the target's "astSubFrame" method to create a new Frame (the
   result Frame) with copies of the target axes in the required
   order. This process also overlays the template attributes on to the
   target Frame and returns a Mapping between the target and result
   Frames which effects the required coordinate conversion. */
      match = astSubFrame( target, template, 2, *target_axes, *template_axes,
                           map, result );
   }

/* If an error occurred, or conversion to the result Frame's
   coordinate system was not possible, then free all memory, annul the
   returned objects, and reset the returned value. */
   if ( !astOK || !match ) {
      *template_axes = astFree( *template_axes );
      *target_axes = astFree( *target_axes );
      if( *map ) *map = astAnnul( *map );
      if( *result ) *result = astAnnul( *result );
      match = 0;
   }

/* Return the result. */
   return match;
}

static void MatchAxesX( AstFrame *frm2_frame, AstFrame *frm1, int *axes,
                        int *status ) {
/*
*  Name:
*     MatchAxesX

*  Purpose:
*     Find any corresponding axes in two Frames.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void MatchAxesX( AstFrame *frm2, AstFrame *frm1, int *axes )
*                      int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the protected astMatchAxesX
*     method inherited from the Frame class).

*     This function looks for corresponding axes within two supplied
*     Frames. An array of integers is returned that contains an element
*     for each axis in the second supplied Frame. An element in this array
*     will be set to zero if the associated axis within the second Frame
*     has no corresponding axis within the first Frame. Otherwise, it
*     will be set to the index (a non-zero positive integer) of the
*     corresponding axis within the first supplied Frame.

*  Parameters:
*     frm2
*        Pointer to the second Frame.
*     frm1
*        Pointer to the first Frame.
*     axes
*        Pointer to an integer array in which to return the indices of
*        the axes (within the first Frame) that correspond to each axis
*        within the second Frame. Axis indices start at 1. A value of zero
*        will be stored in the returned array for each axis in the second
*        Frame that has no corresponding axis in the first Frame.
*
*        The number of elements in this array must be greater than or
*        equal to the number of axes in the second Frame.
*     status
*        Pointer to inherited status value.

*  Notes:
*     -  Corresponding axes are identified by the fact that a Mapping
*     can be found between them using astFindFrame or astConvert. Thus,
*     "corresponding axes" are not necessarily identical. For instance,
*     SkyFrame axes in two Frames will match even if they describe
*     different celestial coordinate systems
*/

/* Local Variables: */
   AstFrame *resfrm;
   AstMapping *resmap;
   AstSkyFrame *frm2;
   int *frm2_axes;
   int *frm1_axes;
   int max_axes;
   int min_axes;
   int preserve_axes;

/* Check the global error status. */
   if ( !astOK ) return;

/* Get a pointer to the SkyFrame. */
   frm2 = (AstSkyFrame *) frm2_frame;

/* Temporarily ensure that the PreserveAxes attribute is non-zero in
   the first supplied Frame. This means thte result Frame returned by
   astMatch below will have the axis count and order of the target Frame
   (i.e. "pfrm"). */
   if( astTestPreserveAxes( frm1 ) ) {
      preserve_axes = astGetPreserveAxes( frm1 ) ? 1 : 0;
   } else {
      preserve_axes = -1;
   }
   astSetPreserveAxes( frm1, 1 );

/* Temporarily ensure that the MaxAxes and MinAxes attributes in the
   first supplied Frame are set so the Frame can be used as a template
   in astMatch for matching any number of axes. */
   if( astTestMaxAxes( frm1 ) ) {
      max_axes = astGetMaxAxes( frm1 );
   } else {
      max_axes = -1;
   }
   astSetMaxAxes( frm1, 10000 );

   if( astTestMinAxes( frm1 ) ) {
      min_axes = astGetMinAxes( frm1 );
   } else {
      min_axes = -1;
   }
   astSetMinAxes( frm1, 1 );

/* Attempt to find a sub-frame within the first supplied Frame that
   corresponds to the supplied SkyFrame. */
   if( astMatch( frm1, frm2, 1, &frm1_axes, &frm2_axes, &resmap, &resfrm ) ) {

/* If successfull, Store the one-based index within "frm1" of the
   corresponding axes. */
      axes[ 0 ] = frm1_axes[ 0 ] + 1;
      axes[ 1 ] = frm1_axes[ 1 ] + 1;

/* Free resources */
      frm1_axes = astFree( frm1_axes );
      frm2_axes = astFree( frm2_axes );
      resmap = astAnnul( resmap );
      resfrm = astAnnul( resfrm );

/* If no corresponding SkyFrame was found store zeros in the returned array. */
   } else {
      axes[ 0 ] = 0;
      axes[ 1 ] = 0;
   }

/* Re-instate the original attribute values in the first supplied Frame. */
   if( preserve_axes == -1 ) {
      astClearPreserveAxes( frm1 );
   } else {
      astSetPreserveAxes( frm1, preserve_axes );
   }

   if( max_axes == -1 ) {
      astClearMaxAxes( frm1 );
   } else {
      astSetMaxAxes( frm1, max_axes );
   }

   if( min_axes == -1 ) {
      astClearMinAxes( frm1 );
   } else {
      astSetMinAxes( frm1, min_axes );
   }
}

static void Norm( AstFrame *this_frame, double value[], int *status ) {
/*
*  Name:
*     Norm

*  Purpose:
*     Normalise a set of SkyFrame coordinates.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void Norm( AstAxis *this, double value[], int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astNorm method inherited
*     from the Frame class).

*  Description:
*     This function converts a set of SkyFrame coordinate values,
*     which might potentially be unsuitable for display to a user (for
*     instance, may lie outside the expected range of values) into a
*     set of acceptable alternative values suitable for display.
*
*     This is done by wrapping coordinates so that the latitude lies
*     in the range (-pi/2.0) <= latitude <= (pi/2.0). If the NegLon
*     attribute is zero (the default), then the wrapped longitude value
*     lies in the range 0.0 <= longitude < (2.0*pi). Otherwise, it lies
*     in the range -pi <= longitude < pi.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     value
*        An array of double, with one element for each SkyFrame axis.
*        This should contain the initial set of coordinate values,
*        which will be modified in place.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   const int *perm;              /* Axis permutation array */
   double sky_lat;               /* Sky latitude value */
   double sky_long;              /* Sky longitude value */
   double v[ 2 ];                /* Permuted value coordinates */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Obtain a pointer to the SkyFrame's axis permutation array. */
   perm = astGetPerm( this );
   if ( astOK ) {

/* Obtain the sky longitude and latitude values, allowing for any axis
   permutation. */
      v[ perm[ 0 ] ] = value[ 0 ];
      v[ perm[ 1 ] ] = value[ 1 ];
      sky_long = v[ 0 ];
      sky_lat = v[ 1 ];

/* Test if both values are OK (i.e. not "bad"). */
      if ( ( sky_long != AST__BAD ) && ( sky_lat != AST__BAD ) ) {

/* Fold the longitude value into the range 0 to 2*pi and the latitude into
   the range -pi to +pi. */
         sky_long = palDranrm( sky_long );
         sky_lat = palDrange( sky_lat );

/* If the latitude now exceeds pi/2, shift the longitude by pi in whichever
   direction will keep it in the range 0 to 2*pi. */
         if ( sky_lat > ( pi / 2.0 ) ) {
            sky_long += ( sky_long < pi ) ? pi : -pi;

/* Reflect the latitude value through the pole, so it lies in the range 0 to
   pi/2. */
            sky_lat = pi - sky_lat;

/* If the latitude is less than -pi/2, shift the longitude in the same way
   as above. */
         } else if ( sky_lat < -( pi / 2.0 ) ) {
            sky_long += ( sky_long < pi ) ? pi : -pi;

/* But reflect the latitude through the other pole, so it lies in the range
   -pi/2 to 0. */
            sky_lat = -pi - sky_lat;
         }

/* If only the longitude value is valid, wrap it into the range 0 to 2*pi. */
      } else if ( sky_long != AST__BAD ) {
         sky_long = palDranrm( sky_long );

/* If only the latitude value is valid, wrap it into the range -pi to +pi. */
      } else if ( sky_lat != AST__BAD ) {
         sky_lat = palDrange( sky_lat );

/* Then refect through one of the poles (as above), if necessary, to move it
   into the range -pi/2 to +pi/2. */
         if ( sky_lat > ( pi / 2.0 ) ) {
            sky_lat = pi - sky_lat;
         } else if ( sky_lat < -( pi / 2.0 ) ) {
            sky_lat = -pi - sky_lat;
         }
      }

/* Convert 2*pi longitude into zero. Allow for a small error. */
      if ( fabs( sky_long - ( 2.0 * pi ) ) <=
          ( 2.0 * pi ) * ( DBL_EPSILON * (double) FLT_RADIX ) ) sky_long = 0.0;

/* If the NegLon attribute is set, and the longitude value is good,
   convert it into the range -pi to +pi. */
      if( sky_long != AST__BAD && astGetNegLon( this ) ) {
         sky_long = palDrange( sky_long );
      }

/* Return the new values, allowing for any axis permutation. */
      v[ 0 ] = sky_long;
      v[ 1 ] = sky_lat;
      value[ 0 ] = v[ perm[ 0 ] ];
      value[ 1 ] = v[ perm[ 1 ] ];
   }
}

static void NormBox( AstFrame *this_frame, double lbnd[], double ubnd[],
                     AstMapping *reg, int *status ) {
/*
*  Name:
*     NormBox

*  Purpose:
*     Extend a box to include effect of any singularities in the Frame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void astNormBox( AstFrame *this, double lbnd[], double ubnd[],
*                      AstMapping *reg, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astNormBox method inherited
*     from the Frame class).

*  Description:
*     This function modifies a supplied box to include the effect of any
*     singularities in the co-ordinate system represented by the Frame.
*     For a normal Cartesian coordinate system, the box will be returned
*     unchanged. Other classes of Frame may do other things. For instance,
*     a SkyFrame will check to see if the box contains either the north
*     or south pole and extend the box appropriately.

*  Parameters:
*     this
*        Pointer to the Frame.
*     lbnd
*        An array of double, with one element for each Frame axis
*        (Naxes attribute). Initially, this should contain a set of
*        lower axis bounds for the box. They will be modified on exit
*        to include the effect of any singularities within the box.
*     ubnd
*        An array of double, with one element for each Frame axis
*        (Naxes attribute). Initially, this should contain a set of
*        upper axis bounds for the box. They will be modified on exit
*        to include the effect of any singularities within the box.
*     reg
*        A Mapping which should be used to test if any singular points are
*        inside or outside the box. The Mapping should leave an input
*        position unchanged if the point is inside the box, and should
*        set all bad if the point is outside the box.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   const int *perm;              /* Axis permutation array */
   double lb[ 2 ];               /* Permuted lower bounds */
   double t;                     /* Temporary storage */
   double t2;                    /* Temporary storage */
   double ub[ 2 ];               /* Permuted upper bounds */
   double x[2];                  /* 1st axis values at poles */
   double xo[2];                 /* Tested 1st axis values at poles */
   double y[2];                  /* 2nd axis values at poles */
   double yo[2];                 /* Tested 2nd axis values at poles */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Obtain a pointer to the SkyFrame's axis permutation array. */
   perm = astGetPerm( this );
   if( perm ) {

/* Obtain the sky longitude and latitude limits, allowing for any axis
   permutation. */
      lb[ perm[ 0 ] ] = lbnd[ 0 ];
      lb[ perm[ 1 ] ] = lbnd[ 1 ];
      ub[ perm[ 0 ] ] = ubnd[ 0 ];
      ub[ perm[ 1 ] ] = ubnd[ 1 ];

/* Use the supplied Mapping to test if box includes either pole. */
      if( perm[ 0 ] == 0 ) {
         x[ 0 ] = 0.0;
         y[ 0 ] = AST__DPIBY2;
         x[ 1 ] = 0.0;
         y[ 1 ] = -AST__DPIBY2;
      } else {
         x[ 0 ] = AST__DPIBY2;
         y[ 0 ] = 0.0;
         x[ 1 ] = -AST__DPIBY2;
         y[ 1 ] = 0.0;
      }
      astTran2( reg, 2, x, y, 1, xo, yo );

/* If the box includes the north pole... */
      if( xo[ 0 ] != AST__BAD ) {

/* Find the lowest latitude after normalisation. */
         if( ub[ 1 ] != AST__BAD &&  lb[ 1 ] != AST__BAD ){
            t = palDrange( ub[ 1 ] );
            t2 = palDrange( lb[ 1 ] );
            if( t2 < t ) t = t2;
         } else {
            t = AST__BAD;
         }

/* Set the lower returned limit to this value and the upper returned limit
   to +90 degs */
         lb[ 1 ] = t;
         ub[ 1 ] = AST__DPIBY2;

/* Set the longitude range to 0 to 2PI */
         lb[ 0 ] = 0;
         ub[ 0 ] = 2*AST__DPI;

      }

/* If the box includes the south pole... */
      if( xo[ 1 ] != AST__BAD ) {

/* Find the highest latitude after normalisation. */
         if( ub[ 1 ] != AST__BAD &&  lb[ 1 ] != AST__BAD ){
            t = palDrange( ub[ 1 ] );
            t2 = palDrange( lb[ 1 ] );
            if( t2 > t ) t = t2;
         } else {
            t = AST__BAD;
         }

/* Set the upper returned limit to this value and the lower returned limit
   to -90 degs */
         lb[ 1 ] = -AST__DPIBY2;
         ub[ 1 ] = t;

/* Set the longitude range to 0 to 2PI */
         lb[ 0 ] = 0;
         ub[ 0 ] = 2*AST__DPI;
      }

/* Return the modified limits. */
      lbnd[ 0 ] = lb[ perm[ 0 ] ];
      lbnd[ 1 ] = lb[ perm[ 1 ] ];
      ubnd[ 0 ] = ub[ perm[ 0 ] ];
      ubnd[ 1 ] = ub[ perm[ 1 ] ];
   }
}

static AstPointSet *NormalPoints( AstFrame *this_frame, AstPointSet *in, int contig,
                                  AstPointSet *out, int *status ) {
/*
*  Name:
*     NormalPoints

*  Purpose:
*     Normalise a collection of points.

*  Type:
*     SkyFrame member function (over-rides the astNormalPoints method inherited
*     from the Frame class).

*  Synopsis:
*     #include "frame.h"
*     AstPointSet *NormalPoints( AstFrame *this, AstPointSet *in,
*                                int contig, AstPointSet *out )

*  Description:
*     This function normalises the axis values representing a collection
*     of points within a Frame. The normalisation can be done in two ways
*     - 1) to put the axis values into the range expected for display to
*     human readers or 2) to put the axis values into which ever range
*     avoids discontinuities within the collection of positions. Using
*     method 1) is the same as using function astNorm on each point in the
*     collection. Using method 2) is useful when handling collections of
*     points that may span some discontinuity in the coordinate system.

*  Parameters:
*     this
*        Pointer to the Frame. The nature of the axis normalisation
*        will depend on the class of Frame supplied.
*     in
*        Pointer to the PointSet holding the input coordinate data.
*     contig
*        Indicates the way in which the normalised axis values are to be
*        calculated. A non-zero value causes the values to be normalised
*        in such a way as to reduce the effects of any discontinuities in
*        the coordinate system. For instance, points in a SkyFrame that
*        span longitude zero will be normalized into a longitude range of
*        -pi to +pi (otherwise they will be normalized into a range of
*        zero to 2.pi). A zero value causes each point to be normalised
*        independently using astNorm.
*     out
*        Pointer to a PointSet which will hold the normalised
*        (output) coordinate values. A NULL value may also be given,
*        in which case a new PointSet will be created by this
*        function.

*  Returned Value:
*     Pointer to the output (possibly new) PointSet.

*  Notes:
*     - The number of coordinate values per point in the input and output
*     PointSet must each match the number of axes for the Frame being
*     used.
*     - If an output PointSet is supplied, it must have space for
*     sufficient number of points and coordinate values per point to
*     accommodate the result. Any excess space will be ignored.
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*-
*/

/* Local Variables: */
   AstDim hist[ 360 ];           /* Histogram of longitude values (degs) */
   AstPointSet *result;          /* Pointer to output PointSet */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   const int *perm;              /* Axis permutation array */
   double **ptr_out;             /* Pointer to output pointset data arrays */
   double *ptr_long;             /* Pointer to array of longitude values */
   double hi;                    /* Highest acceptable longitude value (rads) */
   double lo;                    /* Lowest acceptable longitude value (rads) */
   int centre;                   /* Index at centre of longitude values */
   int gap_end;                  /* Index of last bin in current gap */
   int gap_size;                 /* Length of current gap */
   int gap_start;                /* Index of first bin in current gap */
   int ifirst;                   /* Index of first non-empty bin */
   int ihist;                    /* Index into "hist" */
   int ilast;                    /* Index of last non-empty bin */
   int ingap;                    /* Currently in a gap? */
   int maxgap;                   /* Length of largest gap found so far */
   int maxgap_centre;            /* Index at centre of largest gap found so far */
   int npoint;                   /* Number of points to transform */
   int point;                    /* Loop counter for points */

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Apply the parent astNormalPoints method using the stored pointer to the
   NormaPoints member function inherited from the parent Frame class. This
   function validates all arguments and generates an output PointSet if
   necessary. In addition it also calls astNorm to normalise each position.
   The longitude values in the "result' PointSet will be in the range zero
   to 2.pi */
   result = (*parent_normalpoints)( this_frame, in, contig, out, status );

/* If required, modify the returned values to ensure the longitude values
   are contiguous. */
   if( contig ) {

/* Get the number of points in the PointSet and a pointer to the data
   array. */
      npoint = astGetNpoint( result );
      ptr_out = astGetPoints( result );

/* Obtain a pointer to the SkyFrame's axis permutation array. */
      perm = astGetPerm( this );
      if ( astOK ) {

/* Get a pointer to the longitude array, allowing for any axis permutation. */
         ptr_long =  ptr_out[  perm[ 0 ] ];

/* Bin the longitude values into 1 degree bins. */
         memset( hist, 0, sizeof( hist ) );
         for( point = 0; point < npoint; point++, ptr_long++ ){
            if ( *ptr_long != AST__BAD  ) {
               ihist = (int) ( (*ptr_long)*AST__DR2D );
               if( ihist >= 0 && ihist < 360 ) hist[ ihist ]++;
            }
         }

/* Find the largest gap (a contiguous group of zeros) in the histogram.
   Also note the indices of the first and last non-zero bins in the
   histogram. */
         ingap = 0;
         maxgap = 0;
         ifirst = -1;
         ilast = -1;
         for( ihist = 0; ihist < 360; ihist++ ){
            if( hist[ ihist ] == 0 ) {
               if( !ingap ){
                  ingap = 1;
                  gap_start = ihist;
               }
            } else {
               if( ingap ){
                  ingap = 0;
                  gap_end = ihist - 1;
                  gap_size = gap_end - gap_start + 1;
                  if( gap_size > maxgap ) {
                     maxgap = gap_size;
                     maxgap_centre = (gap_start + gap_end)/2;
                  }
               }
               if( ifirst == -1 ) ifirst = ihist;
               ilast = ihist;
            }
         }

/* Get the length of the gap that would occur if the gaps at end and
   start of the histogram were combined together. If this is larger than
   the largest gap found within the histogram, use it. */
         gap_start = ilast - 360;
         gap_end = ifirst;
         gap_size = gap_end - gap_start + 1;
         if( gap_size > maxgap ) {
            maxgap = gap_size;
            maxgap_centre = (gap_start + gap_end)/2;
         }

/* The centre of the longitude points is assumed to be diametrically
   opposite the centre of the largest gap. */
         if( maxgap_centre > 0 ) {
            centre = maxgap_centre - 180;
         } else {
            centre = maxgap_centre + 180;
         }

/* Ensure all longitude values are in the range centre-pi to centre+pi. */
         lo = ( centre - 180 )*AST__DD2R;
         hi = lo + 2*AST__DPI;
         ptr_long =  ptr_out[  perm[ 0 ] ];
         for( point = 0; point < npoint; point++, ptr_long++ ){
            if ( *ptr_long != AST__BAD  ) {
               while( *ptr_long < lo ) *ptr_long += 2*AST__DPI;
               while( *ptr_long > hi ) *ptr_long -= 2*AST__DPI;
            }
         }
      }
   }

/* Return a pointer to the output PointSet. */
   return result;
}

static void Offset( AstFrame *this_frame, const double point1[],
                    const double point2[], double offset, double point3[], int *status ) {
/*
*  Name:
*     Offset

*  Purpose:
*     Calculate an offset along a geodesic curve.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void Offset( AstFrame *this,
*                  const double point1[], const double point2[],
*                  double offset, double point3[], int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astOffset method
*     inherited from the Frame class).

*  Description:
*     This function finds the SkyFrame coordinate values of a point
*     which is offset a specified distance along the geodesic curve
*     (i.e. great circle) between two other points.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     point1
*        An array of double, with one element for each SkyFrame axis.
*        This should contain the coordinates of the point marking the
*        start of the geodesic curve.
*     point2
*        An array of double, with one element for each SkyFrame axis.
*        This should contain the coordinates of the point marking the
*        end of the geodesic curve.
*     offset
*        The required offset from the first point along the geodesic
*        curve, in radians. If this is positive, it will be towards
*        the second point. If it is negative, it will be in the
*        opposite direction. This offset need not imply a position
*        lying between the two points given, as the curve will be
*        extrapolated if necessary.
*     point3
*        An array of double, with one element for each SkyFrame axis
*        in which the coordinates of the required point will be
*        returned.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     - The geodesic curve used by this function is the path of
*     shortest distance between two points, as defined by the
*     astDistance function.
*     - This function will return "bad" coordinate values (AST__BAD)
*     if any of the input coordinates has this value.
*     - "Bad" coordinate values will also be returned if the two
*     points supplied are coincident (or otherwise fail to uniquely
*     specify a geodesic curve) but the requested offset is non-zero.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   const int *perm;              /* Pointer to axis permutation array */
   double mrot[ 3 ][ 3 ];        /* Rotation matrix */
   double p1[ 2 ];               /* Permuted coordinates for point1 */
   double p2[ 2 ];               /* Permuted coordinates for point2 */
   double p3[ 2 ];               /* Permuted coordinates for point3 */
   double scale;                 /* Scale factor */
   double v1[ 3 ];               /* 3-vector for p1 */
   double v2[ 3 ];               /* 3-vector for p2 */
   double v3[ 3 ];               /* 3-vector for p3 */
   double vmod;                  /* Modulus of vector */
   double vrot[ 3 ];             /* Vector along rotation axis */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Obtain a pointer to the SkyFrame's axis permutation array. */
   perm = astGetPerm( this );
   if ( astOK ) {

/* Check that all supplied coordinates are OK. If not, generate "bad"
   output coordinates. */
      if ( ( point1[ 0 ] == AST__BAD ) || ( point1[ 1 ] == AST__BAD ) ||
           ( point2[ 0 ] == AST__BAD ) || ( point2[ 1 ] == AST__BAD ) ) {
         point3[ 0 ] = AST__BAD;
         point3[ 1 ] = AST__BAD;

/* Otherwise, apply the axis permutation array to obtain the
   coordinates of the two input points in the required
   (longitude,latitude) order. */
      } else {
         p1[ perm[ 0 ] ] = point1[ 0 ];
         p1[ perm[ 1 ] ] = point1[ 1 ];
         p2[ perm[ 0 ] ] = point2[ 0 ];
         p2[ perm[ 1 ] ] = point2[ 1 ];

/* Convert each point into a 3-vector of unit length. */
         palDcs2c( p1[ 0 ], p1[ 1 ], v1 );
         palDcs2c( p2[ 0 ], p2[ 1 ], v2 );

/* Find the cross product between these two vectors (the vector order
   is reversed here to compensate for the sense of rotation introduced
   by palDav2m and palDmxv below). */
         palDvxv( v2, v1, v3 );

/* Normalise the cross product vector, also obtaining its original
   modulus. */
         palDvn( v3, vrot, &vmod );

/* If the original modulus was zero, the input points are either
   coincident or diametrically opposite, so do not uniquely define a
   great circle. In either case, we can only generate output
   coordinates if the offset required is an exact multiple of pi. If
   it is, generate the 3-vector that results from rotating the first
   input point through this angle. */
         if ( vmod == 0.0 ) {
            if ( sin( offset ) == 0.0 ) {
               scale = cos( offset );
               v3[ 0 ] = v1[ 0 ] * scale;
               v3[ 1 ] = v1[ 1 ] * scale;
               v3[ 2 ] = v1[ 2 ] * scale;

/* Convert the 3-vector back into spherical cooordinates and then
   constrain the longitude result to lie in the range 0 to 2*pi
   (palDcc2s doesn't do this itself). */
               palDcc2s( v3, &p3[ 0 ], &p3[ 1 ] );
               p3[ 0 ] = palDranrm( p3[ 0 ] );

/* If the offset was not a multiple of pi, generate "bad" output
   coordinates. */
            } else {
               p3[ 0 ] = AST__BAD;
               p3[ 1 ] = AST__BAD;
            }

/* If the two input points define a great circle, scale the normalised
   cross product vector to make its length equal to the required
   offset (angle) between the first input point and the result. */
         } else {
            vrot[ 0 ] *= offset;
            vrot[ 1 ] *= offset;
            vrot[ 2 ] *= offset;

/* Generate the rotation matrix that implements this rotation and use
   it to rotate the first input point (3-vector) to give the required
   result (3-vector). */
            palDav2m( vrot, mrot );
            palDmxv( mrot, v1, v3 );

/* Convert the 3-vector back into spherical cooordinates and then
   constrain the longitude result to lie in the range 0 to 2*pi. */
            palDcc2s( v3, &p3[ 0 ], &p3[ 1 ] );
            p3[ 0 ] = palDranrm( p3[ 0 ] );
         }

/* Permute the result coordinates to undo the effect of the SkyFrame
   axis permutation array. */
         point3[ 0 ] = p3[ perm[ 0 ] ];
         point3[ 1 ] = p3[ perm[ 1 ] ];
      }
   }
}

static AstMapping *SkyOffsetMap( AstSkyFrame *this, int *status ){
/*
*++
*  Name:
c     astSkyOffsetMap
f     AST_SKYOFFSETMAP

*  Purpose:
*     Returns a Mapping which goes from absolute coordinates to offset
*     coordinates.

*  Type:
*     Public virtual function.

*  Synopsis:
c     #include "skyframe.h"
c     AstMapping *astSkyOffsetMap( AstSkyFrame *this )
f     RESULT = AST_SKYOFFSETMAP( THIS, STATUS )

*  Class Membership:
*     SkyFrame method.

*  Description:
*     This function returns a Mapping in which the forward transformation
*     transforms a position in the coordinate system given by the System
*     attribute of the supplied SkyFrame, into the offset coordinate system
*     specified by the SkyRef, SkyRefP and SkyRefIs attributes of the
*     supplied SkyFrame.
*
*     A UnitMap is returned if the SkyFrame does not define an offset
*     coordinate system.

*  Parameters:
c     this
f     THIS = INTEGER (Given)
*        Pointer to the SkyFrame.
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Returned Value:
c     astSkyOffsetMap()
f     AST_SKYOFFSETMAP = INTEGER
*        Pointer to the returned Mapping.

*  Notes:
*     - A null Object pointer (AST__NULL) will be returned if this
c     function is invoked with the AST error status set, or if it
f     function is invoked with STATUS set to an error value, or if it
*     should fail for any reason.
*--
*/

/* Local Variables: */
   AstCmpMap *map3;            /* Partial Mapping. */
   AstMapping *result;         /* The returned Mapping. */
   AstMatrixMap *map1;         /* Spherical rotation in 3D cartesian space */
   AstSphMap *map2;            /* 3D Cartesian to 2D spherical Mapping */
   double *vx;                 /* Pointer to x unit vector. */
   double *vy;                 /* Pointer to y unit vector. */
   double *vz;                 /* Pointer to z unit vector. */
   double mat[ 9 ];            /* Spherical rotation matrix */
   double vmod;                /* Length of vector (+ve) */
   double vp[ 3 ];             /* Unit vector representin SkyRefP position. */
   int lataxis;                /* Index of the latitude axis */
   int lonaxis;                /* Index of the longitude axis */

/* Initialise. */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Return a UnitMap if the offset coordinate system is not defined. */
   if( astGetSkyRefIs( this ) == AST__IGNORED_REF ||
       ( !astTestSkyRef( this, 0 ) && !astTestSkyRef( this, 1 ) ) ) {
      result = (AstMapping *) astUnitMap( 2, "", status );

/* Otherwise... */
   } else {

/* Get the longitude and latitude at the reference point and at a point
   on the primary meridian. */
      lataxis = astGetLatAxis( this );
      lonaxis = 1 - lataxis;

/* Initialise pointers to the rows of the 3x3 matrix. Each row will be
   used to store a unit vector. */
      vx = mat;
      vy = mat + 3;
      vz = mat + 6;

/* The following trig converts between (longitude,latitude) and (x,y,z)
   on a unit sphere, in which (0,0) is at (1,0,0), (0,pi/2) is (0,0,1)
   and (pi/2,0) is at (0,1,0). */

/* First deal with cases where the SkyRef attribute holds the standard
   coords at the origin of the offset coordinate system. */
      if( astGetSkyRefIs( this ) == AST__ORIGIN_REF ) {

/* Convert each point into a 3-vector of unit length. The SkyRef position
   defines the X axis in the offset coord system. */
         palDcs2c( astGetSkyRef( this, lonaxis ), astGetSkyRef( this, lataxis ), vx );
         palDcs2c( astGetSkyRefP( this, lonaxis ), astGetSkyRefP( this, lataxis ), vp );

/* The Y axis is perpendicular to both the X axis and the skyrefp
   position. That is, it is parallel to the cross product of the 2 above
   vectors.*/
         palDvxv( vp, vx, vy );

/* Normalize the y vector. */
         palDvn( vy, vy, &vmod );

/* Report an error if the modulus of the vector is zero.*/
         if( vmod == 0.0 ) {
            astError( AST__BADOC, "astConvert(%s): The position specified by the SkyRefP "
                      "attribute is either coincident, with or opposite to, the "
                      "position specified by the SkyRef attribute.", status, astGetClass( this ) );

/* If OK, form the Z axis as the cross product of the x and y axes. */
         } else {
            palDvxv( vx, vy, vz );

         }

/* Now deal with cases where the SkyRef attribute holds the standard
   coords at the north pole of the offset coordinate system. */
      } else {

/* Convert each point into a 3-vector of unit length. The SkyRef position
   defines the Z axis in the offset coord system. */
         palDcs2c( astGetSkyRef( this, lonaxis ), astGetSkyRef( this, lataxis ), vz );
         palDcs2c( astGetSkyRefP( this, lonaxis ), astGetSkyRefP( this, lataxis ), vp );

/* The Y axis is perpendicular to both the Z axis and the skyrefp
   position. That is, it is parallel to the cross product of the 2 above
   vectors.*/
         palDvxv( vz, vp, vy );

/* Normalize the y vector. */
         palDvn( vy, vy, &vmod );

/* Report an error if the modulus of the vector is zero.*/
         if( vmod == 0.0 ) {
            astError( AST__BADOC, "astConvert(%s): The position specified by the SkyRefP "
                      "attribute is either coincident, with or opposite to, the "
                      "position specified by the SkyRef attribute.", status, astGetClass( this ) );

/* If OK, form the X axis as the cross product of the y and z axes. */
         } else {
            palDvxv( vy, vz, vx );
         }
      }

/* Create a MatrixMap which implements the above spherical rotation. Each
   row in this matrix represents one of the unit axis vectors found above. */
      map1 = astMatrixMap( 3, 3, 0, mat, "", status );

/* Create a 3D cartesian to 2D spherical Mapping. */
      map2 = astSphMap( "UnitRadius=1", status );

/* Form a series CmpMap which converts from 2D (long,lat) in the base
   System to 2D (long,lat) in the offset coordinate system. */
      map3 = astCmpMap( map1, map2, 1, "", status );
      astInvert( map2 );
      result = (AstMapping *) astCmpMap( map2, map3, 1, "", status );

/* Free resources. */
      map1 = astAnnul( map1 );
      map2 = astAnnul( map2 );
      map3 = astAnnul( map3 );
   }

/* Annul the returned Mapping if anything has gone wrong. */
   if( !astOK ) result = astAnnul( result );

/* Return the result. */
   return result;

}

static double Offset2( AstFrame *this_frame, const double point1[2],
                       double angle, double offset, double point2[2], int *status ) {
/*
*  Name:
*     Offset2

*  Purpose:
*     Calculate an offset along a geodesic curve at a given bearing.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     double Offset2( AstFrame *this_frame, const double point1[2],
*                     double angle, double offset, double point2[2], int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astOffset2 method
*     inherited from the Frame class).

*  Description:
*     This function finds the SkyFrame coordinate values of a point
*     which is offset a specified distance along the geodesic curve
*     (i.e. great circle) at a given angle from a given starting point.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     point1
*        An array of double, with one element for each SkyFrame axis.
*        This should contain the coordinates of the point marking the
*        start of the geodesic curve.
*     angle
*        The angle (in radians) from the positive direction of the second
*        axis, to the direction of the required position, as seen from
*        the starting position. Positive rotation is in the sense of
*        rotation from the positive direction of axis 2 to the positive
*        direction of axis 1.
*     offset
*        The required offset from the first point along the geodesic
*        curve, in radians. If this is positive, it will be towards
*        the given angle. If it is negative, it will be in the
*        opposite direction.
*     point2
*        An array of double, with one element for each SkyFrame axis
*        in which the coordinates of the required point will be
*        returned.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The direction of the geodesic curve at the end point. That is, the
*     angle (in radians) between the positive direction of the second
*     axis and the continuation of the geodesic curve at the requested
*     end point. Positive rotation is in the sense of rotation from
*     the positive direction of axis 2 to the positive direction of axis
*     1.

*  Notes:
*     - The geodesic curve used by this function is the path of
*     shortest distance between two points, as defined by the
*     astDistance function.
*     - This function will return "bad" coordinate values (AST__BAD)
*     if any of the input coordinates has this value.
*/

/* Local Variables: */
   AstSkyFrame *this;          /* Pointer to the SkyFrame structure */
   const int *perm;            /* Pointer to axis permutation array */
   double p1[ 2 ];             /* Permuted coordinates for point1 */
   double p2[ 2 ];             /* Permuted coordinates for point2 */
   double result;              /* The returned answer */
   double cosoff;              /* Cosine of offset */
   double cosa1;               /* Cosine of longitude at start */
   double cosb1;               /* Cosine of latitude at start */
   double pa;                  /* A position angle measured from north */
   double q1[ 3 ];             /* Vector PI/2 away from R4 in meridian of R4 */
   double q2[ 3 ];             /* Vector PI/2 away from R4 on equator */
   double q3[ 3 ];             /* Vector PI/2 away from R4 on great circle */
   double r0[ 3 ];             /* Reference position vector */
   double r3[ 3 ];             /* Vector PI/2 away from R0 on great circle */
   double sinoff;              /* Sine of offset */
   double sina1;               /* Sine of longitude at start */
   double sinb1;               /* Sine of latitude at start */

/* Initialise. */
   result = AST__BAD;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Obtain a pointer to the SkyFrame's axis permutation array. */
   perm = astGetPerm( this );
   if ( astOK ) {

/* Check that all supplied values are OK. If not, generate "bad"
   output coordinates. */
      if ( ( point1[ 0 ] == AST__BAD ) || ( point1[ 1 ] == AST__BAD ) ||
           ( angle == AST__BAD ) || ( offset == AST__BAD ) ) {
         point2[ 0 ] = AST__BAD;
         point2[ 1 ] = AST__BAD;

/* Otherwise, apply the axis permutation array to obtain the
   coordinates of the starting point in the required (longitude,latitude)
   order. */
      } else {
         p1[ perm[ 0 ] ] = point1[ 0 ];
         p1[ perm[ 1 ] ] = point1[ 1 ];

/* If the axes are permuted, convert the supplied angle into a position
   angle. */
         pa = ( perm[ 0 ] == 0 )? angle: piby2 - angle;

/* Use Shcal to calculate the required vectors R0 (representing
   the reference point) and R3 (representing the point which is 90
   degrees away from the reference point, along the required great
   circle). The XY plane defines zero latitude, Z is in the direction
   of increasing latitude, X is towards zero longitude, and Y is
   towards longitude 90 degrees. */
         Shcal( p1[ 0 ], p1[ 1 ], pa, r0, r3, status );

/* Use Shapp to use R0 and R3 to calculate the new position. */
         Shapp( offset, r0, r3,  p1[ 0 ], p2, status );

/* Normalize the result. */
         astNorm( this, p2 );

/* Create the vector Q1 representing the point in the meridian of the
   required point which has latitude 90 degrees greater than the
   required point. */
         sina1 = sin( p2[ 0 ] );
         cosa1 = cos( p2[ 0 ] );
         sinb1 = sin( p2[ 1 ] );
         cosb1 = cos( p2[ 1 ] );

         q1[ 0 ] = -sinb1*cosa1;
         q1[ 1 ] = -sinb1*sina1;
         q1[ 2 ] = cosb1;

/* Create the vector Q2 representing the point on the equator (i.e. a
   latitude of zero), which has a longitude 90 degrees to the west of
   the required point. */
         q2[ 0 ] = -sina1;
         q2[ 1 ] =  cosa1;
         q2[ 2 ] =  0.0;

/* Create the vector Q3 representing the point which is 90 degrees away
   from the required point, along the required great circle. */
         cosoff = cos( offset );
         sinoff = sin( offset );

         q3[ 0 ] = -sinoff*r0[ 0 ] + cosoff*r3[ 0 ];
         q3[ 1 ] = -sinoff*r0[ 1 ] + cosoff*r3[ 1 ];
         q3[ 2 ] = -sinoff*r0[ 2 ] + cosoff*r3[ 2 ];

/* Calculate the position angle of the great circle at the required
   point. */
         pa = atan2( palDvdv( q3, q2 ), palDvdv( q3, q1 ) );

/* Convert this from a pa into the required angle. */
         result = ( perm[ 0 ] == 0 )? pa: piby2 - pa;

/* Ensure that the end angle is in the range 0 to 2*pi. */
         result = palDranrm( result );

/* Permute the result coordinates to undo the effect of the SkyFrame
   axis permutation array. */
         point2[ 0 ] = p2[ perm[ 0 ] ];
         point2[ 1 ] = p2[ perm[ 1 ] ];
      }
   }

/* Return the result. */
   return result;

}

static void Overlay( AstFrame *template, const int *template_axes,
                     AstFrame *result, int *status ) {
/*
*  Name:
*     Overlay

*  Purpose:
*     Overlay the attributes of a template SkyFrame on to another Frame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void Overlay( AstFrame *template, const int *template_axes,
*                   AstFrame *result, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the protected astOverlay method
*     inherited from the Frame class).

*  Description:
*     This function overlays attributes of a SkyFrame (the "template") on to
*     another Frame, so as to over-ride selected attributes of that second
*     Frame. Normally only those attributes which have been specifically set
*     in the template will be transferred. This implements a form of
*     defaulting, in which a Frame acquires attributes from the template, but
*     retains its original attributes (as the default) if new values have not
*     previously been explicitly set in the template.
*
*     Note that if the result Frame is a SkyFrame and a change of sky
*     coordinate system occurs as a result of overlaying its System
*     attribute, then some of its original attribute values may no
*     longer be appropriate (e.g. the Title, or attributes describing
*     its axes). In this case, these will be cleared before overlaying
*     any new values.

*  Parameters:
*     template
*        Pointer to the template SkyFrame, for which values should have been
*        explicitly set for any attribute which is to be transferred.
*     template_axes
*        Pointer to an array of int, with one element for each axis of the
*        "result" Frame (see below). For each axis in the result frame, the
*        corresponding element of this array should contain the (zero-based)
*        index of the template axis to which it corresponds. This array is used
*        to establish from which template axis any axis-dependent attributes
*        should be obtained.
*
*        If any axis in the result Frame is not associated with a template
*        axis, the corresponding element of this array should be set to -1.
*
*        If a NULL pointer is supplied, the template and result axis
*        indices are assumed to be identical.
*     result
*        Pointer to the Frame which is to receive the new attribute values.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     void

*  Notes:
*     -  In general, if the result Frame is not from the same class as the
*     template SkyFrame, or from a class derived from it, then attributes may
*     exist in the template SkyFrame which do not exist in the result Frame. In
*     this case, these attributes will not be transferred.
*/


/* Local Variables: */
   AstSystemType new_alignsystem;/* Code identifying new alignment coords */
   AstSystemType new_system;     /* Code identifying new sky cordinates */
   AstSystemType old_system;     /* Code identifying old sky coordinates */
   int axis;                     /* Loop counter for result SkyFrame axes */
   int skyref_changed;           /* Has the SkyRef attribute changed? */
   int reset_system;             /* Was the template System value cleared? */
   int skyframe;                 /* Result Frame is a SkyFrame? */
   int tax0;                     /* Template axis for result axis 0 */
   int tax1;                     /* Template axis for result axis 1 */

/* Check the global error status. */
   if ( !astOK ) return;

/* Indicate that we do not need to reset the System attribute of the
   template. */
   reset_system = 0;
   new_system = AST__UNKNOWN;

/* If the result Frame is a SkyFrame, we must test to see if overlaying its
   System attribute will change the type of sky coordinate system it
   describes. Determine the value of this attribute for the result and template
   SkyFrames. We also need to do this if either SkyRef attribute would
   change. */
   skyframe = astIsASkyFrame( result );
   if ( skyframe ) {
      old_system = astGetSystem( result );
      new_system = astGetSystem( template );
      skyref_changed = ( astGetSkyRef( result, 0 ) !=
                         astGetSkyRef( template, 0 ) ) ||
                       ( astGetSkyRef( result, 1 ) !=
                         astGetSkyRef( template, 1 ) );

/* If the coordinate system will change, any value already set for the result
   SkyFrame's Title will no longer be appropriate, so clear it. Note, the
   system value will only be changed in the result if it has been set in the
   template. */
      if ( ( (new_system != old_system) && astTestSystem( template ) )
           || skyref_changed ) {
         astClearTitle( result );

/* Test if the old and new sky coordinate systems are similar enough to make
   use of the same axis attribute values (e.g. if they are both equatorial
   systems, then they can both use the same axis labels, etc.,so long as
   the SKyRefIs value has not changed). */
         if ( IsEquatorial( new_system, status ) != IsEquatorial( old_system, status ) ||
              skyref_changed ) {

/* If necessary, clear inappropriate values for all those axis attributes
   whose access functions are over-ridden by this class (these access functions
   will then provide suitable defaults appropriate to the new coordinate system
   instead). */
            for ( axis = 0; axis < 2; axis++ ) {
               astClearAsTime( result, axis );
               astClearDirection( result, axis );
               astClearFormat( result, axis );
               astClearLabel( result, axis );
               astClearSymbol( result, axis );
               astClearUnit( result, axis );
            }
         }
      }

/* If the result Frame is not a SkyFrame, we must temporarily clear the
   System and AlignSystem values since the values used by this class are only
   appropriate to this class. */
   } else {
      if( astTestSystem( template ) ) {
         new_system = astGetSystem( template );
         astClearSystem( template );
         new_alignsystem = astGetAlignSystem( template );
         astClearAlignSystem( template );
         reset_system = 1;
      }
   }

/* Invoke the parent class astOverlay method to transfer attributes inherited
   from the parent class. */
   (*parent_overlay)( template, template_axes, result, status );

/* Reset the System and AlignSystem values if necessary */
   if( reset_system ) {
      astSetSystem( template, new_system );
      astSetAlignSystem( template, new_alignsystem );
   }

/* Check if the result Frame is a SkyFrame or from a class derived from
   SkyFrame. If not, we cannot transfer SkyFrame attributes to it as it is
   insufficiently specialised. In this case simply omit these attributes. */
   if ( skyframe && astOK ) {

/* Define a macro that tests whether an attribute is set in the template and,
   if so, transfers its value to the result. */
#define OVERLAY(attr) \
   if ( astTest##attr( template ) ) { \
      astSet##attr( result, astGet##attr( template ) ); \
   }

/* Store template axis indices */
   if( template_axes ) {
      tax0 = template_axes[ 0 ];
      tax1 = template_axes[ 1 ];
   } else {
      tax0 = 0;
      tax1 = 1;
   }

/* Define a similar macro that does the same for SkyFrame specific axis
   attributes. */
#define OVERLAY2(attr) \
   if( astTest##attr( template, tax0 ) ) { \
      astSet##attr( result, 0, astGet##attr( template, tax0 ) ); \
   } \
   if( astTest##attr( template, tax1 ) ) { \
      astSet##attr( result, 1, astGet##attr( template, tax1 ) ); \
   }

/* Use the macro to transfer each SkyFrame attribute in turn. */
      OVERLAY(Equinox);
      OVERLAY(Projection);
      OVERLAY(NegLon);
      OVERLAY(SkyTol);
      OVERLAY(AlignOffset);
      OVERLAY(SkyRefIs);
      OVERLAY2(SkyRef);
      OVERLAY2(SkyRefP);
   }

/* Undefine macros local to this function. */
#undef OVERLAY
#undef OVERLAY2
}

static void Resolve( AstFrame *this_frame, const double point1[],
                     const double point2[], const double point3[],
                     double point4[], double *d1, double *d2, int *status ){
/*
*  Name:
*     Resolve

*  Purpose:
*     Resolve a vector into two orthogonal components

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void Resolve( AstFrame *this, const double point1[],
*                   const double point2[], const double point3[],
*                   double point4[], double *d1, double *d2, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astResolve method
*     inherited from the Frame class).

*  Description:
*     This function resolves a vector into two perpendicular components.
*     The vector from point 1 to point 2 is used as the basis vector.
*     The vector from point 1 to point 3 is resolved into components
*     parallel and perpendicular to this basis vector. The lengths of the
*     two components are returned, together with the position of closest
*     aproach of the basis vector to point 3.
*
*     Each vector is a geodesic curve. For a SkyFrame, these are great
*     circles on the celestial sphere.

*  Parameters:
*     this
*        Pointer to the Frame.
*     point1
*        An array of double, with one element for each Frame axis
*        (Naxes attribute). This marks the start of the basis vector,
*        and of the vector to be resolved.
*     point2
*        An array of double, with one element for each Frame axis
*        (Naxes attribute). This marks the end of the basis vector.
*     point3
*        An array of double, with one element for each Frame axis
*        (Naxes attribute). This marks the end of the vector to be
*        resolved.
*     point4
*        An array of double, with one element for each Frame axis
*        in which the coordinates of the point of closest approach of the
*        basis vector to point 3 will be returned.
*     d1
*        The address of a location at which to return the distance from
*        point 1 to point 4 (that is, the length of the component parallel
*        to the basis vector). Positive values are in the same sense as
*        movement from point 1 to point 2.
*     d2
*        The address of a location at which to return the distance from
*        point 4 to point 3 (that is, the length of the component
*        perpendicular to the basis vector). The returned value is always
*        positive.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     - This function will return "bad" coordinate values (AST__BAD)
*     if any of the input coordinates has this value, or if the required
*     output values are undefined.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   const int *perm;              /* Pointer to axis permutation array */
   double n1[ 3 ];               /* Unit normal to grt crcl thru p1 and p2 */
   double n2[ 3 ];               /* Unit normal to grt crcl thru p3 and p4 */
   double p1[ 2 ];               /* Permuted coordinates for point1 */
   double p2[ 2 ];               /* Permuted coordinates for point2 */
   double p3[ 2 ];               /* Permuted coordinates for point3 */
   double p4[ 2 ];               /* Permuted coordinates for point4 */
   double v1[ 3 ];               /* 3-vector for p1 */
   double v2[ 3 ];               /* 3-vector for p2 */
   double v3[ 3 ];               /* 3-vector for p3 */
   double v4[ 3 ];               /* 3-vector for p4 */
   double v5[ 3 ];               /* 3-vector 90 degs away from p1 */
   double vmod;                  /* Modulus of vector */
   double vtemp[ 3 ];            /* Temporary vector workspace */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Store initial bad output values. */
   point4[ 0 ] = AST__BAD;
   point4[ 1 ] = AST__BAD;
   *d1 = AST__BAD;
   *d2 = AST__BAD;

/* Check that all supplied values are OK. */
   if ( ( point1[ 0 ] != AST__BAD ) && ( point1[ 1 ] != AST__BAD ) &&
        ( point2[ 0 ] != AST__BAD ) && ( point2[ 1 ] != AST__BAD ) &&
        ( point3[ 0 ] != AST__BAD ) && ( point3[ 1 ] != AST__BAD ) ) {

/* If so, obtain a pointer to the SkyFrame's axis permutation array. */
      perm = astGetPerm( this );
      if ( astOK ) {

/* Apply the axis permutation array to obtain the coordinates of the
   three supplied point in the required (longitude,latitude) order. */
         p1[ perm[ 0 ] ] = point1[ 0 ];
         p1[ perm[ 1 ] ] = point1[ 1 ];
         p2[ perm[ 0 ] ] = point2[ 0 ];
         p2[ perm[ 1 ] ] = point2[ 1 ];
         p3[ perm[ 0 ] ] = point3[ 0 ];
         p3[ perm[ 1 ] ] = point3[ 1 ];

/* Convert each point into a 3-vector of unit length. */
         palDcs2c( p1[ 0 ], p1[ 1 ], v1 );
         palDcs2c( p2[ 0 ], p2[ 1 ], v2 );
         palDcs2c( p3[ 0 ], p3[ 1 ], v3 );

/* Find the cross product between the first two vectors, and normalize is.
   This is the unit normal to the great circle plane defining parallel
   distance. */
         palDvxv( v2, v1, vtemp );
         palDvn( vtemp, n1, &vmod );

/* Return with bad values if the normal is undefined (i.e. if the first two
   vectors are identical or diametrically opposite). */
         if( vmod > 0.0 ) {

/* Now take the cross product of the normal vector and v1. This gives a
   point, v5, on the great circle which is 90 degrees away from v1, in the
   direction of v2. */
            palDvxv( v1, n1, v5 );

/* Find the cross product of the outlying point (point 3), and the vector
   n1 found above, and normalize it. This is the unit normal to the great
   circle plane defining perpendicular distance. */
            palDvxv( v3, n1, vtemp );
            palDvn( vtemp, n2, &vmod );

/* Return with bad values if the normal is undefined (i.e. if the
   outlying point is normal to the great circle defining the basis
   vector). */
            if( vmod > 0.0 ) {

/* The point of closest approach, point 4, is the point which is normal
   to both normal vectors (i.e. the intersection of the two great circles).
   This is the cross product of n1 and n2. No need to normalize this time
   since both n1 and n2 are unit vectors, and so v4 will already be a
   unit vector. */
               palDvxv( n1, n2, v4 );

/* The dot product of v4 and v1 is the cos of the parallel distance,
   d1, whilst the dot product of v4 and v5 is the sin of the parallel
   distance. Use these to get the parallel distance with the correct
   sign, in the range -PI to +PI. */
               *d1 = atan2( palDvdv( v4, v5 ), palDvdv( v4, v1 ) );

/* The dot product of v4 and v3 is the cos of the perpendicular distance,
   d2, whilst the dot product of n1 and v3 is the sin of the perpendicular
   distance. Use these to get the perpendicular distance. */
               *d2 = fabs( atan2( palDvdv( v3, n1 ), palDvdv( v3, v4 ) ) );

/* Convert the 3-vector representing the intersection of the two planes
   back into spherical cooordinates and then constrain the longitude result
   to lie in the range 0 to 2*pi. */
               palDcc2s( v4, &p4[ 0 ], &p4[ 1 ] );
               p4[ 0 ] = palDranrm( p4[ 0 ] );

/* Permute the result coordinates to undo the effect of the SkyFrame
   axis permutation array. */
               point4[ 0 ] = p4[ perm[ 0 ] ];
               point4[ 1 ] = p4[ perm[ 1 ] ];
            }
         }
      }
   }

   return;

}

static AstPointSet *ResolvePoints( AstFrame *this_frame, const double point1[],
                                   const double point2[], AstPointSet *in,
                                   AstPointSet *out, int *status ) {
/*
*  Name:
*     ResolvePoints

*  Purpose:
*     Resolve a set of vectors into orthogonal components

*  Type:
*     Private function.

*  Synopsis:
*     #include "frame.h"
*     AstPointSet *astResolvePoints( AstFrame *this, const double point1[],
*                                    const double point2[], AstPointSet *in,
*                                    AstPointSet *out )

*  Class Membership:
*     SkyFrame member function (over-rides the astResolvePoints method
*     inherited from the Frame class).

*  Description:
*     This function takes a Frame and a set of vectors encapsulated
*     in a PointSet, and resolves each one into two orthogonal components,
*     returning these two components in another PointSet.
*
*     This is exactly the same as the public astResolve method, except
*     that this method allows many vectors to be processed in a single call,
*     thus reducing the computational cost of overheads of many
*     individual calls to astResolve.

*  Parameters:
*     this
*        Pointer to the Frame.
*     point1
*        An array of double, with one element for each Frame axis
*        (Naxes attribute). This marks the start of the basis vector,
*        and of the vectors to be resolved.
*     point2
*        An array of double, with one element for each Frame axis
*        (Naxes attribute). This marks the end of the basis vector.
*     in
*        Pointer to the PointSet holding the ends of the vectors to be
*        resolved.
*     out
*        Pointer to a PointSet which will hold the length of the two
*        resolved components. A NULL value may also be given, in which
*        case a new PointSet will be created by this function.

*  Returned Value:
*     Pointer to the output (possibly new) PointSet. The first axis will
*     hold the lengths of the vector components parallel to the basis vector.
*     These values will be signed (positive values are in the same sense as
*     movement from point 1 to point 2. The second axis will hold the lengths
*     of the vector components perpendicular to the basis vector. These
*     values will be signed only if the Frame is 2-dimensional, in which
*     case a positive value indicates that rotation from the basis vector
*     to the tested vector is in the same sense as rotation from the first
*     to the second axis of the Frame.

*  Notes:
*     - The number of coordinate values per point in the input
*     PointSet must match the number of axes in the supplied Frame.
*     - If an output PointSet is supplied, it must have space for
*     sufficient number of points and 2 coordinate values per point.
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*     - We assume spherical geometry throughout this function.
*/

/* Local Variables: */
   AstPointSet *result;          /* Pointer to output PointSet */
   AstSkyFrame *this;            /* Pointer to SkyFrame structure */
   const int *perm;              /* Pointer to axis permutation array */
   double **ptr_in;              /* Pointers to input axis values */
   double **ptr_out;             /* Pointers to returned axis values */
   double *d1;                   /* Pointer to next parallel component value */
   double *d2;                   /* Pointer to next perpendicular component value */
   double *point3x;              /* Pointer to next first axis value */
   double *point3y;              /* Pointer to next second axis value */
   double n1[ 3 ];               /* Unit normal to grt crcl thru p1 and p2 */
   double n2[ 3 ];               /* Unit normal to grt crcl thru p3 and p4 */
   double p1[ 2 ];               /* Permuted coordinates for point1 */
   double p2[ 2 ];               /* Permuted coordinates for point2 */
   double p3[ 2 ];               /* Permuted coordinates for point3 */
   double sign;                  /* Sign for perpendicular distances */
   double v1[ 3 ];               /* 3-vector for p1 */
   double v2[ 3 ];               /* 3-vector for p2 */
   double v3[ 3 ];               /* 3-vector for p3 */
   double v4[ 3 ];               /* 3-vector for p4 */
   double v5[ 3 ];               /* 3-vector 90 degs away from p1 */
   double vmod;                  /* Modulus of vector */
   double vtemp[ 3 ];            /* Temporary vector workspace */
   int ipoint;                   /* Index of next point */
   int ncoord_in;                /* Number of input PointSet coordinates */
   int ncoord_out;               /* Number of coordinates in output PointSet */
   int npoint;                   /* Number of points to transform */
   int npoint_out;               /* Number of points in output PointSet */
   int ok;                       /* OK to proceed? */

/* Initialise. */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Get a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Obtain the number of input vectors to resolve and the number of coordinate
   values per vector. */
   npoint = astGetNpoint( in );
   ncoord_in = astGetNcoord( in );

/* If OK, check that the number of input coordinates matches the number
   required by the Frame. Report an error if these numbers do not match. */
   if ( astOK && ( ncoord_in != 2 ) ) {
      astError( AST__NCPIN, "astResolvePoints(%s): Bad number of coordinate "
                "values (%d) in input %s.", status, astGetClass( this ), ncoord_in,
                astGetClass( in ) );
      astError( AST__NCPIN, "The %s given requires 2 coordinate values for "
                "each input point.", status, astGetClass( this ) );
   }

/* If still OK, and a non-NULL pointer has been given for the output PointSet,
   then obtain the number of points and number of coordinates per point for
   this PointSet. */
   if ( astOK && out ) {
      npoint_out = astGetNpoint( out );
      ncoord_out = astGetNcoord( out );

/* Check that the dimensions of this PointSet are adequate to accommodate the
   output coordinate values and report an error if they are not. */
      if ( astOK ) {
         if ( npoint_out < npoint ) {
            astError( AST__NOPTS, "astResolvePoints(%s): Too few points (%d) in "
                      "output %s.", status, astGetClass( this ), npoint_out,
                      astGetClass( out ) );
            astError( AST__NOPTS, "The %s needs space to hold %d transformed "
                      "point(s).", status, astGetClass( this ), npoint );
         } else if ( ncoord_out < 2 ) {
            astError( AST__NOCTS, "astResolvePoints(%s): Too few coordinate "
                      "values per point (%d) in output %s.", status,
                      astGetClass( this ), ncoord_out, astGetClass( out ) );
            astError( AST__NOCTS, "The %s supplied needs space to store 2 "
                      "coordinate value(s) per transformed point.", status,
                      astGetClass( this ) );
         }
      }
   }

/* If all the validation stages are passed successfully, and a NULL output
   pointer was given, then create a new PointSet to encapsulate the output
   coordinate data. */
   if ( astOK ) {
      if ( !out ) {
         result = astPointSet( npoint, 2, "", status );

/* Otherwise, use the PointSet supplied. */
      } else {
         result = out;
      }
   }

/* Get pointers to the input and output axis values */
   ptr_in = astGetPoints( in );
   ptr_out = astGetPoints( result );

/* Obtain a pointer to the SkyFrame's axis permutation array. */
   perm = astGetPerm( this );

/* If the axes have been swapped we need to swap the sign of the returned
   perpendicular distances. */
   sign = ( perm[ 0 ] == 0 ) ? -1.0 : 1.0;

/* Check pointers can be used safely */
   if( astOK ) {

/* Apply the axis permutation array to obtain the coordinates of the
   two supplied points in the required (longitude,latitude) order. */
      p1[ perm[ 0 ] ] = point1[ 0 ];
      p1[ perm[ 1 ] ] = point1[ 1 ];
      p2[ perm[ 0 ] ] = point2[ 0 ];
      p2[ perm[ 1 ] ] = point2[ 1 ];

/* Convert these points into 3-vectors of unit length. */
      palDcs2c( p1[ 0 ], p1[ 1 ], v1 );
      palDcs2c( p2[ 0 ], p2[ 1 ], v2 );

/* Find the cross product between the vectors, and normalize it. This is the
   unit normal to the great circle plane defining parallel distance. */
      palDvxv( v2, v1, vtemp );
      palDvn( vtemp, n1, &vmod );

/* Return with bad values if the normal is undefined (i.e. if the first two
   vectors are identical or diametrically opposite). */
      ok = 0;
      if( vmod > 0.0 ) {
         ok = 1;

/* Now take the cross product of the normal vector and v1. This gives a
   point, v5, on the great circle which is 90 degrees away from v1, in the
   direction of v2. */
         palDvxv( v1, n1, v5 );
      }

/* Store pointers to the first two axis arrays in the returned PointSet. */
      d1 = ptr_out[ 0 ];
      d2 = ptr_out[ 1 ];

/* Store pointers to the axis values in the supplied PointSet. */
      point3x = ptr_in[ 0 ];
      point3y = ptr_in[ 1 ];

/* Check supplied values can be used */
      if( ok ) {

/* Loop round each supplied vector. */
         for( ipoint = 0; ipoint < npoint; ipoint++, d1++, d2++,
                                           point3x++, point3y++ ) {

/* Store bad output values if either input axis value is bad. */
            if( *point3x == AST__BAD || *point3y == AST__BAD ){
               *d1 = AST__BAD;
               *d2 = AST__BAD;

/* If both are good... */
            } else {

/* Apply the axis permutation array to obtain the coordinates in the
   required (longitude,latitude) order. */
               p3[ perm[ 0 ] ] = *point3x;
               p3[ perm[ 1 ] ] = *point3y;

/* Convert into a 3-vector of unit length. */
               palDcs2c( p3[ 0 ], p3[ 1 ], v3 );

/* Find the cross product of the outlying point (point 3), and the vector
   n1 found above, and normalize it. This is the unit normal to the great
   circle plane defining perpendicular distance. */
               palDvxv( v3, n1, vtemp );
               palDvn( vtemp, n2, &vmod );

/* Return with bad values if the normal is undefined (i.e. if the
   outlying point is normal to the great circle defining the basis
   vector). */
               if( vmod <= 0.0 ) {
                  *d1 = AST__BAD;
                  *d2 = AST__BAD;
               } else {

/* The point of closest approach, point 4, is the point which is normal
   to both normal vectors (i.e. the intersection of the two great circles).
   This is the cross product of n1 and n2. No need to normalize this time
   since both n1 and n2 are unit vectors, and so v4 will already be a
   unit vector. */
                  palDvxv( n1, n2, v4 );

/* The dot product of v4 and v1 is the cos of the parallel distance,
   d1, whilst the dot product of v4 and v5 is the sin of the parallel
   distance. Use these to get the parallel distance with the correct
   sign, in the range -PI to +PI. */
                  *d1 = atan2( palDvdv( v4, v5 ), palDvdv( v4, v1 ) );

/* The dot product of v4 and v3 is the cos of the perpendicular distance,
   d2, whilst the dot product of n1 and v3 is the sin of the perpendicular
   distance. Use these to get the perpendicular distance. */
                  *d2 = sign*atan2( palDvdv( v3, n1 ), palDvdv( v3, v4 ) );
               }
            }
         }

/* If supplied values cannot be used, fill the returned PointSet with bad
   values */
      } else {
         for( ipoint = 0; ipoint < npoint; ipoint++, d1++, d2++ ) {
            *d1 = AST__BAD;
            *d2 = AST__BAD;
         }
      }
   }

/* Annul the returned PointSet if an error occurred. */
   if( !astOK ) result = astAnnul( result );

/* Return a pointer to the output PointSet. */
   return result;
}

static void SetAsTime( AstSkyFrame *this, int axis, int value, int *status ) {
/*
*  Name:
*     SetAsTime

*  Purpose:
*     Set a value for the AsTime attribute for a SkyFrame's axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void SetAsTime( AstSkyFrame *this, int axis, int value, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function sets the boolean value of the AsTime attribute for a
*     specified axis of a SkyFrame. This value indicates whether axis values
*     should be formatted as times (as opposed to angles) by default.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Index of the axis for which a value is to be set (zero based).
*     value
*        The boolean value to be set.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     void.
*/

/* Local Variables: */
   AstAxis *ax;                  /* Pointer to Axis object */
   AstSkyAxis *new_ax;           /* Pointer to new SkyAxis object */

/* Check the global error status. */
   if ( !astOK ) return;

/* Validate the axis index. */
   (void) astValidateAxis( this, axis, 1, "astSetAsTime" );

/* Obtain a pointer to the Axis object. */
   ax = astGetAxis( this, axis );

/* Check if the Axis object is a SkyAxis. If not, we will replace it with
   one. */
   if ( !astIsASkyAxis( ax ) ) {

/* Create a new SkyAxis and overlay the attributes of the original Axis. */
      new_ax = astSkyAxis( "", status );
      astAxisOverlay( ax, new_ax );

/* Modify the SkyFrame to use the new Skyaxis and annul the original Axis
   pointer. Retain a pointer to the new SkyAxis. */
      astSetAxis( this, axis, new_ax );
      ax = astAnnul( ax );
      ax = (AstAxis *) new_ax;
   }

/* Set a value for the Axis AsTime attribute. */
   astSetAxisAsTime( ax, value );

/* Annul the Axis pointer. */
   ax = astAnnul( ax );
}

static void SetAttrib( AstObject *this_object, const char *setting, int *status ) {
/*
*  Name:
*     SetAttrib

*  Purpose:
*     Set an attribute value for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void SetAttrib( AstObject *this, const char *setting, int *status )

*  Class Membership:
*     SkyFrame member function (extends the astSetAttrib method inherited from
*     the Mapping class).

*  Description:
*     This function assigns an attribute value for a SkyFrame, the attribute
*     and its value being specified by means of a string of the form:
*
*        "attribute= value "
*
*     Here, "attribute" specifies the attribute name and should be in lower
*     case with no white space present. The value to the right of the "="
*     should be a suitable textual representation of the value to be assigned
*     and this will be interpreted according to the attribute's data type.
*     White space surrounding the value is only significant for string
*     attributes.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     setting
*        Pointer to a null terminated string specifying the new attribute
*        value.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     void

*  Attributes:
*     As well as those attributes inherited from the parent class, this
*     function also accepts values for the following additional attributes:
*
*        Equinox (double, read as a string)

*  Notes:
*     This protected method is intended to be invoked by the Object astSet
*     method and makes additional attributes accessible to it.
*/

/* Local Vaiables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   double dval;                  /* Floating point attribute value */
   double dval1;                 /* Floating point attribute value */
   double dval2;                 /* Floating point attribute value */
   double mjd;                   /* Modified Julian Date */
   int astime;                   /* Value of AsTime attribute */
   int axis;                     /* Axis index */
   int equinox;                  /* Offset of Equinox attribute value */
   int ival;                     /* Integer attribute value */
   int len;                      /* Length of setting string */
   int nc;                       /* Number of characters read by astSscanf */
   int neglon;                   /* Display -ve longitudes? */
   int ok;                       /* Can string be used? */
   int offset;                   /* Offset of start of attribute value */
   int projection;               /* Offset of projection attribute value */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_object;

/* Obtain the length of the setting string. */
   len = strlen( setting );

/* Test for each recognised attribute in turn, using "astSscanf" to parse the
   setting string and extract the attribute value (or an offset to it in the
   case of string values). In each case, use the value set in "nc" to check
   that the entire string was matched. Once a value has been obtained, use the
   appropriate method to set it. */

/* AsTime(axis). */
/* ------------- */
   if ( nc = 0,
        ( 2 == astSscanf( setting, "astime(%d)= %d %n", &axis, &astime, &nc ) )
        && ( nc >= len ) ) {
      astSetAsTime( this, axis - 1, astime );

/* Equinox. */
/* -------- */
   } else if ( nc = 0,
               ( 0 == astSscanf( setting, "equinox=%n%*[^\n]%n",
                              &equinox, &nc ) ) && ( nc >= len ) ) {

/* Convert the Equinox value to a Modified Julian Date before use. */
      mjd = astReadDateTime( setting + equinox );
      if ( astOK ) {
         astSetEquinox( this, mjd );

/* Report contextual information if the conversion failed. */
      } else {
         astError( AST__ATTIN, "astSetAttrib(%s): Invalid equinox value "
                   "\"%s\" given for sky coordinate system.", status,
                   astGetClass( this ), setting + equinox );
      }

/* NegLon. */
/* ------- */
   } else if ( nc = 0,
             ( 1 == astSscanf( setting, "neglon= %d %n", &neglon, &nc ) )
               && ( nc >= len ) ) {
      astSetNegLon( this, neglon );

/* SkyTol. */
/* ------- */
   } else if ( nc = 0,
             ( 1 == astSscanf( setting, "skytol= %lg %n", &dval, &nc ) )
               && ( nc >= len ) ) {
      astSetSkyTol( this, dval );

/* Projection. */
/* ----------- */
   } else if ( nc = 0,
               ( 0 == astSscanf( setting, "projection=%n%*[^\n]%n",
                              &projection, &nc ) )
               && ( nc >= len ) ) {
      astSetProjection( this, setting + projection );

/* SkyRef. */
/* ------- */
   } else if ( nc = 0,
               ( 0 == astSscanf( setting, "skyref=%n%*[^\n]%n",
                                 &offset, &nc ) )
               && ( nc >= len ) ) {
      ok = 0;
      nc = astUnformat( this, 0, setting + offset, &dval1 );
      if( setting[ offset + nc ] == ',' ) {
         nc++;
         nc += astUnformat( this, 1, setting + offset + nc, &dval2 );
         if( nc == strlen( setting + offset ) ) {
            astSetSkyRef( this, 0, dval1 );
            astSetSkyRef( this, 1, dval2 );
            ok = 1;
         }
      }

      if( !ok && astOK ) {
         astError( AST__BADOC, "astSetAttrib(%s): Invalid axis values string "
                   "\"%.*s\" given for SkyRef attribute.", status, astGetClass( this ),
                   (int) astChrLen( setting + offset ), setting + offset );
      }

/* SkyRef(axis). */
/* ------------- */
   } else if ( nc = 0,
               ( 2 == astSscanf( setting, "skyref(%d)= %lg %n",
                                 &axis, &dval, &nc ) )
               && ( nc >= len ) ) {
      astSetSkyRef( this, axis - 1, dval );

/* SkyRefIs. */
/* --------- */
   } else if ( nc = 0,
               ( 0 == astSscanf( setting, "skyrefis=%n%*[^\n]%n",
                              &offset, &nc ) )
               && ( nc >= len ) ) {

      if( astChrMatch( setting + offset, POLE_STRING ) ) {
         astSetSkyRefIs( this, AST__POLE_REF );

      } else if( astChrMatch( setting + offset, ORIGIN_STRING ) ) {
         astSetSkyRefIs( this, AST__ORIGIN_REF );

      } else if( astChrMatch( setting + offset, IGNORED_STRING ) ) {
         astSetSkyRefIs( this, AST__IGNORED_REF );

      } else if( astOK ) {
         astError( AST__OPT, "astSet(%s): option '%s' is unknown in '%s'.", status,
                   astGetClass( this ), setting+offset, setting );
      }

/* SkyRefP. */
/* -------- */
   } else if ( nc = 0,
               ( 0 == astSscanf( setting, "skyrefp=%n%*[^\n]%n",
                                 &offset, &nc ) )
               && ( nc >= len ) ) {

      ok = 0;
      nc = astUnformat( this, 0, setting + offset, &dval1 );
      if( setting[ offset + nc ] == ',' ) {
         nc++;
         nc += astUnformat( this, 1, setting + offset + nc, &dval2 );
         if( nc == strlen( setting + offset ) ) {
            astSetSkyRefP( this, 0, dval1 );
            astSetSkyRefP( this, 1, dval2 );
            ok = 1;
         }
      }

      if( !ok && astOK ) {
         astError( AST__BADOC, "astSetAttrib(%s): Invalid axis values string "
                   "\"%.*s\" given for SkyRefP attribute.", status, astGetClass( this ),
                   (int) astChrLen( setting + offset ), setting + offset );
      }


/* SkyRefP(axis). */
/* -------------- */
   } else if ( nc = 0,
               ( 2 == astSscanf( setting, "skyrefp(%d)= %lg %n",
                                 &axis, &dval, &nc ) )
               && ( nc >= len ) ) {
      astSetSkyRefP( this, axis - 1, dval );

/* AlignOffset. */
/* ------------ */
   } else if ( nc = 0,
             ( 1 == astSscanf( setting, "alignoffset= %d %n", &ival, &nc ) )
               && ( nc >= len ) ) {
      astSetAlignOffset( this, ival );

/* Define a macro to see if the setting string matches any of the
   read-only attributes of this class. */
#define MATCH(attrib) \
        ( nc = 0, ( 0 == astSscanf( setting, attrib "=%*[^\n]%n", &nc ) ) && \
                  ( nc >= len ) )

/* If the attribute was not recognised, use this macro to report an error
   if a read-only attribute has been specified. */
   } else if ( !strncmp( setting, "islataxis", 9 ) ||
               !strncmp( setting, "islonaxis", 9 ) ||
               MATCH( "lataxis" ) ||
               MATCH( "lonaxis" ) ) {
      astError( AST__NOWRT, "astSet: The setting \"%s\" is invalid for a %s.", status,
                setting, astGetClass( this ) );
      astError( AST__NOWRT, "This is a read-only attribute." , status);

/* Pass any unrecognised setting to the parent method for further
   interpretation. */
   } else {
      (*parent_setattrib)( this_object, setting, status );
   }
}

static void SetCachedLAST( AstSkyFrame *this, double last, double epoch,
                           double obslon, double obslat, double obsalt,
                           double dut1, double dtai, int *status ) {
/*
*  Name:
*     SetCachedLAST

*  Purpose:
*     Store a LAST value in the cache in the SkyFrame vtab.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void SetCachedLAST( AstSkyFrame *this, double last, double epoch,
*                         double obslon, double obslat, double obsalt,
*                         double dut1, double dtai, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function stores the supplied LAST value in a cache in the
*     SkyFrame virtual function table for later use by GetCachedLAST.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     last
*        The Local Apparent Sidereal Time (radians).
*     epoch
*        The epoch (MJD).
*     obslon
*        Observatory geodetic longitude (radians)
*     obslat
*        Observatory geodetic latitude (radians)
*     obsalt
*        Observatory geodetic altitude (metres)
*     dut1
*        The UT1-UTC correction, in seconds.
*     dtai
*        The TAI-UTC correction, in seconds.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   astDECLARE_GLOBALS
   AstSkyLastTable *table;
   double *ep;
   double *lp;
   double lp_ref;
   int i;
   int itable;

/* Get a pointer to the structure holding thread-specific global data. */
   astGET_GLOBALS(this);

/* Initialise */
   table = NULL;

/* Check the global error status. */
   if ( !astOK ) return;

/* Ensure no threads are allowed to read the table whilst we are writing
   to it. */
   LOCK_WLOCK1

/* Loop round every LAST table held in the vtab. Each table refers to a
   different observatory position and/or DUT1 and/or DTAI value. */
   for( itable = 0; itable < nlast_tables; itable++ ) {
      table = last_tables[ itable ];

/* See if the table refers to the given position, dut1 and dtai value, allowing
   some small tolerance. If it does, leave the loop. */
      if( fabs( table->obslat - obslat ) < 2.0E-7 &&
          fabs( table->obslon - obslon ) < 2.0E-7 &&
          fabs( table->obsalt - obsalt ) < 1.0 &&
          fabs( table->dut1 - dut1 ) < 1.0E-5 &&
          EQUAL( table->dtai, dtai, 1.0E-5 ) ) break;

/* Ensure "table" ends up NULL if no suitable table is found. */
      table = NULL;
   }

/* If no table was found, create one now, and add it into the vtab cache. */
   if( !table ) {

      astBeginPM;
      table = astMalloc( sizeof( AstSkyLastTable ) );
      itable = nlast_tables++;
      last_tables = astGrow( last_tables, nlast_tables,
                                   sizeof( AstSkyLastTable * ) );
      astEndPM;

      if( astOK ) {
         last_tables[ itable ] = table;
         table->obslat = obslat;
         table->obslon = obslon;
         table->obsalt = obsalt;
         table->dut1 = dut1;
         table->dtai = dtai;
         table->nentry = 1;

         astBeginPM;
         table->epoch = astMalloc( sizeof( double ) );
         table->last = astMalloc( sizeof( double ) );
         astEndPM;

         if( astOK ) {
            table->epoch[ 0 ] = epoch;
            table->last[ 0 ] = last;
         }
      }


/* If we have a table, add the new point into it. */
   } else {

/* Extend the epoch and last arrays. */
      astBeginPM;
      table->epoch = astGrow( table->epoch, ++(table->nentry), sizeof( double ) );
      table->last = astGrow( table->last, table->nentry, sizeof( double ) );
      astEndPM;

/* Check memory allocation was successful. */
      if( astOK ) {

/* Get pointers to the last original elements in the arrays of epoch and
   corresponding LAST values in the table. */
         ep = table->epoch + table->nentry - 2;
         lp = table->last + table->nentry - 2;

/* Starting from the end of the arrays, shuffle all entries up one
   element until an element is found which is less than the supplied epoch
   value. This maintains the epoch array in monotonic increasing order. */
         for( i = table->nentry - 2; i >= 0; i--,ep--,lp-- ) {
            if( *ep <= epoch ) break;
            ep[ 1 ] = *ep;
            lp[ 1 ] = *lp;
         }

/* Store the new epoch and LAST value. Add or subtract 2.PI as needed
   from the new LAST value to ensure it is continuous with an adjacent
   LAST value. This is needed for interpolation between the two values
   to be meaningful.  */
         ep[ 1 ] = epoch;

/* For most cases, compare with the previous LAST value. If the new epoch
   value is smaller than any epoch already in the table, there will be no
   previous LAST value. So compare with the next value instead. */
         if( i >= 0 ) {
            lp_ref = lp[ 0 ];
         } else {
            lp_ref = lp[ 2 ];
         }

         if( last > lp_ref + AST__DPI ) {
            lp[ 1 ] = last - 2*AST__DPI;

         } else if( last < lp_ref - AST__DPI ) {
            lp[ 1 ] = last + 2*AST__DPI;

         } else {
            lp[ 1 ] = last;
         }
      }
   }

/* Indicate other threads are now allowed to read the table. */
   UNLOCK_RWLOCK1

}

static void SetDtai( AstFrame *this_frame, double val, int *status ) {
/*
*  Name:
*     SetDtai

*  Purpose:
*     Set the value of the Dtai attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void SetDtai( AstFrame *this, double val, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astSetDtai method
*     inherited from the Frame class).

*  Description:
*     This function clears the Dtai value and updates the LAST value
*     stored in the SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     val
*        New Dtai value.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstSkyFrame *this;
   double orig;

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Note the original Dtai value. */
   orig = astGetDtai( this );

/* Invoke the parent method to set the Frame Dtai value. */
   (*parent_setdtai)( this_frame, val, status );

/* If the DTAI value has changed significantly, indicate that the LAST value
   will need to be re-calculated when it is next needed. */
   if( ! EQUAL( orig, val, 1.0E-6 ) ) {
      this->last = AST__BAD;
      this->eplast = AST__BAD;
      this->klast = AST__BAD;
   }
}

static void SetDut1( AstFrame *this_frame, double val, int *status ) {
/*
*  Name:
*     SetDut1

*  Purpose:
*     Set the value of the Dut1 attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void SetDut1( AstFrame *this, double val, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astSetDut1 method
*     inherited from the Frame class).

*  Description:
*     This function clears the Dut1 value and updates the LAST value
*     stored in the SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     val
*        New Dut1 value.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstSkyFrame *this;
   double orig;

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Note the original Dut1 value. */
   orig = astGetDut1( this );

/* Invoke the parent method to set the Frame Dut1 value. */
   (*parent_setdut1)( this_frame, val, status );

/* If the DUT1 value has changed significantly, indicate that the LAST value
   will need to be re-calculated when it is next needed. */
   if( fabs( orig - val ) > 1.0E-6 ) {
      this->last = AST__BAD;
      this->eplast = AST__BAD;
      this->klast = AST__BAD;
   }
}

static void SetLast( AstSkyFrame *this, int *status ) {
/*
*  Name:
*     SetLast

*  Purpose:
*     Set the Local Appearent Sidereal Time for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void SetLast( AstSkyFrame *this, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function sets the Local Apparent Sidereal Time at the epoch
*     and geographical longitude given by the current values of the Epoch
*     and ObsLon attributes associated with the supplied SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     -  A value of AST__BAD will be returned if this function is invoked
*     with the global error status set, or if it should fail for any reason.
*/

/* Local Variables: */
   double epoch;      /* Epoch as a TDB MJD */

/* Check the global error status. */
   if ( !astOK ) return;

/* Get the SkyFrame Epoch as a TDB MJD. */
   epoch = astGetEpoch( this );

/* Calculate the LAST value (in rads) and store in the SkyFrame structure. */
   this->last = CalcLAST( this, epoch, astGetObsLon( this ),
                          astGetObsLat( this ), astGetObsAlt( this ),
                          astGetDut1( this ), astGetDtai( this ), status );

/* Save the TDB MJD to which this LAST corresponds. */
   this->eplast = epoch;

/* The ratio between solar and sidereal time is a slowly varying function
   of epoch. The GetLAST function returns a fast approximation to LAST
   by using the ratio between solar and sidereal time. Indicate that
   GetLAST should re-calculate the ratio by setting the ratio value bad. */
   this->klast = AST__BAD;
}

static void SetObsAlt( AstFrame *this, double val, int *status ) {
/*
*  Name:
*     SetObsAlt

*  Purpose:
*     Set the value of the ObsAlt attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void SetObsAlt( AstFrame *this, double val, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astSetObsAlt method
*     inherited from the Frame class).

*  Description:
*     This function sets the ObsAlt value.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     val
*        New ObsAlt value.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   double orig;

/* Check the global error status. */
   if ( !astOK ) return;

/* Note the original ObsAlt value. */
   orig = astGetObsAlt( this );

/* Invoke the parent method to set the Frame ObsAlt. */
   (*parent_setobsalt)( this, val, status );

/* If the altitude has changed significantly, indicate that the LAST value
   and magnitude of the diurnal aberration vector will need to be
   re-calculated when next needed. */
   if( fabs( orig - val ) > 0.001 ) {
      ( (AstSkyFrame *) this )->last = AST__BAD;
      ( (AstSkyFrame *) this )->eplast = AST__BAD;
      ( (AstSkyFrame *) this )->klast = AST__BAD;
      ( (AstSkyFrame *) this )->diurab = AST__BAD;
   }
}

static void SetObsLat( AstFrame *this, double val, int *status ) {
/*
*  Name:
*     SetObsLat

*  Purpose:
*     Set the value of the ObsLat attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void SetObsLat( AstFrame *this, double val, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astSetObsLat method
*     inherited from the Frame class).

*  Description:
*     This function sets the ObsLat value.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     val
*        New ObsLat value.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   double orig;

/* Check the global error status. */
   if ( !astOK ) return;

/* Note the original ObsLat value. */
   orig = astGetObsLat( this );

/* Invoke the parent method to set the Frame ObsLat. */
   (*parent_setobslat)( this, val, status );

/* If the altitude has changed significantly, indicate that the LAST value
   and magnitude of the diurnal aberration vector will need to be
   re-calculated when next needed. */
   if( fabs( orig - val ) > 1.0E-8 ) {
      ( (AstSkyFrame *) this )->last = AST__BAD;
      ( (AstSkyFrame *) this )->eplast = AST__BAD;
      ( (AstSkyFrame *) this )->klast = AST__BAD;
      ( (AstSkyFrame *) this )->diurab = AST__BAD;
   }
}

static void SetObsLon( AstFrame *this, double val, int *status ) {
/*
*  Name:
*     SetObsLon

*  Purpose:
*     Set the value of the ObsLon attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void SetObsLon( AstFrame *this, double val, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astSetObsLon method
*     inherited from the Frame class).

*  Description:
*     This function sets the ObsLon value.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     val
*        New ObsLon value.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   double orig;

/* Check the global error status. */
   if ( !astOK ) return;

/* Note the original ObsLon value. */
   orig = astGetObsLon( this );

/* Invoke the parent method to set the Frame ObsLon. */
   (*parent_setobslon)( this, val, status );

/* If the longitude has changed significantly, indicate that the LAST value
   will need to be re-calculated when it is next needed. */
   if( fabs( orig - val ) > 1.0E-8 ) {
      ( (AstSkyFrame *) this )->last = AST__BAD;
      ( (AstSkyFrame *) this )->eplast = AST__BAD;
      ( (AstSkyFrame *) this )->klast = AST__BAD;
   }
}

static void SetSystem( AstFrame *this_frame, AstSystemType system, int *status ) {
/*
*  Name:
*     SetSystem

*  Purpose:
*     Set the System attribute for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void SetSystem( AstFrame *this_frame, AstSystemType system, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astSetSystem protected
*     method inherited from the Frame class).

*  Description:
*     This function assigns a new value to the System attribute for a SkyFrame.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     system
*        The new System value.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstFrameSet *fs;              /* FrameSet to be used as the Mapping */
   AstSkyFrame *sfrm;            /* Copy of original SkyFrame */
   AstSkyFrame *this;            /* Pointer to SkyFrame structure */
   double xin[ 2 ];              /* Axis 0 values */
   double xout[ 2 ];             /* Axis 0 values */
   double yin[ 2 ];              /* Axis 1 values */
   double yout[ 2 ];             /* Axis 1 values */
   int aloff;                    /* The AlignOffset attribute value */
   int aloff_set;                /* Is the AlignOffset attribute set? */
   int skyref_set;               /* Is either SkyRef attribute set? */
   int skyrefis;                 /* The SkyRefIs attribute value */
   int skyrefis_set;             /* Is the SkyRefIs attribute set? */
   int skyrefp_set;              /* Is either SkyRefP attribute set? */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* See if either the SkyRef or SkyRefP attribute is set. */
   skyref_set = astTestSkyRef( this, 0 ) || astTestSkyRef( this, 1 );
   skyrefp_set = astTestSkyRefP( this, 0 ) || astTestSkyRefP( this, 1 );

/* If so, we will need to transform their values into the new coordinate
   system. Save a copy of the SkyFrame with its original System value. */
   sfrm = ( skyref_set || skyrefp_set )?astCopy( this ):NULL;

/* Use the parent method to set the new System value. */
   (*parent_setsystem)( this_frame, system, status );

/* Now modify the SkyRef and SkyRefP attributes if necessary. */
   if( sfrm ) {

/* Save the AlignOffset, SkyRefIs, SkyRef and SkyRefP values. */
      aloff_set = astTestAlignOffset( sfrm );
      aloff = astGetAlignOffset( sfrm );
      skyrefis_set = astTestSkyRefIs( sfrm );
      skyrefis = astGetSkyRefIs( sfrm );

      xin[ 0 ] = astGetSkyRef( sfrm, 0 );
      xin[ 1 ] = astGetSkyRefP( sfrm, 0 );
      yin[ 0 ] = astGetSkyRef( sfrm, 1 );
      yin[ 1 ] = astGetSkyRefP( sfrm, 1 );

/* Clear the SkyRef and SkyRefP values to avoid infinite recursion in the
   following call to astConvert. */
      if( skyref_set ) {
         astClearSkyRef( sfrm, 0 );
         astClearSkyRef( sfrm, 1 );
         astClearSkyRef( this, 0 );
         astClearSkyRef( this, 1 );
      }

      if( skyrefp_set ) {
         astClearSkyRefP( sfrm, 0 );
         astClearSkyRefP( sfrm, 1 );
         astClearSkyRefP( this, 0 );
         astClearSkyRefP( this, 1 );
      }

/* Also set AlignOffset and SkyRefIs so that the following call to
   astConvert does not align in offset coords. */
      astSetAlignOffset( sfrm, 0 );
      astSetSkyRefIs( sfrm, AST__IGNORED_REF );

/* Get the Mapping from the original System to the new System. Invoking
   astConvert will recursively invoke SetSystem again. This is why we need
   to be careful to ensure that SkyRef and SKyRefP are cleared above - doing
   so ensure we do not end up with infinite recursion. */
      fs = astConvert( sfrm, this, "" );

/* If the conversion is not possible, clear the SkyRef and SkyRefP
   values. */
      if( !fs ) {
         if( skyref_set ) {
            astClearSkyRef( this, 0 );
            astClearSkyRef( this, 1 );
         }
         if( skyrefp_set ) {
            astClearSkyRefP( this, 0 );
            astClearSkyRefP( this, 1 );
         }

/* Use the Mapping to find the SkyRef and SkyRefP positions in the new
   coordinate system. */
      } else {
         astTran2( fs, 2, xin, yin, 1, xout, yout );

/* Store the values as required. */
         if( skyref_set ) {
            astSetSkyRef( this, 0, xout[ 0 ] );
            astSetSkyRef( this, 1, yout[ 0 ] );
         }

         if( skyrefp_set ) {
            astSetSkyRefP( this, 0, xout[ 1 ] );
            astSetSkyRefP( this, 1, yout[ 1 ] );
         }

/* Restore the original SkyRefIs and AlignOffset values. */
         if( aloff_set ) {
            astSetAlignOffset( this, aloff );
         } else {
            astClearAlignOffset( this );
         }

         if( skyrefis_set ) {
            astSetSkyRefIs( this, skyrefis );
         } else {
            astClearSkyRefIs( this );
         }

/* Free resources. */
         fs = astAnnul( fs );
      }
      sfrm = astAnnul( sfrm );
   }
}

static void Shapp( double dist, double *r0, double *r3, double a0,
                   double *p4, int *status ){
/*
*  Name:
*     Shapp

*  Purpose:
*     Use the vectors calculated by Shcal to find a sky position
*     which is offset along a given position angle.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void Shapp( double dist, double *r0, double *r3, double a0,
*                 double *p4, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function uses the vectors R0 and R3 calculated previously by
*     Shcal to find the sky position which is offset away from the
*     "reference" position (see function Offset2) by a given arc
*     distance, along a given great circle.
*
*     No checks are made for AST__BAD values.

*  Parameters:
*     dist
*        The arc distance to move away from the reference position
*        in the given direction, in radians.
*     r0
*        Pointer to an array holding the 3-vector representing the reference
*        position.
*     r3
*        Pointer to an array holding the 3-vector representing the
*        point which is 90 degrees away from the reference point, along
*        the required great circle.
*     a0
*        The sky longitude of the reference position, in radians.
*     p4
*        Pointer to an array of 2 doubles in which to put the sky longitude
*        and latitude of the required point, in radians.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   double cosdst;            /* Cosine of DIST */
   double r4[ 3 ];           /* Required position vector */
   double sindst;            /* Sine of DIST */

/* Check the global error status. */
   if ( !astOK ) return;

/* Store commonly used values. */
   sindst = sin( dist );
   cosdst = cos( dist );

/* The vector R4 representing the required point is produced as a
   linear sum of R0 and R3. */
   r4[ 0 ] = cosdst*r0[ 0 ] + sindst*r3[ 0 ];
   r4[ 1 ] = cosdst*r0[ 1 ] + sindst*r3[ 1 ];
   r4[ 2 ] = cosdst*r0[ 2 ] + sindst*r3[ 2 ];

/* Create the longitude of the required point. If this point is at
   a pole it is assigned the same longitude as the reference point. */
   if( r4[ 0 ] != 0.0 || r4[ 1 ] != 0.0 ) {
      p4[ 0 ] = atan2( r4[ 1 ], r4[ 0 ] );
   } else {
      p4[ 0 ] = a0;
   }

/* Create the latitude of the required point. */
   if( r4[ 2 ] > 1.0 ) {
      r4[ 2 ] = 1.0;
   } else if( r4[ 2 ] < -1.0 ) {
      r4[ 2 ] = -1.0;
   }
   p4[ 1 ] = asin( r4[ 2 ] );

}

static void Shcal( double a0, double b0, double angle, double *r0,
                   double *r3, int *status ) {
/*
*  Name:
*     Shcal

*  Purpose:
*     Calculate vectors required by Offset2.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     void Shcal( double a0, double b0, double angle, double *r0,
*                 double *r3, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function calculates the 3-vector R0, representing the given
*     sky position (A0,B0), and the 3-vector R3, representing the sky
*     position which is 90 degrees away from R0, along a great circle
*     passing through R0 at a position angle given by ANGLE. Each
*     3-vector holds Cartesian (X,Y,Z) values with origin at the centre
*     of the celestial sphere. The XY plane is the "equator", the Z
*     axis is in the direction of the "north pole", X is towards zero
*     longitude (A=0), and Y is towards longitude 90 degrees.
*
*     No checks are made for AST__BAD input values.

*  Parameters:
*     a0
*        The sky longitude of the given position, in radians.
*     b0
*        The sky latitude of the given position, in radians.
*     angle
*        The position angle of a great circle passing through the given
*        position.  That is, the angle from north to the required
*        direction, in radians. Positive angles are in the sense of
*        rotation from north to east.
*     r0
*        A pointer to an array to receive 3-vector R0. See above.
*     r3
*        A pointer to an array to receive 3-vector R3. See above.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   double cosa0;         /* Cosine of A0 */
   double cosb0;         /* Cosine of B0 */
   double cospa;         /* Cosine of ANGLE */
   double r1[ 3 ];       /* Vector PI/2 away from R0 in meridian of R0 */
   double r2[ 3 ];       /* Vector PI/2 away from R0 on equator */
   double sinpa;         /* Sine of ANGLE */
   double sina0;         /* Sine of A0 */
   double sinb0;         /* Sine of B0 */

/* Check the global error status. */
   if ( !astOK ) return;

/* Store commonly used values. */
   sina0 = sin( a0 );
   cosa0 = cos( a0 );
   sinb0 = sin( b0 );
   cosb0 = cos( b0 );
   sinpa = sin( angle );
   cospa = cos( angle );

/* Create the vector R0 representing the given point. The XY plane
   defines zero latitude, Z is in the direction of increasing latitude,
   X is towards zero longitude, and Y is towards longitude 90 degrees. */
   r0[ 0 ] =  cosb0*cosa0;
   r0[ 1 ] =  cosb0*sina0;
   r0[ 2 ] =  sinb0;

/* Create the vector R1 representing the point in the meridian of the
   given point which has latitude 90 degrees greater than the
   given point. */
   r1[ 0 ] = -sinb0*cosa0;
   r1[ 1 ] = -sinb0*sina0;
   r1[ 2 ] =  cosb0;

/* Create the vector R2 representing the point on the equator (i.e. a
   latitude of zero), which has a longitude 90 degrees to the west of
   the given point. */
   r2[ 0 ] = -sina0;
   r2[ 1 ] =  cosa0;
   r2[ 2 ] =  0.0;

/* Create the vector R3 representing the point which is 90 degrees away
   from the given point, along the required great circle. */
   r3[ 0 ] =  cospa*r1[ 0 ] + sinpa*r2[ 0 ];
   r3[ 1 ] =  cospa*r1[ 1 ] + sinpa*r2[ 1 ];
   r3[ 2 ] =  cospa*r1[ 2 ] + sinpa*r2[ 2 ];

/* Return */
   return;
}

static int SubFrame( AstFrame *target_frame, AstFrame *template,
                     int result_naxes, const int *target_axes,
                     const int *template_axes, AstMapping **map,
                     AstFrame **result, int *status ) {
/*
*  Name:
*     SubFrame

*  Purpose:
*     Select axes from a SkyFrame and convert to the new coordinate system.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int SubFrame( AstFrame *target, AstFrame *template,
*                   int result_naxes, const int *target_axes,
*                   const int *template_axes, AstMapping **map,
*                   AstFrame **result, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the protected astSubFrame method
*     inherited from the Frame class).

*  Description:
*     This function selects a requested sub-set (or super-set) of the axes from
*     a "target" SkyFrame and creates a new Frame with copies of the selected
*     axes assembled in the requested order. It then optionally overlays the
*     attributes of a "template" Frame on to the result. It returns both the
*     resulting Frame and a Mapping that describes how to convert between the
*     coordinate systems described by the target and result Frames. If
*     necessary, this Mapping takes account of any differences in the Frames'
*     attributes due to the influence of the template.

*  Parameters:
*     target
*        Pointer to the target SkyFrame, from which axes are to be selected.
*     template
*        Pointer to the template Frame, from which new attributes for the
*        result Frame are to be obtained. Optionally, this may be NULL, in
*        which case no overlaying of template attributes will be performed.
*     result_naxes
*        Number of axes to be selected from the target Frame. This number may
*        be greater than or less than the number of axes in this Frame (or
*        equal).
*     target_axes
*        Pointer to an array of int with result_naxes elements, giving a list
*        of the (zero-based) axis indices of the axes to be selected from the
*        target SkyFrame. The order in which these are given determines the
*        order in which the axes appear in the result Frame. If any of the
*        values in this array is set to -1, the corresponding result axis will
*        not be derived from the target Frame, but will be assigned default
*        attributes instead.
*     template_axes
*        Pointer to an array of int with result_naxes elements. This should
*        contain a list of the template axes (given as zero-based axis indices)
*        with which the axes of the result Frame are to be associated. This
*        array determines which axes are used when overlaying axis-dependent
*        attributes of the template on to the result. If any element of this
*        array is set to -1, the corresponding result axis will not receive any
*        template attributes.
*
*        If the template argument is given as NULL, this array is not used and
*        a NULL pointer may also be supplied here.
*     map
*        Address of a location to receive a pointer to the returned Mapping.
*        The forward transformation of this Mapping will describe how to
*        convert coordinates from the coordinate system described by the target
*        SkyFrame to that described by the result Frame. The inverse
*        transformation will convert in the opposite direction.
*     result
*        Address of a location to receive a pointer to the result Frame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A non-zero value is returned if coordinate conversion is possible
*     between the target and the result Frame. Otherwise zero is returned and
*     *map and *result are returned as NULL (but this will not in itself
*     result in an error condition). In general, coordinate conversion should
*     always be possible if no template Frame is supplied but may not always
*     be possible otherwise.

*  Notes:
*     -  A value of zero will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.

*  Implementation Notes:
*     -  This implementation addresses the selection of axes from a SkyFrame
*     object. This results in another object of the same class only if both
*     axes of the SkyFrame are selected, once each. Otherwise, the result is a
*     Frame class object which inherits the SkyFrame's axis information (if
*     appropriate) but none of the other properties of a SkyFrame.
*     -  In the event that a SkyFrame results, the returned Mapping will take
*     proper account of the relationship between the target and result sky
*     coordinate systems.
*     -  In the event that a Frame class object results, the returned Mapping
*     will only represent a selection/permutation of axes.

*  Implementation Deficiencies:
*     -  Any axis selection is currently permitted. Probably this should be
*     restricted so that each axis can only be selected once. The
*     astValidateAxisSelection method will do this but currently there are bugs
*     in the CmpFrame class that cause axis selections which will not pass this
*     test. Install the validation when these are fixed.
*/

/* Local Variables: */
   AstAxis *ax;                  /* Pointer to result Frame Axis object */
   AstMapping *tmpmap;           /* Temporary Mapping pointer */
   AstPermMap *permmap;          /* Pointer to PermMap */
   AstSkyFrame *target;          /* Pointer to the SkyFrame structure */
   AstSkyFrame *temp;            /* Pointer to copy of target SkyFrame */
   AstSystemType align_sys;      /* System in which to align the SkyFrames */
   int match;                    /* Coordinate conversion is possible? */
   int perm[ 2 ];                /* Permutation array for axis swap */
   int result_swap;              /* Swap result SkyFrame coordinates? */
   int set_usedefs;              /* Set the returned UseDefs attribute zero?*/
   int target_axis;              /* Target SkyFrame axis index */
   int target_swap;              /* Swap target SkyFrame coordinates? */

/* Initialise the returned values. */
   *map = NULL;
   *result = NULL;
   match = 0;

/* Check the global error status. */
   if ( !astOK ) return match;

/* Obtain a pointer to the target SkyFrame structure. */
   target = (AstSkyFrame *) target_frame;

/* Result is a SkyFrame. */
/* --------------------- */
/* Check if the result Frame is to have two axes obtained by selecting
   both of the target SkyFrame axes, in either order. If so, the
   result will also be a SkyFrame. */
   if ( ( result_naxes == 2 ) &&
        ( ( ( target_axes[ 0 ] == 0 ) && ( target_axes[ 1 ] == 1 ) ) ||
          ( ( target_axes[ 0 ] == 1 ) && ( target_axes[ 1 ] == 0 ) ) ) ) {

/* If a template has not been supplied, or is the same object as the
   target, we are simply extracting axes from the supplied SkyFrame. In
   this case we temporarily force the UseDefs attribute to 1 so that (for
   instance) the astPickAxes method can function correctly. E.g. if you
   have a SkyFrame with no set Epoch and UseDefs set zero,  and you try to
   swap the axes, the attempt would fail because MakeSkyMapping would be
   unable to determine the Mapping from original to swapped SkyFrame,
   because of the lack of an Epoch value. */
      set_usedefs = 0;
      if( !template || template == target_frame ) {
         if( !astGetUseDefs( target ) ) {
            astClearUseDefs( target );
            set_usedefs = 1;
         }
      }

/* Form the result from a copy of the target and then permute its axes
   into the order required. */
      *result = astCopy( target );
      astPermAxes( *result, target_axes );

/* If required, overlay the template attributes on to the result SkyFrame.
   Also get the system in which to align the two SkyFrames. This is the
   value of the AlignSystem attribute from the template (if there is a
   template). */
      if ( template ) {
         astOverlay( template, template_axes, *result );
         align_sys = astGetAlignSystem( template );

      } else {
         align_sys = astGetAlignSystem( target );
      }

/* See whether alignment occurs in offset coordinates or absolute
   coordinates. If the current call to this function is part of the
   process of restoring a FrameSet's integrity following changes to
   the FrameSet's current Frame, then we ignore the setting of the
   AlignOffset attributes and use 0. This ensures that when the System
   attribute (for instance) is changed via a FrameSet pointer, the
   Mappings within the FrameSet are modified to produce offsets in the
   new System. If we are not currently restoring a FrameSet's integrity,
   then we align in offsets if the template is a SkyFrame and both template
   and target want alignment to occur in the offset coordinate system. In
   this case we use a UnitMap to connect them. */
      if( ( astGetFrameFlags( target_frame ) & AST__INTFLAG ) == 0 ) {
         if( astGetAlignOffset( target ) &&
             astGetSkyRefIs( target ) != AST__IGNORED_REF &&
             template && astIsASkyFrame( template ) ){
            if( astGetAlignOffset( (AstSkyFrame *) template ) &&
                astGetSkyRefIs( (AstSkyFrame *) template ) != AST__IGNORED_REF ) {
               match = 1;
               *map = (AstMapping *) astUnitMap( 2, "", status );
            }
         }
      }

/* Otherwise, generate a Mapping that takes account of changes in the sky
   coordinate system (equinox, epoch, etc.) between the target SkyFrame and
   the result SkyFrame. If this Mapping can be generated, set "match" to
   indicate that coordinate conversion is possible. */
      if( ! *map ) {
         match = ( MakeSkyMapping( target, (AstSkyFrame *) *result,
                                   align_sys, map, status ) != 0 );
      }

/* If required, re-instate the original zero value of UseDefs. */
      if( set_usedefs ) {
         astSetUseDefs( target, 0 );
         astSetUseDefs( *result, 0 );
      }

/* If a Mapping has been obtained, it will expect coordinate values to be
   supplied in (longitude,latitude) pairs. Test whether we need to swap the
   order of the target SkyFrame coordinates to conform with this. */
      if ( astOK && match ) {
         target_swap = ( astValidateAxis( target, 0, 1, "astSubFrame" ) != 0 );

/* Coordinates will also be delivered in (longitude,latitude) pairs, so check
   to see whether the result SkyFrame coordinate order should be swapped. */
         result_swap = ( target_swap != ( target_axes[ 0 ] != 0 ) );

/* If either set of coordinates needs swapping, create a PermMap that
   will swap a pair of coordinates. */
         permmap = NULL;
         if ( target_swap || result_swap ) {
            perm[ 0 ] = 1;
            perm[ 1 ] = 0;
            permmap = astPermMap( 2, perm, 2, perm, NULL, "", status );
         }

/* If necessary, prefix this PermMap to the main Mapping. */
         if ( target_swap ) {
            tmpmap = (AstMapping *) astCmpMap( permmap, *map, 1, "", status );
            *map = astAnnul( *map );
            *map = tmpmap;
         }

/* Also, if necessary, append it to the main Mapping. */
         if ( result_swap ) {
            tmpmap = (AstMapping *) astCmpMap( *map, permmap, 1, "", status );
            *map = astAnnul( *map );
            *map = tmpmap;
         }

/* Annul the pointer to the PermMap (if created). */
         if ( permmap ) permmap = astAnnul( permmap );
      }

/* Result is not a SkyFrame. */
/* ------------------------- */
/* In this case, we select axes as if the target were from the Frame
   class.  However, since the resulting data will then be separated
   from their enclosing SkyFrame, default attribute values may differ
   if the methods for obtaining them were over-ridden by the SkyFrame
   class. To overcome this, we ensure that these values are explicitly
   set for the result Frame (rather than relying on their
   defaults). */
   } else {

/* Make a temporary copy of the target SkyFrame. We will explicitly
   set the attribute values in this copy so as not to modify the
   original. */
      temp = astCopy( target );

/* Define a macro to test if an attribute is set. If not, set it
   explicitly to its default value. */
#define SET(attribute) \
   if ( !astTest##attribute( temp ) ) { \
      astSet##attribute( temp, astGet##attribute( temp ) ); \
   }

/* Set attribute values which apply to the Frame as a whole and which
   we want to retain, but whose defaults are over-ridden by the
   SkyFrame class. */
      SET(Domain)
      SET(Title)

/* Now loop to set explicit attribute values for each axis. */
      for ( target_axis = 0; target_axis < 2; target_axis++ ) {

/* Define a macro to test if an axis attribute is set. If not, set it
   explicitly to its default value. */
#define SET_AXIS(attribute) \
   if ( !astTest##attribute( temp, target_axis ) ) { \
      astSet##attribute( temp, target_axis, \
                         astGet##attribute( temp, target_axis ) ); \
   }

/* Use this macro to set explicit values for all the axis attributes
   for which the SkyFrame class over-rides the default value. */
         SET_AXIS(AsTime)
         SET_AXIS(Format)
         SET_AXIS(Label)
         SET_AXIS(Symbol)
         SET_AXIS(Unit)

/* Now handle axis attributes for which there are no SkyFrame access
   methods.  For these we require a pointer to the temporary
   SkyFrame's Axis object. */
         ax = astGetAxis( temp, target_axis );

/* Set an explicit value for the IsLatitude and CentreZero attributes. */
         if( astValidateAxis( temp, target_axis, 1, "astSubFrame" ) == 1 ) {
            astSetAxisIsLatitude( ax, 1 );
            astSetAxisCentreZero( ax, 1 );

         } else {
            astSetAxisIsLatitude( ax, 0 );
            astSetAxisCentreZero( ax, astGetNegLon( temp ) );
         }

/* Annul the Axis object pointer. */
         ax = astAnnul( ax );
      }

/* Clear attributes which have an extended range of values allowed by
   this class. */
      astClearSystem( temp );
      astClearAlignSystem( temp );

/* Invoke the astSubFrame method inherited from the Frame class to
   produce the result Frame by selecting the required set of axes and
   overlaying the template Frame's attributes. */
      match = (*parent_subframe)( (AstFrame *) temp, template,
                                  result_naxes, target_axes, template_axes,
                                  map, result, status );

/* Delete the temporary copy of the target SkyFrame. */
      temp = astDelete( temp );
   }

/* Ensure the returned Frame does not have active units. */
   astSetActiveUnit( *result, 0 );

/* If an error occurred or no match was found, annul the returned
   objects and reset the returned result. */
   if ( !astOK || !match ) {
      if( *map ) *map = astAnnul( *map );
      if( *result ) *result = astAnnul( *result );
      match = 0;
   }

/* Return the result. */
   return match;

/* Undefine macros local to this function. */
#undef SET
#undef SET_AXIS
}

static AstSystemType SystemCode( AstFrame *this, const char *system, int *status ) {
/*
*  Name:
*     SystemCode

*  Purpose:
*     Convert a string into a coordinate system type code.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     AstSystemType SystemCode( AstFrame *this, const char *system, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astSystemCode method
*     inherited from the Frame class).

*  Description:
*     This function converts a string used for the external
*     description of a sky coordinate system into a SkyFrame
*     coordinate system type code (System attribute value). It is the
*     inverse of the astSystemString function.

*  Parameters:
*     this
*        The Frame.
*     system
*        Pointer to a constant null-terminated string containing the
*        external description of the sky coordinate system.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The System type code.

*  Notes:
*     - A value of AST__BADSYSTEM is returned if the sky coordinate
*     system description was not recognised. This does not produce an
*     error.
*     - A value of AST__BADSYSTEM is also returned if this function
*     is invoked with the global error status set or if it should fail
*     for any reason.
*/

/* Local Variables: */
   AstSystemType result;      /* Result value to return */

/* Initialise. */
   result = AST__BADSYSTEM;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Match the "system" string against each possibility and assign the
   result. */
   if ( astChrMatch( "FK4", system ) ) {
      result = AST__FK4;

   } else if ( astChrMatch( "FK4_NO_E", system ) ||
               astChrMatch( "FK4-NO-E", system ) ) {
      result = AST__FK4_NO_E;

   } else if ( astChrMatch( "FK5", system ) ||
               astChrMatch( "Equatorial", system ) ) {
      result = AST__FK5;

   } else if ( astChrMatch( "J2000", system ) ) {
      result = AST__J2000;

   } else if ( astChrMatch( "ICRS", system ) ) {
      result = AST__ICRS;

   } else if ( astChrMatch( "AZEL", system ) ) {
      result = AST__AZEL;

   } else if ( astChrMatch( "GAPPT", system ) ||
               astChrMatch( "GEOCENTRIC", system ) ||
               astChrMatch( "APPARENT", system ) ) {
         result = AST__GAPPT;

   } else if ( astChrMatch( "ECLIPTIC", system ) ) {
      result = AST__ECLIPTIC;

   } else if ( astChrMatch( "HELIOECLIPTIC", system ) ) {
      result = AST__HELIOECLIPTIC;

   } else if ( astChrMatch( "GALACTIC", system ) ) {
      result = AST__GALACTIC;

   } else if ( astChrMatch( "SUPERGALACTIC", system ) ) {
      result = AST__SUPERGALACTIC;

   } else if ( astChrMatch( "UNKNOWN", system ) ) {
      result = AST__UNKNOWN;
   }

/* Return the result. */
   return result;
}

static const char *SystemString( AstFrame *this, AstSystemType system, int *status ) {
/*
*  Name:
*     SystemString

*  Purpose:
*     Convert a coordinate system type code into a string.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     const char *SystemString( AstFrame *this, AstSystemType system, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astSystemString method
*     inherited from the Frame class).

*  Description:
*     This function converts a SkyFrame coordinate system type code
*     (System attribute value) into a string suitable for use as an
*     external representation of the coordinate system type.

*  Parameters:
*     this
*        The Frame.
*     system
*        The coordinate system type code.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to a constant null-terminated string containing the
*     textual equivalent of the type code supplied.

*  Notes:
*     - A NULL pointer value is returned if the sky coordinate system
*     code was not recognised. This does not produce an error.
*     - A NULL pointer value is also returned if this function is
*     invoked with the global error status set or if it should fail
*     for any reason.
*/

/* Local Variables: */
   const char *result;           /* Pointer value to return */

/* Initialise. */
   result = NULL;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Match the "system" value against each possibility and convert to a
   string pointer. (Where possible, return the same string as would be
   used in the FITS WCS representation of the coordinate system). */
   switch ( system ) {
   case AST__FK4:
      result = "FK4";
      break;

   case AST__FK4_NO_E:
      result = "FK4-NO-E";
      break;

   case AST__FK5:
      result = "FK5";
      break;

   case AST__J2000:
      result = "J2000";
      break;

   case AST__ICRS:
      result = "ICRS";
      break;

   case AST__GAPPT:
      result = "GAPPT";
      break;

   case AST__AZEL:
      result = "AZEL";
      break;

   case AST__ECLIPTIC:
      result = "ECLIPTIC";
      break;

   case AST__HELIOECLIPTIC:
      result = "HELIOECLIPTIC";
      break;

   case AST__GALACTIC:
      result = "GALACTIC";
      break;

   case AST__SUPERGALACTIC:
      result = "SUPERGALACTIC";
      break;

   case AST__UNKNOWN:
      result = "Unknown";
      break;
   }

/* Return the result pointer. */
   return result;
}

static int TestActiveUnit( AstFrame *this_frame, int *status ) {
/*
*  Name:
*     TestActiveUnit

*  Purpose:
*     Test the ActiveUnit flag for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int TestActiveUnit( AstFrame *this_frame, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astTestActiveUnit protected
*     method inherited from the Frame class).

*  Description:
*    This function test the value of the ActiveUnit flag for a SkyFrame,
*    which is always "unset".

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The result of the test (0).

*/
   return 0;
}

static int TestAsTime( AstSkyFrame *this, int axis, int *status ) {
/*
*  Name:
*     TestAsTime

*  Purpose:
*     Determine if a value has been set for a SkyFrame's AsTime attribute.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int TestAsTime( AstSkyFrame *this, int axis, int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function returns a boolean value to indicate if a value has
*     previously been set for the AsTime attribute for a specified axis of a
*     SkyFrame. This attribute indicates whether axis values should be
*     formatted as times (as opposed to angles) by default.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        Index of the axis for which information is required (zero based).
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Zero or one, according to whether the AsTime attribute has been set.

*  Notes:
*     -  A value of zero will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*/

/* Local Variables. */
   AstAxis *ax;                  /* Pointer to Axis object */
   int result;                   /* Result to be returned */

/* Check the global error status. */
   if ( !astOK ) return 0;

/* Validate the axis index. */
   (void) astValidateAxis( this, axis, 1, "astTestAsTime" );

/* Obtain a pointer to the Axis object. */
   ax = astGetAxis( this, axis );

/* Determine if the AsTime attribute has been set for it (it cannot have been
   set unless the object is a SkyAxis). */
   result = ( astIsASkyAxis( ax ) && astTestAxisAsTime( ax ) );

/* Annul the Axis pointer. */
   ax = astAnnul( ax );

/* Return the result. */
   return result;
}

static int TestAttrib( AstObject *this_object, const char *attrib, int *status ) {
/*
*  Name:
*     TestAttrib

*  Purpose:
*     Test if a specified attribute value is set for a SkyFrame.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int TestAttrib( AstObject *this, const char *attrib, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astTestAttrib protected
*     method inherited from the Frame class).

*  Description:
*     This function returns a boolean result (0 or 1) to indicate whether
*     a value has been set for one of a SkyFrame's attributes.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     attrib
*        Pointer to a null terminated string specifying the attribute
*        name.  This should be in lower case with no surrounding white
*        space.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     One if a value has been set, otherwise zero.

*  Notes:
*     - This function uses one-based axis numbering so that it is
*     suitable for external (public) use.
*     - A value of zero will be returned if this function is invoked
*     with the global status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   int axis;                     /* SkyFrame axis number */
   int len;                      /* Length of attrib string */
   int nc;                       /* No. characters read by astSscanf */
   int result;                   /* Result value to return */

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_object;

/* Obtain the length of the attrib string. */
   len = strlen( attrib );

/* Check the attribute name and test the appropriate attribute. */

/* AsTime(axis). */
/* ------------- */
   if ( nc = 0,
        ( 1 == astSscanf( attrib, "astime(%d)%n", &axis, &nc ) )
        && ( nc >= len ) ) {
      result = astTestAsTime( this, axis - 1 );

/* Equinox. */
/* -------- */
   } else if ( !strcmp( attrib, "equinox" ) ) {
      result = astTestEquinox( this );

/* NegLon. */
/* ------- */
   } else if ( !strcmp( attrib, "neglon" ) ) {
      result = astTestNegLon( this );

/* SkyTol. */
/* ------- */
   } else if ( !strcmp( attrib, "skytol" ) ) {
      result = astTestSkyTol( this );

/* Projection. */
/* ----------- */
   } else if ( !strcmp( attrib, "projection" ) ) {
      result = astTestProjection( this );

/* SkyRefIs. */
/* --------- */
   } else if ( !strcmp( attrib, "skyrefis" ) ) {
      result = astTestSkyRefIs( this );

/* SkyRef. */
/* ------- */
   } else if ( !strcmp( attrib, "skyref" ) ) {
      result = astTestSkyRef( this, 0 ) || astTestSkyRef( this, 1 );

/* SkyRef(axis). */
/* ------------- */
   } else if ( nc = 0,
        ( 1 == astSscanf( attrib, "skyref(%d)%n", &axis, &nc ) )
        && ( nc >= len ) ) {
      result = astTestSkyRef( this, axis - 1 );

/* SkyRefP. */
/* -------- */
   } else if ( !strcmp( attrib, "skyrefp" ) ) {
      result = astTestSkyRefP( this, 0 ) || astTestSkyRefP( this, 1 );

/* SkyRefP(axis). */
/* ------------- */
   } else if ( nc = 0,
        ( 1 == astSscanf( attrib, "skyrefp(%d)%n", &axis, &nc ) )
        && ( nc >= len ) ) {
      result = astTestSkyRefP( this, axis - 1 );

/* AlignOffset */
/* ----------- */
   } else if ( !strcmp( attrib, "alignoffset" ) ) {
      result = astTestAlignOffset( this );

/* If the name is not recognised, test if it matches any of the
   read-only attributes of this class. If it does, then return
   zero. */
   } else if ( !strncmp( attrib, "islataxis", 9 ) ||
               !strncmp( attrib, "islonaxis", 9 ) ||
               !strcmp( attrib, "lataxis" ) ||
               !strcmp( attrib, "lonaxis" ) ) {
      result = 0;

/* If the attribute is not recognised, pass it on to the parent method
   for further interpretation. */
   } else {
      result = (*parent_testattrib)( this_object, attrib, status );
   }

/* Return the result, */
   return result;
}

static int TestSlaUnit( AstSkyFrame *sf1, AstSkyFrame *sf2, AstSlaMap *slamap,
                        int *status ){
/*
*  Name:
*     Unformat

*  Purpose:
*     See if a slamap is effectively a unit mapping.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int TestSlaUnit( AstSkyFrame *sf1, AstSkyFrame *sf2, AstSlaMap *slamap,
*                      int *status )

*  Class Membership:
*     SkyFrame member function.

*  Description:
*     This function tests a SlaMap to see if it is effectively a unit
*     transformatuon to within a tolerance given by the smaller tolerance
*     of the two supplied SkyFrames.

*  Parameters:
*     sf1
*        Pointer to the first SkyFrame.
*     sf2
*        Pointer to the second SkyFrame (may be NULL)
*     slamap
*        Pointer to the SlaMap to test.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Non-zero if the SlaMap is effectively a unit mapping, and zero
*     otherwise.

*/

/*  Number of test points. */
#define NTEST 14

/* Local Variables: */
   double maxshift;            /* Max. shift produced by slamap (rads) */
   double olat[NTEST];         /* Transformed latitudes */
   double olon[NTEST];         /* Transformed longitudes */
   double shift;               /* Shift produced by slamap (rads) */
   double tol2;                /* Second tolerance (in radians) */
   double tol;                 /* Used tolerance (in radians) */
   int i;                      /* Loop count */
   int result;                 /* Returned flag */

/* A grid of lon/lat points covering the sphere. */
   double lat[ NTEST ] = { 0.0,  0.0,  0.0,  0.0,
                           0.8,  0.8,  0.8,  0.8,
                          -0.8, -0.8, -0.8, -0.8,
                           1.570796, -1.570796 };
   double lon[ NTEST ] = { 0.0,  1.57,  3.14,  4.71,
                           0.8,  2.37,  3.94,  5.51,
                           0.8,  2.37,  3.94,  5.51,
                           0.0, 0.0 };

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* If the SlaMap is empty (i.e. has no conversions in it), then is it a
   UnitMap. So save time by not transforming the test values. */
   if( astSlaIsEmpty( slamap ) ) {
      result = 1;

/* Otherwise, get the smaller of the tolerances associated with the
   supplied SkyFrames, in radians. */
   } else {
      tol = astGetSkyTol( sf1 );
      if( sf2 ) {
         tol2 = astGetSkyTol( sf2 );
         if( tol2 < tol ) tol = tol2;
      }

/* If the tolerance is zero, there is no need to do the test. */
      if( tol > 0.0 ) {

/* Transform the test point using the SlaMap. */
         astTran2( slamap, NTEST, lon, lat, 1, olon, olat );

/* Find the maximum shift produced by the SlaMap at any of the test
   positions. Again, to avoid the slow-down produced by checking for
   axis permutation, use palDsep rather than astDistance. */
         maxshift = 0.0;
         for( i = 0; i < NTEST; i++ ) {
            shift = palDsep( lon[ i ], lat[ i ], olon[ i ], olat[ i ] );
            if( shift > maxshift ) maxshift = shift;
         }

/* Convert the max shift to arc-seconds and do the check. */
         result = ( maxshift*AST__DR2D*3600 < tol );
      }
   }

   return result;
}

static int Unformat( AstFrame *this_frame, int axis, const char *string,
                     double *value, int *status ) {
/*
*  Name:
*     Unformat

*  Purpose:
*     Read a formatted coordinate value for a SkyFrame axis.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*     int Unformat( AstFrame *this, int axis, const char *string,
*                   double *value, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the public astUnformat
*     method inherited from the Frame class).

*  Description:
*     This function reads a formatted coordinate value for a SkyFrame
*     axis (supplied as a string) and returns the equivalent numerical
*     value as a double. It also returns the number of characters read
*     from the string.

*  Parameters:
*     this
*        Pointer to the SkyFrame.
*     axis
*        The number of the SkyFrame axis for which the coordinate
*        value is to be read (axis numbering starts at zero for the
*        first axis).
*     string
*        Pointer to a constant null-terminated string containing the
*        formatted coordinate value.
*     value
*        Pointer to a double in which the coordinate value read will
*        be returned (in radians).
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The number of characters read from the string to obtain the
*     coordinate value.

*  Notes:
*     - Any white space at the beginning of the string will be
*     skipped, as also will any trailing white space following the
*     coordinate value read. The function's return value will reflect
*     this.
*     - A function value of zero (and no coordinate value) will be
*     returned, without error, if the string supplied does not contain
*     a suitably formatted value.
*     - The string "<bad>" is recognised as a special case and will
*     generate the value AST__BAD, without error. The test for this
*     string is case-insensitive and permits embedded white space.
*     - A function result of zero will be returned and no coordinate
*     value will be returned via the "value" pointer if this function
*     is invoked with the global error status set, or if it should
*     fail for any reason.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   double coord;                 /* Coordinate value read */
   int format_set;               /* Format attribute set? */
   int nc;                       /* Number of characters read */

/* Initialise. */
   nc = 0;

/* Check the global error status. */
   if ( !astOK ) return nc;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_frame;

/* Validate the axis index. */
   (void) astValidateAxis( this, axis, 1, "astUnformat" );

/* Determine if a Format value has been set for the axis and set a
   temporary value if it has not. Use the GetFormat member function
   for this class together with member functions inherited from the
   parent class (rather than using the object's methods directly)
   because if any of these methods have been over-ridden by a derived
   class the Format string syntax may no longer be compatible with
   this class. */
   format_set = (*parent_testformat)( this_frame, axis, status );
   if ( !format_set ) {
      (*parent_setformat)( this_frame, axis, GetFormat( this_frame, axis, status ), status );
   }

/* Use the Unformat member function inherited from the parent class to
   read the coordinate value. */
   nc = (*parent_unformat)( this_frame, axis, string, &coord, status );

/* If necessary, clear any temporary Format value that was set above. */
   if ( !format_set ) (*parent_clearformat)( this_frame, axis, status );

/* If an error occurred, clear the number of characters read. */
   if ( !astOK ) {
      nc = 0;

/* Otherwise, if characters were read, return the coordinate value. */
   } else if ( nc ) {
      *value = coord;
   }

/* Return the number of characters read. */
   return nc;
}

static int ValidateSystem( AstFrame *this, AstSystemType system, const char *method, int *status ) {
/*
*
*  Name:
*     ValidateSystem

*  Purpose:
*     Validate a value for a Frame's System attribute.

*  Type:
*     Protected virtual function.

*  Synopsis:
*     #include "frame.h"
*     int ValidateSystem( AstFrame *this, AstSystemType system,
*                         const char *method, int *status )

*  Class Membership:
*     SkyFrame member function (over-rides the astValidateSystem method
*     inherited from the Frame class).

*  Description:
*     This function checks the validity of the supplied system value.
*     If the value is valid, it is returned unchanged. Otherwise, an
*     error is reported and a value of AST__BADSYSTEM is returned.

*  Parameters:
*     this
*        Pointer to the Frame.
*     system
*        The system value to be checked.
*     method
*        Pointer to a constant null-terminated character string
*        containing the name of the method that invoked this function
*        to validate an axis index. This method name is used solely
*        for constructing error messages.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The validated system value.

*  Notes:
*     - A value of AST__BADSYSTEM will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   AstSystemType result;              /* Validated system value */

/* Initialise. */
   result = AST__BADSYSTEM;

/* Check the global error status. */
   if ( !astOK ) return result;

/* If the value is out of bounds, report an error. */
   if ( system < FIRST_SYSTEM || system > LAST_SYSTEM ) {
         astError( AST__AXIIN, "%s(%s): Bad value (%d) given for the System "
                   "or AlignSystem attribute of a %s.", status, method,
                   astGetClass( this ), (int) system, astGetClass( this ) );

/* Otherwise, return the supplied value. */
   } else {
      result = system;
   }

/* Return the result. */
   return result;
}

static void VerifyMSMAttrs( AstSkyFrame *target, AstSkyFrame *result,
                            int which, const char *attrs, const char *method, int *status ) {
/*
*  Name:
*     VerifyMSMAttrs

*  Purpose:
*     Verify that usable attribute values are available.

*  Type:
*     Private function.

*  Synopsis:
*     #include "skyframe.h"
*      void VerifyMSMAttrs( AstSkyFrame *target, AstSkyFrame *result,
*                           int which, const char *attrs, const char *method, int *status )

*  Class Membership:
*     SkyFrame member function

*  Description:
*     This function tests each attribute listed in "attrs". It returns
*     without action if 1) an explicit value has been set for each attribute
*     in the SkyFrame indicated by "which" or 2) the UseDefs attribute of the
*     "which" SkyFrame is non-zero.
*
*     If UseDefs is zero (indicating that default values should not be
*     used for attributes), and any of the named attributes does not have
*     an explicitly set value, then an error is reported.
*
*     The displayed error message assumes that tjis function was called
*     as part of the process of producing a Mapping from "target" to "result".

*  Parameters:
*     target
*        Pointer to the target SkyFrame.
*     result
*        Pointer to the result SkyFrame.
*     which
*        If 2, both the target and result SkyFrames are checked for the
*        supplied attributes. If less than 2, only the target SkyFrame is
*        checked. If greater than 2, only the result SkyFrame is checked.
*     attrs
*        A string holding a space separated list of attribute names.
*     method
*        A string holding the name of the calling method for use in error
*        messages.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   const char *a;
   const char *p;
   const char *desc;
   int len;
   int set1;
   int set2;
   int state;
   int usedef1;
   int usedef2;

/* Check inherited status */
   if( !astOK ) return;

/* Get the UseDefs attributes of the two SkyFrames. */
   usedef1 = astGetUseDefs( target );
   usedef2 = astGetUseDefs( result );

/* If both SkyFrames have a non-zero value for its UseDefs attribute, then
   all attributes are assumed to have usable values, since the defaults
   will be used if no explicit value has been set. So we only need to do
   any checks if UseDefs is zero for either SkyFrame. */
   if( !usedef1 || !usedef2 ) {

/* Stop compiler warnings about uninitialised variables */
      a = NULL;
      desc = NULL;
      len = 0;
      set1 = 0;
      set2 = 0;

/* Loop round the "attrs" string identifying the start and length of each
   non-blank word in the string. */
      state = 0;
      p = attrs;
      while( 1 ) {
         if( state == 0 ) {
            if( !isspace( *p ) ) {
               a = p;
               len = 1;
               state = 1;
            }
         } else {
            if( isspace( *p ) || !*p ) {

/* The end of a word has just been reached. Compare it to each known
   attribute value. Get a flag indicating if the attribute has a set
   value, and a string describing the attribute.*/
               if( len > 0 ) {

                  if( !strncmp( "Equinox", a, len ) ) {
                     set1 = astTestEquinox( target );
                     set2 = astTestEquinox( result );
                     desc = "reference equinox";

                  } else if( !strncmp( "Dtai", a, len ) ) {
                     set1 = astTestDtai( target );
                     set2 = astTestDtai( result );
                     desc = "TAI-UTC correction";

                  } else if( !strncmp( "Dut1", a, len ) ) {
                     set1 = astTestDut1( target );
                     set2 = astTestDut1( result );
                     desc = "UT1-UTC correction";

                  } else if( !strncmp( "Epoch", a, len ) ) {
                     set1 = astTestEpoch( target );
                     set2 = astTestEpoch( result );
                     desc = "epoch of observation";

                  } else if( !strncmp( "ObsLon", a, len ) ) {
                     set1 = astTestObsLon( target );
                     set2 = astTestObsLon( result );
                     desc = "longitude of observer";

                  } else if( !strncmp( "ObsLat", a, len ) ) {
                     set1 = astTestObsLat( target );
                     set2 = astTestObsLat( result );
                     desc = "latitude of observer";

                  } else if( !strncmp( "ObsAlt", a, len ) ) {
                     set1 = astTestObsAlt( target );
                     set2 = astTestObsAlt( result );
                     desc = "altitude of observer";

                  } else {
                     astError( AST__INTER, "VerifyMSMAttrs(SkyFrame): "
                               "Unknown attribute name \"%.*s\" supplied (AST "
                               "internal programming error).", status, len, a );
                  }

/* If the attribute is not set in the target but should be, report an
   error. */
                  if( !usedef1 && !set1 && which < 3 ) {
                     astClearTitle( target );
                     astClearTitle( result );
                     astError( AST__NOVAL, "%s(%s): Cannot convert "
                               "celestial coordinates from %s to %s.", status,
                               method, astGetClass( target ),
                               astGetC( target, "Title" ),
                               astGetC( result, "Title" ) );
                     astError( AST__NOVAL, "No value has been set for "
                               "the \"%.*s\" attribute (%s) in the input %s.", status,
                               len, a, desc, astGetClass( target ) );
                     break;
                  }

/* If the attribute is not set in the result but should be, report an
   error. */
                  if( !usedef2 && !set2 && which > 1 ) {
                     astClearTitle( target );
                     astClearTitle( result );
                     astError( AST__NOVAL, "%s(%s): Cannot convert "
                               "celestial coordinates from %s to %s.", status,
                               method, astGetClass( result ),
                               astGetC( target, "Title" ),
                               astGetC( result, "Title" ) );
                     astError( AST__NOVAL, "No value has been set for "
                               "the \"%.*s\" attribute (%s) in the output %s.", status,
                               len, a, desc, astGetClass( result ) );
                     break;
                  }

/* Continue the word search algorithm. */
               }
               len = 0;
               state = 0;
            } else {
               len++;
            }
         }
         if( !*(p++) ) break;
      }
   }
}

/* Functions which access class attributes. */
/* ---------------------------------------- */
/*
*att++
*  Name:
*     AlignOffset

*  Purpose:
*     Align SkyFrames using the offset coordinate system?

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer (boolean).

*  Description:
*     This attribute is a boolean value which controls how a SkyFrame
*     behaves when it is used (by
c     astFindFrame or astConvert) as a template to match another (target)
f     AST_FINDFRAME or AST_CONVERT) as a template to match another (target)
*     SkyFrame. It determines the coordinate system in which the two
*     SkyFrames are aligned if a match occurs.
*
*     If the template and target SkyFrames both have defined offset coordinate
*     systems (i.e. the SkyRefIs attribute is set to either "Origin" or "
*     Pole"), and they both have a non-zero value for AlignOffset, then
*     alignment occurs within the offset coordinate systems (that is, a
*     UnitMap will always be used to align the two SkyFrames). If either
*     the template or target SkyFrame has zero (the default value) for
*     AlignOffset, or if either SkyFrame has SkyRefIs set to "Ignored", then
*     alignment occurring within the coordinate system specified by the
*     AlignSystem attribute.

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.
*att--
*/
astMAKE_CLEAR(SkyFrame,AlignOffset,alignoffset,-INT_MAX)
astMAKE_GET(SkyFrame,AlignOffset,int,0,( ( this->alignoffset != -INT_MAX ) ?
                                           this->alignoffset : 0 ))
astMAKE_SET(SkyFrame,AlignOffset,int,alignoffset,( value != 0 ))
astMAKE_TEST(SkyFrame,AlignOffset,( this->alignoffset != -INT_MAX ))

/*
*att++
*  Name:
*     AsTime(axis)

*  Purpose:
*     Format celestal coordinates as times?

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer (boolean).

*  Description:
*     This attribute specifies the default style of formatting to be
c     used (e.g. by astFormat) for the celestial coordinate values
f     used (e.g. by AST_FORMAT) for the celestial coordinate values
*     described by a SkyFrame. It takes a separate boolean value for
*     each SkyFrame axis so that, for instance, the setting
*     "AsTime(2)=0" specifies the default formatting style for
*     celestial latitude values.
*
*     If the AsTime attribute for a SkyFrame axis is zero, then
*     coordinates on that axis will be formatted as angles by default
*     (using degrees, minutes and seconds), otherwise they will be
*     formatted as times (using hours, minutes and seconds).
*
*     The default value of AsTime is chosen according to the sky
*     coordinate system being represented, as determined by the
*     SkyFrame's System attribute. This ensures, for example, that
*     right ascension values will be formatted as times by default,
*     following normal conventions.

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.

*  Notes:
*     - The AsTime attribute operates by changing the default value of
*     the corresponding Format(axis) attribute. This, in turn, may
*     also affect the value of the Unit(axis) attribute.
*     - Only the default style of formatting is affected by the AsTime
*     value. If an explicit Format(axis) value is set, it will
*     over-ride any effect from the AsTime attribute.
*att--
*/

/*
*att++
*  Name:
*     Equinox

*  Purpose:
*     Epoch of the mean equinox.

*  Type:
*     Public attribute.

*  Synopsis:
*     Floating point.

*  Description:
*     This attribute is used to qualify those celestial coordinate
*     systems described by a SkyFrame which are notionally based on
*     the ecliptic (the plane of the Earth's orbit around the Sun)
*     and/or the Earth's equator.
*
*     Both of these planes are in motion and their positions are
*     difficult to specify precisely. In practice, therefore, a model
*     ecliptic and/or equator are used instead. These, together with
*     the point on the sky that defines the coordinate origin (the
*     intersection of the two planes termed the "mean equinox") move
*     with time according to some model which removes the more rapid
*     fluctuations. The SkyFrame class supports both the FK4 and
*     FK5 models.
*
*     The position of a fixed source expressed in any of these
*     coordinate systems will appear to change with time due to
*     movement of the coordinate system itself (rather than motion of
*     the source).  Such coordinate systems must therefore be
*     qualified by a moment in time (the "epoch of the mean equinox"
*     or "equinox" for short) which allows the position of the model
*     coordinate system on the sky to be determined. This is the role
*     of the Equinox attribute.
*
*     The Equinox attribute is stored as a Modified Julian Date, but
*     when setting or getting its value you may use the same formats
*     as for the Epoch attribute (q.v.).
*
*     The default Equinox value is B1950.0 (Besselian) for the old
*     FK4-based coordinate systems (see the System attribute) and
*     J2000.0 (Julian) for all others.

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.

*  Notes:
*     - Care must be taken to distinguish the Equinox value, which
*     relates to the definition of a time-dependent coordinate system
*     (based on solar system reference planes which are in motion),
*     from the superficially similar Epoch value. The latter is used
*     to qualify coordinate systems where the positions of sources
*     change with time (or appear to do so) for a variety of other
*     reasons, such as aberration of light caused by the observer's
*     motion, etc.
*     - See the description of the System attribute for details of
*     which qualifying attributes apply to each celestial coordinate
*     system.
*att--
*/
/* Clear the Equinox value by setting it to AST__BAD. */
astMAKE_CLEAR(SkyFrame,Equinox,equinox,AST__BAD)

/* Provide a default value of B1950.0 or J2000.0 depending on the System
   setting. */
astMAKE_GET(SkyFrame,Equinox,double,AST__BAD,(
            ( this->equinox != AST__BAD ) ? this->equinox :
               ( ( ( astGetSystem( this ) == AST__FK4 ) ||
                   ( astGetSystem( this ) == AST__FK4_NO_E ) ) ?
                    palEpb2d( 1950.0 ) : palEpj2d( 2000.0 ) ) ))

/* Allow any Equinox value to be set, unless the System is Helio-ecliptic
   (in which case clear the value so that J2000 is used). */
astMAKE_SET(SkyFrame,Equinox,double,equinox,((astGetSystem(this)!=AST__HELIOECLIPTIC)?value:AST__BAD))

/* An Equinox value is set if it is not equal to AST__BAD. */
astMAKE_TEST(SkyFrame,Equinox,( this->equinox != AST__BAD ))


/*
*att++
*  Name:
*     IsLatAxis(axis)

*  Purpose:
*     Is the specified celestial axis a latitude axis?

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer (boolean), read-only.

*  Description:
*     This is a read-only boolean attribute that indicates the nature of
*     the specified axis. The attribute has a non-zero value if the
*     specified axis is a celestial latitude axis (Declination, Galactic
*     latitude, etc), and is zero otherwise.

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.

*  Notes:
*     - When specifying this attribute by name, it should be
*     subscripted with the number of the SkyFrame axis to be tested.
*att--
*/

/*
*att++
*  Name:
*     IsLonAxis(axis)

*  Purpose:
*     Is the specified celestial axis a longitude axis?

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer (boolean), read-only.

*  Description:
*     This is a read-only boolean attribute that indicates the nature of
*     the specified axis. The attribute has a non-zero value if the
*     specified axis is a celestial longitude axis (Right Ascension, Galactic
*     longitude, etc), and is zero otherwise.

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.

*  Notes:
*     - When specifying this attribute by name, it should be
*     subscripted with the number of the SkyFrame axis to be tested.
*att--
*/

/*
*att++
*  Name:
*     LatAxis

*  Purpose:
*     Index of the latitude axis.

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer.

*  Description:
*     This read-only attribute gives the index (1 or 2) of the latitude
*     axis within the SkyFrame (taking into account any current axis
*     permutations).

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.

*att--
*/

/*
*att++
*  Name:
*     LonAxis

*  Purpose:
*     Index of the longitude axis.

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer.

*  Description:
*     This read-only attribute gives the index (1 or 2) of the longitude
*     axis within the SkyFrame (taking into account any current axis
*     permutations).

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.

*att--
*/

/*
*att++
*  Name:
*     NegLon

*  Purpose:
*     Display negative longitude values?

*  Type:
*     Public attribute.

*  Synopsis:
*     Integer (boolean).

*  Description:
*     This attribute is a boolean value which controls how longitude values
c     are normalized for display by astNorm.
f     are normalized for display by AST_NORM.
*
*     If the NegLon attribute is zero, then normalized
*     longitude values will be in the range zero to 2.pi. If NegLon is
*     non-zero, then normalized longitude values will be in the range -pi
*     to pi.
*
*     The default value depends on the current value of the SkyRefIs
*     attribute, If SkyRefIs has a value of "Origin", then the default for
*     NegLon is one, otherwise the default is zero.

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.
*att--
*/
/* Clear the NegLon value by setting it to -INT_MAX. */
astMAKE_CLEAR(SkyFrame,NegLon,neglon,-INT_MAX)

/* Supply a default of 0 for absolute coords and 1 for offset coords if
   no NegLon value has been set. */
astMAKE_GET(SkyFrame,NegLon,int,0,( ( this->neglon != -INT_MAX ) ?
this->neglon : (( astGetSkyRefIs( this ) == AST__ORIGIN_REF )? 1 : 0)))

/* Set a NegLon value of 1 if any non-zero value is supplied. */
astMAKE_SET(SkyFrame,NegLon,int,neglon,( value != 0 ))

/* The NegLon value is set if it is not -INT_MAX. */
astMAKE_TEST(SkyFrame,NegLon,( this->neglon != -INT_MAX ))

/*
*att++
*  Name:
*     SkyTol

*  Purpose:
*     The smallest significant shift in sky coordinates.

*  Type:
*     Public attribute.

*  Synopsis:
*     Floating point.

*  Description:
*     This attribute indicates the accuracy of the axis values that will
*     be represented by the SkyFrame. If the arc-distance between two
*     positions within the SkyFrame is smaller than the value of SkyTol,
*     then the two positions will (for the puposes indicated below) be
*     considered to be co-incident.
*
*     This value is used only when constructing the Mapping between
*     two different SkyFrames (for instance, when calling
c     astConvert or astFindFrame).
f     AST_CONVERT or AST_FINDFRAME).
*     If the transformation between the two SkyFrames causes positions to
*     shift by less than SkyTol arc-seconds, then the transformation is
*     replaced by a UnitMap.  This could in certain circumatances allow
*     major simplifications to be made to the transformation between
*     any pixel grids associated with the two SkyFrames (for instance, if
*     each SkyFrame is part of the WCS FrameSet associated with an image).
*
*     A common case is when two SkyFrames use the FK5 system, but have
*     slightly different Epoch values. If the AlignSystem attribute has
*     its default value of "ICRS", then the transformation between the
*     two SkyFrames will include a very small rotation (FK5 rotates with
*     respect to ICRS as a rate of about 0.0005 arc-seconds per year). In
*     most circumstances such a small rotation is insignificant. Setting
*     SkyTol to some suitably small non-zero value will cause this
*     rotation to be ignored, allowing much simpler transformations to
*     be used.
*
*     The test to determine the shift introduced by transforming between
*     the two SkyFrames is performed by transforming a set of 14 position
*     spread evenly over the whole sky. The largest shift produced at any
*     of these 14 positions is compared to the value of SkyTol.
*
*     The SkyTol value is in units of arc-seconds, and the default value
*     is 0.001.

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.
*att--
*/
astMAKE_CLEAR(SkyFrame,SkyTol,skytol,AST__BAD)
astMAKE_GET(SkyFrame,SkyTol,double,0.001,((this->skytol!=AST__BAD)?this->skytol:0.001))
astMAKE_SET(SkyFrame,SkyTol,double,skytol,fabs(value))
astMAKE_TEST(SkyFrame,SkyTol,(this->skytol!=AST__BAD))

/*
*att++
*  Name:
*     Projection

*  Purpose:
*     Sky projection description.

*  Type:
*     Public attribute.

*  Synopsis:
*     String.

*  Description:
*     This attribute provides a place to store a description of the
*     type of sky projection used when a SkyFrame is attached to a
*     2-dimensional object, such as an image or plotting surface. For
*     example, typical values might be "orthographic", "Hammer-Aitoff"
*     or "cylindrical equal area".
*
*     The Projection value is purely descriptive and does not affect
*     the celestial coordinate system represented by the SkyFrame in
*     any way. If it is set to a non-blank string, the description
*     provided may be used when forming the default value for the
*     SkyFrame's Title attribute (so that typically it will appear in
*     graphical output, for instance). The default value is an empty
*     string.

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.
*att--
*/
/* Clear the Projection value by freeing the allocated memory and
   assigning a NULL pointer. */
astMAKE_CLEAR(SkyFrame,Projection,projection,astFree( this->projection ))

/* If the Projection value is not set, return a pointer to an empty
   string. */
astMAKE_GET(SkyFrame,Projection,const char *,NULL,( this->projection ?
                                                    this->projection : "" ))

/* Set a Projection value by freeing any previously allocated memory,
   allocating new memory, storing the string and saving the pointer to
   the copy. */
astMAKE_SET(SkyFrame,Projection,const char *,projection,astStore(
                     this->projection, value, strlen( value ) + (size_t) 1 ))

/* The Projection value is set if the pointer to it is not NULL. */
astMAKE_TEST(SkyFrame,Projection,( this->projection != NULL ))

/*
*att++
*  Name:
*     SkyRefIs

*  Purpose:
*     Selects the nature of the offset coordinate system.

*  Type:
*     Public attribute.

*  Synopsis:
*     String.

*  Description:
*     This attribute controls how the values supplied for the SkyRef and
*     SkyRefP attributes are used. These three attributes together allow
*     a SkyFrame to represent offsets relative to some specified origin
*     or pole within the coordinate system specified by the System attribute,
*     rather than absolute axis values. SkyRefIs can take one of the
*     case-insensitive values "Origin", "Pole" or "Ignored".
*
*     If SkyRefIs is set to "Origin", then the coordinate system
*     represented by the SkyFrame is modified to put the origin of longitude
*     and latitude at the position specified by the SkyRef attribute.
*
*     If SkyRefIs is set to "Pole", then the coordinate system represented
*     by the SkyFrame is modified to put the north pole at the position
*     specified by the SkyRef attribute.
*
*     If SkyRefIs is set to "Ignored" (the default), then any value set for the
*     SkyRef attribute is ignored, and the SkyFrame represents the coordinate
*     system specified by the System attribute directly without any rotation.

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.

*att--
*/
astMAKE_CLEAR(SkyFrame,SkyRefIs,skyrefis,AST__BAD_REF)
astMAKE_SET(SkyFrame,SkyRefIs,int,skyrefis,value)
astMAKE_TEST(SkyFrame,SkyRefIs,( this->skyrefis != AST__BAD_REF ))
astMAKE_GET(SkyFrame,SkyRefIs,int,AST__IGNORED_REF,(this->skyrefis == AST__BAD_REF ? AST__IGNORED_REF : this->skyrefis))

/*
*att++
*  Name:
*     SkyRef(axis)

*  Purpose:
*     Position defining the offset coordinate system.

*  Type:
*     Public attribute.

*  Synopsis:
*     Floating point.

*  Description:
*     This attribute allows a SkyFrame to represent offsets, rather than
*     absolute axis values, within the coordinate system specified by the
*     System attribute. If supplied, SkyRef should be set to hold the
*     longitude and latitude of a point within the coordinate system
*     specified by the System attribute. The coordinate system represented
*     by the SkyFrame will then be rotated in order to put the specified
*     position at either the pole or the origin of the new coordinate system
*     (as indicated by the SkyRefIs attribute). The orientation of the
*     modified coordinate system is then controlled using the SkyRefP
*     attribute.
*
*     If an integer axis index is included in the attribute name (e.g.
*     "SkyRef(1)") then the attribute value should be supplied as a single
*     floating point axis value, in radians, when setting a value for the
*     attribute, and will be returned in the same form when getting the value
*     of the attribute. In this case the integer axis index should be "1"
*     or "2" (the values to use for longitude and latitude axes are
*     given by the LonAxis and LatAxis attributes).
*
*     If no axis index is included in the attribute name (e.g. "SkyRef") then
*     the attribute value should be supplied as a character string
*     containing two formatted axis values (an axis 1 value followed by a
*     comma, followed by an axis 2 value). The same form
*     will be used when getting the value of the attribute.
*
*     The default values for SkyRef are zero longitude and zero latitude.

*  Aligning SkyFrames with Offset Coordinate Systems:
*     The offset coordinate system within a SkyFrame should normally be
*     considered as a superficial "re-badging" of the axes of the coordinate
*     system specified by the System attribute - it merely provides an
*     alternative numerical "label" for each position in the System coordinate
*     system. The SkyFrame retains full knowledge of the celestial coordinate
*     system on which the offset coordinate system is based (given by the
*     System attribute). For instance, the SkyFrame retains knowledge of the
*     way that one celestial coordinate system may "drift" with respect to
*     another over time. Normally, if you attempt to align two SkyFrames (e.g.
f     using the AST_CONVERT or AST_FINDFRAME routine),
c     using the astConvert or astFindFrame routine),
*     the effect of any offset coordinate system defined in either SkyFrame
*     will be removed, resulting in alignment being performed in the
*     celestial coordinate system given by the AlignSystem attribute.
*     However, by setting the AlignOffset attribute to a non-zero value, it
*     is possible to change this behaviour so that the effect of the offset
*     coordinate system is not removed when aligning two SkyFrames.

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.

*  Notes:
*     - If the System attribute of the SkyFrame is changed, any position
*     given for SkyRef is transformed into the new System.
*     - If a value has been assigned to SkyRef attribute, then
*     the default values for certain attributes are changed as follows:
*     the default axis Labels for the SkyFrame are modified by appending
*     " offset" to the end, the default axis Symbols for the SkyFrame are
*     modified by prepending the character "D" to the start, and the
*     default title is modified by replacing the projection information by the
*     origin information.

*att--
*/
MAKE_CLEAR(SkyRef,skyref,AST__BAD,2)
MAKE_SET(SkyRef,double,skyref,value,2)
MAKE_TEST(SkyRef,( this->skyref[axis_p] != AST__BAD ),2)
MAKE_GET(SkyRef,double,0.0,((this->skyref[axis_p]!=AST__BAD)?this->skyref[axis_p]:0.0),2)

/*
*att++
*  Name:
*     SkyRefP(axis)

*  Purpose:
*     Position on primary meridian of offset coordinate system.

*  Type:
*     Public attribute.

*  Synopsis:
*     Floating point.

*  Description:
*     This attribute is used to control the orientation of the offset
*     coordinate system defined by attributes SkyRef and SkyRefIs. If used,
*     it should be set to hold the longitude and latitude of a point within
*     the coordinate system specified by the System attribute. The offset
*     coordinate system represented by the SkyFrame will then be rotated in
*     order to put the position supplied for SkyRefP on the zero longitude
*     meridian. This rotation is about an axis from the centre of the
*     celestial sphere to the point specified by the SkyRef attribute.
*     The default value for SkyRefP is usually the north pole (that is, a
*     latitude of +90 degrees in the coordinate system specified by the System
*     attribute). The exception to this is if the SkyRef attribute is
*     itself set to either the north or south pole. In these cases the
*     default for SkyRefP is the origin (that is, a (0,0) in the coordinate
*     system specified by the System attribute).
*
*     If an integer axis index is included in the attribute name (e.g.
*     "SkyRefP(1)") then the attribute value should be supplied as a single
*     floating point axis value, in radians, when setting a value for the
*     attribute, and will be returned in the same form when getting the value
*     of the attribute. In this case the integer axis index should be "1"
*     or "2" (the values to use for longitude and latitude axes are
*     given by the LonAxis and LatAxis attributes).
*
*     If no axis index is included in the attribute name (e.g. "SkyRefP") then
*     the attribute value should be supplied as a character string
*     containing two formatted axis values (an axis 1 value followed by a
*     comma, followed by an axis 2 value). The same form
*     will be used when getting the value of the attribute.

*  Applicability:
*     SkyFrame
*        All SkyFrames have this attribute.

*  Notes:
*     - If the position given by the SkyRef attribute defines the origin
*     of the offset coordinate system (that is, if the SkyRefIs attribute
*     is set to "origin"), then there will in general be two orientations
*     which will put the supplied SkyRefP position on the zero longitude
*     meridian. The orientation which is actually used is the one which
*     gives the SkyRefP position a positive latitude in the offset coordinate
*     system (the other possible orientation would give the SkyRefP position
*     a negative latitude).
*     - An error will be reported if an attempt is made to use a
*     SkyRefP value which is co-incident with SkyRef or with the point
*     diametrically opposite to SkyRef on the celestial sphere. The
*     reporting of this error is deferred until the SkyRef and SkyRefP
*     attribute values are used within a calculation.
*     - If the System attribute of the SkyFrame is changed, any position
*     given for SkyRefP is transformed into the new System.

*att--
*/
MAKE_CLEAR(SkyRefP,skyrefp,AST__BAD,2)
MAKE_SET(SkyRefP,double,skyrefp,value,2)
MAKE_TEST(SkyRefP,( this->skyrefp[axis_p] != AST__BAD ),2)

/* Copy constructor. */
/* ----------------- */
static void Copy( const AstObject *objin, AstObject *objout, int *status ) {
/*
*  Name:
*     Copy

*  Purpose:
*     Copy constructor for SkyFrame objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Copy( const AstObject *objin, AstObject *objout, int *status )

*  Description:
*     This function implements the copy constructor for SkyFrame objects.

*  Parameters:
*     objin
*        Pointer to the object to be copied.
*     objout
*        Pointer to the object being constructed.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     -  This constructor makes a deep copy.
*/

/* Local Variables: */
   AstSkyFrame *in;              /* Pointer to input SkyFrame */
   AstSkyFrame *out;             /* Pointer to output SkyFrame */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain pointers to the input and output SkyFrames. */
   in = (AstSkyFrame *) objin;
   out = (AstSkyFrame *) objout;

/* For safety, first clear any references to the input memory from
   the output SkyFrame. */
   out->projection = NULL;

/* If necessary, allocate memory in the output SkyFrame and store a
   copy of the input Projection string. */
   if ( in->projection ) out->projection = astStore( NULL, in->projection,
                                      strlen( in->projection ) + (size_t) 1 );

/* If an error occurred, free any allocated memory. */
   if ( !astOK ) {
      out->projection = astFree( out->projection );
   }
}

/* Destructor. */
/* ----------- */
static void Delete( AstObject *obj, int *status ) {
/*
*  Name:
*     Delete

*  Purpose:
*     Destructor for SkyFrame objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Delete( AstObject *obj, int *status )

*  Description:
*     This function implements the destructor for SkyFrame objects.

*  Parameters:
*     obj
*        Pointer to the object to be deleted.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     This function attempts to execute even if the global error status is
*     set.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to SkyFrame */

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) obj;

/* Free the memory used for the Projection string if necessary. */
   this->projection = astFree( this->projection );
}

/* Dump function. */
/* -------------- */
static void Dump( AstObject *this_object, AstChannel *channel, int *status ) {
/*
*  Name:
*     Dump

*  Purpose:
*     Dump function for SkyFrame objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Dump( AstObject *this, AstChannel *channel, int *status )

*  Description:
*     This function implements the Dump function which writes out data
*     for the SkyFrame class to an output Channel.

*  Parameters:
*     this
*        Pointer to the SkyFrame whose data are being written.
*     channel
*        Pointer to the Channel to which the data are being written.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstSkyFrame *this;            /* Pointer to the SkyFrame structure */
   AstSystemType system;         /* System attribute value */
   char buf[ 100 ];              /* Comment buffer */
   char key[ 10 ];               /* Buffer for keywords */
   const char *sval;             /* Pointer to string value */
   const int *perm;              /* Pointer to axis permutation array */
   double dval;                  /* Double value */
   int bessyr;                   /* Use a Besselian year value ?*/
   int helpful;                  /* Helpful to display un-set value? */
   int invperm[ 2 ];             /* Inverse permutation array */
   int ival;                     /* Integer value */
   int set;                      /* Attribute value set? */
   int axis;                     /* External (i.e. permuted) zero-based axis index */
   int axis_p;                   /* Internal zero-based axis index */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the SkyFrame structure. */
   this = (AstSkyFrame *) this_object;

/* Get a pointer to the SkyFrame's axis permutation array (using a method,
   to allow for any over-ride by a derived class). */
   perm = astGetPerm( this );

/* Generate an inverse axis permutation array from the forward permutation
   values. This will be used to determine which axis should be enquired
   about (using possibly over-ridden methods) to obtain data to
   correspond with a particular internal value (i.e. instance variable)
   relating to an axis. This step is needed so that the effect of any
   axis permutation can be un-done before values are written out, as
   output values are written by this function in un-permuted order. */
   for ( axis = 0; axis < 2; axis++ ) invperm[ perm[ axis ] ] = axis;

/* Write out values representing the instance variables for the
   SkyFrame class.  Accompany these with appropriate comment strings,
   possibly depending on the values being written.*/

/* In the case of attributes, we first use the appropriate (private)
   Test...  member function to see if they are set. If so, we then use
   the (private) Get... function to obtain the value to be written
   out.

   For attributes which are not set, we use the astGet... method to
   obtain the value instead. This will supply a default value
   (possibly provided by a derived class which over-rides this method)
   which is more useful to a human reader as it corresponds to the
   actual default attribute value.  Since "set" will be zero, these
   values are for information only and will not be read back. */

/* Projection. */
/* ----------- */
   set = TestProjection( this, status );
   sval = set ? GetProjection( this, status ) : astGetProjection( this );
   astWriteString( channel, "Proj", set, 0, sval,
                   "Description of sky projection" );

/* NegLon. */
/* ------- */
   set = TestNegLon( this, status );
   ival = set ? GetNegLon( this, status ) : astGetNegLon( this );
   astWriteInt( channel, "NegLon", set, 0, ival,
                ival ? "Display negative longitude values" :
                       "Display positive longitude values" );

/* SkyTol. */
/* ------- */
   set = TestSkyTol( this, status );
   dval = set ? GetSkyTol( this, status ) : astGetSkyTol( this );
   astWriteDouble( channel, "SkyTol", set, 1, dval,
                   "Smallest significant separation [arc-sec]");

/* Equinox. */
/* -------- */
   set = TestEquinox( this, status );
   dval = set ? GetEquinox( this, status ) : astGetEquinox( this );

/* Decide whether the Equinox value is relevant to the current
   coordinate system. */
   system = astGetSystem( this );
   helpful = ( ( system == AST__FK4 ) ||
               ( system == AST__FK4_NO_E ) ||
               ( system == AST__FK5 ) ||
               ( system == AST__ECLIPTIC ) );

/* Convert MJD to Besselian or Julian years, depending on the value. */
   bessyr = ( dval < palEpj2d( 1984.0 ) );
   dval = bessyr ? palEpb( dval ) : palEpj( dval );
   astWriteDouble( channel, "Eqnox", set, helpful, dval,
                   bessyr ? "Besselian epoch of mean equinox" :
                            "Julian epoch of mean equinox" );

/* SkyRefIs. */
/* --------- */
   set = TestSkyRefIs( this, status );
   ival = set ? GetSkyRefIs( this, status ) : astGetSkyRefIs( this );
   if( ival == AST__POLE_REF ) {
      astWriteString( channel, "SRefIs", set, 0, POLE_STRING,
                      "Rotated to put pole at ref. pos." );

   } else if( ival == AST__IGNORED_REF ) {
      astWriteString( channel, "SRefIs", set, 0, IGNORED_STRING,
                      "Not rotated (ref. pos. is ignored)" );

   } else {
      astWriteString( channel, "SRefIs", set, 0, ORIGIN_STRING,
                      "Rotated to put origin at ref. pos." );
   }

/* SkyRef. */
/* ------- */
/* The inverse axis permutation array is used to obtain the axis index
   to use when accessing the SkyRef attribute. This reverses the effect
   of the SkyFrame's axis permutation array and yields a value appropriate
   to the axis with internal index "axis". */
   for ( axis_p = 0; axis_p < 2; axis_p++ ) {
      axis = invperm[ axis_p ];

      set = TestSkyRef( this, axis, status );
      dval = set ? GetSkyRef( this, axis, status ) : astGetSkyRef( this, axis );
      sprintf( buf, "Ref. pos. %s %s", astGetSymbol( this, axis ),
               astFormat( this, axis, dval ) );
      sprintf( key, "SRef%d", axis_p + 1 );
      astWriteDouble( channel, key, set, 0, dval, buf );
   }

/* SkyRefP. */
/* -------- */
   for ( axis_p = 0; axis_p < 2; axis_p++ ) {
      axis = invperm[ axis_p ];

      set = TestSkyRefP( this, axis, status );
      dval = set ? GetSkyRefP( this, axis, status ) : astGetSkyRefP( this, axis );
      sprintf( buf, "Ref. north %s %s", astGetSymbol( this, axis ),
               astFormat( this, axis, dval ) );
      sprintf( key, "SRefP%d", axis_p + 1 );
      astWriteDouble( channel, key, set, 0, dval, buf );
   }

/* AlignOffset. */
/* ------------ */
   set = TestAlignOffset( this, status );
   ival = set ? GetAlignOffset( this, status ) : astGetAlignOffset( this );
   astWriteInt( channel, "AlOff", set, 0, ival,
                ival ? "Align in offset coords" :
                       "Align in system coords" );
}

/* Standard class functions. */
/* ========================= */
/* Implement the astIsASkyFrame and astCheckSkyFrame functions using the macros
   defined for this purpose in the "object.h" header file. */
astMAKE_ISA(SkyFrame,Frame)
astMAKE_CHECK(SkyFrame)

AstSkyFrame *astSkyFrame_( const char *options, int *status, ...) {
/*
*+
*  Name:
*     astSkyFrame

*  Purpose:
*     Create a SkyFrame.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "skyframe.h"
*     AstSkyFrame *astSkyFrame( const char *options, int *status, ... )

*  Class Membership:
*     SkyFrame constructor.

*  Description:
*     This function creates a new SkyFrame and optionally initialises its
*     attributes.

*  Parameters:
*     options
*        Pointer to a null terminated string containing an optional
*        comma-separated list of attribute assignments to be used for
*        initialising the new SkyFrame. The syntax used is the same as for the
*        astSet method and may include "printf" format specifiers identified
*        by "%" symbols in the normal way.
*     status
*        Pointer to the inherited status variable.
*     ...
*        If the "options" string contains "%" format specifiers, then an
*        optional list of arguments may follow it in order to supply values to
*        be substituted for these specifiers. The rules for supplying these
*        are identical to those for the astSet method (and for the C "printf"
*        function).

*  Returned Value:
*     A pointer to the new SkyFrame.

*  Notes:
*     -  A NULL pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*-

*  Implementation Notes:
*     - This function implements the basic SkyFrame constructor which
*     is available via the protected interface to the SkyFrame class.
*     A public interface is provided by the astSkyFrameId_ function.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstSkyFrame *new;             /* Pointer to new SkyFrame */
   va_list args;                 /* Variable argument list */

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Initialise the SkyFrame, allocating memory and initialising the virtual
   function table as well if necessary. */
   new = astInitSkyFrame( NULL, sizeof( AstSkyFrame ), !class_init, &class_vtab,
                          "SkyFrame" );

/* If successful, note that the virtual function table has been initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the options string
   to the astVSet method to initialise the new SkyFrame's attributes. */
      va_start( args, status );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new SkyFrame. */
   return new;
}

AstSkyFrame *astInitSkyFrame_( void *mem, size_t size, int init,
                               AstSkyFrameVtab *vtab, const char *name, int *status ) {
/*
*+
*  Name:
*     astInitSkyFrame

*  Purpose:
*     Initialise a SkyFrame.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "skyframe.h"
*     AstSkyFrame *astInitSkyFrame( void *mem, size_t size, int init,
*                                   AstFrameVtab *vtab, const char *name )

*  Class Membership:
*     SkyFrame initialiser.

*  Description:
*     This function is provided for use by class implementations to initialise
*     a new SkyFrame object. It allocates memory (if necessary) to accommodate
*     the SkyFrame plus any additional data associated with the derived class.
*     It then initialises a SkyFrame structure at the start of this memory. If
*     the "init" flag is set, it also initialises the contents of a virtual
*     function table for a SkyFrame at the start of the memory passed via the
*     "vtab" parameter.

*  Parameters:
*     mem
*        A pointer to the memory in which the SkyFrame is to be created. This
*        must be of sufficient size to accommodate the SkyFrame data
*        (sizeof(SkyFrame)) plus any data used by the derived class. If a value
*        of NULL is given, this function will allocate the memory itself using
*        the "size" parameter to determine its size.
*     size
*        The amount of memory used by the SkyFrame (plus derived class data).
*        This will be used to allocate memory if a value of NULL is given for
*        the "mem" parameter. This value is also stored in the SkyFrame
*        structure, so a valid value must be supplied even if not required for
*        allocating memory.
*     init
*        A logical flag indicating if the SkyFrame's virtual function table is
*        to be initialised. If this value is non-zero, the virtual function
*        table will be initialised by this function.
*     vtab
*        Pointer to the start of the virtual function table to be associated
*        with the new SkyFrame.
*     name
*        Pointer to a constant null-terminated character string which contains
*        the name of the class to which the new object belongs (it is this
*        pointer value that will subsequently be returned by the astGetClass
*        method).

*  Returned Value:
*     A pointer to the new SkyFrame.

*  Notes:
*     -  A null pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*-
*/

/* Local Variables: */
   AstSkyAxis *ax;               /* Pointer to SkyAxis object */
   AstSkyFrame *new;             /* Pointer to the new SkyFrame */
   int axis;                     /* Loop counter for axes */

/* Check the global status. */
   if ( !astOK ) return NULL;

/* If necessary, initialise the virtual function table. */
   if ( init ) astInitSkyFrameVtab( vtab, name );

/* Initialise a Frame structure (the parent class) as the first component
   within the SkyFrame structure, allocating memory if necessary. */
   new = (AstSkyFrame *) astInitFrame( mem, size, 0,
                                       (AstFrameVtab *) vtab, name, 2 );

      if ( astOK ) {

/* Initialise the SkyFrame data. */
/* ----------------------------- */
/* Initialise all attributes to their "undefined" values. */
      new->equinox = AST__BAD;
      new->projection = NULL;
      new->neglon = -INT_MAX;
      new->skytol = AST__BAD;
      new->alignoffset = -INT_MAX;
      new->skyrefis = AST__BAD_REF;
      new->skyref[ 0 ] = AST__BAD;
      new->skyref[ 1 ] = AST__BAD;
      new->skyrefp[ 0 ] = AST__BAD;
      new->skyrefp[ 1 ] = AST__BAD;
      new->last = AST__BAD;
      new->eplast = AST__BAD;
      new->klast = AST__BAD;
      new->diurab = AST__BAD;

/* Loop to replace the Axis object associated with each SkyFrame axis with
   a SkyAxis object instead. */
      for ( axis = 0; axis < 2; axis++ ) {

/* Create the new SkyAxis, assign it to the required SkyFrame axis and then
   annul the SkyAxis pointer. */
         ax = astSkyAxis( "", status );
         astSetAxis( new, axis, ax );
         ax = astAnnul( ax );
      }

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new object. */
   return new;
}

AstSkyFrame *astLoadSkyFrame_( void *mem, size_t size,
                               AstSkyFrameVtab *vtab, const char *name,
                               AstChannel *channel, int *status ) {
/*
*+
*  Name:
*     astLoadSkyFrame

*  Purpose:
*     Load a SkyFrame.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "skyframe.h"
*     AstSkyFrame *astLoadSkyFrame( void *mem, size_t size,
*                                    AstSkyFrameVtab *vtab, const char *name,
*                                    AstChannel *channel )

*  Class Membership:
*     SkyFrame loader.

*  Description:
*     This function is provided to load a new SkyFrame using data read
*     from a Channel. It first loads the data used by the parent class
*     (which allocates memory if necessary) and then initialises a
*     SkyFrame structure in this memory, using data read from the
*     input Channel.

*  Parameters:
*     mem
*        A pointer to the memory into which the SkyFrame is to be
*        loaded.  This must be of sufficient size to accommodate the
*        SkyFrame data (sizeof(SkyFrame)) plus any data used by
*        derived classes. If a value of NULL is given, this function
*        will allocate the memory itself using the "size" parameter to
*        determine its size.
*     size
*        The amount of memory used by the SkyFrame (plus derived class
*        data).  This will be used to allocate memory if a value of
*        NULL is given for the "mem" parameter. This value is also
*        stored in the SkyFrame structure, so a valid value must be
*        supplied even if not required for allocating memory.
*
*        If the "vtab" parameter is NULL, the "size" value is ignored
*        and sizeof(AstSkyFrame) is used instead.
*     vtab
*        Pointer to the start of the virtual function table to be
*        associated with the new SkyFrame. If this is NULL, a pointer
*        to the (static) virtual function table for the SkyFrame class
*        is used instead.
*     name
*        Pointer to a constant null-terminated character string which
*        contains the name of the class to which the new object
*        belongs (it is this pointer value that will subsequently be
*        returned by the astGetClass method).
*
*        If the "vtab" parameter is NULL, the "name" value is ignored
*        and a pointer to the string "SkyFrame" is used instead.

*  Returned Value:
*     A pointer to the new SkyFrame.

*  Notes:
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*-
*/

/* Local Variables: */
   AstSkyFrame *new;             /* Pointer to the new SkyFrame */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   char *sval;                   /* Pointer to string value */
   const int *perm;              /* Pointer to axis permutation array */
   double dval;                  /* Floating point attribute value */
   int axis;                     /* External axis index */
   int invperm[ 2 ];             /* Inverse permutation array */

/* Initialise. */
   new = NULL;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(channel);

/* Check the global error status. */
   if ( !astOK ) return new;

/* If a NULL virtual function table has been supplied, then this is
   the first loader to be invoked for this SkyFrame. In this case the
   SkyFrame belongs to this class, so supply appropriate values to be
   passed to the parent class loader (and its parent, etc.). */
   if ( !vtab ) {
      size = sizeof( AstSkyFrame );
      vtab = &class_vtab;
      name = "SkyFrame";

/* If required, initialise the virtual function table for this class. */
      if ( !class_init ) {
         astInitSkyFrameVtab( vtab, name );
         class_init = 1;
      }
   }

/* Invoke the parent class loader to load data for all the ancestral
   classes of the current one, returning a pointer to the resulting
   partly-built SkyFrame. */
   new = astLoadFrame( mem, size, (AstFrameVtab *) vtab, name,
                       channel );

   if ( astOK ) {

/* Get a pointer to the SkyFrame's axis permutation array (using a method,
   to allow for any over-ride by a derived class). */
      perm = astGetPerm( new );

/* Generate an inverse axis permutation array from the forward permutation
   values. This will be used to determine which axis should be enquired
   about (using possibly over-ridden methods) to obtain data to
   correspond with a particular internal value (i.e. instance variable)
   relating to an axis. This step is needed so that the effect of any
   axis permutation can be un-done before values are written out, as
   output values are written by this function in un-permuted order. */
      for( axis = 0; axis < 2; axis++ ) invperm[ perm[ axis ] ] = axis;

/* Read input data. */
/* ================ */
/* Request the input Channel to read all the input data appropriate to
   this class into the internal "values list". */
      astReadClassData( channel, "SkyFrame" );

/* Now read each individual data item from this list and use it to
   initialise the appropriate instance variable(s) for this class. */

/* In the case of attributes, we first read the "raw" input value,
   supplying the "unset" value as the default. If a "set" value is
   obtained, we then use the appropriate (private) Set... member
   function to validate and set the value properly. */

/* The attributes defining the offset coordinate system must be loaded
   before the System attrivbute, since SetSystem uses them. */

/* AlignOffset */
/* ----------- */
      new->alignoffset = astReadInt( channel, "aloff", -INT_MAX );
      if ( TestAlignOffset( new, status ) ) SetAlignOffset( new, new->alignoffset, status );

/* SkyRefIs. */
/* --------- */
      sval = astReadString( channel, "srefis", " " );
      if( sval ){
         new->skyrefis = AST__BAD_REF;
         if( astChrMatch( sval, POLE_STRING ) ) {
            new->skyrefis = AST__POLE_REF;
         } else if( astChrMatch( sval, ORIGIN_STRING ) ) {
            new->skyrefis = AST__ORIGIN_REF;
         } else if( astChrMatch( sval, IGNORED_STRING ) ) {
            new->skyrefis = AST__IGNORED_REF;
         } else if( !astChrMatch( sval, " " ) && astOK ){
	    astError( AST__INTER, "astRead(SkyFrame): Corrupt SkyFrame contains "
		      "invalid SkyRefIs attribute value (%s).", status, sval );
         }
         if( TestSkyRefIs( new, status ) ) SetSkyRefIs( new, new->skyrefis, status );
         sval = astFree( sval );
      }

/* SkyRef. */
/* ------- */
      new->skyref[ 0 ] = astReadDouble( channel, "sref1", AST__BAD );
      axis = invperm[ 0 ];
      if ( TestSkyRef( new, axis, status ) ) SetSkyRef( new, axis, new->skyref[ 0 ], status );

      new->skyref[ 1 ] = astReadDouble( channel, "sref2", AST__BAD );
      axis = invperm[ 1 ];
      if ( TestSkyRef( new, axis, status ) ) SetSkyRef( new, axis, new->skyref[ 1 ], status );

/* SkyRefP. */
/* -------- */
      new->skyrefp[ 0 ] = astReadDouble( channel, "srefp1", AST__BAD );
      axis = invperm[ 0 ];
      if ( TestSkyRefP( new, axis, status ) ) SetSkyRefP( new, axis, new->skyrefp[ 0 ], status );

      new->skyrefp[ 1 ] = astReadDouble( channel, "srefp2", AST__BAD );
      axis = invperm[ 1 ];
      if ( TestSkyRefP( new, axis, status ) ) SetSkyRefP( new, axis, new->skyrefp[ 1 ], status );

/* System. */
/* ------- */
/* The System attribute is now part of the Frame class, but this code is
   retained to allow this version of AST to read SkyFrames dumped by
   previous versions.  */

/* Check a value has not already been assigned to the Frames System
   attribute.  */
      if( !astTestSystem( new ) ){

/* Read the external representation as a string. */
         sval = astReadString( channel, "system", NULL );

/* If a value was read, use the SetAttrib method to validate and store the
   new value in the correct place, then free the string. */
         if ( sval ) {
            astSet( new, "System=%s", status, sval);
            sval = astFree( sval );
         }
      }

/* Epoch. */
/* ------ */
/* The Epoch attribute is now part of the Frame class, but this code is
   retained to allow this version of AST to read SkyFrames dumped by
   previous versions.  */

/* Check a value has not already been assigned to the Frames Epoch
   attribute.  */
      if( !astTestEpoch( new ) ){

/* Get the value. */
         dval = astReadDouble( channel, "epoch", AST__BAD );

/* If a value was read, use the SetAttrib method to validate and store the
   new value in the correct place. */
         if( dval != AST__BAD ) {
            if( dval < 1984.0 ) {
               astSet( new, "Epoch=B%.*g", status, AST__DBL_DIG, dval);
            } else {
               astSet( new, "Epoch=J%.*g", status, AST__DBL_DIG, dval);
            }
         }
      }

/* Projection. */
/* ----------- */
      new->projection = astReadString( channel, "proj", NULL );

/* Equinox. */
/* -------- */
/* Interpret this as Besselian or Julian depending on its value. */
      new->equinox = astReadDouble( channel, "eqnox", AST__BAD );
      if ( TestEquinox( new, status ) ) {
         SetEquinox( new, ( new->equinox < 1984.0 ) ? palEpb2d( new->equinox ) :
                                                      palEpj2d( new->equinox ), status );
      }

/* NegLon. */
/* ------- */
      new->neglon = astReadInt( channel, "neglon", -INT_MAX );
      if ( TestNegLon( new, status ) ) SetNegLon( new, new->neglon, status );

/* SkyTol. */
/* ------- */
      new->skytol = astReadDouble( channel, "skytol", AST__BAD );
      if ( TestSkyTol( new, status ) ) SetSkyTol( new, new->skytol, status );

/* Other values */
/* ------------ */
      new->last = AST__BAD;
      new->eplast = AST__BAD;
      new->klast = AST__BAD;
      new->diurab = AST__BAD;

/* If an error occurred, clean up by deleting the new SkyFrame. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return the new SkyFrame pointer. */
   return new;
}

/* Virtual function interfaces. */
/* ============================ */
/* These provide the external interface to the virtual functions defined by
   this class. Each simply checks the global error status and then locates and
   executes the appropriate member function, using the function pointer stored
   in the object's virtual function table (this pointer is located using the
   astMEMBER macro defined in "object.h").

   Note that the member function may not be the one defined here, as it may
   have been over-ridden by a derived class. However, it should still have the
   same interface. */
void astClearAsTime_( AstSkyFrame *this, int axis, int *status ) {
   if ( !astOK ) return;
   (**astMEMBER(this,SkyFrame,ClearAsTime))( this, axis, status );
}
int astGetAsTime_( AstSkyFrame *this, int axis, int *status ) {
   if ( !astOK ) return 0;
   return (**astMEMBER(this,SkyFrame,GetAsTime))( this, axis, status );
}
void astSetAsTime_( AstSkyFrame *this, int axis, int value, int *status ) {
   if ( !astOK ) return;
   (**astMEMBER(this,SkyFrame,SetAsTime))( this, axis, value, status );
}
int astTestAsTime_( AstSkyFrame *this, int axis, int *status ) {
   if ( !astOK ) return 0;
   return (**astMEMBER(this,SkyFrame,TestAsTime))( this, axis, status );
}
int astGetIsLatAxis_( AstSkyFrame *this, int axis, int *status ) {
   if ( !astOK ) return 0;
   return (**astMEMBER(this,SkyFrame,GetIsLatAxis))( this, axis, status );
}
int astGetIsLonAxis_( AstSkyFrame *this, int axis, int *status ) {
   if ( !astOK ) return 0;
   return (**astMEMBER(this,SkyFrame,GetIsLonAxis))( this, axis, status );
}
int astGetLatAxis_( AstSkyFrame *this, int *status ) {
   if ( !astOK ) return 1;
   return (**astMEMBER(this,SkyFrame,GetLatAxis))( this, status );
}
int astGetLonAxis_( AstSkyFrame *this, int *status ) {
   if ( !astOK ) return 0;
   return (**astMEMBER(this,SkyFrame,GetLonAxis))( this, status );
}
double astGetSkyRefP_( AstSkyFrame *this, int axis, int *status ) {
   if ( !astOK ) return 0.0;
   return (**astMEMBER(this,SkyFrame,GetSkyRefP))( this, axis, status );
}
AstMapping *astSkyOffsetMap_( AstSkyFrame *this, int *status ) {
   if ( !astOK ) return NULL;
   return (**astMEMBER(this,SkyFrame,SkyOffsetMap))( this, status );
}

/* Special public interface functions. */
/* =================================== */
/* These provide the public interface to certain special functions
   whose public interface cannot be handled using macros (such as
   astINVOKE) alone. In general, they are named after the
   corresponding protected version of the function, but with "Id"
   appended to the name. */

/* Public Interface Function Prototypes. */
/* ------------------------------------- */
/* The following functions have public prototypes only (i.e. no
   protected prototypes), so we must provide local prototypes for use
   within this module. */
AstSkyFrame *astSkyFrameId_( const char *, ... );

/* Special interface function implementations. */
/* ------------------------------------------- */
AstSkyFrame *astSkyFrameId_( const char *options, ... ) {
/*
*++
*  Name:
c     astSkyFrame
f     AST_SKYFRAME

*  Purpose:
*     Create a SkyFrame.

*  Type:
*     Public function.

*  Synopsis:
c     #include "skyframe.h"
c     AstSkyFrame *astSkyFrame( const char *options, ... )
f     RESULT = AST_SKYFRAME( OPTIONS, STATUS )

*  Class Membership:
*     SkyFrame constructor.

*  Description:
*     This function creates a new SkyFrame and optionally initialises
*     its attributes.
*
*     A SkyFrame is a specialised form of Frame which describes
*     celestial longitude/latitude coordinate systems. The particular
*     celestial coordinate system to be represented is specified by
*     setting the SkyFrame's System attribute (currently, the default
*     is ICRS) qualified, as necessary, by a mean Equinox value and/or
*     an Epoch.
*
*     For each of the supported celestial coordinate systems, a SkyFrame
*     can apply an optional shift of origin to create a coordinate system
*     representing offsets within the celestial coordinate system from some
*     specified point. This offset coordinate system can also be rotated to
*     define new longitude and latitude axes. See attributes SkyRef, SkyRefIs
*     and SkyRefP
*
*     All the coordinate values used by a SkyFrame are in
*     radians. These may be formatted in more conventional ways for
c     display by using astFormat.
f     display by using AST_FORMAT.

*  Parameters:
c     options
f     OPTIONS = CHARACTER * ( * ) (Given)
c        Pointer to a null-terminated string containing an optional
c        comma-separated list of attribute assignments to be used for
c        initialising the new SkyFrame. The syntax used is identical to
c        that for the astSet function and may include "printf" format
c        specifiers identified by "%" symbols in the normal way.
c        If no initialisation is required, a zero-length string may be
c        supplied.
f        A character string containing an optional comma-separated
f        list of attribute assignments to be used for initialising the
f        new SkyFrame. The syntax used is identical to that for the
f        AST_SET routine. If no initialisation is required, a blank
f        value may be supplied.
c     ...
c        If the "options" string contains "%" format specifiers, then
c        an optional list of additional arguments may follow it in
c        order to supply values to be substituted for these
c        specifiers. The rules for supplying these are identical to
c        those for the astSet function (and for the C "printf"
c        function).
f     STATUS = INTEGER (Given and Returned)
f        The global status.

*  Returned Value:
c     astSkyFrame()
f     AST_SKYFRAME = INTEGER
*        A pointer to the new SkyFrame.

*  Examples:
c     frame = astSkyFrame( "" );
c        Creates a SkyFrame to describe the default ICRS celestial
c        coordinate system.
c     frame = astSkyFrame( "System = FK5, Equinox = J2005, Digits = 10" );
c        Creates a SkyFrame to describe the FK5 celestial
c        coordinate system, with a mean Equinox of J2005.0.
c        Because especially accurate coordinates will be used,
c        additional precision (10 digits) has been requested. This will
c        be used when coordinate values are formatted for display.
c     frame = astSkyFrame( "System = FK4, Equinox = 1955-sep-2" );
c        Creates a SkyFrame to describe the old FK4 celestial
c        coordinate system.  A default Epoch value (B1950.0) is used,
c        but the mean Equinox value is given explicitly as "1955-sep-2".
c     frame = astSkyFrame( "System = GAPPT, Epoch = %s", date );
c        Creates a SkyFrame to describe the Geocentric Apparent
c        celestial coordinate system. The Epoch value, which specifies
c        the date of observation, is obtained from a date/time string
c        supplied via the string pointer "date".
f     FRAME = AST_SKYFRAME( ' ', STATUS )
f        Creates a SkyFrame to describe the default ICRS celestial
f        coordinate system.
f     FRAME = AST_SKYFRAME( 'System = FK5, Equinox = J2005, Digits = 10', STATUS )
f        Creates a SkyFrame to describe the FK5 celestial
f        coordinate system, with a mean Equinox of J2005.0.
f        Because especially accurate coordinates will be used,
f        additional precision (10 digits) has been requested. This will
f        be used when coordinate values are formatted for display.
f     FRAME = AST_SKYFRAME( 'System = FK4, Equinox = 1955-SEP-2', STATUS )
f        Creates a SkyFrame to describe the old FK4 celestial
f        coordinate system.  A default Epoch value (B1950.0) is used,
f        but the mean Equinox value is given explicitly as "1955-SEP-2".
f     FRAME = AST_SKYFRAME( 'System = GAPPT, Epoch = ' // DATE, STATUS )
f        Creates a SkyFrame to describe the Geocentric Apparent
f        celestial coordinate system. The Epoch value, which specifies
f        the date of observation, is obtained from a date/time string
f        contained in the character variable DATE.

*  Notes:
*     - Currently, the default celestial coordinate system is
*     ICRS. However, this default may change in future as new
*     astrometric standards evolve. The intention is to track the most
*     modern appropriate standard. For this reason, you should use the
*     default only if this is what you intend (and can tolerate any
*     associated slight change in behaviour with future versions of
*     this function). If you intend to use the ICRS system
*     indefinitely, then you should specify it explicitly using an
c     "options" value of "System=ICRS".
f     OPTIONS value of "System=ICRS".
*     - Whichever celestial coordinate system is represented, it will
*     have two axes.  The first of these will be the longitude axis
*     and the second will be the latitude axis. This order can be
c     changed using astPermAxes if required.
f     changed using AST_PERMAXES if required.
*     - When conversion between two SkyFrames is requested (as when
c     supplying SkyFrames to astConvert),
f     supplying SkyFrames AST_CONVERT),
*     account will be taken of the nature of the celestial coordinate
*     systems they represent, together with any qualifying mean Equinox or
*     Epoch values, etc. The AlignSystem attribute will also be taken into
*     account. The results will therefore fully reflect the
*     relationship between positions on the sky measured in the two
*     systems.
*     - A null Object pointer (AST__NULL) will be returned if this
c     function is invoked with the AST error status set, or if it
f     function is invoked with STATUS set to an error value, or if it
*     should fail for any reason.
*--

*  Implementation Notes:
*     - This function implements the external (public) interface to
*     the astSkyFrame constructor function. It returns an ID value
*     (instead of a true C pointer) to external users, and must be
*     provided because astSkyFrame_ has a variable argument list which
*     cannot be encapsulated in a macro (where this conversion would
*     otherwise occur).
*     - The variable argument list also prevents this function from
*     invoking astSkyFrame_ directly, so it must be a
*     re-implementation of it in all respects, except for the final
*     conversion of the result to an ID value.
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstSkyFrame *new;             /* Pointer to new SkyFrame */
   va_list args;                 /* Variable argument list */

   int *status;                  /* Pointer to inherited status value */

/* Get a pointer to the inherited status value. */
   status = astGetStatusPtr;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Initialise the SkyFrame, allocating memory and initialising the virtual
   function table as well if necessary. */
   new = astInitSkyFrame( NULL, sizeof( AstSkyFrame ), !class_init, &class_vtab,
                          "SkyFrame" );

/* If successful, note that the virtual function table has been initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the options string
   to the astVSet method to initialise the new SkyFrame's attributes. */
      va_start( args, options );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return an ID value for the new SkyFrame. */
   return astMakeId( new );
}







