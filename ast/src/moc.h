#if !defined( MOC_INCLUDED ) /* Include this file only once */
#define MOC_INCLUDED
/*
*+
*  Name:
*     moc.h

*  Type:
*     C include file.

*  Purpose:
*     Define the interface to the Moc class.

*  Invocation:
*     #include "moc.h"

*  Description:
*     This include file defines the interface to the Moc class and
*     provides the type definitions, function prototypes and macros,
*     etc.  needed to use this class.
*
*     The Moc class describes an arbitrary region of sky using the IVOA
*     Multi-Order Coverage map scheme.

*  Inheritance:
*     The Moc class inherits from the Region class.

*  Feature Test Macros:
*     astCLASS
*        If the astCLASS macro is undefined, only public symbols are
*        made available, otherwise protected symbols (for use in other
*        class implementations) are defined. This macro also affects
*        the reporting of error context information, which is only
*        provided for external calls to the AST library.

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
*     11-OCT-2018 (DSB):
*        Original version.
*-
*/

/* Include files. */
/* ============== */
/* Interface definitions. */
/* ---------------------- */
#include "region.h"              /* Shapes within Frames */
#include "fitschan.h"            /* FITS keyword handling */
#include "xphmap.h"              /* For AST__MXORDHPX */

#if defined(astCLASS)            /* Protected */
#include "channel.h"             /* I/O channels */
#endif

/* C header files. */
/* --------------- */
#if defined(astCLASS)            /* Protected */
#include <stddef.h>
#endif

/* Macros */
/* ====== */

/* Define a dummy __attribute__ macro for use on non-GNU compilers. */
#ifndef __GNUC__
#  define  __attribute__(x)  /*NOTHING*/
#endif

/* Type Definitions. */
/* ================= */
/* Moc structure. */
/* ------------------ */
/* This structure contains all information that is unique to each object in
   the class (e.g. its instance variables). */
typedef struct AstMoc {

/* Attributes inherited from the parent class. */
   AstRegion region;       /* Parent class structure */

/* Attributes specific to objects in this class. */
   AstMapping *cached_maps[ AST__MXORDHPX + 1 ]; /* Cached sky->HPX12 Mappings */
   AstPointSet *basemesh;  /* Mesh of boundary points */
   AstRegion *unc;         /* Uncertainty Region for Moc */
   double lbnd[ 2 ];       /* Lower bounds in ICRS */
   double mocarea;         /* MOC area in sq arc-mins */
   double ubnd[ 2 ];       /* Upper bounds in ICRS */
   int *inorm;             /* Normalised form of 32 bit MOC */
   int *meshdist;          /* Index of Region's base mesh that traces perimeter */
   int mdlen;              /* Length of meshdist array */
   int maxorder;           /* HEALPix order giving MOC's best resolution */
   int minorder;           /* HEALPix order giving MOC's worst resolution */
   int moclength;          /* Length of normalised form */
   int nrange;             /* Number of nested index ranges */
   int64_t *knorm;         /* Normalised form of 64 bit MOC */
   int64_t *range;         /* Bounds of nested index ranges - (lo,hi) pairs */
} AstMoc;

/* Virtual function table. */
/* ----------------------- */
/* This table contains all information that is the same for all
   objects in the class (e.g. pointers to its virtual functions). */
