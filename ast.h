#if !defined(AST_INCLUDED)
#define AST_INCLUDED
/*
*+
*  Name:
*     ast.h

*  Purpose:
*     Define the public C interface to the AST library.

*  Language:
*     ANSI C

*  Type of Module:
*     C header file.

*  Description:
*     This file defines the public C interface to the AST library. It contains
*     all the type definitions, function prototypes, macro definitions, etc.
*     needed to use the library.

*  Copyright:
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
*     DSB: D.S. Berry (STARLINK)
*     RFWS: R.F. Warren-Smith (STARLINK)
*     {enter_new_authors_here}

*  History:
*     21-DEC-2016 (makeh):
*        Original version, generated automatically from the internal header
*        files by the "makeh" script.
*     {enter_changes_here}
*-
*/

/* Define a dummy __attribute__ macro for use on non-GNU compilers. */
#ifndef __GNUC__
#  define  __attribute__(x)  /*NOTHING*/
#endif

/* xml. */
/* ==== */

#define AST__XMLBAD 0
#define AST__XMLOBJECT 198263577
#define AST__XMLELEM 182874779
#define AST__XMLATTR 837746634
#define AST__XMLCDATA 293854662
#define AST__XMLCOM 748737648
#define AST__XMLPI 983763553
#define AST__XMLNAME 236756469
#define AST__XMLDOC 356274395
#define AST__XMLPRO 743682474
#define AST__XMLDEC 987546328
#define AST__XMLDTD 874673747
#define AST__XMLWHITE 675849952
#define AST__XMLBLACK 347657863

#define AST__XMLCHAR 456739289
#define AST__XMLCONT 673882993
#define AST__XMLMISC 358768954
#define AST__XMLPAR 874366235

#define AST__XML_GETTAG_BUFF_LEN 200

typedef struct AstXmlObject AstXmlObject;
typedef struct AstXmlAttribute AstXmlAttribute;
typedef struct AstXmlNamespace AstXmlNamespace;
typedef struct AstXmlElement AstXmlElement;
typedef struct AstXmlBlack AstXmlBlack;
typedef struct AstXmlWhite AstXmlWhite;
typedef struct AstXmlCDataSection AstXmlCDataSection;
typedef struct AstXmlComment AstXmlComment;
typedef struct AstXmlPI AstXmlPI;
typedef struct AstXmlDocument AstXmlDocument;
typedef struct AstXmlPrologue AstXmlPrologue;
typedef struct AstXmlDeclPI AstXmlDeclPI;
typedef struct AstXmlDTDec AstXmlDTDec;

typedef AstXmlObject AstXmlCharData;

typedef AstXmlObject AstXmlContentItem;

typedef AstXmlObject AstXmlMiscItem;

typedef AstXmlObject AstXmlParent;

struct AstXmlObject {
   AstXmlParent *parent;
   long int type;
   int id;
};

struct AstXmlAttribute {
   AstXmlObject obj;
   char *name;
   char *value;
   char *prefix;
};

struct AstXmlNamespace {
   AstXmlObject obj;
   char *prefix;
   char *uri;
};

struct AstXmlElement {
   AstXmlObject obj;
   char *name;
   AstXmlAttribute **attrs;
   int nattr;
   AstXmlContentItem **items;
   int nitem;
   char *defns;
   char *prefix;
   AstXmlNamespace **nsprefs;
   int nnspref;
   int complete;
};

struct AstXmlBlack {
   AstXmlObject obj;
   char *text;
};

struct AstXmlWhite {
   AstXmlObject obj;
   char *text;
};

struct AstXmlCDataSection {
   AstXmlObject obj;
   char *text;
};

struct AstXmlComment {
   AstXmlObject obj;
   char *text;
};

struct AstXmlPI {
   AstXmlObject obj;
   char *target;
   char *text;
};

struct AstXmlDocument {
   AstXmlObject obj;
   AstXmlPrologue *prolog;
   AstXmlElement *root;
   AstXmlMiscItem **epilog;
   int nepi;
   AstXmlElement *current;
};

struct AstXmlPrologue {
   AstXmlObject obj;
   AstXmlDeclPI *xmldecl;
   AstXmlMiscItem **misc1;
   int nmisc1;
   AstXmlDTDec *dtdec;
   AstXmlMiscItem **misc2;
   int nmisc2;
};

struct AstXmlDeclPI {
   AstXmlObject obj;
   char *text;
};

struct AstXmlDTDec {
   AstXmlObject obj;
   char *name;
   char *external;
   char *internal;
};
AstXmlAttribute *astXmlCheckAttribute_( void *, int, int * );
AstXmlBlack *astXmlCheckBlack_( void *, int, int * );
AstXmlCDataSection *astXmlCheckCDataSection_( void *, int, int * );
AstXmlComment *astXmlCheckComment_( void *, int, int * );
AstXmlContentItem *astXmlGetItem_( AstXmlElement *, int, int * );
AstXmlDTDec *astXmlCheckDTDec_( void *, int, int * );
AstXmlDeclPI *astXmlCheckDeclPI_( void *, int, int * );
AstXmlDocument *astXmlCheckDocument_( void *, int, int * );
AstXmlElement *astXmlAddElement_( AstXmlElement *, const char *, const char *, int * );
AstXmlElement *astXmlCheckElement_( void *, int, int * );
AstXmlParent *astXmlGetParent_( AstXmlObject *, int * );
AstXmlObject *astXmlGetRoot_( AstXmlObject *, int * );
AstXmlElement *astXmlReadDocument_( AstXmlDocument **, int (*)( AstXmlElement *, int * ), int, char (*)( void *, int * ), void *, int * );
AstXmlNamespace *astXmlCheckNamespace_( void *, int, int * );
AstXmlObject *astXmlCopy_( AstXmlObject *, int * );
AstXmlObject *astXmlCheckObject_( void *, int, int * );
AstXmlPI *astXmlCheckPI_( void *, int, int * );
AstXmlPrologue *astXmlCheckPrologue_( void *, int, int * );
AstXmlWhite *astXmlCheckWhite_( void *, int, int * );
AstXmlCharData *astXmlCheckCharData_( void *, int, int * );
AstXmlContentItem *astXmlCheckContentItem_( void *, int, int * );
AstXmlMiscItem *astXmlCheckMiscItem_( void *, int, int * );
AstXmlParent *astXmlCheckParent_( void *, int, int * );
const char *astXmlFormat_( AstXmlObject *, int * );
const char *astXmlGetAttributeValue_( AstXmlElement *, const char *, int * );
const char *astXmlGetName_( AstXmlObject *, int * );
const char *astXmlGetTag_( AstXmlObject *, int, int * );
const char *astXmlGetType_( AstXmlObject *, int * );
const char *astXmlGetURI_( AstXmlObject *, int * );
const char *astXmlGetValue_( AstXmlObject *, int, int * );
const char *astXmlShow_( AstXmlObject *, int * );
int astXmlCheckType_( void *, long int, int * );
int astXmlGetNattr_( AstXmlElement *, int * );
int astXmlGetNitem_( AstXmlElement *, int * );
void *astXmlAnnulTree_( AstXmlObject *, int * );
void *astXmlAnnul_( AstXmlObject *, int * );
void *astXmlDelete_( void *, int * );
void astXmlAddAttr_( AstXmlElement *, const char *, const char *, const char *, int * );
void astXmlAddCDataSection_( AstXmlElement *, const char *, int * );
void astXmlAddCharData_( AstXmlParent *, int, const char *, int * );
void astXmlAddComment_( AstXmlParent *, int, const char *, int * );
void astXmlAddPI_( AstXmlParent *, int, const char *, const char *, int * );
void astXmlAddURI_( AstXmlElement *, const char *, const char *, int * );
void astXmlInsertElement_( AstXmlElement *, AstXmlElement *, int * );
void astXmlPurge_( AstXmlParent *, int * );
void astXmlRemoveAttr_( AstXmlElement *, const char *, const char *, int * );
void astXmlRemoveItem_( AstXmlContentItem *, int * );
void astXmlRemoveURI_( AstXmlElement *, const char *, int * );
void astXmlSetXmlDec_( AstXmlDocument *, const char *, int * );
void astXmlSetDTDec_( AstXmlDocument *, const char *, const char *, const char *, int * );
#define astXmlGetType(this) astXmlGetType_(this,STATUS_PTR)
#define astXmlCheckAttribute(this,nullok) astXmlCheckAttribute_(this,nullok,STATUS_PTR)
#define astXmlCheckBlack(this,nullok) astXmlCheckBlack_(this,nullok,STATUS_PTR)
#define astXmlCheckCDataSection(this,nullok) astXmlCheckCDataSection_(this,nullok,STATUS_PTR)
#define astXmlCheckCharData(this,nullok) astXmlCheckCharData_(this,nullok,STATUS_PTR)
#define astXmlCheckComment(this,nullok) astXmlCheckComment_(this,nullok,STATUS_PTR)
#define astXmlCheckContentItem(this,nullok) astXmlCheckContentItem_(this,nullok,STATUS_PTR)
#define astXmlCheckDTDec(this,nullok) astXmlCheckDTDec_(this,nullok,STATUS_PTR)
#define astXmlCheckDeclPI(this,nullok) astXmlCheckDeclPI_(this,nullok,STATUS_PTR)
#define astXmlCheckDocument(this,nullok) astXmlCheckDocument_(this,nullok,STATUS_PTR)
#define astXmlCheckElement(this,nullok) astXmlCheckElement_(this,nullok,STATUS_PTR)
#define astXmlCheckMiscItem(this,nullok) astXmlCheckMiscItem_(this,nullok,STATUS_PTR)
#define astXmlCheckNamespace(this,nullok) astXmlCheckNamespace_(this,nullok,STATUS_PTR)
#define astXmlCheckObject(this,nullok) astXmlCheckObject_(this,nullok,STATUS_PTR)
#define astXmlCheckPI(this,nullok) astXmlCheckPI_(this,nullok,STATUS_PTR)
#define astXmlCheckParent(this,nullok) astXmlCheckParent_(this,nullok,STATUS_PTR)
#define astXmlCheckPrologue(this,nullok) astXmlCheckPrologue_(this,nullok,STATUS_PTR)
#define astXmlCheckWhite(this,nullok) astXmlCheckWhite_(this,nullok,STATUS_PTR)

#define astXmlAddAttr(elem,name,value,prefix) astXmlAddAttr_(astXmlCheckElement(elem,0),name,value,prefix,STATUS_PTR)
#define astXmlAddURI(elem,prefix,uri) astXmlAddURI_(astXmlCheckElement(elem,0),prefix,uri,STATUS_PTR)
#define astXmlAnnul(this) astXmlAnnul_(astXmlCheckObject(this,1),STATUS_PTR)
#define astXmlDelete(this) astXmlDelete_(this,STATUS_PTR)
#define astXmlAnnulTree(this) astXmlAnnulTree_(astXmlCheckObject(this,1),STATUS_PTR)
#define astXmlAddCDataSection(this,text) astXmlAddCDataSection_(astXmlCheckElement(this,0),text,STATUS_PTR)
#define astXmlAddCharData(this,where,text) astXmlAddCharData_(astXmlCheckParent(this,0),where,text,STATUS_PTR)
#define astXmlAddComment(this,where,text) astXmlAddComment_(astXmlCheckParent(this,0),where,text,STATUS_PTR)
#define astXmlAddElement(this,name,prefix) astXmlAddElement_(astXmlCheckElement(this,1),name,prefix,STATUS_PTR)
#define astXmlAddPI(this,where,target,text) astXmlAddPI_(astXmlCheckParent(this,0),where,target,text,STATUS_PTR)
#define astXmlGetParent(this) astXmlGetParent_(astXmlCheckObject(this,0),STATUS_PTR)
#define astXmlGetRoot(this) astXmlGetRoot_(astXmlCheckObject(this,0),STATUS_PTR)
#define astXmlGetName(this) astXmlGetName_(astXmlCheckObject(this,0),STATUS_PTR)
#define astXmlGetValue(this,report) astXmlGetValue_(astXmlCheckObject(this,0),report,STATUS_PTR)
#define astXmlGetAttributeValue(this,name) astXmlGetAttributeValue_(astXmlCheckElement(this,0),name,STATUS_PTR)
#define astXmlGetNattr(this) astXmlGetNattr_(astXmlCheckElement(this,0),STATUS_PTR)
#define astXmlGetNitem(this) astXmlGetNitem_(astXmlCheckElement(this,0),STATUS_PTR)
#define astXmlGetItem(this,item) astXmlGetItem_(astXmlCheckElement(this,0),item,STATUS_PTR)
#define astXmlGetAttributeValue(this,name) astXmlGetAttributeValue_(astXmlCheckElement(this,0),name,STATUS_PTR)
#define astXmlGetTag(this,opening) astXmlGetTag_(astXmlCheckObject(this,0),opening,STATUS_PTR)
#define astXmlGetURI(this) astXmlGetURI_(astXmlCheckObject(this,0),STATUS_PTR)
#define astXmlFormat(this) astXmlFormat_(astXmlCheckObject(this,0),STATUS_PTR)
#define astXmlShow(this) astXmlShow_(astXmlCheckObject(this,0),STATUS_PTR)
#define astXmlRemoveItem(this) astXmlRemoveItem_(astXmlCheckContentItem(this,0),STATUS_PTR)
#define astXmlRemoveAttr(this,name,prefix) astXmlRemoveAttr_(astXmlCheckElement(this,0),name,prefix,STATUS_PTR)
#define astXmlRemoveURI(this,prefix) astXmlRemoveURI_(astXmlCheckElement(this,0),prefix,STATUS_PTR)
#define astXmlReadDocument(doc,is_wanted,skip,source,data) astXmlReadDocument_(doc,is_wanted,skip,source,data,STATUS_PTR)
#define astXmlInsertElement(this,elem) astXmlInsertElement_(astXmlCheckElement(this,0),astXmlCheckElement(elem,0),STATUS_PTR)
#define astXmlPurge(this) astXmlPurge_(astXmlCheckParent(this,1),STATUS_PTR)
#define astXmlSetXmlDec(this,text) astXmlSetXmlDec_(astXmlCheckDocument(this,0),text,STATUS_PTR)
#define astXmlSetDTDec(this,text1,text2,text3) astXmlSetDTDec_(astXmlCheckDocument(this,0),text1,text2,text3,STATUS_PTR)
#define astXmlCheckType(this,type) astXmlCheckType_(this,type,STATUS_PTR)
#define astXmlCopy(this) astXmlCopy_(astXmlCheckObject(this,1),STATUS_PTR)
/* wcstrig. */
/* ======== */

double astCosd(const double);
double astSind(const double);
double astTand(const double);
double astACosd(const double);
double astASind(const double);
double astATand(const double);
double astATan2d(const double, const double);

#define WCSTRIG_TOL 1e-10
/* proj. */
/* ===== */

#define WCSLIB_MXPAR 100

extern int npcode;
extern char pcodes[26][4];

struct AstPrjPrm {
   char code[4];
   int flag;
   double phi0, theta0;
   double r0;
   double *p;
   double *p2;
   double w[20];
   int n;
   int (*astPRJfwd)(const double, const double,
                 struct AstPrjPrm *,
                 double *, double *);
   int (*astPRJrev)(const double, const double,
                 struct AstPrjPrm *,
                 double *, double *);
};

   int astPRJset(const char [], struct AstPrjPrm *);
   int astPRJfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astPRJrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astAZPset(struct AstPrjPrm *);
   int astAZPfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astAZPrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astSZPset(struct AstPrjPrm *);
   int astSZPfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astSZPrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astTANset(struct AstPrjPrm *);
   int astTANfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astTANrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astSTGset(struct AstPrjPrm *);
   int astSTGfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astSTGrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astSINset(struct AstPrjPrm *);
   int astSINfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astSINrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astARCset(struct AstPrjPrm *);
   int astARCfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astARCrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astZPNset(struct AstPrjPrm *);
   int astZPNfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astZPNrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astZEAset(struct AstPrjPrm *);
   int astZEAfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astZEArev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astAIRset(struct AstPrjPrm *);
   int astAIRfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astAIRrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCYPset(struct AstPrjPrm *);
   int astCYPfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCYPrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCEAset(struct AstPrjPrm *);
   int astCEAfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCEArev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCARset(struct AstPrjPrm *);
   int astCARfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCARrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astMERset(struct AstPrjPrm *);
   int astMERfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astMERrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astSFLset(struct AstPrjPrm *);
   int astSFLfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astSFLrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astPARset(struct AstPrjPrm *);
   int astPARfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astPARrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astMOLset(struct AstPrjPrm *);
   int astMOLfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astMOLrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astAITset(struct AstPrjPrm *);
   int astAITfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astAITrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCOPset(struct AstPrjPrm *);
   int astCOPfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCOPrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCOEset(struct AstPrjPrm *);
   int astCOEfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCOErev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCODset(struct AstPrjPrm *);
   int astCODfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCODrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCOOset(struct AstPrjPrm *);
   int astCOOfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCOOrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astBONset(struct AstPrjPrm *);
   int astBONfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astBONrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astPCOset(struct AstPrjPrm *);
   int astPCOfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astPCOrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astTSCset(struct AstPrjPrm *);
   int astTSCfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astTSCrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCSCset(struct AstPrjPrm *);
   int astCSCfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astCSCrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astQSCset(struct AstPrjPrm *);
   int astQSCfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astQSCrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astHPXset(struct AstPrjPrm *);
   int astHPXfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astHPXrev(const double, const double, struct AstPrjPrm *, double *, double *);
   int astXPHset(struct AstPrjPrm *);
   int astXPHfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astXPHrev(const double, const double, struct AstPrjPrm *, double *, double *);

   int astTPNset(struct AstPrjPrm *);
   int astTPNfwd(const double, const double, struct AstPrjPrm *, double *, double *);
   int astTPNrev(const double, const double, struct AstPrjPrm *, double *, double *);

extern const char *astPRJset_errmsg[];
extern const char *astPRJfwd_errmsg[];
extern const char *astPRJrev_errmsg[];
/* memory. */
/* ======= */

#include <stddef.h>

#define astERROR_INVOKE(function) (astAt_(NULL,__FILE__,__LINE__,0,astGetStatusPtr),(function))
typedef struct AstErrorContext {
   int reporting;
   int ok;
   int status;
} AstErrorContext;
int *astWatch_( int * );
void astClearStatus_( int * );
int *astGetStatusPtr_( void )__attribute__((pure));
void astAt_( const char *, const char *, int, int, int * );
void astErrorPublic_( int, const char *, ... )__attribute__((format(printf,2,3)));
#define astWatch(status_ptr) astWatch_(status_ptr)
#define astGetStatusPtr astGetStatusPtr_()
#define astOK (astStatus==0)
#define astSetStatus(status_value) (astStatus=(status_value))
#define astAt(routine,file,line) astAt_(routine,file,line,1,astGetStatusPtr)
#define astClearStatus astClearStatus_(astGetStatusPtr)
#define astStatus (*astGetStatusPtr)
#define astError astErrorPublic_

#define STATUS_PTR astGetStatusPtr

