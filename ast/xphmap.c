/*
*class+
*  Name:
*     XphMap

*  Purpose:
*     Transform between different HEALPix projections.

*  Constructor Function:
*     astXphMap

*  Description:
*     The XphMap class implements a Mapping between grid coordinates
*     within different types of HEALPix projection: The available types
*     are :
*
*     - "HPX0":  An HPX projection centred on RA=0h.
*     - "HPX12": An HPX projection centred on RA=12h.
*     - "XPHN":  An XPH ("Butterfly") projection centred on the
*                 north pole.
*     - "XPHS":  An XPH ("Butterfly") projection centred on the
*                south pole.
*
*     The HPX projection is described in "Mapping on the HEALPix grid"
*     by Calabretta and Roukema, A&A, 2005. The XPH projection is
*     described in "Representing the 'butterfly' projection in FITS -
*     projection code XPH" by Calabretta and Lowe, PASA, 2018.
*
*     The forward transformation of an XphMap transforms from grid
*     coordinates within the nominated projection type into grid
*     coordinates within an HPX12 projection.

*  Inheritance:
*     The XphMap class inherits from the Mapping class.

*  Attributes:
*     The XphMap class does not define any new attributes beyond those
*     which are applicable to all Mappings.

*  Functions:
*     The XphMap class does not define any new functions beyond those
*     which are applicable to all Mappings.

*  Copyright:
*     Copyright (C) 2018 East Asian Observatory

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
*     DSB: David S. Berry (EAO)

*  History:
*     18-OCT-2018 (DSB):
*        Original version.
*class-
*/

/* Module Macros. */
/* ============== */
/* Set the name of the class we are implementing. This indicates to
   the header files that define class interfaces that they should make
   "protected" symbols available. */
#define astCLASS XphMap

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */

#include "globals.h"             /* Thread-safe global data access */
#include "error.h"               /* Error reporting facilities */
#include "memory.h"              /* Memory allocation facilities */
#include "globals.h"             /* Thread-safe global data access */
#include "object.h"              /* Base Object class */
#include "pointset.h"            /* Sets of points/coordinates */
#include "mapping.h"             /* Coordinate mappings (parent class) */
#include "channel.h"             /* I/O channels */
#include "unitmap.h"             /* Unit Mappings */
#include "matrixmap.h"           /* Matrix Mappings */
#include "xphmap.h"              /* Interface definition for this class */

/* Error code definitions. */
/* ----------------------- */
#include "ast_err.h"             /* AST error codes */

/* C header files. */
/* --------------- */
#include <float.h>
#include <math.h>
#include <stdarg.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/* Module Variables. */
/* ================= */

/* Names and descriptions of each type of XphMap. These should correspond
   to the values of constants AST__HPX0, AST__HPX12, AST__XPHN and AST__XPHS
   in xphmap.h */
static const char *proj_name[] = { "HPX0", "HPX12", "XPHN", "XPHS" };
static const char *proj_comm[] = { "HPX projection centred on RA=0h",
                                   "HPX projection centred on RA=12h",
                                   "XPH projection centred on north pole",
                                   "XPH projection centred on south pole" };

/* Address of this static variable is used as a unique identifier for
   member of this class. */
static int class_check;

/* Pointers to parent class methods which are extended by this class. */
static AstPointSet *(* parent_transform)( AstMapping *, AstPointSet *, int, AstPointSet *, int * );

/* Define macros for accessing each item of thread specific global data. */
#ifdef THREAD_SAFE

/* Define how to initialise thread-specific globals. */
#define GLOBAL_inits \
   globals->Class_Init = 0;

/* Create the function that initialises global data for this module. */
astMAKE_INITGLOBALS(XphMap)

/* Define macros for accessing each item of thread specific global data. */
#define class_init astGLOBAL(XphMap,Class_Init)
#define class_vtab astGLOBAL(XphMap,Class_Vtab)
#define getattrib_buff astGLOBAL(XphMap,GetAttrib_Buff)



/* If thread safety is not needed, declare and initialise globals at static
   variables. */
#else

/* Define the class virtual function table and its initialisation flag
   as static variables. */
static AstXphMapVtab class_vtab;   /* Virtual function table */
static int class_init = 0;         /* Virtual function table initialised? */

#endif

/* External Interface Function Prototypes. */
/* ======================================= */
/* The following functions have public prototypes only (i.e. no
   protected prototypes), so we must provide local prototypes for use
   within this module. */
AstXphMap *astXphMapId_( int, int, const char *, ... );

/* Prototypes for Private Member Functions. */
/* ======================================== */
static AstPointSet *Transform( AstMapping *, AstPointSet *, int, AstPointSet *, int * );
static int Equal( AstObject *, AstObject *, int * );
static int GetIsLinear( AstMapping *, int * );
static int MapMerge( AstMapping *, int, int, int *, AstMapping ***, int **, int * );
static void Dump( AstObject *, AstChannel *, int * );

/* Member functions. */
/* ================= */

static int Equal( AstObject *this_object, AstObject *that_object, int *status ) {
/*
*  Name:
*     Equal

*  Purpose:
*     Test if two XphMaps are equivalent.

*  Type:
*     Private function.

*  Synopsis:
*     #include "xphmap.h"
*     int Equal( AstObject *this, AstObject *that, int *status )

*  Class Membership:
*     XphMap member function (over-rides the astEqual protected
*     method inherited from the astMapping class).

*  Description:
*     This function returns a boolean result (0 or 1) to indicate whether
*     two XphMaps are equivalent.

*  Parameters:
*     this
*        Pointer to the first Object (a XphMap).
*     that
*        Pointer to the second Object.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     One if the XphMaps are equivalent, zero otherwise.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the global status set, or if it should fail for any reason.
*/

/* Local Variables: */
   AstXphMap *that;
   AstXphMap *this;
   int result;

/* Initialise. */
   result = 0;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Obtain pointers to the two XphMap structures. */
   this = (AstXphMap *) this_object;
   that = (AstXphMap *) that_object;

/* Check the second object is a XphMap. We know the first is a
   XphMap since we have arrived at this implementation of the virtual
   function. */
   if( astIsAXphMap( that ) ) {

/* Check the properties of the two XphMaps are equal. */
      if( astGetInvert( this ) == astGetInvert( that ) ) {
         result = ( this->type == that->type ) &&
                  ( this->order == that->order );
      }
   }

/* Return the result, */
   return result;
}

