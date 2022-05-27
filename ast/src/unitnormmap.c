/*
*class++
*  Name:
*     UnitNormMap

*  Purpose:
*     Convert a vector to a unit vector and its norm, relative to a specified centre.

*  Constructor Function:
c     astUnitNormMap
f     AST_UNITNORMMAP

*  Description:
*     The forward transformation of a UnitNormMap subtracts the specified centre
*     and then transforms the resulting vector to a unit vector and the vector norm.
*     The output contains one more coordinate than the input: the initial
*     Nin outputs are in the same order as the input; the final output is the norm.
*     If the norm is 0, then the output of the forward transformation is AST__BAD
*     for each component of the unit vector and 0 for the norm (the final value).
*
*     The inverse transformation of a UnitNormMap multiplies each component
*     of the provided vector by the provided norm and adds the specified centre.
*     The output contains one fewer coordinate than the input: the initial Nin inputs
*     are in the same order as the output; the final input is the norm.
*     If the provided norm is 0 then the other input values are ignored,
*     and the output vector is the centre.
*
*     Example: if centre = [1, -1] then [5, 2] transforms to [4, 3] after subtracting the centre;
*     the norm is 5, so the output is [0.8, 0.6, 5].
*
*     UnitNormMap enables radially symmetric transformations, as follows:
*     - apply a UnitNormMap to produce a unit vector and norm (radius)
*     - apply a one-dimensional mapping to the norm (radius), while passing the unit vector unchanged
*     - apply the same UnitNormMap in the inverse direction to produce the result

*  Inheritance:
*     The UnitNormMap class inherits from the Mapping class.

*  Attributes:
*     The UnitNormMap class does not define any new attributes beyond those
*     which are applicable to all Mappings.

*  Functions:
c     The UnitNormMap class does not define any new functions beyond those
f     The UnitNormMap class does not define any new routines beyond those
*     which are applicable to all Mappings.

*  Copyright:
*     Copyright (C) 2016 University of Washington

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
*     RO: Russell Owen (LSST)
*     DSB: David S Berry (EAO)

*  History:
*     20-APR-2016 (RO):
*        Original version.
*     17-MAR-2017 (DSB):
*        Fix some memory leaks in MakeMergedMap.
*     23-JAN-2017 (DSB):
*        The length of the centre array is "Nin" for an uninverted
*        UnitNormMap but "Nout" for an inverted UnitNormMap. Previously,
*        it was always assumed to be Nin, which lead to a memory leak in
*        the Copy function, etc.
*class--
*/

/* Module Macros. */
/* ============== */
/* Set the name of the class we are implementing. This indicates to
   the header files that define class interfaces that they should make
   "protected" symbols available. */
#define astCLASS UnitNormMap

/* Macros which return the maximum and minimum of two values. */
#define MAX(aa,bb) ((aa)>(bb)?(aa):(bb))
#define MIN(aa,bb) ((aa)<(bb)?(aa):(bb))

/* Macro to check for equality of floating point values. We cannot
   compare bad values directory because of the danger of floating point
   exceptions, so bad values are dealt with explicitly. */
#define EQUAL(aa,bb) (((aa)==AST__BAD)?(((bb)==AST__BAD)?1:0):(((bb)==AST__BAD)?0:(fabs((aa)-(bb))<=1.0E9*MAX((fabs(aa)+fabs(bb))*DBL_EPSILON,DBL_MIN))))

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */

#include "globals.h"             /* Thread-safe global data access */
#include "error.h"               /* Error reporting facilities */
#include "memory.h"              /* Memory management facilities */
#include "object.h"              /* Base Object class */
#include "pointset.h"            /* Sets of points/coordinates */
#include "unitmap.h"             /* Unit mappings */
#include "mapping.h"             /* Coordinate mappings (parent class) */
#include "shiftmap.h"            /* ShiftMap */
#include "winmap.h"            /* ShiftMap */
#include "channel.h"             /* I/O channels */
#include "unitnormmap.h"         /* Interface definition for this class */

/* Error code definitions. */
/* ----------------------- */
#include "ast_err.h"             /* AST error codes */

/* C header files. */
/* --------------- */
#include <float.h>
#include <math.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <string.h>

/* Module Variables. */
/* ================= */

/* Address of this static variable is used as a unique identifier for
   member of this class. */
static int class_check;

/* Pointers to parent class methods which are extended by this class. */
static size_t (* parent_getobjsize)( AstObject *, int * );
static AstPointSet *(* parent_transform)( AstMapping *, AstPointSet *, int, AstPointSet *, int * );


#ifdef THREAD_SAFE
/* Define how to initialise thread-specific globals. */
#define GLOBAL_inits \
   globals->Class_Init = 0;

/* Create the function that initialises global data for this module. */
astMAKE_INITGLOBALS(UnitNormMap)

/* Define macros for accessing each item of thread specific global data. */
#define class_init astGLOBAL(UnitNormMap,Class_Init)
#define class_vtab astGLOBAL(UnitNormMap,Class_Vtab)


#include <pthread.h>


#else


/* Define the class virtual function table and its initialisation flag
   as static variables. */
static AstUnitNormMapVtab class_vtab;   /* Virtual function table */
static int class_init = 0;       /* Virtual function table initialised? */

#endif

/* External Interface Function Prototypes. */
/* ======================================= */
/* The following functions have public prototypes only (i.e. no
   protected prototypes), so we must provide local prototypes for use
   within this module. */
AstUnitNormMap *astUnitNormMapId_( int, const double [], const char *, ... );

/* Prototypes for Private Member Functions. */
/* ======================================== */

static AstPointSet *Transform( AstMapping *, AstPointSet *, int, AstPointSet *, int * );
static int GetMappingType( AstMapping *, int * );
static AstMapping * MakeMergedMap( AstMapping *, AstMapping *, int * );
static size_t GetObjSize( AstObject *, int * );
static int MapMerge( AstMapping *, int, int, int *, AstMapping ***, int **, int * );
static void Copy( const AstObject *, AstObject *, int * );
static void Delete( AstObject *, int * );
static void Dump( AstObject *, AstChannel *, int * );
static int GetIsLinear( AstMapping *, int * );