#define AST__TUNULL -99999
#define AST__TUNULLC "<NOTUNEPAR>"
int astMemCaching_( int, int * );
void astChrCase_( const char *, char *, int, int, int * );
char **astChrSplit_( const char *, int *, int * );
char **astChrSplitRE_( const char *, const char *, int *, const char **, int * );
char **astChrSplitC_( const char *, char, int *, int * );
int astChrMatch_( const char *, const char *, int * );
int astChrMatchN_( const char *, const char *, size_t, int * );
char **astStringArray_( const char *, int, int, int * );
char *astStringCase_( const char *, int, int * );
char *astString_( const char *, int, int * );
int astSscanf_( const char *str, const char *format, ...);
size_t astSizeOf_( const void *, int * );
int astIsDynamic_( const void *, int * );
size_t astTSizeOf_( const void *, int * );
void *astFree_( void *, int * );
void *astFreeDouble_( void *, int * );
void *astGrow_( void *, int, size_t, int * );
void *astCalloc_( size_t, size_t, int * );
void *astMalloc_( size_t, int, int * );
void *astRealloc_( void *, size_t, int * );
void *astStore_( void *, const void *, size_t, int * );
size_t astChrLen_( const char *, int * );
double astChr2Double_( const char *, int * );
void astRemoveLeadingBlanks_( char *, int * );
char *astAppendString_( char *, int *, const char *, int * );
char *astAppendStringf_( char *, int *, const char *, ... )__attribute__((format(printf,3,4)));
char *astChrSub_( const char *, const char *, const char *[], int, int * );
void astChrTrunc_( char *, int * );
#define astCalloc(nmemb,size) astERROR_INVOKE(astCalloc_(nmemb,size,STATUS_PTR))
#define astChrMatch(str1,str2) astERROR_INVOKE(astChrMatch_(str1,str2,STATUS_PTR))
#define astChrMatchN(str1,str2,n) astERROR_INVOKE(astChrMatchN_(str1,str2,n,STATUS_PTR))
#define astFree(ptr) astERROR_INVOKE(astFree_(ptr,STATUS_PTR))
#define astFreeDouble(ptr) astERROR_INVOKE(astFreeDouble_(ptr,STATUS_PTR))
#define astGrow(ptr,n,size) astERROR_INVOKE(astGrow_(ptr,n,size,STATUS_PTR))
#define astMalloc(size) astERROR_INVOKE(astMalloc_(size,0,STATUS_PTR))
#define astMemCaching(flag) astERROR_INVOKE(astMemCaching_(flag,STATUS_PTR))
#define astRealloc(ptr,size) astERROR_INVOKE(astRealloc_(ptr,size,STATUS_PTR))
#define astSizeOf(ptr) astERROR_INVOKE(astSizeOf_(ptr,STATUS_PTR))
#define astIsDynamic(ptr) astERROR_INVOKE(astIsDynamic_(ptr,STATUS_PTR))
#define astTSizeOf(ptr) astERROR_INVOKE(astTSizeOf_(ptr,STATUS_PTR))
#define astStore(ptr,data,size) astERROR_INVOKE(astStore_(ptr,data,size,STATUS_PTR))
#define astAppendString(str1,nc,str2) astERROR_INVOKE(astAppendString_(str1,nc,str2,STATUS_PTR))
#define astAppendStringf astAppendStringf_
#define astString(chars,nchars) astERROR_INVOKE(astString_(chars,nchars,STATUS_PTR))
#define astStringArray(chars,nel,len) astERROR_INVOKE(astStringArray_(chars,nel,len,STATUS_PTR))
#define astStringCase(string,toupper) astERROR_INVOKE(astStringCase_(string,toupper,STATUS_PTR))
#define astChrLen(string) astERROR_INVOKE(astChrLen_(string,STATUS_PTR))
#define astChrTrunc(string) astERROR_INVOKE(astChrTrunc_(string,STATUS_PTR))
#define astChr2Double(string) astERROR_INVOKE(astChr2Double_(string,STATUS_PTR))
#define astRemoveLeadingBlanks(string) astERROR_INVOKE(astRemoveLeadingBlanks_(string,STATUS_PTR))
#define astChrSub(test,template,subs,nsub) astERROR_INVOKE(astChrSub_(test,template,subs,nsub,STATUS_PTR))
#define astChrCase(in,out,upper,blen) astERROR_INVOKE(astChrCase_(in,out,upper,blen,STATUS_PTR))
#define astSscanf astERROR_INVOKE(sscanf)

#define astChrSplit(str,n) astERROR_INVOKE(astChrSplit_(str,n,STATUS_PTR))
#define astChrSplitC(str,c,n) astERROR_INVOKE(astChrSplitC_(str,c,n,STATUS_PTR))
#define astChrSplitRE(str,c,n,m) astERROR_INVOKE(astChrSplitRE_(str,c,n,m,STATUS_PTR))
#define astActiveMemory(label)
#define astMemoryTune(name,value)
#define astWatchMemory(id)
#define astCheckMemory
#define astFlushMemory(leak)
#define astBeginPM
#define astEndPM
#define astMemoryPtr(id) NULL
#define astMemoryAlarm(text)
#define astMemoryStats(reset,peak,current)
#define astMemoryUse(ptr,text)
#define astMemoryId(ptr)
#define astMemoryWarning(threshold)
/* error. */
/* ====== */

/* globals. */
/* ======== */

#define astDECLARE_GLOBALS
#define astGET_GLOBALS(This)
#define astINIT_GLOBALS
/* unit. */
/* ===== */

#define AST__VMAJOR 8
#define AST__VMINOR 3
#define AST__RELEASE 0

#define AST_MAJOR_VERS 8
#define AST_MINOR_VERS 3
#define AST_RELEASE 0

#include <stdarg.h>
#include <float.h>
#include <stdio.h>
#define STATUS_PTR astGetStatusPtr
#define AST__THREADSAFE 0
#define astINVOKE(rettype,function) astERROR_INVOKE(astRet##rettype##_(function))

#define astRetF_(x) (x)
#define astRetV_(x) (x)

#define astRetO_(x) ((void *)astMakeId_((AstObject *)(x),STATUS_PTR))
#define astINVOKE_CHECK(class,this,force) astCheck##class##_((Ast##class *)astEnsurePointer_(this),astGetStatusPtr)
#define astINVOKE_ISA(class,this) astINVOKE(V,astIsA##class##_((const Ast##class *)astEnsurePointer_(this),astGetStatusPtr))

#define astEnsurePointer_(x) ((void *)astCheckLock_(astMakePointer_((AstObject *)(x),STATUS_PTR),STATUS_PTR))
#define astPROTO_CHECK(class) Ast##class *astCheck##class##_( Ast##class *, int * );
#define astPROTO_ISA(class) int astIsA##class##_( const Ast##class *, int * );

#define astMAX(aa,bb) ((aa)>(bb)?(aa):(bb))
#define astMIN(aa,bb) ((aa)<(bb)?(aa):(bb))

#define astEQUALS(aa,bb,tol) (((aa)==AST__BAD)?(((bb)==AST__BAD)?1:0):(((bb)==AST__BAD)?0:(fabs((aa)-(bb))<=(tol)*astMAX((fabs(aa)+fabs(bb))*DBL_EPSILON,DBL_MIN))))
#define astEQUAL(aa,bb) astEQUALS(aa,bb,1.0E5)

#define AST__NULL (astI2P(0))
typedef struct AstObject {

   unsigned long check;
   size_t size;
   struct AstObjectVtab *vtab;
   char dynamic;
   int ref_count;
   char *id;
   char *ident;
   char usedefs;
   int iref;
   void *proxy;
} AstObject;

typedef struct AstClassIdentifier {
   int *check;
   struct AstClassIdentifier *parent;
} AstClassIdentifier;

struct AstChannel;
#define AST__CHANNEL_GETATTRIB_BUFF_LEN 50
struct AstKeyMap;

typedef struct AstChannel {

   AstObject object;

   const char *(* source)( void );
   char *(* source_wrap)( const char *(*)(void), int * );

   void (* sink)( const char * );
   void (* sink_wrap)( void (*)( const char *), const char *, int * );

   int comment;
   int full;
   int skip;
   int indent;
   int report_level;
   int strict;
   void *data;
   char **warnings;
   int nwarn;
   FILE *fd_in;
   char *fn_in;
   FILE *fd_out;
   char *fn_out;
} AstChannel;
astPROTO_CHECK(Channel)
astPROTO_ISA(Channel)

AstChannel *astChannelId_( const char *(*)( void ), void (*)( const char * ),
                           const char *, ... )__attribute__((format(printf,3,4)));
AstChannel *astChannelForId_( const char *(*)( void ),
                              char *(*)( const char *(*)( void ), int * ),
                              void (*)( const char * ),
                              void (*)( void (*)( const char * ),
                                        const char *, int * ),
                              const char *, ... );
AstObject *astRead_( AstChannel *, int * );
int astWrite_( AstChannel *, AstObject *, int * );
void astPutChannelData_( AstChannel *, void *, int * );
void *astChannelData_( void );
struct AstKeyMap *astWarnings_( AstChannel *, int * );

char *astSourceWrap_( const char *(*)( void ), int * );
void astSinkWrap_( void (*)( const char * ), const char *, int * );
#define astCheckChannel(this) astINVOKE_CHECK(Channel,this,0)
#define astVerifyChannel(this) astINVOKE_CHECK(Channel,this,1)

#define astIsAChannel(this) astINVOKE_ISA(Channel,this)

#define astChannel astINVOKE(F,astChannelId_)
#define astChannelFor astINVOKE(F,astChannelForId_)
#define astRead(this) astINVOKE(O,astRead_(astCheckChannel(this),STATUS_PTR))
#define astWrite(this,object) astINVOKE(V,astWrite_(astCheckChannel(this),astCheckObject(object),STATUS_PTR))
#define astPutChannelData(this,data) astINVOKE(V,astPutChannelData_(astCheckChannel(this),data,STATUS_PTR))
#define astWarnings(this) astINVOKE(O,astWarnings_(astCheckChannel(this),STATUS_PTR))

#define astSourceWrap astSourceWrap_
#define astSinkWrap astSinkWrap_
#define astChannelData astChannelData_()

astPROTO_CHECK(Object)
astPROTO_ISA(Object)
void astBegin_( void );
void astEnd_( int * );

AstObject *astI2P_( int, int * );
AstObject *astMakeId_( AstObject *, int * );
AstObject *astMakePointer_( AstObject *, int * );
AstObject *astMakePointer_NoLockCheck_( AstObject *, int * );
int astP2I_( AstObject *, int * );
int astVersion_( int * );
int astEscapes_( int, int * );
int astTune_( const char *, int, int * );
void astTuneC_( const char *, const char *, char *, int, int * );
AstObject *astDeleteId_( AstObject *, int * );
int astThreadId_( AstObject *, int, int * );
void astExportId_( AstObject *, int * );
void astImportId_( AstObject *, int * );
void astSetId_( void *, const char *, ... )__attribute__((format(printf,2,3)));

AstObject *astAnnulId_( AstObject *, int * );
AstObject *astCheckLock_( AstObject *, int * );
AstObject *astClone_( AstObject *, int * );
AstObject *astCopy_( const AstObject *, int * );
AstObject *astFromString_( const char *, int * );
char *astToString_( AstObject *, int * );
const char *astGetC_( AstObject *, const char *, int * );
double astGetD_( AstObject *, const char *, int * );
float astGetF_( AstObject *, const char *, int * );
int astEqual_( AstObject *, AstObject *, int * );
int astGetI_( AstObject *, const char *, int * );
int astHasAttribute_( AstObject *, const char *, int * );
int astSame_( AstObject *, AstObject *, int * );
int astTest_( AstObject *, const char *, int * );
long astGetL_( AstObject *, const char *, int * );
void *astGetProxy_( AstObject *, int * );
void astClear_( AstObject *, const char *, int * );
void astExemptId_( AstObject *, int * );
void astLockId_( AstObject *, int, int * );
void astSetC_( AstObject *, const char *, const char *, int * );
void astSetD_( AstObject *, const char *, double, int * );
void astSetF_( AstObject *, const char *, float, int * );
void astSetI_( AstObject *, const char *, int, int * );
void astSetL_( AstObject *, const char *, long, int * );
void astSetProxy_( AstObject *, void *, int * );
void astShow_( AstObject *, int * );
void astUnlockId_( AstObject *, int, int * );
#define astCheckObject(this) astINVOKE_CHECK(Object,this,0)
#define astVerifyObject(this) astINVOKE_CHECK(Object,this,1)

#define astIsAObject(this) astINVOKE_ISA(Object,this)
#define astBegin astBegin_()
#define astEnd astINVOKE(V,astEnd_(STATUS_PTR))

#define astVersion astVersion_(STATUS_PTR)
#define astEscapes(int) astEscapes_(int,STATUS_PTR)
#define astTune(name,val) astTune_(name,val,STATUS_PTR)
#define astTuneC(name,value,buff,bufflen) astTuneC_(name,value,buff,bufflen,STATUS_PTR)
#define astI2P(integer) ((void *)astI2P_(integer,STATUS_PTR))
#define astMakeId(pointer) ((void *)astMakeId_((AstObject *)(pointer),STATUS_PTR))
#define astP2I(pointer) astP2I_((AstObject *)(pointer),STATUS_PTR)
#define astMakePointer(id) ((void *)astCheckLock_(astMakePointer_((AstObject *)(id),STATUS_PTR),STATUS_PTR))
#define astToString(this) astINVOKE(V,astToString_(astCheckObject(this),STATUS_PTR))
#define astFromString(string) astINVOKE(O,astFromString_(string,STATUS_PTR))
#define astAnnul(this) astINVOKE(O,astAnnulId_((AstObject *)(this),STATUS_PTR))
#define astDelete(this) astINVOKE(O,astDeleteId_((AstObject *)(this),STATUS_PTR))
#define astExport(this) astINVOKE(V,astExportId_((AstObject *)(this),STATUS_PTR))
#define astImport(this) astINVOKE(V,astImportId_((AstObject *)(this),STATUS_PTR))
#define astSet astINVOKE(F,astSetId_)
#define astThread(this,ptr) astINVOKE(V,astThreadId_((AstObject *)(this),ptr,STATUS_PTR))

#define astLock(this,wait) astINVOKE(V,astLockId_((AstObject *)(this),wait,STATUS_PTR))
#define astUnlock(this,report) astINVOKE(V,astUnlockId_((AstObject *)(this),report,STATUS_PTR))
#define astEqual(this,that) astINVOKE(V,(((AstObject*)this==(AstObject*)that)||astEqual_(astCheckObject(this),astCheckObject(that),STATUS_PTR)))
#define astExempt(this) astINVOKE(V,astExemptId_((AstObject *)(this),STATUS_PTR))
#define astClear(this,attrib) astINVOKE(V,astClear_(astCheckObject(this),attrib,STATUS_PTR))
#define astClone(this) astINVOKE(O,astClone_(astCheckObject(this),STATUS_PTR))
#define astCopy(this) astINVOKE(O,astCopy_(astCheckObject(this),STATUS_PTR))
#define astGetC(this,attrib) astINVOKE(V,astGetC_(astCheckObject(this),attrib,STATUS_PTR))
#define astGetD(this,attrib) astINVOKE(V,astGetD_(astCheckObject(this),attrib,STATUS_PTR))
#define astGetF(this,attrib) astINVOKE(V,astGetF_(astCheckObject(this),attrib,STATUS_PTR))
#define astGetI(this,attrib) astINVOKE(V,astGetI_(astCheckObject(this),attrib,STATUS_PTR))
#define astGetL(this,attrib) astINVOKE(V,astGetL_(astCheckObject(this),attrib,STATUS_PTR))
#define astSetC(this,attrib,value) astINVOKE(V,astSetC_(astCheckObject(this),attrib,value,STATUS_PTR))
#define astSetD(this,attrib,value) astINVOKE(V,astSetD_(astCheckObject(this),attrib,value,STATUS_PTR))
#define astSetF(this,attrib,value) astINVOKE(V,astSetF_(astCheckObject(this),attrib,value,STATUS_PTR))
#define astSetI(this,attrib,value) astINVOKE(V,astSetI_(astCheckObject(this),attrib,value,STATUS_PTR))
#define astSetL(this,attrib,value) astINVOKE(V,astSetL_(astCheckObject(this),attrib,value,STATUS_PTR))
#define astShow(this) astINVOKE(V,astShow_(astCheckObject(this),STATUS_PTR))
#define astTest(this,attrib) astINVOKE(V,astTest_(astCheckObject(this),attrib,STATUS_PTR))
#define astSame(this,that) astINVOKE(V,astSame_(astCheckObject(this),astCheckObject(that),STATUS_PTR))
#define astHasAttribute(this,attrib) astINVOKE(V,astHasAttribute_(astCheckObject(this),attrib,STATUS_PTR))
#define astGetProxy(this) astINVOKE(V,astGetProxy_(astCheckObject(this),STATUS_PTR))
#define astSetProxy(this,proxy) astINVOKE(V,astSetProxy_(astCheckObject(this),proxy,STATUS_PTR))
#define astWatchHandle
#define astHandleUse
#define astHandleAlarm
#define STATUS_PTR astGetStatusPtr
#define AST__BAD (-(DBL_MAX))
#define AST__NAN (-(0.95*DBL_MAX))
#define AST__NANF ((float)-(0.95*FLT_MAX))
typedef struct AstPointSet {

   AstObject object;

   double **ptr;
   double *values;
   int ncoord;
   int npoint;
   double *acc;
} AstPointSet;
astPROTO_CHECK(PointSet)
astPROTO_ISA(PointSet)

AstPointSet *astPointSetId_( int, int, const char *, ... )__attribute__((format(printf,3,4)));
double **astGetPoints_( AstPointSet *, int * );
void astPermPoints_( AstPointSet *, int, const int[], int * );
void astSetPoints_( AstPointSet *, double **, int * );
void astSetNpoint_( AstPointSet *, int, int * );
void astSetSubPoints_( AstPointSet *, int, int, AstPointSet *, int * );
AstPointSet *astAppendPoints_( AstPointSet *, AstPointSet *, int * );
void astBndPoints_( AstPointSet *, double *, double *, int * );
int astReplaceNaN_( AstPointSet *, int * );
void astShowPoints_( AstPointSet *, int * );
#define astCheckPointSet(this) astINVOKE_CHECK(PointSet,this,0)
#define astVerifyPointSet(this) astINVOKE_CHECK(PointSet,this,1)

#define astIsAPointSet(this) astINVOKE_ISA(PointSet,this)

#define astPointSet astINVOKE(F,astPointSetId_)
#define astGetPoints(this) astINVOKE(V,astGetPoints_(astCheckPointSet(this),STATUS_PTR))
#define astPermPoints(this,forward,perm) astINVOKE(V,astPermPoints_(astCheckPointSet(this),forward,perm,STATUS_PTR))
#define astSetPoints(this,ptr) astINVOKE(V,astSetPoints_(astCheckPointSet(this),ptr,STATUS_PTR))
#define astSetNpoint(this,np) astINVOKE(V,astSetNpoint_(astCheckPointSet(this),np,STATUS_PTR))
#define astSetSubPoints(point1,point,coord,point2) astINVOKE(V,astSetSubPoints_(astCheckPointSet(point1),point,coord,astCheckPointSet(point2),STATUS_PTR))
#define astAppendPoints(this,that) astINVOKE(O,astAppendPoints_(astCheckPointSet(this),astCheckPointSet(that),STATUS_PTR))
#define astBndPoints(this,lbnd,ubnd) astINVOKE(V,astBndPoints_(astCheckPointSet(this),lbnd,ubnd,STATUS_PTR))
#define astReplaceNaN(this) astINVOKE(V,astReplaceNaN_(astCheckPointSet(this),STATUS_PTR))
#define astShowPoints(this) astINVOKE(V,astShowPoints_(astCheckPointSet(this),STATUS_PTR))

#include <stdint.h>
#define STATUS_PTR astGetStatusPtr

#define AST__MAPPING_GETATTRIB_BUFF_LEN 50
#define AST__MAPPING_RATEFUN_MAX_CACHE 5

#define AST__URESAMP1 (1)
#define AST__URESAMP2 (2)
#define AST__URESAMP3 (4)
#define AST__URESAMP4 (8)
#define AST__USEVAR (16)
#define AST__USEBAD (32)
#define AST__CONSERVEFLUX (64)
#define AST__REBININIT (128)
#define AST__REBINEND (256)
#define AST__GENVAR (512)
#define AST__VARWGT (1024)
#define AST__NOBAD (2048)
#define AST__DISVAR (4096)
#define AST__NONORM (8192)

#define AST__UKERN1 (1)

#define AST__UINTERP (3)
#define AST__NEAREST (4)
#define AST__LINEAR (5)
#define AST__SINC (6)
#define AST__SINCSINC (7)
#define AST__SINCCOS (8)
#define AST__SINCGAUSS (9)
#define AST__BLOCKAVE (10)
#define AST__GAUSS (11)
#define AST__SOMB (12)
#define AST__SOMBCOS (13)

typedef int64_t INT_BIG;
typedef uint64_t UINT_BIG;
typedef struct AstMapping {

   AstObject object;

   char invert;
   char flags;
   int nin;
   int nout;
   char report;
   char tran_forward;
   char tran_inverse;
} AstMapping;
astPROTO_CHECK(Mapping)
astPROTO_ISA(Mapping)
#define PROTO_GENERIC_ALL(X,Xtype) int astResample##X##_( AstMapping *, int, const int [], const int [], const Xtype [], const Xtype [], int, void (*)( void ), const double [], int, double, int, Xtype, int, const int [], const int [], const int [], const int [], Xtype [], Xtype [], int * );
PROTO_GENERIC_ALL(B,signed char)
PROTO_GENERIC_ALL(D,double)
PROTO_GENERIC_ALL(F,float)
PROTO_GENERIC_ALL(I,int)
PROTO_GENERIC_ALL(K,INT_BIG)
PROTO_GENERIC_ALL(L,long int)
PROTO_GENERIC_ALL(S,short int)
PROTO_GENERIC_ALL(UB,unsigned char)
PROTO_GENERIC_ALL(UI,unsigned int)
PROTO_GENERIC_ALL(UK,UINT_BIG)
PROTO_GENERIC_ALL(UL,unsigned long int)
PROTO_GENERIC_ALL(US,unsigned short int)

PROTO_GENERIC_ALL(LD,long double)