static int GetIsLinear( AstMapping *this_mapping, int *status ){
/*
*  Name:
*     GetIsLinear

*  Purpose:
*     Return the value of the IsLinear attribute for a XphMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mapping.h"
*     void GetIsLinear( AstMapping *this, int *status )

*  Class Membership:
*     XphMap member function (over-rides the protected astGetIsLinear
*     method inherited from the Mapping class).

*  Description:
*     This function returns the value of the IsLinear attribute for a
*     Frame, which is always one.

*  Parameters:
*     this
*        Pointer to the XphMap.
*     status
*        Pointer to the inherited status variable.
*/
   return (((AstXphMap *) this_mapping)->type == AST__HPX12 );
}

void astInitXphMapVtab_(  AstXphMapVtab *vtab, const char *name, int *status ) {
/*
*+
*  Name:
*     astInitXphMapVtab

*  Purpose:
*     Initialise a virtual function table for a XphMap.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "xphmap.h"
*     void astInitXphMapVtab( AstXphMapVtab *vtab, const char *name )

*  Class Membership:
*     XphMap vtab initialiser.

*  Description:
*     This function initialises the component of a virtual function
*     table which is used by the XphMap class.

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
   AstObjectVtab *object;        /* Pointer to Object component of Vtab */
   AstMappingVtab *mapping;      /* Pointer to Mapping component of Vtab */

/* Check the local error status. */
   if ( !astOK ) return;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Initialize the component of the virtual function table used by the
   parent class. */
   astInitMappingVtab( (AstMappingVtab *) vtab, name );

/* Store a unique "magic" value in the virtual function table. This
   will be used (by astIsAXphMap) to determine if an object belongs
   to this class.  We can conveniently use the address of the (static)
   class_check variable to generate this unique value. */
   vtab->id.check = &class_check;
   vtab->id.parent = &(((AstMappingVtab *) vtab)->id);

/* Initialise member function pointers. */
/* ------------------------------------ */
/* Store pointers to the member functions (implemented here) that provide
   virtual methods for this class. */

/* Save the inherited pointers to methods that will be extended, and
   replace them with pointers to the new member functions. */
   object = (AstObjectVtab *) vtab;
   mapping = (AstMappingVtab *) vtab;

   parent_transform = mapping->Transform;
   mapping->Transform = Transform;

/* Store replacement pointers for methods which will be over-ridden by
   new member functions implemented here. */
   object->Equal = Equal;
   mapping->MapMerge = MapMerge;
   mapping->GetIsLinear = GetIsLinear;

/* Declare the class dump function. There is no copy constructor or
   destructor. */
   astSetDump( vtab, Dump, "XphMap", "HPX variant mapping" );

/* If we have just initialised the vtab for the current class, indicate
   that the vtab is now initialised, and store a pointer to the class
   identifier in the base "object" level of the vtab. */
   if( vtab == &class_vtab ) {
      class_init = 1;
      astSetVtabClassIdentifier( vtab, &(vtab->id) );
   }
}