/* Member functions. */
/* ================= */
static int GetMappingType( AstMapping *map, int *status ) {
/*
*
*  Name:
*     GetMappingType

*  Purpose:
*     Return a code describing the mapping type, to aid simplification.

*  Type:
*     Private function.

*  Synopsis:
*     #include "unitnormmap.h"
*     int MakeMergedMap( AstMapping *map1, AstMapping *map2, int inv1, int inv2, int *status )

*  Class Membership:
*     UnitNormMap internal utility function.

*  Description:
*     This function returns an integer code describing the type of a mapping,
*     to help with merging two mappings. The codes are:
*     3 = WinMap
*     2 = ShiftMap
*     1 = UnitNormMap
*     0 = other

*  Parameters:
*     map
*        A pointer to the mapping
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the merged mapping, or NULL if the Mappings cannot be merged

*/
   const char *class = astGetClass( map );
   int type = 0;
   if( strcmp( class, "UnitNormMap" ) == 0 ) {
      type = 1;
   } else if( strcmp( class, "ShiftMap" ) == 0 ) {
      type = 2;
   } else if( strcmp( class, "WinMap" ) == 0){
      type = 3;
   }
   return type;
}

static AstMapping * MakeMergedMap( AstMapping *map1, AstMapping *map2, int *status ){
/*
*
*  Name:
*     MakeMergedMap

*  Purpose:
*     Make a single Mapping that is equivalent to the merging of two other Mappings,
*     one of which must be a UnitNormMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "unitnormmap.h"
*     int MakeMergedMap( AstMapping *map1, AstMapping *map2, int inv1, int inv2, int *status )

*  Class Membership:
*     UnitNormMap internal utility function.

*  Description:
*     This function returns a single Mapping that is the equivalent of the two supplied Mappings,
*     if they can be merged. One of the pair must be a UnitNormMap.
*
*     Supported merges, which must be in series:
*     ShiftMap               + UnitNormMap(forward)            = UnitNormMap(forward)
*     WinMap with unit scale + UnitNormMap(forward)            = UnitNormMap(forward)
*     UnitNormMap(inverted)  + ShiftMap                        = UnitNormMap(inverted)
*     UnitNormMap(inverted)  + WinMap with unit scale          = UnitNormMap(inverted)
*     UnitNormMap(forward)   + identical UnitNormMap(inverted) = UnitMap
*     UnitNormMap(inverted)  + identical UnitNormMap(forward)  = UnitMap
*     UnitNormMap(forward)   + UnitNormMap(inverted)           = ShiftMap
*
*
*     Notes:
*     - A UnitMap before or after a UnitNormMap = the UnitNormMap, but UnitMap takes care of that merge.
*     - The code that checks for ShiftMap + UnitNormMap probably never runs, because ShiftMap is
*       converted to WinMap during simplification before it gets here.

*  Parameters:
*     map1
*        A pointer to the first mapping.
*     map2
*        A pointer to the second mapping.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     A pointer to the merged mapping, or NULL if the Mappings cannot be merged

*/

/* Check the global error status. */
   if( !astOK ) return NULL;

/* Initialise returned mapping */
   AstMapping *retmap = NULL;

/* Set type to 1=UnitNormMap, 2=ShiftMap, 0=other for both maps */
   int type1 = GetMappingType( map1, status );
   int type2 = GetMappingType( map2, status );
   if( !astOK ) return NULL;

   if( type1 == 0 || type2 == 0 ) return NULL;  /* can only merge with UnitNormMap or ShiftMap */

   if( !(type1 == 1 || type2 == 1) ) return NULL;  /* one must be a UnitNormMap */

   if( type1 == 2 ) {
      if( astGetInvert( map2 )) return NULL;  /* ShiftMap + UnitNormMap(inverted) not supported */

/* ShiftMap + UnitNormMap(forward) = UnitNormMap(forward) */
      AstShiftMap *shiftmap = (AstShiftMap *) map1;
      AstUnitNormMap *unm = (AstUnitNormMap *) map2;
      int nin = astGetNin( shiftmap );
      double shiftmult = astGetInvert( shiftmap ) ? -1 : 1;
      double *newcentre = astMalloc( sizeof(double)*(size_t)nin );
      if( astOK ) {
         int coord = 0;
         for( coord = 0; coord < nin; coord++ ){
            newcentre[coord] = unm->centre[coord] - shiftmult*shiftmap->shift[coord];
         }
         retmap = (AstMapping *) astUnitNormMap( nin, newcentre, "", status );
         newcentre = astFree( (void *) newcentre );
      }
   } else if( type1 == 3 ) {
      if( astGetInvert( map2 )) return NULL;  /* WinMap + UnitNormMap(inverted) not supported */

/* WinMap with unit scale + UnitNormMap(forward) = UnitNormMap(forward);
   Do not create a returned Mapping (but do free the newcentre memory) if WinMap
   does not have unit scale */
      AstWinMap *winmap = (AstWinMap *) map1;
      AstUnitNormMap *unm = (AstUnitNormMap *) map2;
      int nin = astGetNin( winmap );
      double shiftmult = astGetInvert( winmap ) ? -1 : 1;
      double *newcentre = astMalloc( sizeof(double)*(size_t)nin );
      if( astOK ) {
         int coord = 0;
         int ok = 1;
         for( coord = 0; coord < nin; coord++ ){
            if( !EQUAL( winmap->b[coord], 1.0 )) ok = 0;
            newcentre[coord] = unm->centre[coord] - shiftmult*winmap->a[coord];
         }
         if( ok ) retmap = (AstMapping *) astUnitNormMap( nin, newcentre, "", status );
         newcentre = astFree( (void *) newcentre );
      }
   } else if( type2 == 2 ) {
      if( !astGetInvert( map1 )) return NULL;  /* UnitNormMap(forward) + ShiftMap not supported */

/* UnitNormMap(inverted) + ShiftMap = UnitNormMap(inverted) */
      AstShiftMap *shiftmap = (AstShiftMap *) map2;
      AstUnitNormMap *unm = (AstUnitNormMap *) map1;
      int nin = astGetNin( shiftmap );
      double shiftmult = astGetInvert( shiftmap ) ? -1 : 1;
      double *newcentre = astMalloc( sizeof(double)*(size_t)nin );
      if( astOK ) {
         int coord = 0;
         for( coord = 0; coord < nin; coord++ ){
            newcentre[coord] = unm->centre[coord] + shiftmult*shiftmap->shift[coord];
         }
         retmap = (AstMapping *) astUnitNormMap( nin, newcentre, "Invert=1", status );
         newcentre = astFree( (void *) newcentre );
      }
   } else if( type2 == 3 ) {
      if( !astGetInvert( map1 )) return NULL;  /* UnitNormMap(forward) + WinMap not supported */

/* UnitNormMap(inverted) + WinMap = UnitNormMap(inverted);
   Do not create a returned Mapping - but do free the newcentre memory - if WinMap
   does not have unit scale */
      AstWinMap *winmap = (AstWinMap *) map2;
      AstUnitNormMap *unm = (AstUnitNormMap *) map1;
      int nin = astGetNin( winmap );
      double shiftmult = astGetInvert( winmap ) ? -1 : 1;
      double *newcentre = astMalloc( sizeof(double)*(size_t)nin );
      if( astOK ) {
         int coord = 0;
         int ok = 1;
         for( coord = 0; coord < nin; coord++ ){
            if( !EQUAL( winmap->b[coord], 1.0 )) ok = 0;
            newcentre[coord] = unm->centre[coord] + shiftmult*winmap->a[coord];
         }
         if( ok ) retmap = (AstMapping *) astUnitNormMap( nin, newcentre, "Invert=1", status );
         newcentre = astFree( (void *) newcentre );
      }
   } else {
      if( !astGetInvert( map1 ) == !astGetInvert( map2 )) return NULL;  /* UNMs must have opposite dir. */

/* Two UnitNormMaps in opposite directions */
      AstUnitNormMap *unm1 = (AstUnitNormMap *) map1;
      AstUnitNormMap *unm2 = (AstUnitNormMap *) map2;

      int ctrlen = MIN( astGetNin( map1 ), astGetNin( map2 ) );
      int centres_equal = 1;
      int i = 0;
      for( i = 0; i < ctrlen; i++ ){
         if( !EQUAL( unm1->centre[i], unm2->centre[i] )){
            centres_equal = 0;
            break;
         }
      }
      if( centres_equal ) {

/* Two UnitNormMap in opposite directions with identical centres = UnitMap */
         retmap = (AstMapping *) astUnitMap( astGetNin( map1 ), "", status );
      } else {
         if( astGetInvert( map2 )) {

/* UnitNormMap(forward) + UnitNormMap(inverted) = ShiftMap */
            int nin = astGetNin( map1 );
            double *shift = astMalloc( sizeof(double)*(size_t)nin );
            if( astOK ) {
               int coord = 0;
               for( coord = 0; coord < nin; coord++ ){
                  shift[coord] = unm2->centre[coord] - unm1->centre[coord];
               }
               retmap = (AstMapping *) astShiftMap( nin, shift, "", status );
               shift = astFree( (void *) shift );
            }
         }
      }
   }

   return astOK ? retmap : NULL;
}