#define PROTO_GENERIC_DFI(X,Xtype) void astRebin##X##_( AstMapping *, double, int, const int [], const int [], const Xtype [], const Xtype [], int, const double [], int, double, int, Xtype, int, const int [], const int [], const int [], const int [], Xtype [], Xtype [], int * ); void astRebinSeq##X##_( AstMapping *, double, int, const int [], const int [], const Xtype [], const Xtype [], int, const double [], int, double, int, Xtype, int, const int [], const int [], const int [], const int [], Xtype [], Xtype [], double [], int64_t *, int * );

PROTO_GENERIC_DFI(D,double)
PROTO_GENERIC_DFI(F,float)
PROTO_GENERIC_DFI(I,int)
PROTO_GENERIC_DFI(B,signed char)
PROTO_GENERIC_DFI(UB,unsigned char)

PROTO_GENERIC_DFI(LD,long double)

AstMapping *astRemoveRegions_( AstMapping *, int * );
AstMapping *astSimplify_( AstMapping *, int * );
void astInvert_( AstMapping *, int * );
int astLinearApprox_( AstMapping *, const double *, const double *, double, double *, int * );
int astQuadApprox_( AstMapping *, const double[2], const double[2], int, int, double *, double *, int * );
void astTran1_( AstMapping *, int, const double [], int, double [], int * );
void astTran2_( AstMapping *, int, const double [], const double [], int, double [], double [], int * );
void astTranGrid_( AstMapping *, int, const int[], const int[], double, int, int, int, int, double *, int * );
void astTranN_( AstMapping *, int, int, int, const double *, int, int, int, double *, int * );
void astTranP_( AstMapping *, int, int, const double *[], int, int, double *[], int * );

void astDecomposeId_( AstMapping *, AstMapping **, AstMapping **, int *, int *, int *, int * );
void astMapBoxId_( AstMapping *, const double [], const double [], int, int, double *, double *, double [], double [], int * );
double astRateId_( AstMapping *, double *, int, int, int * );
void astMapSplitId_( AstMapping *, int, const int *, int *, AstMapping **, int * );
#define astCheckMapping(this) astINVOKE_CHECK(Mapping,this,0)
#define astVerifyMapping(this) astINVOKE_CHECK(Mapping,this,1)

#define astIsAMapping(this) astINVOKE_ISA(Mapping,this)
#define astResampleLD(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleLD_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))

#define astInvert(this) astINVOKE(V,astInvert_(astCheckMapping(this),STATUS_PTR))
#define astLinearApprox(this,lbnd,ubnd,tol,fit) astINVOKE(V,astLinearApprox_(astCheckMapping(this),lbnd,ubnd,tol,fit,STATUS_PTR))
#define astQuadApprox(this,lbnd,ubnd,nx,ny,fit,rms) astINVOKE(V,astQuadApprox_(astCheckMapping(this),lbnd,ubnd,nx,ny,fit,rms,STATUS_PTR))
#define astRebinD(this,wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astRebinD_(astCheckMapping(this),wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astRebinF(this,wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astRebinF_(astCheckMapping(this),wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astRebinI(this,wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astRebinI_(astCheckMapping(this),wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astRebinB(this,wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astRebinB_(astCheckMapping(this),wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astRebinUB(this,wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astRebinUB_(astCheckMapping(this),wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astRebinSeqD(this,wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,weights,nused) astINVOKE(V,astRebinSeqD_(astCheckMapping(this),wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,weights,nused,STATUS_PTR))
#define astRebinSeqF(this,wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,weights,nused) astINVOKE(V,astRebinSeqF_(astCheckMapping(this),wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,weights,nused,STATUS_PTR))
#define astRebinSeqI(this,wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,weights,nused) astINVOKE(V,astRebinSeqI_(astCheckMapping(this),wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,weights,nused,STATUS_PTR))
#define astRebinSeqB(this,wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,weights,nused) astINVOKE(V,astRebinSeqB_(astCheckMapping(this),wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,weights,nused,STATUS_PTR))
#define astRebinSeqUB(this,wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,weights,nused) astINVOKE(V,astRebinSeqUB_(astCheckMapping(this),wlim,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,weights,nused,STATUS_PTR))
#define astResampleD(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleD_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astResampleF(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleF_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astResampleL(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleL_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astResampleUL(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleUL_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astResampleI(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleI_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astResampleUI(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleUI_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astResampleK(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleK_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astResampleUK(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleUK_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astResampleS(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleS_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astResampleUS(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleUS_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astResampleB(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleB_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astResampleUB(this,ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var) astINVOKE(V,astResampleUB_(astCheckMapping(this),ndim_in,lbnd_in,ubnd_in,in,in_var,interp,finterp,params,flags,tol,maxpix,badval,ndim_out,lbnd_out,ubnd_out,lbnd,ubnd,out,out_var,STATUS_PTR))
#define astRemoveRegions(this) astINVOKE(O,astRemoveRegions_(astCheckMapping(this),STATUS_PTR))
#define astSimplify(this) astINVOKE(O,astSimplify_(astCheckMapping(this),STATUS_PTR))
#define astTran1(this,npoint,xin,forward,xout) astINVOKE(V,astTran1_(astCheckMapping(this),npoint,xin,forward,xout,STATUS_PTR))
#define astTran2(this,npoint,xin,yin,forward,xout,yout) astINVOKE(V,astTran2_(astCheckMapping(this),npoint,xin,yin,forward,xout,yout,STATUS_PTR))
#define astTranGrid(this,ncoord_in,lbnd,ubnd,tol,maxpix,forward,ncoord_out,outdim,out) astINVOKE(V,astTranGrid_(astCheckMapping(this),ncoord_in,lbnd,ubnd,tol,maxpix,forward,ncoord_out,outdim,out,STATUS_PTR))
#define astTranN(this,npoint,ncoord_in,indim,in,forward,ncoord_out,outdim,out) astINVOKE(V,astTranN_(astCheckMapping(this),npoint,ncoord_in,indim,in,forward,ncoord_out,outdim,out,STATUS_PTR))
#define astTranP(this,npoint,ncoord_in,ptr_in,forward,ncoord_out,ptr_out) astINVOKE(V,astTranP_(astCheckMapping(this),npoint,ncoord_in,ptr_in,forward,ncoord_out,ptr_out,STATUS_PTR))

#define astDecompose(this,map1,map2,series,inv1,inv2) astINVOKE(V,astDecomposeId_(astCheckMapping(this),(AstMapping **)(map1),(AstMapping **)(map2),series,inv1,inv2,STATUS_PTR))
#define astMapBox(this,lbnd_in,ubnd_in,forward,coord_out,lbnd_out,ubnd_out,xl,xu) astINVOKE(V,astMapBoxId_(astCheckMapping(this),lbnd_in,ubnd_in,forward,coord_out,lbnd_out,ubnd_out,xl,xu,STATUS_PTR))
#define astRate(this,at,ax1,ax2) astINVOKE(V,astRateId_(astCheckMapping(this),at,ax1,ax2,STATUS_PTR))
#define astMapSplit(this,nin,in,out,map) astINVOKE(V,astMapSplitId_(astCheckMapping(this),nin,in,out,map,STATUS_PTR))
/* ast_err. */
/* ======== */

#define AST_ERROR_DEFINED

enum { AST__ATGER = 233933154 };

enum { AST__ATSER = 233933162 };

enum { AST__ATTIN = 233933170 };

enum { AST__AXIIN = 233933178 };

enum { AST__BADAT = 233933186 };

enum { AST__BADBX = 233933194 };

enum { AST__BADIN = 233933202 };

enum { AST__BADNI = 233933210 };

enum { AST__BADNO = 233933218 };

enum { AST__BADPW = 233933226 };

enum { AST__BADSM = 233933234 };

enum { AST__BADWM = 233933242 };

enum { AST__BDBRK = 233933250 };

enum { AST__BDFMT = 233933258 };

enum { AST__BDFTS = 233933266 };

enum { AST__BDOBJ = 233933274 };

enum { AST__CLPAX = 233933282 };

enum { AST__CORNG = 233933290 };

enum { AST__CVBRK = 233933298 };

enum { AST__DIMIN = 233933306 };

enum { AST__DTERR = 233933314 };

enum { AST__ENDIN = 233933322 };

enum { AST__EOCHN = 233933330 };

enum { AST__EXPIN = 233933338 };

enum { AST__FCRPT = 233933346 };

enum { AST__FMTER = 233933354 };

enum { AST__FRMIN = 233933362 };

enum { AST__FRSIN = 233933370 };

enum { AST__FTCNV = 233933378 };

enum { AST__GRFER = 233933386 };

enum { AST__INHAN = 233933394 };

enum { AST__INNCO = 233933402 };

enum { AST__INTER = 233933410 };

enum { AST__INTRD = 233933418 };

enum { AST__KYCIR = 233933426 };

enum { AST__LDERR = 233933434 };

enum { AST__LUTII = 233933442 };

enum { AST__LUTIN = 233933450 };

enum { AST__MEMIN = 233933458 };

enum { AST__MTR23 = 233933466 };

enum { AST__MTRAX = 233933474 };

enum { AST__MTRML = 233933482 };

enum { AST__MTRMT = 233933490 };

enum { AST__NAXIN = 233933498 };

enum { AST__NCHIN = 233933506 };

enum { AST__NCOIN = 233933514 };

enum { AST__NCPIN = 233933522 };

enum { AST__NELIN = 233933530 };

enum { AST__NOCTS = 233933538 };

enum { AST__NODEF = 233933546 };

enum { AST__NOFTS = 233933554 };

enum { AST__NOMEM = 233933562 };

enum { AST__NOPTS = 233933570 };

enum { AST__NOWRT = 233933578 };

enum { AST__NPTIN = 233933586 };

enum { AST__OBJIN = 233933594 };

enum { AST__OPT = 233933602 };

enum { AST__PDSIN = 233933610 };

enum { AST__PLFMT = 233933618 };

enum { AST__PRMIN = 233933626 };

enum { AST__PTRIN = 233933634 };

enum { AST__PTRNG = 233933642 };

enum { AST__RDERR = 233933650 };

enum { AST__REGIN = 233933658 };

enum { AST__REMIN = 233933666 };

enum { AST__SCSIN = 233933674 };

enum { AST__SELIN = 233933682 };

enum { AST__SLAIN = 233933690 };

enum { AST__TRNND = 233933698 };

enum { AST__UNMQT = 233933706 };

enum { AST__VSMAL = 233933714 };

enum { AST__WCSAX = 233933722 };

enum { AST__WCSNC = 233933730 };

enum { AST__WCSPA = 233933738 };

enum { AST__WCSTY = 233933746 };

enum { AST__XSOBJ = 233933754 };

enum { AST__ZOOMI = 233933762 };

enum { AST__BADCI = 233933770 };

enum { AST__ILOST = 233933778 };

enum { AST__ITFER = 233933786 };

enum { AST__ITFNI = 233933794 };

enum { AST__MBBNF = 233933802 };

enum { AST__MRITF = 233933810 };

enum { AST__OCLUK = 233933818 };

enum { AST__UNFER = 233933826 };

enum { AST__URITF = 233933834 };

enum { AST__GBDIN = 233933842 };

enum { AST__NGDIN = 233933850 };

enum { AST__PATIN = 233933858 };

enum { AST__SISIN = 233933866 };

enum { AST__SSPIN = 233933874 };

enum { AST__UINER = 233933882 };

enum { AST__UK1ER = 233933890 };

enum { AST__COMIN = 233933898 };

enum { AST__CONIN = 233933906 };

enum { AST__DUVAR = 233933914 };

enum { AST__INNTF = 233933922 };

enum { AST__MIOPA = 233933930 };

enum { AST__MIOPR = 233933938 };

enum { AST__MISVN = 233933946 };

enum { AST__MLPAR = 233933954 };

enum { AST__MRPAR = 233933962 };

enum { AST__NORHS = 233933970 };

enum { AST__UDVOF = 233933978 };

enum { AST__VARIN = 233933986 };

enum { AST__WRNFA = 233933994 };

enum { AST__BADUN = 233934002 };

enum { AST__NORSF = 233934010 };

enum { AST__NOSOR = 233934018 };

enum { AST__SPCIN = 233934026 };

enum { AST__XMLNM = 233934034 };

enum { AST__XMLCM = 233934042 };

enum { AST__XMLPT = 233934050 };

enum { AST__XMLIT = 233934058 };

enum { AST__XMLWF = 233934066 };

enum { AST__ZERAX = 233934074 };

enum { AST__BADOC = 233934082 };

enum { AST__MPGER = 233934090 };

enum { AST__MPIND = 233934098 };

enum { AST__REGCN = 233934106 };

enum { AST__NOVAL = 233934114 };

enum { AST__INCTS = 233934122 };

enum { AST__TIMIN = 233934130 };

enum { AST__STCKEY = 233934138 };

enum { AST__STCIND = 233934146 };

enum { AST__CNFLX = 233934154 };

enum { AST__TUNAM = 233934162 };

enum { AST__BDPAR = 233934170 };

enum { AST__3DFSET = 233934178 };

enum { AST__PXFRRM = 233934186 };

enum { AST__BADSUB = 233934194 };

enum { AST__BADFLG = 233934202 };

enum { AST__LCKERR = 233934210 };

enum { AST__FUNDEF = 233934218 };

enum { AST__MPVIN = 233934226 };

enum { AST__OPRIN = 233934234 };

enum { AST__NONIN = 233934242 };

enum { AST__MPKER = 233934250 };

enum { AST__MPPER = 233934258 };

enum { AST__BADKEY = 233934266 };

enum { AST__BADTYP = 233934274 };

enum { AST__OLDCOL = 233934282 };

enum { AST__BADNULL = 233934290 };

enum { AST__BIGKEY = 233934298 };

enum { AST__BADCOL = 233934306 };

enum { AST__BIGTAB = 233934314 };

enum { AST__BADSIZ = 233934322 };

enum { AST__BADTAB = 233934330 };

enum { AST__NOTAB = 233934338 };

enum { AST__LEVMAR = 233934346 };

enum { AST__NOFIT = 233934354 };

enum { AST__ISNAN = 233934362 };

enum { AST__WRERR = 233934370 };

enum { AST__BDVNM = 233934378 };

enum { AST__MIRRO = 233934386 };

enum { AST__MNPCK = 233934394 };

enum { AST__EXSPIX = 233934402 };

enum { AST__NOCNV = 233934410 };

enum { AST__IMMUT = 233934418 };
/* version. */
/* ======== */

/* object. */
/* ======= */

/* keymap. */
/* ======= */

#define AST__BADTYPE 0
#define AST__INTTYPE 1
#define AST__DOUBLETYPE 2
#define AST__STRINGTYPE 3
#define AST__OBJECTTYPE 4
#define AST__FLOATTYPE 5
#define AST__POINTERTYPE 6
#define AST__SINTTYPE 7
#define AST__UNDEFTYPE 8
#define AST__BYTETYPE 9

#define AST__KEYMAP_GETATTRIB_BUFF_LEN 50
#define AST__KEYMAP_CONVERTVALUE_MAX_STRINGS 50
#define AST__KEYMAP_CONVERTVALUE_BUFF_LEN 50
#define AST__KEYMAP_MAPKEY_MAX_STRINGS 50

#define AST__MXKEYLEN 200
typedef struct AstMapEntry {
   struct AstMapEntry *next;
   const char *key;
   unsigned long hash;
   int type;
   int nel;
   const char *comment;
   int defined;
   struct AstMapEntry *snext;
   struct AstMapEntry *sprev;
   int member;
   int keymember;
   int sortby;
} AstMapEntry;

typedef struct AstKeyMap {

   AstObject object;

   int sizeguess;
   AstMapEntry **table;

   int *nentry;
   int mapsize;
   int keycase;
   int keyerror;
   int maplocked;
   int sortby;
   AstMapEntry *first;
   int nsorted;
   int member_count;
   AstMapEntry *firstA;
   int iter_itab;
   AstMapEntry *iter_entry;
} AstKeyMap;
astPROTO_CHECK(KeyMap)
astPROTO_ISA(KeyMap)

AstKeyMap *astKeyMapId_( const char *, ... )__attribute__((format(printf,1,2)));
int astMapGet0AId_( AstKeyMap *, const char *, AstObject **, int * );
int astMapGet1AId_( AstKeyMap *, const char *, int, int *, AstObject **, int * );
void astMapPut1AId_( AstKeyMap *, const char *, int, AstObject *const [], const char *, int * );
int astMapGetElemAId_( AstKeyMap *, const char *, int, AstObject **, int * );

const char *astMapKey_( AstKeyMap *, int, int * );

int astMapGet0B_( AstKeyMap *, const char *, unsigned char *, int * );
int astMapGet0C_( AstKeyMap *, const char *, const char **, int * );
int astMapGet0D_( AstKeyMap *, const char *, double *, int * );
int astMapGet0F_( AstKeyMap *, const char *, float *, int * );
int astMapGet0I_( AstKeyMap *, const char *, int *, int * );
int astMapGet0P_( AstKeyMap *, const char *, void **, int * );
int astMapGet0S_( AstKeyMap *, const char *, short int *, int * );
int astMapGet1B_( AstKeyMap *, const char *, int, int *, unsigned char *, int * );
int astMapGet1C_( AstKeyMap *, const char *, int, int, int *, char *, int * );
int astMapGet1D_( AstKeyMap *, const char *, int, int *, double *, int * );
int astMapGet1F_( AstKeyMap *, const char *, int, int *, float *, int * );
int astMapGet1I_( AstKeyMap *, const char *, int, int *, int *, int * );
int astMapGet1P_( AstKeyMap *, const char *, int, int *, void **, int * );
int astMapGet1S_( AstKeyMap *, const char *, int, int *, short int *, int * );
int astMapGetElemB_( AstKeyMap *, const char *, int, unsigned char *, int * );
int astMapGetElemC_( AstKeyMap *, const char *, int, int, char *, int * );
int astMapGetElemD_( AstKeyMap *, const char *, int, double *, int * );
int astMapGetElemF_( AstKeyMap *, const char *, int, float *, int * );
int astMapGetElemI_( AstKeyMap *, const char *, int, int *, int * );
int astMapGetElemP_( AstKeyMap *, const char *, int, void **, int * );
int astMapGetElemS_( AstKeyMap *, const char *, int, short int *, int * );
int astMapHasKey_( AstKeyMap *, const char *, int * );
int astMapDefined_( AstKeyMap *, const char *, int * );
int astMapLenC_( AstKeyMap *, const char *, int * );
int astMapLength_( AstKeyMap *, const char *, int * );
int astMapSize_( AstKeyMap *, int * );
int astMapType_( AstKeyMap *, const char *, int * );
void astMapCopy_( AstKeyMap *, AstKeyMap *, int * );
void astMapPut0A_( AstKeyMap *, const char *, AstObject *, const char *, int * );
void astMapPut0B_( AstKeyMap *, const char *, unsigned char, const char *, int * );
void astMapPut0C_( AstKeyMap *, const char *, const char *, const char *, int * );
void astMapPut0D_( AstKeyMap *, const char *, double, const char *, int * );
void astMapPut0F_( AstKeyMap *, const char *, float, const char *, int * );
void astMapPut0I_( AstKeyMap *, const char *, int, const char *, int * );
void astMapPut0P_( AstKeyMap *, const char *, void *, const char *, int * );
void astMapPut0S_( AstKeyMap *, const char *, short int, const char *, int * );
void astMapPut1B_( AstKeyMap *, const char *, int, const unsigned char[], const char *, int * );
void astMapPut1C_( AstKeyMap *, const char *, int, const char *const [], const char *, int * );
void astMapPut1D_( AstKeyMap *, const char *, int, const double *, const char *, int * );
void astMapPut1F_( AstKeyMap *, const char *, int, const float *, const char *, int * );
void astMapPut1I_( AstKeyMap *, const char *, int, const int *, const char *, int * );
void astMapPut1P_( AstKeyMap *, const char *, int, void *const [], const char *, int * );
void astMapPut1S_( AstKeyMap *, const char *, int, const short int *, const char *, int * );
void astMapPutElemA_( AstKeyMap *, const char *, int, AstObject *, int * );
void astMapPutElemB_( AstKeyMap *, const char *, int, unsigned char, int * );
void astMapPutElemC_( AstKeyMap *, const char *, int, const char *, int * );
void astMapPutElemD_( AstKeyMap *, const char *, int, double, int * );
void astMapPutElemF_( AstKeyMap *, const char *, int, float, int * );
void astMapPutElemI_( AstKeyMap *, const char *, int, int, int * );
void astMapPutElemP_( AstKeyMap *, const char *, int, void *, int * );
void astMapPutElemS_( AstKeyMap *, const char *, int, short int, int * );
void astMapPutU_( AstKeyMap *, const char *, const char *, int * );
void astMapRemove_( AstKeyMap *, const char *, int * );
void astMapRename_( AstKeyMap *, const char *, const char *, int * );
#define astCheckKeyMap(this) astINVOKE_CHECK(KeyMap,this,0)
#define astVerifyKeyMap(this) astINVOKE_CHECK(KeyMap,this,1)