#if defined(astCLASS)            /* Protected */
typedef struct AstMocVtab {

/* Properties (e.g. methods) inherited from the parent class. */
   AstRegionVtab region_vtab;    /* Parent class virtual function table */

/* A Unique identifier to determine class membership. */
   AstClassIdentifier id;

/* Properties (e.g. methods) specific to this class. */

#if HAVE_LONG_DOUBLE     /* Not normally implemented */
   void (* AddPixelMaskLD)( AstMoc *, int, AstFrameSet *, long double, int, int, long double, const long double[], const AstDim[2], int * );
#endif
   void (* AddPixelMaskB)(  AstMoc *, int, AstFrameSet *, signed char, int, int, signed char, const signed char[], const AstDim[2], int * );
   void (* AddPixelMaskD)(  AstMoc *, int, AstFrameSet *,      double, int, int, double,      const double[], const AstDim[2], int * );
   void (* AddPixelMaskF)(  AstMoc *, int, AstFrameSet *,       float, int, int, float,       const float[], const AstDim[2], int * );
   void (* AddPixelMaskI)(  AstMoc *, int, AstFrameSet *,         int, int, int, int,         const int[], const AstDim[2], int * );
   void (* AddPixelMaskL)(  AstMoc *, int, AstFrameSet *,    long int, int, int, long int,    const long int[], const AstDim[2], int * );
   void (* AddPixelMaskS)(  AstMoc *, int, AstFrameSet *,   short int, int, int, short int,   const short int[], const AstDim[2], int * );
   void (* AddPixelMaskUB)( AstMoc *, int, AstFrameSet *,      unsigned char, int, int, unsigned char,      const unsigned char[], const AstDim[2], int * );
   void (* AddPixelMaskUI)( AstMoc *, int, AstFrameSet *,       unsigned int, int, int, unsigned int,      const unsigned int[], const AstDim[2], int * );
   void (* AddPixelMaskUL)( AstMoc *, int, AstFrameSet *,  unsigned long int, int, int, unsigned long int, const unsigned long int[], const AstDim[2], int * );
   void (* AddPixelMaskUS)( AstMoc *, int, AstFrameSet *, unsigned short int, int, int, unsigned short int,const unsigned short int[], const AstDim[2], int * );

   void (* AddRegion)( AstMoc *, int, AstRegion *, int * );
   void (* AddCell)( AstMoc *, int, int, int64_t, int * );
   void (* AddMocData)( AstMoc *, int, int, int, int, int, const void *, int * );
   void (* GetMocData)( AstMoc *, size_t, void *, int * );
   void (* AddMocString)( AstMoc *, int, int, int, size_t, const char *, int *, int * );
   void (* GetMocString)( AstMoc *, int, size_t, char *, size_t *, int * );

   void (* GetCell)( AstMoc *, int, int *, int64_t *, int * );
   int (* TestCell)( AstMoc *, int, int64_t, int, int * );

   AstFitsChan *(* GetMocHeader)( AstMoc *, int * );
   double (* GetMocArea)( AstMoc *, int * );
   int (* GetMocType)( AstMoc *, int * );
   int (* GetMocLength)( AstMoc *, int * );

   int (* GetMaxOrder)( AstMoc *, int * );
   int (* TestMaxOrder)( AstMoc *, int * );
   void (* ClearMaxOrder)( AstMoc *, int * );
   void (* SetMaxOrder)( AstMoc *, int, int * );

   int (* GetMinOrder)( AstMoc *, int * );
   int (* TestMinOrder)( AstMoc *, int * );
   void (* ClearMinOrder)( AstMoc *, int * );
   void (* SetMinOrder)( AstMoc *, int, int * );

} AstMocVtab;

#if defined(THREAD_SAFE)

/* Define a structure holding all data items that are global within the
   object.c file. */

typedef struct AstMocGlobals {
   AstMocVtab Class_Vtab;
   int Class_Init;
   char GetAttrib_Buff[ 51 ];
   double Comp_Corner_tol;
   int Comp_Corner_exact;
   int Comp_Corner_loop;
   double *Comp_Decra_ptr1;
   double *Comp_Decra_ptr2;
} AstMocGlobals;


/* Thread-safe initialiser for all global data used by this module. */
void astInitMocGlobals_( AstMocGlobals * );

#endif


#endif

/* Function prototypes. */
/* ==================== */
/* Prototypes for standard class functions. */
/* ---------------------------------------- */
astPROTO_CHECK(Moc)          /* Check class membership */
astPROTO_ISA(Moc)            /* Test class membership */

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
AstMoc *astMoc_( const char *, int *, ...);
#else
AstMoc *astMocId_( const char *, ... )__attribute__((format(printf,1,2)));
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
AstMoc *astInitMoc_( void *, size_t, int, AstMocVtab *,
                     const char *, int * );

/* Vtab initialiser. */
void astInitMocVtab_( AstMocVtab *, const char *, int * );