static int GetIsLinear( AstMapping *this_mapping, int *status ){
/*
*  Name:
*     GetIsLinear

*  Purpose:
*     Return the value of the IsLinear attribute for a UnitNormMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mapping.h"
*     void GetIsLinear( AstMapping *this, int *status )

*  Class Membership:
*     UnitNormMap member function (over-rides the protected astGetIsLinear
*     method inherited from the Mapping class).

*  Description:
*     This function returns the value of the IsLinear attribute for a
*     Frame, which is always one.

*  Parameters:
*     this
*        Pointer to the UnitNormMap.
*     status
*        Pointer to the inherited status variable.
*/
   return 0;
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
*     #include "unitnormmap.h"
*     size_t GetObjSize( AstObject *this, int *status )

*  Class Membership:
*     UnitNormMap member function (over-rides the astGetObjSize protected
*     method inherited from the parent class).

*  Description:
*     This function returns the in-memory size of the supplied UnitNormMap,
*     in bytes.

*  Parameters:
*     this
*        Pointer to the UnitNormMap.
*     status
*        Pointer to the inherited status variable.

*  Returned Value:
*     The Object size, in bytes.

*  Notes:
*     - A value of zero will be returned if this function is invoked
*     with the global status set, or if it should fail for any reason.
*/

/* Initialise. */
   int result = 0;

/* Check the global error status. */
   if( !astOK ) return result;

/* Obtain a pointers to the UnitNormMap structure. */
   AstUnitNormMap *this = (AstUnitNormMap *) this_object;

/* Invoke the GetObjSize method inherited from the parent class, and then
   add on any components of the class structure defined by thsi class
   which are stored in dynamically allocated memory. */
   result = (*parent_getobjsize)( this_object, status );
   result += astTSizeOf( this->centre );

/* If an error occurred, clear the result value. */
   if( !astOK ) result = 0;

/* Return the result, */
   return result;
}