#define astIsAKeyMap(this) astINVOKE_ISA(KeyMap,this)

#define astKeyMap astINVOKE(F,astKeyMapId_)
#define astMapPutU(this,key,comment) astINVOKE(V,astMapPutU_(astCheckKeyMap(this),key,comment,STATUS_PTR))
#define astMapPut0I(this,key,value,comment) astINVOKE(V,astMapPut0I_(astCheckKeyMap(this),key,value,comment,STATUS_PTR))
#define astMapPut0B(this,key,value,comment) astINVOKE(V,astMapPut0B_(astCheckKeyMap(this),key,value,comment,STATUS_PTR))
#define astMapPut0S(this,key,value,comment) astINVOKE(V,astMapPut0S_(astCheckKeyMap(this),key,value,comment,STATUS_PTR))
#define astMapPut0D(this,key,value,comment) astINVOKE(V,astMapPut0D_(astCheckKeyMap(this),key,value,comment,STATUS_PTR))
#define astMapPut0F(this,key,value,comment) astINVOKE(V,astMapPut0F_(astCheckKeyMap(this),key,value,comment,STATUS_PTR))
#define astMapPut0C(this,key,value,comment) astINVOKE(V,astMapPut0C_(astCheckKeyMap(this),key,value,comment,STATUS_PTR))
#define astMapPut0A(this,key,value,comment) astINVOKE(V,astMapPut0A_(astCheckKeyMap(this),key,astCheckObject(value),comment,STATUS_PTR))
#define astMapPut0P(this,key,value,comment) astINVOKE(V,astMapPut0P_(astCheckKeyMap(this),key,value,comment,STATUS_PTR))
#define astMapPut1I(this,key,size,value,comment) astINVOKE(V,astMapPut1I_(astCheckKeyMap(this),key,size,value,comment,STATUS_PTR))
#define astMapPut1B(this,key,size,value,comment) astINVOKE(V,astMapPut1B_(astCheckKeyMap(this),key,size,value,comment,STATUS_PTR))
#define astMapPut1S(this,key,size,value,comment) astINVOKE(V,astMapPut1S_(astCheckKeyMap(this),key,size,value,comment,STATUS_PTR))
#define astMapPut1D(this,key,size,value,comment) astINVOKE(V,astMapPut1D_(astCheckKeyMap(this),key,size,value,comment,STATUS_PTR))
#define astMapPut1F(this,key,size,value,comment) astINVOKE(V,astMapPut1F_(astCheckKeyMap(this),key,size,value,comment,STATUS_PTR))
#define astMapPut1C(this,key,size,value,comment) astINVOKE(V,astMapPut1C_(astCheckKeyMap(this),key,size,value,comment,STATUS_PTR))
#define astMapGet0I(this,key,value) astINVOKE(V,astMapGet0I_(astCheckKeyMap(this),key,value,STATUS_PTR))
#define astMapGet0B(this,key,value) astINVOKE(V,astMapGet0B_(astCheckKeyMap(this),key,value,STATUS_PTR))
#define astMapGet0S(this,key,value) astINVOKE(V,astMapGet0S_(astCheckKeyMap(this),key,value,STATUS_PTR))
#define astMapGet0D(this,key,value) astINVOKE(V,astMapGet0D_(astCheckKeyMap(this),key,value,STATUS_PTR))
#define astMapGet0F(this,key,value) astINVOKE(V,astMapGet0F_(astCheckKeyMap(this),key,value,STATUS_PTR))
#define astMapGet0C(this,key,value) astINVOKE(V,astMapGet0C_(astCheckKeyMap(this),key,value,STATUS_PTR))
#define astMapGet1I(this,key,mxval,nval,value) astINVOKE(V,astMapGet1I_(astCheckKeyMap(this),key,mxval,nval,value,STATUS_PTR))
#define astMapGet1B(this,key,mxval,nval,value) astINVOKE(V,astMapGet1B_(astCheckKeyMap(this),key,mxval,nval,value,STATUS_PTR))
#define astMapGet1S(this,key,mxval,nval,value) astINVOKE(V,astMapGet1S_(astCheckKeyMap(this),key,mxval,nval,value,STATUS_PTR))
#define astMapGet1D(this,key,mxval,nval,value) astINVOKE(V,astMapGet1D_(astCheckKeyMap(this),key,mxval,nval,value,STATUS_PTR))
#define astMapGet1F(this,key,mxval,nval,value) astINVOKE(V,astMapGet1F_(astCheckKeyMap(this),key,mxval,nval,value,STATUS_PTR))
#define astMapGet1C(this,key,l,mxval,nval,value) astINVOKE(V,astMapGet1C_(astCheckKeyMap(this),key,l,mxval,nval,value,STATUS_PTR))
#define astMapGetElemI(this,key,elem,value) astINVOKE(V,astMapGetElemI_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapGetElemB(this,key,elem,value) astINVOKE(V,astMapGetElemB_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapGetElemS(this,key,elem,value) astINVOKE(V,astMapGetElemS_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapGetElemD(this,key,elem,value) astINVOKE(V,astMapGetElemD_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapGetElemF(this,key,elem,value) astINVOKE(V,astMapGetElemF_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapGetElemC(this,key,l,elem,value) astINVOKE(V,astMapGetElemC_(astCheckKeyMap(this),key,l,elem,value,STATUS_PTR))
#define astMapGetElemP(this,key,elem,value) astINVOKE(V,astMapGetElemP_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapPutElemA(this,key,elem,value) astINVOKE(V,astMapPutElemA_(astCheckKeyMap(this),key,elem,astCheckObject(value),STATUS_PTR))
#define astMapPutElemI(this,key,elem,value) astINVOKE(V,astMapPutElemI_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapPutElemB(this,key,elem,value) astINVOKE(V,astMapPutElemB_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapPutElemS(this,key,elem,value) astINVOKE(V,astMapPutElemS_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapPutElemD(this,key,elem,value) astINVOKE(V,astMapPutElemD_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapPutElemF(this,key,elem,value) astINVOKE(V,astMapPutElemF_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapPutElemC(this,key,elem,value) astINVOKE(V,astMapPutElemC_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapPutElemP(this,key,elem,value) astINVOKE(V,astMapPutElemP_(astCheckKeyMap(this),key,elem,value,STATUS_PTR))
#define astMapRemove(this,key) astINVOKE(V,astMapRemove_(astCheckKeyMap(this),key,STATUS_PTR))
#define astMapRename(this,oldkey,newkey) astINVOKE(V,astMapRename_(astCheckKeyMap(this),oldkey,newkey,STATUS_PTR))
#define astMapCopy(this,that) astINVOKE(V,astMapCopy_(astCheckKeyMap(this),astCheckKeyMap(that),STATUS_PTR))
#define astMapSize(this) astINVOKE(V,astMapSize_(astCheckKeyMap(this),STATUS_PTR))
#define astMapLength(this,key) astINVOKE(V,astMapLength_(astCheckKeyMap(this),key,STATUS_PTR))
#define astMapLenC(this,key) astINVOKE(V,astMapLenC_(astCheckKeyMap(this),key,STATUS_PTR))
#define astMapHasKey(this,key) astINVOKE(V,astMapHasKey_(astCheckKeyMap(this),key,STATUS_PTR))
#define astMapDefined(this,key) astINVOKE(V,astMapDefined_(astCheckKeyMap(this),key,STATUS_PTR))
#define astMapKey(this,index) astINVOKE(V,astMapKey_(astCheckKeyMap(this),index,STATUS_PTR))
#define astMapType(this,key) astINVOKE(V,astMapType_(astCheckKeyMap(this),key,STATUS_PTR))
#define astMapGet0P(this,key,value) astINVOKE(V,astMapGet0P_(astCheckKeyMap(this),key,value,STATUS_PTR))
#define astMapGet1P(this,key,mxval,nval,value) astINVOKE(V,astMapGet1P_(astCheckKeyMap(this),key,mxval,nval,value,STATUS_PTR))
#define astMapPut1P(this,key,size,value,comment) astINVOKE(V,astMapPut1P_(astCheckKeyMap(this),key,size,value,comment,STATUS_PTR))
#define astMapGet0A(this,key,value) astINVOKE(V,astMapGet0AId_(astCheckKeyMap(this),key,(AstObject **)(value),STATUS_PTR))
#define astMapGet1A(this,key,mxval,nval,value) astINVOKE(V,astMapGet1AId_(astCheckKeyMap(this),key,mxval,nval,(AstObject **)(value),STATUS_PTR))
#define astMapPut1A(this,key,size,value,comment) astINVOKE(V,astMapPut1AId_(astCheckKeyMap(this),key,size,value,comment,STATUS_PTR))
#define astMapGetElemA(this,key,elem,value) astINVOKE(V,astMapGetElemAId_(astCheckKeyMap(this),key,elem,(AstObject **)(value),STATUS_PTR))
/* table. */
/* ====== */

typedef struct AstTable {

   AstKeyMap keymap;

   int nrow;
   AstKeyMap *columns;
   AstKeyMap *parameters;
} AstTable;
astPROTO_CHECK(Table)
astPROTO_ISA(Table)

AstTable *astTableId_( const char *, ... )__attribute__((format(printf,1,2)));
void astAddColumn_( AstTable *, const char *, int, int, int *, const char *, int * );
void astAddParameter_( AstTable *, const char *, int * );
void astRemoveColumn_( AstTable *, const char *, int * );
void astRemoveParameter_( AstTable *, const char *, int * );
void astRemoveRow_( AstTable *, int, int * );
void astPurgeRows_( AstTable *, int * );
const char *astColumnName_( AstTable *, int, int * );
const char *astParameterName_( AstTable *, int, int * );
void astColumnShape_( AstTable *, const char *, int, int *, int *, int * );
int astHasColumn_( AstTable *, const char *, int * );
int astHasParameter_( AstTable *, const char *, int * );
#define astCheckTable(this) astINVOKE_CHECK(Table,this,0)
#define astVerifyTable(this) astINVOKE_CHECK(Table,this,1)

#define astIsATable(this) astINVOKE_ISA(Table,this)

#define astTable astINVOKE(F,astTableId_)
#define astAddColumn(this,name,type,ndim,dims,unit) astINVOKE(V,astAddColumn_(astCheckTable(this),name,type,ndim,dims,unit, STATUS_PTR))
#define astAddParameter(this,name) astINVOKE(V,astAddParameter_(astCheckTable(this),name,STATUS_PTR))
#define astRemoveColumn(this,name) astINVOKE(V,astRemoveColumn_(astCheckTable(this),name,STATUS_PTR))
#define astRemoveParameter(this,name) astINVOKE(V,astRemoveParameter_(astCheckTable(this),name,STATUS_PTR))
#define astRemoveRow(this,index) astINVOKE(V,astRemoveRow_(astCheckTable(this),index,STATUS_PTR))
#define astPurgeRows(this) astINVOKE(V,astPurgeRows_(astCheckTable(this),STATUS_PTR))
#define astColumnName(this,index) astINVOKE(V,astColumnName_(astCheckTable(this),index,STATUS_PTR))
#define astParameterName(this,index) astINVOKE(V,astParameterName_(astCheckTable(this),index,STATUS_PTR))
#define astColumnShape(this,column,mxdim,ndim,dims) astINVOKE(V,astColumnShape_(astCheckTable(this),column,mxdim,ndim,dims,STATUS_PTR))
#define astHasColumn(this,column) astINVOKE(V,astHasColumn_(astCheckTable(this),column,STATUS_PTR))
#define astHasParameter(this,param) astINVOKE(V,astHasParameter_(astCheckTable(this),param,STATUS_PTR))
/* fitstable. */
/* ========== */

#define STATUS_PTR astGetStatusPtr

#define AST__NOTYPE -1
#define AST__COMMENT 0
#define AST__INT 1
#define AST__FLOAT 2
#define AST__STRING 3
#define AST__COMPLEXF 4
#define AST__COMPLEXI 5
#define AST__LOGICAL 6
#define AST__CONTINUE 7
#define AST__UNDEF 8
#define AST_TABEXTNAME "WCS-TAB"
struct AstFitsChan;
typedef struct AstFitsChan {

   AstChannel channel;

   int encoding;
   int defb1950;
   int tabok;
   int cdmatrix;
   int polytan;
   int carlin;
   int iwc;
   int clean;
   int fitsdigits;
   char *fitsaxisorder;
   char *warnings;
   void *card;
   void *head;
   AstKeyMap *keyseq;
   AstKeyMap *keywords;
   AstKeyMap *tables;

   const char *(* source)( void );
   const char *(* saved_source)( void );
   char *(* source_wrap)( const char *(*)( void ), int * );

   void (* sink)( const char * );
   void (* sink_wrap)( void (*)( const char * ), const char *, int * );

   void (* tabsource)( void );
   void (* tabsource_wrap)( void (*)( void ), struct AstFitsChan *, const char *, int, int, int * );

} AstFitsChan;

struct AstFitsTable;
astPROTO_CHECK(FitsChan)
astPROTO_ISA(FitsChan)

AstFitsChan *astFitsChanId_( const char *(*)( void ), void (*)( const char * ),
                            const char *, ... )__attribute__((format(printf,3,4)));
AstFitsChan *astFitsChanForId_( const char *(*)( void ),
                              char *(*)( const char *(*)( void ), int * ),
                              void (*)( const char * ),
                              void (*)( void (*)( const char * ),
                                        const char *, int * ),
                              const char *, ... );
   AstKeyMap *astGetTables_( AstFitsChan *, int * );
   int astFindFits_( AstFitsChan *, const char *, char [81], int, int * );
   int astGetFitsCF_( AstFitsChan *, const char *, double *, int * );
   int astGetFitsCI_( AstFitsChan *, const char *, int *, int * );
   int astGetFitsCN_( AstFitsChan *, const char *, char **, int * );
   int astGetFitsF_( AstFitsChan *, const char *, double *, int * );
   int astGetFitsI_( AstFitsChan *, const char *, int *, int * );
   int astGetFitsL_( AstFitsChan *, const char *, int *, int * );
   int astGetFitsS_( AstFitsChan *, const char *, char **, int * );
   int astTestFits_( AstFitsChan *, const char *, int *, int * );
   void astDelFits_( AstFitsChan *, int * );
   void astReadFits_( AstFitsChan *, int * );
   void astWriteFits_( AstFitsChan *, int * );
   void astEmptyFits_( AstFitsChan *, int * );
   void astShowFits_( AstFitsChan *, int * );
   void astPurgeWCS_( AstFitsChan *, int * );
   void astPutCards_( AstFitsChan *, const char *, int * );
   void astPutFits_( AstFitsChan *, const char [81], int, int * );
   void astPutTable_( AstFitsChan *, struct AstFitsTable *, const char *, int * );
   void astPutTables_( AstFitsChan *, AstKeyMap *, int * );
   void astRemoveTables_( AstFitsChan *, const char *, int * );
   void astRetainFits_( AstFitsChan *, int * );
   void astSetFitsCF_( AstFitsChan *, const char *, double *, const char *, int, int * );
   void astSetFitsCI_( AstFitsChan *, const char *, int *, const char *, int, int * );
   void astSetFitsCM_( AstFitsChan *, const char *, int, int * );
   void astSetFitsCN_( AstFitsChan *, const char *, const char *, const char *, int, int * );
   void astSetFitsF_( AstFitsChan *, const char *, double, const char *, int, int * );
   void astSetFitsI_( AstFitsChan *, const char *, int, const char *, int, int * );
   void astSetFitsL_( AstFitsChan *, const char *, int, const char *, int, int * );
   void astSetFitsS_( AstFitsChan *, const char *, const char *, const char *, int, int * );
   void astSetFitsU_( AstFitsChan *, const char *, const char *, int, int * );

   void astTableSource_( AstFitsChan *,
                         void (*)( AstFitsChan *, const char *, int, int, int * ),
                         int * );
#define astCheckFitsChan(this) astINVOKE_CHECK(FitsChan,this,0)
#define astVerifyFitsChan(this) astINVOKE_CHECK(FitsChan,this,1)

#define astIsAFitsChan(this) astINVOKE_ISA(FitsChan,this)

#define astFitsChan astINVOKE(F,astFitsChanId_)
#define astFitsChanFor astINVOKE(F,astFitsChanForId_)

#define astPutFits(this,card,overwrite) astINVOKE(V,astPutFits_(astCheckFitsChan(this),card,overwrite,STATUS_PTR))

#define astPutCards(this,cards) astINVOKE(V,astPutCards_(astCheckFitsChan(this),cards,STATUS_PTR))

#define astDelFits(this) astINVOKE(V,astDelFits_(astCheckFitsChan(this),STATUS_PTR))

#define astPurgeWCS(this) astINVOKE(V,astPurgeWCS_(astCheckFitsChan(this),STATUS_PTR))

#define astGetTables(this) astINVOKE(O,astGetTables_(astCheckFitsChan(this),STATUS_PTR))

#define astPutTable(this,table,extnam) astINVOKE(V,astPutTable_(astCheckFitsChan(this),astCheckFitsTable(table),extnam,STATUS_PTR))

#define astPutTables(this,tables) astINVOKE(V,astPutTables_(astCheckFitsChan(this),astCheckKeyMap(tables),STATUS_PTR))

#define astRemoveTables(this,key) astINVOKE(V,astRemoveTables_(astCheckFitsChan(this),key,STATUS_PTR))

#define astRetainFits(this) astINVOKE(V,astRetainFits_(astCheckFitsChan(this),STATUS_PTR))

#define astFindFits( this, name, card, inc ) astINVOKE(V,astFindFits_(astCheckFitsChan(this),name,card,inc,STATUS_PTR))

#define astSetFitsI(this,name,value,comment,overwrite) astINVOKE(V,astSetFitsI_(astCheckFitsChan(this),name,value,comment,overwrite,STATUS_PTR))

#define astSetFitsF(this,name,value,comment,overwrite) astINVOKE(V,astSetFitsF_(astCheckFitsChan(this),name,value,comment,overwrite,STATUS_PTR))

#define astSetFitsS(this,name,value,comment,overwrite) astINVOKE(V,astSetFitsS_(astCheckFitsChan(this),name,value,comment,overwrite,STATUS_PTR))

#define astSetFitsCN(this,name,value,comment,overwrite) astINVOKE(V,astSetFitsCN_(astCheckFitsChan(this),name,value,comment,overwrite,STATUS_PTR))

#define astSetFitsCI(this,name,value,comment,overwrite) astINVOKE(V,astSetFitsCI_(astCheckFitsChan(this),name,value,comment,overwrite,STATUS_PTR))

#define astSetFitsCF(this,name,value,comment,overwrite) astINVOKE(V,astSetFitsCF_(astCheckFitsChan(this),name,value,comment,overwrite,STATUS_PTR))

#define astSetFitsL(this,name,value,comment,overwrite) astINVOKE(V,astSetFitsL_(astCheckFitsChan(this),name,value,comment,overwrite,STATUS_PTR))

#define astSetFitsU(this,name,comment,overwrite) astINVOKE(V,astSetFitsU_(astCheckFitsChan(this),name,comment,overwrite,STATUS_PTR))

#define astSetFitsCM(this,comment,overwrite) astINVOKE(V,astSetFitsCM_(astCheckFitsChan(this),comment,overwrite,STATUS_PTR))

#define astGetFitsCF(this,name,value) astINVOKE(V,astGetFitsCF_(astCheckFitsChan(this),name,value,STATUS_PTR))

#define astGetFitsCI(this,name,value) astINVOKE(V,astGetFitsCI_(astCheckFitsChan(this),name,value,STATUS_PTR))

#define astGetFitsF(this,name,value) astINVOKE(V,astGetFitsF_(astCheckFitsChan(this),name,value,STATUS_PTR))

#define astGetFitsI(this,name,value) astINVOKE(V,astGetFitsI_(astCheckFitsChan(this),name,value,STATUS_PTR))

#define astGetFitsL(this,name,value) astINVOKE(V,astGetFitsL_(astCheckFitsChan(this),name,value,STATUS_PTR))

#define astTestFits(this,name,there) astINVOKE(V,astTestFits_(astCheckFitsChan(this),name,there,STATUS_PTR))

#define astGetFitsS(this,name,value) astINVOKE(V,astGetFitsS_(astCheckFitsChan(this),name,value,STATUS_PTR))

#define astGetFitsCN(this,name,value) astINVOKE(V,astGetFitsCN_(astCheckFitsChan(this),name,value,STATUS_PTR))

#define astReadFits(this) astINVOKE(V,astReadFits_(astCheckFitsChan(this),STATUS_PTR))