/* Loader. */
AstMoc *astLoadMoc_( void *, size_t, AstMocVtab *,
                     const char *, AstChannel *, int * );

#endif

/* Prototypes for member functions. */
/* -------------------------------- */

void astAddRegion_( AstMoc *, int, AstRegion *, int * );

#if HAVE_LONG_DOUBLE     /* Not normally implemented */
void astAddPixelMask4LD_( AstMoc *, int, AstFrameSet *, long double, int, int, long double, const long double[], const int[2], int * );
#endif
void astAddPixelMask4B_(  AstMoc *, int, AstFrameSet *, signed char, int, int, signed char, const signed char[], const int[2], int * );
void astAddPixelMask4D_(  AstMoc *, int, AstFrameSet *,      double, int, int, double,      const double[], const int[2], int * );
void astAddPixelMask4F_(  AstMoc *, int, AstFrameSet *,       float, int, int, float,       const float[], const int[2], int * );
void astAddPixelMask4I_(  AstMoc *, int, AstFrameSet *,         int, int, int, int,         const int[], const int[2], int * );
void astAddPixelMask4L_(  AstMoc *, int, AstFrameSet *,    long int, int, int, long int,    const long int[], const int[2], int * );
void astAddPixelMask4S_(  AstMoc *, int, AstFrameSet *,   short int, int, int, short int,   const short int[], const int[2], int * );
void astAddPixelMask4UB_( AstMoc *, int, AstFrameSet *,      unsigned char, int, int, unsigned char,      const unsigned char[], const int[2], int * );
void astAddPixelMask4UI_( AstMoc *, int, AstFrameSet *,       unsigned int, int, int, unsigned int,      const unsigned int[], const int[2], int * );
void astAddPixelMask4UL_( AstMoc *, int, AstFrameSet *,  unsigned long int, int, int, unsigned long int, const unsigned long int[], const int[2], int * );
void astAddPixelMask4US_( AstMoc *, int, AstFrameSet *, unsigned short int, int, int, unsigned short int,const unsigned short int[], const int[2], int * );

#if HAVE_LONG_DOUBLE     /* Not normally implemented */
void astAddPixelMask8LD_( AstMoc *, int, AstFrameSet *, long double, int, int, long double, const long double[], const AstDim[2], int * );
#endif
void astAddPixelMask8B_(  AstMoc *, int, AstFrameSet *, signed char, int, int, signed char, const signed char[], const AstDim[2], int * );
void astAddPixelMask8D_(  AstMoc *, int, AstFrameSet *,      double, int, int, double,      const double[], const AstDim[2], int * );
void astAddPixelMask8F_(  AstMoc *, int, AstFrameSet *,       float, int, int, float,       const float[], const AstDim[2], int * );
void astAddPixelMask8I_(  AstMoc *, int, AstFrameSet *,         int, int, int, int,         const int[], const AstDim[2], int * );
void astAddPixelMask8L_(  AstMoc *, int, AstFrameSet *,    long int, int, int, long int,    const long int[], const AstDim[2], int * );
void astAddPixelMask8S_(  AstMoc *, int, AstFrameSet *,   short int, int, int, short int,   const short int[], const AstDim[2], int * );
void astAddPixelMask8UB_( AstMoc *, int, AstFrameSet *,      unsigned char, int, int, unsigned char,      const unsigned char[], const AstDim[2], int * );
void astAddPixelMask8UI_( AstMoc *, int, AstFrameSet *,       unsigned int, int, int, unsigned int,      const unsigned int[], const AstDim[2], int * );
void astAddPixelMask8UL_( AstMoc *, int, AstFrameSet *,  unsigned long int, int, int, unsigned long int, const unsigned long int[], const AstDim[2], int * );
void astAddPixelMask8US_( AstMoc *, int, AstFrameSet *, unsigned short int, int, int, unsigned short int,const unsigned short int[], const AstDim[2], int * );