void astInitUnitNormMapVtab_(  AstUnitNormMapVtab *vtab, const char *name, int *status ) {
/*
*+
*  Name:
*     astInitUnitNormMapVtab

*  Purpose:
*     Initialise a virtual function table for a UnitNormMap.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "unitnormmap.h"
*     void astInitUnitNormMapVtab( AstUnitNormMapVtab *vtab, const char *name )

*  Class Membership:
*     UnitNormMap vtab initialiser.

*  Description:
*     This function initialises the component of a virtual function
*     table which is used by the UnitNormMap class.

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

/* Check the local error status. */
   if( !astOK ) return;

/* Get a pointer to the thread specific global data structure. */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   astGET_GLOBALS(NULL);

/* Initialize the component of the virtual function table used by the
   parent class. */
   astInitMappingVtab( (AstMappingVtab *) vtab, name );

/* Store a unique "magic" value in the virtual function table. This
   will be used (by astIsAUnitNormMap) to determine if an object belongs
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
   AstObjectVtab *object = (AstObjectVtab *) vtab;
   AstMappingVtab *mapping = (AstMappingVtab *) vtab;
   parent_getobjsize = object->GetObjSize;
   object->GetObjSize = GetObjSize;

   parent_transform = mapping->Transform;
   mapping->Transform = Transform;

/* Store replacement pointers for methods which will be over-ridden by
   new member functions implemented here. */
   mapping->MapMerge = MapMerge;
   mapping->GetIsLinear = GetIsLinear;

/* Declare the class dump, copy and delete functions.*/
   astSetDump( vtab, Dump, "UnitNormMap", "Compute unit vector and norm relative to a centre" );
   astSetCopy( (AstObjectVtab *) vtab, Copy );
   astSetDelete( (AstObjectVtab *) vtab, Delete );

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
*     Simplify a sequence of Mappings containing a UnitNormMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "mapping.h"
*     int MapMerge( AstMapping *this, int where, int series, int *nmap,
*                   AstMapping ***map_list, int **invert_list, int *status )

*  Class Membership:
*     UnitNormMap method (over-rides the protected astMapMerge method
*     inherited from the Mapping class).

*  Description:
*     This function attempts to simplify a sequence of Mappings by
*     merging a nominated UnitNormMap in the sequence with its neighbours,
*     so as to shorten the sequence if possible.
*
*     In many cases, simplification will not be possible and the
*     function will return -1 to indicate this, without further
*     action.
*
*     In most cases of interest, however, this function will either
*     attempt to replace the nominated UnitNormMap with a Mapping which it
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
*        Pointer to the nominated UnitNormMap which is to be merged with
*        its neighbours. This should be a cloned copy of the UnitNormMap
*        pointer contained in the array element "(*map_list)[where]"
*        (see below). This pointer will not be annulled, and the
*        UnitNormMap it identifies will not be modified by this function.
*     where
*        Index in the "*map_list" array (below) at which the pointer
*        to the nominated UnitNormMap resides.
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

/* Initialise. */
   int result = -1;

/* Check the global error status. */
   if( !astOK ) return result;

   if( series ) {

/* In series */
/* Try to merge UnitNormMap with either of its neighbours. */
      AstMapping *map1 = NULL;    /* The first Mapping to merge */
      AstMapping *map2 = NULL;    /* The second Mapping to merge */
      AstMapping *newmap = NULL;  /* The merged Mapping */
      int i1 = MAX( where - 1, 0 );
      int i2 = i1 + 1;
      for( ; i2 < *nmap; i1++, i2++ ){
         map1 = ( *map_list )[ i1 ];
         map2 = ( *map_list )[ i2 ];
         int wasinverted1 = astGetInvert( map1 );
         int wasinverted2 = astGetInvert( map2 );
         astSetInvert( map1, ( *invert_list )[ i1 ] );
         astSetInvert( map2, ( *invert_list )[ i2 ] );
         newmap = MakeMergedMap( map1, map2, status );
         astSetInvert( map1, wasinverted1 );
         astSetInvert( map2, wasinverted2 );
         if( newmap ) break;
      }

      if( !newmap ) return -1;
      if( !astOK ) {
         astAnnul( newmap );
         return -1;
      }

/* Annul the first of the two Mappings, and replace it with the merged Mapping.
   Also update the invert flag. */
      (void) astAnnul( map1 );
      ( *map_list )[ i1 ] = newmap;
      ( *invert_list )[ i1 ] = astGetInvert( newmap );

/* Annul the second of the two Mappings, and shuffle down the rest of the list to fill the gap. */
      (void) astAnnul( map2 );
      int i = 0;
      for( i = i2 + 1; i < *nmap; i++ ) {
         ( *map_list )[ i - 1 ] = ( *map_list )[ i ];
         ( *invert_list )[ i - 1 ] = ( *invert_list )[ i ];
      }

/* Clear the vacated element at the end. */
      ( *map_list )[ *nmap - 1 ] = NULL;
      ( *invert_list )[ *nmap - 1 ] = 0;

/* Decrement the Mapping count and return the index of the first modified element. */
      ( *nmap )--;
      result = i1;

   } else {

/* In parallel. */
/* UnitNormMaps cannot combine in parallel with any other Mappings. */
   }

/* Return the result. */
   return result;
}