#define astWriteFits(this) astINVOKE(V,astWriteFits_(astCheckFitsChan(this),STATUS_PTR))

#define astEmptyFits(this) astINVOKE(V,astEmptyFits_(astCheckFitsChan(this),STATUS_PTR))

#define astShowFits(this) astINVOKE(V,astShowFits_(astCheckFitsChan(this),STATUS_PTR))

#define astTableSource(this,tabsource) astINVOKE(V,astTableSource_(astCheckFitsChan(this),tabsource,STATUS_PTR))
typedef struct AstFitsTable {

   AstTable table;

   AstFitsChan *header;
} AstFitsTable;
astPROTO_CHECK(FitsTable)
astPROTO_ISA(FitsTable)

AstFitsTable *astFitsTableId_( void *, const char *, ... )__attribute__((format(printf,2,3)));
AstFitsChan *astGetTableHeader_( AstFitsTable *, int * );
void astPutTableHeader_( AstFitsTable *, AstFitsChan *, int * );
int astColumnNull_( AstFitsTable *, const char *, int, int, int *, int *, int * );
size_t astColumnSize_( AstFitsTable *, const char *, int * );
void astGetColumnData_( AstFitsTable *, const char *, float, double, size_t, void *, int *, int * );
void astPutColumnData_( AstFitsTable *, const char *, int, size_t, void *, int * );
#define astCheckFitsTable(this) astINVOKE_CHECK(FitsTable,this,0)
#define astVerifyFitsTable(this) astINVOKE_CHECK(FitsTable,this,1)

#define astIsAFitsTable(this) astINVOKE_ISA(FitsTable,this)

#define astFitsTable astINVOKE(F,astFitsTableId_)
#define astGetTableHeader(this) astINVOKE(O,astGetTableHeader_(astCheckFitsTable(this),STATUS_PTR))
#define astPutTableHeader(this,header) astINVOKE(V,astPutTableHeader_(astCheckFitsTable(this),astCheckFitsChan(header),STATUS_PTR))
#define astColumnNull(this,column,set,newval,wasset,hasnull) astINVOKE(V,astColumnNull_(astCheckFitsTable(this),column,set,newval,wasset,hasnull,STATUS_PTR))
#define astColumnSize(this,column) astINVOKE(V,astColumnSize_(astCheckFitsTable(this),column,STATUS_PTR))
#define astGetColumnData(this,column,fnull,dnull,mxsize,coldata,nelem) astINVOKE(V,astGetColumnData_(astCheckFitsTable(this),column,fnull,dnull,mxsize,coldata,nelem,STATUS_PTR))
#define astPutColumnData(this,column,clen,size,coldata) astINVOKE(V,astPutColumnData_(astCheckFitsTable(this),column,clen,size,coldata,STATUS_PTR))
/* pointset. */
/* ========= */

/* axis. */
/* ===== */

typedef struct AstAxis {

   AstObject object;

   char *label;
   char *format;
   char *symbol;
   char *unit;
   int digits;
   int direction;
   double top;
   double bottom;
} AstAxis;
astPROTO_CHECK(Axis)
astPROTO_ISA(Axis)

AstAxis *astAxisId_( const char *, ... )__attribute__((format(printf,1,2)));
const char *astAxisFormat_( AstAxis *, double, int * );
int astAxisUnformat_( AstAxis *, const char *, double *, int * );
void astAxisNorm_( AstAxis *, double *, int * );
void astAxisNormValues_( AstAxis *, int, int, double *, int * );
#define astCheckAxis(this) astINVOKE_CHECK(Axis,this,0)
#define astVerifyAxis(this) astINVOKE_CHECK(Axis,this,1)

#define astIsAAxis(this) astINVOKE_ISA(Axis,this)

#define astAxis astINVOKE(F,astAxisId_)
#define astAxisFormat(this,value) astINVOKE(V,astAxisFormat_(astCheckAxis(this),value,STATUS_PTR))
#define astAxisNorm(this,value) astINVOKE(V,astAxisNorm_(astCheckAxis(this),value,STATUS_PTR))
#define astAxisNormValues(this,oper,nval,values) astINVOKE(V,astAxisNormValues_(astCheckAxis(this),oper,nval,values,STATUS_PTR))
#define astAxisUnformat(this,string,value) astINVOKE(V,astAxisUnformat_(astCheckAxis(this),string,value,STATUS_PTR))
/* skyaxis. */
/* ======== */

#define AST__SKYAXIS_GETAXISFORMAT_BUFF_LEN 50
#define AST__SKYAXIS_DHMSFORMAT_BUFF_LEN 70
#define AST__SKYAXIS_DHMSUNIT_BUFF_LEN 17
#define AST__SKYAXIS_GETATTRIB_BUFF_LEN 50
typedef struct AstSkyAxis {

   AstAxis axis;

   char *skyformat;
   int as_time;
   int is_latitude;
   int centrezero;
} AstSkyAxis;
astPROTO_CHECK(SkyAxis)
astPROTO_ISA(SkyAxis)

AstSkyAxis *astSkyAxisId_( const char *, ... )__attribute__((format(printf,1,2)));
#define astCheckSkyAxis(this) astINVOKE_CHECK(SkyAxis,this,0)
#define astVerifySkyAxis(this) astINVOKE_CHECK(SkyAxis,this,1)

#define astIsASkyAxis(this) astINVOKE_ISA(SkyAxis,this)

#define astSkyAxis astINVOKE(F,astSkyAxisId_)
/* mapping. */
/* ======== */

/* cmpmap. */
/* ======= */

typedef struct AstCmpMap {

   AstMapping mapping;

   AstMapping *map1;
   AstMapping *map2;
   char invert1;
   char invert2;
   char series;
} AstCmpMap;
astPROTO_CHECK(CmpMap)
astPROTO_ISA(CmpMap)

AstCmpMap *astCmpMapId_( void *, void *, int, const char *, ... )__attribute__((format(printf,4,5)));
#define astCheckCmpMap(this) astINVOKE_CHECK(CmpMap,this,0)
#define astVerifyCmpMap(this) astINVOKE_CHECK(CmpMap,this,1)

#define astIsACmpMap(this) astINVOKE_ISA(CmpMap,this)

#define astCmpMap astINVOKE(F,astCmpMapId_)
/* dssmap. */
/* ======= */

typedef struct AstDssMap {

   AstMapping mapping;

   void *wcs;

} AstDssMap;
astPROTO_CHECK(DssMap)
astPROTO_ISA(DssMap)
#define astCheckDssMap(this) astINVOKE_CHECK(DssMap,this,0)
#define astVerifyDssMap(this) astINVOKE_CHECK(DssMap,this,1)

#define astIsADssMap(this) astINVOKE_ISA(DssMap,this)
/* grismmap. */
/* ========= */

typedef struct AstGrismMap {

   AstMapping mapping;

   double nr;
   double nrp;
   double waver;
   double alpha;
   double g;
   int m;
   double eps;
   double theta;
   double k1;
   double k2;
   double k3;

} AstGrismMap;
astPROTO_CHECK(GrismMap)
astPROTO_ISA(GrismMap)

AstGrismMap *astGrismMapId_( const char *, ... )__attribute__((format(printf,1,2)));
#define astCheckGrismMap(this) astINVOKE_CHECK(GrismMap,this,0)
#define astVerifyGrismMap(this) astINVOKE_CHECK(GrismMap,this,1)

#define astIsAGrismMap(this) astINVOKE_ISA(GrismMap,this)

#define astGrismMap astINVOKE(F,astGrismMapId_)
/* intramap. */
/* ========= */

#define AST__NOFWD (1U)
#define AST__NOINV (2U)
#define AST__SIMPFI (4U)
#define AST__SIMPIF (8U)

#define AST__ANY (-66)
typedef struct AstIntraMap {

   AstMapping mapping;

   char *intraflag;
   int ifun;
} AstIntraMap;
astPROTO_CHECK(IntraMap)
astPROTO_ISA(IntraMap)

AstIntraMap *astIntraMapId_( const char *, int, int, const char *, ... )__attribute__((format(printf,4,5)));
void astIntraReg_( const char *, int, int, void (*)( AstMapping *, int, int, const double *[], int, int, double *[] ), unsigned int, const char *, const char *, const char *, int * );
void astIntraRegFor_( const char *, int, int, void (*)( AstMapping *, int, int, const double *[], int, int, double *[] ), void (*)( void (*)( AstMapping *, int, int, const double *[], int, int, double *[]), AstMapping *, int, int, const double *[], int, int, double *[], int * ), unsigned int, const char *, const char *, const char *, int * );
#define astCheckIntraMap(this) astINVOKE_CHECK(IntraMap,this,0)
#define astVerifyIntraMap(this) astINVOKE_CHECK(IntraMap,this,1)

#define astIsAIntraMap(this) astINVOKE_ISA(IntraMap,this)

#define astIntraMap astINVOKE(F,astIntraMapId_)
#define astIntraReg(name,nin,nout,tran,flags,purpose,author,contact) astIntraReg_(name,nin,nout,tran,flags,purpose,author,contact,STATUS_PTR)
#define astIntraRegFor(name,nin,nout,tran,tran_wrap,flags,purpose,author,contact) astIntraRegFor_(name,nin,nout,tran,tran_wrap,flags,purpose,author,contact,STATUS_PTR)
/* lutmap. */
/* ======= */

typedef struct AstLutMap {

   AstMapping mapping;

   double *lut;
   double *luti;
   double inc;
   double last_fwd_in;
   double last_fwd_out;
   double last_inv_in;
   double last_inv_out;
   double start;
   int *flagsi;
   int *indexi;
   double lutepsilon;
   int lutinterp;
   int nlut;
   int nluti;
} AstLutMap;
astPROTO_CHECK(LutMap)
astPROTO_ISA(LutMap)

AstLutMap *astLutMapId_( int, const double [], double, double, const char *, ... )__attribute__((format(printf,5,6)));
#define astCheckLutMap(this) astINVOKE_CHECK(LutMap,this,0)
#define astVerifyLutMap(this) astINVOKE_CHECK(LutMap,this,1)

#define astIsALutMap(this) astINVOKE_ISA(LutMap,this)

#define astLutMap astINVOKE(F,astLutMapId_)
/* mathmap. */
/* ======== */

#define STATUS_PTR astGetStatusPtr

#define AST_MATHMAP_RAND_CONTEXT_NTAB_ (32)
typedef struct AstMathMapRandContext_ {
   long int rand1;
   long int rand2;
   long int random_int;
   long int table[ AST_MATHMAP_RAND_CONTEXT_NTAB_ ];
   int active;
   int seed;
   int seed_set;
} AstMathMapRandContext_;

typedef struct AstMathMap {

   AstMapping mapping;

   AstMathMapRandContext_ rcontext;
   char **fwdfun;
   char **invfun;
   double **fwdcon;
   double **invcon;
   int **fwdcode;
   int **invcode;
   int fwdstack;
   int invstack;
   int nfwd;
   int ninv;
   int simp_fi;
   int simp_if;
} AstMathMap;
astPROTO_CHECK(MathMap)
astPROTO_ISA(MathMap)

AstMathMap *astMathMapId_( int, int, int, const char *[], int, const char *[],
                           const char *, ... )__attribute__((format(printf,7,8)));
#define astCheckMathMap(this) astINVOKE_CHECK(MathMap,this,0)
#define astVerifyMathMap(this) astINVOKE_CHECK(MathMap,this,1)

#define astIsAMathMap(this) astINVOKE_ISA(MathMap,this)

#define astMathMap astINVOKE(F,astMathMapId_)
/* matrixmap. */
/* ========== */

typedef struct AstMatrixMap {

   AstMapping mapping;

   double *f_matrix;
   double *i_matrix;
   int form;

} AstMatrixMap;
astPROTO_CHECK(MatrixMap)
astPROTO_ISA(MatrixMap)

AstMatrixMap *astMatrixMapId_( int, int, int, const double[], const char *, ... )__attribute__((format(printf,5,6)));
#define astCheckMatrixMap(this) astINVOKE_CHECK(MatrixMap,this,0)
#define astVerifyMatrixMap(this) astINVOKE_CHECK(MatrixMap,this,1)

#define astIsAMatrixMap(this) astINVOKE_ISA(MatrixMap,this)

#define astMatrixMap astINVOKE(F,astMatrixMapId_)
/* pcdmap. */
/* ======= */

typedef struct AstPcdMap {

   AstMapping mapping;

   double disco;
   double pcdcen[2];

} AstPcdMap;
astPROTO_CHECK(PcdMap)
astPROTO_ISA(PcdMap)

AstPcdMap *astPcdMapId_( double, const double [2], const char *, ... )__attribute__((format(printf,3,4)));
#define astCheckPcdMap(this) astINVOKE_CHECK(PcdMap,this,0)
#define astVerifyPcdMap(this) astINVOKE_CHECK(PcdMap,this,1)

#define astIsAPcdMap(this) astINVOKE_ISA(PcdMap,this)

#define astPcdMap astINVOKE(F,astPcdMapId_)
/* permmap. */
/* ======== */

typedef struct AstPermMap {

   AstMapping mapping;

   int *inperm;
   int *outperm;
   double *constant;
   int permsplit;
} AstPermMap;
astPROTO_CHECK(PermMap)
astPROTO_ISA(PermMap)

AstPermMap *astPermMapId_( int, const int [], int, const int [],
                           const double [], const char *, ... )__attribute__((format(printf,6,7)));
#define astCheckPermMap(this) astINVOKE_CHECK(PermMap,this,0)
#define astVerifyPermMap(this) astINVOKE_CHECK(PermMap,this,1)

#define astIsAPermMap(this) astINVOKE_ISA(PermMap,this)

#define astPermMap astINVOKE(F,astPermMapId_)
/* polymap. */
/* ======== */

typedef struct AstPolyMap {

   AstMapping mapping;

   int *ncoeff_f;
   int *mxpow_f;
   int ***power_f;
   double **coeff_f;
   int *ncoeff_i;
   int *mxpow_i;
   int ***power_i;
   double **coeff_i;
   int iterinverse;
   int niterinverse;
   double tolinverse;
   struct AstPolyMap **jacobian;
} AstPolyMap;
astPROTO_CHECK(PolyMap)
astPROTO_ISA(PolyMap)

AstPolyMap *astPolyMapId_( int, int, int, const double[], int, const double[], const char *, ... )__attribute__((format(printf,7,8)));
AstPolyMap *astPolyTran_( AstPolyMap *, int, double, double, int, const double *, const double *, int * );
#define astCheckPolyMap(this) astINVOKE_CHECK(PolyMap,this,0)
#define astVerifyPolyMap(this) astINVOKE_CHECK(PolyMap,this,1)

#define astIsAPolyMap(this) astINVOKE_ISA(PolyMap,this)

#define astPolyMap astINVOKE(F,astPolyMapId_)
#define astPolyTran(this,forward,acc,maxacc,maxorder,lbnd,ubnd) astINVOKE(O,astPolyTran_(astCheckPolyMap(this),forward,acc,maxacc,maxorder,lbnd,ubnd,STATUS_PTR))
/* ratemap. */
/* ======== */

typedef struct AstRateMap {

   AstMapping mapping;

   AstMapping *map;
   int invert;
   int iin;
   int iout;
} AstRateMap;
astPROTO_CHECK(RateMap)
astPROTO_ISA(RateMap)

AstRateMap *astRateMapId_( void *, int, int, const char *, ... )__attribute__((format(printf,4,5)));
#define astCheckRateMap(this) astINVOKE_CHECK(RateMap,this,0)
#define astVerifyRateMap(this) astINVOKE_CHECK(RateMap,this,1)

#define astIsARateMap(this) astINVOKE_ISA(RateMap,this)

#define astRateMap astINVOKE(F,astRateMapId_)
/* normmap. */
/* ======== */

#define STATUS_PTR astGetStatusPtr
typedef int AstSystemType;

typedef struct AstFrame {

   AstMapping mapping;

   AstAxis **axis;
   char *domain;
   char *title;
   double epoch;
   double obslat;
   double obslon;
   double obsalt;
   double dut1;
   int *perm;
   int digits;
   int match_end;
   int active_unit;
   int max_axes;
   int min_axes;
   int naxes;
   int permute;
   int preserve_axes;
   AstSystemType system;
   AstSystemType alignsystem;
   int flags;
   struct AstFrameSet *variants;
} AstFrame;
typedef struct AstLineDef {
   AstFrame *frame;
   double length;
   int infinite;
   double start[2];
   double end[2];
   double dir[2];
   double q[2];
} AstLineDef;

struct AstFrameSet;
#define STATUS_PTR astGetStatusPtr

#define AST__BASE (0)
#define AST__CURRENT (-1)
#define AST__NOFRAME (-99)
#define AST__ALLFRAMES (-199)
#define AST__FRAMESET_GETALLVARIANTS_BUFF_LEN 200
#define AST__FRAMESET_GETATTRIB_BUFF_LEN 200

typedef struct AstFrameSet {

   AstFrame parent;

   AstFrame **frame;
   AstMapping **map;
   int *varfrm;
   int *invert;
   int *link;
   int *node;
   int base;
   int current;
   int nframe;
   int nnode;
} AstFrameSet;
astPROTO_CHECK(FrameSet)
astPROTO_ISA(FrameSet)

AstFrameSet *astFrameSetId_( void *, const char *, ... )__attribute__((format(printf,2,3)));
AstFrame *astGetFrame_( AstFrameSet *, int, int * );
AstMapping *astGetMapping_( AstFrameSet *, int, int, int * );
void astAddFrame_( AstFrameSet *, int , AstMapping *, AstFrame *, int * );
void astAddVariant_( AstFrameSet *, AstMapping *, const char *, int * );
void astMirrorVariants_( AstFrameSet *, int, int * );
void astRemapFrame_( AstFrameSet *, int, AstMapping *, int * );
void astRemoveFrame_( AstFrameSet *, int, int * );
#define astCheckFrameSet(this) astINVOKE_CHECK(FrameSet,this,0)
#define astVerifyFrameSet(this) astINVOKE_CHECK(FrameSet,this,1)

#define astIsAFrameSet(this) astINVOKE_ISA(FrameSet,this)

#define astFrameSet astINVOKE(F,astFrameSetId_)
#define astAddFrame(this,iframe,map,frame) astINVOKE(V,astAddFrame_(astCheckFrameSet(this),iframe,(((iframe)!=AST__ALLFRAMES)?astCheckMapping(map):NULL),astCheckFrame(frame),STATUS_PTR))
#define astAddVariant(this,map,name) astINVOKE(V,astAddVariant_(astCheckFrameSet(this),map?astCheckMapping(map):NULL,name,STATUS_PTR))
#define astMirrorVariants(this,iframe) astINVOKE(V,astMirrorVariants_(astCheckFrameSet(this),iframe,STATUS_PTR))
#define astGetFrame(this,iframe) astINVOKE(O,astGetFrame_(astCheckFrameSet(this),iframe,STATUS_PTR))
#define astGetMapping(this,iframe1,iframe2) astINVOKE(O,astGetMapping_(astCheckFrameSet(this),iframe1,iframe2,STATUS_PTR))
#define astRemapFrame(this,iframe,map) astINVOKE(V,astRemapFrame_(astCheckFrameSet(this),iframe,astCheckMapping(map),STATUS_PTR))
#define astRemoveFrame(this,iframe) astINVOKE(V,astRemoveFrame_(astCheckFrameSet(this),iframe,STATUS_PTR))

astPROTO_CHECK(Frame)
astPROTO_ISA(Frame)

AstFrame *astFrameId_( int, const char *, ... )__attribute__((format(printf,2,3)));
AstFrameSet *astConvert_( AstFrame *, AstFrame *, const char *, int * );
AstFrameSet *astFindFrame_( AstFrame *, AstFrame *, const char *, int * );
double astAngle_( AstFrame *, const double[], const double[], const double[], int * );
double astAxAngle_( AstFrame *, const double[2], const double[2], int, int * );
double astAxDistance_( AstFrame *, int, double, double, int * );
double astAxOffset_( AstFrame *, int, double, double, int * );
double astDistance_( AstFrame *, const double[], const double[], int * );
double astOffset2_( AstFrame *, const double[2], double, double, double[2], int * );
int astGetActiveUnit_( AstFrame *, int * );
void astAxNorm_( AstFrame *, int, int, int, double *, int * );
void astIntersect_( AstFrame *, const double[2], const double[2], const double[2], const double[2], double[2], int * );
void astMatchAxes_( AstFrame *, AstFrame *, int[], int * );
void astNorm_( AstFrame *, double[], int * );
void astOffset_( AstFrame *, const double[], const double[], double, double[], int * );
void astResolve_( AstFrame *, const double [], const double [], const double [], double [], double *, double *, int * );
void astSetActiveUnit_( AstFrame *, int, int * );
AstFrameSet *astGetFrameVariants_( AstFrame *, int * );
void astSetFrameVariants_( AstFrame *, AstFrameSet *, int * );
AstFrame *astPickAxesId_( AstFrame *, int, const int[], AstMapping **, int * );
const char *astFormatId_( AstFrame *, int, double, int * );
int astUnformatId_( AstFrame *, int, const char *, double *, int * );
void astPermAxesId_( AstFrame *, const int[], int * );
#define astCheckFrame(this) astINVOKE_CHECK(Frame,this,0)
#define astVerifyFrame(this) astINVOKE_CHECK(Frame,this,1)