void astGetCell_( AstMoc *, int, int *, int64_t *, int * );
void astAddCell_( AstMoc *, int, int, int64_t, int * );
void astAddMocData_( AstMoc *, int, int, int, int, int, const void *, int * );
void astGetMocData_( AstMoc *, size_t, void *, int * );
void astAddMocString_( AstMoc *, int, int, int, size_t, const char *, int *, int * );
void astGetMocString_( AstMoc *, int, size_t, char *, size_t *, int * );
int astTestCell_( AstMoc *, int, int64_t, int, int * );
AstFitsChan *astGetMocHeader_( AstMoc *, int * );

# if defined(astCLASS)           /* Protected */
void astMocNorm_( AstMoc *, int, int, int, int, const char *, int *);
void astAddMocText_( AstMoc *, int, const char *(*)( void *, size_t *, int * ), void *, const char *, int *, int * );
void astGetMocText_( AstMoc *, int, size_t, void (*)( void *, size_t, const char *, int * ), void *, const char *, int * );

int astGetMocType_( AstMoc *, int * );
double astGetMocArea_( AstMoc *, int * );
int astGetMocLength_( AstMoc *, int * );

int astGetMaxOrder_( AstMoc *, int * );
int astTestMaxOrder_( AstMoc *, int * );
void astClearMaxOrder_( AstMoc *, int * );
void astSetMaxOrder_( AstMoc *, int, int * );

int astGetMinOrder_( AstMoc *, int * );
int astTestMinOrder_( AstMoc *, int * );
void astClearMinOrder_( AstMoc *, int * );
void astSetMinOrder_( AstMoc *, int, int * );
#endif

/* Function interfaces. */
/* ==================== */
/* These macros are wrap-ups for the functions defined by this class
   to make them easier to invoke (e.g. to avoid type mis-matches when
   passing pointers to objects from derived classes). */

/* Interfaces to standard class functions. */
/* --------------------------------------- */
/* Some of these functions provide validation, so we cannot use them
   to validate their own arguments. We must use a cast when passing
   object pointers (so that they can accept objects from derived
   classes). */

/* Check class membership. */
#define astCheckMoc(this) astINVOKE_CHECK(Moc,this,0)
#define astVerifyMoc(this) astINVOKE_CHECK(Moc,this,1)

/* Test class membership. */
#define astIsAMoc(this) astINVOKE_ISA(Moc,this)

/* Constructor. */
#if defined(astCLASS)            /* Protected. */
#define astMoc astINVOKE(F,astMoc_)
#else
#define astMoc astINVOKE(F,astMocId_)
#endif

#if defined(astCLASS)            /* Protected */

/* Initialiser. */
#define astInitMoc(mem,size,init,vtab,name) \
astINVOKE(O,astInitMoc_(mem,size,init,vtab,name,STATUS_PTR))

/* Vtab Initialiser. */
#define astInitMocVtab(vtab,name) astINVOKE(V,astInitMocVtab_(vtab,name,STATUS_PTR))

/* Loader. */
#define astLoadMoc(mem,size,vtab,name,channel) \
astINVOKE(O,astLoadMoc_(mem,size,vtab,name,astCheckChannel(channel),STATUS_PTR))
#endif

/* Interfaces to public member functions. */
/* -------------------------------------- */
/* Here we make use of astCheckMoc to validate Moc pointers
   before use.  This provides a contextual error report if a pointer
   to the wrong sort of Object is supplied. */

#define astAddRegion(this,cmode,region) \
astINVOKE(V,astAddRegion_(astCheckMoc(this),cmode,astCheckRegion(region),STATUS_PTR))
#define astAddMocData(this,cmode,negate,maxorder,len,nbyte,data) \
astINVOKE(V,astAddMocData_(astCheckMoc(this),cmode,negate,maxorder,len,nbyte,data,STATUS_PTR))
#define astAddMocString(this,cmode,negate,maxorder,len,string,json) \
astINVOKE(V,astAddMocString_(astCheckMoc(this),cmode,negate,maxorder,len,string,json,STATUS_PTR))
#define astGetMocString(this,json,mxsize,string,size) \
astINVOKE(V,astGetMocString_(astCheckMoc(this),json,mxsize,string,size,STATUS_PTR))