static int MapMerge( AstMapping *this, int where, int series, int *nmap,
                     AstMapping ***map_list, int **invert_list, int *status ) {
/*
*  Name:
*     MapMerge

*  Purpose:
*     Simplify a sequence of Mappings containing a XphMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mapping.h"
*     int MapMerge( AstMapping *this, int where, int series, int *nmap,
*                   AstMapping ***map_list, int **invert_list, int *status )

*  Class Membership:
*     XphMap method (over-rides the protected astMapMerge method
*     inherited from the Mapping class).

*  Description:
*     This function attempts to simplify a sequence of Mappings by
*     merging a nominated XphMap in the sequence with its neighbours,
*     so as to shorten the sequence if possible.
*
*     In many cases, simplification will not be possible and the
*     function will return -1 to indicate this, without further
*     action.
*
*     In most cases of interest, however, this function will either
*     attempt to replace the nominated XphMap with one which it
*     considers simpler, or to merge it with the Mappings which
*     immediately precede it or follow it in the sequence (both will
*     normally be considered). This is sufficient to ensure the
*     eventual simplification of most Mapping sequences by repeated
*     application of this function.
*
*     In some cases, the function may attempt more elaborate
*     simplification, involving any number of other Mappings in the
*     sequence. It is not restricted in the type or scope of
*     simplification it may perform, but will normally only attempt
*     elaborate simplification in cases where a more straightforward
*     approach is not adequate.

*  Parameters:
*     this
*        Pointer to the nominated XphMap which is to be merged with
*        its neighbours. This should be a cloned copy of the XphMap
*        pointer contained in the array element "(*map_list)[where]"
*        (see below). This pointer will not be annulled, and the
*        XphMap it identifies will not be modified by this function.
*     where
*        Index in the "*map_list" array (below) at which the pointer
*        to the nominated XphMap resides.
*     series
*        A non-zero value indicates that the sequence of Mappings to
*        be simplified will be applied in series (i.e. one after the
*        other), whereas a zero value indicates that they will be
*        applied in parallel (i.e. on successive sub-sets of the
*        input/output coordinates).
*     nmap
*        Address of an int which counts the number of Mappings in the
*        sequence. On entry this should be set to the initial number
*        of Mappings. On exit it will be updated to record the number
*        of Mappings remaining after simplification.
*     map_list
*        Address of a pointer to a dynamically allocated array of
*        Mapping pointers (produced, for example, by the astMapList
*        method) which identifies the sequence of Mappings. On entry,
*        the initial sequence of Mappings to be simplified should be
*        supplied.
*
*        On exit, the contents of this array will be modified to
*        reflect any simplification carried out. Any form of
*        simplification may be performed. This may involve any of: (a)
*        removing Mappings by annulling any of the pointers supplied,
*        (b) replacing them with pointers to new Mappings, (c)
*        inserting additional Mappings and (d) changing their order.
*
*        The intention is to reduce the number of Mappings in the
*        sequence, if possible, and any reduction will be reflected in
*        the value of "*nmap" returned. However, simplifications which
*        do not reduce the length of the sequence (but improve its
*        execution time, for example) may also be performed, and the
*        sequence might conceivably increase in length (but normally
*        only in order to split up a Mapping into pieces that can be
*        more easily merged with their neighbours on subsequent
*        invocations of this function).
*
*        If Mappings are removed from the sequence, any gaps that
*        remain will be closed up, by moving subsequent Mapping
*        pointers along in the array, so that vacated elements occur
*        at the end. If the sequence increases in length, the array
*        will be extended (and its pointer updated) if necessary to
*        accommodate any new elements.
*
*        Note that any (or all) of the Mapping pointers supplied in
*        this array may be annulled by this function, but the Mappings
*        to which they refer are not modified in any way (although
*        they may, of course, be deleted if the annulled pointer is
*        the final one).
*     invert_list
*        Address of a pointer to a dynamically allocated array which,
*        on entry, should contain values to be assigned to the Invert
*        attributes of the Mappings identified in the "*map_list"
*        array before they are applied (this array might have been
*        produced, for example, by the astMapList method). These
*        values will be used by this function instead of the actual
*        Invert attributes of the Mappings supplied, which are
*        ignored.
*
*        On exit, the contents of this array will be updated to
*        correspond with the possibly modified contents of the
*        "*map_list" array.  If the Mapping sequence increases in
*        length, the "*invert_list" array will be extended (and its
*        pointer updated) if necessary to accommodate any new
*        elements.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     If simplification was possible, the function returns the index
*     in the "map_list" array of the first element which was
*     modified. Otherwise, it returns -1 (and makes no changes to the
*     arrays supplied).

*  Notes:
*     - A value of -1 will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*/

/* Local Variables: */
   AstMapping *new;              /* Pointer to replacement Mapping */
   const char *class;            /* Pointer to Mapping class string */
   int cancel;                   /* Do mappings cancel? */
   int imap1;                    /* Index of first XphMap */
   int imap2;                    /* Index of last XphMap */
   int imap;                     /* Loop counter for Mappings */
   int old_invert1;              /* Original Invert flag for map1 */
   int old_invert2;              /* Original Invert flag for map2 */
   int result;                   /* Result value to return */

/* Initialise the returned result. */
   result = -1;

/* Check the global error status. */
   if ( !astOK ) return result;

/* Note, an XphMap with a type of AST__HPX12 is not equivalent to a UnitMap
   because it performs clipping of out-of-bounds input positions, even
   though input positions that are within bounds are copied unchanged. */

/* In series. */
/* ---------- */
/* Handle the case where the Mappings are connected in series. */
   if ( series ) {

/* Look for an adjacent XphMap. */
      imap1 = -1;
      imap2 = -1;

      if( where > 0 ) {
         class = astGetClass( ( *map_list )[ where - 1 ] );
         if ( astOK && !strcmp( class, "XphMap" ) ) {
            imap1 = where - 1;
            imap2 = where;
         }
      }

      if( imap1 == -1 && where < *nmap - 1 ) {
         class = astGetClass( ( *map_list )[ where + 1 ] );
         if ( astOK && !strcmp( class, "XphMap" ) ) {
            imap1 = where;
            imap2 = where + 1;
         }
      }

/* If one was found, check to see if the two adjacent XphMaps cancel out. */
      if( imap1 != -1 ) {

/* Ensure they have the required Invert flags, saving the original
   values first so they can be re-instated later. */
         old_invert1 = astGetInvert( ( *map_list )[ imap1 ] );
         old_invert2 = astGetInvert( ( *map_list )[ imap2 ] );
         astSetInvert( ( *map_list )[ imap1 ], ( *invert_list )[ imap1 ] );
         astSetInvert( ( *map_list )[ imap2 ], ( *invert_list )[ imap2 ] );

/* They cancel out if they are equal and opposite. So invert one and then
   compare them for equality. */
         astInvert( ( *map_list )[ imap1 ] );
         cancel = astEqual( ( *map_list )[ imap1 ], ( *map_list )[ imap2 ] );
         astInvert( ( *map_list )[ imap1 ] );

/* Reinstate the original Invert flags. */
         astSetInvert( ( *map_list )[ imap1 ], old_invert1 );
         astSetInvert( ( *map_list )[ imap2 ], old_invert2 );

/* Replace the two XphMaps with a UnitMap if they cancel. */
         if( cancel ) {

/* Annul the old Mapping pointers */
            ( *map_list )[ imap1 ] = astAnnul( ( *map_list )[ imap1 ] );
            ( *map_list )[ imap2 ] = astAnnul( ( *map_list )[ imap2 ] );

/* Create the UnitMap. */
            new = (AstMapping *) astUnitMap( 2, "", status );

/* Insert the pointer to the replacement Mapping and initialise its
   invert flag. */
            ( *map_list )[ imap1 ] = new;
            ( *invert_list )[ imap1 ] = 0;

/* Loop to close the resulting gap by moving subsequent elements down
   in the arrays. */
            for ( imap = imap2 + 1; imap < *nmap; imap++ ) {
               ( *map_list )[ imap - 1 ] = ( *map_list )[ imap ];
               ( *invert_list )[ imap - 1 ] = ( *invert_list )[ imap ];
            }

/* Clear the vacated elements at the end. */
            ( *map_list )[ *nmap - 1 ] = NULL;
            ( *invert_list )[ *nmap - 1 ] = 0;

/* Decrement the Mapping count and return the index of the first
   modified element. */
            ( *nmap )--;
            result = imap1;
         }
      }
   }

/* If an error occurred, clear the returned result. */
   if ( !astOK ) result = -1;

/* Return the result. */
   return result;
}