#define astIsAFrame(this) astINVOKE_ISA(Frame,this)

#define astFrame astINVOKE(F,astFrameId_)
#define astConvert(from,to,domainlist) astINVOKE(O,astConvert_(astCheckFrame(from),astCheckFrame(to),domainlist,STATUS_PTR))
#define astAngle(this,a,b,c) astINVOKE(V,astAngle_(astCheckFrame(this),a,b,c,STATUS_PTR))
#define astDistance(this,point1,point2) astINVOKE(V,astDistance_(astCheckFrame(this),point1,point2,STATUS_PTR))
#define astFindFrame(target,template,domainlist) astINVOKE(O,astFindFrame_(astCheckFrame(target),astCheckFrame(template),domainlist,STATUS_PTR))
#define astMatchAxes(frm1,frm2,axes) astINVOKE(V,astMatchAxes_(astCheckFrame(frm1),astCheckFrame(frm2),axes,STATUS_PTR))
#define astNorm(this,value) astINVOKE(V,astNorm_(astCheckFrame(this),value,STATUS_PTR))
#define astAxDistance(this,axis,v1,v2) astINVOKE(V,astAxDistance_(astCheckFrame(this),axis,v1,v2,STATUS_PTR))
#define astAxNorm(this,axis,oper,nval,values) astINVOKE(V,astAxNorm_(astCheckFrame(this),axis,oper,nval,values,STATUS_PTR))
#define astAxOffset(this,axis,v1,dist) astINVOKE(V,astAxOffset_(astCheckFrame(this),axis,v1,dist,STATUS_PTR))
#define astOffset(this,point1,point2,offset,point3) astINVOKE(V,astOffset_(astCheckFrame(this),point1,point2,offset,point3,STATUS_PTR))
#define astAxAngle(this,a,b,axis) astINVOKE(V,astAxAngle_(astCheckFrame(this),a,b,axis,STATUS_PTR))
#define astIntersect(this,a1,a2,b1,b2,cross) astINVOKE(V,astIntersect_(astCheckFrame(this),a1,a2,b1,b2,cross,STATUS_PTR))
#define astOffset2(this,point1,angle,offset,point2) astINVOKE(V,astOffset2_(astCheckFrame(this),point1,angle,offset,point2,STATUS_PTR))
#define astResolve(this,point1,point2,point3,point4,d1,d2) astINVOKE(V,astResolve_(astCheckFrame(this),point1,point2,point3,point4,d1,d2,STATUS_PTR))
#define astGetActiveUnit(this) astINVOKE(V,astGetActiveUnit_(astCheckFrame(this),STATUS_PTR))
#define astSetActiveUnit(this,value) astINVOKE(V,astSetActiveUnit_(astCheckFrame(this),value,STATUS_PTR))
#define astFormat(this,axis,value) astINVOKE(V,astFormatId_(astCheckFrame(this),axis,value,STATUS_PTR))
#define astPermAxes(this,perm) astINVOKE(V,astPermAxesId_(astCheckFrame(this),perm,STATUS_PTR))
#define astPickAxes(this,naxes,axes,map) astINVOKE(O,astPickAxesId_(astCheckFrame(this),naxes,axes,(AstMapping **)(map),STATUS_PTR))
#define astUnformat(this,axis,string,value) astINVOKE(V,astUnformatId_(astCheckFrame(this),axis,string,value,STATUS_PTR))
typedef struct AstNormMap {

   AstMapping mapping;

   AstFrame *frame;
} AstNormMap;
astPROTO_CHECK(NormMap)
astPROTO_ISA(NormMap)

AstNormMap *astNormMapId_( void *, const char *, ... )__attribute__((format(printf,2,3)));
#define astCheckNormMap(this) astINVOKE_CHECK(NormMap,this,0)
#define astVerifyNormMap(this) astINVOKE_CHECK(NormMap,this,1)

#define astIsANormMap(this) astINVOKE_ISA(NormMap,this)

#define astNormMap astINVOKE(F,astNormMapId_)
/* shiftmap. */
/* ========= */

typedef struct AstShiftMap {

   AstMapping mapping;

   double *shift;

} AstShiftMap;
astPROTO_CHECK(ShiftMap)
astPROTO_ISA(ShiftMap)

AstShiftMap *astShiftMapId_( int, const double [], const char *, ... )__attribute__((format(printf,3,4)));
#define astCheckShiftMap(this) astINVOKE_CHECK(ShiftMap,this,0)
#define astVerifyShiftMap(this) astINVOKE_CHECK(ShiftMap,this,1)

#define astIsAShiftMap(this) astINVOKE_ISA(ShiftMap,this)

#define astShiftMap astINVOKE(F,astShiftMapId_)
/* slamap. */
/* ======= */

#define AST__AU 1.49597870E11

#define AST__SOLRAD 6.96E8
typedef struct AstSlaMap {

   AstMapping mapping;

   int *cvttype;
   double **cvtargs;
   double **cvtextra;
   int ncvt;
} AstSlaMap;
astPROTO_CHECK(SlaMap)
astPROTO_ISA(SlaMap)

AstSlaMap *astSlaMapId_( int, const char *, ... )__attribute__((format(printf,2,3)));
void astSlaAdd_( AstSlaMap *, const char *, const double[], int * );
int astSlaIsEmpty_( AstSlaMap *, int * );
#define astCheckSlaMap(this) astINVOKE_CHECK(SlaMap,this,0)
#define astVerifySlaMap(this) astINVOKE_CHECK(SlaMap,this,1)

#define astIsASlaMap(this) astINVOKE_ISA(SlaMap,this)

#define astSlaMap astINVOKE(F,astSlaMapId_)
#define astSlaAdd(this,cvt,args) astINVOKE(V,astSlaAdd_(astCheckSlaMap(this),cvt,args,STATUS_PTR))
/* specmap. */
/* ======== */

#define AST__C 2.99792458E8
#define AST__H 6.6260755E-34
typedef struct AstSpecMap {

   AstMapping mapping;

   int *cvttype;
   double **cvtargs;
   int ncvt;
} AstSpecMap;
astPROTO_CHECK(SpecMap)
astPROTO_ISA(SpecMap)

AstSpecMap *astSpecMapId_( int, int, const char *, ... )__attribute__((format(printf,3,4)));
void astSpecAdd_( AstSpecMap *, const char *, const double[], int * );
#define astCheckSpecMap(this) astINVOKE_CHECK(SpecMap,this,0)
#define astVerifySpecMap(this) astINVOKE_CHECK(SpecMap,this,1)

#define astIsASpecMap(this) astINVOKE_ISA(SpecMap,this)

#define astSpecMap astINVOKE(F,astSpecMapId_)
#define astSpecAdd(this,cvt,args) astINVOKE(V,astSpecAdd_(astCheckSpecMap(this),cvt,args,STATUS_PTR))
/* sphmap. */
/* ======= */

typedef struct AstSphMap {

   AstMapping mapping;

   double polarlong;
   int unitradius;
} AstSphMap;
astPROTO_CHECK(SphMap)
astPROTO_ISA(SphMap)

AstSphMap *astSphMapId_( const char *, ...)__attribute__((format(printf,1,2)));
#define astCheckSphMap(this) astINVOKE_CHECK(SphMap,this,0)
#define astVerifySphMap(this) astINVOKE_CHECK(SphMap,this,1)

#define astIsASphMap(this) astINVOKE_ISA(SphMap,this)

#define astSphMap astINVOKE(F,astSphMapId_)
/* timemap. */
/* ======== */

typedef struct AstTimeMap {

   AstMapping mapping;

   int *cvttype;
   double **cvtargs;
   int ncvt;
} AstTimeMap;
astPROTO_CHECK(TimeMap)
astPROTO_ISA(TimeMap)

AstTimeMap *astTimeMapId_( int, const char *, ... )__attribute__((format(printf,2,3)));
void astTimeAdd_( AstTimeMap *, const char *, const double[], int * );
#define astCheckTimeMap(this) astINVOKE_CHECK(TimeMap,this,0)
#define astVerifyTimeMap(this) astINVOKE_CHECK(TimeMap,this,1)

#define astIsATimeMap(this) astINVOKE_ISA(TimeMap,this)

#define astTimeMap astINVOKE(F,astTimeMapId_)
#define astTimeAdd(this,cvt,args) astINVOKE(V,astTimeAdd_(astCheckTimeMap(this),cvt,args,STATUS_PTR))
/* selectormap. */
/* ============ */

#define STATUS_PTR astGetStatusPtr

typedef struct AstRegion {

   AstFrame parent;

   AstFrameSet *frameset;
   AstPointSet *points;
   struct AstRegion *unc;
   double fillfactor;
   int regionfs;
   int negated;
   int closed;
   int meshsize;
   struct AstRegion *defunc;
   AstPointSet *basemesh;
   AstPointSet *basegrid;
   int adaptive;
   int nomap;
   struct AstRegion *negation;
} AstRegion;
astPROTO_CHECK(Region)
astPROTO_ISA(Region)
AstFrame *astGetRegionFrame_( AstRegion *, int * );
AstFrameSet *astGetRegionFrameSet_( AstRegion *, int * );
int astOverlap_( AstRegion *, AstRegion *, int * );
void astNegate_( AstRegion *, int * );

int astMaskLD_( AstRegion *, AstMapping *, int, int, const int[], const int[], long double [], long double, int * );

int astMaskB_( AstRegion *, AstMapping *, int, int, const int[], const int[], signed char[], signed char, int * );
int astMaskD_( AstRegion *, AstMapping *, int, int, const int[], const int[], double[], double, int * );
int astMaskF_( AstRegion *, AstMapping *, int, int, const int[], const int[], float[], float, int * );
int astMaskI_( AstRegion *, AstMapping *, int, int, const int[], const int[], int[], int, int * );
int astMaskL_( AstRegion *, AstMapping *, int, int, const int[], const int[], long int[], long int, int * );
int astMaskS_( AstRegion *, AstMapping *, int, int, const int[], const int[], short int[], short int, int * );
int astMaskUB_( AstRegion *, AstMapping *, int, int, const int[], const int[], unsigned char[], unsigned char, int * );
int astMaskUI_( AstRegion *, AstMapping *, int, int, const int[], const int[], unsigned int[], unsigned int, int * );
int astMaskUL_( AstRegion *, AstMapping *, int, int, const int[], const int[], unsigned long int[], unsigned long int, int * );
int astMaskUS_( AstRegion *, AstMapping *, int, int, const int[], const int[], unsigned short int[], unsigned short int, int * );
void astSetUnc_( AstRegion *, AstRegion *, int * );
AstRegion *astGetNegation_( AstRegion *, int * );
AstRegion *astGetUnc_( AstRegion *, int, int * );
void astGetRegionBounds_( AstRegion *, double *, double *, int * );
void astShowMesh_( AstRegion *, int, const char *, int * );
void astGetRegionMesh_( AstRegion *, int, int, int, int *, double *, int * );
void astGetRegionPoints_( AstRegion *, int, int, int *, double *, int * );
AstRegion *astMapRegionId_( AstRegion *, AstMapping *, AstFrame *, int * );
#define astCheckRegion(this) astINVOKE_CHECK(Region,this,0)
#define astVerifyRegion(this) astINVOKE_CHECK(Region,this,1)

#define astIsARegion(this) astINVOKE_ISA(Region,this)
#define astGetRegionFrame(this) astINVOKE(O,astGetRegionFrame_(astCheckRegion(this),STATUS_PTR))
#define astGetRegionFrameSet(this) astINVOKE(O,astGetRegionFrameSet_(astCheckRegion(this),STATUS_PTR))
#define astNegate(this) astINVOKE(V,astNegate_(astCheckRegion(this),STATUS_PTR))
#define astOverlap(this,that) astINVOKE(V,astOverlap_(astCheckRegion(this),astCheckRegion(that),STATUS_PTR))

#define astMaskLD(this,map,inside,ndim,lbnd,ubnd,in,val) astINVOKE(V,astMaskLD_(astCheckRegion(this),(map?astCheckMapping(map):NULL),inside,ndim,lbnd,ubnd,in,val,STATUS_PTR))

#define astMaskB(this,map,inside,ndim,lbnd,ubnd,in,val) astINVOKE(V,astMaskB_(astCheckRegion(this),(map?astCheckMapping(map):NULL),inside,ndim,lbnd,ubnd,in,val,STATUS_PTR))
#define astMaskD(this,map,inside,ndim,lbnd,ubnd,in,val) astINVOKE(V,astMaskD_(astCheckRegion(this),(map?astCheckMapping(map):NULL),inside,ndim,lbnd,ubnd,in,val,STATUS_PTR))
#define astMaskF(this,map,inside,ndim,lbnd,ubnd,in,val) astINVOKE(V,astMaskF_(astCheckRegion(this),(map?astCheckMapping(map):NULL),inside,ndim,lbnd,ubnd,in,val,STATUS_PTR))
#define astMaskI(this,map,inside,ndim,lbnd,ubnd,in,val) astINVOKE(V,astMaskI_(astCheckRegion(this),(map?astCheckMapping(map):NULL),inside,ndim,lbnd,ubnd,in,val,STATUS_PTR))
#define astMaskL(this,map,inside,ndim,lbnd,ubnd,in,val) astINVOKE(V,astMaskL_(astCheckRegion(this),(map?astCheckMapping(map):NULL),inside,ndim,lbnd,ubnd,in,val,STATUS_PTR))
#define astMaskS(this,map,inside,ndim,lbnd,ubnd,in,val) astINVOKE(V,astMaskS_(astCheckRegion(this),(map?astCheckMapping(map):NULL),inside,ndim,lbnd,ubnd,in,val,STATUS_PTR))
#define astMaskUB(this,map,inside,ndim,lbnd,ubnd,in,val) astINVOKE(V,astMaskUB_(astCheckRegion(this),(map?astCheckMapping(map):NULL),inside,ndim,lbnd,ubnd,in,val,STATUS_PTR))
#define astMaskUI(this,map,inside,ndim,lbnd,ubnd,in,val) astINVOKE(V,astMaskUI_(astCheckRegion(this),(map?astCheckMapping(map):NULL),inside,ndim,lbnd,ubnd,in,val,STATUS_PTR))
#define astMaskUL(this,map,inside,ndim,lbnd,ubnd,in,val) astINVOKE(V,astMaskUL_(astCheckRegion(this),(map?astCheckMapping(map):NULL),inside,ndim,lbnd,ubnd,in,val,STATUS_PTR))
#define astMaskUS(this,map,inside,ndim,lbnd,ubnd,in,val) astINVOKE(V,astMaskUS_(astCheckRegion(this),(map?astCheckMapping(map):NULL),inside,ndim,lbnd,ubnd,in,val,STATUS_PTR))
#define astSetUnc(this,unc) astINVOKE(V,astSetUnc_(astCheckRegion(this),unc?astCheckRegion(unc):NULL,STATUS_PTR))
#define astGetUnc(this,def) astINVOKE(O,astGetUnc_(astCheckRegion(this),def,STATUS_PTR))
#define astGetRegionBounds(this,lbnd,ubnd) astINVOKE(V,astGetRegionBounds_(astCheckRegion(this),lbnd,ubnd,STATUS_PTR))
#define astShowMesh(this,format,ttl) astINVOKE(V,astShowMesh_(astCheckRegion(this),format,ttl,STATUS_PTR))
#define astGetRegionMesh(this,surface,maxpoint,maxcoord,npoint,points) astINVOKE(V,astGetRegionMesh_(astCheckRegion(this),surface,maxpoint,maxcoord,npoint,points,STATUS_PTR))
#define astGetRegionPoints(this,maxpoint,maxcoord,npoint,points) astINVOKE(V,astGetRegionPoints_(astCheckRegion(this),maxpoint,maxcoord,npoint,points,STATUS_PTR))
#define astMapRegion(this,map,frame) astINVOKE(O,astMapRegionId_(astCheckRegion(this),astCheckMapping(map),astCheckFrame(frame),STATUS_PTR))
typedef struct AstSelectorMap {

   AstMapping mapping;

   int nreg;
   AstRegion **reg;
   double badval;

} AstSelectorMap;
astPROTO_CHECK(SelectorMap)
astPROTO_ISA(SelectorMap)

AstSelectorMap *astSelectorMapId_( int, void **, double, const char *, ... )__attribute__((format(printf,4,5)));
#define astCheckSelectorMap(this) astINVOKE_CHECK(SelectorMap,this,0)
#define astVerifySelectorMap(this) astINVOKE_CHECK(SelectorMap,this,1)

#define astIsASelectorMap(this) astINVOKE_ISA(SelectorMap,this)

#define astSelectorMap astINVOKE(F,astSelectorMapId_)
/* switchmap. */
/* ========== */

typedef struct AstSwitchMap {

   AstMapping mapping;

   AstMapping *fsmap;
   AstMapping *ismap;
   int fsinv;
   int isinv;
   int nroute;
   AstMapping **routemap;
   int *routeinv;
} AstSwitchMap;
astPROTO_CHECK(SwitchMap)
astPROTO_ISA(SwitchMap)

AstSwitchMap *astSwitchMapId_( void *, void *, int, void **, const char *, ... )__attribute__((format(printf,5,6)));
#define astCheckSwitchMap(this) astINVOKE_CHECK(SwitchMap,this,0)
#define astVerifySwitchMap(this) astINVOKE_CHECK(SwitchMap,this,1)

#define astIsASwitchMap(this) astINVOKE_ISA(SwitchMap,this)

#define astSwitchMap astINVOKE(F,astSwitchMapId_)
/* tranmap. */
/* ======== */

typedef struct AstTranMap {

   AstMapping mapping;

   AstMapping *map1;
   AstMapping *map2;
   int invert1;
   int invert2;
} AstTranMap;
astPROTO_CHECK(TranMap)
astPROTO_ISA(TranMap)

AstTranMap *astTranMapId_( void *, void *, const char *, ... )__attribute__((format(printf,3,4)));
#define astCheckTranMap(this) astINVOKE_CHECK(TranMap,this,0)
#define astVerifyTranMap(this) astINVOKE_CHECK(TranMap,this,1)

#define astIsATranMap(this) astINVOKE_ISA(TranMap,this)

#define astTranMap astINVOKE(F,astTranMapId_)
/* unitmap. */
/* ======== */

typedef struct AstUnitMap {

   AstMapping mapping;

} AstUnitMap;
astPROTO_CHECK(UnitMap)
astPROTO_ISA(UnitMap)

AstUnitMap *astUnitMapId_( int, const char *, ... )__attribute__((format(printf,2,3)));
#define astCheckUnitMap(this) astINVOKE_CHECK(UnitMap,this,0)
#define astVerifyUnitMap(this) astINVOKE_CHECK(UnitMap,this,1)

#define astIsAUnitMap(this) astINVOKE_ISA(UnitMap,this)

#define astUnitMap astINVOKE(F,astUnitMapId_)
/* unitnormmap. */
/* ============ */

typedef struct AstUnitNormMap {

   AstMapping mapping;

   double *centre;

} AstUnitNormMap;
astPROTO_CHECK(UnitNormMap)
astPROTO_ISA(UnitNormMap)

AstUnitNormMap *astUnitNormMapId_( int, const double [], const char *, ... )__attribute__((format(printf,3,4)));
#define astCheckUnitNormMap(this) astINVOKE_CHECK(UnitNormMap,this,0)
#define astVerifyUnitNormMap(this) astINVOKE_CHECK(UnitNormMap,this,1)

#define astIsAUnitNormMap(this) astINVOKE_ISA(UnitNormMap,this)

#define astUnitNormMap astINVOKE(F,astUnitNormMapId_)
/* wcsmap. */
/* ======= */

#define STATUS_PTR astGetStatusPtr

#define AST__WCSMX 10

#define AST__DPI 3.1415926535897932384626433832795028841971693993751

#define AST__DPIBY2 1.5707963267948966192313216916397514420985846996876

#define AST__DD2R 0.017453292519943295769236907684886127134428718885417

#define AST__DR2D 57.295779513082320876798154814105170332405472466564