#define astAddCell(this,cmode,order,npix) \
astINVOKE(V,astAddCell_(astCheckMoc(this),cmode,order,npix,STATUS_PTR))
#define astTestCell(this,order,npix,parent) \
astINVOKE(V,astTestCell_(astCheckMoc(this),order,npix,parent,STATUS_PTR))
#define astGetCell(this,icell,order,npix) \
astINVOKE(V,astGetCell_(astCheckMoc(this),icell,order,npix,STATUS_PTR))

#if HAVE_LONG_DOUBLE
#define astAddPixelMaskLD(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMaskLD_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#endif
#define astAddPixelMaskB(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask4B_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMaskD(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask4D_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMaskF(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask4F_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMaskI(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask4I_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMaskL(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask4L_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMaskS(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask4S_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMaskUB(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask4UB_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMaskUI(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask4UI_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMaskUL(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask4UL_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMaskUS(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask4US_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))

#if HAVE_LONG_DOUBLE
#define astAddPixelMask8LD(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask8LD_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#endif
#define astAddPixelMask8B(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask8B_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMask8D(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask8D_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMask8F(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask8F_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMask8I(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask8I_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMask8L(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask8L_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMask8S(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask8S_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMask8UB(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask8UB_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMask8UI(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask8UI_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMask8UL(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask8UL_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))
#define astAddPixelMask8US(this,cmode,wcs,value,oper,flags,badval,array,dims) \
astINVOKE(V,astAddPixelMask8US_(astCheckMoc(this),cmode,astCheckFrameSet(wcs),value,oper,flags,badval,array,dims,STATUS_PTR))

#define astGetMocData(this,mxsize,data) \
astINVOKE(V,astGetMocData_(astCheckMoc(this),mxsize,data,STATUS_PTR))
#define astGetMocHeader(this) \
astINVOKE(O,astGetMocHeader_(astCheckMoc(this),STATUS_PTR))


#if defined(astCLASS)            /* Protected */

#define astMocNorm(this,negate,cmode,nold,maxorder,method) \
astMocNorm_(astCheckMoc(this),negate,cmode,nold,maxorder,method,STATUS_PTR)
#define astAddMocText(this,maxorder,source,data,method,json) \
astAddMocText_(this,maxorder,source,data,method,json,STATUS_PTR)
#define astGetMocText(this,json,buflen,sink,data,method) \
astGetMocText_(astCheckMoc(this),json,buflen,sink,data,method,STATUS_PTR)

#define astGetMocType(this) \
astINVOKE(V,astGetMocType_(astCheckMoc(this),STATUS_PTR))
#define astGetMocLength(this) \
astINVOKE(V,astGetMocLength_(astCheckMoc(this),STATUS_PTR))
#define astGetMocArea(this) \
astINVOKE(V,astGetMocArea_(astCheckMoc(this),STATUS_PTR))

#define astClearMaxOrder(this) \
astINVOKE(V,astClearMaxOrder_(astCheckMoc(this),STATUS_PTR))
#define astGetMaxOrder(this) \
astINVOKE(V,astGetMaxOrder_(astCheckMoc(this),STATUS_PTR))
#define astSetMaxOrder(this,value) \
astINVOKE(V,astSetMaxOrder_(astCheckMoc(this),value,STATUS_PTR))
#define astTestMaxOrder(this) \
astINVOKE(V,astTestMaxOrder_(astCheckMoc(this),STATUS_PTR))

#define astClearMinOrder(this) \
astINVOKE(V,astClearMinOrder_(astCheckMoc(this),STATUS_PTR))
#define astGetMinOrder(this) \
astINVOKE(V,astGetMinOrder_(astCheckMoc(this),STATUS_PTR))
#define astSetMinOrder(this,value) \
astINVOKE(V,astSetMinOrder_(astCheckMoc(this),value,STATUS_PTR))
#define astTestMinOrder(this) \
astINVOKE(V,astTestMinOrder_(astCheckMoc(this),STATUS_PTR))
#endif
#endif





