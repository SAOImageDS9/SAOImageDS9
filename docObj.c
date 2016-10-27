/* docObj.c --
 *
 *	This module manages libxml2 xmlDocPtr Tcl objects.
 *
 * Copyright (c) 2005 by Explain.
 * http://www.explain.com.au/
 * Copyright (c) 2003-2004 Zveno Pty Ltd
 * http://www.zveno.com/
 *
 * See the file "LICENSE" for information on usage and
 * redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * $Id: docObj.c,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $
 */

#include <tclxml-libxml2/tclxml-libxml2.h>
#include <libxml/xmlerror.h>
#include <string.h>

#define TCL_DOES_STUBS \
    (TCL_MAJOR_VERSION > 8 || TCL_MAJOR_VERSION == 8 && (TCL_MINOR_VERSION > 1 || \
    (TCL_MINOR_VERSION == 1 && TCL_RELEASE_LEVEL == TCL_FINAL_RELEASE)))

#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLEXPORT

/*
 * Basic list for tracking Tcl_Obj's for a document.
 */

typedef struct ObjList {
  Tcl_Obj *objPtr;
  struct ObjList *next;
} ObjList;

/*
 * Prototypes for procedures defined later in this file:
 */

static void DestroyTclDoc _ANSI_ARGS_((TclXML_libxml2_Document *tDocPtr));

Tcl_FreeInternalRepProc	TclXMLlibxml2_DocFree;
Tcl_DupInternalRepProc	TclXMLlibxml2_DocDup;
Tcl_UpdateStringProc	TclXMLlibxml2_DocUpdate;
Tcl_SetFromAnyProc	TclXMLlibxml2_DocSetFromAny;

Tcl_ObjType TclXMLlibxml2_DocObjType = {
  "libxml2-doc",
  TclXMLlibxml2_DocFree,
  TclXMLlibxml2_DocDup,
  TclXMLlibxml2_DocUpdate,
  TclXMLlibxml2_DocSetFromAny
};

typedef struct ThreadSpecificData {
  int initialized;

  /*
   * Hash table for mapping string rep to doc structure.
   */

  Tcl_HashTable *documents;
  int docCntr;

  /*
   * Hash table for tracking doc objects.
   */

  Tcl_HashTable *docByPtr;

  /*
   * Structured error handling
   */

  TclXML_ErrorInfo *errorInfoPtr;

} ThreadSpecificData;
static Tcl_ThreadDataKey dataKey;

/*
 * libxml2 is mostly thread-safe, but just-in-case use a mutex to control access.
 */

TCL_DECLARE_MUTEX(libxml2)

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_libxml2_InitDocObj --
 *
 *  Initialise this module.
 *
 * Results:
 *  Returns success code
 *
 * Side effects:
 *  Memory may be allocated
 *
 *----------------------------------------------------------------------------
 */

int
TclXML_libxml2_InitDocObj(interp)
    Tcl_Interp *interp;
{
  ThreadSpecificData *tsdPtr = Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));

  tsdPtr->initialized = 1;
  tsdPtr->documents = (Tcl_HashTable *) Tcl_Alloc(sizeof(Tcl_HashTable));
  Tcl_InitHashTable(tsdPtr->documents, TCL_STRING_KEYS);
  tsdPtr->docByPtr = (Tcl_HashTable *) Tcl_Alloc(sizeof(Tcl_HashTable));
  Tcl_InitHashTable(tsdPtr->docByPtr, TCL_ONE_WORD_KEYS);

  tsdPtr->docCntr = 0;

  /*
   * Setup an error handler that stores structured error info
   */

  tsdPtr->errorInfoPtr = (TclXML_ErrorInfo *) Tcl_Alloc(sizeof(TclXML_ErrorInfo));
  tsdPtr->errorInfoPtr->interp = interp;
  tsdPtr->errorInfoPtr->listPtr = NULL;
  tsdPtr->errorInfoPtr->nodeHandlerProc = NULL;
  xmlSetStructuredErrorFunc((void *) tsdPtr->errorInfoPtr, TclXML_libxml2_ErrorHandler);

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_libxml2_NewDocObj --
 *
 *  Creates a new xmlDocPtr and wraps it in a Tcl_Obj.
 *
 * Results:
 *  Returns a *TclObj
 *
 * Side effects:
 *  Objects allocated.
 *
 *----------------------------------------------------------------------------
 */