static AstPointSet *Transform( AstMapping *this, AstPointSet *in,
                               int forward, AstPointSet *out, int *status ) {
/*
*  Name:
*     Transform

*  Purpose:
*     Apply a XphMap to transform a set of points.

*  Type:
*     Private function.

*  Synopsis:
*     #include "xphmap.h"
*     AstPointSet *Transform( AstMapping *this, AstPointSet *in,
*                             int forward, AstPointSet *out, int *status )

*  Class Membership:
*     XphMap member function (over-rides the astTransform protected
*     method inherited from the Mapping class).

*  Description:
*     This function takes a XphMap and a set of points encapsulated in a
*     PointSet and transforms the points so as to apply the required zoom
*     factor.

*  Parameters:
*     this
*        Pointer to the XphMap.
*     in
*        Pointer to the PointSet holding the input coordinate data.
*     forward
*        A non-zero value indicates that the forward coordinate transformation
*        should be applied, while a zero value requests the inverse
*        transformation.
*     out
*        Pointer to a PointSet which will hold the transformed (output)
*        coordinate values. A NULL value may also be given, in which case a
*        new PointSet will be created by this function.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     Pointer to the output (possibly new) PointSet.

*  Notes:
*     -  A null pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*     -  The number of coordinate values per point in the input PointSet must
*     match the number of coordinates for the XphMap being applied.
*     -  If an output PointSet is supplied, it must have space for sufficient
*     number of points and coordinate values per point to accommodate the
*     result. Any excess space will be ignored.
*/

/* Local Variables: */
   AstPointSet *result;          /* Pointer to output PointSet */
   AstXphMap *map;               /* Pointer to XphMap to be applied */
   double **ptr_in;              /* Pointer to input coordinate data */
   double **ptr_out;             /* Pointer to output coordinate data */
   double *px_in;                /* Pointer to next input X value */
   double *px_out;               /* Pointer to next output X value */
   double *py_in;                /* Pointer to next input Y value */
   double *py_out;               /* Pointer to next output Y value */
   int d;                        /* Difference between x and y grid indices */
   int fx;                       /* Facet offset along X axis */
   int fy;                       /* Facet offset along Y axis */
   int ix;                       /* Nearest integer to X value */
   int iy;                       /* Nearest integer to Y value */
   int n2;                       /* Two times nppf */
   int n3;                       /* Three times nppf */
   int n4;                       /* Four times nppf */
   int n5;                       /* Five times nppf */
   int n6;                       /* Six times nppf */
   int n7;                       /* Seven times nppf */
   int n9;                       /* Nine times nppf */
   int npoint;                   /* Number of points */
   int nppf;                     /* No. of pixels per facet */
   int point;                    /* Loop counter for points */
   int s;                        /* Sum of x and y grid indices */

/* Check the global error status. */
   if ( !astOK ) return NULL;

/* Obtain a pointer to the XphMap. */
   map = (AstXphMap *) this;

/* Apply the parent mapping using the stored pointer to the Transform member
   function inherited from the parent Mapping class. This function validates
   all arguments and generates an output PointSet if necessary, but does not
   actually transform any coordinate values. */
   result = (*parent_transform)( this, in, forward, out, status );

/* We will now extend the parent astTransform method by performing the
   calculations needed to generate the output coordinate values. */

/* Determine the numbers of points and coordinates per point from the input
   PointSet and obtain pointers for accessing the input and output coordinate
   values. */
   npoint = astGetNpoint( in );
   ptr_in = astGetPoints( in );
   ptr_out = astGetPoints( result );

/* Determine whether to apply the forward or inverse mapping, according to the
   direction specified and whether the mapping has been inverted. */
   if ( astGetInvert( map ) ) forward = !forward;

/* Get the number of pixels per facet. */
   nppf = ( 1 << map->order );
   n2 = 2*nppf;
   n3 = 3*nppf;
   n4 = 4*nppf;
   n5 = 5*nppf;
   n6 = 6*nppf;
   n7 = 7*nppf;
   n9 = 9*nppf;

/* Perform coordinate arithmetic. */
/* ------------------------------ */
   if ( astOK ) {
      px_in = ptr_in[ 0 ];
      py_in = ptr_in[ 1 ];
      px_out = ptr_out[ 0 ];
      py_out = ptr_out[ 1 ];

/* Forward transformation - from "type" to HPX12. */
      if( forward ) {

/* Transforming from HPX12 to HPX12 is a unit transformation, except that
   we need to check for out-of-bounds input positions, which are set bad
   in the output. */
         if( map->type == AST__HPX12 ){
            for ( point = 0; point < npoint; point++,
                  px_in++,py_in++,px_out++,py_out++ ) {

/* Check the input values are good */
               if ( *px_in == AST__BAD || *py_in == AST__BAD ) {
                  *px_out = AST__BAD;
                  *py_out = AST__BAD;

/* Get the zero-based integer indices of the grid cell containing the
   input position. The cell boundaries on the low RA edges are considered
   to be in the cell. Those on the high RA edges are considered to be part
   of the neigbouring cell. */
               } else {
                  ix = ceil( *px_in - 1.5 );
                  iy = ceil( *py_in - 1.5 );

/* Get the zero-based facet (x,y) indices - offsets from the bottom left
   facet. */
                  fx = ix/nppf;
                  fy = iy/nppf;

/* Check that the facet indices are legal. */
                  if( fx >= 0 && fx < 5 && fy >= 0 && fy < 5 &&
                      abs( fx - fy ) <= 1 ) {

/* Get the sum of the zero-based x and y grid indices, plus one. */
                     s = ix + iy + 1;

/* The bottom left half of the bottom left facet and the top right half
   of the top right facet are illegal. */
                     if( s <= nppf || s > n9 ) {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;

/* Other positions are copied unchanged. */
                     } else {
                        *px_out = *px_in;
                        *py_out = *py_in;
                     }

                  } else {
                     *px_out = AST__BAD;
                     *py_out = AST__BAD;
                  }
               }
            }

/* Transforming from HPX0 to HPX12 - swap the top right and bottom left
   halves of the whole sky map. */
         } else if( map->type == AST__HPX0 ){
            for ( point = 0; point < npoint; point++,
                  px_in++,py_in++,px_out++,py_out++ ) {

/* Check for bad input coordinates */
               if ( *px_in == AST__BAD || *py_in == AST__BAD ) {
                  *px_out = AST__BAD;
                  *py_out = AST__BAD;
               } else {

/* Get the zero-based integer indices of the grid cell containing the
   input position. The cell boundaries on the low RA edges are considered
   to be in the cell. Those on the high RA edges are considered to be part
   of the neigbouring cell. */
                  ix = ceil( *px_in - 1.5 );
                  iy = ceil( *py_in - 1.5 );

/* Get the facet indices and check they are legal. */
                  fx = ix/nppf;
                  fy = iy/nppf;
                  if( fx >= 0 && fx < 5 && fy >= 0 && fy < 5 &&
                      abs( fx - fy ) <= 1 ) {

/* Get the sum of the zero-based x and y grid indices, plus one. */
                     s = ix + iy + 1;

/* The bottom left half of the bottom left facet and the top right half
   of the top right facet are illegal. */
                     if( s <= nppf || s > n9 ) {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;

/* Other input positions in the bottom left half of the whole-sky map get
   moved to the top right by adding 2*nppf on each axis. */
                     } else if( s <= n5 ) {
                        *px_out = *px_in + n2;
                        *py_out = *py_in + n2;

/* Other input positions in the rop right half of the whole-sky map get
   moved to the bottom left by subtracting 2*nppf on each axis. */
                     } else {
                        *px_out = *px_in - n2;
                        *py_out = *py_in - n2;
                     }

                  } else {
                     *px_out = AST__BAD;
                     *py_out = AST__BAD;
                  }
               }
            }

/* Transforming from XPHN to HPX12 */
         } else if( map->type == AST__XPHN ){
            for ( point = 0; point < npoint; point++,
                  px_in++,py_in++,px_out++,py_out++ ) {

/* Check for bad input coordinates */
               if ( *px_in == AST__BAD || *py_in == AST__BAD ) {
                  *px_out = AST__BAD;
                  *py_out = AST__BAD;
               } else {

/* The transformation depends on the gore containing the supplied position.
   A gore contains its low RA boundaries, but not its high RA boundaries.
   First do gore 0. */
                  if( *px_in < n2 + 0.5 && *py_in >= n2 + 0.5 ) {

/* Get the zero-based integer indices of the grid cell containing the
   input position. The cell boundaries on the low RA edges are considered
   to be in the cell. Those on the high RA edges are considered to be part
   of the neigbouring cell. */
                     ix = floor( *px_in - 0.5 );
                     iy = floor( *py_in - 0.5 );

/* Check that the cell containing the input position is contained with
   the used part of the gore, and if so, do the appropriate transformation. */
                     s = ix + iy + 1;
                     if( s < n5 && s >= n3 ) {
                        *px_out = n4 + 1.0 - *px_in;
                        *py_out = n6 + 1.0 - *py_in;
                     } else {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;
                     }

/* Do the same for input positions within gore 3. */
                  } else if( *px_in >= n2 + 0.5 && *py_in > n2 + 0.5 ) {
                     ix = floor( *px_in - 0.5 );
                     iy = ceil( *py_in - 1.5 );

                     d = ix - iy;
                     if( d >= -nppf && d < nppf ) {
                        *px_out = *py_in - nppf;
                        *py_out = n5 + 1.0 - *px_in;
                     } else {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;
                     }

/* Do the same for input positions within gore 2. */
                  } else if( *px_in > n2 + 0.5 && *py_in <= n2 + 0.5 ) {
                     ix = ceil( *px_in - 1.5 );
                     iy = ceil( *py_in - 1.5 );

                     s = ix + iy + 1;
                     if( s > n3 && s <= n5 ) {
                        *px_out = *px_in - n2;
                        *py_out = *py_in;
                     } else {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;
                     }

/* Do the same for input positions within gore 1. */
                  } else {
                     ix = ceil( *px_in - 1.5 );
                     iy = floor( *py_in - 0.5 );

                     d = ix - iy;
                     if( d > -nppf && d <= nppf ) {
                        *px_out = n5 + 1.0 - *py_in;
                        *py_out = n3 + *px_in;
                     } else {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;
                     }
                  }
               }
            }

/* Transforming from XPHS to HPX12 */
         } else if( map->type == AST__XPHS ){
            for ( point = 0; point < npoint; point++,
                  px_in++,py_in++,px_out++,py_out++ ) {

/* Check for bad input coordinates */
               if ( *px_in == AST__BAD || *py_in == AST__BAD ) {
                  *px_out = AST__BAD;
                  *py_out = AST__BAD;
               } else {

/* The transformation depends on the gore containing the supplied position.
   A gore contains its low RA boundaries, but not its high RA boundaries.
   First do gore 0. */
                  if( *px_in < n2 + 0.5 && *py_in <= n2 + 0.5 ) {

/* Get the zero-based integer indices of the grid cell containing the
   input position. The cell boundaries on the low RA edges are considered
   to be in the cell. Those on the high RA edges are considered to be part
   of the neigbouring cell. */
                     ix = floor( *px_in - 0.5 );
                     iy = ceil( *py_in - 1.5 );

/* Check that the cell containing the input position is contained with
   the used part of the gore, and if so, do the appropriate transformation. */
                     d = ix - iy;
                     if( d >= -nppf && d < nppf ) {
                        *px_out = n2 + *py_in;
                        *py_out = n4 + 1.0 - *px_in;
                     } else {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;
                     }

/* Do the same for input positions within gore 3. */
                  } else if( *px_in >= n2 + 0.5 && *py_in < n2 + 0.5 ) {
                     ix = floor( *px_in - 0.5 );
                     iy = floor( *py_in - 0.5 );

                     s = ix + iy + 1;
                     if( s >= n3 && s < n5 ) {
                        *px_out = n5 + 1.0 - *px_in;
                        *py_out = n3 + 1.0 - *py_in;
                     } else {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;
                     }

/* Do the same for input positions within gore 2. */
                  } else if( *px_in > n2 + 0.5 && *py_in >= n2 + 0.5 ) {
                     ix = ceil( *px_in - 1.5 );
                     iy = floor( *py_in - 0.5 );

                     d = ix - iy;
                     if( d <= nppf && d > -nppf ) {
                        *px_out = n4 + 1 - *py_in;
                        *py_out = *px_in - n2;
                     } else {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;
                     }

/* Do the same for input positions within gore 1. */
                  } else {
                     ix = ceil( *px_in - 1.5 );
                     iy = ceil( *py_in - 1.5 );

                     s = ix + iy + 1;
                     if( s <= n5 && s > n3 ) {
                        *px_out = n3 + *px_in;
                        *py_out = nppf + *py_in;
                     } else {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;
                     }
                  }
               }
            }

/* Unknown projection code */
         } else if( astOK ) {
            astError( AST__INTER, "astTransform(%s): Invalid projection type "
                      "encountered (%d) (internal programming error).", status,
                      astGetClass(this), map->type );
         }

/* Inverse transformation - from HPX12 to "type". */
      } else {

/* Transforming from HPX12 to HPX12 is a unit transformation, except that
   we need to check that input positions within a split input facet are
   moved to the equivalent normalised output positions. */
         if( map->type == AST__HPX12 ){
            for ( point = 0; point < npoint; point++,
                  px_in++,py_in++,px_out++,py_out++ ) {

/* Check the input values are good */
               if ( *px_in == AST__BAD || *py_in == AST__BAD ) {
                  *px_out = AST__BAD;
                  *py_out = AST__BAD;

/* Get the zero-based integer indices of the grid cell containing the
   input position. The cell boundaries on the low RA edges are considered
   to be in the cell. Those on the high RA edges are considered to be part
   of the neigbouring cell. */
               } else {
                  ix = ceil( *px_in - 1.5 );
                  iy = ceil( *py_in - 1.5 );

/* Get the zero-based facet (x,y) indices - offsets from the bottom left
   facet in Calabretta & Roukema 2005 Fig 3. */
                  fx = ix/nppf;
                  fy = iy/nppf;

/* Check that the facet indices are legal. */
                  if( fx >= 0 && fx < 5 && fy >= 0 && fy < 5 &&
                      abs( fx - fy ) <= 1 ) {

/* Get the sum of the zero-based x and y grid indices, plus one. */
                     s = ix + iy + 1;

/* The bottom left half of the bottom left facet and the top right half
   of the top right facet are illegal. */
                     if( s <= nppf || s > n9 ) {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;

/* Other positions are copied unchanged. */
                     } else {
                        *px_out = *px_in;
                        *py_out = *py_in;
                     }

                  } else {
                     *px_out = AST__BAD;
                     *py_out = AST__BAD;
                  }
               }
            }

/* Transforming from HPX12 to HPX0 - swap the top right and bottom left
   halves of the whole sky map. */
         } else if( map->type == AST__HPX0 ){
            for ( point = 0; point < npoint; point++,
                  px_in++,py_in++,px_out++,py_out++ ) {

               if ( *px_in == AST__BAD || *py_in == AST__BAD ) {
                  *px_out = AST__BAD;
                  *py_out = AST__BAD;

               } else {

/* Get the zero-based integer indices of the grid cell containing the
   input position. The cell boundaries on the low RA edges are considered
   to be in the cell. Those on the high RA edges are considered to be part
   of the neigbouring cell. */
                  ix = ceil( *px_in - 1.5 );
                  iy = ceil( *py_in - 1.5 );

/* Get the facet indices and check they are legal. */
                  fx = ix/nppf;
                  fy = iy/nppf;
                  if( fx >= 0 && fx < 5 && fy >= 0 && fy < 5 &&
                      abs( fx - fy ) <= 1 ) {

/* Get the sum of the zero-based x and y grid indices, plus one. */
                     s = ix + iy + 1;

/* The bottom left half of the bottom left facet and the top right half
   of the top right facet are illegal. */
                     if( s <= nppf || s > n9 ) {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;

/* Other input positions in the bottom left half of the whole-sky map get
   moved to the top right by adding 2*nppf on each axis. */
                     } else if( s <= n5 ) {
                        *px_out = *px_in + n2;
                        *py_out = *py_in + n2;

/* Other input positions in the rop right half of the whole-sky map get
   moved to the bottom left by subtracting 2*nppf on each axis. */
                     } else {
                        *px_out = *px_in - n2;
                        *py_out = *py_in - n2;
                     }

                  } else {
                     *px_out = AST__BAD;
                     *py_out = AST__BAD;
                  }
               }
            }

/* Transforming from HPX12 to XPHN */
         } else if( map->type == AST__XPHN ){

            for ( point = 0; point < npoint; point++,
                  px_in++,py_in++,px_out++,py_out++ ) {

               if ( *px_in == AST__BAD || *py_in == AST__BAD ) {
                  *px_out = AST__BAD;
                  *py_out = AST__BAD;
               } else {

/* Get the zero-based integer indices of the grid cell containing the
   input position. The cell boundaries on the low RA edges are considered
   to be in the cell. Those on the high RA edges are considered to be part
   of the neigbouring cell. */
                  ix = ceil( *px_in - 1.5 );
                  iy = ceil( *py_in - 1.5 );

/* Get the facet indices and check they are legal. */
                  fx = ix/nppf;
                  fy = iy/nppf;
                  if( fx >= 0 && fx < 5 && fy >= 0 && fy < 5 &&
                      abs( fx - fy ) <= 1 ) {

/* Get the sum of the zero-based x and y grid indices, plus one. */
                     s = ix + iy + 1;

/* The bottom left half of the bottom left facet and the top right half
   of the top right facet are illegal. */
                     if( s <= nppf || s > n9 ) {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;
/* Gore 2 */
                     } else if( s <= n3 ) {
                        *px_out = n2 + *px_in;
                        *py_out = *py_in;
/* Gore 3 */
                     } else if( s <= n5 ) {
                        *px_out = n5 + 1.0 - *py_in;
                        *py_out = nppf + *px_in;
/* Gore 0 */
                     } else if( s <= n7 ) {
                        *px_out = n4 + 1.0 - *px_in;
                        *py_out = n6 + 1.0 - *py_in;
/* Gore 1 */
                     } else {
                        *px_out = *py_in - n3;
                        *py_out = n5 + 1.0 - *px_in;
                     }

                  } else {
                     *px_out = AST__BAD;
                     *py_out = AST__BAD;
                  }
               }
            }

/* Transforming from HPX12 to XPHS */
         } else if( map->type == AST__XPHS ){

            for ( point = 0; point < npoint; point++,
                  px_in++,py_in++,px_out++,py_out++ ) {

               if ( *px_in == AST__BAD || *py_in == AST__BAD ) {
                  *px_out = AST__BAD;
                  *py_out = AST__BAD;
               } else {

/* Get the zero-based integer indices of the grid cell containing the
   input position. The cell boundaries on the low RA edges are considered
   to be in the cell. Those on the high RA edges are considered to be part
   of the neigbouring cell. */
                  ix = ceil( *px_in - 1.5 );
                  iy = ceil( *py_in - 1.5 );

/* Get the facet indices and check they are legal. */
                  fx = ix/nppf;
                  fy = iy/nppf;
                  if( fx >= 0 && fx < 5 && fy >= 0 && fy < 5 &&
                      abs( fx - fy ) <= 1 ) {

/* Get the sum of the x and y grid indices, plus one. */
                     s = ix + iy + 1;

/* The bottom left half of the bottom left facet and the top right half
   of the top right facet are illegal. */
                     if( s <= nppf || s > n9 ) {
                        *px_out = AST__BAD;
                        *py_out = AST__BAD;
/* Gore 2 */
                     } else if( s <= n3 ) {
                        *px_out = n2 + *py_in;
                        *py_out = n4 + 1.0 - *px_in;
/* Gore 3 */
                     } else if( s <= n5 ) {
                        *px_out = n5 + 1.0 - *px_in;
                        *py_out = n3 + 1.0 - *py_in;
/* Gore 0 */
                     } else if( s <= n7 ) {
                        *px_out = n4 + 1.0 - *py_in;
                        *py_out = *px_in - n2;
/* Gore 1 */
                     } else {
                        *px_out = *px_in - n3;
                        *py_out = *py_in - nppf;
                     }

                  } else {
                     *px_out = AST__BAD;
                     *py_out = AST__BAD;
                  }
               }
            }

/* Unknown projection code */
         } else if( astOK ) {
            astError( AST__INTER, "astTransform(%s): Invalid projection type "
                      "encountered (%d) (internal programming error).", status,
                      astGetClass(this), map->type );
         }
      }
   }

/* Return a pointer to the output PointSet. */
   return result;
}