static AstPointSet *Transform( AstMapping *this, AstPointSet *in,
                               int forward, AstPointSet *out, int *status ) {
/*
*  Name:
*     Transform

*  Purpose:
*     Apply a UnitNormMap to transform a set of points.

*  Type:
*     Private function.

*  Synopsis:
*     #include "unitnormmap.h"
*     AstPointSet *Transform( AstMapping *this, AstPointSet *in,
*                             int forward, AstPointSet *out, int *status )

*  Class Membership:
*     UnitNormMap member function (over-rides the astTransform protected
*     method inherited from the Mapping class).

*  Description:
*     This function takes a UnitNormMap and a set of points encapsulated in a
*     PointSet and transforms the points so as to map them into the
*     required window.

*  Parameters:
*     this
*        Pointer to the UnitNormMap.
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
*     match the number of coordinates for the UnitNormMap being applied.
*     -  If an output PointSet is supplied, it must have space for sufficient
*     number of points and coordinate values per point to accommodate the
*     result. Any excess space will be ignored.
*/

/* Check the global error status. */
   if( !astOK ) return NULL;

/* Obtain a pointer to the UnitNormMap. */
   AstUnitNormMap *map = (AstUnitNormMap *) this;

/* Apply the parent mapping using the stored pointer to the Transform member
   function inherited from the parent Mapping class. This function validates
   all arguments and generates an output PointSet if necessary, but does not
   actually transform any coordinate values. */
   AstPointSet *result = (*parent_transform)( this, in, forward, out, status );

/* We will now extend the parent astTransform method by performing the
   calculations needed to generate the output coordinate values. */

/* Determine the numbers of points and coordinates per point from the input
   PointSet and obtain pointers for accessing the input and output coordinate
   values. */
   int ncoord_in = astGetNcoord( in );
   int ncoord_out = astGetNcoord( result );
   int npoint = astGetNpoint(in);
   double **ptr_in = astGetPoints(in);
   double **ptr_out = astGetPoints( result );

/* Determine whether to apply the forward or inverse mapping, according to the
   direction specified and whether the mapping has been inverted. */
   if( astGetInvert(map) ){
      forward = !forward;
   }

/* Report an error if the UnitNormMap does not contain a centre. */
   if( !map->centre && astOK ){
      const char *class = astGetClass( this );
      astError( AST__BADSM, "astTransform(%s): The supplied %s does not "
                "contain any centre information.", status, class, class );
   }

/* Perform coordinate arithmetic. */
/* ------------------------------ */
   if( astOK ){

/* If any centre coordinate is bad then set all outputs bad */
      int const ncoord_centre = forward ? ncoord_in : ncoord_out;
      int coord_ctr = 0;
      for( coord_ctr = 0; coord_ctr < ncoord_centre; coord_ctr++ ){
         if( (map->centre)[coord_ctr] == AST__BAD ){
            int coord_out = 0;
            for( coord_out = 0; coord_out < ncoord_out; coord_out++ ){
               int point = 0;
               for( point = 0; point < npoint; point++ ){
                  ptr_out[point][coord_out] = AST__BAD;
               }
            }
            return result;
         }
      }

      if( forward ){

/* Forward transformation: vector to unit vector, norm */
         int point = 0;
         for( point = 0; point < npoint; point++ ){

/* Compute max_relin: the maximum absolute input value relative to centre */
            double max_relin = 0;
            int coord_in = 0;
            for( coord_in = 0; coord_in < ncoord_in; coord_in++ ){
               double in = ptr_in[coord_in][point];
               if( in == AST__BAD ){

/* An input coord is bad, so all outputs are bad */
                  int coord_out = 0;
                  for( coord_out = 0; coord_out < ncoord_out; coord_out++ ){
                     ptr_out[coord_out][point] = AST__BAD;
                  }
                  goto forward_next_point;
               }
               double abs_relin = fabs(in - map->centre[coord_in]);
               if( abs_relin > max_relin ){
                  max_relin = abs_relin;
               }
            }

            if( max_relin == 0 ){

/* The norm is 0, so the unit vector (first nin components of output) is unknown */
               int coord = 0;
               for( coord = 0; coord < ncoord_out - 1; coord++ ){
                  ptr_out[coord][point] = AST__BAD;
               }
               ptr_out[ncoord_out - 1][point] = 0;
               continue;
            }

/* All is well; compute scaled_sum as the sum of (relin/max_relin)^2 for each input
   where relin = in - centre (the scaling avoids overflow),
   then compute norm = max_relin * sqrt(scaled_sum) and set all outputs */
            double scaled_sum = 0;
            int coord = 0;
            for( coord = 0; coord < ncoord_in; coord++ ){
               double scaled_in = (ptr_in[coord][point] - map->centre[coord])/max_relin;
               scaled_sum += scaled_in*scaled_in;
            }
            double norm = max_relin*sqrt(scaled_sum);
            for( coord = 0; coord < ncoord_in; coord++ ){
               ptr_out[coord][point] = (ptr_in[coord][point] - map->centre[coord])/norm;
            }
            ptr_out[ncoord_out - 1][point] = norm;

            forward_next_point: ;
         }
      } else {

/* Inverse transformation: unit vector, norm -> vector */
         int point = 0;
         for( point = 0; point < npoint; point++ ){
            double norm = ptr_in[ncoord_in-1][point];
            if( norm == AST__BAD ){

/* Norm is bad for this point; set all output coords bad */
               int coord = 0;
               for( coord = 0; coord < ncoord_out; coord++ ){
                  ptr_out[coord][point] = AST__BAD;
               }
            } else if( norm == 0 ){

/* Norm is 0 for this point; set the output to the centre */
               int coord = 0;
               for( coord = 0; coord < ncoord_out; coord++ ){
                  ptr_out[coord][point] = map->centre[coord];
               }
            } else {
               int coord = 0;
               for( coord = 0; coord < ncoord_out; coord++ ){
                  double in = ptr_in[coord][point];
                  if( in == AST__BAD ){
                     ptr_out[coord][point] = AST__BAD;
                  } else {
                     ptr_out[coord][point] = in*norm + map->centre[coord];
                  }
               }
            }
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
static void Copy( const AstObject *objin, AstObject *objout, int *status ) {
/*
*  Name:
*     Copy

*  Purpose:
*     Copy constructor for UnitNormMap objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Copy( const AstObject *objin, AstObject *objout, int *status )

*  Description:
*     This function implements the copy constructor for UnitNormMap objects.

*  Parameters:
*     objin
*        Pointer to the UnitNormMap to be copied.
*     objout
*        Pointer to the UnitNormMap being constructed.
*     status
*        Pointer to the inherited status variable.

*/

/* Local Variables: */
   AstUnitNormMap *out;              /* Pointer to output UnitNormMap */
   AstUnitNormMap *in;               /* Pointer to input UnitNormMap */
   int ncoord;                  /* No. of axes for the mapping */

/* Check the global error status. */
   if( !astOK ) return;

/* Obtain a pointer to the input and output UnitNormMaps. */
   in= (AstUnitNormMap *) objin;
   out = (AstUnitNormMap *) objout;

/* Get the length of the centre array. */
   ncoord = astGetInvert( in ) ? astGetNout( in ) : astGetNin( in );

/* Allocate memory holding copies of the centre defining the mapping. */
   out->centre = (double *) astStore( NULL, (void *) in->centre,
                                      sizeof(double)*(size_t)ncoord );

/* If an error occurred, free any allocated memory. */
   if( !astOK ) {
      out->centre = (double *) astFree( (void *) out->centre );
   }

}

/* Destructor. */
/* ----------- */
static void Delete( AstObject *obj, int *status ) {
/*
*  Name:
*     Delete

*  Purpose:
*     Destructor for UnitNormMap objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Delete( AstObject *obj, int *status )

*  Description:
*     This function implements the destructor for UnitNormMap objects.

*  Parameters:
*     obj
*        Pointer to the UnitNormMap to be deleted.
*     status
*        Pointer to the inherited status variable.

*  Notes:
*     - This destructor does nothing and exists only to maintain a
*     one-to-one correspondence between destructors and copy
*     constructors.
*/

/* Local Variables: */
   AstUnitNormMap *this;              /* Pointer to UnitNormMap */

/* Obtain a pointer to the UnitNormMap structure. */
   this = (AstUnitNormMap *) obj;

/* Free the memory holding the centre. */
   this->centre = (double *) astFree( (void *) this->centre );

}

/* Dump function. */
/* -------------- */
static void Dump( AstObject *this_object, AstChannel *channel, int *status ) {
/*
*  Name:
*     Dump

*  Purpose:
*     Dump function for UnitNormMap objects.

*  Type:
*     Private function.

*  Synopsis:
*     void Dump( AstObject *this, AstChannel *channel, int *status )

*  Description:
*     This function implements the Dump function which writes out data
*     for the UnitNormMap class to an output Channel.

*  Parameters:
*     this
*        Pointer to the UnitNormMap whose data are being written.
*     channel
*        Pointer to the Channel to which the data are being written.
*     status
*        Pointer to the inherited status variable.
*/

/* Local Constants: */
#define COMMENT_LEN 50           /* Maximum length of a comment string */
#define KEY_LEN 50               /* Maximum length of a keyword */

/* Local Variables: */
   char buff[ KEY_LEN + 1 ];        /* Buffer for keyword string */
   char comment[ COMMENT_LEN + 1 ]; /* Buffer for comment string */

/* Check the global error status. */
   if( !astOK ) return;

/* Obtain a pointer to the UnitNormMap structure. */
   AstUnitNormMap *this = (AstUnitNormMap *) this_object;

/* Get the length of the centre array. */
   int ncoord = astGetInvert( this ) ? astGetNout( this ) : astGetNin( this );

/* Write out values representing the instance variables for the
   UnitNormMap class.  Accompany these with appropriate comment strings,
   possibly depending on the values being written.*/

/* The centre. */
   int axis = 0;
   for( axis = 0; axis < ncoord; axis++ ){
      (void) sprintf( buff, "Ctr%d", axis + 1 );
      (void) sprintf( comment, "Centre for axis %d", axis + 1 );
      astWriteDouble( channel, buff, (this->centre)[ axis ] != 0.0, 0,
                      (this->centre)[ axis ], comment );
   }

/* Undefine macros local to this function. */
#undef COMMENT_LEN
#undef KEY_LEN
}

/* Standard class functions. */
/* ========================= */
/* Implement the astIsAUnitNormMap and astCheckUnitNormMap functions using the macros
   defined for this purpose in the "object.h" header file. */
astMAKE_ISA(UnitNormMap,Mapping)
astMAKE_CHECK(UnitNormMap)

AstUnitNormMap *astUnitNormMap_( int ncoord, const double centre[], const char *options, int *status, ...) {
/*
*++
*  Name:
c     astUnitNormMap
f     AST_UNITNORMMAP

*  Purpose:
*     Create a UnitNormMap.

*  Type:
*     Public function.

*  Synopsis:
c     #include "unitnormmap.h"
c     AstUnitNormMap *astUnitNormMap( int ncoord, const double centre[],
c                               const char *options, ... )
f     RESULT = AST_UNITNORMMAP( NCOORD, CENTRE, OPTIONS, STATUS )

*  Class Membership:
*     UnitNormMap constructor.

*  Description:
*     This function creates a new UnitNormMap and optionally initialises its
*     attributes.
*
*     The forward transformation of a UnitNormMap subtracts the specified centre
*     and then transforms the resulting vector to a unit vector and the vector norm.
*     The output contains one more coordinate than the input: the initial
*     Nin outputs are in the same order as the input; the final output is the norm.
*     If the norm is 0, then the output of the forward transformation is AST__BAD
*     for each component of the unit vector and 0 for the norm (the final value).
*
*     The inverse transformation of a UnitNormMap multiplies each component
*     of the provided vector by the provided norm and adds the specified centre.
*     The output contains one fewer coordinate than the input: the initial Nin inputs
*     are in the same order as the output; the final input is the norm.
*     If the provided norm is 0 then the other input values are ignored,
*     and the output vector is the centre.
*
*     Example: if centre = [1, -1] then [5, 2] transforms to [4, 3] after subtracting the centre;
*     the norm is 5, so the output is [0.8, 0.6, 5].
*
*     UnitNormMap enables radially symmetric transformations, as follows:
*     - apply a UnitNormMap to produce a unit vector and norm (radius)
*     - apply a one-dimensional mapping to the norm (radius), while passing the unit vector unchanged
*     - apply the same UnitNormMap in the inverse direction to produce the result

*  Parameters:
c     ncoord
f     NCOORD = INTEGER (Given)
*        The number of coordinate values for each point to be
*        transformed (i.e. the number of dimensions of the space in
*        which the points will reside). Output will include one additional coordinate.
c     centre
f     CENTRE( NCOORD ) = DOUBLE PRECISION (Given)
*        An array containing the values to be subtracted from the input
*        coordinates before computing unit vector and norm. A separate
*        value must be supplied for each coordinate.
c     options
f     OPTIONS = CHARACTER * ( * ) (Given)
c        Pointer to a null-terminated string containing an optional
c        comma-separated list of attribute assignments to be used for
c        initialising the new UnitNormMap. The syntax used is identical to
c        that for the astSet function and may include "printf" format
c        specifiers identified by "%" symbols in the normal way.
f        A character string containing an optional comma-separated
f        list of attribute assignments to be used for initialising the
f        new UnitNormMap. The syntax used is identical to that for the
f        AST_SET routine.
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
c     astUnitNormMap()
f     AST_UNITNORMMAP = INTEGER
*        A pointer to the new UnitNormMap.

*  Notes:
*     - A null Object pointer (AST__NULL) will be returned if this
c     function is invoked with the AST error status set, or if it
f     function is invoked with STATUS set to an error value, or if it
*     should fail for any reason.

*  Status Handling:
*     The protected interface to this function includes an extra
*     parameter at the end of the parameter list descirbed above. This
*     parameter is a pointer to the integer inherited status
*     variable: "int *status".

*--
*/

/* Get a pointer to the thread specific global data structure. */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if( !astOK ) return NULL;

/* Initialise the UnitNormMap, allocating memory and initialising the
   virtual function table as well if necessary. */
   AstUnitNormMap *new = astInitUnitNormMap( NULL, sizeof( AstUnitNormMap ), !class_init, &class_vtab,
                        "UnitNormMap", ncoord, centre );

/* If successful, note that the virtual function table has been
   initialised. */
   if( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the options string
   to the astVSet method to initialise the new UnitNormMap's attributes. */
      va_list args;
      va_start( args, status );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new UnitNormMap. */
   return new;
}

AstUnitNormMap *astUnitNormMapId_( int ncoord, const double centre[],
                             const char *options, ... ) {
/*
*  Name:
*     astUnitNormMapId_

*  Purpose:
*     Create a UnitNormMap.

*  Type:
*     Private function.

*  Synopsis:
*     #include "unitnormmap.h"
*     AstUnitNormMap *astUnitNormMapId_( int ncoord, const double centre[],
*                                  const char *options, ... )

*  Class Membership:
*     UnitNormMap constructor.

*  Description:
*     This function implements the external (public) interface to the
*     astUnitNormMap constructor function. It returns an ID value (instead
*     of a true C pointer) to external users, and must be provided
*     because astUnitNormMap_ has a variable argument list which cannot be
*     encapsulated in a macro (where this conversion would otherwise
*     occur).
*
*     The variable argument list also prevents this function from
*     invoking astUnitNormMap_ directly, so it must be a re-implementation
*     of it in all respects, except for the final conversion of the
*     result to an ID value.

*  Parameters:
*     As for astUnitNormMap_.

*  Returned Value:
*     The ID value associated with the new UnitNormMap.
*/

   int *status;                  /* Pointer to inherited status value */

/* Get a pointer to the inherited status value. */
   status = astGetStatusPtr;

/* Get a pointer to the thread specific global data structure. */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   astGET_GLOBALS(NULL);

/* Check the global status. */
   if( !astOK ) return NULL;

/* Initialise the UnitNormMap, allocating memory and initialising the
   virtual function table as well if necessary. */
   AstUnitNormMap *new = astInitUnitNormMap( NULL, sizeof( AstUnitNormMap ), !class_init, &class_vtab,
                          "UnitNormMap", ncoord, centre );

/* If successful, note that the virtual function table has been
   initialised. */
   if( astOK ) {
      class_init = 1;

/* Obtain the variable argument list and pass it along with the options string
   to the astVSet method to initialise the new UnitNormMap's attributes. */
      va_list args;                /* Variable argument list */
      va_start( args, options );
      astVSet( new, options, NULL, args );
      va_end( args );

/* If an error occurred, clean up by deleting the new object. */
      if( !astOK ) new = astDelete( new );
   }

/* Return an ID value for the new UnitNormMap. */
   return astMakeId( new );
}

AstUnitNormMap *astInitUnitNormMap_( void *mem, size_t size, int init,
                              AstUnitNormMapVtab *vtab, const char *name,
                              int ncoord, const double *centre, int *status ) {
/*
*+
*  Name:
*     astInitUnitNormMap

*  Purpose:
*     Initialise a UnitNormMap.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "unitnormmap.h"
*     AstUnitNormMap *astInitUnitNormMap( void *mem, size_t size, int init,
*                                   AstUnitNormMapVtab *vtab, const char *name,
*                                   int ncoord, const double *centre )

*  Class Membership:
*     UnitNormMap initialiser.

*  Description:
*     This function is provided for use by class implementations to initialise
*     a new UnitNormMap object. It allocates memory (if necessary) to accommodate
*     the UnitNormMap plus any additional data associated with the derived class.
*     It then initialises a UnitNormMap structure at the start of this memory. If
*     the "init" flag is set, it also initialises the contents of a virtual
*     function table for a UnitNormMap at the start of the memory passed via the
*     "vtab" parameter.

*  Parameters:
*     mem
*        A pointer to the memory in which the UnitNormMap is to be initialised.
*        This must be of sufficient size to accommodate the UnitNormMap data
*        (sizeof(UnitNormMap)) plus any data used by the derived class. If a value
*        of NULL is given, this function will allocate the memory itself using
*        the "size" parameter to determine its size.
*     size
*        The amount of memory used by the UnitNormMap (plus derived class data).
*        This will be used to allocate memory if a value of NULL is given for
*        the "mem" parameter. This value is also stored in the UnitNormMap
*        structure, so a valid value must be supplied even if not required for
*        allocating memory.
*     init
*        A logical flag indicating if the UnitNormMap's virtual function table is
*        to be initialised. If this value is non-zero, the virtual function
*        table will be initialised by this function.
*     vtab
*        Pointer to the start of the virtual function table to be associated
*        with the new UnitNormMap.
*     name
*        Pointer to a constant null-terminated character string which contains
*        the name of the class to which the new object belongs (it is this
*        pointer value that will subsequently be returned by the astGetClass
*        method).
*     ncoord
*        The number of coordinate values per point.
*     centre
*        Pointer to an array of centres, one for each coordinate.

*  Returned Value:
*     A pointer to the new UnitNormMap.

*  Notes:
*     -  A null pointer will be returned if this function is invoked with the
*     global error status set, or if it should fail for any reason.
*-
*/

/* Local Variables: */
   AstUnitNormMap *new;            /* Pointer to new UnitNormMap */

/* Check the global status. */
   if( !astOK ) return NULL;

/* Check centre */
   if( ncoord <= 0 ){
      astError( AST__BADSM, "The centre must have at least one axis", status );
      return NULL;
   }

/* If necessary, initialise the virtual function table. */
   if( init ) astInitUnitNormMapVtab( vtab, name );

/* Initialise. */
   new = NULL;

/* Initialise a Mapping structure (the parent class) as the first component
   within the UnitNormMap structure, allocating memory if necessary. Specify that
   the Mapping should be defined in both the forward and inverse directions. */
   new = (AstUnitNormMap *) astInitMapping( mem, size, 0,
                                         (AstMappingVtab *) vtab, name,
                                         ncoord, ncoord+1, 1, 1 );

   if( astOK ) {

/* Initialise the UnitNormMap data. */
/* ---------------------------- */
/* Allocate memory to hold the centre for each axis. */
      new->centre = (double *) astMalloc( sizeof(double)*(size_t)ncoord );

/* Check the pointers can be used */
      if( astOK ){

/* Store the centre for each axis. */
         int axis = 0;
         for( axis = 0; axis < ncoord; axis++ ){
            (new->centre)[ axis ] = centre ? centre[ axis ] : AST__BAD;
         }

      }

/* If an error occurred, clean up by deleting the new UnitNormMap. */
      if( !astOK ) new = astDelete( new );
   }

/* Return a pointer to the new UnitNormMap. */
   return new;
}

AstUnitNormMap *astLoadUnitNormMap_( void *mem, size_t size,
                               AstUnitNormMapVtab *vtab, const char *name,
                               AstChannel *channel, int *status ) {
/*
*+
*  Name:
*     astLoadUnitNormMap

*  Purpose:
*     Load a UnitNormMap.

*  Type:
*     Protected function.

*  Synopsis:
*     #include "unitnormmap.h"
*     AstUnitNormMap *astLoadUnitNormMap( void *mem, size_t size,
*                                   AstUnitNormMapVtab *vtab, const char *name,
*                                   AstChannel *channel )

*  Class Membership:
*     UnitNormMap loader.

*  Description:
*     This function is provided to load a new UnitNormMap using data read
*     from a Channel. It first loads the data used by the parent class
*     (which allocates memory if necessary) and then initialises a
*     UnitNormMap structure in this memory, using data read from the input
*     Channel.
*
*     If the "init" flag is set, it also initialises the contents of a
*     virtual function table for a UnitNormMap at the start of the memory
*     passed via the "vtab" parameter.


*  Parameters:
*     mem
*        A pointer to the memory into which the UnitNormMap is to be
*        loaded.  This must be of sufficient size to accommodate the
*        UnitNormMap data (sizeof(UnitNormMap)) plus any data used by derived
*        classes. If a value of NULL is given, this function will
*        allocate the memory itself using the "size" parameter to
*        determine its size.
*     size
*        The amount of memory used by the UnitNormMap (plus derived class
*        data).  This will be used to allocate memory if a value of
*        NULL is given for the "mem" parameter. This value is also
*        stored in the UnitNormMap structure, so a valid value must be
*        supplied even if not required for allocating memory.
*
*        If the "vtab" parameter is NULL, the "size" value is ignored
*        and sizeof(AstUnitNormMap) is used instead.
*     vtab
*        Pointer to the start of the virtual function table to be
*        associated with the new UnitNormMap. If this is NULL, a pointer
*        to the (static) virtual function table for the UnitNormMap class
*        is used instead.
*     name
*        Pointer to a constant null-terminated character string which
*        contains the name of the class to which the new object
*        belongs (it is this pointer value that will subsequently be
*        returned by the astGetClass method).
*
*        If the "vtab" parameter is NULL, the "name" value is ignored
*        and a pointer to the string "UnitNormMap" is used instead.

*  Returned Value:
*     A pointer to the new UnitNormMap.

*  Notes:
*     - A null pointer will be returned if this function is invoked
*     with the global error status set, or if it should fail for any
*     reason.
*-
*/

/* Local Constants. */
#define KEY_LEN 50               /* Maximum length of a keyword */

/* Local Variables: */
   char buff[ KEY_LEN + 1 ];     /* Buffer for keyword string */
   int axis;                     /* Axis index */
   int ncoord;                   /* Length of the centre array */

/* Get a pointer to the thread specific global data structure. */
   astDECLARE_GLOBALS            /* Pointer to thread-specific global data */
   astGET_GLOBALS(channel);

/* Initialise. */
   AstUnitNormMap *new = NULL;

/* Check the global error status. */
   if( !astOK ) return new;

/* If a NULL virtual function table has been supplied, then this is
   the first loader to be invoked for this UnitNormMap. In this case the
   UnitNormMap belongs to this class, so supply appropriate values to be
   passed to the parent class loader (and its parent, etc.). */
   if( !vtab ) {
      size = sizeof( AstUnitNormMap );
      vtab = &class_vtab;
      name = "UnitNormMap";

/* If required, initialise the virtual function table for this class. */
      if( !class_init ) {
         astInitUnitNormMapVtab( vtab, name );
         class_init = 1;
      }
   }

/* Invoke the parent class loader to load data for all the ancestral
   classes of the current one, returning a pointer to the resulting
   partly-built UnitNormMap. */
   new = astLoadMapping( mem, size, (AstMappingVtab *) vtab, name,
                         channel );

/* Get the length of the centre array = the number of inputs in the
   forward direction. */
   ncoord = 0;
   if ( astGetInvert( (AstMapping *) new ) ){
      ncoord = astGetNout( (AstMapping *) new );
   } else {
      ncoord = astGetNin( (AstMapping *) new );
   }
   if( ncoord <= 0 && astOK ){
      astError( AST__LDERR, "The UnitNormMap has %d axes - it must have at least one.",
                status, ncoord );
      return NULL;
   }

/* Allocate memory to hold the centre. */
   new->centre = (double *) astMalloc( sizeof(double)*(size_t)ncoord );

/* Read input data. */
/* ================ */
/* Request the input Channel to read all the input data appropriate to
   this class into the internal "values list". */
   if( astOK ) {
      astReadClassData( channel, "UnitNormMap" );

/* Now read each individual data item from this list and use it to
   initialise the appropriate instance variable(s) for this class. */

/* The centre. */
      for( axis = 0; axis < ncoord; axis++ ){
         (void) sprintf( buff, "ctr%d", axis + 1 );
         (new->centre)[ axis ] = astReadDouble( channel, buff, 0.0 );
      }
   }

/* If an error occurred, clean up by deleting the new UnitNormMap. */
   if( !astOK ) new = astDelete( new );

/* Return the new UnitNormMap pointer. */
   return new;

/* Undefine macros local to this function. */
#undef KEY_LEN
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