Tcl_Obj *
TclXML_libxml2_NewDocObj(interp)
     Tcl_Interp *interp;
{
  xmlDocPtr new;

  Tcl_MutexLock(&libxml2);
  new = xmlNewDoc((const xmlChar *) "1.0");
  Tcl_MutexUnlock(&libxml2);
  if (!new) {
    Tcl_SetResult(interp, "unable to create document", NULL);
    return NULL;
  }

  return TclXML_libxml2_CreateObjFromDoc(new);
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_libxml2_CreateObjFromDoc --
 *
 *  Create a Tcl_Obj to wrap a xmlDocPtr.
 *
 * Results:
 *  Returns Tcl_Obj*.
 *
 * Side effects:
 *  Allocates object.
 *
 *----------------------------------------------------------------------------
 */

Tcl_Obj *
TclXML_libxml2_CreateObjFromDoc (docPtr)
  xmlDocPtr docPtr;
{
  ThreadSpecificData *tsdPtr = Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  TclXML_libxml2_Document *tDocPtr;
  Tcl_HashEntry *entryPtr;
  Tcl_Obj *objPtr;
  ObjList *listPtr;

  /*
   * This xmlDocPtr may already have been wrapped by a Tcl object.
   * If so, return an already existing wrapper.
   * If not, create a new wrapper.
   */

  entryPtr = Tcl_FindHashEntry(tsdPtr->docByPtr, (ClientData) docPtr);
  if (entryPtr) {
    tDocPtr = (TclXML_libxml2_Document *) Tcl_GetHashValue(entryPtr);

    if (tDocPtr->objs) {
      /* The first object is sufficient */
      listPtr = (ObjList *) tDocPtr->objs;
      objPtr = listPtr->objPtr;
    } else {
      /* Create a new Tcl_Obj to refer to existing structure */
      objPtr = Tcl_NewObj();

      listPtr = (ObjList *) Tcl_Alloc(sizeof(ObjList));
      listPtr->objPtr = objPtr;
      listPtr->next = NULL;
      tDocPtr->objs = (void *) listPtr;

      objPtr->length = strlen(tDocPtr->token);
      objPtr->bytes = Tcl_Alloc(objPtr->length + 1);
      strcpy(objPtr->bytes, tDocPtr->token);
      objPtr->internalRep.twoPtrValue.ptr1 = (void *) tDocPtr;
      objPtr->internalRep.twoPtrValue.ptr2 = NULL;
      objPtr->typePtr = &TclXMLlibxml2_DocObjType;
    }

  } else {
    int new;

    objPtr = Tcl_NewObj();

    tDocPtr = (TclXML_libxml2_Document *) Tcl_Alloc(sizeof(TclXML_libxml2_Document));
    tDocPtr->docPtr = docPtr;
    tDocPtr->token = Tcl_Alloc(20);
    sprintf(tDocPtr->token, "doc%d", tsdPtr->docCntr++);
    tDocPtr->keep = TCLXML_LIBXML2_DOCUMENT_IMPLICIT;
    tDocPtr->dom = NULL;
    tDocPtr->domfree = NULL;
    tDocPtr->apphook = NULL;
    tDocPtr->appfree = NULL;

    listPtr = (ObjList *) Tcl_Alloc(sizeof(ObjList));
    listPtr->objPtr = objPtr;
    listPtr->next = NULL;
    tDocPtr->objs = (void *) listPtr;

    entryPtr = Tcl_CreateHashEntry(tsdPtr->documents, tDocPtr->token, &new);
    Tcl_SetHashValue(entryPtr, (ClientData) tDocPtr);
    entryPtr = Tcl_CreateHashEntry(tsdPtr->docByPtr, (ClientData) docPtr, &new);
    Tcl_SetHashValue(entryPtr, (ClientData) tDocPtr);

    objPtr->length = strlen(tDocPtr->token);
    objPtr->bytes = Tcl_Alloc(objPtr->length + 1);
    strcpy(objPtr->bytes, tDocPtr->token);
    objPtr->internalRep.twoPtrValue.ptr1 = (void *) tDocPtr;
    objPtr->internalRep.twoPtrValue.ptr2 = NULL;
    objPtr->typePtr = &TclXMLlibxml2_DocObjType;
  }

  /* Bug fix #1032660.  David Welton. */
  Tcl_IncrRefCount(objPtr);

  return objPtr;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_libxml2_GetDocFromObj --
 *
 *  Retrieve the xmlDocPtr from a Tcl object.
 *
 * Results:
 *  Returns success code.
 *
 * Side effects:
 *  May set internal rep of object.
 *
 *----------------------------------------------------------------------------
 */

int
TclXML_libxml2_GetDocFromObj (interp, objPtr, docPtr)
     Tcl_Interp *interp;
     Tcl_Obj *objPtr;
     xmlDocPtr *docPtr;
{
  TclXML_libxml2_Document *tDocPtr;

  if (TclXML_libxml2_GetTclDocFromObj(interp, objPtr, &tDocPtr) != TCL_OK) {
    return TCL_ERROR;
  }

  *docPtr = tDocPtr->docPtr;

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_libxml2_GetTclDocFromNode --
 *
 *  Retrieve a pointer to the TclXML Doc structure from a xmlNodePtr.
 *
 * Results:
 *  Returns success code.
 *
 * Side effects:
 *  Sets pointer
 *
 *----------------------------------------------------------------------------
 */

int
TclXML_libxml2_GetTclDocFromNode (interp, nodePtr, tDocPtrPtr)
     Tcl_Interp *interp;
     xmlNodePtr nodePtr;
     TclXML_libxml2_Document **tDocPtrPtr;
{
  ThreadSpecificData *tsdPtr = Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  Tcl_HashEntry *entryPtr;

  entryPtr = Tcl_FindHashEntry(tsdPtr->docByPtr, (ClientData) nodePtr->doc);
  if (!entryPtr) {
    *tDocPtrPtr = NULL;
    Tcl_SetResult(interp, "document not known", NULL);
    return TCL_ERROR;
  }

  *tDocPtrPtr = (TclXML_libxml2_Document *) Tcl_GetHashValue(entryPtr);

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_libxml2_GetTclDocFromObj --
 *
 *  Retrieve the TclXML_libxml2_Document from a Tcl object.
 *
 * Results:
 *  Returns success code.
 *
 * Side effects:
 *  May set internal rep of object.
 *
 *----------------------------------------------------------------------------
 */

int
TclXML_libxml2_GetTclDocFromObj (interp, objPtr, tDocPtr)
     Tcl_Interp *interp;
     Tcl_Obj *objPtr;
     TclXML_libxml2_Document **tDocPtr;
{
  if (objPtr->typePtr == &TclXMLlibxml2_DocObjType) {
    *tDocPtr = (TclXML_libxml2_Document *) objPtr->internalRep.twoPtrValue.ptr1;
  } else if (TclXMLlibxml2_DocSetFromAny(interp, objPtr) == TCL_OK) {
    *tDocPtr = (TclXML_libxml2_Document *) objPtr->internalRep.twoPtrValue.ptr1;
  } else {
    return TCL_ERROR;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_libxml2_DestroyDocument --
 *
 *  Manage destruction of a document.
 *  The trick here is to make sure that all Tcl_Obj's
 *  that reference this document have their internal rep
 *  invalidated.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Memory deallocated, object internal reps changed.
 *
 *----------------------------------------------------------------------------
 */

void
TclXML_libxml2_DestroyDocument (tDocPtr)
     TclXML_libxml2_Document *tDocPtr;
{
  ObjList *listPtr = (ObjList *) tDocPtr->objs;
  ObjList *next;

  /*
   * Invalidate the internal representation of all Tcl_Obj's
   * that refer to this document.
   */
  while (listPtr) {
    next = listPtr->next;
    TclXMLlibxml2_DocFree(listPtr->objPtr);
    listPtr = next;
  }

  if (tDocPtr->keep == TCLXML_LIBXML2_DOCUMENT_KEEP) {
    DestroyTclDoc(tDocPtr);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_libxml2_DocKeep --
 *
 *  Changes how the document's destruction is handled.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Changes document configuration.
 *
 *----------------------------------------------------------------------------
 */

void
TclXML_libxml2_DocKeep(objPtr, keep)
     Tcl_Obj *objPtr;
     TclXML_libxml2_DocumentHandling keep;
{
  TclXML_libxml2_Document *tDocPtr;

  if (TclXML_libxml2_GetTclDocFromObj(NULL, objPtr, &tDocPtr) != TCL_OK) {
    return;
  }

  tDocPtr->keep = keep;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLlibxml2_DocSetFromAny --
 *
 *  Finds the xmlDocPtr wrapper for a Tcl object.
 *
 * Results:
 *  Returns success code.
 *
 * Side effects:
 *  Changes the Tcl_Obj's internal rep.
 *
 *----------------------------------------------------------------------------
 */

int
TclXMLlibxml2_DocSetFromAny(interp, objPtr)
     Tcl_Interp *interp;
     Tcl_Obj *objPtr;
{
  ThreadSpecificData *tsdPtr = Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  Tcl_HashEntry *entryPtr;
  TclXML_libxml2_Document *tDocPtr;
  ObjList *listPtr;

  entryPtr = Tcl_FindHashEntry(tsdPtr->documents, Tcl_GetStringFromObj(objPtr, NULL));

  if (entryPtr) {

    if (objPtr->typePtr != NULL && objPtr->typePtr->freeIntRepProc != NULL) {
      objPtr->typePtr->freeIntRepProc(objPtr);
    }

    objPtr->internalRep.twoPtrValue.ptr1 = Tcl_GetHashValue(entryPtr);
    objPtr->typePtr = &TclXMLlibxml2_DocObjType;

    tDocPtr = (TclXML_libxml2_Document *) objPtr->internalRep.twoPtrValue.ptr1;

    /*
     * Add this object to the Tcl_Obj list.
     * NB. There should be no duplicates.
     */
    listPtr = (ObjList *) tDocPtr->objs;
    if (listPtr == NULL) {
      listPtr = (ObjList *) Tcl_Alloc(sizeof(ObjList));
      listPtr->objPtr = objPtr;
      listPtr->next = NULL;
      tDocPtr->objs = listPtr;
    } else {
      ObjList *newPtr;

      newPtr = (ObjList *) Tcl_Alloc(sizeof(ObjList));
      newPtr->objPtr = objPtr;
      newPtr->next = listPtr;
      tDocPtr->objs = (void *) newPtr;
    }
    /* SANITY CHECK NEEDED: no duplicates in the list */

  } else {

    if (interp) {
      Tcl_ResetResult(interp);
      Tcl_AppendResult(interp, "token \"", Tcl_GetStringFromObj(objPtr, NULL), "\" is not a libxml2 document", NULL);
    }

    return TCL_ERROR;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLlibxml2_DocUpdate --
 *
 *  Finds the token for a xmlDocPtr wrapper.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Changes the Tcl_Obj's string rep.
 *
 *----------------------------------------------------------------------------
 */

void
TclXMLlibxml2_DocUpdate(objPtr)
     Tcl_Obj *objPtr;
{
  ThreadSpecificData *tsdPtr = Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  Tcl_HashEntry *entryPtr;

  entryPtr = Tcl_FindHashEntry(tsdPtr->docByPtr, objPtr->internalRep.twoPtrValue.ptr1);
  Tcl_InvalidateStringRep(objPtr);
  if (entryPtr != NULL) {
    TclXML_libxml2_Document *tDocPtr = (TclXML_libxml2_Document *) Tcl_GetHashValue(entryPtr);
    objPtr->length = strlen(tDocPtr->token);
    objPtr->bytes = Tcl_Alloc(objPtr->length + 1);
    strcpy(objPtr->bytes, tDocPtr->token);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLlibxml2_DocDup --
 *
 *  Duplicates the Tcl wrapper.
 *  NB. This does *not* copy the document itself - it simply creates
 *  another reference to the same document.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Changes the target Tcl_Obj.
 *
 *----------------------------------------------------------------------------
 */

void
TclXMLlibxml2_DocDup(srcPtr, dstPtr)
     Tcl_Obj *srcPtr;
     Tcl_Obj *dstPtr;
{
  TclXML_libxml2_Document *tDocPtr;
  ObjList *listPtr;

  if (dstPtr->typePtr != NULL && dstPtr->typePtr->freeIntRepProc != NULL) {
    dstPtr->typePtr->freeIntRepProc(dstPtr);
  }

  tDocPtr = (TclXML_libxml2_Document *) srcPtr->internalRep.twoPtrValue.ptr1;
  listPtr = (ObjList *) Tcl_Alloc(sizeof(ObjList));
  listPtr->objPtr = dstPtr;
  listPtr->next = ((ObjList *) tDocPtr->objs)->next;
  tDocPtr->objs = listPtr;

  Tcl_InvalidateStringRep(dstPtr);

  dstPtr->internalRep.twoPtrValue.ptr1 = srcPtr->internalRep.twoPtrValue.ptr1;
  dstPtr->internalRep.twoPtrValue.ptr2 = NULL;
  dstPtr->typePtr = srcPtr->typePtr;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLlibxml2_DocFree --
 *
 *  Removes a Tcl wrapper to a libxml2 document.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  May free the document.
 *
 *----------------------------------------------------------------------------
 */

void
TclXMLlibxml2_DocFree(objPtr)
     Tcl_Obj *objPtr;
{
  TclXML_libxml2_Document *tDocPtr = (TclXML_libxml2_Document *) objPtr->internalRep.twoPtrValue.ptr1;
  ObjList *listPtr = tDocPtr->objs;
  ObjList *prevPtr = NULL;

  while (listPtr) {
    if (listPtr->objPtr == objPtr) {
      break;
    }
    prevPtr = listPtr;
    listPtr = listPtr->next;
  }

  if (listPtr == NULL) {
    /* internal error */
  } else if (prevPtr == NULL) {
    tDocPtr->objs = listPtr->next;
  } else {
    prevPtr->next = listPtr->next;
  }
  Tcl_Free((char *) listPtr);

  if (tDocPtr->objs == NULL && tDocPtr->keep == TCLXML_LIBXML2_DOCUMENT_IMPLICIT) {
    DestroyTclDoc(tDocPtr);
  }

  objPtr->internalRep.twoPtrValue.ptr1 = NULL;
  objPtr->internalRep.twoPtrValue.ptr2 = NULL;
  objPtr->typePtr = NULL;
}

/*
 *----------------------------------------------------------------------------
 *
 * DestroyTclDoc --
 *
 *  Destroy the Tcl wrapper for a document.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Free memory.
 *
 *----------------------------------------------------------------------------
 */

void
DestroyTclDoc(tDocPtr)
     TclXML_libxml2_Document *tDocPtr;
{
  ThreadSpecificData *tsdPtr = Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  Tcl_HashEntry *entryPtr;

  if (tDocPtr->domfree) {
    (tDocPtr->domfree)(tDocPtr->dom);
  }
  if (tDocPtr->appfree) {
    (tDocPtr->appfree)(tDocPtr->dom);
  }

  entryPtr = Tcl_FindHashEntry(tsdPtr->documents, tDocPtr->token);
  if (entryPtr) {
    Tcl_DeleteHashEntry(entryPtr);
  } else {
    /* Internal error */
  }

  entryPtr = Tcl_FindHashEntry(tsdPtr->docByPtr, (ClientData) tDocPtr->docPtr);
  if (entryPtr) {
    Tcl_DeleteHashEntry(entryPtr);
  } else {
    /* Internal error */
  }

  Tcl_MutexLock(&libxml2);
  xmlFreeDoc(tDocPtr->docPtr);
  Tcl_MutexUnlock(&libxml2);

  Tcl_Free(tDocPtr->token);
  Tcl_Free((char *) tDocPtr);
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_libxml2_ErrorHandler --
 *
 *  Handler for structured error reports
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Creates a Tcl_Obj to store the error information.
 *
 *----------------------------------------------------------------------------
 */

static Tcl_Obj *
ErrorDomainToString(domain)
     int domain;
{
  switch ((xmlErrorDomain) domain) {
  case XML_FROM_NONE:
    return Tcl_NewStringObj("none", -1);
  case XML_FROM_PARSER:
    return Tcl_NewStringObj("parser", -1);
  case XML_FROM_TREE:
    return Tcl_NewStringObj("tree", -1);
  case XML_FROM_NAMESPACE:
    return Tcl_NewStringObj("namespace", -1);
  case XML_FROM_DTD:
    return Tcl_NewStringObj("dtd-validation", -1);
  case XML_FROM_HTML:
    return Tcl_NewStringObj("html-parser", -1);
  case XML_FROM_MEMORY:
    return Tcl_NewStringObj("memory", -1);
  case XML_FROM_OUTPUT:
    return Tcl_NewStringObj("output", -1);
  case XML_FROM_IO:
    return Tcl_NewStringObj("io", -1);
  case XML_FROM_FTP:
    return Tcl_NewStringObj("ftp", -1);
  case XML_FROM_HTTP:
    return Tcl_NewStringObj("http", -1);
  case XML_FROM_XINCLUDE:
    return Tcl_NewStringObj("XInclude", -1);
  case XML_FROM_XPOINTER:
    return Tcl_NewStringObj("XPointer", -1);
  case XML_FROM_REGEXP:
    return Tcl_NewStringObj("regexp", -1);
  case XML_FROM_DATATYPE:
    return Tcl_NewStringObj("schemas-datatype", -1);
  case XML_FROM_SCHEMASP:
    return Tcl_NewStringObj("schemas-parser", -1);
  case XML_FROM_SCHEMASV:
    return Tcl_NewStringObj("schemas-validation", -1);
  case XML_FROM_RELAXNGP:
    return Tcl_NewStringObj("relaxng-parser", -1);
  case XML_FROM_RELAXNGV:
    return Tcl_NewStringObj("relaxng-validation", -1);
  case XML_FROM_CATALOG:
    return Tcl_NewStringObj("catalog", -1);
  case XML_FROM_C14N:
    return Tcl_NewStringObj("canonicalization", -1);
  case XML_FROM_XSLT:
    return Tcl_NewStringObj("xslt", -1);
  default:
    return Tcl_NewObj();
  }
}

static Tcl_Obj *
ErrorLevelToString(level)
     xmlErrorLevel level;
{
  switch (level) {
  case XML_ERR_WARNING:
    return Tcl_NewStringObj("warning", -1);
  case XML_ERR_ERROR:
    return Tcl_NewStringObj("error", -1);
  case XML_ERR_FATAL:
    return Tcl_NewStringObj("fatal", -1);
  case XML_ERR_NONE:
  default:
    return Tcl_NewStringObj("none", -1);
  }
}

static Tcl_Obj *
ErrorCodeToString(code)
     int code;
{
  switch ((xmlParserErrors) code) {
  case XML_ERR_OK:
    return Tcl_NewObj();
  case XML_ERR_INTERNAL_ERROR:
    return Tcl_NewStringObj("internal-error", -1);
  case XML_ERR_NO_MEMORY:
    return Tcl_NewStringObj("no-memory", -1);
  case XML_ERR_DOCUMENT_START:
    return Tcl_NewStringObj("document-start", -1);
  case XML_ERR_DOCUMENT_EMPTY:
    return Tcl_NewStringObj("document-empty", -1);
  case XML_ERR_DOCUMENT_END:
    return Tcl_NewStringObj("document-end", -1);
  case XML_ERR_INVALID_HEX_CHARREF:
    return Tcl_NewStringObj("invalid-hex-character-reference", -1);
  case XML_ERR_INVALID_DEC_CHARREF:
    return Tcl_NewStringObj("invalid-decimal-character-reference", -1);
  case XML_ERR_INVALID_CHARREF:
    return Tcl_NewStringObj("invalid-character-reference", -1);
  case XML_ERR_INVALID_CHAR:
    return Tcl_NewStringObj("invalid-character", -1);
  case XML_ERR_CHARREF_AT_EOF:
    return Tcl_NewStringObj("character-reference-at-eof", -1);
  case XML_ERR_CHARREF_IN_PROLOG:
    return Tcl_NewStringObj("character-reference-in-prolog", -1);
  case XML_ERR_CHARREF_IN_EPILOG:
    return Tcl_NewStringObj("character-reference-in-epilog", -1);
  case XML_ERR_CHARREF_IN_DTD:
    return Tcl_NewStringObj("character-reference-in-dtd", -1);
  case XML_ERR_ENTITYREF_AT_EOF:
    return Tcl_NewStringObj("entity-reference-at-eof", -1);
  case XML_ERR_ENTITYREF_IN_PROLOG:
    return Tcl_NewStringObj("entity-reference-in-prolog", -1);
  case XML_ERR_ENTITYREF_IN_EPILOG:
    return Tcl_NewStringObj("entity-reference-in-epilog", -1);
  case XML_ERR_ENTITYREF_IN_DTD:
    return Tcl_NewStringObj("entity-reference-in-dtd", -1);
  case XML_ERR_PEREF_AT_EOF:
    return Tcl_NewStringObj("parameter-entity-reference-at-eof", -1);
  case XML_ERR_PEREF_IN_PROLOG:
    return Tcl_NewStringObj("parameter-entity-reference-in-prolog", -1);
  case XML_ERR_PEREF_IN_EPILOG:
    return Tcl_NewStringObj("parameter-entity-reference-in-epilog", -1);
  case XML_ERR_PEREF_IN_INT_SUBSET:
    return Tcl_NewStringObj("parameter-entity-reference-in-internal-subset", -1);
  case XML_ERR_ENTITYREF_NO_NAME:
    return Tcl_NewStringObj("entity-reference-no-name", -1);
  case XML_ERR_ENTITYREF_SEMICOL_MISSING:
    return Tcl_NewStringObj("entity-reference-semicolon-missing", -1);
  case XML_ERR_PEREF_NO_NAME:
    return Tcl_NewStringObj("parameter-entity-reference-no-name", -1);
  case XML_ERR_PEREF_SEMICOL_MISSING:
    return Tcl_NewStringObj("parameter-entity-reference-semicolon-missing", -1);
  case XML_ERR_UNDECLARED_ENTITY:
    return Tcl_NewStringObj("undeclared-entity", -1);
  case XML_WAR_UNDECLARED_ENTITY:
    return Tcl_NewStringObj("undeclared-entity", -1);
  case XML_ERR_UNPARSED_ENTITY:
    return Tcl_NewStringObj("unparsed-entity", -1);
  case XML_ERR_ENTITY_IS_EXTERNAL:
    return Tcl_NewStringObj("entity-is-external", -1);
  case XML_ERR_ENTITY_IS_PARAMETER:
    return Tcl_NewStringObj("entity-is-parameter", -1);
  case XML_ERR_UNKNOWN_ENCODING:
    return Tcl_NewStringObj("unknown-encoding", -1);
  case XML_ERR_UNSUPPORTED_ENCODING:
    return Tcl_NewStringObj("unsupported-encoding", -1);
  case XML_ERR_STRING_NOT_STARTED:
    return Tcl_NewStringObj("string-not-started", -1);
  case XML_ERR_STRING_NOT_CLOSED:
    return Tcl_NewStringObj("string-not-closed", -1);
  case XML_ERR_NS_DECL_ERROR:
    return Tcl_NewStringObj("namespace-declaration-error", -1);
  case XML_ERR_ENTITY_NOT_STARTED:
    return Tcl_NewStringObj("entity-not-started", -1);
  case XML_ERR_ENTITY_NOT_FINISHED:
    return Tcl_NewStringObj("entity-not-finished", -1);
  case XML_ERR_LT_IN_ATTRIBUTE:
    return Tcl_NewStringObj("less-than-character-in-attribute", -1);
  case XML_ERR_ATTRIBUTE_NOT_STARTED:
    return Tcl_NewStringObj("attribute-not-started", -1);
  case XML_ERR_ATTRIBUTE_NOT_FINISHED:
    return Tcl_NewStringObj("attribute-not-finished", -1);
  case XML_ERR_ATTRIBUTE_WITHOUT_VALUE:
    return Tcl_NewStringObj("attribute-without-value", -1);
  case XML_ERR_ATTRIBUTE_REDEFINED:
    return Tcl_NewStringObj("attribute-redefined", -1);
  case XML_ERR_LITERAL_NOT_STARTED:
    return Tcl_NewStringObj("literal-not-started", -1);
  case XML_ERR_LITERAL_NOT_FINISHED:
    return Tcl_NewStringObj("literal-not-finished", -1);
  case XML_ERR_COMMENT_NOT_FINISHED:
    return Tcl_NewStringObj("comment-not-finished", -1);
  case XML_ERR_PI_NOT_STARTED:
    return Tcl_NewStringObj("processing-instruction-not-started", -1);
  case XML_ERR_PI_NOT_FINISHED:
    return Tcl_NewStringObj("processing-instruction-not-finished", -1);
  case XML_ERR_NOTATION_NOT_STARTED:
    return Tcl_NewStringObj("notation-not-started", -1);
  case XML_ERR_NOTATION_NOT_FINISHED:
    return Tcl_NewStringObj("notation-not-finished", -1);
  case XML_ERR_ATTLIST_NOT_STARTED:
    return Tcl_NewStringObj("attribute-list-not-started", -1);
  case XML_ERR_ATTLIST_NOT_FINISHED:
    return Tcl_NewStringObj("attribute-list-not-finished", -1);
  case XML_ERR_MIXED_NOT_STARTED:
    return Tcl_NewStringObj("mixed-content-not-started", -1);
  case XML_ERR_MIXED_NOT_FINISHED:
    return Tcl_NewStringObj("mixed-content-not-finished", -1);
  case XML_ERR_ELEMCONTENT_NOT_STARTED:
    return Tcl_NewStringObj("element-content-not-started", -1);
  case XML_ERR_ELEMCONTENT_NOT_FINISHED:
    return Tcl_NewStringObj("element-content-not-finished", -1);
  case XML_ERR_XMLDECL_NOT_STARTED:
    return Tcl_NewStringObj("xml-declaration-not-started", -1); 
  case XML_ERR_XMLDECL_NOT_FINISHED:
    return Tcl_NewStringObj("xml-declaration-not-finished", -1);
  case XML_ERR_CONDSEC_NOT_STARTED:
    return Tcl_NewStringObj("conditional-section-not-started", -1);
  case XML_ERR_CONDSEC_NOT_FINISHED:
    return Tcl_NewStringObj("conditional-section-not-finished", -1);
  case XML_ERR_EXT_SUBSET_NOT_FINISHED:
    return Tcl_NewStringObj("external-dtd-subset-not-finished", -1);
  case XML_ERR_DOCTYPE_NOT_FINISHED:
    return Tcl_NewStringObj("document-type-declaration-not-finished", -1);
  case XML_ERR_MISPLACED_CDATA_END:
    return Tcl_NewStringObj("misplaced-cdata-section-end", -1);
  case XML_ERR_CDATA_NOT_FINISHED:
    return Tcl_NewStringObj("cdata-section-not-finished", -1);
  case XML_ERR_RESERVED_XML_NAME:
    return Tcl_NewStringObj("reserved-xml-name", -1);
  case XML_ERR_SPACE_REQUIRED:
    return Tcl_NewStringObj("space-required", -1);
  case XML_ERR_SEPARATOR_REQUIRED:
    return Tcl_NewStringObj("separator-required", -1);
  case XML_ERR_NMTOKEN_REQUIRED:
    return Tcl_NewStringObj("NMTOKEN-required", -1);
  case XML_ERR_NAME_REQUIRED:
    return Tcl_NewStringObj("NAME-required", -1);
  case XML_ERR_PCDATA_REQUIRED:
    return Tcl_NewStringObj("PCDATA-required", -1);
  case XML_ERR_URI_REQUIRED:
    return Tcl_NewStringObj("URI-required", -1);
  case XML_ERR_PUBID_REQUIRED:
    return Tcl_NewStringObj("public-identifier-required", -1);
  case XML_ERR_LT_REQUIRED:
    return Tcl_NewStringObj("less-than-character-required", -1);
  case XML_ERR_GT_REQUIRED:
    return Tcl_NewStringObj("greater-than-character-required", -1);
  case XML_ERR_LTSLASH_REQUIRED:
    return Tcl_NewStringObj("less-than-and-slash-characters-required", -1);
  case XML_ERR_EQUAL_REQUIRED:
    return Tcl_NewStringObj("equal-character-required", -1);
  case XML_ERR_TAG_NAME_MISMATCH:
    return Tcl_NewStringObj("tag-name-mismatch", -1);
  case XML_ERR_TAG_NOT_FINISHED:
    return Tcl_NewStringObj("tag-not-finished", -1);
  case XML_ERR_STANDALONE_VALUE:
    return Tcl_NewStringObj("standalone-value", -1);
  case XML_ERR_ENCODING_NAME:
    return Tcl_NewStringObj("encoding-name", -1);
  case XML_ERR_HYPHEN_IN_COMMENT:
    return Tcl_NewStringObj("hyphen-in-comment", -1);
  case XML_ERR_INVALID_ENCODING:
    return Tcl_NewStringObj("invalid-encoding", -1);
  case XML_ERR_EXT_ENTITY_STANDALONE:
    return Tcl_NewStringObj("external-entity-standalone", -1);
  case XML_ERR_CONDSEC_INVALID:
    return Tcl_NewStringObj("conditional-section-invalid", -1);
  case XML_ERR_VALUE_REQUIRED:
    return Tcl_NewStringObj("value-required", -1);
  case XML_ERR_NOT_WELL_BALANCED:
    return Tcl_NewStringObj("not-well-balanced", -1);
  case XML_ERR_EXTRA_CONTENT:
    return Tcl_NewStringObj("extra-content", -1);
  case XML_ERR_ENTITY_CHAR_ERROR:
    return Tcl_NewStringObj("entity-character-error", -1);
  case XML_ERR_ENTITY_PE_INTERNAL:
    return Tcl_NewStringObj("parameter-entity-internal-error", -1);
  case XML_ERR_ENTITY_LOOP:
    return Tcl_NewStringObj("entity-loop", -1);
  case XML_ERR_ENTITY_BOUNDARY:
    return Tcl_NewStringObj("entity-boundary", -1);
  case XML_ERR_INVALID_URI:
    return Tcl_NewStringObj("invalid-URI", -1);
  case XML_ERR_URI_FRAGMENT:
    return Tcl_NewStringObj("URI-fragment", -1);
  case XML_WAR_CATALOG_PI:
    return Tcl_NewStringObj("catalog-processing-instruction", -1);
  case XML_ERR_NO_DTD:
    return Tcl_NewStringObj("no-document-type-definition", -1);
  case XML_ERR_CONDSEC_INVALID_KEYWORD:
    return Tcl_NewStringObj("conditional-section-invalid-keyword", -1);
  case XML_ERR_VERSION_MISSING:
    return Tcl_NewStringObj("version-missing", -1);
  case XML_WAR_UNKNOWN_VERSION:
    return Tcl_NewStringObj("unknown-version", -1);
  case XML_WAR_LANG_VALUE:
    return Tcl_NewStringObj("lang-value", -1);
  case XML_WAR_NS_URI:
    return Tcl_NewStringObj("namespace-uri", -1);
  case XML_WAR_NS_URI_RELATIVE:
    return Tcl_NewStringObj("namespace-uri-relative", -1);
  case XML_NS_ERR_XML_NAMESPACE:
    return Tcl_NewStringObj("xml-namespace", -1);
  case XML_NS_ERR_UNDEFINED_NAMESPACE:
    return Tcl_NewStringObj("undefined-namespace", -1);
  case XML_NS_ERR_QNAME:
    return Tcl_NewStringObj("qualified-name", -1);
  case XML_NS_ERR_ATTRIBUTE_REDEFINED:
    return Tcl_NewStringObj("attribute-redefined", -1);
  case XML_DTD_ATTRIBUTE_DEFAULT:
    return Tcl_NewStringObj("attribute-default", -1);
  case XML_DTD_ATTRIBUTE_REDEFINED:
    return Tcl_NewStringObj("attribute-redefined", -1);
  case XML_DTD_ATTRIBUTE_VALUE:
    return Tcl_NewStringObj("attribute-value", -1);
  case XML_DTD_CONTENT_ERROR:
    return Tcl_NewStringObj("content-error", -1);
  case XML_DTD_CONTENT_MODEL:
    return Tcl_NewStringObj("content-model", -1);
  case XML_DTD_CONTENT_NOT_DETERMINIST:
    return Tcl_NewStringObj("content-model-not-deterministic", -1);
  case XML_DTD_DIFFERENT_PREFIX:
    return Tcl_NewStringObj("different-prefix", -1);
  case XML_DTD_ELEM_DEFAULT_NAMESPACE:
    return Tcl_NewStringObj("element-default-namespace", -1);
  case XML_DTD_ELEM_NAMESPACE:
    return Tcl_NewStringObj("element-namespace", -1);
  case XML_DTD_ELEM_REDEFINED:
    return Tcl_NewStringObj("element-type-redefined", -1);
  case XML_DTD_EMPTY_NOTATION:
    return Tcl_NewStringObj("empty-notation", -1);
  case XML_DTD_ENTITY_TYPE:
    return Tcl_NewStringObj("entity-type", -1);
  case XML_DTD_ID_FIXED:
    return Tcl_NewStringObj("ID-fixed", -1);
  case XML_DTD_ID_REDEFINED:
    return Tcl_NewStringObj("ID-redefined", -1);
  case XML_DTD_ID_SUBSET:
    return Tcl_NewStringObj("ID-subset", -1);
  case XML_DTD_INVALID_CHILD:
    return Tcl_NewStringObj("invalid-child", -1);
  case XML_DTD_INVALID_DEFAULT:
    return Tcl_NewStringObj("invalid-default", -1);
  case XML_DTD_LOAD_ERROR:
    return Tcl_NewStringObj("load-error", -1);
  case XML_DTD_MISSING_ATTRIBUTE:
    return Tcl_NewStringObj("missing-attribute", -1);
  case XML_DTD_MIXED_CORRUPT:
    return Tcl_NewStringObj("mixed-content-corrupt", -1);
  case XML_DTD_MULTIPLE_ID:
    return Tcl_NewStringObj("multiple-ID", -1);
  case XML_DTD_NO_DOC:
    return Tcl_NewStringObj("no-document", -1);
  case XML_DTD_NO_DTD:
    return Tcl_NewStringObj("no-document-type-definition", -1);
  case XML_DTD_NO_ELEM_NAME:
    return Tcl_NewStringObj("no-element-name", -1);
  case XML_DTD_NO_PREFIX:
    return Tcl_NewStringObj("no-prefix", -1);
  case XML_DTD_NO_ROOT:
    return Tcl_NewStringObj("no-root", -1);
  case XML_DTD_NOTATION_REDEFINED:
    return Tcl_NewStringObj("notation-redefined", -1);
  case XML_DTD_NOTATION_VALUE:
    return Tcl_NewStringObj("notation-value", -1);
  case XML_DTD_NOT_EMPTY:
    return Tcl_NewStringObj("not-empty", -1);
  case XML_DTD_NOT_PCDATA:
    return Tcl_NewStringObj("not-PCDATA", -1);
  case XML_DTD_NOT_STANDALONE:
    return Tcl_NewStringObj("not-standalone", -1);
  case XML_DTD_ROOT_NAME:
    return Tcl_NewStringObj("root-name", -1);
  case XML_DTD_STANDALONE_WHITE_SPACE:
    return Tcl_NewStringObj("standalone-white-space", -1);
  case XML_DTD_UNKNOWN_ATTRIBUTE:
    return Tcl_NewStringObj("unknown-attribute", -1);
  case XML_DTD_UNKNOWN_ELEM:
    return Tcl_NewStringObj("unknown-element-type", -1);
  case XML_DTD_UNKNOWN_ENTITY:
    return Tcl_NewStringObj("unknown-entity", -1);
  case XML_DTD_UNKNOWN_ID:
    return Tcl_NewStringObj("unknown-ID", -1);
  case XML_DTD_UNKNOWN_NOTATION:
    return Tcl_NewStringObj("unknown-notation", -1);
  case XML_HTML_STRUCURE_ERROR:
    return Tcl_NewStringObj("structure-error", -1);
  case XML_HTML_UNKNOWN_TAG:
    return Tcl_NewStringObj("unknown-tag", -1);
  case XML_RNGP_ANYNAME_ATTR_ANCESTOR:
    return Tcl_NewStringObj("anyname-attribute-ancestor", -1);
  case XML_RNGP_ATTR_CONFLICT:
    return Tcl_NewStringObj("attribute-conflict", -1);
  case XML_RNGP_ATTRIBUTE_CHILDREN:
    return Tcl_NewStringObj("attribute-children", -1);
  case XML_RNGP_ATTRIBUTE_CONTENT:
    return Tcl_NewStringObj("attribute-content", -1);
  case XML_RNGP_ATTRIBUTE_EMPTY:
    return Tcl_NewStringObj("attribute-empty", -1);
  case XML_RNGP_ATTRIBUTE_NOOP:
    return Tcl_NewStringObj("attribute-noop", -1);
  case XML_RNGP_CHOICE_CONTENT:
    return Tcl_NewStringObj("choice-content", -1);
  case XML_RNGP_CREATE_FAILURE:
    return Tcl_NewStringObj("create-failure", -1);
  case XML_RNGP_DATA_CONTENT:
    return Tcl_NewStringObj("data-content", -1);
  case XML_RNGP_DEF_CHOICE_AND_INTERLEAVE:
    return Tcl_NewStringObj("def-choice-and-interleave", -1);
  case XML_RNGP_DEFINE_CREATE_FAILED:
    return Tcl_NewStringObj("define-create-failed", -1);
  case XML_RNGP_DEFINE_EMPTY:
    return Tcl_NewStringObj("define-empty", -1);
  case XML_RNGP_DEFINE_MISSING:
    return Tcl_NewStringObj("define-missing", -1);
  case XML_RNGP_DEFINE_NAME_MISSING:
    return Tcl_NewStringObj("define-name-missing", -1);
  case XML_RNGP_ELEM_CONTENT_EMPTY:
    return Tcl_NewStringObj("elem-content-empty", -1);
  case XML_RNGP_ELEM_CONTENT_ERROR:
    return Tcl_NewStringObj("elem-content-error", -1);
  case XML_RNGP_ELEMENT_EMPTY:
    return Tcl_NewStringObj("element-empty", -1);
  case XML_RNGP_ELEMENT_CONTENT:
    return Tcl_NewStringObj("element-content", -1);
  case XML_RNGP_ELEMENT_NAME:
    return Tcl_NewStringObj("element-name", -1);
  case XML_RNGP_ELEMENT_NO_CONTENT:
    return Tcl_NewStringObj("element-no-content", -1);
  case XML_RNGP_ELEM_TEXT_CONFLICT:
    return Tcl_NewStringObj("element-text-conflict", -1);
  case XML_RNGP_EMPTY:
    return Tcl_NewStringObj("empty", -1);
  case XML_RNGP_EMPTY_CONSTRUCT:
    return Tcl_NewStringObj("empty-construct", -1);
  case XML_RNGP_EMPTY_CONTENT:
    return Tcl_NewStringObj("empty-content", -1);
  case XML_RNGP_EMPTY_NOT_EMPTY:
    return Tcl_NewStringObj("empty-not-empty", -1);
  case XML_RNGP_ERROR_TYPE_LIB:
    return Tcl_NewStringObj("error-type-library", -1);
  case XML_RNGP_EXCEPT_EMPTY:
    return Tcl_NewStringObj("except-empty", -1);
  case XML_RNGP_EXCEPT_MISSING:
    return Tcl_NewStringObj("except-missing", -1);
  case XML_RNGP_EXCEPT_MULTIPLE:
    return Tcl_NewStringObj("except-multiple", -1);
  case XML_RNGP_EXCEPT_NO_CONTENT:
    return Tcl_NewStringObj("except-no-content", -1);
  case XML_RNGP_EXTERNALREF_EMTPY:
    return Tcl_NewStringObj("external-reference-empty", -1);
  case XML_RNGP_EXTERNAL_REF_FAILURE:
    return Tcl_NewStringObj("external-reference-failure", -1);
  case XML_RNGP_EXTERNALREF_RECURSE:
    return Tcl_NewStringObj("external-reference-recursive", -1);
  case XML_RNGP_FORBIDDEN_ATTRIBUTE:
    return Tcl_NewStringObj("forbidden-attribute", -1);
  case XML_RNGP_FOREIGN_ELEMENT:
    return Tcl_NewStringObj("foreign-element", -1);
  case XML_RNGP_GRAMMAR_CONTENT:
    return Tcl_NewStringObj("grammar-content", -1);
  case XML_RNGP_GRAMMAR_EMPTY:
    return Tcl_NewStringObj("grammar-empty", -1);
  case XML_RNGP_GRAMMAR_MISSING:
    return Tcl_NewStringObj("grammar-missing", -1);
  case XML_RNGP_GRAMMAR_NO_START:
    return Tcl_NewStringObj("grammar-no-start", -1);
  case XML_RNGP_GROUP_ATTR_CONFLICT:
    return Tcl_NewStringObj("group-attribute-conflict-", -1);
  case XML_RNGP_HREF_ERROR:
    return Tcl_NewStringObj("href-error", -1);
  case XML_RNGP_INCLUDE_EMPTY:
    return Tcl_NewStringObj("include-empty", -1);
  case XML_RNGP_INCLUDE_FAILURE:
    return Tcl_NewStringObj("include-failure", -1);
  case XML_RNGP_INCLUDE_RECURSE:
    return Tcl_NewStringObj("include-recurse", -1);
  case XML_RNGP_INTERLEAVE_ADD:
    return Tcl_NewStringObj("interleave-add", -1);
  case XML_RNGP_INTERLEAVE_CREATE_FAILED:
    return Tcl_NewStringObj("interleave-create-failed", -1);
  case XML_RNGP_INTERLEAVE_EMPTY:
    return Tcl_NewStringObj("interleave-empty", -1);
  case XML_RNGP_INTERLEAVE_NO_CONTENT:
    return Tcl_NewStringObj("interleave-no-content", -1);
  case XML_RNGP_INVALID_DEFINE_NAME:
    return Tcl_NewStringObj("invalid-define-name", -1);
  case XML_RNGP_INVALID_URI:
    return Tcl_NewStringObj("invalid-URI", -1);
  case XML_RNGP_INVALID_VALUE:
    return Tcl_NewStringObj("invalid-value", -1);
  case XML_RNGP_MISSING_HREF:
    return Tcl_NewStringObj("missing-href", -1);
  case XML_RNGP_NAME_MISSING:
    return Tcl_NewStringObj("NAME-missing", -1);
  case XML_RNGP_NEED_COMBINE:
    return Tcl_NewStringObj("need-combine", -1);
  case XML_RNGP_NOTALLOWED_NOT_EMPTY:
    return Tcl_NewStringObj("notallowed-not-empty", -1);
  case XML_RNGP_NSNAME_ATTR_ANCESTOR:
    return Tcl_NewStringObj("nsname-attr-ancestor", -1);
  case XML_RNGP_NSNAME_NO_NS:
    return Tcl_NewStringObj("nsname-no-namespace", -1);
  case XML_RNGP_PARAM_FORBIDDEN:
    return Tcl_NewStringObj("param-forbidden", -1);
  case XML_RNGP_PARAM_NAME_MISSING:
    return Tcl_NewStringObj("param-name-missing", -1);
  case XML_RNGP_PARENTREF_CREATE_FAILED:
    return Tcl_NewStringObj("parentref-create-failed", -1);
  case XML_RNGP_PARENTREF_NAME_INVALID:
    return Tcl_NewStringObj("parentref-name-invalid", -1);
  case XML_RNGP_PARENTREF_NO_NAME:
    return Tcl_NewStringObj("parentref-no-name", -1);
  case XML_RNGP_PARENTREF_NO_PARENT:
    return Tcl_NewStringObj("parentref-no-parent", -1);
  case XML_RNGP_PARENTREF_NOT_EMPTY:
    return Tcl_NewStringObj("parentref-not-empty", -1);
  case XML_RNGP_PARSE_ERROR:
    return Tcl_NewStringObj("parse-error", -1);
  case XML_RNGP_PAT_ANYNAME_EXCEPT_ANYNAME:
    return Tcl_NewStringObj("pat-anyname-except-anyname", -1);
  case XML_RNGP_PAT_ATTR_ATTR:
    return Tcl_NewStringObj("par-attr-attr", -1);
  case XML_RNGP_PAT_ATTR_ELEM:
    return Tcl_NewStringObj("pat-attr-elem", -1);
  case XML_RNGP_PAT_DATA_EXCEPT_ATTR:
    return Tcl_NewStringObj("pat-data-except-attr", -1);
  case XML_RNGP_PAT_DATA_EXCEPT_ELEM:
    return Tcl_NewStringObj("pat-data-except-elem", -1);
  case XML_RNGP_PAT_DATA_EXCEPT_EMPTY:
    return Tcl_NewStringObj("pat-data-except-empty", -1);
  case XML_RNGP_PAT_DATA_EXCEPT_GROUP:
    return Tcl_NewStringObj("pat-data-except-group", -1);
  case XML_RNGP_PAT_DATA_EXCEPT_INTERLEAVE:
    return Tcl_NewStringObj("pat-data-except-interleave", -1);
  case XML_RNGP_PAT_DATA_EXCEPT_LIST:
    return Tcl_NewStringObj("pat-data-except-list", -1);
  case XML_RNGP_PAT_DATA_EXCEPT_ONEMORE:
    return Tcl_NewStringObj("pat-data-except-onemore", -1);
  case XML_RNGP_PAT_DATA_EXCEPT_REF:
    return Tcl_NewStringObj("pat-data-except-ref", -1);
  case XML_RNGP_PAT_DATA_EXCEPT_TEXT:
    return Tcl_NewStringObj("pat-data-except-text", -1);
  case XML_RNGP_PAT_LIST_ATTR:
    return Tcl_NewStringObj("pat-list-attr", -1);
  case XML_RNGP_PAT_LIST_ELEM:
    return Tcl_NewStringObj("pat-list-elem", -1);
  case XML_RNGP_PAT_LIST_INTERLEAVE:
    return Tcl_NewStringObj("pat-list-interleave", -1);
  case XML_RNGP_PAT_LIST_LIST:
    return Tcl_NewStringObj("pat-list-list", -1);
  case XML_RNGP_PAT_LIST_REF:
    return Tcl_NewStringObj("pat-list-ref", -1);
  case XML_RNGP_PAT_LIST_TEXT:
    return Tcl_NewStringObj("pat-list-text", -1);
  case XML_RNGP_PAT_NSNAME_EXCEPT_ANYNAME:
    return Tcl_NewStringObj("pat-nsname-except-anyname", -1);
  case XML_RNGP_PAT_NSNAME_EXCEPT_NSNAME:
    return Tcl_NewStringObj("pat-nsname-except-nsname", -1);
  case XML_RNGP_PAT_ONEMORE_GROUP_ATTR:
    return Tcl_NewStringObj("pat-onemore-group-attr", -1);
  case XML_RNGP_PAT_ONEMORE_INTERLEAVE_ATTR:
    return Tcl_NewStringObj("pat-onemore-interleave-attr", -1);
  case XML_RNGP_PAT_START_ATTR:
    return Tcl_NewStringObj("pat-start-attr", -1);
  case XML_RNGP_PAT_START_DATA:
    return Tcl_NewStringObj("pat-start-data", -1);
  case XML_RNGP_PAT_START_EMPTY:
    return Tcl_NewStringObj("pat-start-empty", -1);
  case XML_RNGP_PAT_START_GROUP:
    return Tcl_NewStringObj("pat-start-group", -1);
  case XML_RNGP_PAT_START_INTERLEAVE:
    return Tcl_NewStringObj("pat-start-interleave", -1);
  case XML_RNGP_PAT_START_LIST:
    return Tcl_NewStringObj("pat-start-list", -1);
  case XML_RNGP_PAT_START_ONEMORE:
    return Tcl_NewStringObj("pat-start-onemore", -1);
  case XML_RNGP_PAT_START_TEXT:
    return Tcl_NewStringObj("pat-start-text", -1);
  case XML_RNGP_PAT_START_VALUE:
    return Tcl_NewStringObj("pat-start-value", -1);
  case XML_RNGP_PREFIX_UNDEFINED:
    return Tcl_NewStringObj("prefix-undefined", -1);
  case XML_RNGP_REF_CREATE_FAILED:
    return Tcl_NewStringObj("ref-create-failed", -1);
  case XML_RNGP_REF_CYCLE:
    return Tcl_NewStringObj("ref-cycle", -1);
  case XML_RNGP_REF_NAME_INVALID:
    return Tcl_NewStringObj("ref-name-invalid", -1);
  case XML_RNGP_REF_NO_DEF:
    return Tcl_NewStringObj("ref-no-def", -1);
  case XML_RNGP_REF_NO_NAME:
    return Tcl_NewStringObj("ref-no-name", -1);
  case XML_RNGP_REF_NOT_EMPTY:
    return Tcl_NewStringObj("ref-not-empty", -1);
  case XML_RNGP_START_CHOICE_AND_INTERLEAVE:
    return Tcl_NewStringObj("start-choice-and-interleave", -1);
  case XML_RNGP_START_CONTENT:
    return Tcl_NewStringObj("start-content", -1);
  case XML_RNGP_START_EMPTY:
    return Tcl_NewStringObj("start-empty", -1);
  case XML_RNGP_START_MISSING:
    return Tcl_NewStringObj("start-missing", -1);
  case XML_RNGP_TEXT_EXPECTED:
    return Tcl_NewStringObj("text-expected", -1);
  case XML_RNGP_TEXT_HAS_CHILD:
    return Tcl_NewStringObj("text-has-child", -1);
  case XML_RNGP_TYPE_MISSING:
    return Tcl_NewStringObj("type-missing", -1);
  case XML_RNGP_TYPE_NOT_FOUND:
    return Tcl_NewStringObj("type-not-found", -1);
  case XML_RNGP_UNKNOWN_ATTRIBUTE:
    return Tcl_NewStringObj("unknown-attribute", -1);
  case XML_RNGP_UNKNOWN_COMBINE:
    return Tcl_NewStringObj("unknown-combine", -1);
  case XML_RNGP_UNKNOWN_CONSTRUCT:
    return Tcl_NewStringObj("unknown-construct", -1);
  case XML_RNGP_UNKNOWN_TYPE_LIB:
    return Tcl_NewStringObj("unknown-type-lib", -1);
  case XML_RNGP_URI_FRAGMENT:
    return Tcl_NewStringObj("URI-fragment", -1);
  case XML_RNGP_URI_NOT_ABSOLUTE:
    return Tcl_NewStringObj("URI-not-absolute", -1);
  case XML_RNGP_VALUE_EMPTY:
    return Tcl_NewStringObj("value-empty", -1);
  case XML_RNGP_VALUE_NO_CONTENT:
    return Tcl_NewStringObj("value-no-content", -1);
  case XML_RNGP_XMLNS_NAME:
    return Tcl_NewStringObj("xmlns-name", -1);
  case XML_RNGP_XML_NS:
    return Tcl_NewStringObj("xml-ns", -1);
  case XML_XPATH_EXPRESSION_OK:
    return Tcl_NewStringObj("expression-ok", -1);
  case XML_XPATH_NUMBER_ERROR:
    return Tcl_NewStringObj("number-error", -1);
  case XML_XPATH_UNFINISHED_LITERAL_ERROR:
    return Tcl_NewStringObj("unfinished-literal", -1);
  case XML_XPATH_START_LITERAL_ERROR:
    return Tcl_NewStringObj("start-literal", -1);
  case XML_XPATH_VARIABLE_REF_ERROR:
    return Tcl_NewStringObj("variable-reference", -1);
  case XML_XPATH_UNDEF_VARIABLE_ERROR:
    return Tcl_NewStringObj("undefined-variable", -1);
  case XML_XPATH_INVALID_PREDICATE_ERROR:
    return Tcl_NewStringObj("invalid-predicate", -1);
  case XML_XPATH_EXPR_ERROR:
    return Tcl_NewStringObj("expression-error", -1);
  case XML_XPATH_UNCLOSED_ERROR:
    return Tcl_NewStringObj("unclosed", -1);
  case XML_XPATH_UNKNOWN_FUNC_ERROR:
    return Tcl_NewStringObj("unknown-function", -1);
  case XML_XPATH_INVALID_OPERAND:
    return Tcl_NewStringObj("invalid-operand", -1);
  case XML_XPATH_INVALID_TYPE:
    return Tcl_NewStringObj("invalid-type", -1);
  case XML_XPATH_INVALID_ARITY:
    return Tcl_NewStringObj("invalid-arity", -1);
  case XML_XPATH_INVALID_CTXT_SIZE:
    return Tcl_NewStringObj("invalid-context-size", -1);
  case XML_XPATH_INVALID_CTXT_POSITION:
    return Tcl_NewStringObj("invalid-context-position", -1);
  case XML_XPATH_MEMORY_ERROR:
    return Tcl_NewStringObj("memory-error", -1);
  case XML_XPTR_SYNTAX_ERROR:
    return Tcl_NewStringObj("syntax-error", -1);
  case XML_XPTR_RESOURCE_ERROR:
    return Tcl_NewStringObj("resource-error", -1);
  case XML_XPTR_SUB_RESOURCE_ERROR:
    return Tcl_NewStringObj("sub-resource-error", -1);
  case XML_XPATH_UNDEF_PREFIX_ERROR:
    return Tcl_NewStringObj("undefined-prefix", -1);
  case XML_XPATH_ENCODING_ERROR:
    return Tcl_NewStringObj("encoding-error", -1);
  case XML_XPATH_INVALID_CHAR_ERROR:
    return Tcl_NewStringObj("invalid-character", -1);
  case XML_TREE_INVALID_HEX:
    return Tcl_NewStringObj("invalid-hex", -1);
  case XML_TREE_INVALID_DEC:
    return Tcl_NewStringObj("invalid-decimal", -1);
  case XML_TREE_UNTERMINATED_ENTITY:
    return Tcl_NewStringObj("unterminated-entity", -1);
  case XML_SAVE_NOT_UTF8:
    return Tcl_NewStringObj("not-utf8", -1);
  case XML_SAVE_CHAR_INVALID:
    return Tcl_NewStringObj("invalid-character", -1);
  case XML_SAVE_NO_DOCTYPE:
    return Tcl_NewStringObj("no-document-type-declaration", -1);
  case XML_SAVE_UNKNOWN_ENCODING:
    return Tcl_NewStringObj("unknown-encoding", -1);
  case XML_REGEXP_COMPILE_ERROR:
    return Tcl_NewStringObj("compile-error", -1);
  case XML_IO_UNKNOWN:
    return Tcl_NewStringObj("unknown", -1);
  case XML_IO_EACCES:
    return Tcl_NewStringObj("eacces", -1);
  case XML_IO_EAGAIN:
    return Tcl_NewStringObj("eagain", -1);
  case XML_IO_EBADF:
    return Tcl_NewStringObj("ebadf", -1);
  case XML_IO_EBADMSG:
    return Tcl_NewStringObj("ebadmsg", -1);
  case XML_IO_EBUSY:
    return Tcl_NewStringObj("ebusy", -1);
  case XML_IO_ECANCELED:
    return Tcl_NewStringObj("ecanceled", -1);
  case XML_IO_ECHILD:
    return Tcl_NewStringObj("echild", -1);
  case XML_IO_EDEADLK:
    return Tcl_NewStringObj("edeadlk", -1);
  case XML_IO_EDOM:
    return Tcl_NewStringObj("edom", -1);
  case XML_IO_EEXIST:
    return Tcl_NewStringObj("eexist", -1);
  case XML_IO_EINPROGRESS:
    return Tcl_NewStringObj("einprogress", -1);
  case XML_IO_EINTR:
    return Tcl_NewStringObj("eintr", -1);
  case XML_IO_EINVAL:
    return Tcl_NewStringObj("einval", -1);
  case XML_IO_EIO:
    return Tcl_NewStringObj("eio", -1);
  case XML_IO_EISDIR:
    return Tcl_NewStringObj("eisdir", -1);
  case XML_IO_EMFILE:
    return Tcl_NewStringObj("emfile", -1);
  case XML_IO_EMLINK:
    return Tcl_NewStringObj("emlink", -1);
  case XML_IO_EMSGSIZE:
    return Tcl_NewStringObj("emsgsize", -1);
  case XML_IO_ENAMETOOLONG:
    return Tcl_NewStringObj("enametoolong", -1);
  case XML_IO_ENFILE:
    return Tcl_NewStringObj("enfile", -1);
  case XML_IO_ENODEV:
    return Tcl_NewStringObj("enodev", -1);
  case XML_IO_ENOENT:
    return Tcl_NewStringObj("enoent", -1);
  case XML_IO_ENOEXEC:
    return Tcl_NewStringObj("enoexec", -1);
  case XML_IO_ENOLCK:
    return Tcl_NewStringObj("enolck", -1);
  case XML_IO_ENOMEM:
    return Tcl_NewStringObj("enomem", -1);
  case XML_IO_ENOSPC:
    return Tcl_NewStringObj("enospc", -1);
  case XML_IO_ENOSYS:
    return Tcl_NewStringObj("enosys", -1);
  case XML_IO_ENOTDIR:
    return Tcl_NewStringObj("enotdir", -1);
  case XML_IO_ENOTEMPTY:
    return Tcl_NewStringObj("enotempty", -1);
  case XML_IO_ENOTSUP:
    return Tcl_NewStringObj("enotsup", -1);
  case XML_IO_ENOTTY:
    return Tcl_NewStringObj("enotty", -1);
  case XML_IO_ENXIO:
    return Tcl_NewStringObj("enxio", -1);
  case XML_IO_EPERM:
    return Tcl_NewStringObj("eperm", -1);
  case XML_IO_EPIPE:
    return Tcl_NewStringObj("epipe", -1);
  case XML_IO_ERANGE:
    return Tcl_NewStringObj("erange", -1);
  case XML_IO_EROFS:
    return Tcl_NewStringObj("erofs", -1);
  case XML_IO_ESPIPE:
    return Tcl_NewStringObj("espipe", -1);
  case XML_IO_ESRCH:
    return Tcl_NewStringObj("esrch", -1);
  case XML_IO_ETIMEDOUT:
    return Tcl_NewStringObj("etimedout", -1);
  case XML_IO_EXDEV:
    return Tcl_NewStringObj("exdev", -1);
  case XML_IO_NETWORK_ATTEMPT:
    return Tcl_NewStringObj("network-attempt", -1);
  case XML_IO_ENCODER:
    return Tcl_NewStringObj("encoder", -1);
  case XML_IO_FLUSH:
    return Tcl_NewStringObj("flush", -1);
  case XML_IO_WRITE:
    return Tcl_NewStringObj("write", -1);
  case XML_IO_NO_INPUT:
    return Tcl_NewStringObj("no-input", -1);
  case XML_IO_BUFFER_FULL:
    return Tcl_NewStringObj("buffer-full", -1);
  case XML_IO_LOAD_ERROR:
    return Tcl_NewStringObj("load-error", -1);
  case XML_IO_ENOTSOCK:
    return Tcl_NewStringObj("enotsock", -1);
  case XML_IO_EISCONN:
    return Tcl_NewStringObj("eisconn", -1);
  case XML_IO_ECONNREFUSED:
    return Tcl_NewStringObj("econnrefused", -1);
  case XML_IO_ENETUNREACH:
    return Tcl_NewStringObj("enetunreach", -1);
  case XML_IO_EADDRINUSE:
    return Tcl_NewStringObj("eaddrinuse", -1);
  case XML_IO_EALREADY:
    return Tcl_NewStringObj("ealready", -1);
  case XML_IO_EAFNOSUPPORT:
    return Tcl_NewStringObj("eafnosupport", -1);
  case XML_XINCLUDE_RECURSION:
    return Tcl_NewStringObj("recursion", -1);
  case XML_XINCLUDE_PARSE_VALUE:
    return Tcl_NewStringObj("parse-value", -1);
  case XML_XINCLUDE_ENTITY_DEF_MISMATCH:
    return Tcl_NewStringObj("entity-def-mismatch", -1);
  case XML_XINCLUDE_NO_HREF:
    return Tcl_NewStringObj("no-href", -1);
  case XML_XINCLUDE_NO_FALLBACK:
    return Tcl_NewStringObj("no-fallback", -1);
  case XML_XINCLUDE_HREF_URI:
    return Tcl_NewStringObj("href-URI", -1);
  case XML_XINCLUDE_TEXT_FRAGMENT:
    return Tcl_NewStringObj("text-fragment", -1);
  case XML_XINCLUDE_TEXT_DOCUMENT:
    return Tcl_NewStringObj("text-document", -1);
  case XML_XINCLUDE_INVALID_CHAR:
    return Tcl_NewStringObj("invalid-character", -1);
  case XML_XINCLUDE_BUILD_FAILED:
    return Tcl_NewStringObj("build-failed", -1);
  case XML_XINCLUDE_UNKNOWN_ENCODING:
    return Tcl_NewStringObj("unknown-encoding", -1);
  case XML_XINCLUDE_MULTIPLE_ROOT:
    return Tcl_NewStringObj("multiple-root", -1);
  case XML_XINCLUDE_XPTR_FAILED:
    return Tcl_NewStringObj("XPointer-failed", -1);
  case XML_XINCLUDE_XPTR_RESULT:
    return Tcl_NewStringObj("XPointer-result", -1);
  case XML_XINCLUDE_INCLUDE_IN_INCLUDE:
    return Tcl_NewStringObj("include-in-include", -1);
  case XML_XINCLUDE_FALLBACKS_IN_INCLUDE:
    return Tcl_NewStringObj("fallbacks-in-include", -1);
  case XML_XINCLUDE_FALLBACK_NOT_IN_INCLUDE:
    return Tcl_NewStringObj("fallback-not-in-include", -1);
  case XML_CATALOG_MISSING_ATTR:
    return Tcl_NewStringObj("missing-attribute", -1);
  case XML_CATALOG_ENTRY_BROKEN:
    return Tcl_NewStringObj("entry-broken", -1);
  case XML_CATALOG_PREFER_VALUE:
    return Tcl_NewStringObj("prefer-value", -1);
  case XML_CATALOG_NOT_CATALOG:
    return Tcl_NewStringObj("not-catalog", -1);
  case XML_CATALOG_RECURSION:
    return Tcl_NewStringObj("recursion", -1);
  case XML_SCHEMAP_PREFIX_UNDEFINED:
    return Tcl_NewStringObj("prefix-undefined", -1);
  case XML_SCHEMAP_ATTRFORMDEFAULT_VALUE:
    return Tcl_NewStringObj("attribute-form-default-value", -1);
  case XML_SCHEMAP_ATTRGRP_NONAME_NOREF:
    return Tcl_NewStringObj("attribute-group-noname-noref", -1);
  case XML_SCHEMAP_ATTR_NONAME_NOREF:
    return Tcl_NewStringObj("attribute-noname-noref", -1);
  case XML_SCHEMAP_COMPLEXTYPE_NONAME_NOREF:
    return Tcl_NewStringObj("complexType-noname-noref", -1);
  case XML_SCHEMAP_ELEMFORMDEFAULT_VALUE:
    return Tcl_NewStringObj("element-form-default-value", -1);
  case XML_SCHEMAP_ELEM_NONAME_NOREF:
    return Tcl_NewStringObj("element-noname-noref", -1);
  case XML_SCHEMAP_EXTENSION_NO_BASE:
    return Tcl_NewStringObj("extension-no-base", -1);
  case XML_SCHEMAP_FACET_NO_VALUE:
    return Tcl_NewStringObj("facet-no-value", -1);
  case XML_SCHEMAP_FAILED_BUILD_IMPORT:
    return Tcl_NewStringObj("failed-build-import", -1);
  case XML_SCHEMAP_GROUP_NONAME_NOREF:
    return Tcl_NewStringObj("group-noname-noref", -1);
  case XML_SCHEMAP_IMPORT_NAMESPACE_NOT_URI:
    return Tcl_NewStringObj("import-namespace-not-URI", -1);
  case XML_SCHEMAP_IMPORT_REDEFINE_NSNAME:
    return Tcl_NewStringObj("import-redefine-nsname", -1);
  case XML_SCHEMAP_IMPORT_SCHEMA_NOT_URI:
    return Tcl_NewStringObj("import-schema-not-URI", -1);
  case XML_SCHEMAP_INVALID_BOOLEAN:
    return Tcl_NewStringObj("invalid-boolean", -1);
  case XML_SCHEMAP_INVALID_ENUM:
    return Tcl_NewStringObj("invalid-enumeration", -1);
  case XML_SCHEMAP_INVALID_FACET:
    return Tcl_NewStringObj("invalid-facet", -1);
  case XML_SCHEMAP_INVALID_FACET_VALUE:
    return Tcl_NewStringObj("invalid-facet-value", -1);
  case XML_SCHEMAP_INVALID_MAXOCCURS:
    return Tcl_NewStringObj("invalid-maxOccurs", -1);
  case XML_SCHEMAP_INVALID_MINOCCURS:
    return Tcl_NewStringObj("invalid-minOccurs", -1);
  case XML_SCHEMAP_INVALID_REF_AND_SUBTYPE:
    return Tcl_NewStringObj("invalid-ref-and-subtype", -1);
  case XML_SCHEMAP_INVALID_WHITE_SPACE:
    return Tcl_NewStringObj("invalid-white-space", -1);
  case XML_SCHEMAP_NOATTR_NOREF:
    return Tcl_NewStringObj("noattr-noref", -1);
  case XML_SCHEMAP_NOTATION_NO_NAME:
    return Tcl_NewStringObj("notation-no-name", -1);
  case XML_SCHEMAP_NOTYPE_NOREF:
    return Tcl_NewStringObj("notype-noref", -1);
  case XML_SCHEMAP_REF_AND_SUBTYPE:
    return Tcl_NewStringObj("ref-and-subtype", -1);
  case XML_SCHEMAP_RESTRICTION_NONAME_NOREF:
    return Tcl_NewStringObj("restriction-noname-noref", -1);
  case XML_SCHEMAP_SIMPLETYPE_NONAME:
    return Tcl_NewStringObj("simpleType-noname", -1);
  case XML_SCHEMAP_TYPE_AND_SUBTYPE:
    return Tcl_NewStringObj("type-and-subtype", -1);
  case XML_SCHEMAP_UNKNOWN_ALL_CHILD:
    return Tcl_NewStringObj("unknown-all-child", -1);
  case XML_SCHEMAP_UNKNOWN_ANYATTRIBUTE_CHILD:
    return Tcl_NewStringObj("unknown-anyattribute-child", -1);
  case XML_SCHEMAP_UNKNOWN_ATTR_CHILD:
    return Tcl_NewStringObj("unknown-attribute-child", -1);
  case XML_SCHEMAP_UNKNOWN_ATTRGRP_CHILD:
    return Tcl_NewStringObj("unknown-attributeGroup-child", -1);
  case XML_SCHEMAP_UNKNOWN_ATTRIBUTE_GROUP:
    return Tcl_NewStringObj("unknown-attributeGroup", -1);
  case XML_SCHEMAP_UNKNOWN_BASE_TYPE:
    return Tcl_NewStringObj("unknown-base-type", -1);
  case XML_SCHEMAP_UNKNOWN_CHOICE_CHILD:
    return Tcl_NewStringObj("unknown-choice-child", -1);
  case XML_SCHEMAP_UNKNOWN_COMPLEXCONTENT_CHILD:
    return Tcl_NewStringObj("unknown-complexContent-child", -1);
  case XML_SCHEMAP_UNKNOWN_COMPLEXTYPE_CHILD:
    return Tcl_NewStringObj("unknown-complexType-child", -1);
  case XML_SCHEMAP_UNKNOWN_ELEM_CHILD:
    return Tcl_NewStringObj("unknown-element-child", -1);
  case XML_SCHEMAP_UNKNOWN_EXTENSION_CHILD:
    return Tcl_NewStringObj("unknown-extension-child", -1);
  case XML_SCHEMAP_UNKNOWN_FACET_CHILD:
    return Tcl_NewStringObj("unknown-facet-child", -1);
  case XML_SCHEMAP_UNKNOWN_FACET_TYPE:
    return Tcl_NewStringObj("unknown-facet-type", -1);
  case XML_SCHEMAP_UNKNOWN_GROUP_CHILD:
    return Tcl_NewStringObj("unknown-group-child", -1);
  case XML_SCHEMAP_UNKNOWN_IMPORT_CHILD:
    return Tcl_NewStringObj("unknown-import-child", -1);
  case XML_SCHEMAP_UNKNOWN_LIST_CHILD:
    return Tcl_NewStringObj("unknown-list-child", -1);
  case XML_SCHEMAP_UNKNOWN_NOTATION_CHILD:
    return Tcl_NewStringObj("unknown-notation-child", -1);
  case XML_SCHEMAP_UNKNOWN_PROCESSCONTENT_CHILD:
    return Tcl_NewStringObj("unknown-processContent-child", -1);
  case XML_SCHEMAP_UNKNOWN_REF:
    return Tcl_NewStringObj("unknown-ref", -1);
  case XML_SCHEMAP_UNKNOWN_RESTRICTION_CHILD:
    return Tcl_NewStringObj("unknown-restriction-child", -1);
  case XML_SCHEMAP_UNKNOWN_SCHEMAS_CHILD:
    return Tcl_NewStringObj("unknown-schemas-child", -1);
  case XML_SCHEMAP_UNKNOWN_SEQUENCE_CHILD:
    return Tcl_NewStringObj("unknown-sequence-child", -1);
  case XML_SCHEMAP_UNKNOWN_SIMPLETYPE_CHILD:
    return Tcl_NewStringObj("unknown-simpleType-child", -1);
  case XML_SCHEMAP_UNKNOWN_TYPE:
    return Tcl_NewStringObj("unknown-type", -1);
  case XML_SCHEMAP_UNKNOWN_UNION_CHILD:
    return Tcl_NewStringObj("unknown-union-child", -1);
  case XML_SCHEMAP_ELEM_DEFAULT_FIXED:
    return Tcl_NewStringObj("element-default-fixed", -1);
  case XML_SCHEMAP_REGEXP_INVALID:
    return Tcl_NewStringObj("regexp-invalid", -1);
  case XML_SCHEMAP_FAILED_LOAD:
    return Tcl_NewStringObj("failed-load", -1);
  case XML_SCHEMAP_NOTHING_TO_PARSE:
    return Tcl_NewStringObj("nothing-to-parse", -1);
  case XML_SCHEMAP_NOROOT:
    return Tcl_NewStringObj("no-root", -1);
  case XML_SCHEMAP_REDEFINED_GROUP:
    return Tcl_NewStringObj("redefined-group", -1);
  case XML_SCHEMAP_REDEFINED_TYPE:
    return Tcl_NewStringObj("redefined-type", -1);
  case XML_SCHEMAP_REDEFINED_ELEMENT:
    return Tcl_NewStringObj("redefined-element", -1);
  case XML_SCHEMAP_REDEFINED_ATTRGROUP:
    return Tcl_NewStringObj("redefined-attributeGroup", -1);
  case XML_SCHEMAP_REDEFINED_ATTR:
    return Tcl_NewStringObj("redefined-attribute", -1);
  case XML_SCHEMAP_REDEFINED_NOTATION:
    return Tcl_NewStringObj("redefined-notation", -1);
  case XML_SCHEMAP_FAILED_PARSE:
    return Tcl_NewStringObj("failed-parse", -1);
  case XML_SCHEMAV_NOROOT:
    return Tcl_NewStringObj("no-root", -1);
  case XML_SCHEMAV_UNDECLAREDELEM:
    return Tcl_NewStringObj("undeclared-element", -1);
  case XML_SCHEMAV_NOTTOPLEVEL:
    return Tcl_NewStringObj("not-toplevel", -1);
  case XML_SCHEMAV_MISSING:
    return Tcl_NewStringObj("missing", -1);
  case XML_SCHEMAV_WRONGELEM:
    return Tcl_NewStringObj("wrong-element", -1);
  case XML_SCHEMAV_NOTYPE:
    return Tcl_NewStringObj("no-type", -1);
  case XML_SCHEMAV_NOROLLBACK:
    return Tcl_NewStringObj("no-rollback", -1);
  case XML_SCHEMAV_ISABSTRACT:
    return Tcl_NewStringObj("is-abstract", -1);
  case XML_SCHEMAV_NOTEMPTY:
    return Tcl_NewStringObj("not-empty", -1);
  case XML_SCHEMAV_ELEMCONT:
    return Tcl_NewStringObj("element-content", -1);
  case XML_SCHEMAV_HAVEDEFAULT:
    return Tcl_NewStringObj("have-default", -1);
  case XML_SCHEMAV_NOTNILLABLE:
    return Tcl_NewStringObj("not-nillable", -1);
  case XML_SCHEMAV_EXTRACONTENT:
    return Tcl_NewStringObj("extra-content", -1);
  case XML_SCHEMAV_INVALIDATTR:
    return Tcl_NewStringObj("invalid-attribute", -1);
  case XML_SCHEMAV_INVALIDELEM:
    return Tcl_NewStringObj("invalid-element", -1);
  case XML_SCHEMAV_NOTDETERMINIST:
    return Tcl_NewStringObj("not-deterministic", -1);
  case XML_SCHEMAV_CONSTRUCT:
    return Tcl_NewStringObj("construct", -1);
  case XML_SCHEMAV_INTERNAL:
    return Tcl_NewStringObj("internal", -1);
  case XML_SCHEMAV_NOTSIMPLE:
    return Tcl_NewStringObj("not-simple", -1);
  case XML_SCHEMAV_ATTRUNKNOWN:
    return Tcl_NewStringObj("attribute-unknown", -1);
  case XML_SCHEMAV_ATTRINVALID:
    return Tcl_NewStringObj("attribute-invalid", -1);
  case XML_SCHEMAV_VALUE:
    return Tcl_NewStringObj("value", -1);
  case XML_SCHEMAV_FACET:
    return Tcl_NewStringObj("facet", -1);
  case XML_XPTR_UNKNOWN_SCHEME:
    return Tcl_NewStringObj("unknown-scheme", -1);
  case XML_XPTR_CHILDSEQ_START:
    return Tcl_NewStringObj("child-sequence-start", -1);
  case XML_XPTR_EVAL_FAILED:
    return Tcl_NewStringObj("eval-failed", -1);
  case XML_XPTR_EXTRA_OBJECTS:
    return Tcl_NewStringObj("extra-objects", -1);
  case XML_C14N_CREATE_CTXT:
    return Tcl_NewStringObj("create-context", -1);
  case XML_C14N_REQUIRES_UTF8:
    return Tcl_NewStringObj("requires-utf-8", -1);
  case XML_C14N_CREATE_STACK:
    return Tcl_NewStringObj("create-stack", -1);
  case XML_C14N_INVALID_NODE:
    return Tcl_NewStringObj("invalid-node", -1);
  case XML_FTP_PASV_ANSWER:
    return Tcl_NewStringObj("pasv-answer", -1);
  case XML_FTP_EPSV_ANSWER:
    return Tcl_NewStringObj("epsv-answer", -1);
  case XML_FTP_ACCNT:
    return Tcl_NewStringObj("account", -1);
  case XML_HTTP_URL_SYNTAX:
    return Tcl_NewStringObj("URL-syntax", -1);
  case XML_HTTP_USE_IP:
    return Tcl_NewStringObj("use-IP", -1);
  case XML_HTTP_UNKNOWN_HOST:
    return Tcl_NewStringObj("unknown-host", -1);
  default:
    return Tcl_NewIntObj(code);
  }
}

void
TclXML_libxml2_ErrorHandler (ctx, error)
     void *ctx; /* ignore - depends on context */
     xmlErrorPtr error;
{
  ThreadSpecificData *tsdPtr = Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  Tcl_Obj *objPtr;

  if (tsdPtr->errorInfoPtr->listPtr == NULL) {
    tsdPtr->errorInfoPtr->listPtr = Tcl_NewObj();
	Tcl_IncrRefCount(tsdPtr->errorInfoPtr->listPtr);
  }

  objPtr = Tcl_NewListObj(0, NULL);

  Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr,
			   ErrorDomainToString(error->domain));
  Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr,
			   ErrorLevelToString(error->level));
  Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr,
			   ErrorCodeToString(error->code));

  if (error->node == NULL) {
    Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr, Tcl_NewObj());
  } else if (((xmlDocPtr) error->node)->type == XML_DOCUMENT_NODE) {
    Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr,
			     TclXML_libxml2_CreateObjFromDoc((xmlDocPtr) error->node));
  } else if (tsdPtr->errorInfoPtr->nodeHandlerProc != NULL) {
	Tcl_Obj *nodeObjPtr;

	nodeObjPtr = (tsdPtr->errorInfoPtr->nodeHandlerProc)(tsdPtr->errorInfoPtr->interp, (ClientData) error->node);
	if (nodeObjPtr != NULL) {
	  Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr, nodeObjPtr);
	} else {
	  Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr, Tcl_NewObj());
	}
  } else {
    Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr, Tcl_NewObj());
  }

  Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr,
			   Tcl_NewIntObj(error->line));
  Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr,
			   Tcl_NewStringObj(error->message, -1));

  Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr,
			   Tcl_NewIntObj(error->int1));
  Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr,
			   Tcl_NewIntObj(error->int2));
  if (error->str1) {
    Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr,
			     Tcl_NewStringObj(error->str1, -1));
  }
  if (error->str2) {
    Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr,
			     Tcl_NewStringObj(error->str2, -1));
  }
  if (error->str3) {
    Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, objPtr,
			     Tcl_NewStringObj(error->str3, -1));
  }

  Tcl_ListObjAppendElement(tsdPtr->errorInfoPtr->interp, tsdPtr->errorInfoPtr->listPtr, objPtr);
}

void
TclXML_libxml2_ResetError(interp)
    Tcl_Interp *interp;
{
  ThreadSpecificData *tsdPtr = Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));

  if (tsdPtr->errorInfoPtr->listPtr != NULL) {
    Tcl_DecrRefCount(tsdPtr->errorInfoPtr->listPtr);
    tsdPtr->errorInfoPtr->listPtr = NULL;
  }
}

Tcl_Obj *
TclXML_libxml2_GetErrorObj(interp)
    Tcl_Interp *interp;
{
  ThreadSpecificData *tsdPtr = Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));

  return tsdPtr->errorInfoPtr->listPtr;
}

void
TclXML_libxml2_SetErrorNodeFunc(interp, proc)
    Tcl_Interp *interp;
    TclXML_ErrorNodeHandlerProc *proc;
{
  ThreadSpecificData *tsdPtr = Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));

  if (!tsdPtr->initialized) {
    Tcl_SetObjResult(interp, Tcl_NewStringObj("internal error: docObj data not initialized", -1));
    Tcl_BackgroundError(interp);
    return;
  }

  tsdPtr->errorInfoPtr->nodeHandlerProc = proc;
}