/* Functions which access class attributes. */
/* ---------------------------------------- */
/* Implement member functions to access the attributes associated with
   this class using the macros defined for this purpose in the
   "object.h" file. For a description of each attribute, see the class
   interface (in the associated .h file). */

/* Copy constructor. */
/* ----------------- */
/* No copy constructor is needed, as a byte-by-byte copy suffices. */

/* Destructor. */
/* ----------- */
/* No destructor is needed as no memory, etc. needs freeing. */

/* Dump function. */
/* -------------- */
static void Dump( AstObject *this_object, AstChannel *channel, int *status ) {
/*
*  Name:
*     Dump

*  Purpose:
*     Dump function for XphMap objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Dump( AstObject *this, AstChannel *channel, int *status )

*  Description:
*     This function implements the Dump function which writes out data
*     for the XphMap class to an output Channel.

*  Parameters:
*     this
*        Pointer to the XphMap whose data are being written.
*     channel
*        Pointer to the Channel to which the data are being written.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Variables: */
   AstXphMap *this;             /* Pointer to the XphMap structure */

/* Check the global error status. */
   if ( !astOK ) return;

/* Obtain a pointer to the XphMap structure. */
   this = (AstXphMap *) this_object;

/* Write out values representing the instance variables for the
   XphMap class.  Accompany these with appropriate comment strings,
   possibly depending on the values being written.*/

   astWriteInt( channel, "Order", 1, 1, this->order, "HEALPix order" );
   astWriteString( channel, "Type", 1, 1, proj_name[this->type],
                   proj_comm[this->type]);
}