#define AST__AZP 1
#define AST__SZP 2
#define AST__TAN 3
#define AST__STG 4
#define AST__SIN 5
#define AST__ARC 6
#define AST__ZPN 7
#define AST__ZEA 8
#define AST__AIR 9
#define AST__CYP 10
#define AST__CEA 11
#define AST__CAR 12
#define AST__MER 13
#define AST__SFL 14
#define AST__PAR 15
#define AST__MOL 16
#define AST__AIT 17
#define AST__COP 18
#define AST__COE 19
#define AST__COD 20
#define AST__COO 21
#define AST__BON 22
#define AST__PCO 23
#define AST__TSC 24
#define AST__CSC 25
#define AST__QSC 26
#define AST__NCP 27
#define AST__GLS 28
#define AST__TPN 29
#define AST__HPX 30
#define AST__XPH 31
#define AST__WCSBAD 32
typedef struct AstWcsMap {

   AstMapping mapping;

   int type;
   int wcsaxis[2];
   double **p;
   int *np;
   struct AstPrjPrm params;

   int fits_proj;
   int tpn_tan;
} AstWcsMap;
astPROTO_CHECK(WcsMap)
astPROTO_ISA(WcsMap)

AstWcsMap *astWcsMapId_( int, int, int, int, const char *, ... )__attribute__((format(printf,5,6)));
#define astCheckWcsMap(this) astINVOKE_CHECK(WcsMap,this,0)
#define astVerifyWcsMap(this) astINVOKE_CHECK(WcsMap,this,1)

#define astIsAWcsMap(this) astINVOKE_ISA(WcsMap,this)

#define astWcsMap astINVOKE(F,astWcsMapId_)
/* winmap. */
/* ======= */

typedef struct AstWinMap {

   AstMapping mapping;

   double *a;
   double *b;

} AstWinMap;
astPROTO_CHECK(WinMap)
astPROTO_ISA(WinMap)

AstWinMap *astWinMapId_( int, const double [], const double [], const double [], const double [], const char *, ... )__attribute__((format(printf,6,7)));
#define astCheckWinMap(this) astINVOKE_CHECK(WinMap,this,0)
#define astVerifyWinMap(this) astINVOKE_CHECK(WinMap,this,1)

#define astIsAWinMap(this) astINVOKE_ISA(WinMap,this)

#define astWinMap astINVOKE(F,astWinMapId_)
/* zoommap. */
/* ======== */

typedef struct AstZoomMap {

   AstMapping mapping;

   double zoom;
} AstZoomMap;
astPROTO_CHECK(ZoomMap)
astPROTO_ISA(ZoomMap)

AstZoomMap *astZoomMapId_( int, double, const char *, ... )__attribute__((format(printf,3,4)));
#define astCheckZoomMap(this) astINVOKE_CHECK(ZoomMap,this,0)
#define astVerifyZoomMap(this) astINVOKE_CHECK(ZoomMap,this,1)

#define astIsAZoomMap(this) astINVOKE_ISA(ZoomMap,this)

#define astZoomMap astINVOKE(F,astZoomMapId_)
/* frame. */
/* ====== */

/* cmpframe. */
/* ========= */

#define STATUS_PTR astGetStatusPtr
typedef struct AstCmpFrame {

   AstFrame frame;

   AstFrame *frame1;
   AstFrame *frame2;
   int *perm;
} AstCmpFrame;
astPROTO_CHECK(CmpFrame)
astPROTO_ISA(CmpFrame)

AstCmpFrame *astCmpFrameId_( void *, void *, const char *, ... )__attribute__((format(printf,3,4)));
#define astCheckCmpFrame(this) astINVOKE_CHECK(CmpFrame,this,0)
#define astVerifyCmpFrame(this) astINVOKE_CHECK(CmpFrame,this,1)

#define astIsACmpFrame(this) astINVOKE_ISA(CmpFrame,this)

#define astCmpFrame astINVOKE(F,astCmpFrameId_)
/* specfluxframe. */
/* ============== */

#define STATUS_PTR astGetStatusPtr
typedef struct AstSpecFluxFrame {

   AstCmpFrame cmpframe;

} AstSpecFluxFrame;
astPROTO_CHECK(SpecFluxFrame)
astPROTO_ISA(SpecFluxFrame)

AstSpecFluxFrame *astSpecFluxFrameId_( void *, void *, const char *, ... )__attribute__((format(printf,3,4)));
#define astCheckSpecFluxFrame(this) astINVOKE_CHECK(SpecFluxFrame,this,0)
#define astVerifySpecFluxFrame(this) astINVOKE_CHECK(SpecFluxFrame,this,1)

#define astIsASpecFluxFrame(this) astINVOKE_ISA(SpecFluxFrame,this)

#define astSpecFluxFrame astINVOKE(F,astSpecFluxFrameId_)
/* fluxframe. */
/* ========== */

#define STATUS_PTR astGetStatusPtr
typedef struct AstSkyLastTable {
   double obslat;
   double obslon;
   double obsalt;
   double dut1;
   int nentry;
   double *epoch;
   double *last;
} AstSkyLastTable;

typedef struct AstSkyFrame {

   AstFrame frame;

   char *projection;
   double equinox;
   int neglon;
   double skytol;
   int alignoffset;
   int skyrefis;
   double skyref[ 2 ];
   double skyrefp[ 2 ];
   double last;
   double eplast;
   double klast;
   double diurab;
} AstSkyFrame;
astPROTO_CHECK(SkyFrame)
astPROTO_ISA(SkyFrame)

AstSkyFrame *astSkyFrameId_( const char *, ... )__attribute__((format(printf,1,2)));
AstMapping *astSkyOffsetMap_( AstSkyFrame *, int * );
#define astCheckSkyFrame(this) astINVOKE_CHECK(SkyFrame,this,0)
#define astVerifySkyFrame(this) astINVOKE_CHECK(SkyFrame,this,1)

#define astIsASkyFrame(this) astINVOKE_ISA(SkyFrame,this)

#define astSkyFrame astINVOKE(F,astSkyFrameId_)
#define astSkyOffsetMap(this) astINVOKE(O,astSkyOffsetMap_(astCheckSkyFrame(this),STATUS_PTR))

#define STATUS_PTR astGetStatusPtr
typedef int AstStdOfRestType;

typedef struct AstSpecFrame {

   AstFrame frame;

   AstStdOfRestType alignstdofrest;
   AstStdOfRestType stdofrest;
   double refdec;
   double refra;
   double restfreq;
   double sourcevel;
   AstStdOfRestType sourcevrf;
   AstSystemType sourcesys;
   int nuunits;
   char **usedunits;
   double specorigin;
   int alignspecoffset;
} AstSpecFrame;
astPROTO_CHECK(SpecFrame)
astPROTO_ISA(SpecFrame)

AstSpecFrame *astSpecFrameId_( const char *, ... )__attribute__((format(printf,1,2)));
void astGetRefPos_( AstSpecFrame *, AstSkyFrame *, double *, double *, int * );
void astSetRefPos_( AstSpecFrame *, AstSkyFrame *, double, double, int * );
#define astCheckSpecFrame(this) astINVOKE_CHECK(SpecFrame,this,0)
#define astVerifySpecFrame(this) astINVOKE_CHECK(SpecFrame,this,1)

#define astIsASpecFrame(this) astINVOKE_ISA(SpecFrame,this)

#define astSpecFrame astINVOKE(F,astSpecFrameId_)
#define astGetRefPos(this,frm,lon,lat) astINVOKE(V,astGetRefPos_(astCheckSpecFrame(this),(frm==NULL?NULL:astCheckSkyFrame(frm)),lon,lat,STATUS_PTR))
#define astSetRefPos(this,frm,lon,lat) astINVOKE(V,astSetRefPos_(astCheckSpecFrame(this),(frm==NULL?NULL:astCheckSkyFrame(frm)),lon,lat,STATUS_PTR))

#define STATUS_PTR astGetStatusPtr
typedef struct AstFluxFrame {

   AstFrame frame;

   double specval;
   double defspecval;
   AstSpecFrame *specframe;
   int nuunits;
   char **usedunits;
} AstFluxFrame;
astPROTO_CHECK(FluxFrame)
astPROTO_ISA(FluxFrame)

AstFluxFrame *astFluxFrameId_( double, void *, const char *, ... )__attribute__((format(printf,3,4)));
#define astCheckFluxFrame(this) astINVOKE_CHECK(FluxFrame,this,0)
#define astVerifyFluxFrame(this) astINVOKE_CHECK(FluxFrame,this,1)

#define astIsAFluxFrame(this) astINVOKE_ISA(FluxFrame,this)

#define astFluxFrame astINVOKE(F,astFluxFrameId_)
/* frameset. */
/* ========= */

/* plot. */
/* ===== */

#define STATUS_PTR astGetStatusPtr

#define AST__NPID 20

#define AST__GATTR 0
#define AST__GFLUSH 1
#define AST__GLINE 2
#define AST__GMARK 3
#define AST__GTEXT 4
#define AST__GTXEXT 5
#define AST__GSCALES 6
#define AST__GQCH 7
#define AST__GCAP 8
#define AST__GBBUF 9
#define AST__GEBUF 10

#define AST__NGRFFUN 11
struct AstPlot;

typedef void (* AstGrfFun)( void );

typedef int (* AstGAttrFun)( AstKeyMap *, int, double, double *, int );
typedef int (* AstGFlushFun)( AstKeyMap * );
typedef int (* AstGBBufFun)( AstKeyMap * );
typedef int (* AstGEBufFun)( AstKeyMap * );
typedef int (* AstGLineFun)( AstKeyMap *, int, const float *, const float * );
typedef int (* AstGMarkFun)( AstKeyMap *, int, const float *, const float *, int );
typedef int (* AstGTextFun)( AstKeyMap *, const char *, float, float, const char *, float, float );
typedef int (* AstGCapFun)( AstKeyMap *, int, int );
typedef int (* AstGTxExtFun)( AstKeyMap *, const char *, float, float, const char *, float, float, float *, float * );
typedef int (* AstGScalesFun)( AstKeyMap *, float *, float * );
typedef int (* AstGQchFun)( AstKeyMap *, float *, float * );

typedef void (* AstGrfWrap)( void );

typedef int (* AstGAttrWrap)( struct AstPlot *, int, double, double *, int, int * );
typedef int (* AstGBBufWrap)( struct AstPlot *, int * );
typedef int (* AstGEBufWrap)( struct AstPlot *, int * );
typedef int (* AstGFlushWrap)( struct AstPlot *, int * );
typedef int (* AstGLineWrap)( struct AstPlot *, int, const float *, const float *, int * );
typedef int (* AstGMarkWrap)( struct AstPlot *, int, const float *, const float *, int, int * );
typedef int (* AstGTextWrap)( struct AstPlot *, const char *, float, float, const char *, float, float, int * );
typedef int (* AstGCapWrap)( struct AstPlot *, int, int, int * );
typedef int (* AstGTxExtWrap)( struct AstPlot *, const char *, float, float, const char *, float, float, float *, float *, int * );
typedef int (* AstGScalesWrap)( struct AstPlot *, float *, float *, int * );
typedef int (* AstGQchWrap)( struct AstPlot *, float *, float *, int * );

typedef struct AstGrfPtrs {
   AstGrfFun grffun[AST__NGRFFUN];
   AstGAttrWrap GAttr;
   AstGBBufWrap GBBuf;
   AstGEBufWrap GEBuf;
   AstGFlushWrap GFlush;
   AstGLineWrap GLine;
   AstGMarkWrap GMark;
   AstGTextWrap GText;
   AstGCapWrap GCap;
   AstGTxExtWrap GTxExt;
   AstGScalesWrap GScales;
   AstGQchWrap GQch;
} AstGrfPtrs;

typedef struct AstGat {
   float rise;
   double size;
   double width;
   double col;
   double font;
   double style;
} AstGat;

typedef struct AstPlot {

   AstFrameSet parent;

   double *clip_lbnd;
   double *clip_ubnd;
   double centre[ 3 ];
   double gap[ 3 ];
   double loggap[ 3 ];
   double labelat[ 3 ];
   double majticklen[ 3 ];
   double minticklen[ 3 ];
   double numlabgap[ 3 ];
   double size[ AST__NPID ];
   double textlabgap[ 3 ];
   double titlegap;
   double tol;
   double ucentre[ 3 ];
   double ugap[ 3 ];
   double uloggap[ 3 ];
   double ulblat[ 3 ];
   double umjtkln[ 3 ];
   double width[ AST__NPID ];
   double *majtickgx[ 3 ];
   double *majtickgy[ 3 ];
   double *mintickgx[ 3 ];
   double *mintickgy[ 3 ];
   int majtickcount[ 3 ];
   int mintickcount[ 3 ];
   int nmajtickval[ 3 ];
   double *majtickval[ 3 ];
   int nmintickval[ 3 ];
   double *mintickval[ 3 ];
   double xhi;
   double xlo;
   double yhi;
   double ylo;
   double bbox[ 4 ];
   int border;
   int clip_axes;
   int clip_frame;
   int clip;
   int clipop;
   int colour[ AST__NPID ];
   int drawaxes[ 3 ];
   int abbrev[ 3 ];
   int escape;
   int drawtitle;
   int edge[ 3 ];
   int font[ AST__NPID ];
   int grf;
   int grid;
   int invisible;
   int labelling;
   int labelunits[ 3 ];
   int labelup[ 3 ];
   int mintick[ 3 ];
   int numlab[ 3 ];
   int style[ AST__NPID ];
   int textlab[ 3 ];
   int tickall;
   int forceexterior;
   int uborder;
   int uedge[ 3 ];
   int ugrid;
   int ulbling;
   int ulbunit[ 3 ];
   int ulgtk[ 3 ];
   int ulglb[ 3 ];
   int umintk[ 3 ];
   int utxtlb[ 3 ];
   int xrev;
   int yrev;
   int ink;
   int logplot[ 3 ];
   int logticks[ 3 ];
   int loglabel[ 3 ];
   AstGrfFun grffun[AST__NGRFFUN];
   AstGAttrWrap GAttr;
   AstGBBufWrap GBBuf;
   AstGEBufWrap GEBuf;
   AstGFlushWrap GFlush;
   AstGLineWrap GLine;
   AstGMarkWrap GMark;
   AstGTextWrap GText;
   AstGCapWrap GCap;
   AstGTxExtWrap GTxExt;
   AstGScalesWrap GScales;
   AstGQchWrap GQch;
   AstGrfPtrs *grfstack;
   int grfnstack;
   AstGat **gat;
   int ngat;
   AstKeyMap *grfcontext;
   AstKeyMap *grfcontextID;
   float hmarkx;
   float hmarky;

} AstPlot;
astPROTO_CHECK(Plot)
astPROTO_ISA(Plot)

AstPlot *astPlotId_( void *, const float [], const double [], const char *, ... )__attribute__((format(printf,4,5)));
   AstKeyMap *astGetGrfContext_( AstPlot *, int * );
   AstKeyMap *astGrfConID_( AstPlot *, int * );
   const char *astStripEscapes_( const char *, int * );
   int astBorder_( AstPlot *, int * );
   int astFindEscape_( const char *, int *, int *, int *, int * );
   void astBBuf_( AstPlot *, int * );
   void astBoundingBox_( AstPlot *, float[2], float[2], int * );
   void astClip_( AstPlot *, int, const double [], const double [], int * );
   void astCurve_( AstPlot *, const double [], const double [], int * );
   void astEBuf_( AstPlot *, int * );
   void astGenCurve_( AstPlot *, AstMapping *, int * );
   void astGrfPop_( AstPlot *, int * );
   void astGrfPush_( AstPlot *, int * );
   void astGrfSet_( AstPlot *, const char *, AstGrfFun, int * );
   void astGridLine_( AstPlot *, int, const double [], double, int * );
   void astGrid_( AstPlot *, int * );
   void astMark_( AstPlot *, int, int, int, const double *, int, int * );
   void astPolyCurve_( AstPlot *, int, int, int, const double *, int * );
   void astRegionOutline_( AstPlot *, AstRegion *, int * );
   void astText_( AstPlot *, const char *, const double [], const float [], const char *, int * );

   void astGrfWrapper_( AstPlot *, const char *, AstGrfWrap, int * );
   int astGrfFunID_( const char *, const char *, const char *, int * );
#define astCheckPlot(this) astINVOKE_CHECK(Plot,this,0)
#define astVerifyPlot(this) astINVOKE_CHECK(Plot,this,1)

#define astIsAPlot(this) astINVOKE_ISA(Plot,this)

#define astPlot astINVOKE(F,astPlotId_)
#define astGetGrfContext(this) astINVOKE(O,astGetGrfContext_(astCheckPlot(this),STATUS_PTR))

#define astBorder(this) astINVOKE(V,astBorder_(astCheckPlot(this),STATUS_PTR))

#define astBoundingBox(this,lbnd,ubnd) astINVOKE(V,astBoundingBox_(astCheckPlot(this),lbnd,ubnd,STATUS_PTR))

#define astClip(this,iframe,lbnd,ubnd) astINVOKE(V,astClip_(astCheckPlot(this),iframe,lbnd,ubnd,STATUS_PTR))

#define astMark(this,nmark,ncoord,indim,in,type) astINVOKE(V,astMark_(astCheckPlot(this),nmark,ncoord,indim,in,type,STATUS_PTR))

#define astText(this,text,pos,up,just) astINVOKE(V,astText_(astCheckPlot(this),text,pos,up,just,STATUS_PTR))

#define astGrid(this) astINVOKE(V,astGrid_(astCheckPlot(this),STATUS_PTR))

#define astGridLine(this,axis,start,length) astINVOKE(V,astGridLine_(astCheckPlot(this),axis,start,length,STATUS_PTR))

#define astCurve(this,start,finish) astINVOKE(V,astCurve_(astCheckPlot(this),start,finish,STATUS_PTR))

#define astGenCurve(this,map) astINVOKE(V,astGenCurve_(astCheckPlot(this),astCheckMapping(map),STATUS_PTR))

#define astPolyCurve(this,npoint,ncoord,dim,in) astINVOKE(V,astPolyCurve_(astCheckPlot(this),npoint,ncoord,dim,in,STATUS_PTR))

#define astRegionOutline(this,region) astINVOKE(V,astRegionOutline_(astCheckPlot(this),astCheckRegion(region),STATUS_PTR))

#define astGrfSet(this,name,fun) astINVOKE(V,astGrfSet_(astCheckPlot(this),name,fun,STATUS_PTR))

#define astGrfPush(this) astINVOKE(V,astGrfPush_(astCheckPlot(this),STATUS_PTR))

#define astGrfPop(this) astINVOKE(V,astGrfPop_(astCheckPlot(this),STATUS_PTR))

#define astBBuf(this) astINVOKE(V,astBBuf_(astCheckPlot(this),STATUS_PTR))

#define astEBuf(this) astINVOKE(V,astEBuf_(astCheckPlot(this),STATUS_PTR))

#define astGrfFunID(name,method,class) astGrfFunID_(name,method,class,STATUS_PTR)
#define astFindEscape(text,type,value,nc) astFindEscape_(text,type,value,nc,STATUS_PTR)
#define astStripEscapes(text) astStripEscapes_(text,STATUS_PTR)
#define astGrfConID(this) astGrfConID_(this,STATUS_PTR)

#define astGrfWrapper(this,name,wrapper) astINVOKE(V,astGrfWrapper_(astCheckPlot(this),name,wrapper,STATUS_PTR))
/* plot3d. */
/* ======= */

#define STATUS_PTR astGetStatusPtr
typedef struct AstPlot3D {

   AstPlot plot;

   AstPlot *plotxy;
   AstPlot *plotxz;
   AstPlot *plotyz;
   double gbox[6];
   int pix_frame;
   int rootcorner;
   int baseplot;
   int axis_plot1[3];
   int axis_index1[3];
   int axis_plot2[3];
   int axis_index2[3];
   double norm[3];
} AstPlot3D;
astPROTO_CHECK(Plot3D)
astPROTO_ISA(Plot3D)

AstPlot3D *astPlot3DId_( void *, const float [], const double [], const char *, ... );
#define astCheckPlot3D(this) astINVOKE_CHECK(Plot3D,this,0)
#define astVerifyPlot3D(this) astINVOKE_CHECK(Plot3D,this,1)

#define astIsAPlot3D(this) astINVOKE_ISA(Plot3D,this)

#define astPlot3D astINVOKE(F,astPlot3DId_)
/* skyframe. */
/* ========= */

/* specframe. */
/* ========== */

/* dsbspecframe. */
/* ============= */

typedef struct AstDSBSpecFrame {

   AstSpecFrame specframe;

   double dsbcentre;
   double ifr;
   int sideband;
   int alignsideband;

} AstDSBSpecFrame;
astPROTO_CHECK(DSBSpecFrame)
astPROTO_ISA(DSBSpecFrame)