/* Standard class functions. */
/* ========================= */
/* Implement the astIsAXphMap and astCheckXphMap functions using the macros
   defined for this purpose in the "object.h" header file. */
astMAKE_ISA(XphMap,Mapping)
astMAKE_CHECK(XphMap)

AstXphMap *astXphMap_( int order, int type, const char *options, int *status, ...) {
/*
*+
*  Name:
*     astXphMap

*  Purpose:
*     Create an XphMap.

*  Type:
*     Public function.

*  Synopsis:
*     #include "xphmap.h"
*     AstXphMap *astXphMap( int order, int type, const char *options, ... )

*  Class Membership:
*     XphMap constructor.

*  Description:
*     This function creates a new XphMap and optionally initialises its
*     attributes.
*
*     The XphMap class implements a Mapping between grid coordinates
*     within different types of HEALPix projection: The available types
*     are :
*
*     - "HPX0":  An HPX projection centred on RA=0h.
*     - "HPX12": An HPX projection centred on RA=12h.
*     - "XPHN":  An XPH ("Butterfly") projection centred on the
*                 north pole.
*     - "XPHS":  An XPH ("Butterfly") projection centred on the
*                south pole.
*
*     The HPX projection is described in "Mapping on the HEALPix grid"
*     by Calabretta and Roukema, A&A, 2005. The XPH projection is
*     described in "Representing the 'butterfly' projection in FITS -
*     projection code XPH" by Calabretta and Lowe, PASA, 2018.
*
*     The forward transformation of an XphMap transforms from grid
*     coordinates within the projection type specified by argument
*     "type" into grid coordinates within an HPX0 projection.

*  Parameters:
*     order
*        The HEALPix order of the HPX transformation.
*     type
*        The type of projection corresponding to the inputs of the
*        XphMap. This can be:
*        - AST__HPX0: A basic HPX projection (centred on RA=0h)
*        - AST__HPX12: An HPX projection centred on RA=12h.
*        - AST__XPHN: An XPH ("Butterfly") projection centred on the
*                     north pole.
*        - AST__XPHS: An XPH ("Butterfly") projection centred on the
*                     south pole.
*     options
*        Pointer to a null-terminated string containing an optional
*        comma-separated list of attribute assignments to be used for
*        initialising the new XphMap. The syntax used is identical to
*        that for the astSet function and may include "printf" format
*        specifiers identified by "%" symbols in the normal way.
*     ...
*        If the "options" string contains "%" format specifiers, then
*        an optional list of additional arguments may follow it in
*        order to supply values to be substituted for these
*        specifiers. The rules for supplying these are identical to
*        those for the astSet function (and for the C "printf"
*        function).

*  Returned Value:
*     astXphMap()
*        A pointer to the new XphMap.

*  Notes:
*     - A null Object pointer (AST__NULL) will be returned if this
*     function is invoked with the AST error status set, or if it
*     should fail for any reason.

*  Status Handling:
*     The protected interface to this function includes an extra
*     parameter at the end of the parameter list descirbed above. This
*     parameter is a pointer to the integer inherited status
*     variable: "int *status".

*-
*/

/* Local Variables: */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   AstXphMap *new;              /* Pointer to new XphMap */
   va_list args;                 /* Variable argument list */

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if ( !astOK ) return NULL;

/* Initialise the XphMap, allocating memory and initialising the
   virtual function table as well if necessary. */
   new = astInitXphMap( NULL, sizeof( AstXphMap ), !class_init, &class_vtab,
                         "XphMap", order, type );

/* If successful, note that the virtual function table has been
   initialised. */
   if ( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the options string
   to the astVSet method to initialise the new XphMap's attributes. */
      va_start( args, status );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new XphMap. */
   return new;
}

AstXphMap *astInitXphMap_( void *mem, size_t size, int init,
                           AstXphMapVtab *vtab, const char *name,
                           int order, int type, int *status ) {
/*
*+
*  Name:
*     astInitXphMap

*  Purpose:
*     Initialise a XphMap.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "xphmap.h"
*     AstXphMap *astInitXphMap( void *mem, size_t size, int init,
*                               AstXphMapVtab *vtab, const char *name,
*                               int order, int type )

*  Class Membership:
*     XphMap initialiser.

*  Description:
*     This function is provided for use by class implementations to initialise
*     a new XphMap object. It allocates memory (if necessary) to accommodate
*     the XphMap plus any additional data associated with the derived class.
*     It then initialises a XphMap structure at the start of this memory. If
*     the "init" flag is set, it also initialises the contents of a virtual
*     function table for a XphMap at the start of the memory passed via the
*     "vtab" parameter.

*  Parameters:
*     mem
*        A pointer to the memory in which the XphMap is to be initialised.
*        This must be of sufficient size to accommodate the XphMap data
*        (sizeof(XphMap)) plus any data used by the derived class. If a value
*        of NULL is given, this function will allocate the memory itself using
*        the "size" parameter to determine its size.
*     size
*        The amount of memory used by the XphMap (plus derived class data).
*        This will be used to allocate memory if a value of NULL is given for
*        the "mem" parameter. This value is also stored in the XphMap
*        structure, so a valid value must be supplied even if not required for
*        allocating memory.
*     init
*        A logical flag indicating if the XphMap's virtual function table is
*        to be initialised. If this value is non-zero, the virtual function
*        table will be initialised by this function.
*     vtab
*        Pointer to the start of the virtual function table to be associated
*        with the new XphMap.
*     name
*        Pointer to a constant null-terminated character string which contains
*        the name of the class to which the new object belongs (it is this
*        pointer value that will subsequently be returned by the astGetClass
*        method).
*     order
*        The HEALPix order.
*     type
*        The projection type.

*  Returned Value:
*     A pointer to the new XphMap.

*  Notes:
*     -  A null pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*-
*/

/* Local Variables: */
   AstXphMap *new;              /* Pointer to new XphMap */

/* Check the global status. */
   if ( !astOK ) return NULL;

/* If necessary, initialise the virtual function table. */
   if ( init ) astInitXphMapVtab( vtab, name );

/* Initialise. */
   new = NULL;


/* Validate inputs */
   if( order < 0 || order > AST__MXORDHPX ) {
      astError( AST__INTER, "astInitXphMap(%s): Invalid order supplied "
                "(%d) (internal programming error).", status, name, order );
   } else if( type < 0 || type > AST__MXPRJHPX ) {
      astError( AST__INTER, "astInitXphMap(%s): Invalid projection type "
                "supplied (%d) (internal programming error).", status,
                 name, type );
   }

/* Initialise a Mapping structure (the parent class) as the first component
   within the XphMap structure, allocating memory if necessary. Specify that
   the Mapping should be defined in both the forward and inverse directions. */
   new = (AstXphMap *) astInitMapping( mem, size, 0, (AstMappingVtab *) vtab,
                                       name, 2, 2, 1, 1 );
   if ( astOK ) {

/* Initialise the XphMap data. */
/* ---------------------------- */
      new->order = order;
      new->type = type;

/* If an error occurred, clean up by deleting the new XphMap. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new XphMap. */
   return new;
}

AstXphMap *astLoadXphMap_( void *mem, size_t size, AstXphMapVtab *vtab,
                           const char *name, AstChannel *channel, int *status ) {
/*
*+
*  Name:
*     astLoadXphMap

*  Purpose:
*     Load a XphMap.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "xphmap.h"
*     AstXphMap *astLoadXphMap( void *mem, size_t size, AstXphMapVtab *vtab,
*                               const char *name, AstChannel *channel )

*  Class Membership:
*     XphMap loader.

*  Description:
*     This function is provided to load a new XphMap using data read
*     from a Channel. It first loads the data used by the parent class
*     (which allocates memory if necessary) and then initialises a
*     XphMap structure in this memory, using data read from the input
*     Channel.
*
*     If the "init" flag is set, it also initialises the contents of a
*     virtual function table for a XphMap at the start of the memory
*     passed via the "vtab" parameter.


*  Parameters:
*     mem
*        A pointer to the memory into which the XphMap is to be
*        loaded.  This must be of sufficient size to accommodate the
*        XphMap data (sizeof(XphMap)) plus any data used by derived
*        classes. If a value of NULL is given, this function will
*        allocate the memory itself using the "size" parameter to
*        determine its size.
*     size
*        The amount of memory used by the XphMap (plus derived class
*        data).  This will be used to allocate memory if a value of
*        NULL is given for the "mem" parameter. This value is also
*        stored in the XphMap structure, so a valid value must be
*        supplied even if not required for allocating memory.
*
*        If the "vtab" parameter is NULL, the "size" value is ignored
*        and sizeof(AstXphMap) is used instead.
*     vtab
*        Pointer to the start of the virtual function table to be
*        associated with the new XphMap. If this is NULL, a pointer
*        to the (static) virtual function table for the XphMap class
*        is used instead.
*     name
*        Pointer to a constant null-terminated character string which
*        contains the name of the class to which the new object
*        belongs (it is this pointer value that will subsequently be
*        returned by the astGetClass method).
*
*        If the "vtab" parameter is NULL, the "name" value is ignored
*        and a pointer to the string "XphMap" is used instead.

*  Returned Value:
*     A pointer to the new XphMap.

*  Notes:
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*-
*/

/* Local Variables: */
   AstXphMap *new;              /* Pointer to the new XphMap */
   const char *text;            /* Text for string-valued attribute */
   astDECLARE_GLOBALS           /* Pointer to thread-specific global data */

/* Initialise. */
   new = NULL;

/* Check the global error status. */
   if ( !astOK ) return new;

/* Get a pointer to the thread specific global data structure. */
   astGET_GLOBALS(channel);

/* If a NULL virtual function table has been supplied, then this is
   the first loader to be invoked for this XphMap. In this case the
   XphMap belongs to this class, so supply appropriate values to be
   passed to the parent class loader (and its parent, etc.). */
   if ( !vtab ) {
      size = sizeof( AstXphMap );
      vtab = &class_vtab;
      name = "XphMap";

/* If required, initialise the virtual function table for this class. */
      if ( !class_init ) {
         astInitXphMapVtab( vtab, name );
         class_init = 1;
      }
   }

/* Invoke the parent class loader to load data for all the ancestral
   classes of the current one, returning a pointer to the resulting
   partly-built XphMap. */
   new = astLoadMapping( mem, size, (AstMappingVtab *) vtab, name,
                         channel );

   if ( astOK ) {

/* Read input data. */
/* ================ */
/* Request the input Channel to read all the input data appropriate to
   this class into the internal "values list". */
      astReadClassData( channel, "XphMap" );

/* Now read each individual data item from this list and use it to
   initialise the appropriate instance variable(s) for this class. */
      new->order = astReadInt( channel, "order", 19 );
      text = astReadString( channel, "type", proj_name[AST__HPX12] );

/* COnvert the projection name into an integer projection identifier. */
      for( new->type = 0; new->type <= AST__MXPRJHPX; new->type++ ) {
         if( astChrMatch( text, proj_name[new->type] ) ) break;
      }

/* Report an error if the projection name is unknown. */
      if( new->type > AST__MXPRJHPX && astOK ) {
         astError( AST__OPT, "astRead(XphMap): Illegal value '%s' supplied "
                   "for the XphMap component 'Type'.", status, text );
      }

/* If an error occurred, clean up by deleting the new XphMap. */
      if ( !astOK ) new = astDelete( new );
   }

/* Return the new XphMap pointer. */
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