AstDSBSpecFrame *astDSBSpecFrameId_( const char *, ... )__attribute__((format(printf,1,2)));
#define astCheckDSBSpecFrame(this) astINVOKE_CHECK(DSBSpecFrame,this,0)
#define astVerifyDSBSpecFrame(this) astINVOKE_CHECK(DSBSpecFrame,this,1)

#define astIsADSBSpecFrame(this) astINVOKE_ISA(DSBSpecFrame,this)

#define astDSBSpecFrame astINVOKE(F,astDSBSpecFrameId_)
/* region. */
/* ======= */

/* box. */
/* ==== */

typedef struct AstBox {

   AstRegion region;

   double *extent;
   double *centre;
   double *lo;
   double *hi;
   double *geolen;
   int stale;
} AstBox;
astPROTO_CHECK(Box)
astPROTO_ISA(Box)

AstBox *astBoxId_( void *, int, const double[], const double[], AstRegion *, const char *, ... )__attribute__((format(printf,6,7)));
#define astCheckBox(this) astINVOKE_CHECK(Box,this,0)
#define astVerifyBox(this) astINVOKE_CHECK(Box,this,1)

#define astIsABox(this) astINVOKE_ISA(Box,this)

#define astBox astINVOKE(F,astBoxId_)
/* circle. */
/* ======= */

typedef struct AstCircle {

   AstRegion region;

   double *centre;
   double radius;
   double *lb;
   double *ub;
   int stale;

} AstCircle;
astPROTO_CHECK(Circle)
astPROTO_ISA(Circle)

AstCircle *astCircleId_( void *, int, const double[], const double[],
                         AstRegion *, const char *, ... )__attribute__((format(printf,6,7)));
void astCirclePars_( AstCircle *, double *, double *, double *, int * );
#define astCheckCircle(this) astINVOKE_CHECK(Circle,this,0)
#define astVerifyCircle(this) astINVOKE_CHECK(Circle,this,1)

#define astIsACircle(this) astINVOKE_ISA(Circle,this)

#define astCircle astINVOKE(F,astCircleId_)
#define astCirclePars(this,centre,radius,p1) astINVOKE(V,astCirclePars_(astCheckCircle(this),centre,radius,p1,STATUS_PTR))
/* cmpregion. */
/* ========== */

#define STATUS_PTR astGetStatusPtr

#define AST__AND 1
#define AST__OR 2
#define AST__XOR 3
typedef struct AstCmpRegion {

   AstRegion region;

   AstRegion *region1;
   AstRegion *region2;
   int oper;
   double *rvals[ 2 ];
   double *offs[ 2 ];
   int nbreak[ 2 ];
   double d0[ 2 ];
   double dtot[ 2 ];
   AstRegion *xor1;
   AstRegion *xor2;
   int bounded;
} AstCmpRegion;
astPROTO_CHECK(CmpRegion)
astPROTO_ISA(CmpRegion)

AstCmpRegion *astCmpRegionId_( void *, void *, int, const char *, ... )__attribute__((format(printf,4,5)));
#define astCheckCmpRegion(this) astINVOKE_CHECK(CmpRegion,this,0)
#define astVerifyCmpRegion(this) astINVOKE_CHECK(CmpRegion,this,1)

#define astIsACmpRegion(this) astINVOKE_ISA(CmpRegion,this)

#define astCmpRegion astINVOKE(F,astCmpRegionId_)
/* ellipse. */
/* ======== */

typedef struct AstEllipse {

   AstRegion region;

   double *centre;
   double *point1;
   double angle;
   double a;
   double b;
   double lbx;
   double ubx;
   double lby;
   double uby;
   int stale;

} AstEllipse;
astPROTO_CHECK(Ellipse)
astPROTO_ISA(Ellipse)

AstEllipse *astEllipseId_( void *, int, const double[2], const double[2], const double[2], AstRegion *, const char *, ... )__attribute__((format(printf,7,8)));
void astEllipsePars_( AstEllipse *, double[2], double *, double *, double *, double[2], double[2], int * );
#define astCheckEllipse(this) astINVOKE_CHECK(Ellipse,this,0)
#define astVerifyEllipse(this) astINVOKE_CHECK(Ellipse,this,1)

#define astIsAEllipse(this) astINVOKE_ISA(Ellipse,this)

#define astEllipse astINVOKE(F,astEllipseId_)
#define astEllipsePars(this,centre,a,b,angle,p1,p2) astINVOKE(V,astEllipsePars_(astCheckEllipse(this),centre,a,b,angle,p1,p2,STATUS_PTR))
/* interval. */
/* ========= */

typedef struct AstInterval {

   AstRegion region;

   double *lbnd;
   double *ubnd;
   AstBox *box;
   int stale;

} AstInterval;
astPROTO_CHECK(Interval)
astPROTO_ISA(Interval)

AstInterval *astIntervalId_( void *, const double[], const double[], AstRegion *, const char *, ... )__attribute__((format(printf,5,6)));
#define astCheckInterval(this) astINVOKE_CHECK(Interval,this,0)
#define astVerifyInterval(this) astINVOKE_CHECK(Interval,this,1)

#define astIsAInterval(this) astINVOKE_ISA(Interval,this)

#define astInterval astINVOKE(F,astIntervalId_)
/* nullregion. */
/* =========== */

typedef struct AstNullRegion {

   AstRegion region;

} AstNullRegion;
astPROTO_CHECK(NullRegion)
astPROTO_ISA(NullRegion)

AstNullRegion *astNullRegionId_( void *, AstRegion *, const char *, ... )__attribute__((format(printf,3,4)));
#define astCheckNullRegion(this) astINVOKE_CHECK(NullRegion,this,0)
#define astVerifyNullRegion(this) astINVOKE_CHECK(NullRegion,this,1)

#define astIsANullRegion(this) astINVOKE_ISA(NullRegion,this)

#define astNullRegion astINVOKE(F,astNullRegionId_)
/* pointlist. */
/* ========== */

typedef struct AstPointList {

   AstRegion region;

   double *lbnd;
   double *ubnd;
} AstPointList;
astPROTO_CHECK(PointList)
astPROTO_ISA(PointList)

AstPointList *astPointListId_( void *, int, int, int, const double *, AstRegion *, const char *, ... )__attribute__((format(printf,7,8)));
#define astCheckPointList(this) astINVOKE_CHECK(PointList,this,0)
#define astVerifyPointList(this) astINVOKE_CHECK(PointList,this,1)

#define astIsAPointList(this) astINVOKE_ISA(PointList,this)

#define astPointList astINVOKE(F,astPointListId_)
/* polygon. */
/* ======== */

#define STATUS_PTR astGetStatusPtr
typedef int AstTimeScaleType;

typedef struct AstTimeFrame {

   AstFrame frame;

   double ltoffset;
   double timeorigin;
   AstTimeScaleType timescale;
   AstTimeScaleType aligntimescale;
} AstTimeFrame;
astPROTO_CHECK(TimeFrame)
astPROTO_ISA(TimeFrame)

AstTimeFrame *astTimeFrameId_( const char *, ... )__attribute__((format(printf,1,2)));
double astCurrentTime_( AstTimeFrame *, int * );
#define astCheckTimeFrame(this) astINVOKE_CHECK(TimeFrame,this,0)
#define astVerifyTimeFrame(this) astINVOKE_CHECK(TimeFrame,this,1)

#define astIsATimeFrame(this) astINVOKE_ISA(TimeFrame,this)

#define astTimeFrame astINVOKE(F,astTimeFrameId_)
#define astCurrentTime(this) astINVOKE(V,astCurrentTime_(astCheckTimeFrame(this),STATUS_PTR))
#define AST__LE 2
#define AST__EQ 3
#define AST__GE 4
#define AST__GT 5
#define AST__NE 6

typedef struct AstPolygon {

   AstRegion region;

   double in[2];
   double lbnd[2];
   double ubnd[2];
   AstLineDef **edges;
   double *startsat;
   double totlen;
   int acw;
   int stale;
   int simp_vertices;
} AstPolygon;
astPROTO_CHECK(Polygon)
astPROTO_ISA(Polygon)

AstPolygon *astPolygonId_( void *, int, int, const double *, AstRegion *, const char *, ... )__attribute__((format(printf,6,7)));
AstPolygon *astDownsize_( AstPolygon *, double, int, int * );

AstPolygon *astOutlineLD_( long double, int, const long double[], const int[2], const int[2], double, int, const int[2], int, int * );

AstPolygon *astOutlineB_( signed char, int, const signed char[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutlineD_( double, int, const double[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutlineF_( float, int, const float[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutlineI_( int, int, const int[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutlineL_( long int, int, const long int[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutlineS_( short int, int, const short int[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutlineUB_( unsigned char, int, const unsigned char[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutlineUI_( unsigned int, int, const unsigned int[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutlineUL_( unsigned long int, int, const unsigned long int[], const int[2], const int[2], double, int, const int[2], int, int * );
AstPolygon *astOutlineUS_( unsigned short int, int, const unsigned short int[], const int[2], const int[2], double, int, const int[2], int, int * );

AstPolygon *astConvexLD_( long double, int, const long double[], const int[2], const int[2], int, int * );

AstPolygon *astConvexB_( signed char, int, const signed char[], const int[2], const int[2], int, int * );
AstPolygon *astConvexD_( double, int, const double[], const int[2], const int[2], int, int * );
AstPolygon *astConvexF_( float, int, const float[], const int[2], const int[2], int, int * );
AstPolygon *astConvexI_( int, int, const int[], const int[2], const int[2], int, int * );
AstPolygon *astConvexL_( long int, int, const long int[], const int[2], const int[2], int, int * );
AstPolygon *astConvexS_( short int, int, const short int[], const int[2], const int[2], int, int * );
AstPolygon *astConvexUB_( unsigned char, int, const unsigned char[], const int[2], const int[2], int, int * );
AstPolygon *astConvexUI_( unsigned int, int, const unsigned int[], const int[2], const int[2], int, int * );
AstPolygon *astConvexUL_( unsigned long int, int, const unsigned long int[], const int[2], const int[2], int, int * );
AstPolygon *astConvexUS_( unsigned short int, int, const unsigned short int[], const int[2], const int[2], int, int * );
#define astCheckPolygon(this) astINVOKE_CHECK(Polygon,this,0)
#define astVerifyPolygon(this) astINVOKE_CHECK(Polygon,this,1)

#define astIsAPolygon(this) astINVOKE_ISA(Polygon,this)

#define astPolygon astINVOKE(F,astPolygonId_)
#define astDownsize(this,maxerr,maxvert) astINVOKE(O,astDownsize_(astCheckPolygon(this),maxerr,maxvert,STATUS_PTR))

#define astOutlineLD(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) astINVOKE(O,astOutlineLD_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))

#define astOutlineB(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) astINVOKE(O,astOutlineB_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineD(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) astINVOKE(O,astOutlineD_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineF(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) astINVOKE(O,astOutlineF_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineI(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) astINVOKE(O,astOutlineI_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineL(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) astINVOKE(O,astOutlineL_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineS(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) astINVOKE(O,astOutlineS_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineUB(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) astINVOKE(O,astOutlineUB_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineUI(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) astINVOKE(O,astOutlineUI_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineUL(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) astINVOKE(O,astOutlineUL_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))
#define astOutlineUS(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix) astINVOKE(O,astOutlineUS_(value,oper,array,lbnd,ubnd,maxerr,maxvert,inside,starpix,STATUS_PTR))

#define astConvexLD(value,oper,array,lbnd,ubnd,starpix) astINVOKE(O,astConvexLD_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))

#define astConvexB(value,oper,array,lbnd,ubnd,starpix) astINVOKE(O, astConvexB_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define astConvexD(value,oper,array,lbnd,ubnd,starpix) astINVOKE(O, astConvexD_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define astConvexF(value,oper,array,lbnd,ubnd,starpix) astINVOKE(O, astConvexF_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define astConvexI(value,oper,array,lbnd,ubnd,starpix) astINVOKE(O, astConvexI_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define astConvexL(value,oper,array,lbnd,ubnd,starpix) astINVOKE(O, astConvexL_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define astConvexS(value,oper,array,lbnd,ubnd,starpix) astINVOKE(O, astConvexS_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define astConvexUB(value,oper,array,lbnd,ubnd,starpix) astINVOKE(O, astConvexUB_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define astConvexUI(value,oper,array,lbnd,ubnd,starpix) astINVOKE(O, astConvexUI_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define astConvexUL(value,oper,array,lbnd,ubnd,starpix) astINVOKE(O, astConvexUL_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
#define astConvexUS(value,oper,array,lbnd,ubnd,starpix) astINVOKE(O, astConvexUS_(value,oper,array,lbnd,ubnd,starpix,STATUS_PTR))
/* prism. */
/* ====== */

#define STATUS_PTR astGetStatusPtr

typedef struct AstPrism {

   AstRegion region;

   AstRegion *region1;
   AstRegion *region2;

} AstPrism;
astPROTO_CHECK(Prism)
astPROTO_ISA(Prism)

AstPrism *astPrismId_( void *, void *, const char *, ... )__attribute__((format(printf,3,4)));
#define astCheckPrism(this) astINVOKE_CHECK(Prism,this,0)
#define astVerifyPrism(this) astINVOKE_CHECK(Prism,this,1)

#define astIsAPrism(this) astINVOKE_ISA(Prism,this)

#define astPrism astINVOKE(F,astPrismId_)
/* stc. */
/* ==== */

#define STATUS_PTR astGetStatusPtr

#define AST__STCNAME "Name"
#define AST__STCVALUE "Value"
#define AST__STCERROR "Error"
#define AST__STCRES "Resolution"
#define AST__STCSIZE "Size"
#define AST__STCPIXSZ "PixSize"
typedef struct AstStc {

   AstRegion parent_region;

   AstRegion *region;
   AstKeyMap **coord;
   int ncoord;
} AstStc;
astPROTO_CHECK(Stc)
astPROTO_ISA(Stc)
AstRegion *astGetStcRegion_( AstStc *, int * );
AstKeyMap *astGetStcCoord_( AstStc *, int, int * );
int astGetStcNCoord_( AstStc *, int * );
#define astCheckStc(this) astINVOKE_CHECK(Stc,this,0)
#define astVerifyStc(this) astINVOKE_CHECK(Stc,this,1)

#define astIsAStc(this) astINVOKE_ISA(Stc,this)
#define astGetStcRegion(this) astINVOKE(O,astGetStcRegion_(astCheckStc(this),STATUS_PTR))
#define astGetStcCoord(this,icoord) astINVOKE(O,astGetStcCoord_(astCheckStc(this),icoord,STATUS_PTR))
#define astGetStcNCoord(this) astINVOKE(V,astGetStcNCoord_(astCheckStc(this),STATUS_PTR))
/* stcresourceprofile. */
/* =================== */

typedef struct AstStcResourceProfile {

   AstStc stc;

} AstStcResourceProfile;
astPROTO_CHECK(StcResourceProfile)
astPROTO_ISA(StcResourceProfile)

AstStcResourceProfile *astStcResourceProfileId_( void *, int, AstKeyMap **, const char *, ... )__attribute__((format(printf,4,5)));
#define astCheckStcResourceProfile(this) astINVOKE_CHECK(StcResourceProfile,this,0)
#define astVerifyStcResourceProfile(this) astINVOKE_CHECK(StcResourceProfile,this,1)

#define astIsAStcResourceProfile(this) astINVOKE_ISA(StcResourceProfile,this)

#define astStcResourceProfile astINVOKE(F,astStcResourceProfileId_)
/* stcsearchlocation. */
/* ================== */

typedef struct AstStcSearchLocation {

   AstStc stc;

} AstStcSearchLocation;
astPROTO_CHECK(StcSearchLocation)
astPROTO_ISA(StcSearchLocation)

AstStcSearchLocation *astStcSearchLocationId_( void *, int, AstKeyMap **, const char *, ... )__attribute__((format(printf,4,5)));
#define astCheckStcSearchLocation(this) astINVOKE_CHECK(StcSearchLocation,this,0)
#define astVerifyStcSearchLocation(this) astINVOKE_CHECK(StcSearchLocation,this,1)

#define astIsAStcSearchLocation(this) astINVOKE_ISA(StcSearchLocation,this)

#define astStcSearchLocation astINVOKE(F,astStcSearchLocationId_)
/* stccatalogentrylocation. */
/* ======================== */

typedef struct AstStcCatalogEntryLocation {

   AstStc stc;

} AstStcCatalogEntryLocation;
astPROTO_CHECK(StcCatalogEntryLocation)
astPROTO_ISA(StcCatalogEntryLocation)

AstStcCatalogEntryLocation *astStcCatalogEntryLocationId_( void *, int, AstKeyMap **, const char *, ... )__attribute__((format(printf,4,5)));
#define astCheckStcCatalogEntryLocation(this) astINVOKE_CHECK(StcCatalogEntryLocation,this,0)
#define astVerifyStcCatalogEntryLocation(this) astINVOKE_CHECK(StcCatalogEntryLocation,this,1)

#define astIsAStcCatalogEntryLocation(this) astINVOKE_ISA(StcCatalogEntryLocation,this)

#define astStcCatalogEntryLocation astINVOKE(F,astStcCatalogEntryLocationId_)
/* stcobsdatalocation. */
/* =================== */

typedef struct AstStcObsDataLocation {

   AstStc stc;

   AstPointList *obs;

} AstStcObsDataLocation;
astPROTO_CHECK(StcObsDataLocation)
astPROTO_ISA(StcObsDataLocation)

AstStcObsDataLocation *astStcObsDataLocationId_( void *, int, AstKeyMap **, const char *, ... )__attribute__((format(printf,4,5)));
#define astCheckStcObsDataLocation(this) astINVOKE_CHECK(StcObsDataLocation,this,0)
#define astVerifyStcObsDataLocation(this) astINVOKE_CHECK(StcObsDataLocation,this,1)

#define astIsAStcObsDataLocation(this) astINVOKE_ISA(StcObsDataLocation,this)

#define astStcObsDataLocation astINVOKE(F,astStcObsDataLocationId_)
/* timeframe. */
/* ========== */

/* channel. */
/* ======== */

/* fitschan. */
/* ========= */

/* stcschan. */
/* ========= */

#define STATUS_PTR astGetStatusPtr

#define AST__STCSCHAN_GETATTRIB_BUFF_LEN 200
typedef struct AstStcsChan {

   AstChannel channel;

   int stcsarea;
   int stcscoords;
   int stcsprops;
   int stcslength;
} AstStcsChan;
astPROTO_CHECK(StcsChan)
astPROTO_ISA(StcsChan)

AstStcsChan *astStcsChanId_( const char *(*)( void ), void (*)( const char * ),
                            const char *, ... );
AstStcsChan *astStcsChanForId_( const char *(*)( void ),
                              char *(*)( const char *(*)( void ), int * ),
                              void (*)( const char * ),
                              void (*)( void (*)( const char * ),
                                        const char *, int * ),
                              const char *, ... );
#define astCheckStcsChan(this) astINVOKE_CHECK(StcsChan,this,0)
#define astVerifyStcsChan(this) astINVOKE_CHECK(StcsChan,this,1)

#define astIsAStcsChan(this) astINVOKE_ISA(StcsChan,this)

#define astStcsChan astINVOKE(F,astStcsChanId_)
#define astStcsChanFor astINVOKE(F,astStcsChanForId_)
/* xmlchan. */
/* ======== */

#define STATUS_PTR astGetStatusPtr

#define AST__XMLNS "http://www.starlink.ac.uk/ast/xml/"
typedef struct AstXmlChan {

   AstChannel channel;

   const char *objectname;
   const char *objectcomment;
   int objectset;
   AstXmlParent *container;
   AstXmlDocument *readcontext;
   int write_isa;
   int xmllength;
   int xmlformat;
   int formatdef;
   char *xmlprefix;
   int reset_source;
   const char *isa_class;
} AstXmlChan;
astPROTO_CHECK(XmlChan)
astPROTO_ISA(XmlChan)

AstXmlChan *astXmlChanId_( const char *(*)( void ), void (*)( const char * ),
                            const char *, ... )__attribute__((format(printf,3,4)));
AstXmlChan *astXmlChanForId_( const char *(*)( void ),
                              char *(*)( const char *(*)( void ), int * ),
                              void (*)( const char * ),
                              void (*)( void (*)( const char * ),
                                        const char *, int * ),
                              const char *, ... );
#define astCheckXmlChan(this) astINVOKE_CHECK(XmlChan,this,0)
#define astVerifyXmlChan(this) astINVOKE_CHECK(XmlChan,this,1)

#define astIsAXmlChan(this) astINVOKE_ISA(XmlChan,this)

#define astXmlChan astINVOKE(F,astXmlChanId_)
#define astXmlChanFor astINVOKE(F,astXmlChanForId_)

#endif
