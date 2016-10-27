/* tcldom-libxml2.c --
 *
 *	A Tcl wrapper for libxml's node tree API,
 *	conformant to the TclDOM API.
 *
 * Copyright (c) 2005-2008 by Explain.
 * http://www.explain.com.au/
 * Copyright (c) 2001-2004 Zveno Pty Ltd
 * http://www.zveno.com/
 *
 * See the file "LICENSE" for information on usage and
 * redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * $Id: tcldom-libxml2.c,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $
 */

#include <tcldom/tcldom.h>
#include <tcldom-libxml2/tcldom-libxml2.h>
#include <libxml/xpath.h>
#include <libxml/xpathInternals.h>
#include <libxml/xmlIO.h>
#include <libxml/HTMLtree.h>
#include <libxml/globals.h>
#include <libxml/xinclude.h>
#include <libxml/parserInternals.h>
#include <libxml/xmlschemas.h>
#include <libxml/xmlschemastypes.h>
#include <libxml/xmlsave.h>
#include <string.h>

#define TCL_DOES_STUBS \
    (TCL_MAJOR_VERSION > 8 || TCL_MAJOR_VERSION == 8 && (TCL_MINOR_VERSION > 1 || \
     (TCL_MINOR_VERSION == 1 && TCL_RELEASE_LEVEL == TCL_FINAL_RELEASE)))

#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLEXPORT

/*
 * Manage lists of Tcl_Obj's
 */

typedef struct ObjList {
  Tcl_Obj *objPtr;
  struct ObjList *next;
} ObjList;

/*
 * Forward declarations for private functions.
 */

static void FreeDocument _ANSI_ARGS_((ClientData clientData));
static TclDOM_libxml2_Document * GetDOMDocument _ANSI_ARGS_((Tcl_Interp *interp,
							     TclXML_libxml2_Document *tDocPtr));

static void TclDOM_libxml2_DestroyNode _ANSI_ARGS_((Tcl_Interp *interp, TclDOM_libxml2_Node *tNodePtr));
static void TclDOM_libxml2_InvalidateNode _ANSI_ARGS_((TclDOM_libxml2_Node *tNodePtr));

static char * TclDOMLiveNodeListNode _ANSI_ARGS_((ClientData clientData,
						  Tcl_Interp *interp,
						  char *name1,
						  char *name2,
						  int flags));
static char * TclDOMLiveNodeListDoc _ANSI_ARGS_((ClientData clientData,
						  Tcl_Interp *interp,
						  char *name1,
						  char *name2,
						  int flags));
static char * TclDOMLiveNamedNodeMap _ANSI_ARGS_((ClientData clientData,
						  Tcl_Interp *interp,
						  char *name1,
						  char *name2,
						  int flags));
static int TclDOMSetLiveNodeListNode _ANSI_ARGS_((Tcl_Interp *interp,
						  char *varname,
						  xmlNodePtr nodePtr));
static int TclDOMSetLiveNodeListDoc _ANSI_ARGS_((Tcl_Interp *interp,
						  char *varname,
						  xmlDocPtr docPtr));
static int TclDOMSetLiveNamedNodeMap _ANSI_ARGS_((Tcl_Interp *interp,
						  char *varname,
						  xmlNodePtr nodePtr));

/*
 * Forward declarations of commands
 */

static int TclDOMDOMImplementationCommand _ANSI_ARGS_((ClientData dummy,
						       Tcl_Interp *interp,
						       int objc,
						       Tcl_Obj *CONST objv[]));
static int TclDOMDocumentCommand _ANSI_ARGS_((ClientData dummy,
					      Tcl_Interp *interp,
					      int objc,
					      Tcl_Obj *CONST objv[]));
static void DocumentNodeCmdDelete _ANSI_ARGS_((ClientData clientdata));
static int TclDOMNodeCommand _ANSI_ARGS_((ClientData dummy,
					  Tcl_Interp *interp,
					  int objc,
					  Tcl_Obj *CONST objv[]));
static void TclDOMNodeCommandDelete _ANSI_ARGS_((ClientData clientdata));
static int TclDOMElementCommand _ANSI_ARGS_((ClientData dummy,
					     Tcl_Interp *interp,
					     int objc,
					     Tcl_Obj *CONST objv[]));
static int TclDOMEventCommand _ANSI_ARGS_((ClientData dummy,
					   Tcl_Interp *interp,
					   int objc,
					   Tcl_Obj *CONST objv[]));
static void TclDOMEventCommandDelete _ANSI_ARGS_((ClientData clientdata));
static Tcl_Obj * TclDOM_libxml2_NewEventObj _ANSI_ARGS_((Tcl_Interp *interp, 
	xmlDocPtr docPtr, 
	enum TclDOM_EventTypes type, 
	Tcl_Obj *typeObjPtr));

/*
 * Functions that implement the TclDOM_Implementation interface
 */

static int TclDOM_HasFeatureCommand _ANSI_ARGS_((ClientData dummy,
					    Tcl_Interp *interp,
					    int objc,
					    Tcl_Obj *CONST objv[]));
static int TclDOMCreateCommand _ANSI_ARGS_((ClientData dummy,
					    Tcl_Interp *interp,
					    int objc,
					    Tcl_Obj *CONST objv[]));
static int TclDOMDestroyCommand _ANSI_ARGS_((ClientData dummy,
					    Tcl_Interp *interp,
					    int objc,
					    Tcl_Obj *CONST objv[]));
static int TclDOMParseCommand _ANSI_ARGS_((ClientData dummy,
					    Tcl_Interp *interp,
					    int objc,
					    Tcl_Obj *CONST objv[]));
static int TclDOMSerializeCommand _ANSI_ARGS_((ClientData dummy,
					    Tcl_Interp *interp,
					    int objc,
					    Tcl_Obj *CONST objv[]));
static int TclDOMSelectNodeCommand _ANSI_ARGS_((ClientData dummy,
					    Tcl_Interp *interp,
					    int objc,
					    Tcl_Obj *CONST objv[]));
static int TclDOMIsNodeCommand _ANSI_ARGS_((ClientData dummy,
					    Tcl_Interp *interp,
					    int objc,
					    Tcl_Obj *CONST objv[]));
static int TclDOMAdoptCommand _ANSI_ARGS_((ClientData dummy,
					    Tcl_Interp *interp,
					    int objc,
					    Tcl_Obj *CONST objv[]));

/*
 * Additional features
 */

static int TclDOMXIncludeCommand _ANSI_ARGS_((ClientData dummy,
					      Tcl_Interp *interp,
					      int objc,
					      Tcl_Obj *CONST objv[]));

static int TclDOMPrefix2NSCommand _ANSI_ARGS_((ClientData dummy,
					       Tcl_Interp *interp,
					       int objc,
					       Tcl_Obj *CONST objv[]));
static int TclDOMTrimCommand _ANSI_ARGS_((ClientData dummy,
					    Tcl_Interp *interp,
					    int objc,
					    Tcl_Obj *CONST objv[]));

static void TrimDocument _ANSI_ARGS_((Tcl_Interp *interp, xmlDocPtr docPtr));
static int AdoptDocument _ANSI_ARGS_((Tcl_Interp *interp, Tcl_Obj *objPtr));

static int DocumentCget _ANSI_ARGS_((Tcl_Interp *interp, 
				     xmlDocPtr docPtr, 
				     Tcl_Obj *CONST objPtr));
static int NodeCget _ANSI_ARGS_((Tcl_Interp *interp, 
				 xmlDocPtr docPtr, 
				 xmlNodePtr nodePtr, 
				 Tcl_Obj *CONST objPtr));
static int NodeConfigure _ANSI_ARGS_((Tcl_Interp *interp, 
				      xmlNodePtr nodePtr,
				      int objc,
				      Tcl_Obj *CONST objPtr[]));
static int ElementCget _ANSI_ARGS_((Tcl_Interp *interp,
				    xmlNodePtr nodePtr,
				    Tcl_Obj *CONST objPtr));

static int TclDOM_NodeAppendChild _ANSI_ARGS_((Tcl_Interp *interp,
					       xmlNodePtr nodePtr,
					       xmlNodePtr newPtr));
static int TclDOM_NodeInsertBefore _ANSI_ARGS_((Tcl_Interp *interp,
						xmlNodePtr refPtr,
						xmlNodePtr newPtr));

static void PostMutationEvents _ANSI_ARGS_((Tcl_Interp *interp,
					    TclXML_libxml2_Document *tDocPtr,
					    xmlNodePtr nodePtr,
					    xmlNodePtr refPtr,
					    xmlNodePtr newPtr,
					    xmlNodePtr oldParent,
					    xmlNodePtr newParent));

static int DTDValidate _ANSI_ARGS_((Tcl_Interp *interp,
									TclDOM_libxml2_Document *domDocPtr));
static int SchemaCompile _ANSI_ARGS_((Tcl_Interp *interp,
				      TclDOM_libxml2_Document *domDocPtr));
static int SchemaValidate _ANSI_ARGS_((Tcl_Interp *interp,
				       TclDOM_libxml2_Document *domDocPtr,
				       xmlDocPtr instancePtr));
/*
static int RelaxNGCompile _ANSI_ARGS_((Tcl_Interp *interp,
				    xmlDocPtr doc));
static int RelaxNGValidate _ANSI_ARGS_((Tcl_Interp *interp,
				       xmlRelaxNGPtr schema,
				       xmlDocPtr instance));
*/

static void NodeAddObjRef _ANSI_ARGS_((TclDOM_libxml2_Node *tNodePtr,
									   Tcl_Obj *objPtr));
#if 0
static void DumpNode _ANSI_ARGS_((TclDOM_libxml2_Node *tNodePtr));
#endif

/*
 * Other utilities
 */

static Tcl_Obj * GetPath _ANSI_ARGS_((Tcl_Interp *interp,
					    xmlNodePtr nodePtr));

/*
 * MS VC++ oddities
 */

#ifdef WIN32
#if !defined (__CYGWIN__)
#define vsnprintf _vsnprintf
#define snprintf _snprintf
#endif /* __CYGWIN__ */
#endif /* WIN32 */

/*
 * Nodes as Tcl Objects (overloaded to also support event nodes).
 */

Tcl_FreeInternalRepProc	NodeTypeFree;
Tcl_DupInternalRepProc	NodeTypeDup;
Tcl_UpdateStringProc	NodeTypeUpdate;
Tcl_SetFromAnyProc      NodeTypeSetFromAny;

Tcl_ObjType NodeObjType = {
  "libxml2-node",
  NodeTypeFree,
  NodeTypeDup,
  NodeTypeUpdate,
  NodeTypeSetFromAny
};

/*
 * For additional checks when creating nodes.
 * These are setup at initialisation-time, but thereafter are read-only.
 */

static Tcl_Obj *checkName;
static Tcl_Obj *checkQName;

/*
 * libxml2 is mostly thread-safe, but there are issues with error callbacks
 */

TCL_DECLARE_MUTEX(libxml2)

/*
 * Statically include the definitions of option tables:
 * Due to linking problems on Windows, using MS VC++.
 */

#include "tcldom.c"

/*
 *----------------------------------------------------------------------------
 *
 * Tcldom_libxml2_Init --
 *
 *  Initialisation routine for module.
 *  This is no longer loaded as a separate module.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Creates commands in the interpreter,
 *
 *----------------------------------------------------------------------------
 */

int
Tcldom_libxml2_Init (interp)
     Tcl_Interp *interp;	/* Interpreter to initialise */
{

  Tcl_MutexLock(&libxml2);
  xmlXPathInit();
  Tcl_MutexUnlock(&libxml2);

  /*
   * Provide a handler for nodes for structured error reporting
   */

  TclXML_libxml2_SetErrorNodeFunc(interp, 
				  (TclXML_ErrorNodeHandlerProc *) TclDOM_libxml2_CreateObjFromNode);

  /*
   * For each of the standard commands, register the command
   * in both the ::dom and ::dom::libxml2 Tcl namespaces -
   * they are equivalent.
   */

  Tcl_CreateObjCommand(interp, "dom::libxml2::DOMImplementation",
		       TclDOMDOMImplementationCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::DOMImplementation",
		       TclDOMDOMImplementationCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::libxml2::hasfeature",
		       TclDOM_HasFeatureCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::hasfeature",
		       TclDOM_HasFeatureCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::libxml2::document",
		       TclDOMDocumentCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::document",
		       TclDOMDocumentCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::libxml2::node",
		       TclDOMNodeCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::node",
		       TclDOMNodeCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::libxml2::create",
		       TclDOMCreateCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::create",
		       TclDOMCreateCommand, NULL, NULL);

  /*
   * Implemented in Tcl (for the moment)
  Tcl_CreateObjCommand(interp, "dom::libxml2::parse",
		       TclDOMParseCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::parse",
		       TclDOMParseCommand, NULL, NULL);
  */
  Tcl_CreateObjCommand(interp, "dom::libxml2::adoptdocument",
		       TclDOMAdoptCommand, NULL, NULL);

  Tcl_CreateObjCommand(interp, "dom::libxml2::serialize",
		       TclDOMSerializeCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::serialize",
		       TclDOMSerializeCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::libxml2::selectnode",
		       TclDOMSelectNodeCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::selectNode",
		       TclDOMSelectNodeCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::libxml2::isNode",
		       TclDOMIsNodeCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::isNode",
		       TclDOMIsNodeCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::libxml2::element",
		       TclDOMElementCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::element",
		       TclDOMElementCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::libxml2::event",
		       TclDOMEventCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::event",
		       TclDOMEventCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::libxml2::xinclude",
		       TclDOMXIncludeCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::xinclude",
		       TclDOMXIncludeCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::libxml2::prefix2namespaceURI",
		       TclDOMPrefix2NSCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::prefix2namespaceURI",
		       TclDOMPrefix2NSCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::libxml2::destroy",
		       TclDOMDestroyCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::destroy",
		       TclDOMDestroyCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::libxml2::trim",
		       TclDOMTrimCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "dom::trim",
		       TclDOMTrimCommand, NULL, NULL);

  /* Setup name checking REs */
  checkName = Tcl_NewStringObj("^", -1);
  Tcl_AppendObjToObj(checkName, Tcl_GetVar2Ex(interp, "::xml::Name", NULL, 0));
  Tcl_AppendToObj(checkName, "$", -1);
  Tcl_IncrRefCount(checkName);
  checkQName = Tcl_NewStringObj("^", -1);
  Tcl_AppendObjToObj(checkQName, Tcl_GetVar2Ex(interp, "::xml::QName", NULL, 0));
  Tcl_AppendToObj(checkQName, "$", -1);
  Tcl_IncrRefCount(checkQName);

  TclDOM_SetVars(interp);

  Tcl_RegisterObjType(&NodeObjType);

  return TCL_OK;
}

/*
 * DOM is safe, since it is merely an in-memory representation of the document tree.
 * However, XInclude is not safe.  This is still OK because XInclude uses the external
 * entity mechanism to load remote documents and TclXML/libxml2 intercepts those calls.
 */
int
Tcldom_libxml2_SafeInit (interp)
     Tcl_Interp *interp;	/* Interpreter to initialise */
{
  return Tcldom_libxml2_Init(interp);
}

#if 0
void
DumpDocNodeTable(domDocPtr)
     TclDOM_libxml2_Document *domDocPtr;
{
  return;

  /*
  TclDOM_libxml2_Node *tNodePtr;
  Tcl_HashEntry *entryPtr;
  Tcl_HashSearch search;

  sprintf(dbgbuf, "  Nodes in doc \"%s\":\n", domDocPtr->tDocPtr->token);
  Tcl_WriteChars(stderrChan, dbgbuf, -1);

  for (entryPtr = Tcl_FirstHashEntry(domDocPtr->nodes, &search);
       entryPtr;
       entryPtr = Tcl_NextHashEntry(&search)) {
    tNodePtr = (TclDOM_libxml2_Node *) Tcl_GetHashValue(entryPtr);
    sprintf(dbgbuf, "    Hash entry \"%s\" (x%x)\n", Tcl_GetHashKey(domDocPtr->nodes, entryPtr), tNodePtr);
    Tcl_WriteChars(stderrChan, dbgbuf, -1);
    sprintf(dbgbuf, "    Node \"%s\"\n", tNodePtr->token);
    Tcl_WriteChars(stderrChan, dbgbuf, -1);
  }
  */
}
#endif

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_HasFeatureCommand --
 *
 *  Implements dom::libxml2::hasfeature command
 *
 * Results:
 *  Returns boolean.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_HasFeatureCommand (dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  if (objc != 3) {
    Tcl_WrongNumArgs(interp, 0, objv, "hasfeature feature version");
    return TCL_ERROR;
  }

  if (Tcl_RegExpMatchObj(interp, objv[1], Tcl_NewStringObj("create|destroy|parse|query|serialize|trim|Events|UIEvents|isNode", -1)) == 1) {
    if (Tcl_StringMatch(Tcl_GetStringFromObj(objv[2], NULL), "1.0") == 1) {
      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(1));
    } else {
      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(0));
    }
  } else {
    Tcl_SetObjResult(interp, Tcl_NewBooleanObj(0));
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMCreateCommand --
 *
 *  Implements dom::libxml2::create command
 *
 * Results:
 *  Creates a new document.
 *
 * Side effects:
 *  Allocates memory.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOMCreateCommand (dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  Tcl_Obj *objPtr;

  if (objc != 1) {
    Tcl_WrongNumArgs(interp, 1, objv, "");
    return TCL_ERROR;
  }

  objPtr = TclXML_libxml2_NewDocObj(interp);
  if (!objPtr) {
    return TCL_ERROR;
  }
  TclXML_libxml2_DocKeep(objPtr, TCLXML_LIBXML2_DOCUMENT_KEEP);

  if (AdoptDocument(interp, objPtr) != TCL_OK) {
    return TCL_ERROR;
  }

  return TCL_OK;
}
int
AdoptDocument(interp, objPtr)
     Tcl_Interp *interp;
     Tcl_Obj *objPtr;
{
  TclXML_libxml2_Document *tDocPtr;
  TclDOM_libxml2_Document *domDocPtr;

  /*
   * Claim this object so the document will not be destroyed
   * underneath us.
   */
  Tcl_IncrRefCount(objPtr);

  if (TclXML_libxml2_GetTclDocFromObj(interp, objPtr, &tDocPtr) != TCL_OK) {
    return TCL_ERROR;
  }

  domDocPtr = (TclDOM_libxml2_Document *) Tcl_Alloc(sizeof(TclDOM_libxml2_Document));
  domDocPtr->interp = interp;
  domDocPtr->tDocPtr = tDocPtr;
  domDocPtr->objPtr = objPtr;

  domDocPtr->schema = NULL;

  domDocPtr->nodes = (Tcl_HashTable *) Tcl_Alloc(sizeof(Tcl_HashTable));
  Tcl_InitHashTable(domDocPtr->nodes, TCL_STRING_KEYS);
  domDocPtr->nodeCntr = 0;

  domDocPtr->captureListeners = (Tcl_HashTable *) Tcl_Alloc(sizeof(Tcl_HashTable));
  Tcl_InitHashTable(domDocPtr->captureListeners, TCL_ONE_WORD_KEYS);
  domDocPtr->bubbleListeners = (Tcl_HashTable *) Tcl_Alloc(sizeof(Tcl_HashTable));
  Tcl_InitHashTable(domDocPtr->bubbleListeners, TCL_ONE_WORD_KEYS);
  memset(domDocPtr->listening, 0, TCLDOM_NUM_EVENT_TYPES * sizeof(int));

  /*
   * When the document is eventually destroyed,
   * make sure all memory is freed.
   */
  tDocPtr->dom = (ClientData) domDocPtr;
  tDocPtr->domfree = FreeDocument;

  /*
   * Create a Tcl namespace for this document
   */

  Tcl_VarEval(interp, "namespace eval ::dom::", tDocPtr->token, " {}\n", NULL);

  /*
   * Create a DOM command to control the document.
   */

  domDocPtr->cmd = Tcl_CreateObjCommand(interp, tDocPtr->token, TclDOMDocumentCommand, (ClientData) domDocPtr, DocumentNodeCmdDelete);

  Tcl_SetObjResult(interp, objPtr);

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_libxml2_CreateObjFromDoc --
 *
 *  Wrapper for TclXML_libxml2_CreateObjFromDoc
 *
 * Results:
 *  Returns Tcl_Obj.
 *
 * Side effects:
 *  Allocates memory.
 *
 *----------------------------------------------------------------------------
 */

Tcl_Obj *
TclDOM_libxml2_CreateObjFromDoc (interp, docPtr)
     Tcl_Interp *interp;
     xmlDocPtr docPtr;
{
  Tcl_Obj *newPtr;

  newPtr = TclXML_libxml2_CreateObjFromDoc(docPtr);

  if (AdoptDocument(interp, newPtr) != TCL_OK) {
    Tcl_DecrRefCount(newPtr);
    return NULL;
  }

  return newPtr;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMDestroyCommand --
 *
 *  Implements dom::libxml2::destroy command
 *
 * Results:
 *  Frees document or node.
 *
 * Side effects:
 *  Deallocates memory.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOMDestroyCommand (dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  TclXML_libxml2_Document *tDocPtr;
  TclDOM_libxml2_Node *tNodePtr;
  
  if (objc != 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "token");
    return TCL_ERROR;
  }

  if (TclXML_libxml2_GetTclDocFromObj(interp, objv[1], &tDocPtr) == TCL_OK) {
    TclDOM_libxml2_Document *domDocPtr = GetDOMDocument(interp, tDocPtr);

    if (domDocPtr == NULL) {
      /* This is an error! */
      TclXML_libxml2_DestroyDocument(tDocPtr);
    } else {
      Tcl_DeleteCommandFromToken(interp, domDocPtr->cmd);
    }

  } else if (TclDOM_libxml2_GetTclNodeFromObj(interp, objv[1], &tNodePtr) == TCL_OK) {
    TclDOM_libxml2_DestroyNode(interp, tNodePtr);
  } else if (TclDOM_libxml2_GetTclEventFromObj(interp, objv[1], &tNodePtr) == TCL_OK) {
    TclDOM_libxml2_DestroyNode(interp, tNodePtr);
  } else {
    Tcl_SetResult(interp, "not a DOM node", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * DocumentNodeCmdDelete --
 *
 *  Invoked when a DOM document's command is deleted.
 *
 * Results:
 *  Frees document.
 *
 * Side effects:
 *  Deallocates memory.
 *
 *----------------------------------------------------------------------------
 */

void
DocumentNodeCmdDelete (clientData)
     ClientData clientData;
{
  TclDOM_libxml2_Document *domDocPtr = (TclDOM_libxml2_Document *) clientData;

#ifndef WIN32
  TclXML_libxml2_DestroyDocument(domDocPtr->tDocPtr);
#endif /* not WIN32 */
#ifdef WIN32
  /*
   * Workaround bug in TclXML/libxml2.
   * This will, of course, leak memory.
   */

  /* FreeDocument((ClientData) domDocPtr); */
#endif /* WIN32 */
}

/*
 *----------------------------------------------------------------------------
 *
 * FreeDocument --
 *
 *  Frees resources associated with a document.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Deallocates memory.
 *
 *----------------------------------------------------------------------------
 */

#ifdef WIN32
/*
 * Using Tcl internal functions appears to cause linking problems
 * when using MS VC++, so avoid the problem by invoking a script instead.
 */

void DeleteNamespace (interp, ns)
     Tcl_Interp *interp;
     char *ns;
{
  Tcl_Obj *cmdPtr = Tcl_NewObj();

  Tcl_AppendStringsToObj(cmdPtr, "namespace delete ", ns, NULL);
  Tcl_EvalObjEx(interp, cmdPtr, TCL_EVAL_GLOBAL);
  Tcl_DecrRefCount(cmdPtr);
}
#else /* not WIN32 */
/*
 * Internal Tcl functions
 */

#if (TCL_MAJOR_VERSION < 8 || (TCL_MAJOR_VERSION == 8 && TCL_MINOR_VERSION < 5))

/*
 * SRB: 2005-12-29: This should use #include <tclInt.h>, but private sources may not be available.
 */

EXTERN Tcl_Namespace * Tcl_FindNamespace _ANSI_ARGS_((Tcl_Interp * interp,
						      CONST char * name,
						      Tcl_Namespace * contextNsPtr,
						      int flags));
EXTERN void Tcl_DeleteNamespace _ANSI_ARGS_((Tcl_Namespace * nsPtr));

#endif /* Tcl < 8.5 */

void DeleteNamespace (interp, ns)
     Tcl_Interp *interp;
     char *ns;
{
  Tcl_Namespace *namespacePtr;
  namespacePtr = Tcl_FindNamespace(interp, ns,
				   (Tcl_Namespace *) NULL, 0);
  if (namespacePtr) {
    Tcl_DeleteNamespace(namespacePtr);
  } /* else internal error */
}
#endif /* WIN32 */

void
FreeDocument (clientData)
     ClientData clientData;
{
  TclDOM_libxml2_Document *domDocPtr = (TclDOM_libxml2_Document *) clientData;
  char buf[1024];

  snprintf(buf, 1023, "::dom::%s", domDocPtr->tDocPtr->token);
  DeleteNamespace(domDocPtr->interp, buf);

  /*
   * Deleting the namespace deletes all of the node commands,
   * which in turn invalidates the node references.
   * So no need to do it again here.
   *
  entry = Tcl_FirstHashEntry(domDocPtr->nodes, &search);
  while (entry) {
    tNodePtr = (TclDOM_libxml2_Node *) Tcl_GetHashValue(entry);
    TclDOM_libxml2_InvalidateNode(tNodePtr);
    entry = Tcl_NextHashEntry(&search);
  }
  */
  Tcl_DeleteHashTable(domDocPtr->nodes);
  Tcl_Free((char *) domDocPtr->nodes);

  if (domDocPtr->schema) {
    Tcl_MutexLock(&libxml2);
    /* This also frees the copy of the document used by the schema context */
    xmlSchemaFree(domDocPtr->schema);
    Tcl_MutexUnlock(&libxml2);
  }

  Tcl_Free((char *) domDocPtr->captureListeners);
  Tcl_Free((char *) domDocPtr->bubbleListeners);

  /* Workaround win32 destroy bug, see above */
#ifndef WIN32
  Tcl_DecrRefCount(domDocPtr->objPtr);
#endif /* not WIN32 */

  Tcl_Free((char *) domDocPtr);
}

/*
 *----------------------------------------------------------------------------
 *
 * GetDOMDocument --
 *
 *  Retrieves the DOM document structure associated with a libxml2 document.
 *  libxslt synthesizes documents, so it is often the case that a node
 *  must be processed that has not had its document "adopted".
 *
 * Results:
 *  Returns pointer to DOM structure.
 *
 * Side effects:
 *  Document is "adopted" if necessary.
 *
 *----------------------------------------------------------------------------
 */

TclDOM_libxml2_Document *
GetDOMDocument(interp, tDocPtr)
     Tcl_Interp *interp;
     TclXML_libxml2_Document *tDocPtr;
{
  if (tDocPtr->dom != NULL) {
    return (TclDOM_libxml2_Document *) tDocPtr->dom;
  } else if (interp == NULL) {
    return NULL;
  } else {
    Tcl_Obj *objPtr;

    objPtr = TclXML_libxml2_CreateObjFromDoc(tDocPtr->docPtr);
    if (AdoptDocument(interp, objPtr) != TCL_OK) {
      Tcl_DecrRefCount(objPtr);
      return NULL;
    } else {
      return (TclDOM_libxml2_Document *) tDocPtr->dom;
    }
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMParseCommand --
 *
 *  Implements dom::libxml2::parse command
 *
 *  Not implemented here at present - calls Tcl script
 *
 * Results:
 *  Depends on method.
 *
 * Side effects:
 *  Depends on method.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOMParseCommand (dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  /* Tcl_Obj *objPtr; */
  Tcl_Obj **newobjv;
  int i;

  if (objc < 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "xml ?args ...?");
    return TCL_ERROR;
  }

  newobjv = (Tcl_Obj **) Tcl_Alloc((objc + 1) * sizeof(Tcl_Obj *));
  newobjv[0] = Tcl_NewStringObj("::dom::libxml2::parse", -1);
  for (i = 1; i < objc; i++) {
    newobjv[i] = objv[i];
  }
  newobjv[i] = NULL;

  return Tcl_EvalObjv(interp, objc, newobjv, 0);

  /*
  if (TclXML_CreateParser(interp, objc, objv) != TCL_OK) {
    return TCL_ERROR;
  }
  parserObj = Tcl_GetObjResult(interp);
  if (TclXML_Parse(interp, parserObj, objc, objv) != TCL_OK) {
    return TCL_ERROR;
  }

  if (TclXML_Get(interp, parserObj, "document") != TCL_OK) {
    return TCL_ERROR;
  }

  Tcl_SetObjResult(interp, objPtr);
  */

  return TCL_OK;
}
int
TclDOMAdoptCommand (dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  if (objc != 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "doc");
    return TCL_ERROR;
  }

  return AdoptDocument(interp, objv[1]);
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMSerializeCommand --
 *
 *  Implements dom::libxml2::serialize command
 *
 * Results:
 *  Depends on method.
 *
 * Side effects:
 *  Depends on method.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOMSerializeCommand (dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  xmlDocPtr docPtr;
  xmlNodePtr nodePtr;
  xmlBufferPtr bufptr = NULL;
  xmlSaveCtxtPtr savectxtptr = NULL;
  xmlChar *result = NULL;
  Tcl_Obj *encodingPtr = NULL;
  int option, method = TCLDOM_SERIALIZE_METHOD_XML, indent = 0, len = 0, omitXMLDeclaration = 0, saveoptions = 0;
  char *buf, *encoding;
  Tcl_Encoding tclencoding;
  Tcl_DString *serialized;

  if (objc < 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "node ?option value ...?");
    return TCL_ERROR;
  }

  if (TclXML_libxml2_GetDocFromObj(interp, objv[1], &docPtr) != TCL_OK) {
    if (TclDOM_libxml2_GetNodeFromObj(interp, objv[1], &nodePtr) == TCL_OK) {
      /* Serialize just the node */
      Tcl_SetResult(interp, "not yet implemented - serialize whole document", NULL);
      return TCL_ERROR;
    } else {
      Tcl_SetResult(interp, "not a libxml2 node", NULL);
      return TCL_ERROR;
    }
  }

  if (objc > 2) {
    objc -= 2;
    objv += 2;

    while (objc) {

      if (objc == 1) {
	Tcl_Obj *msgPtr;

	msgPtr = Tcl_NewStringObj("missing value for configuration option \"", -1);
	Tcl_AppendObjToObj(msgPtr, objv[0]);
	Tcl_AppendStringsToObj(msgPtr, "\"", (char *) NULL);
	Tcl_SetObjResult(interp, msgPtr);
	return TCL_ERROR;
      }

      if (Tcl_GetIndexFromObj(interp, objv[0], TclDOM_SerializeCommandOptions,
			    "option", 0, &option) != TCL_OK) {
	return TCL_ERROR;
      }

      switch ((enum TclDOM_SerializeCommandOptions) option) {
      case TCLDOM_SERIALIZE_METHOD:

	buf = Tcl_GetStringFromObj(objv[1], &len);
	if (len == 0) {
	  method = TCLDOM_SERIALIZE_METHOD_XML;
	} else if (Tcl_GetIndexFromObj(interp, objv[1], TclDOM_SerializeMethods,
				       "method", 0, &method) != TCL_OK) {
	  return TCL_ERROR;
	}

	break;

      case TCLDOM_SERIALIZE_INDENT:

	if (Tcl_GetBooleanFromObj(interp, objv[1], &indent) != TCL_OK) {
	  return TCL_ERROR;
	}

	break;

      case TCLDOM_SERIALIZE_OMIT_XML_DECLARATION:

	if (Tcl_GetBooleanFromObj(interp, objv[1], &omitXMLDeclaration) != TCL_OK) {
	  return TCL_ERROR;
	}

	break;

      case TCLDOM_SERIALIZE_ENCODING:
	encodingPtr = objv[1];

	break;

      default:
	Tcl_SetResult(interp, "unknown option", NULL);
	return TCL_ERROR;
      }

      objc -= 2;
      objv += 2;
    }
  }

  switch ((enum TclDOM_SerializeMethods) method) {

  case TCLDOM_SERIALIZE_METHOD_XML:

    serialized = (Tcl_DString *) Tcl_Alloc(sizeof(Tcl_DString));
    Tcl_DStringInit(serialized);

    if (encodingPtr) {
      encoding = Tcl_GetStringFromObj(encodingPtr, NULL);
    } else {
      encoding = "utf-8";
    }
    tclencoding = Tcl_GetEncoding(interp, encoding);

    Tcl_MutexLock(&libxml2);

    if ((bufptr = xmlBufferCreate()) == NULL) {
      Tcl_MutexUnlock(&libxml2);
      Tcl_Free((void *)serialized);
      Tcl_SetResult(interp, "unable to allocate output buffer", NULL);
      return TCL_ERROR;
    }

    if (indent) {
      saveoptions |= XML_SAVE_FORMAT;
    }
    if (omitXMLDeclaration) {
      saveoptions |= XML_SAVE_NO_DECL;
    }
    if ((savectxtptr = xmlSaveToBuffer(bufptr, encoding, saveoptions)) == NULL) {
      Tcl_MutexUnlock(&libxml2);
      Tcl_Free((void *)serialized);
      xmlBufferFree(bufptr);
      Tcl_SetResult(interp, "unable to create save context", NULL);
      return TCL_ERROR;
    }

    xmlSaveDoc(savectxtptr, docPtr);
    xmlSaveClose(savectxtptr);

    Tcl_MutexUnlock(&libxml2);

    Tcl_ExternalToUtfDString(tclencoding, (CONST char *) xmlBufferContent(bufptr), xmlBufferLength(bufptr), serialized);
    Tcl_DStringResult(interp, serialized);

    Tcl_MutexLock(&libxml2);
    xmlBufferFree(bufptr);
    Tcl_MutexUnlock(&libxml2);

    break;

  case TCLDOM_SERIALIZE_METHOD_HTML:

    Tcl_MutexLock(&libxml2);
    htmlSetMetaEncoding(docPtr, (const xmlChar *) "UTF-8");
    htmlDocDumpMemory(docPtr, &result, &len);
    Tcl_MutexUnlock(&libxml2);
    Tcl_SetObjResult(interp, Tcl_NewStringObj((CONST char *) result, len));
    xmlFree(result);

    break;

  case TCLDOM_SERIALIZE_METHOD_TEXT:

    nodePtr = docPtr->children;

    while (nodePtr != NULL) {
      if (nodePtr->type == XML_TEXT_NODE)
	Tcl_AppendResult(interp, (char *) nodePtr->content, NULL);

      if (nodePtr->children != NULL) {
	if ((nodePtr->children->type != XML_ENTITY_DECL) &&
	    (nodePtr->children->type != XML_ENTITY_REF_NODE) &&
	    (nodePtr->children->type != XML_ENTITY_NODE)) {
	  nodePtr = nodePtr->children;
	  continue;
	}
      }

      if (nodePtr->next != NULL) {
	nodePtr = nodePtr->next;
	continue;
      }

      do {
	nodePtr = nodePtr->parent;
	if (nodePtr == NULL)
	  break;
	if (nodePtr == (xmlNodePtr) docPtr) {
	  nodePtr = NULL;
	  break;
	}
	if (nodePtr->next != NULL) {
	  nodePtr = nodePtr->next;
	  break;
	}
      } while (nodePtr != NULL);
    }

    break;

  default:
    Tcl_SetResult(interp, "internal error", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMDOMImplementationCommand --
 *
 *  Implements dom::libxml2::DOMImplementation command
 *
 * Results:
 *  Depends on method.
 *
 * Side effects:
 *  Depends on method.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOMDOMImplementationCommand (dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  int method;

  if (objc < 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "method ?args...?");
    return TCL_ERROR;
  }

  if (Tcl_GetIndexFromObj(interp, objv[1], TclDOM_DOMImplementationCommandMethods,
			  "method", 0, &method) != TCL_OK) {
    return TCL_ERROR;
  }

  switch ((enum TclDOM_DOMImplementationCommandMethods) method) {
  case TCLDOM_IMPL_HASFEATURE:
    return TclDOM_HasFeatureCommand(dummy, interp, objc - 1, objv + 1);
  case TCLDOM_IMPL_CREATE:
    if (objc == 2) {
      return TclDOMCreateCommand(dummy, interp, 1, objv);
    } else if (objc == 3) {
      Tcl_Obj *objPtr;
      xmlDocPtr docPtr;
      xmlNodePtr nodePtr;

      if (TclDOMCreateCommand(dummy, interp, 0, NULL) != TCL_OK) {
	return TCL_ERROR;
      }
      objPtr = Tcl_GetObjResult(interp);
      TclXML_libxml2_GetDocFromObj(interp, objPtr, &docPtr);
      Tcl_MutexLock(&libxml2);
      nodePtr = xmlNewDocNode(docPtr, NULL, (const xmlChar *) Tcl_GetStringFromObj(objv[2], NULL), NULL);
      Tcl_MutexUnlock(&libxml2);
      if (nodePtr == NULL) {
	Tcl_SetResult(interp, "unable to create document element", NULL);
	return TCL_ERROR;
      }

      Tcl_SetObjResult(interp, objPtr);
    } else {
      Tcl_WrongNumArgs(interp, 1, objv, "create ?doc?");
      return TCL_ERROR;
    }

    break;

  case TCLDOM_IMPL_PARSE:
    return TclDOMParseCommand(dummy, interp, objc - 1, objv + 1);

  case TCLDOM_IMPL_SERIALIZE:
    return TclDOMSerializeCommand(dummy, interp, objc - 1, objv + 1);

  case TCLDOM_IMPL_SELECTNODE:
    return TclDOMSelectNodeCommand(dummy, interp, objc - 1, objv + 1);

  case TCLDOM_IMPL_DESTROY:
    return TclDOMDestroyCommand(dummy, interp, objc - 1, objv + 1);

  case TCLDOM_IMPL_ISNODE:
    return TclDOMIsNodeCommand(dummy, interp, objc - 1, objv + 1);

  default:
    Tcl_SetResult(interp, "method \"", NULL);
    Tcl_AppendResult(interp, Tcl_GetStringFromObj(objv[1], NULL));
    Tcl_AppendResult(interp, "\" not yet implemented", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * [Schema|RNG][Compile|Validate] --
 *
 *  Implements DTD, XML Schema and RelaxNG parsing and validation
 *
 * Results:
 *  Depends on method.
 *
 * Side effects:
 *  May create or destroy validation contexts.
 *
 *----------------------------------------------------------------------------
 */

int
DTDValidate (interp, domDocPtr)
     Tcl_Interp *interp;
     TclDOM_libxml2_Document *domDocPtr;
{
  xmlValidCtxtPtr ctxt;

  TclXML_libxml2_ResetError(interp);
  
  Tcl_MutexLock(&libxml2);

  ctxt = xmlNewValidCtxt();
  if (ctxt == NULL) {
    Tcl_MutexUnlock(&libxml2);

    Tcl_SetResult(interp, "unable to prepare validation context", NULL);
    return TCL_ERROR;
  }

  Tcl_SetResult(interp, "document is not valid", NULL);

  if (xmlValidateDocument(ctxt, domDocPtr->tDocPtr->docPtr) == 0) {
    Tcl_Obj *errObjPtr;

    Tcl_MutexUnlock(&libxml2);

    errObjPtr = TclXML_libxml2_GetErrorObj(interp);

    if (errObjPtr) {
      Tcl_IncrRefCount(errObjPtr);
      Tcl_SetObjResult(interp, errObjPtr);
    }
    return TCL_ERROR;
  }

  Tcl_MutexUnlock(&libxml2);

  Tcl_ResetResult(interp);

  return TCL_OK;
}

int
SchemaCompile (interp, domDocPtr)
     Tcl_Interp *interp;
     TclDOM_libxml2_Document *domDocPtr;
{
  xmlDocPtr schemaDocPtr;
  xmlSchemaParserCtxtPtr ctxt = NULL;

  if (domDocPtr->schema) {
    /* Re-compile */
    Tcl_MutexLock(&libxml2);
    xmlSchemaFree(domDocPtr->schema);
    Tcl_MutexUnlock(&libxml2);
    domDocPtr->schema = NULL;
  }

  Tcl_MutexLock(&libxml2);

  schemaDocPtr = xmlCopyDoc(domDocPtr->tDocPtr->docPtr, 1);

  if (schemaDocPtr == NULL) {
    Tcl_MutexUnlock(&libxml2);
    Tcl_SetResult(interp, "unable to prepare schema document", NULL);
    return TCL_ERROR;
  }

  ctxt = xmlSchemaNewDocParserCtxt(schemaDocPtr);
  if (ctxt == NULL) {
    xmlFreeDoc(schemaDocPtr);
    Tcl_MutexUnlock(&libxml2);
    Tcl_SetResult(interp, "unable to create schema context", NULL);
    return TCL_ERROR;
  }

  TclXML_libxml2_ResetError(interp);

  Tcl_SetResult(interp, "unable to parse schema document", NULL);
  domDocPtr->schema = xmlSchemaParse(ctxt);
#if 0
  xmlSchemaFreeParserCtxt(ctxt); /* This frees the doc */
#endif
  Tcl_MutexUnlock(&libxml2);
  
  if (domDocPtr->schema == NULL) {
	Tcl_Obj * errObjPtr = TclXML_libxml2_GetErrorObj(interp);

    if (errObjPtr) {
      Tcl_SetObjResult(interp, errObjPtr);
    }

    return TCL_ERROR;
  }

  Tcl_ResetResult(interp);

  return TCL_OK;
}

int
SchemaValidate (interp, domDocPtr, instancePtr)
     Tcl_Interp *interp;
     TclDOM_libxml2_Document *domDocPtr;
     xmlDocPtr instancePtr;
{
  xmlSchemaValidCtxtPtr ctxt = NULL;
  Tcl_Obj *errObjPtr;
  int ret;

  if (domDocPtr->schema == NULL) {
    Tcl_SetResult(interp, "schema not compiled", NULL);
    return TCL_ERROR;
  }

  TclXML_libxml2_ResetError(interp);

  Tcl_MutexLock(&libxml2);

  ctxt = xmlSchemaNewValidCtxt(domDocPtr->schema);

  Tcl_SetResult(interp, "document is not valid", NULL);

  ret = xmlSchemaValidateDoc(ctxt, instancePtr);
  errObjPtr = TclXML_libxml2_GetErrorObj(interp);
  if (ret > 0) {
    if (errObjPtr) {
      Tcl_SetObjResult(interp, errObjPtr);
    }
    goto error;
  } else if (ret < 0) {
    Tcl_SetResult(interp, "schema processor internal error", NULL);

    if (errObjPtr) {
      Tcl_SetObjResult(interp, errObjPtr);
    }
    goto error;
  }

  xmlSchemaFreeValidCtxt(ctxt);

  Tcl_MutexUnlock(&libxml2);

  /* There may be warnings */

  if (errObjPtr) {
    Tcl_SetObjResult(interp, errObjPtr);
  } else {
    Tcl_ResetResult(interp);
  }

  return TCL_OK;

 error:
  if (ctxt) {
    xmlSchemaFreeValidCtxt(ctxt);
  }

  Tcl_MutexUnlock(&libxml2);

  return TCL_ERROR;
}
/*
 * TODO: RelaxNG validation.
 */

int
TclDOMTrimCommand (dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  xmlDocPtr docPtr;

  if (objc != 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "doc");
  }

  if (TclXML_libxml2_GetDocFromObj(interp, objv[1], &docPtr) != TCL_OK) {
    return TCL_ERROR;
  }

  TrimDocument(interp, docPtr);

  return TCL_OK;
}

/*
 *	Remove all blank text nodes
 *
 * NB. This code mostly copied from xmlschemas.c
 */

/** Copied directly from xmlschemas.c:
 *
 * xmlSchemaIsBlank:
 * @str:  a string
 *
 * Check if a string is ignorable
 *
 * Returns 1 if the string is NULL or made of blanks chars, 0 otherwise
 */
/* SRB: 2008-11-24: Updated against libxml2 2.7.2.
 */
#define IS_BLANK_NODE(n)                                                \
  (((n)->type == XML_TEXT_NODE) && (xmlSchemaIsBlank((n)->content, -1)))

/*
 * SRB: 2008-06-12: Updated against libxml2 2.6.32.
 * See also SF bug 1943963.
 */

static int
xmlSchemaIsBlank(xmlChar *str, int len) {
    if (str == NULL)
        return(1);
    if (len < 0) {
      while (*str != 0) {
        if (!(IS_BLANK_CH(*str))) return(0);
        str++;
      }
    } else {
      while ((*str != 0) && (len != 0)) {
	if (!(IS_BLANK_CH(*str))) return (0);
	str++;
	len--;
      }
    }
    return(1);
}

static void
TrimDocument(interp, docPtr)
     Tcl_Interp *interp;
     xmlDocPtr docPtr;
{
  xmlNodePtr root, cur, delete;
  Tcl_Obj *nodeObjPtr;
  TclDOM_libxml2_Node *tNodePtr = NULL;

  delete = NULL;
  root = xmlDocGetRootElement(docPtr);
  if (root == NULL) {
    return;
  }
  cur = root;

  while (cur != NULL) {
    if (delete != NULL) {
      nodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, delete);
      TclDOM_libxml2_GetTclNodeFromObj(interp, nodeObjPtr, &tNodePtr);
      TclDOM_libxml2_InvalidateNode(tNodePtr);
      Tcl_DecrRefCount(nodeObjPtr);
      xmlUnlinkNode(delete);
      xmlFreeNode(delete);
      delete = NULL;
    }
    if (cur->type == XML_TEXT_NODE) {
      if (IS_BLANK_NODE(cur)) {
	if (xmlNodeGetSpacePreserve(cur) != 1) {
	  delete = cur;
	}
      }
    } else if ((cur->type != XML_ELEMENT_NODE) &&
	       (cur->type != XML_CDATA_SECTION_NODE)) {
      delete = cur;
      goto skip_children;
    }

    /*
     * Skip to next node
     */
    if (cur->children != NULL) {
      if ((cur->children->type != XML_ENTITY_DECL) &&
	  (cur->children->type != XML_ENTITY_REF_NODE) &&
	  (cur->children->type != XML_ENTITY_NODE)) {
	cur = cur->children;
	continue;
      }
    }
  skip_children:
    if (cur->next != NULL) {
      cur = cur->next;
      continue;
    }

    do {
      cur = cur->parent;
      if (cur == NULL)
	break;
      if (cur == root) {
	cur = NULL;
	break;
      }
      if (cur->next != NULL) {
	cur = cur->next;
	break;
      }
    } while (cur != NULL);
  }
  if (delete != NULL) {
    nodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, delete);
    TclDOM_libxml2_GetTclNodeFromObj(interp, nodeObjPtr, &tNodePtr);
    TclDOM_libxml2_InvalidateNode(tNodePtr);
    Tcl_DecrRefCount(nodeObjPtr);
    xmlUnlinkNode(delete);
    xmlFreeNode(delete);
    delete = NULL;
  }

  return;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMXIncludeCommand --
 *
 *  Implements dom::libxml2::xinclude command.
 *
 * Results:
 *  Performs XInclude processing on a document.
 *
 * Side effects:
 *  The supplied DOM tree may be modified.
 *
 *----------------------------------------------------------------------------
 */
int
TclDOMXIncludeCommand (dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  xmlDocPtr docPtr;
  int subs;

  if (objc != 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "doc");
    return TCL_ERROR;
  }

  if (TclXML_libxml2_GetDocFromObj(interp, objv[1], &docPtr) != TCL_OK) {
    return TCL_ERROR;
  }

  Tcl_MutexLock(&libxml2);
  subs = xmlXIncludeProcess(docPtr);
  Tcl_MutexUnlock(&libxml2);

  if (subs < 0) {
    Tcl_SetResult(interp, "unable to complete XInclude processing", NULL);
    return TCL_ERROR;
  }

  Tcl_SetObjResult(interp, Tcl_NewIntObj(subs));
  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMPrefix2NSCommand --
 *
 *  Implements dom::libxml2::prefix2namespaceURI command.
 *
 * Results:
 *  Returns namespace URI for a given prefix.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */
int
TclDOMPrefix2NSCommand (dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  xmlNodePtr nodePtr;
  xmlNsPtr nsPtr;

  if (objc != 3) {
    Tcl_WrongNumArgs(interp, 1, objv, "node prefix");
    return TCL_ERROR;
  }

  if (TclDOM_libxml2_GetNodeFromObj(interp, objv[1], &nodePtr) != TCL_OK) {
    return TCL_ERROR;
  }

  nsPtr = xmlSearchNs(nodePtr->doc, nodePtr, (const xmlChar *) Tcl_GetStringFromObj(objv[2], NULL));

  if (!nsPtr) {
    Tcl_SetResult(interp, "no XML Namespace declaration", NULL);
    return TCL_ERROR;
  }

  Tcl_SetObjResult(interp, Tcl_NewStringObj((CONST char *) nsPtr->href, -1));
  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMIsNodeCommand --
 *
 *  Implements dom::libxml2::isNode command.
 *
 * Results:
 *  Returns boolean.
 *
 * Side effects:
 *  Tcl object may be converted to internal rep.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOMIsNodeCommand (dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  xmlDocPtr docPtr;
  xmlNodePtr nodePtr;
  TclDOM_libxml2_Node *tNodePtr;

  if (objc != 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "token");
    return TCL_ERROR;
  }

  if (TclDOM_libxml2_GetNodeFromObj(interp, objv[1], &nodePtr) != TCL_OK) {
    if (TclXML_libxml2_GetDocFromObj(interp, objv[1], &docPtr) != TCL_OK) {
	  if (TclDOM_libxml2_GetTclEventFromObj(interp, objv[1], &tNodePtr) != TCL_OK) {
        Tcl_SetObjResult(interp, Tcl_NewBooleanObj(0));
	  } else {
		Tcl_SetObjResult(interp, Tcl_NewBooleanObj(1));
	  }
    } else {
      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(1));
    }
  } else {
    Tcl_SetObjResult(interp, Tcl_NewBooleanObj(1));
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMSelectNodeCommand --
 *
 *  Implements dom::libxml2::selectnode command.
 *
 * Results:
 *  Returns result of XPath expression evaluation.
 *
 * Side effects:
 *  Memory is allocated for Tcl object to return result.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOMSelectNodeCommand (dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  int i, len, option;
  char *path;
  Tcl_Obj *objPtr, *nsOptPtr = NULL, *nodeObjPtr;
  xmlDocPtr docPtr;
  xmlNodePtr nodePtr = NULL;
  xmlXPathContextPtr ctxt = NULL;
  xmlXPathObjectPtr xpathObj = NULL;

  if (objc < 3) {
    Tcl_WrongNumArgs(interp, 1, objv, "doc location-path ?option value...?");
    return TCL_ERROR;
  }

  path = Tcl_GetStringFromObj(objv[2], &len);
  if (len == 0) {
    return TCL_OK;
  }

  if (TclXML_libxml2_GetDocFromObj(interp, objv[1], &docPtr) != TCL_OK) {
    if (TclDOM_libxml2_GetNodeFromObj(interp, objv[1], &nodePtr) == TCL_OK) {
      docPtr = nodePtr->doc;
    } else {
      return TCL_ERROR;
    }
  }

  for (i = 3; i < objc; i += 2) {
    if (i == objc - 1) {
      Tcl_AppendResult(interp, "missing value for option \"", Tcl_GetStringFromObj(objv[i], NULL), "\"", NULL);
      return TCL_ERROR;
    }
    if (Tcl_GetIndexFromObj(interp, objv[i], TclDOM_SelectNodeOptions,
			  "option", 0, &option) != TCL_OK) {
      goto opt_error;
    }
    switch ((enum TclDOM_SelectNodeOptions) option) {

    case TCLDOM_SELECTNODE_OPTION_NAMESPACES:
      if (nsOptPtr) {
        if (Tcl_ListObjAppendList(interp, nsOptPtr, objv[i + 1]) != TCL_OK) {
          Tcl_SetResult(interp, "-namespaces option value must be a list", NULL);
          goto opt_error;
        }
      } else {
        nsOptPtr = Tcl_DuplicateObj(objv[i + 1]);
      }
      if (Tcl_ListObjLength(interp, nsOptPtr, &len) != TCL_OK) {
        Tcl_SetResult(interp, "-namespaces option value must be a list", NULL);
        goto opt_error;
      } else if (len % 2 != 0) {
        Tcl_SetResult(interp, "value missing from namespaces list", NULL);
        goto opt_error;
      }

      break;

    default:
      Tcl_AppendResult(interp, "unknown option \"", Tcl_GetStringFromObj(objv[i], NULL), "\"", NULL);
      goto opt_error;
    }
  }

  Tcl_MutexLock(&libxml2);
  ctxt = xmlXPathNewContext(docPtr);
  if (ctxt == NULL) {
    Tcl_SetResult(interp, "unable to create XPath context", NULL);
    return TCL_ERROR;
  }

  if (nodePtr) {
    ctxt->node = nodePtr;
  }

  TclXML_libxml2_ResetError(interp);

  /*
   * Setup any XML Namespace prefixes given as arguments
   */
  if (nsOptPtr) {
    Tcl_ListObjLength(interp, nsOptPtr, &len);
    for (i = 0; i < len; i += 2) {
      Tcl_Obj *prefixPtr, *nsURIPtr;

      Tcl_ListObjIndex(interp, nsOptPtr, i, &prefixPtr);
      Tcl_ListObjIndex(interp, nsOptPtr, i + 1, &nsURIPtr);
      if (xmlXPathRegisterNs(ctxt,
			     (const xmlChar *) Tcl_GetStringFromObj(prefixPtr, NULL),
			     (const xmlChar *) Tcl_GetStringFromObj(nsURIPtr, NULL))) {
        Tcl_ResetResult(interp);
        Tcl_AppendResult(interp, "unable to register XML Namespace \"", Tcl_GetStringFromObj(nsURIPtr, NULL), "\"", NULL);
        goto error;
      }
    }
  }

  xpathObj = xmlXPathEval((const xmlChar *) path, ctxt);

  if (xpathObj == NULL) {
    Tcl_Obj *errObjPtr = TclXML_libxml2_GetErrorObj(interp);

    if (errObjPtr) {
      Tcl_SetObjResult(interp, errObjPtr);
      goto error;
    } else {
      Tcl_SetResult(interp, "error evaluating XPath location path", NULL);
      goto error;
    }
  }

  objPtr = Tcl_NewObj();
  switch (xpathObj->type) {

  case XPATH_NODESET:
    len = xmlXPathNodeSetGetLength(xpathObj->nodesetval);
    for (i = 0; i < len; i++) {
      nodePtr = xmlXPathNodeSetItem(xpathObj->nodesetval, i);
      nodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, nodePtr);
      if (nodeObjPtr != NULL) {
	Tcl_ListObjAppendElement(interp, objPtr, nodeObjPtr);
      } else {
	Tcl_MutexUnlock(&libxml2);
	Tcl_DecrRefCount(objPtr);
	return TCL_ERROR;
      }
    }
    break;

  case XPATH_BOOLEAN:
    Tcl_SetBooleanObj(objPtr, xpathObj->boolval);
    break;

  case XPATH_NUMBER:
    Tcl_SetDoubleObj(objPtr, xpathObj->floatval);
    break;

  case XPATH_STRING:
    Tcl_SetStringObj(objPtr,
		     (CONST char *) xpathObj->stringval,
		     strlen((char *) xpathObj->stringval));
    break;

  default:
    Tcl_SetResult(interp, "bad XPath object type", NULL);
    goto error2;
  }

  if (nsOptPtr) {
    Tcl_DecrRefCount(nsOptPtr);
  }
  xmlXPathFreeObject(xpathObj);
  xmlXPathFreeContext(ctxt);

  Tcl_MutexUnlock(&libxml2);

  Tcl_SetObjResult(interp, objPtr);
  return TCL_OK;

 opt_error:

  Tcl_MutexUnlock(&libxml2);

  if (nsOptPtr) {
    Tcl_DecrRefCount(nsOptPtr);
    return TCL_ERROR;
  }

 error2:
  if (nsOptPtr) {
    Tcl_DecrRefCount(nsOptPtr);
  }
  xmlXPathFreeObject(xpathObj);
  xmlXPathFreeContext(ctxt);

  Tcl_MutexUnlock(&libxml2);

  return TCL_ERROR;

 error:
  if (nsOptPtr) {
    Tcl_DecrRefCount(nsOptPtr);
  }
  xmlXPathFreeContext(ctxt);

  Tcl_MutexUnlock(&libxml2);

  return TCL_ERROR;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMDocumentCommand --
 *
 *  Implements dom::libxml2::document command.
 *
 * Results:
 *  Depends on method.
 *
 * Side effects:
 *  Depends on method.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOMDocumentCommand (clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  TclXML_libxml2_Document *tDocPtr;
  TclDOM_libxml2_Document *domDocPtr = NULL;
  enum TclDOM_EventTypes type;
  int method, optobjc, wrongidx = 1, postMutationEvent = 0, idx, len;
  xmlDocPtr docPtr = NULL;
  xmlNodePtr nodePtr = NULL, newNodePtr = NULL;
  xmlNsPtr nsPtr = NULL;
  Tcl_Obj *nodeObjPtr = NULL, *newNodeObjPtr = NULL;
  Tcl_Obj *CONST *optobjv;
  char *buf, *bufptr, *prefix;

  if (clientData == NULL) {
    if (objc < 3) {
      Tcl_WrongNumArgs(interp, 2, objv, "method token ?args...?");
      return TCL_ERROR;
    }

    if (TclXML_libxml2_GetTclDocFromObj(interp, objv[2], &tDocPtr) != TCL_OK) {
      tDocPtr = NULL;
      docPtr = NULL;
      if (TclDOM_libxml2_GetNodeFromObj(interp, objv[2], &nodePtr) != TCL_OK) {
	return TCL_ERROR;
      } else {
	nodeObjPtr = objv[2];
	if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
	  return TCL_ERROR;
	}
      }
    } else {
      docPtr = tDocPtr->docPtr;
      domDocPtr = GetDOMDocument(interp, tDocPtr);
      if (domDocPtr == NULL) {
	Tcl_SetResult(interp, "internal error", NULL);
	return TCL_ERROR;
      }
    }

    optobjv = objv + 3;
    optobjc = objc - 3;
    wrongidx = 3;

  } else {
    if (objc < 2) {
      Tcl_WrongNumArgs(interp, 1, objv, "method ?args...?");
      return TCL_ERROR;
    }

    domDocPtr = (TclDOM_libxml2_Document *) clientData;
    tDocPtr = domDocPtr->tDocPtr;
    docPtr = tDocPtr->docPtr;

    optobjv = objv + 2;
    optobjc = objc - 2;
    wrongidx = 2;
  }

  if (Tcl_GetIndexFromObj(interp, objv[1], TclDOM_DocumentCommandMethods,
			  "method", 0, &method) != TCL_OK) {
    return TCL_ERROR;
  }

  Tcl_ResetResult(interp);

  switch ((enum TclDOM_DocumentCommandMethods) method) {

  case TCLDOM_DOCUMENT_CGET:

    if (optobjc != 1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "option");
      return TCL_ERROR;
    }

    if (!docPtr) {
      Tcl_SetResult(interp, "not a document", NULL);
      return TCL_ERROR;
    }

    return DocumentCget(interp, docPtr, optobjv[0]);

    break;

  case TCLDOM_DOCUMENT_CONFIGURE:

    if (!docPtr) {
      Tcl_SetResult(interp, "not a document", NULL);
      return TCL_ERROR;
    }

    if (optobjc == 1) {
      return DocumentCget(interp, docPtr, optobjv[0]);
    } else {
      Tcl_AppendResult(interp, "attribute \"", Tcl_GetStringFromObj(optobjv[0], NULL), "\" is read-only", NULL);
      return TCL_ERROR;
    }

    break;

  case TCLDOM_DOCUMENT_CREATEELEMENTNS:
    if (optobjc != 2) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "nsuri qualname");
      return TCL_ERROR;
    }

    /*
     * libxml2 doesn't check for invalid element name,
     * so must do that here.
     */
    if (Tcl_RegExpMatchObj(interp, optobjv[1], checkQName) == 0) {
      Tcl_SetResult(interp, "invalid element name", NULL);
      return TCL_ERROR;
    }

    /* Find localName of element */
    buf = Tcl_GetStringFromObj(optobjv[1], &len);
    for (idx = 0; buf[idx] != ':' && idx < len; idx++) ;
    if (idx == len) {
      /* no prefix was given */
      bufptr = buf;
    } else {
      /* NB. name must have a local part, since it is a valid QName */
      bufptr = &buf[idx + 1];
    }

    if (docPtr && clientData == NULL) {
      /* We're creating the document element, so must create the namespace too */
      xmlNodePtr old;

      Tcl_MutexLock(&libxml2);
      newNodePtr = xmlNewDocNode(docPtr, NULL, (const xmlChar *) bufptr, NULL);
      if (newNodePtr == NULL) {
        Tcl_SetResult(interp, "unable to create element node", NULL);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      }
      old = xmlDocSetRootElement(docPtr, newNodePtr);
      if (old) {
	xmlDocSetRootElement(docPtr, old);
	xmlFreeNode(newNodePtr);
	Tcl_SetResult(interp, "document element already exists", NULL);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      }

      if (idx < len) {
	prefix = Tcl_Alloc(bufptr - buf);
	strncpy(prefix, buf, bufptr - buf - 1);
	prefix[bufptr - buf - 1] = '\0';
      } else {
	/* synthesize prefix for this XML Namespace */
	prefix = Tcl_Alloc(20);
	sprintf(prefix, "ns%d", domDocPtr->nodeCntr++);
      }

      nsPtr = xmlNewNs(newNodePtr, (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL), (const xmlChar *) prefix);
      if (nsPtr == NULL) {
	Tcl_SetResult(interp, "unable to create XML Namespace", NULL);
	Tcl_Free(prefix);
	xmlUnlinkNode(newNodePtr);
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      }

      xmlSetNs(newNodePtr, nsPtr);

      Tcl_MutexUnlock(&libxml2);

      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	Tcl_MutexLock(&libxml2);
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);

	return TCL_ERROR;
      }

      postMutationEvent = 1;

    } else if (docPtr && clientData != NULL) {
      /* Create an unattached element node */
      Tcl_MutexLock(&libxml2);
      newNodePtr = xmlNewDocNode(docPtr, NULL, (const xmlChar *) bufptr, NULL);

      if (idx < len) {
	prefix = Tcl_Alloc(bufptr - buf);
	strncpy(prefix, buf, bufptr - buf - 1);
	prefix[bufptr - buf - 1] = '\0';
      } else {
	/* synthesize prefix for this XML Namespace */
	prefix = Tcl_Alloc(20);
	sprintf(prefix, "ns%d", domDocPtr->nodeCntr);
      }

      nsPtr = xmlNewNs(newNodePtr, (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL), (const xmlChar *) prefix);
      if (nsPtr == NULL) {
	Tcl_SetResult(interp, "unable to create XML Namespace", NULL);
	Tcl_Free(prefix);
	xmlUnlinkNode(newNodePtr);
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      }

      xmlSetNs(newNodePtr, nsPtr);

      Tcl_MutexUnlock(&libxml2);

      if (newNodePtr == NULL) {
        Tcl_SetResult(interp, "unable to create element node", NULL);
        return TCL_ERROR;
      }

      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	Tcl_MutexLock(&libxml2);
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      } else {
	Tcl_SetObjResult(interp, newNodeObjPtr);
      }

      /*
       * The tree hasn't changed yet, so no events need to be fired.
       */
      postMutationEvent = 0;

    } else {

      Tcl_MutexLock(&libxml2);
      /* Find XML Namespace */
      nsPtr = xmlSearchNsByHref(nodePtr->doc,
				nodePtr,
				(const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL));
      if (nsPtr == NULL) {
	if (idx < len) {
	  prefix = Tcl_Alloc(bufptr - buf);
	  strncpy(prefix, buf, bufptr - buf - 1);
	  prefix[bufptr - buf - 1] = '\0';
	} else {
	  prefix = Tcl_Alloc(20);
	  sprintf(prefix, "ns%d", domDocPtr->nodeCntr++);
	}

	newNodePtr = xmlNewChild(nodePtr, NULL, (const xmlChar *) bufptr, NULL);
	nsPtr = xmlNewNs(newNodePtr,
			 (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL),
			 (const xmlChar *) prefix);
	if (nsPtr == NULL) {
	  Tcl_SetResult(interp, "unable to create XML Namespace", NULL);
	  Tcl_MutexUnlock(&libxml2);
	  return TCL_ERROR;
	}
	xmlSetNs(newNodePtr, nsPtr);

      } else {
	newNodePtr = xmlNewChild(nodePtr, nsPtr, (const xmlChar *) bufptr, NULL);
	if (newNodePtr == NULL) {
	  Tcl_SetResult(interp, "unable to create element node", NULL);
	  Tcl_MutexUnlock(&libxml2);
	  return TCL_ERROR;
	}
      }

      Tcl_MutexUnlock(&libxml2);

      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	Tcl_MutexLock(&libxml2);
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      }

      postMutationEvent = 1;
    }

    break;

  case TCLDOM_DOCUMENT_CREATEELEMENT:

    if (optobjc != 1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "name");
      return TCL_ERROR;
    }

    /*
     * libxml2 doesn't check for invalid element name,
     * so must do that here.
     */
    if (Tcl_RegExpMatchObj(interp, optobjv[0], checkName) == 0) {
      Tcl_AppendResult(interp, "invalid element name \"", Tcl_GetStringFromObj(optobjv[0], NULL), "\"", NULL);
      return TCL_ERROR;
    }

    Tcl_MutexLock(&libxml2);

    if (docPtr && clientData == NULL) {
      xmlNodePtr old;
      newNodePtr = xmlNewDocNode(docPtr,
				 NULL,
				 (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL),
				 NULL);
      if (newNodePtr == NULL) {
        Tcl_SetResult(interp, "unable to create element node", NULL);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      }
      old = xmlDocSetRootElement(docPtr, newNodePtr);
      if (old) {
	xmlDocSetRootElement(docPtr, old);
	xmlFreeNode(newNodePtr);
	Tcl_SetResult(interp, "document element already exists", NULL);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      }

      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      }

      postMutationEvent = 1;
    } else if (docPtr && clientData != NULL) {
      /* Create an unattached element node */
      newNodePtr = xmlNewDocNode(docPtr,
				 NULL,
				 (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL),
				 NULL);
      if (newNodePtr == NULL) {
        Tcl_SetResult(interp, "unable to create element node", NULL);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      }

      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      } else {
	Tcl_SetObjResult(interp, newNodeObjPtr);
      }

      /*
       * The tree hasn't changed yet, so no events need to be fired.
       */
      postMutationEvent = 0;
    } else {
      newNodePtr = xmlNewChild(nodePtr,
			       NULL,
			       (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL),
			       NULL);
      if (newNodePtr == NULL) {
        Tcl_SetResult(interp, "unable to create element node", NULL);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      }
      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      }
      postMutationEvent = 1;
    }

    Tcl_MutexUnlock(&libxml2);

    break;

  case TCLDOM_DOCUMENT_CREATEDOCUMENTFRAGMENT:

    if (optobjc != 0) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "");
      return TCL_ERROR;
    }

    Tcl_MutexLock(&libxml2);

    if (docPtr) {
      newNodePtr = xmlNewDocFragment(docPtr);
    } else {
      newNodePtr = xmlNewDocFragment(nodePtr->doc);
    }
    if (newNodePtr == NULL) {
      Tcl_SetResult(interp, "unable to create document fragment", NULL);
      Tcl_MutexUnlock(&libxml2);
      return TCL_ERROR;
    }

    newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
    if (newNodeObjPtr == NULL) {
      xmlFreeNode(newNodePtr);
      Tcl_MutexUnlock(&libxml2);
      return TCL_ERROR;
    } else {
      Tcl_SetObjResult(interp, newNodeObjPtr);
    }

    Tcl_MutexUnlock(&libxml2);

    /* The node hasn't been inserted into the tree yet */
    postMutationEvent = 0;

    break;

  case TCLDOM_DOCUMENT_CREATETEXTNODE:

    if (optobjc != 1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "text");
      return TCL_ERROR;
    }

    Tcl_MutexLock(&libxml2);

    if (docPtr) {
      char *content;
      int len;

      content = Tcl_GetStringFromObj(optobjv[0], &len);
      newNodePtr = xmlNewDocTextLen(docPtr, (const xmlChar *) content, len);
      if (newNodePtr == NULL) {
        Tcl_SetResult(interp, "unable to create text node", NULL);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      }

      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      } else {
	Tcl_SetObjResult(interp, newNodeObjPtr);
      }

      Tcl_MutexUnlock(&libxml2);

      postMutationEvent = 0;

    } else {
      xmlNodePtr returnNode;
      char *content;
      int len;

      content = Tcl_GetStringFromObj(optobjv[0], &len);
      newNodePtr = xmlNewTextLen((const xmlChar *) content, len);
      if (newNodePtr == NULL) {
	Tcl_SetResult(interp, "creating text node failed", NULL);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      }
      returnNode = xmlAddChild(nodePtr, newNodePtr);
      if (returnNode == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_SetResult(interp, "add child failed", NULL);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      }

      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      }

      Tcl_MutexUnlock(&libxml2);

      postMutationEvent = 1;
    }

    break;

  case TCLDOM_DOCUMENT_CREATECOMMENT:

    if (optobjc != 1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "data");
      return TCL_ERROR;
    }

    Tcl_MutexLock(&libxml2);

    if (docPtr) {
      newNodePtr = xmlNewDocComment(docPtr, (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL));
      if (newNodePtr == NULL) {
        Tcl_SetResult(interp, "unable to create comment node", NULL);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      }
      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      } else {
	Tcl_SetObjResult(interp, newNodeObjPtr);
      }

      postMutationEvent = 0;

    } else {
      newNodePtr = xmlNewDocComment(nodePtr->doc, (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL));
      if (newNodePtr == NULL) {
        Tcl_SetResult(interp, "unable to create comment node", NULL);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      }
      xmlAddChild(nodePtr, newNodePtr);

      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      }

      postMutationEvent = 1;
    }

    Tcl_MutexUnlock(&libxml2);

    break;

  case TCLDOM_DOCUMENT_CREATECDATASECTION:

    if (optobjc != 1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "text");
      return TCL_ERROR;
    }

    Tcl_MutexLock(&libxml2);

    if (docPtr) {
      char *content;
      int len;

      content = Tcl_GetStringFromObj(optobjv[0], &len);
      newNodePtr = xmlNewDocTextLen(docPtr, (const xmlChar *) content, len);
      if (newNodePtr == NULL) {
        Tcl_SetResult(interp, "unable to create text node", NULL);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      }
      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      } else {
	Tcl_SetObjResult(interp, newNodeObjPtr);
      }

      postMutationEvent = 0;

    } else {
      char *content;
      int len;

      content = Tcl_GetStringFromObj(optobjv[0], &len);
      newNodePtr = xmlNewTextLen((const xmlChar *) content, len);
      if (newNodePtr == NULL) {
        Tcl_SetResult(interp, "unable to create text node", NULL);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      }
      xmlAddChild(nodePtr, newNodePtr);

      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      }

      postMutationEvent = 1;
    }

    Tcl_MutexUnlock(&libxml2);

    break;

  case TCLDOM_DOCUMENT_CREATEPI:
    if (optobjc != 2) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "target data");
      return TCL_ERROR;
    }

    Tcl_MutexLock(&libxml2);

    newNodePtr = xmlNewPI((const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL),
			  (const xmlChar *) Tcl_GetStringFromObj(optobjv[1], NULL));
    if (newNodePtr == NULL) {
      Tcl_SetResult(interp, "unable to create processing instruction node", NULL);
      Tcl_MutexUnlock(&libxml2);
      return TCL_ERROR;
    }

    if (docPtr) {
      /*
       * libxml2 does not provide 'xmlNewDocPI' so the PI must be added to the tree
       * before we wrap it in an object.  We'll use the document element as a placeholder
       * for the PI node; the user may move it from there.
       */
      xmlNodePtr docElPtr = xmlDocGetRootElement(docPtr);

      if (docElPtr == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	Tcl_SetResult(interp, "document element must exist before adding a PI", NULL);
	return TCL_ERROR;
      }
      xmlAddNextSibling(docElPtr, newNodePtr);

      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      } else {
	Tcl_SetObjResult(interp, newNodeObjPtr);
      }

      postMutationEvent = 0;

    } else {
      xmlAddChild(nodePtr, newNodePtr);

      newNodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, newNodePtr);
      if (newNodeObjPtr == NULL) {
	xmlFreeNode(newNodePtr);
	Tcl_MutexUnlock(&libxml2);
	return TCL_ERROR;
      }

      postMutationEvent = 1;
    }

    Tcl_MutexUnlock(&libxml2);

    break;

  case TCLDOM_DOCUMENT_CREATEEVENT:

    if (optobjc != 1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "type");
      return TCL_ERROR;
    }

    if (!docPtr) {
      docPtr = nodePtr->doc;
    }

    if (Tcl_GetIndexFromObj(interp, optobjv[0], TclDOM_EventTypes,
			    "type", TCL_EXACT, &method) == TCL_OK) {
      type = (enum TclDOM_EventTypes) method;
    } else {
      type = TCLDOM_EVENT_USERDEFINED;
    }

    newNodeObjPtr = TclDOM_libxml2_NewEventObj(interp, docPtr, type, optobjv[0]);
    if (newNodeObjPtr == NULL) {
      return TCL_ERROR;
    } else {
      Tcl_SetObjResult(interp, newNodeObjPtr);
    }

    postMutationEvent = 0;

    break;

  case TCLDOM_DOCUMENT_SCHEMA:

    if (optobjc < 1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "submethod ?args ...?");
      return TCL_ERROR;
    }

    if (Tcl_GetIndexFromObj(interp, optobjv[0], TclDOM_DocumentSchemaSubmethods,
			    "submethod", 0, &method) != TCL_OK) {
      return TCL_ERROR;
    }

    switch ((enum TclDOM_DocumentSchemaSubmethods) method) {
    case TCLDOM_DOCUMENT_SCHEMA_COMPILE:
	  if (optobjc != 1) {
		Tcl_WrongNumArgs(interp, wrongidx, objv, "compile");
		return TCL_ERROR;
	  }
      return SchemaCompile(interp, domDocPtr);

    case TCLDOM_DOCUMENT_SCHEMA_VALIDATE:
      if (optobjc != 2) {
		Tcl_WrongNumArgs(interp, wrongidx, objv, "validate instance");
		return TCL_ERROR;
      } else {
		xmlDocPtr instancePtr;

		if (TclXML_libxml2_GetDocFromObj(interp, optobjv[1], &instancePtr) != TCL_OK) {
		  return TCL_ERROR;
		}

		return SchemaValidate(interp, domDocPtr, instancePtr);
      }

      break;

    default:
      Tcl_ResetResult(interp);
      Tcl_AppendResult(interp, "unknown submethod \"", 
		       Tcl_GetStringFromObj(optobjv[0], NULL), "\"", NULL);
      return TCL_ERROR;
    }

    break;

  case TCLDOM_DOCUMENT_DTD:

	if (optobjc < 1) {
	  Tcl_WrongNumArgs(interp, wrongidx, objv, "submethod ?args...?");
	  return TCL_ERROR;
	}
	
    if (Tcl_GetIndexFromObj(interp, optobjv[0], TclDOM_DocumentDTDSubmethods,
							"submethod", 0, &method) != TCL_OK) {
      return TCL_ERROR;
    }

    switch ((enum TclDOM_DocumentDTDSubmethods) method) {
    case TCLDOM_DOCUMENT_DTD_VALIDATE:
      if (optobjc != 1) {
	Tcl_WrongNumArgs(interp, wrongidx, objv, "validate");
	return TCL_ERROR;
      } else {
	return DTDValidate(interp, domDocPtr);
      }
    default:
      Tcl_SetResult(interp, "unknown submethod", NULL);
      return TCL_ERROR;
    }

    break;
	
  case TCLDOM_DOCUMENT_CREATEATTRIBUTE:
  case TCLDOM_DOCUMENT_CREATEENTITY:
  case TCLDOM_DOCUMENT_CREATEENTITYREFERENCE:
  case TCLDOM_DOCUMENT_CREATEDOCTYPEDECL:
  default:
    Tcl_SetResult(interp, "method \"", NULL);
    Tcl_AppendResult(interp, Tcl_GetStringFromObj(objv[1], NULL), "\" not yet implemented", NULL);
    return TCL_ERROR;
  }

  if (postMutationEvent) {

    TclDOM_PostMutationEvent(interp, tDocPtr, newNodeObjPtr, TCLDOM_EVENT_DOMNODEINSERTED, NULL, Tcl_NewIntObj(1), Tcl_NewIntObj(0), objv[2], NULL, NULL, NULL, NULL);
    TclDOM_PostMutationEvent(interp, tDocPtr, newNodeObjPtr, TCLDOM_EVENT_DOMNODEINSERTEDINTODOCUMENT, NULL, Tcl_NewIntObj(0), Tcl_NewIntObj(0), NULL, NULL, NULL, NULL, NULL);

    if (nodePtr) {
      TclDOM_PostMutationEvent(interp, tDocPtr, nodeObjPtr, TCLDOM_EVENT_DOMSUBTREEMODIFIED, NULL, Tcl_NewIntObj(1), Tcl_NewIntObj(0), NULL, NULL, NULL, NULL, NULL);
    } else {
      /*
       * We just added the document element.
       */
    }

    Tcl_SetObjResult(interp, newNodeObjPtr);
  }

  return TCL_OK;
}

int
DocumentCget(interp, docPtr, optObj)
     Tcl_Interp *interp;
     xmlDocPtr docPtr;
     Tcl_Obj *CONST optObj;
{
  xmlNodePtr nodePtr;
  int option;

  if (Tcl_GetIndexFromObj(interp, optObj, TclDOM_DocumentCommandOptions,
			  "option", 0, &option) != TCL_OK) {
    return TCL_ERROR;
  }

  switch ((enum TclDOM_DocumentCommandOptions) option) {

  case TCLDOM_DOCUMENT_DOCTYPE:
    Tcl_SetResult(interp, "cget option \"", NULL);
    Tcl_AppendResult(interp, Tcl_GetStringFromObj(optObj, NULL), NULL);
    Tcl_AppendResult(interp, "\" not yet implemented", NULL);
    return TCL_ERROR;
    
  case TCLDOM_DOCUMENT_IMPLEMENTATION:
    Tcl_SetResult(interp, "::dom::libxml2::DOMImplementation", NULL);
    break;

  case TCLDOM_DOCUMENT_DOCELEMENT:

    Tcl_MutexLock(&libxml2);
    nodePtr = xmlDocGetRootElement(docPtr);
    Tcl_MutexUnlock(&libxml2);

    if (nodePtr) {
      Tcl_SetObjResult(interp, TclDOM_libxml2_CreateObjFromNode(interp, nodePtr));
    } else {
      Tcl_ResetResult(interp);
      return TCL_OK;
    }

    break;

  default:
    Tcl_SetResult(interp, "unknown option", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TriggerEventListeners --
 *
 *  Iterates through the list of event listeners for
 *  a node or document and fires events.
 *
 * Results:
 *  Depends on listeners.
 *
 * Side effects:
 *  Depends on listeners.
 *
 *----------------------------------------------------------------------------
 */

static int
TriggerEventListeners(interp, type, tokenPtr, eventObjPtr, eventPtr)
     Tcl_Interp *interp;
     Tcl_HashTable *type;
     void *tokenPtr;
     Tcl_Obj *eventObjPtr;
     TclDOM_libxml2_Event *eventPtr;
{
  Tcl_HashEntry *entryPtr;
  Tcl_HashTable *tablePtr;
  Tcl_Obj *listenerListPtr;
  int listenerLen, listenerIdx;
  char *eventType;

  entryPtr = Tcl_FindHashEntry(type, tokenPtr);
  if (!entryPtr) {
    return TCL_OK;
  }
  tablePtr = (Tcl_HashTable *) Tcl_GetHashValue(entryPtr);

  if (eventPtr->type != TCLDOM_EVENT_USERDEFINED) {
	eventType = (char *) TclDOM_EventTypes[eventPtr->type];
  } else {
	eventType = Tcl_GetStringFromObj(eventPtr->typeObjPtr, NULL);
  }
  entryPtr = Tcl_FindHashEntry(tablePtr, eventType);
  if (!entryPtr) {
    return TCL_OK;
  }
  listenerListPtr = (Tcl_Obj *) Tcl_GetHashValue(entryPtr);

  /*
   * DOM L2 specifies that the ancestors are determined
   * at the moment of event dispatch, so using a static
   * list is the correct thing to do.
   */

  Tcl_ListObjLength(interp, listenerListPtr, &listenerLen);
  for (listenerIdx = 0; listenerIdx < listenerLen; listenerIdx++) {
    Tcl_Obj *listenerObj, *cmdPtr;

    Tcl_ListObjIndex(interp, listenerListPtr, listenerIdx, &listenerObj);

    cmdPtr = Tcl_DuplicateObj(listenerObj);
	Tcl_IncrRefCount(cmdPtr);
    if (Tcl_ListObjAppendElement(interp, cmdPtr, eventObjPtr) != TCL_OK) {
	  Tcl_DecrRefCount(cmdPtr);
      return TCL_ERROR;
    }
	Tcl_Preserve((ClientData) interp);
    if (Tcl_GlobalEvalObj(interp, cmdPtr) != TCL_OK) {
      Tcl_BackgroundError(interp);
    }
	Tcl_DecrRefCount(cmdPtr);
	Tcl_Release((ClientData) interp);
  }

  return TCL_OK;
}

static int
TclDOMSetLiveNodeListNode(interp, varName, nodePtr)
    Tcl_Interp *interp;
    char *varName;
    xmlNodePtr nodePtr;
{
  Tcl_Obj *valuePtr = Tcl_NewListObj(0, NULL);
  xmlNodePtr childPtr;

  for (childPtr = nodePtr->children; childPtr; childPtr = childPtr->next) {
    Tcl_ListObjAppendElement(interp, valuePtr, TclDOM_libxml2_CreateObjFromNode(interp, childPtr));
  }

  Tcl_SetVar2Ex(interp, varName, NULL, valuePtr, TCL_GLOBAL_ONLY);

  return TCL_OK;
}

static int
TclDOMSetLiveNodeListDoc(interp, varName, docPtr)
    Tcl_Interp *interp;
    char *varName;
    xmlDocPtr docPtr;
{
  Tcl_Obj *valuePtr = Tcl_NewListObj(0, NULL);
  xmlNodePtr childPtr;

  for (childPtr = docPtr->children; childPtr; childPtr = childPtr->next) {
    Tcl_ListObjAppendElement(interp, valuePtr, TclDOM_libxml2_CreateObjFromNode(interp, childPtr));
  }

  Tcl_SetVar2Ex(interp, varName, NULL, valuePtr, TCL_GLOBAL_ONLY);

  return TCL_OK;
}

static char *
TclDOMLiveNodeListNode(clientData, interp, name1, name2, flags)
    ClientData clientData;
    Tcl_Interp *interp;
    char *name1;
    char *name2;
    int flags;
{
  xmlNodePtr nodePtr = (xmlNodePtr) clientData;

  if (flags & (TCL_INTERP_DESTROYED | TCL_TRACE_DESTROYED)) {
    return NULL;
  } else if (flags & TCL_TRACE_READS) {
    TclDOMSetLiveNodeListNode(interp, name1, nodePtr);
  } else if (flags & TCL_TRACE_WRITES) {
    TclDOMSetLiveNodeListNode(interp, name1, nodePtr);
    return "variable is read-only";
  } else if (flags & TCL_TRACE_UNSETS) {
  }

  return NULL;
}
static char *
TclDOMLiveNodeListDoc(clientData, interp, name1, name2, flags)
    ClientData clientData;
    Tcl_Interp *interp;
    char *name1;
    char *name2;
    int flags;
{
  xmlDocPtr docPtr = (xmlDocPtr) clientData;

  if (flags & (TCL_INTERP_DESTROYED | TCL_TRACE_DESTROYED)) {
    return NULL;
  } else if (flags & TCL_TRACE_READS) {
    TclDOMSetLiveNodeListDoc(interp, name1, docPtr);
  } else if (flags & TCL_TRACE_WRITES) {
    TclDOMSetLiveNodeListDoc(interp, name1, docPtr);
    return "variable is read-only";
  } else if (flags & TCL_TRACE_UNSETS) {
  }

  return NULL;
}

static int
TclDOMSetLiveNamedNodeMap(interp, varName, nodePtr)
    Tcl_Interp *interp;
    char *varName;
    xmlNodePtr nodePtr;
{
  xmlAttrPtr attrPtr;

  Tcl_UnsetVar(interp, varName, TCL_GLOBAL_ONLY);

  for (attrPtr = nodePtr->properties; attrPtr; attrPtr = attrPtr->next) {

    if (Tcl_SetVar2Ex(interp, varName, (char *) attrPtr->name, Tcl_NewStringObj((CONST char *) xmlGetProp(nodePtr, attrPtr->name), -1), TCL_GLOBAL_ONLY) == NULL) {
      Tcl_ResetResult(interp);
      Tcl_AppendResult(interp, "unable to set attribute \"", attrPtr->name, "\"", NULL);
      return TCL_ERROR;
    }

    if (Tcl_TraceVar2(interp, varName, (char *) attrPtr->name, TCL_TRACE_READS|TCL_TRACE_WRITES|TCL_TRACE_UNSETS|TCL_GLOBAL_ONLY, (Tcl_VarTraceProc *) TclDOMLiveNamedNodeMap, (ClientData) nodePtr) != TCL_OK) {
      return TCL_ERROR;
    }
  }

  return TCL_OK;
}

static char *
TclDOMLiveNamedNodeMap(clientData, interp, name1, name2, flags)
    ClientData clientData;
    Tcl_Interp *interp;
    char *name1;
    char *name2;
    int flags;
{
  xmlNodePtr nodePtr = (xmlNodePtr) clientData;

  if (flags & (TCL_INTERP_DESTROYED | TCL_TRACE_DESTROYED)) {
    return NULL;
  } else if (flags & TCL_TRACE_READS && name2 == NULL) {
    TclDOMSetLiveNamedNodeMap(interp, name1, nodePtr);
  } else if (flags & TCL_TRACE_READS && name2 != NULL) {
    if (Tcl_SetVar2Ex(interp, name1, name2, Tcl_NewStringObj((CONST char *) xmlGetProp(nodePtr, (const xmlChar *) name2), -1), TCL_GLOBAL_ONLY) == NULL) {
      return "unable to set attribute";
    }
  } else if (flags & TCL_TRACE_WRITES) {
    TclDOMSetLiveNamedNodeMap(interp, name1, nodePtr);
    return "variable is read-only";
  } else if (flags & TCL_TRACE_UNSETS) {
  }

  return NULL;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMNodeCommand --
 *
 *  Implements dom::libxml2::node command.
 *
 * Results:
 *  Depends on method.
 *
 * Side effects:
 *  Depends on method.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOMNodeCommand (clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  TclXML_libxml2_Document *tDocPtr;
  TclDOM_libxml2_Node *tNodePtr;
  int method, optobjc, option, wrongidx, usecapture = 0;
  char *buf;
  xmlNodePtr nodePtr = NULL, childNodePtr, refPtr, newPtr, oldParent;
  xmlDocPtr docPtr = NULL;
  Tcl_Obj *nodeObjPtr = NULL;
  Tcl_Obj *docObjPtr = NULL;
  Tcl_Obj *resultPtr;
  Tcl_Obj *CONST *optobjv;

  if (clientData == NULL) {

    if (objc < 3) {
      Tcl_WrongNumArgs(interp, 1, objv, "method token ?arg ...?");
      return TCL_ERROR;
    }

    if (TclDOM_libxml2_GetTclNodeFromObj(interp, objv[2], &tNodePtr) != TCL_OK) {
      if (TclXML_libxml2_GetTclDocFromObj(interp, objv[2], &tDocPtr) != TCL_OK) {
		Tcl_ResetResult(interp);
		Tcl_AppendResult(interp, "\"", Tcl_GetStringFromObj(objv[2], NULL), "\" is neither a DOM document nor a DOM node", NULL);
		return TCL_ERROR;
      } else {
		Tcl_ResetResult(interp);
		docObjPtr = objv[2];
		docPtr = tDocPtr->docPtr;
		nodeObjPtr = NULL;
		nodePtr = NULL;
      }
    } else {
      nodePtr = tNodePtr->ptr.nodePtr;
      nodeObjPtr = objv[2];
      docPtr = NULL;
      docObjPtr = NULL;
      if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
		return TCL_ERROR;
      }
    }

    optobjc = objc - 3;
    optobjv = objv + 3;
    wrongidx = 3;

  } else {
    if (objc < 2) {
      Tcl_WrongNumArgs(interp, 1, objv, "method ?arg ...?");
      return TCL_ERROR;
    }

    tNodePtr = (TclDOM_libxml2_Node *) clientData;
    nodePtr = tNodePtr->ptr.nodePtr;
    nodeObjPtr = NULL;
    docPtr = NULL;
    docObjPtr = NULL;
    if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
      return TCL_ERROR;
    }

    optobjc = objc - 2;
    optobjv = objv + 2;
    wrongidx = 2;

  }

  if (Tcl_GetIndexFromObj(interp, objv[1], TclDOM_NodeCommandMethods,
			  "method", 0, &method) != TCL_OK) {
    return TCL_ERROR;
  }

  switch ((enum TclDOM_NodeCommandMethods) method) {

  case TCLDOM_NODE_CGET:

    if (optobjc != 1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "option");
      return TCL_ERROR;
    }

    NodeCget(interp, docPtr, nodePtr, optobjv[0]);

    break;

  case TCLDOM_NODE_PATH:

    if (docPtr) {
      Tcl_Obj *newobjv[2];

      newobjv[0] = TclXML_libxml2_CreateObjFromDoc(docPtr);
      newobjv[1] = NULL;
      Tcl_SetObjResult(interp, Tcl_NewListObj(1, newobjv));
    } else {
      Tcl_SetObjResult(interp, GetPath(interp, nodePtr));
    }

    break;

  case TCLDOM_NODE_CONFIGURE:

    if (optobjc < 1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "option ?value? ?option value ...?");
      return TCL_ERROR;
    }

    if (optobjc == 1) {
      return NodeCget(interp, docPtr, nodePtr, optobjv[0]);
    }

    if (optobjc % 2 == 1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "option ?value? ?option value ...?");
      return TCL_ERROR;
    }

    return NodeConfigure(interp, nodePtr, optobjc, optobjv);
    break;

  case TCLDOM_NODE_INSERTBEFORE:
    if (optobjc < 1 || optobjc > 2) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "ref ?new?");
      return TCL_ERROR;
    } else if (docPtr) {
      /* TODO: allow comments & PIs in document prologue */
      Tcl_SetResult(interp, "document already has document element", NULL);
      return TCL_ERROR;
    } else if (optobjc == 1) {
      /* No reference child specified - new appended to child list */
      if (TclDOM_libxml2_GetNodeFromObj(interp, optobjv[0], &newPtr) != TCL_OK) {
        return TCL_ERROR;
      }
      return TclDOM_NodeAppendChild(interp, nodePtr, newPtr);
    } else if (optobjc == 2) {
      if (TclDOM_libxml2_GetNodeFromObj(interp, optobjv[0], &newPtr) != TCL_OK) {
        return TCL_ERROR;
      }
      if (TclDOM_libxml2_GetNodeFromObj(interp, optobjv[1], &refPtr) != TCL_OK) {
        return TCL_ERROR;
      }
      return TclDOM_NodeInsertBefore(interp, refPtr, newPtr);
    }

    break;

  case TCLDOM_NODE_REPLACECHILD:
    if (optobjc !=  2) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "new old");
      return TCL_ERROR;
    } else if (docPtr) {
      /* TODO: allow replacing comments & PIs */
      Tcl_SetResult(interp, "document already has document element", NULL);
      return TCL_ERROR;
    } else {
      if (TclDOM_libxml2_GetNodeFromObj(interp, optobjv[0], &newPtr) != TCL_OK) {
        return TCL_ERROR;
      }
      if (TclDOM_libxml2_GetNodeFromObj(interp, optobjv[1], &refPtr) != TCL_OK) {
        return TCL_ERROR;
      }
      oldParent = newPtr->parent;
      if (oldParent != refPtr->parent) {
        TclDOM_PostMutationEvent(interp, 
				 tDocPtr, 
				 TclDOM_libxml2_CreateObjFromNode(interp, newPtr), 
				 TCLDOM_EVENT_DOMNODEREMOVED,
				 NULL,
				 Tcl_NewIntObj(1), Tcl_NewIntObj(0), 
				 TclDOM_libxml2_CreateObjFromNode(interp, newPtr->parent), 
				 NULL, NULL, NULL, NULL);
      }

      Tcl_MutexLock(&libxml2);

      if (xmlReplaceNode(refPtr, newPtr) == NULL) {
        Tcl_SetResult(interp, "unable to replace node", NULL);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      }

      Tcl_MutexUnlock(&libxml2);

    }

    PostMutationEvents(interp, tDocPtr, nodePtr, refPtr, newPtr, oldParent, refPtr->parent);

    Tcl_SetObjResult(interp, TclDOM_libxml2_CreateObjFromNode(interp, refPtr));

    break;

  case TCLDOM_NODE_REMOVECHILD:
    if (optobjc !=  1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "child");
      return TCL_ERROR;
    } else if (docPtr) {
      /* TODO: allow removing comments & PIs */
      Tcl_SetResult(interp, "document must have document element", NULL);
      return TCL_ERROR;
    } else {
      xmlNodePtr childPtr;
      if (TclDOM_libxml2_GetNodeFromObj(interp, optobjv[0], &childPtr) != TCL_OK) {
        return TCL_ERROR;
      }
      if (nodePtr != childPtr->parent) {
	Tcl_SetResult(interp, "not found: \"", NULL);
	Tcl_AppendResult(interp, Tcl_GetStringFromObj(optobjv[0], NULL), 
			 "\" is not a child", NULL);
	if (nodeObjPtr) {
	  Tcl_AppendResult(interp, " of \"",
			 Tcl_GetStringFromObj(nodeObjPtr, NULL), "\"", NULL);
	}
	return TCL_ERROR;
      }
      oldParent = childPtr->parent;
      TclDOM_PostMutationEvent(interp, 
			       tDocPtr, optobjv[0], 
			       TCLDOM_EVENT_DOMNODEREMOVED,
			       NULL,
			       Tcl_NewIntObj(1), Tcl_NewIntObj(0), 
			       TclDOM_libxml2_CreateObjFromNode(interp, oldParent), 
			       NULL, NULL, NULL, NULL);
      TclDOM_PostMutationEvent(interp, 
			       tDocPtr, optobjv[0], 
			       TCLDOM_EVENT_DOMNODEREMOVEDFROMDOCUMENT,
			       NULL,
			       Tcl_NewIntObj(0), Tcl_NewIntObj(0), 
			       NULL, NULL, NULL, NULL, NULL);

      Tcl_MutexLock(&libxml2);
      xmlUnlinkNode(childPtr);
      Tcl_MutexUnlock(&libxml2);

      Tcl_SetObjResult(interp, optobjv[0]);
      TclDOM_PostMutationEvent(interp, 
			       tDocPtr, 
			       TclDOM_libxml2_CreateObjFromNode(interp, oldParent), 
			       TCLDOM_EVENT_DOMSUBTREEMODIFIED,
			       NULL,
			       Tcl_NewIntObj(1), Tcl_NewIntObj(0), NULL, NULL, NULL, NULL, NULL);
    }

    break;

  case TCLDOM_NODE_APPENDCHILD:
    if (optobjc !=  1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "child");
      return TCL_ERROR;
    } else if (docPtr) {
      xmlNodePtr oldPtr;

      if (TclDOM_libxml2_GetNodeFromObj(interp, optobjv[0], &childNodePtr) != TCL_OK) {
        return TCL_ERROR;
      }

      Tcl_MutexLock(&libxml2);

      /* TODO: allow appending comments & PIs */
      oldPtr = xmlDocSetRootElement(docPtr, childNodePtr);
      if (oldPtr) {
        xmlDocSetRootElement(docPtr, oldPtr);
        Tcl_SetResult(interp, "document element already exists", NULL);
	Tcl_MutexUnlock(&libxml2);
        return TCL_ERROR;
      }

      Tcl_MutexUnlock(&libxml2);

      Tcl_SetObjResult(interp, optobjv[0]);

    } else {
      if (TclDOM_libxml2_GetNodeFromObj(interp, optobjv[0], &childNodePtr) != TCL_OK) {
        return TCL_ERROR;
      }

      return TclDOM_NodeAppendChild(interp, nodePtr, childNodePtr);
    }

    break;

  case TCLDOM_NODE_HASCHILDNODES:
    if (docPtr) {
      if (docPtr->children) {
       Tcl_SetObjResult(interp, Tcl_NewBooleanObj(1));
      } else {
       Tcl_SetObjResult(interp, Tcl_NewBooleanObj(0));
      }
    } else {
      if (nodePtr->children) {
       Tcl_SetObjResult(interp, Tcl_NewBooleanObj(1));
      } else {
       Tcl_SetObjResult(interp, Tcl_NewBooleanObj(0));
      }
    }

    break;

  case TCLDOM_NODE_ISSAMENODE:
    /* DOM Level 3 method */

    if (optobjc != 1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "ref");
      return TCL_ERROR;
    }

    if (docPtr) {
      xmlDocPtr docRefPtr;

      if (TclXML_libxml2_GetDocFromObj(interp, optobjv[0], &docRefPtr) != TCL_OK) {
	Tcl_SetObjResult(interp, Tcl_NewBooleanObj(0));
	return TCL_OK;
      }

      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(docPtr == docRefPtr));

    } else {
      if (TclDOM_libxml2_GetNodeFromObj(interp, optobjv[0], &refPtr) != TCL_OK) {
	Tcl_SetObjResult(interp, Tcl_NewBooleanObj(0));
	return TCL_OK;
      }

      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(nodePtr == refPtr));
    }

    break;

  case TCLDOM_NODE_CLONENODE:
    if (optobjc != 0 && optobjc != 2) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "?-deep boolean?");
      return TCL_ERROR;
    } else if (docPtr) {
      Tcl_SetResult(interp, "documents cannot be cloned", NULL);
      return TCL_ERROR;
    } else {
      int deep = 0;
      xmlNodePtr copyPtr;

      if (optobjc == 2) {
	if (Tcl_RegExpMatchObj(interp, optobjv[0], Tcl_NewStringObj("-de?e?p?", -1)) == 0) {
	  Tcl_ResetResult(interp);
	  Tcl_AppendResult(interp, "invalid option \"", Tcl_GetStringFromObj(optobjv[0], NULL), "\", must be \"-deep\"", NULL);
	  return TCL_ERROR;
	}
        if (Tcl_GetBooleanFromObj(interp, optobjv[1], &deep) != TCL_OK) {
          return TCL_ERROR;
        }
      }

      Tcl_MutexLock(&libxml2);
      copyPtr = xmlDocCopyNode(nodePtr, nodePtr->doc, deep);
      Tcl_MutexUnlock(&libxml2);

      if (copyPtr == NULL) {
        Tcl_SetResult(interp, "unable to copy node", NULL);
        return TCL_ERROR;
      }
      Tcl_SetObjResult(interp, TclDOM_libxml2_CreateObjFromNode(interp, copyPtr));
    }
    break;

  case TCLDOM_NODE_PARENT:

    if (docPtr) {
      break;
    }

    if (nodePtr->parent) {
      Tcl_SetObjResult(interp, TclDOM_libxml2_CreateObjFromNode(interp, nodePtr->parent));
    } else {
      Tcl_SetObjResult(interp, TclXML_libxml2_CreateObjFromDoc(nodePtr->doc));
    }

    break;

  case TCLDOM_NODE_CHILDREN:

    resultPtr = Tcl_NewListObj(0, NULL);

    if (docPtr) {
      childNodePtr = docPtr->children;
    } else {
      childNodePtr = nodePtr->children;
    }

    while (childNodePtr) {
      Tcl_ListObjAppendElement(interp, resultPtr, TclDOM_libxml2_CreateObjFromNode(interp, childNodePtr));
      childNodePtr = childNodePtr->next;
    }

    Tcl_SetObjResult(interp, resultPtr);

    break;

  case TCLDOM_NODE_ADDEVENTLISTENER:

	/* TODO: type optional, missing type returns all types that have a listener */

    if (optobjc < 1) {
	  Tcl_WrongNumArgs(interp, wrongidx, objv, "type ?listener? ?-usecapture boolean?");
      return TCL_ERROR;
    } else {
      enum TclDOM_EventTypes type;
      Tcl_Obj *typeObjPtr, *listenerPtr = NULL;
      void *tokenPtr = NULL;

      if (nodePtr) {
		tokenPtr = (void *) nodePtr;
      } else {
		tokenPtr = (void *) docPtr;
      }

      if (Tcl_GetIndexFromObj(interp, optobjv[0], TclDOM_EventTypes,
							  "type", TCL_EXACT, &option) == TCL_OK) {
		type = (enum TclDOM_EventTypes) option;
      } else {
		type = TCLDOM_EVENT_USERDEFINED;
      }
      typeObjPtr = optobjv[0];
	  Tcl_ResetResult(interp);
      optobjc -= 1;
      optobjv += 1;

	  if (optobjc > 0 && *Tcl_GetStringFromObj(optobjv[0], NULL) != '-') {
		listenerPtr = optobjv[0];
		optobjc -= 1;
		optobjv += 1;
	  } /* else we will return the registered listener */

	  while (optobjc) {
		if (optobjc == 1) {
		  Tcl_SetResult(interp, "missing value", NULL);
		  return TCL_ERROR;
		}
		if (Tcl_GetIndexFromObj(interp, optobjv[0], TclDOM_NodeCommandAddEventListenerOptions,
								"option", 0, &option) != TCL_OK) {
		  return TCL_ERROR;
		}
		switch ((enum TclDOM_NodeCommandAddEventListenerOptions) option) {
		  case TCLDOM_NODE_ADDEVENTLISTENER_USECAPTURE:

			if (Tcl_GetBooleanFromObj(interp, optobjv[1], &usecapture) != TCL_OK) {
			  return TCL_ERROR;
			}

			break;

		  default:
			Tcl_SetResult(interp, "unknown option", NULL);
			return TCL_ERROR;
		}

		optobjc -= 2;
		optobjv += 2;
	  }

	  if (nodePtr) {
		docObjPtr = TclXML_libxml2_CreateObjFromDoc(nodePtr->doc);
	  } else {
		docObjPtr = TclXML_libxml2_CreateObjFromDoc(docPtr);
	  }
	  TclXML_libxml2_GetTclDocFromObj(interp, docObjPtr, &tDocPtr);

	  if (listenerPtr == NULL) {
		listenerPtr = TclDOM_GetEventListener(interp, tDocPtr, tokenPtr, type, typeObjPtr, usecapture);
		if (listenerPtr) {
		  Tcl_SetObjResult(interp, listenerPtr);
		} else {
		  Tcl_SetResult(interp, "unable to find listeners", NULL);
		  return TCL_ERROR;
		}
	  } else {
		return TclDOM_AddEventListener(interp, tDocPtr, tokenPtr, type, typeObjPtr, listenerPtr, usecapture);
	  }
	}

  break;


  case TCLDOM_NODE_REMOVEEVENTLISTENER:

    if (optobjc < 2) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "type listener ?-usecapture boolean?");
      return TCL_ERROR;
    } else {
      Tcl_Obj *typeObjPtr, *listenerPtr;
      void *tokenPtr = NULL;
      TclXML_libxml2_Document *tDocPtr;
      enum TclDOM_EventTypes type;

      if (nodePtr) {
        tokenPtr = (void *) nodePtr;
      } else {
        tokenPtr = (void *) docPtr;
      }

      typeObjPtr = optobjv[0];
      if (Tcl_GetIndexFromObj(interp, optobjv[0], TclDOM_EventTypes,
			      "type", TCL_EXACT, &option) == TCL_OK) {
		type = (enum TclDOM_EventTypes) option;
      } else {
		type = TCLDOM_EVENT_USERDEFINED;
      }
      listenerPtr = optobjv[1];

      optobjc -= 2;
      optobjv += 2;
      while (optobjc) {
		if (Tcl_GetIndexFromObj(interp, optobjv[0], TclDOM_NodeCommandAddEventListenerOptions,
				"option", 0, &option) != TCL_OK) {
		  return TCL_ERROR;
		}
		switch ((enum TclDOM_NodeCommandAddEventListenerOptions) option) {
		  case TCLDOM_NODE_ADDEVENTLISTENER_USECAPTURE:

			if (Tcl_GetBooleanFromObj(interp, optobjv[1], &usecapture) != TCL_OK) {
			  return TCL_ERROR;
			}

			break;

		  default:
			Tcl_SetResult(interp, "unknown option", NULL);
			return TCL_ERROR;
		}

		optobjc -= 2;
		optobjv += 2;
		}

		if (nodePtr) {
		  if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
			return TCL_ERROR;
		  }
		} else {
		  docObjPtr = TclXML_libxml2_CreateObjFromDoc(docPtr);
		  if (TclXML_libxml2_GetTclDocFromObj(interp, docObjPtr, &tDocPtr) != TCL_OK) {
			return TCL_ERROR;
		  }
		}

		return TclDOM_RemoveEventListener(interp, tDocPtr, tokenPtr, type, typeObjPtr, listenerPtr, usecapture);
	  }

    break;

  case TCLDOM_NODE_DISPATCHEVENT:

    if (optobjc != 1) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "event");
      return TCL_ERROR;
    } else {
      TclDOM_libxml2_Event *eventPtr;

      if (TclDOM_libxml2_GetEventFromObj(interp, optobjv[0], &eventPtr) != TCL_OK) {
		return TCL_ERROR;
      }

      if (nodeObjPtr) {
		return TclDOM_DispatchEvent(interp, nodeObjPtr, optobjv[0], eventPtr);
	  } else if (nodePtr) {
		return TclDOM_DispatchEvent(interp, TclDOM_libxml2_CreateObjFromNode(interp, nodePtr), optobjv[0], eventPtr);
	  } else if (docObjPtr) {
		return TclDOM_DispatchEvent(interp, docObjPtr, optobjv[0], eventPtr);
	  } else {
		Tcl_SetResult(interp, "unable to dispatch event", NULL);
		return TCL_ERROR;
	  }
    }

    break;

  case TCLDOM_NODE_STRINGVALUE:

    if (optobjc != 0) {
      Tcl_WrongNumArgs(interp, wrongidx, objv, "");
      return TCL_ERROR;
    }

    Tcl_ResetResult(interp);

    Tcl_MutexLock(&libxml2);

    if (nodePtr) {
      buf = (char *) xmlNodeGetContent(nodePtr);
      Tcl_SetObjResult(interp, Tcl_NewStringObj(buf, -1));
      xmlFree (buf);
    } else if (docPtr) {
      nodePtr = xmlDocGetRootElement(docPtr);
      if (nodePtr) {
        buf = (char *) xmlNodeGetContent(nodePtr);
        Tcl_SetObjResult(interp, Tcl_NewStringObj(buf, -1));
        xmlFree (buf);
      } else {
	nodePtr = docPtr->children;
	while (nodePtr != NULL) {
	  if (nodePtr->type == XML_TEXT_NODE) {
	    Tcl_AppendResult(interp, (char *) nodePtr->content, NULL);
	  }
	  nodePtr = nodePtr->next;
	}
      }
    } else {
      Tcl_SetResult(interp, "cannot determine string value: internal error", NULL);
      Tcl_MutexUnlock(&libxml2);
      return TCL_ERROR;
    }

    Tcl_MutexUnlock(&libxml2);

    break;

  case TCLDOM_NODE_SELECTNODE:

    Tcl_ResetResult(interp);

    return TclDOMSelectNodeCommand(clientData, interp, objc - 1, objv + 1);

    break;

  default:
    Tcl_SetResult(interp, "method \"", NULL);
    Tcl_AppendResult(interp, Tcl_GetStringFromObj(objv[1], NULL), "\" not yet implemented", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}
int
NodeCget(interp, docPtr, nodePtr, optPtr)
     Tcl_Interp *interp;
     xmlDocPtr docPtr;
     xmlNodePtr nodePtr;
     Tcl_Obj *CONST optPtr;
{
  TclXML_libxml2_Document *tDocPtr;
  TclDOM_libxml2_Document *domDocPtr;
  Tcl_Obj *objPtr;
  xmlNodePtr childNodePtr;
  int option;
  char varname[100];
  Tcl_Obj *livePtr;

  if (Tcl_GetIndexFromObj(interp, optPtr, TclDOM_NodeCommandOptions,
			  "option", 0, &option) != TCL_OK) {
    return TCL_ERROR;
  }

  switch ((enum TclDOM_NodeCommandOptions) option) {

  case TCLDOM_NODE_NODETYPE:

    if (docPtr) {
      Tcl_SetResult(interp, "document", NULL);
      break;
    }

    switch (nodePtr->type) {
    case XML_ELEMENT_NODE:
      Tcl_SetResult(interp, "element", NULL);
      break;
    case XML_ATTRIBUTE_NODE:
      Tcl_SetResult(interp, "attribute", NULL);
      break;
    case XML_TEXT_NODE:
    case XML_CDATA_SECTION_NODE:
      Tcl_SetResult(interp, "textNode", NULL);
      break;
    case XML_ENTITY_REF_NODE:
      Tcl_SetResult(interp, "entityReference", NULL);
      break;
    case XML_ENTITY_NODE:
      Tcl_SetResult(interp, "entity", NULL);
      break;
    case XML_PI_NODE:
      Tcl_SetResult(interp, "processingInstruction", NULL);
      break;
    case XML_COMMENT_NODE:
      Tcl_SetResult(interp, "comment", NULL);
      break;
    case XML_DOCUMENT_NODE:
      Tcl_SetResult(interp, "document", NULL);
      break;
    case XML_DOCUMENT_TYPE_NODE:
      Tcl_SetResult(interp, "docType", NULL);
      break;
    case XML_DOCUMENT_FRAG_NODE:
      Tcl_SetResult(interp, "documentFragment", NULL);
      break;
    case XML_NOTATION_NODE:
      Tcl_SetResult(interp, "notation", NULL);
      break;
    case XML_HTML_DOCUMENT_NODE:
      Tcl_SetResult(interp, "HTMLdocument", NULL);
      break;
    case XML_DTD_NODE:
      Tcl_SetResult(interp, "dtd", NULL);
      break;
    case XML_ELEMENT_DECL:
      Tcl_SetResult(interp, "elementDecl", NULL);
      break;
    case XML_ATTRIBUTE_DECL:
      Tcl_SetResult(interp, "attributeDecl", NULL);
      break;
    case XML_ENTITY_DECL:
      Tcl_SetResult(interp, "entityDecl", NULL);
      break;
    case XML_NAMESPACE_DECL:
      Tcl_SetResult(interp, "namespaceDecl", NULL);
      break;
    case XML_XINCLUDE_START:
      Tcl_SetResult(interp, "xincludeStart", NULL);
      break;
    case XML_XINCLUDE_END:
      Tcl_SetResult(interp, "xincludeEnd", NULL);
      break;
    default:
      Tcl_SetResult(interp, "unknown", NULL);
    }

    break;

  case TCLDOM_NODE_LOCALNAME:
  case TCLDOM_NODE_NODENAME:

    /* This isn't quite right: nodeName should return the expanded name */

    if (docPtr) {
      Tcl_SetResult(interp, "#document", NULL);
      break;
    }
    /* libxml2 doesn't maintain the correct DOM node name */
    switch (nodePtr->type) {
    case XML_ELEMENT_NODE:
    case XML_ATTRIBUTE_NODE:
    case XML_ENTITY_REF_NODE:
    case XML_ENTITY_NODE:
    case XML_PI_NODE:
    case XML_DOCUMENT_TYPE_NODE:
    case XML_NOTATION_NODE:
      Tcl_SetObjResult(interp, Tcl_NewStringObj((CONST char *) nodePtr->name, -1));
      break;
    case XML_TEXT_NODE:
      Tcl_SetResult(interp, "#text", NULL);
      break;
    case XML_CDATA_SECTION_NODE:
      Tcl_SetResult(interp, "#cdata-section", NULL);
      break;
    case XML_COMMENT_NODE:
      Tcl_SetResult(interp, "#comment", NULL);
      break;
    case XML_DOCUMENT_NODE:
      /* Already handled above */
      Tcl_SetResult(interp, "#document", NULL);
      break;
    case XML_DOCUMENT_FRAG_NODE:
      Tcl_SetResult(interp, "#document-fragment", NULL);
      break;
    case XML_HTML_DOCUMENT_NODE:
      /* Not standard DOM */
      Tcl_SetResult(interp, "#HTML-document", NULL);
      break;
    case XML_DTD_NODE:
      /* Not standard DOM */
      Tcl_SetResult(interp, "#dtd", NULL);
      break;
    case XML_ELEMENT_DECL:
      /* Not standard DOM */
      Tcl_SetResult(interp, "#element-declaration", NULL);
      break;
    case XML_ATTRIBUTE_DECL:
      /* Not standard DOM */
      Tcl_SetResult(interp, "#attribute-declaration", NULL);
      break;
    case XML_ENTITY_DECL:
      /* Not standard DOM */
      Tcl_SetResult(interp, "#entity-declaration", NULL);
      break;
    case XML_NAMESPACE_DECL:
      /* Not standard DOM */
      Tcl_SetResult(interp, "#namespace-declaration", NULL);
      break;
    case XML_XINCLUDE_START:
      /* Not standard DOM */
      Tcl_SetResult(interp, "#xinclude-start", NULL);
      break;
    case XML_XINCLUDE_END:
      /* Not standard DOM */
      Tcl_SetResult(interp, "#xinclude-end", NULL);
      break;
    default:
      Tcl_SetResult(interp, "#unknown", NULL);
    }

    break;

  case TCLDOM_NODE_NODEVALUE:

    if (docPtr) {
      break;
    }

    Tcl_MutexLock(&libxml2);

    if (XML_GET_CONTENT(nodePtr) != NULL) {
      Tcl_SetObjResult(interp, Tcl_NewStringObj((CONST char *) XML_GET_CONTENT(nodePtr), -1));
    }

    Tcl_MutexUnlock(&libxml2);

    break;

  case TCLDOM_NODE_OWNERDOCUMENT:

    if (docPtr) {
      Tcl_SetObjResult(interp, TclXML_libxml2_CreateObjFromDoc(docPtr));
      break;
    }

    Tcl_SetObjResult(interp, TclXML_libxml2_CreateObjFromDoc(nodePtr->doc));

    break;

  case TCLDOM_NODE_PARENTNODE:

    if (docPtr) {
      Tcl_ResetResult(interp);
      break;
    }

    if (nodePtr->parent) {
      if (nodePtr->parent->type == XML_DOCUMENT_NODE ||
	  nodePtr->parent->type == XML_HTML_DOCUMENT_NODE) {
	Tcl_SetObjResult(interp, TclXML_libxml2_CreateObjFromDoc(nodePtr->doc));
      } else {
	Tcl_SetObjResult(interp, TclDOM_libxml2_CreateObjFromNode(interp, nodePtr->parent));
      }
    } else {
      Tcl_SetObjResult(interp, TclXML_libxml2_CreateObjFromDoc(nodePtr->doc));
    }

    break;

  case TCLDOM_NODE_CHILDNODES:

    /* Set up live NodeList variable */

    if (docPtr) {
      objPtr = TclXML_libxml2_CreateObjFromDoc(docPtr);
      if (TclXML_libxml2_GetTclDocFromObj(interp, objPtr, &tDocPtr) != TCL_OK) {
	return TCL_ERROR;
      }
    } else {
      if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
	return TCL_ERROR;
      }
    }
    domDocPtr = GetDOMDocument(interp, tDocPtr);
    if (domDocPtr == NULL) {
      Tcl_SetResult(interp, "internal error", NULL);
      return TCL_ERROR;
    }
    sprintf(varname, "::dom::%s::nodelist.%d", tDocPtr->token, domDocPtr->nodeCntr++);
    livePtr = Tcl_GetVar2Ex(interp, varname, NULL, TCL_GLOBAL_ONLY);
    if (!livePtr) {
      Tcl_Obj *nodelistPtr = Tcl_NewListObj(0, NULL);

      Tcl_SetVar2Ex(interp, varname, NULL, nodelistPtr, TCL_GLOBAL_ONLY);
      Tcl_IncrRefCount(nodelistPtr);

      if (docPtr) {
	if (Tcl_TraceVar(interp, varname, TCL_TRACE_READS|TCL_TRACE_WRITES|TCL_TRACE_UNSETS|TCL_GLOBAL_ONLY, (Tcl_VarTraceProc *) TclDOMLiveNodeListDoc, (ClientData) docPtr) != TCL_OK) {
	  Tcl_DecrRefCount(nodelistPtr);
	  return TCL_ERROR;
	} else {
	  TclDOMLiveNodeListDoc((ClientData) tDocPtr->docPtr, interp, varname, NULL, TCL_TRACE_READS);
	}
      } else {
	if (Tcl_TraceVar(interp, varname, TCL_TRACE_READS|TCL_TRACE_WRITES|TCL_TRACE_UNSETS|TCL_GLOBAL_ONLY, (Tcl_VarTraceProc *) TclDOMLiveNodeListNode, (ClientData) nodePtr) != TCL_OK) {
	  Tcl_DecrRefCount(nodelistPtr);
	  return TCL_ERROR;
	} else {
	  TclDOMLiveNodeListNode((ClientData) nodePtr, interp, varname, NULL, TCL_TRACE_READS);
	}
      }
    }

    Tcl_SetObjResult(interp, Tcl_NewStringObj(varname, -1));

    break;

  case TCLDOM_NODE_FIRSTCHILD:

    /*
     * Handle case where no children are present
     * Bug #1089114 w/- patch by dwcollins
     */

    if (docPtr) {
      childNodePtr = docPtr->children;
    } else {
      childNodePtr = nodePtr->children;
    }

    if (childNodePtr != NULL) {
      Tcl_SetObjResult(interp, 
		       TclDOM_libxml2_CreateObjFromNode(interp, childNodePtr));
    }

    break;

  case TCLDOM_NODE_LASTCHILD:

    if (docPtr) {
      childNodePtr = docPtr->last;
    } else {
      Tcl_MutexLock(&libxml2);
      childNodePtr = xmlGetLastChild(nodePtr);
      Tcl_MutexUnlock(&libxml2);
    }
    if (childNodePtr != NULL) {
      Tcl_SetObjResult(interp, TclDOM_libxml2_CreateObjFromNode(interp, childNodePtr));
    }

    break;

  case TCLDOM_NODE_NEXTSIBLING:
    if (!docPtr && nodePtr->next) {
      Tcl_SetObjResult(interp, TclDOM_libxml2_CreateObjFromNode(interp, nodePtr->next));
    }

    break;
      
  case TCLDOM_NODE_PREVIOUSSIBLING:
    if (!docPtr && nodePtr->prev) {
      Tcl_SetObjResult(interp, TclDOM_libxml2_CreateObjFromNode(interp, nodePtr->prev));
    }

    break;

  case TCLDOM_NODE_ATTRIBUTES:

    if (docPtr) {
      Tcl_ResetResult(interp);
      return TCL_OK;
    } else if (nodePtr->type != XML_ELEMENT_NODE) {
      Tcl_SetResult(interp, "wrong object type", NULL);
      return TCL_ERROR;
    } else {
      /* Set up live NamedNodeMap variable */

      /* If there's already a variable, return it */
      objPtr = TclXML_libxml2_CreateObjFromDoc(nodePtr->doc);
      TclXML_libxml2_GetTclDocFromObj(interp, objPtr, &tDocPtr);
      domDocPtr = GetDOMDocument(interp, tDocPtr);
      if (domDocPtr == NULL) {
	Tcl_SetResult(interp, "internal error", NULL);
	return TCL_ERROR;
      }
      sprintf(varname, "::dom::%s::att%d", tDocPtr->token, domDocPtr->nodeCntr++);
      livePtr = Tcl_GetVar2Ex(interp, varname, NULL, TCL_GLOBAL_ONLY);
      if (!livePtr) {
	if (TclDOMSetLiveNamedNodeMap(interp, varname, (ClientData) nodePtr) != TCL_OK) {
	  Tcl_UnsetVar(interp, varname, TCL_GLOBAL_ONLY);
	  return TCL_ERROR;
	}

	if (Tcl_TraceVar(interp, varname, TCL_TRACE_ARRAY|TCL_TRACE_READS|TCL_TRACE_WRITES|TCL_TRACE_UNSETS|TCL_GLOBAL_ONLY, (Tcl_VarTraceProc *) TclDOMLiveNamedNodeMap, (ClientData) nodePtr) != TCL_OK) {
	  Tcl_UnsetVar(interp, varname, TCL_GLOBAL_ONLY);
	  return TCL_ERROR;
	}
      }

      Tcl_SetObjResult(interp, Tcl_NewStringObj(varname, -1));

    }

    break;

  case TCLDOM_NODE_NAMESPACEURI:

    if (!docPtr && nodePtr->ns) {
      if (nodePtr->ns->href) {
	Tcl_SetObjResult(interp, Tcl_NewStringObj((CONST char *) nodePtr->ns->href, -1));
      }
    }

    break;

  case TCLDOM_NODE_PREFIX:

    if (!docPtr && nodePtr->ns) {
      if (nodePtr->ns->prefix) {
	Tcl_SetObjResult(interp, Tcl_NewStringObj((CONST char *) nodePtr->ns->prefix, -1));
      }
    }

    break;

  default:
    Tcl_SetResult(interp, "unknown option or not yet implemented", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}
int
NodeConfigure(interp, nodePtr, objc, objv)
     Tcl_Interp *interp;
     xmlNodePtr nodePtr;
     int objc;
     Tcl_Obj *CONST objv[];
{
  TclXML_libxml2_Document *tDocPtr;
  Tcl_Obj *objPtr;
  char *buf;
  int option, len;

  while (objc) {
    if (objc == 1) {
      Tcl_SetResult(interp, "missing value", NULL);
      return TCL_ERROR;
    }

    if (Tcl_GetIndexFromObj(interp, objv[0], TclDOM_NodeCommandOptions,
			    "option", 0, &option) != TCL_OK) {
      return TCL_ERROR;
    }

    switch ((enum TclDOM_NodeCommandOptions) option) {
    case TCLDOM_NODE_NODETYPE:
    case TCLDOM_NODE_NODENAME:
    case TCLDOM_NODE_PARENTNODE:
    case TCLDOM_NODE_CHILDNODES:
    case TCLDOM_NODE_FIRSTCHILD:
    case TCLDOM_NODE_LASTCHILD:
    case TCLDOM_NODE_PREVIOUSSIBLING:
    case TCLDOM_NODE_NEXTSIBLING:
    case TCLDOM_NODE_ATTRIBUTES:
    case TCLDOM_NODE_NAMESPACEURI:
    case TCLDOM_NODE_PREFIX:
    case TCLDOM_NODE_LOCALNAME:
    case TCLDOM_NODE_OWNERDOCUMENT:

      Tcl_ResetResult(interp);
      Tcl_AppendResult(interp, "attribute \"", Tcl_GetStringFromObj(objv[0], NULL), "\" is read-only", NULL);
      return TCL_ERROR;

    case TCLDOM_NODE_NODEVALUE:

      if (!nodePtr) {
	Tcl_ResetResult(interp);
	return TCL_OK;
      }

      switch (nodePtr->type) {
      case XML_ELEMENT_NODE:
      case XML_DOCUMENT_NODE:
      case XML_DOCUMENT_FRAG_NODE:
      case XML_DOCUMENT_TYPE_NODE:
      case XML_ENTITY_NODE:
      case XML_ENTITY_REF_NODE:
      case XML_NOTATION_NODE:
      case XML_HTML_DOCUMENT_NODE:
      case XML_DTD_NODE:
      case XML_ELEMENT_DECL:
      case XML_ATTRIBUTE_DECL:
      case XML_ENTITY_DECL:
      case XML_NAMESPACE_DECL:
      case XML_XINCLUDE_START:
      case XML_XINCLUDE_END:
	/*
	 * DOM defines these nodes as not having a node value.
	 * libxml2 clobbers existing content if the value is set,
	 * so don't do it!
	 */
	Tcl_ResetResult(interp);
	return TCL_OK;

      default:
	/* fall-through */
	break;
      }

      if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
	return TCL_ERROR;
      }

      Tcl_MutexLock(&libxml2);

      objPtr = Tcl_NewStringObj((CONST char *) xmlNodeGetContent(nodePtr), -1);

      buf = Tcl_GetStringFromObj(objv[1], &len);
      xmlNodeSetContentLen(nodePtr, (const xmlChar *) buf, len);

      Tcl_MutexUnlock(&libxml2);

      TclDOM_PostMutationEvent(interp, 
			       tDocPtr, TclDOM_libxml2_CreateObjFromNode(interp, nodePtr), 
			       TCLDOM_EVENT_DOMCHARACTERDATAMODIFIED, NULL,
			       Tcl_NewIntObj(1), Tcl_NewIntObj(0), NULL, objPtr, objv[1], NULL, NULL);

      Tcl_DecrRefCount(objPtr);

      break;

    case TCLDOM_NODE_CDATASECTION:

      break;
    }

    objc -= 2;
    objv += 2;

  }

  return TCL_OK;
}

int
TclDOM_NodeAppendChild(interp, nodePtr, childPtr)
     Tcl_Interp *interp;
     xmlNodePtr nodePtr;
     xmlNodePtr childPtr;
{
  TclXML_libxml2_Document *tDocPtr;
  xmlNodePtr oldParent;
  xmlNodePtr oldSibling;

  if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
    return TCL_ERROR;
  }

  oldParent = childPtr->parent;
  oldSibling = childPtr->next;

  if (oldParent && oldParent != nodePtr) {
    TclDOM_PostMutationEvent(interp, 
			     tDocPtr,
			     TclDOM_libxml2_CreateObjFromNode(interp, childPtr), 
			     TCLDOM_EVENT_DOMNODEREMOVED, NULL,
			     Tcl_NewIntObj(1), Tcl_NewIntObj(0), 
			     TclDOM_libxml2_CreateObjFromNode(interp, oldParent), 
			     NULL, NULL, NULL, NULL);
  }

  Tcl_MutexLock(&libxml2);

  /* Although xmlAddChild claims to release the child from its previous context,
   * that doesn't appear to actually happen.
   */
  xmlUnlinkNode(childPtr);
  if (xmlAddChild(nodePtr, childPtr) == NULL) {
    if (oldSibling) {
      xmlAddPrevSibling(oldSibling, childPtr);
    } else {
      xmlAddChild(oldParent, childPtr);
    }

    Tcl_SetResult(interp, "unable to insert node", NULL);
    Tcl_MutexUnlock(&libxml2);
    return TCL_ERROR;
  }

  Tcl_MutexUnlock(&libxml2);

  PostMutationEvents(interp, tDocPtr, nodePtr, childPtr, childPtr, oldParent, childPtr->parent);

  Tcl_SetObjResult(interp, TclDOM_libxml2_CreateObjFromNode(interp, childPtr));

  return TCL_OK;
}

int
TclDOM_NodeInsertBefore(interp, refPtr, newPtr)
     Tcl_Interp *interp;
     xmlNodePtr refPtr;
     xmlNodePtr newPtr;
{
  TclXML_libxml2_Document *tDocPtr;
  xmlNodePtr oldParent;

  if (TclXML_libxml2_GetTclDocFromNode(interp, refPtr, &tDocPtr) != TCL_OK) {
    return TCL_ERROR;
  }

  oldParent = newPtr->parent;
  if (oldParent != refPtr->parent) {
    TclDOM_PostMutationEvent(interp, 
			     tDocPtr,
			     TclDOM_libxml2_CreateObjFromNode(interp, refPtr), 
			     TCLDOM_EVENT_DOMNODEREMOVED, NULL,
			     Tcl_NewIntObj(1), Tcl_NewIntObj(0), 
			     TclDOM_libxml2_CreateObjFromNode(interp, newPtr->parent), 
			     NULL, NULL, NULL, NULL);
  }

  Tcl_MutexLock(&libxml2);

  if (xmlAddPrevSibling(refPtr, newPtr) == NULL) {
    Tcl_SetResult(interp, "unable to insert node", NULL);
    Tcl_MutexUnlock(&libxml2);
    return TCL_ERROR;
  }

  Tcl_MutexUnlock(&libxml2);

  PostMutationEvents(interp, tDocPtr, refPtr, refPtr, newPtr, oldParent, refPtr->parent);

  return TCL_OK;
}

void PostMutationEvents(interp, tDocPtr, nodePtr, refPtr, newPtr, oldParent, newParent)
     Tcl_Interp *interp;
     TclXML_libxml2_Document *tDocPtr;
     xmlNodePtr nodePtr;
     xmlNodePtr refPtr;
     xmlNodePtr newPtr;
     xmlNodePtr oldParent;
     xmlNodePtr newParent;
{
  /* If parent has changed, notify old parent */
  if (oldParent != NULL && oldParent != newParent) {
    TclDOM_PostMutationEvent(interp, 
			     tDocPtr, 
			     TclDOM_libxml2_CreateObjFromNode(interp, oldParent), 
			     TCLDOM_EVENT_DOMSUBTREEMODIFIED, NULL,
			     Tcl_NewIntObj(1), Tcl_NewIntObj(0), 
			     NULL, NULL, NULL, NULL, NULL);
  }
  /* Notify new parent */
  if (newParent != NULL) {
    TclDOM_PostMutationEvent(interp, 
			   tDocPtr, 
			   TclDOM_libxml2_CreateObjFromNode(interp, newParent), 
			   TCLDOM_EVENT_DOMSUBTREEMODIFIED, NULL,
			   Tcl_NewIntObj(1), Tcl_NewIntObj(0), 
			   NULL, NULL, NULL, NULL, NULL);
  }

  /* Inserted event */
  if (newPtr != NULL) {
    TclDOM_PostMutationEvent(interp, 
			   tDocPtr, 
			   TclDOM_libxml2_CreateObjFromNode(interp, newPtr), 
			   TCLDOM_EVENT_DOMNODEINSERTED, NULL,
			   Tcl_NewIntObj(1), Tcl_NewIntObj(0), 
			   NULL, NULL, NULL, NULL, NULL);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_AddEventListener --
 *
 *  Register an event listener.
 *
 * Results:
 *  Success code.
 *
 * Side effects:
 *  Event listener stored.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_AddEventListener(interp, tDocPtr, tokenPtr, type, typeObjPtr, listenerPtr, capturer)
    Tcl_Interp *interp;
    TclXML_libxml2_Document *tDocPtr;
    void *tokenPtr; /* xmlNodePtr or xmlDocPtr */
    enum TclDOM_EventTypes type;
    Tcl_Obj *typeObjPtr;
    Tcl_Obj *listenerPtr;
    int capturer;
{
  TclDOM_libxml2_Document *domDocPtr;
  Tcl_HashTable *tablePtr;
  Tcl_HashEntry *entryPtr;
  int new;

  domDocPtr = GetDOMDocument(interp, tDocPtr);
  if (domDocPtr == NULL) {
    Tcl_SetResult(interp, "internal error", NULL);
    return TCL_ERROR;
  }

  if (capturer) {
    tablePtr = domDocPtr->captureListeners;
  } else {
    tablePtr = domDocPtr->bubbleListeners;
  }

  entryPtr = Tcl_CreateHashEntry(tablePtr, tokenPtr, &new);
  if (new) {
    tablePtr = (Tcl_HashTable *) Tcl_Alloc(sizeof(Tcl_HashTable));
    Tcl_InitHashTable(tablePtr, TCL_STRING_KEYS);
    Tcl_SetHashValue(entryPtr, (char *) tablePtr);
  } else {
    tablePtr = (Tcl_HashTable *) Tcl_GetHashValue(entryPtr);
  }

  if (type == TCLDOM_EVENT_USERDEFINED) {
    entryPtr = Tcl_CreateHashEntry(tablePtr, Tcl_GetStringFromObj(typeObjPtr, NULL), &new);
  } else {
    entryPtr = Tcl_CreateHashEntry(tablePtr, TclDOM_EventTypes[type], &new);
  }
  if (new) {
    Tcl_Obj *listPtr = Tcl_NewListObj(0, NULL);

    Tcl_IncrRefCount(listenerPtr);
    Tcl_IncrRefCount(listPtr);
    Tcl_ListObjAppendElement(interp, listPtr, listenerPtr);
    Tcl_SetHashValue(entryPtr, (char *) listPtr);

  } else {
    Tcl_Obj *listPtr = (Tcl_Obj *) Tcl_GetHashValue(entryPtr);
    Tcl_Obj *curPtr;
    int idx, len, listenerLen, len2, listlen;
    char *listenerBuf, *buf2;

    if (Tcl_ListObjLength(interp, listPtr, &len) != TCL_OK) {
      Tcl_SetResult(interp, "internal error - bad list", NULL);
      return TCL_ERROR;
    }
    listenerBuf = Tcl_GetStringFromObj(listenerPtr, &listenerLen);

    new = 0;
    for (idx = 0; idx < len; idx++) {
      Tcl_ListObjIndex(interp, listPtr, idx, &curPtr);
      buf2 = Tcl_GetStringFromObj(curPtr, &len2);

      if (listenerLen == len2 && 
          !strncmp(listenerBuf, buf2, listenerLen)) {
        new = 1;
        break;
      }
    }

    if (Tcl_ListObjLength(interp, listPtr, &listlen) != TCL_OK) {
      return TCL_ERROR;
    }

    Tcl_ListObjReplace(interp, listPtr, idx, new, 1, &listenerPtr);

  }

  /*
   * Performance optimization:
   * Keep track of which event types have listeners registered.
   * If there are no listeners for an event type, then there's
   * no point in dispatching that type of event.
   * NB. This does not keep track of user-defined events types.
   */

  if (type != TCLDOM_EVENT_USERDEFINED) {
    domDocPtr->listening[type]++;
  } /* else this is a user-defined event type - it won't be tracked */

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_GetEventListener --
 *
 *  Find the listener registered for an event type.
 *
 * Results:
 *  Event listener returned.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

Tcl_Obj *
TclDOM_GetEventListener(interp,tDocPtr, tokenPtr, type, typeObjPtr, capturer)
  Tcl_Interp *interp;
  TclXML_libxml2_Document *tDocPtr;
  void *tokenPtr;
  enum TclDOM_EventTypes type;
  Tcl_Obj *typeObjPtr;
  int capturer;
{
  TclDOM_libxml2_Document *domDocPtr;
  Tcl_HashTable *tablePtr;
  Tcl_HashEntry *entryPtr;
  
  domDocPtr = GetDOMDocument(interp, tDocPtr);
  if (domDocPtr == NULL) {
    Tcl_SetResult(interp, "internal error", NULL);
    return NULL;
  }
  
  if (capturer) {
    tablePtr = domDocPtr->captureListeners;
  } else {
    tablePtr = domDocPtr->bubbleListeners;
  }
  
  entryPtr = Tcl_FindHashEntry(tablePtr, tokenPtr);
  if (entryPtr) {
    tablePtr = (Tcl_HashTable *) Tcl_GetHashValue(entryPtr);
	
    if (type == TCLDOM_EVENT_USERDEFINED) {
      entryPtr = Tcl_FindHashEntry(tablePtr, Tcl_GetStringFromObj(typeObjPtr, NULL));
    } else {
      entryPtr = Tcl_FindHashEntry(tablePtr, TclDOM_EventTypes[type]);
    }
    if (entryPtr) {
      return (Tcl_Obj *) Tcl_GetHashValue(entryPtr);
	}
  }

  return Tcl_NewObj();
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_RemoveEventListener --
 *
 *  Deregister an event listener.
 *
 * Results:
 *  Success code.
 *
 * Side effects:
 *  May free Tcl objects.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_RemoveEventListener(interp, tDocPtr, tokenPtr, type, typeObjPtr, listenerPtr, capturer)
    Tcl_Interp *interp;
    TclXML_libxml2_Document *tDocPtr;
    void *tokenPtr;
    enum TclDOM_EventTypes type;
    Tcl_Obj *typeObjPtr;
    Tcl_Obj *listenerPtr;
    int capturer;
{
  TclDOM_libxml2_Document *domDocPtr;
  Tcl_HashTable *tablePtr;
  Tcl_HashEntry *entryPtr;

  domDocPtr = GetDOMDocument(interp, tDocPtr);
  if (domDocPtr == NULL) {
    Tcl_SetResult(interp, "internal error", NULL);
    return TCL_ERROR;
  }

  if (capturer) {
    tablePtr = domDocPtr->captureListeners;
  } else {
    tablePtr = domDocPtr->bubbleListeners;
  }

  entryPtr = Tcl_FindHashEntry(tablePtr, tokenPtr);
  if (entryPtr) {
    tablePtr = (Tcl_HashTable *) Tcl_GetHashValue(entryPtr);

    if (type == TCLDOM_EVENT_USERDEFINED) {
      entryPtr = Tcl_FindHashEntry(tablePtr, Tcl_GetStringFromObj(typeObjPtr, NULL));
    } else {
      entryPtr = Tcl_FindHashEntry(tablePtr, TclDOM_EventTypes[type]);
    }
    if (entryPtr) {
      Tcl_Obj *listPtr = (Tcl_Obj *) Tcl_GetHashValue(entryPtr);
      Tcl_Obj *curPtr;
      int idx, listenerLen, len, len2, found;
      char *listenerBuf, *buf2;

      if (Tcl_ListObjLength(interp, listPtr, &len) != TCL_OK) {
        Tcl_SetResult(interp, "internal error - bad list", NULL);
        return TCL_ERROR;
      }
      listenerBuf = Tcl_GetStringFromObj(listenerPtr, &listenerLen);
	  found = 0;
      for (idx = 0; idx < len; idx++) {
        Tcl_ListObjIndex(interp, listPtr, idx, &curPtr);
        buf2 = Tcl_GetStringFromObj(curPtr, &len2);
        if (listenerLen == len2 && 
            !strncmp(listenerBuf, buf2, listenerLen)) {
          found = 1;
		  break;
        }
      }

      if (!found) {
        Tcl_SetResult(interp, "listener not found", NULL);
        return TCL_ERROR;
      } else {
        Tcl_ListObjReplace(interp, listPtr, idx, 1, 0, NULL);

        /*
         * Keep track of which event types have listeners registered.
         */

        if (type != TCLDOM_EVENT_USERDEFINED) {
		  domDocPtr->listening[type]--;
		} /* else user-defined event type - not being tracked */
	  }
	} else {
	  Tcl_SetResult(interp, "no listeners registered", NULL);
	  return TCL_ERROR;
	}
  } else {
	Tcl_SetResult(interp, "no listeners registered", NULL);
	return TCL_ERROR;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * HasListener --
 *
 *  Check whether an event listener is registered for an event type.
 *
 * Results:
 *  Returns boolean.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

int
HasListener(interp, tDocPtr, eventType)
     Tcl_Interp *interp;
     TclXML_libxml2_Document *tDocPtr;
     enum TclDOM_EventTypes eventType;
{
  TclDOM_libxml2_Document *domDocPtr = GetDOMDocument(interp, tDocPtr);

  if (domDocPtr == NULL) {
    return 0;
  }

  if (eventType == TCLDOM_EVENT_USERDEFINED) {
	/*
	 * We don't know whether there is a listener or not,
	 * so play it safe.
	 */
    return 1;
  }

  if (domDocPtr->listening[eventType] > 0) {
    return 1;
  }

  return 0;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_DispatchEvent --
 *
 *  Dispatch an event object.
 *
 * Results:
 *  Event propagates through the DOM tree.
 *
 * Side effects:
 *  Depends on event listeners.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_DispatchEvent(interp, nodeObjPtr, eventObjPtr, eventPtr)
    Tcl_Interp *interp;
    Tcl_Obj *nodeObjPtr;
    Tcl_Obj *eventObjPtr;
    TclDOM_libxml2_Event *eventPtr;
{
  xmlNodePtr nodePtr;
  xmlDocPtr docPtr;
  TclXML_libxml2_Document *tDocPtr;
  TclDOM_libxml2_Document *domDocPtr;
  char *phase;
  Tcl_Obj *docObjPtr, *pathPtr = NULL;
  int idx, len, cancelable;
  void *tokenPtr;

  if (TclDOM_libxml2_GetNodeFromObj(interp, nodeObjPtr, &nodePtr) != TCL_OK) {
    if (TclXML_libxml2_GetTclDocFromObj(interp, nodeObjPtr, &tDocPtr) != TCL_OK) {
      Tcl_SetResult(interp, "unrecognised token", NULL);
      return TCL_ERROR;
    } else {
      docObjPtr = nodeObjPtr;
	  docPtr = tDocPtr->docPtr;
      nodeObjPtr = NULL;
      nodePtr = NULL;
	  tokenPtr = (void *) docPtr;
    }
  } else {
    docPtr = nodePtr->doc;
    docObjPtr = TclXML_libxml2_CreateObjFromDoc(docPtr);
    if (TclXML_libxml2_GetTclDocFromObj(interp, docObjPtr, &tDocPtr) != TCL_OK) {
      Tcl_SetResult(interp, "unknown document", NULL);
      return TCL_ERROR;
    }
	tokenPtr = (void *) nodePtr;
  }
  Tcl_ResetResult(interp);

  /*
   * Performance optimization:
   * If there are no listeners registered for this event type,
   * then there is no point in propagating the event.
   */
  if (!HasListener(interp, tDocPtr, eventPtr->type)) {
    return TCL_OK;
  }

  domDocPtr = GetDOMDocument(interp, tDocPtr);
  if (domDocPtr == NULL) {
    Tcl_SetResult(interp, "internal error", NULL);
    return TCL_ERROR;
  }

  phase = Tcl_GetStringFromObj(eventPtr->eventPhase, &len);

  if (!len) {
    /*
     * This is the initial dispatch of the event.
     * First trigger any capturing event listeners
     * Starting from the root, proceed downward
     */

    Tcl_SetStringObj(eventPtr->eventPhase, "capturing_phase", -1);
    eventPtr->target = nodeObjPtr;
	Tcl_IncrRefCount(nodeObjPtr);

    if (nodePtr) {
      pathPtr = GetPath(interp, nodePtr);
    } else {
      pathPtr = Tcl_NewObj();
    }
	if (eventPtr->currentNode) {
	  Tcl_DecrRefCount(eventPtr->currentNode);
	}
	eventPtr->currentNode = docObjPtr;
	Tcl_IncrRefCount(docObjPtr);
    if (TriggerEventListeners(interp, domDocPtr->captureListeners, (void *) docPtr, eventObjPtr, eventPtr) != TCL_OK) {
      Tcl_DecrRefCount(pathPtr);
      return TCL_ERROR;
    }

    if (Tcl_GetBooleanFromObj(interp, eventPtr->cancelable, &cancelable) != TCL_OK) {
      Tcl_DecrRefCount(pathPtr);
      return TCL_ERROR;
    }
    if (cancelable && eventPtr->stopPropagation) {
      goto stop_propagation;
    }

    Tcl_ListObjLength(interp, pathPtr, &len);
    Tcl_ListObjReplace(interp, pathPtr, len - 1, 1, 0, NULL);
    Tcl_ListObjReplace(interp, pathPtr, 0, 1, 0, NULL);
    Tcl_ListObjLength(interp, pathPtr, &len);
    for (idx = 0; idx < len; idx++) {
      Tcl_Obj *ancestorObjPtr;
      xmlNodePtr ancestorPtr;

      Tcl_ListObjIndex(interp, pathPtr, idx, &ancestorObjPtr);
	  if (eventPtr->currentNode) {
		Tcl_DecrRefCount(eventPtr->currentNode);
	  }
      eventPtr->currentNode = ancestorObjPtr;
      Tcl_IncrRefCount(ancestorObjPtr);
      if (TclDOM_libxml2_GetNodeFromObj(interp, ancestorObjPtr, &ancestorPtr) != TCL_OK) {
        Tcl_SetResult(interp, "cannot find ancestor node \"", NULL);
        Tcl_AppendResult(interp, Tcl_GetStringFromObj(ancestorObjPtr, NULL), "\"", NULL);
        return TCL_ERROR;
      }

      if (TriggerEventListeners(interp, domDocPtr->captureListeners, (void *) ancestorPtr, eventObjPtr, eventPtr) != TCL_OK) {
        return TCL_ERROR;
      }

      /*
       * A listener may stop propagation,
       * but we check here to let all of the
       * listeners at that level complete.
       */

      if (Tcl_GetBooleanFromObj(interp, eventPtr->cancelable, &cancelable) != TCL_OK) {
        Tcl_DecrRefCount(ancestorObjPtr);
        return TCL_ERROR;
      }
      if (cancelable && eventPtr->stopPropagation) {
        Tcl_DecrRefCount(ancestorObjPtr);
        goto stop_propagation;
      }

      Tcl_DecrRefCount(ancestorObjPtr);

    }

    /* Prepare for the next phase */

    if (Tcl_IsShared(eventPtr->eventPhase)) {
      Tcl_DecrRefCount(eventPtr->eventPhase);
      eventPtr->eventPhase = Tcl_NewStringObj("at_target", -1);
      Tcl_IncrRefCount(eventPtr->eventPhase);
    } else {
      Tcl_SetStringObj(eventPtr->eventPhase, "at_target", -1);
    }
  }

  if (eventPtr->currentNode) {
	Tcl_DecrRefCount(eventPtr->currentNode);
  }
  if (nodePtr) {
    eventPtr->currentNode = nodeObjPtr;
    tokenPtr = (void *) nodePtr;
  } else {
    eventPtr->currentNode = docObjPtr;
    tokenPtr = (void *) docPtr;
  }
  Tcl_IncrRefCount(eventPtr->currentNode);

  if (TriggerEventListeners(interp, domDocPtr->bubbleListeners, tokenPtr, eventObjPtr, eventPtr) != TCL_OK) {
    return TCL_ERROR;
  }

  if (Tcl_IsShared(eventPtr->eventPhase)) {
    Tcl_DecrRefCount(eventPtr->eventPhase);
    eventPtr->eventPhase = Tcl_NewStringObj("bubbling_phase", -1);
    Tcl_IncrRefCount(eventPtr->eventPhase);
  } else {
    Tcl_SetStringObj(eventPtr->eventPhase, "bubbling_phase", -1);
  }

  if (Tcl_GetBooleanFromObj(interp, eventPtr->cancelable, &cancelable) != TCL_OK) {
    return TCL_ERROR;
  }
  if (cancelable && eventPtr->stopPropagation) {
    /* Do no more */
  } else if (nodePtr && nodePtr->parent && nodePtr->parent != (xmlNodePtr) nodePtr->doc) {
	Tcl_Obj *objPtr;

	objPtr = TclDOM_libxml2_CreateObjFromNode(interp, nodePtr->parent);
	if (objPtr == NULL) {
	  return TCL_ERROR;
	}
    return TclDOM_DispatchEvent(interp, 
				objPtr, 
				eventObjPtr, eventPtr);
  } else if (nodePtr && nodePtr->parent) {
	Tcl_Obj *objPtr;

	objPtr = TclXML_libxml2_CreateObjFromDoc(nodePtr->doc);
	if (objPtr == NULL) {
	  return TCL_ERROR;
	}
    return TclDOM_DispatchEvent(interp, 
				objPtr, 
				eventObjPtr, eventPtr);
  }

stop_propagation:
  eventPtr->dispatched = 1;

  if (pathPtr) {
    Tcl_DecrRefCount(pathPtr);
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMElementCommand --
 *
 *  Implements dom::libxml2::element command.
 *
 * Results:
 *  Depends on method.
 *
 * Side effects:
 *  Depends on method.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOMElementCommand (clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  int method, optobjc;
  Tcl_Obj *CONST *optobjv;
  xmlNodePtr nodePtr;
  TclXML_libxml2_Document *tDocPtr;
  char *value;
  xmlAttrPtr attrPtr;
  xmlNsPtr nsPtr;

  if (clientData == NULL) {
    if (objc < 3) {
      Tcl_WrongNumArgs(interp, 1, objv, "method ?args...?");
      return TCL_ERROR;
    }

    if (TclDOM_libxml2_GetNodeFromObj(interp, objv[2], &nodePtr) != TCL_OK) {
      return TCL_ERROR;
    }

    optobjv = objv + 3;
    optobjc = objc - 3;

  } else {

    nodePtr = (xmlNodePtr) clientData;

    optobjv = objv + 2;
    optobjc = objc - 2;
  }

  if (Tcl_GetIndexFromObj(interp, objv[1], TclDOM_ElementCommandMethods,
			  "method", 0, &method) != TCL_OK) {
    return TCL_ERROR;
  }

  /* Should check that the node is of element type */

  Tcl_ResetResult(interp);

  switch ((enum TclDOM_ElementCommandMethods) method) {

  case TCLDOM_ELEMENT_CGET:
    if (optobjc != 1) {
      Tcl_WrongNumArgs(interp, 1, objv, "option");
      return TCL_ERROR;
    }

    return ElementCget(interp, nodePtr, optobjv[0]);

    break;

  case TCLDOM_ELEMENT_CONFIGURE:

    if (optobjc == 1) {
      return ElementCget(interp, nodePtr, optobjv[0]);
    } else {
      Tcl_AppendResult(interp, "option \"", Tcl_GetStringFromObj(optobjv[0], NULL), "\" cannot be modified", NULL);
      return TCL_ERROR;
    }

    break;

  case TCLDOM_ELEMENT_GETATTRIBUTE:
    if (optobjc != 1) {
      Tcl_WrongNumArgs(interp, 1, objv, "attr");
      return TCL_ERROR;
    }

    Tcl_MutexLock(&libxml2);
    value = (char *) xmlGetProp(nodePtr, (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL));
    Tcl_MutexUnlock(&libxml2);

    if (value) {
      Tcl_SetObjResult(interp, Tcl_NewStringObj(value, -1));
    }

    break;

  case TCLDOM_ELEMENT_GETATTRIBUTENS:
    if (optobjc != 2) {
      Tcl_WrongNumArgs(interp, 1, objv, "ns attr");
      return TCL_ERROR;
    }

    Tcl_MutexLock(&libxml2);
    value = (char *) xmlGetNsProp(nodePtr,
			 (const xmlChar *) Tcl_GetStringFromObj(optobjv[1], NULL),
			 (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL));
    Tcl_MutexUnlock(&libxml2);

    if (value) {
      Tcl_SetObjResult(interp, Tcl_NewStringObj(value, -1));
    }

    break;

  case TCLDOM_ELEMENT_SETATTRIBUTE:
    if (optobjc != 2) {
      Tcl_WrongNumArgs(interp, 1, objv, "attr value");
      return TCL_ERROR;
    }

    if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
      return TCL_ERROR;
    }

    Tcl_MutexLock(&libxml2);
    value = (char *) xmlGetProp(nodePtr, (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL));
    attrPtr = xmlSetProp(nodePtr,
			 (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL),
			 (const xmlChar *) Tcl_GetStringFromObj(optobjv[1], NULL));
    Tcl_MutexUnlock(&libxml2);

    if (!attrPtr) {
      Tcl_SetResult(interp, "unable to set attribute", NULL);
      return TCL_ERROR;
    }

    TclDOM_PostMutationEvent(interp, tDocPtr, objv[2], TCLDOM_EVENT_DOMATTRMODIFIED, NULL, Tcl_NewIntObj(1), Tcl_NewIntObj(0), NULL, Tcl_NewStringObj(value, -1), optobjv[1], optobjv[0], value == NULL? Tcl_NewStringObj("modification", -1) : Tcl_NewStringObj("addition", -1));

    Tcl_SetObjResult(interp, optobjv[1]);

    break;

  case TCLDOM_ELEMENT_SETATTRIBUTENS:
    if (optobjc != 3) {
      Tcl_WrongNumArgs(interp, 1, objv, "ns attr value");
      return TCL_ERROR;
    }

    if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
      return TCL_ERROR;
    }

    Tcl_MutexLock(&libxml2);

    nsPtr = xmlSearchNsByHref(nodePtr->doc, nodePtr, (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL));
    if (!nsPtr) {
      Tcl_SetResult(interp, "no XML Namespace declaration for namespace", NULL);
      Tcl_MutexUnlock(&libxml2);
      return TCL_ERROR;
    }

    value = (char *) xmlGetNsProp(nodePtr,
			 (const xmlChar *) Tcl_GetStringFromObj(optobjv[1], NULL),
			 (const xmlChar *) Tcl_GetStringFromObj(optobjv[2], NULL));
    attrPtr = xmlSetNsProp(nodePtr,
			   nsPtr,
			   (const xmlChar *) Tcl_GetStringFromObj(optobjv[1], NULL),
			   (const xmlChar *) Tcl_GetStringFromObj(optobjv[3], NULL));

    Tcl_MutexUnlock(&libxml2);

    if (!attrPtr) {
      Tcl_SetResult(interp, "unable to set attribute", NULL);
      return TCL_ERROR;
    }

    TclDOM_PostMutationEvent(interp, tDocPtr, objv[2], TCLDOM_EVENT_DOMATTRMODIFIED, NULL, Tcl_NewIntObj(1), Tcl_NewIntObj(0), NULL, Tcl_NewStringObj(value, -1), optobjv[3], optobjv[2], value == NULL? Tcl_NewStringObj("modification", -1) : Tcl_NewStringObj("addition", -1));

    break;

  case TCLDOM_ELEMENT_REMOVEATTRIBUTE:

    if (optobjc != 1) {
      Tcl_WrongNumArgs(interp, 1, objv, "attr");
      return TCL_ERROR;
    }

    if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
      return TCL_ERROR;
    }

    /* It doesn't matter if this fails due to a non-existant attribute */
    Tcl_MutexLock(&libxml2);
    xmlUnsetProp(nodePtr, (const xmlChar *) Tcl_GetStringFromObj(optobjv[0], NULL));
    Tcl_MutexUnlock(&libxml2);

    TclDOM_PostMutationEvent(interp, tDocPtr, objv[2], TCLDOM_EVENT_DOMATTRMODIFIED, NULL, Tcl_NewIntObj(1), Tcl_NewIntObj(0), NULL, NULL, NULL, optobjv[2], Tcl_NewStringObj("removed", -1));

    break;

  default:
    Tcl_SetResult(interp, "method \"", NULL);
    Tcl_AppendResult(interp, Tcl_GetStringFromObj(objv[1], NULL), "\" not yet implemented", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

int
ElementCget(interp, nodePtr, optObj)
     Tcl_Interp *interp;
     xmlNodePtr nodePtr;
     Tcl_Obj *CONST optObj;
{
  int option;

  if (Tcl_GetIndexFromObj(interp, optObj, TclDOM_ElementCommandOptions,
			  "option", 0, &option) != TCL_OK) {
    return TCL_ERROR;
  }

  switch ((enum TclDOM_ElementCommandOptions) option) {
  case TCLDOM_ELEMENT_TAGNAME:
    Tcl_SetObjResult(interp, Tcl_NewStringObj((CONST char *) nodePtr->name, -1));
    break;

  case TCLDOM_ELEMENT_EMPTY:
    Tcl_SetObjResult(interp, Tcl_NewBooleanObj(0));
    break;

  default:
    Tcl_SetResult(interp, "unknown option", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_InitEvent --
 *
 *  Initializes an event object.
 *
 * Results:
 *  Tcl_Obj references stored.
 *
 * Side effects:
 *  Tcl_Obj's reference count changed.
 *
 *----------------------------------------------------------------------------
 */

void
TclDOM_InitEvent(eventPtr, type, typeObjPtr, bubblesPtr, cancelablePtr)
    TclDOM_libxml2_Event *eventPtr;
    enum TclDOM_EventTypes type;
    Tcl_Obj *typeObjPtr;
    Tcl_Obj *bubblesPtr;
    Tcl_Obj *cancelablePtr;
{
  if (type != TCLDOM_EVENT_USERDEFINED) {
    if (eventPtr->type != type) {
      if (eventPtr->typeObjPtr) {
	Tcl_DecrRefCount(eventPtr->typeObjPtr);
	eventPtr->typeObjPtr = NULL;
      }
      eventPtr->type = type;
    }
  } else {
    char *oldType, *newType;
    int oldLen, newLen;

    oldType = Tcl_GetStringFromObj(eventPtr->typeObjPtr, &oldLen);
    newType = Tcl_GetStringFromObj(typeObjPtr, &newLen);
    if (oldLen != newLen ||
	strncmp(oldType, newType, oldLen)) {
      Tcl_DecrRefCount(eventPtr->typeObjPtr);
      eventPtr->typeObjPtr = typeObjPtr;
      Tcl_IncrRefCount(typeObjPtr);
      eventPtr->type = TCLDOM_EVENT_USERDEFINED;
    }
  }

  if (bubblesPtr && eventPtr->bubbles != bubblesPtr) {
    Tcl_DecrRefCount(eventPtr->bubbles);
    eventPtr->bubbles = bubblesPtr;
    Tcl_IncrRefCount(eventPtr->bubbles);
  }
  if (cancelablePtr && eventPtr->cancelable != cancelablePtr) {
    Tcl_DecrRefCount(eventPtr->cancelable);
    eventPtr->cancelable = cancelablePtr;
    Tcl_IncrRefCount(eventPtr->cancelable);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_InitUIEvent --
 *
 *  Initializes an event object.
 *
 * Results:
 *  Tcl_Obj references stored.
 *
 * Side effects:
 *  Tcl_Obj's reference count changed.
 *
 *----------------------------------------------------------------------------
 */

void
TclDOM_InitUIEvent(eventPtr, type, typeObjPtr, bubblesPtr, cancelablePtr, viewPtr, detailPtr)
    TclDOM_libxml2_Event *eventPtr;
    enum TclDOM_EventTypes type;
    Tcl_Obj *typeObjPtr;
    Tcl_Obj *bubblesPtr;
    Tcl_Obj *cancelablePtr;
    Tcl_Obj *viewPtr;
    Tcl_Obj *detailPtr;
{
  TclDOM_InitEvent(eventPtr, type, typeObjPtr, bubblesPtr, cancelablePtr);

  if (viewPtr && eventPtr->view != viewPtr) {
    Tcl_DecrRefCount(eventPtr->view);
    eventPtr->view = viewPtr;
    Tcl_IncrRefCount(eventPtr->view);
  }
  if (detailPtr && eventPtr->detail != detailPtr) {
    Tcl_DecrRefCount(eventPtr->detail);
    eventPtr->detail = detailPtr;
    Tcl_IncrRefCount(eventPtr->detail);
  } else if (detailPtr == NULL) {
    Tcl_DecrRefCount(eventPtr->detail);
    eventPtr->detail = Tcl_NewObj();
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_InitMouseEvent --
 *
 *  Initializes an event object.
 *
 * Results:
 *  Tcl_Obj references stored.
 *
 * Side effects:
 *  Tcl_Obj's reference count changed.
 *
 *----------------------------------------------------------------------------
 */

void
TclDOM_InitMouseEvent(eventPtr, type, typeObjPtr, bubblesPtr, cancelablePtr, viewPtr, detailPtr, screenXPtr, screenYPtr, clientXPtr, clientYPtr, ctrlKeyPtr, altKeyPtr, shiftKeyPtr, metaKeyPtr, buttonPtr, relatedNodePtr)
    TclDOM_libxml2_Event *eventPtr;
    enum TclDOM_EventTypes type;
    Tcl_Obj *typeObjPtr;
    Tcl_Obj *bubblesPtr;
    Tcl_Obj *cancelablePtr;
    Tcl_Obj *viewPtr;
    Tcl_Obj *detailPtr;
    Tcl_Obj *screenXPtr;
    Tcl_Obj *screenYPtr;
    Tcl_Obj *clientXPtr;
    Tcl_Obj *clientYPtr;
    Tcl_Obj *ctrlKeyPtr;
    Tcl_Obj *altKeyPtr;
    Tcl_Obj *shiftKeyPtr;
	Tcl_Obj *metaKeyPtr;
	Tcl_Obj *buttonPtr;
    Tcl_Obj *relatedNodePtr;
{
  TclDOM_InitUIEvent(eventPtr, type, typeObjPtr, bubblesPtr, cancelablePtr, viewPtr, detailPtr);

  if (screenXPtr && eventPtr->screenX != screenXPtr) {
    Tcl_DecrRefCount(eventPtr->screenX);
    eventPtr->screenX = screenXPtr;
    Tcl_IncrRefCount(eventPtr->screenX);
  }
  if (screenYPtr && eventPtr->screenY != screenYPtr) {
    Tcl_DecrRefCount(eventPtr->screenY);
    eventPtr->screenY = screenYPtr;
    Tcl_IncrRefCount(eventPtr->screenY);
  }

  if (clientXPtr && eventPtr->clientX != clientXPtr) {
    Tcl_DecrRefCount(eventPtr->clientX);
    eventPtr->clientX = clientXPtr;
    Tcl_IncrRefCount(eventPtr->clientX);
  }
  if (clientYPtr && eventPtr->clientY != clientYPtr) {
    Tcl_DecrRefCount(eventPtr->clientY);
    eventPtr->clientY = clientYPtr;
    Tcl_IncrRefCount(eventPtr->clientY);
  }

  if (ctrlKeyPtr && eventPtr->ctrlKey != ctrlKeyPtr) {
    Tcl_DecrRefCount(eventPtr->ctrlKey);
    eventPtr->ctrlKey = ctrlKeyPtr;
    Tcl_IncrRefCount(eventPtr->ctrlKey);
  }
  if (altKeyPtr && eventPtr->altKey != altKeyPtr) {
    Tcl_DecrRefCount(eventPtr->altKey);
    eventPtr->altKey = altKeyPtr;
    Tcl_IncrRefCount(eventPtr->altKey);
  }
  if (shiftKeyPtr && eventPtr->shiftKey != shiftKeyPtr) {
    Tcl_DecrRefCount(eventPtr->shiftKey);
    eventPtr->shiftKey = shiftKeyPtr;
    Tcl_IncrRefCount(eventPtr->shiftKey);
  }
  if (metaKeyPtr && eventPtr->metaKey != metaKeyPtr) {
    Tcl_DecrRefCount(eventPtr->metaKey);
    eventPtr->metaKey = metaKeyPtr;
    Tcl_IncrRefCount(eventPtr->metaKey);
  }
  if (buttonPtr && eventPtr->button != buttonPtr) {
    Tcl_DecrRefCount(eventPtr->button);
    eventPtr->button = buttonPtr;
    Tcl_IncrRefCount(eventPtr->button);
  }
  
  if (relatedNodePtr && eventPtr->relatedNode != relatedNodePtr) {
    Tcl_DecrRefCount(eventPtr->relatedNode);
    eventPtr->relatedNode = relatedNodePtr;
    Tcl_IncrRefCount(eventPtr->relatedNode);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_InitMutationEvent --
 *
 *  Initializes an event object.
 *
 * Results:
 *  Tcl_Obj references stored.
 *
 * Side effects:
 *  Tcl_Obj's reference count changed.
 *
 *----------------------------------------------------------------------------
 */

void
TclDOM_InitMutationEvent(eventPtr, type, typeObjPtr, bubblesPtr, cancelablePtr, relatedNodePtr, prevValuePtr, newValuePtr, attrNamePtr, attrChangePtr)
    TclDOM_libxml2_Event *eventPtr;
    enum TclDOM_EventTypes type;
    Tcl_Obj *typeObjPtr;
    Tcl_Obj *bubblesPtr;
    Tcl_Obj *cancelablePtr;
    Tcl_Obj *relatedNodePtr;
    Tcl_Obj *prevValuePtr;
    Tcl_Obj *newValuePtr;
    Tcl_Obj *attrNamePtr;
    Tcl_Obj *attrChangePtr;
{
  TclDOM_InitEvent(eventPtr, type, typeObjPtr, bubblesPtr, cancelablePtr);

  if (relatedNodePtr && eventPtr->relatedNode != relatedNodePtr) {
    Tcl_DecrRefCount(eventPtr->relatedNode);
    eventPtr->relatedNode = relatedNodePtr;
    Tcl_IncrRefCount(eventPtr->relatedNode);
  }

  if (prevValuePtr && eventPtr->prevValue != prevValuePtr) {
    Tcl_DecrRefCount(eventPtr->prevValue);
    eventPtr->prevValue = prevValuePtr;
    Tcl_IncrRefCount(eventPtr->prevValue);
  }
  if (newValuePtr && eventPtr->newValue != newValuePtr) {
    Tcl_DecrRefCount(eventPtr->newValue);
    eventPtr->newValue = newValuePtr;
    Tcl_IncrRefCount(eventPtr->newValue);
  }
  if (attrNamePtr && eventPtr->attrName != attrNamePtr) {
    Tcl_DecrRefCount(eventPtr->attrName);
    eventPtr->attrName = attrNamePtr;
    Tcl_IncrRefCount(eventPtr->attrName);
  }
  if (attrChangePtr && eventPtr->attrChange != attrChangePtr) {
    Tcl_DecrRefCount(eventPtr->attrChange);
    eventPtr->attrChange = attrChangePtr;
    Tcl_IncrRefCount(eventPtr->attrChange);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_PostUIEvent --
 *
 *  Post an event and cleanup afterward.
 *
 * Results:
 *  Event created and propagated.
 *
 * Side effects:
 *  Depends on event listeners.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_PostUIEvent(interp, tDocPtr, nodeObjPtr, type, typeObjPtr, bubblesPtr, cancelablePtr, viewPtr, detailPtr)
     Tcl_Interp *interp;
     TclXML_libxml2_Document *tDocPtr;
     Tcl_Obj *nodeObjPtr;
     enum TclDOM_EventTypes type;
     Tcl_Obj *typeObjPtr;
     Tcl_Obj *bubblesPtr;
     Tcl_Obj *cancelablePtr;
     Tcl_Obj *viewPtr;
     Tcl_Obj *detailPtr;
{
  Tcl_Obj *eventObj;
  TclDOM_libxml2_Event *eventPtr = NULL;
  int result;

  /*
   * Performance optimisation: if there are no event listeners for this
   * event type then don't bother creating an event.
   */
  if (!HasListener(interp, tDocPtr, type)) {
    return TCL_OK;
  }

  eventObj = TclDOM_libxml2_NewEventObj(interp, tDocPtr->docPtr, type, typeObjPtr);
  if (eventObj == NULL) {
    Tcl_SetResult(interp, "unable to create event", NULL);
    return TCL_ERROR;
  }

  TclDOM_libxml2_GetEventFromObj(interp, eventObj, &eventPtr);

  TclDOM_InitUIEvent(eventPtr, type, typeObjPtr, bubblesPtr, cancelablePtr, viewPtr, detailPtr);

  Tcl_ResetResult(interp);
  result = TclDOM_DispatchEvent(interp, nodeObjPtr, eventObj, eventPtr);

  TclDOM_libxml2_DestroyNode(interp, eventPtr->tNodePtr);

  return result;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_PostMouseEvent --
 *
 *  Post an event and cleanup afterward.
 *
 * Results:
 *  Event created and propagated.
 *
 * Side effects:
 *  Depends on event listeners.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_PostMouseEvent(interp, tDocPtr, nodeObjPtr, type, typeObjPtr, bubblesPtr, cancelablePtr, relatedNodePtr, viewPtr, detailPtr, screenXPtr, screenYPtr, clientXPtr, clientYPtr, ctrlKeyPtr, altKeyPtr, shiftKeyPtr, metaKeyPtr, buttonPtr)
     Tcl_Interp *interp;
     TclXML_libxml2_Document *tDocPtr;
     Tcl_Obj *nodeObjPtr;
     enum TclDOM_EventTypes type;
     Tcl_Obj *typeObjPtr;
     Tcl_Obj *bubblesPtr;
     Tcl_Obj *cancelablePtr;
     Tcl_Obj *relatedNodePtr;
     Tcl_Obj *viewPtr;
     Tcl_Obj *detailPtr;
     Tcl_Obj *screenXPtr;
     Tcl_Obj *screenYPtr;
     Tcl_Obj *clientXPtr;
     Tcl_Obj *clientYPtr;
     Tcl_Obj *ctrlKeyPtr;
     Tcl_Obj *altKeyPtr;
     Tcl_Obj *shiftKeyPtr;
     Tcl_Obj *metaKeyPtr;
     Tcl_Obj *buttonPtr;
{
  Tcl_Obj *eventObj;
  TclDOM_libxml2_Event *eventPtr = NULL;
  int result;

  /*
   * Performance optimisation: if there are no event listeners for this
   * event type then don't bother creating an event.
   */
  if (!HasListener(interp, tDocPtr, type)) {
    return TCL_OK;
  }

  eventObj = TclDOM_libxml2_NewEventObj(interp, tDocPtr->docPtr, type, typeObjPtr);
  if (eventObj == NULL) {
    Tcl_SetResult(interp, "unable to create event", NULL);
    return TCL_ERROR;
  }

  TclDOM_libxml2_GetEventFromObj(interp, eventObj, &eventPtr);

  TclDOM_InitMouseEvent(eventPtr, type, typeObjPtr, bubblesPtr, cancelablePtr, 
						viewPtr, detailPtr, 
						screenXPtr, screenYPtr, clientXPtr, clientYPtr, 
						ctrlKeyPtr, altKeyPtr, shiftKeyPtr, metaKeyPtr, 
						buttonPtr, relatedNodePtr);

  Tcl_ResetResult(interp);
  result = TclDOM_DispatchEvent(interp, nodeObjPtr, eventObj, eventPtr);

  TclDOM_libxml2_DestroyNode(interp, eventPtr->tNodePtr);

  return result;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_PostMutationEvent --
 *
 *  Post an event and cleanup afterward.
 *
 * Results:
 *  Event created and propagated.
 *
 * Side effects:
 *  Depends on event listeners.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_PostMutationEvent(interp, tDocPtr, nodeObjPtr, type, typeObjPtr, bubblesPtr, cancelablePtr, relatedNodePtr, prevValuePtr, newValuePtr, attrNamePtr, attrChangePtr)
     Tcl_Interp *interp;
     TclXML_libxml2_Document *tDocPtr;
     Tcl_Obj *nodeObjPtr;
     enum TclDOM_EventTypes type;
     Tcl_Obj *typeObjPtr;
     Tcl_Obj *bubblesPtr;
     Tcl_Obj *cancelablePtr;
     Tcl_Obj *relatedNodePtr;
     Tcl_Obj *prevValuePtr;
     Tcl_Obj *newValuePtr;
     Tcl_Obj *attrNamePtr;
     Tcl_Obj *attrChangePtr;
{
  Tcl_Obj *eventObj;
  TclDOM_libxml2_Event *eventPtr = NULL;
  int result;

  /*
   * Performance optimisation: if there are no event listeners for this
   * event type then don't bother creating an event.
   */
  if (!HasListener(interp, tDocPtr, type)) {
    return TCL_OK;
  }

  eventObj = TclDOM_libxml2_NewEventObj(interp, tDocPtr->docPtr, type, typeObjPtr);
  if (eventObj == NULL) {
    Tcl_SetResult(interp, "unable to create event", NULL);
    return TCL_ERROR;
  }

  TclDOM_libxml2_GetEventFromObj(interp, eventObj, &eventPtr);

  TclDOM_InitMutationEvent(eventPtr, type, typeObjPtr, bubblesPtr, cancelablePtr, relatedNodePtr, prevValuePtr, newValuePtr, attrNamePtr, attrChangePtr);

  Tcl_ResetResult(interp);
  result = TclDOM_DispatchEvent(interp, nodeObjPtr, eventObj, eventPtr);

  TclDOM_libxml2_DestroyNode(interp, eventPtr->tNodePtr);

  return result;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMEventCommand --
 *
 *  Implements dom::libxml2::event command.
 *
 * Results:
 *  Depends on method.
 *
 * Side effects:
 *  Depends on method.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOMEventCommand (clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  int method, option;
  TclXML_libxml2_Document *tDocPtr;
  TclDOM_libxml2_Node *tNodePtr;
  TclDOM_libxml2_Event *eventPtr;
  xmlNodePtr nodePtr;
  enum TclDOM_EventTypes type;
  Tcl_Obj *typeObjPtr = NULL;
  Tcl_Obj *nodeObj;
  Tcl_Obj *bubblesPtr, *cancelablePtr, *viewPtr, *detailPtr;
  Tcl_Obj *relatedNodePtr, *screenXPtr, *screenYPtr, *clientXPtr, *clientYPtr;
  Tcl_Obj *ctrlKeyPtr, *shiftKeyPtr, *metaKeyPtr, *buttonPtr;
  Tcl_Obj *prevValuePtr, *newValuePtr, *attrNamePtr, *attrChangePtr;

  if (objc < 2) {
	if (clientData == NULL) {
	  Tcl_WrongNumArgs(interp, 1, objv, "method token ?args...?");
	} else {
	  Tcl_WrongNumArgs(interp, 1, objv, "method ?args...?");
	}
	return TCL_ERROR;
  }

  if (Tcl_GetIndexFromObj(interp, objv[1], TclDOM_EventCommandMethods,
			  "method", 0, &method) != TCL_OK) {
    return TCL_ERROR;
  }

  switch ((enum TclDOM_EventCommandMethods) method) {

  case TCLDOM_EVENT_CGET:

    if (clientData) {
	  if (objc != 3) {
		Tcl_WrongNumArgs(interp, 1, objv, "cget option");
		return TCL_ERROR;
	  }
      tNodePtr = (TclDOM_libxml2_Node *) clientData;
	  if (tNodePtr->type != TCLDOM_LIBXML2_NODE_EVENT) {
		Tcl_SetResult(interp, "bad event node", NULL);
		return TCL_ERROR;
	  }
      eventPtr = tNodePtr->ptr.eventPtr;
	  objc -= 2;
	  objv += 2;
    } else {
	  if (objc != 4) {
		Tcl_WrongNumArgs(interp, 3, objv, "cget event option");
		return TCL_ERROR;
	  }
      if (TclDOM_libxml2_GetEventFromObj(interp, objv[2], &eventPtr) != TCL_OK) {
		return TCL_ERROR;
      }
	  objc -= 3;
	  objv += 3;
    }

    if (Tcl_GetIndexFromObj(interp, objv[0], TclDOM_EventCommandOptions,
							"option", 0, &option) != TCL_OK) {
      return TCL_ERROR;
    }
	
    switch ((enum TclDOM_EventCommandOptions) option) {
    case TCLDOM_EVENT_ALTKEY:
      Tcl_SetObjResult(interp, eventPtr->altKey);
      break;
    case TCLDOM_EVENT_ATTRNAME:
      Tcl_SetObjResult(interp, eventPtr->attrName);
      break;
    case TCLDOM_EVENT_ATTRCHANGE:
      Tcl_SetObjResult(interp, eventPtr->attrChange);
      break;
    case TCLDOM_EVENT_BUBBLES:
      Tcl_SetObjResult(interp, eventPtr->bubbles);
      break;
    case TCLDOM_EVENT_BUTTON:
      Tcl_SetObjResult(interp, eventPtr->button);
      break;
    case TCLDOM_EVENT_CANCELABLE:
      Tcl_SetObjResult(interp, eventPtr->cancelable);
      break;
    case TCLDOM_EVENT_CLIENTX:
      Tcl_SetObjResult(interp, eventPtr->clientX);
      break;
    case TCLDOM_EVENT_CLIENTY:
      Tcl_SetObjResult(interp, eventPtr->clientY);
      break;
    case TCLDOM_EVENT_CTRLKEY:
      Tcl_SetObjResult(interp, eventPtr->ctrlKey);
      break;
    case TCLDOM_EVENT_CURRENTNODE:
      Tcl_SetObjResult(interp, eventPtr->currentNode);
      break;
    case TCLDOM_EVENT_DETAIL:
      Tcl_SetObjResult(interp, eventPtr->detail);
      break;
    case TCLDOM_EVENT_EVENTPHASE:
      Tcl_SetObjResult(interp, eventPtr->eventPhase);
      break;
    case TCLDOM_EVENT_METAKEY:
      Tcl_SetObjResult(interp, eventPtr->metaKey);
      break;
    case TCLDOM_EVENT_NEWVALUE:
      Tcl_SetObjResult(interp, eventPtr->newValue);
      break;
    case TCLDOM_EVENT_PREVVALUE:
      Tcl_SetObjResult(interp, eventPtr->prevValue);
      break;
    case TCLDOM_EVENT_RELATEDNODE:
      Tcl_SetObjResult(interp, eventPtr->relatedNode);
      break;
    case TCLDOM_EVENT_SCREENX:
      Tcl_SetObjResult(interp, eventPtr->screenX);
      break;
    case TCLDOM_EVENT_SCREENY:
      Tcl_SetObjResult(interp, eventPtr->screenY);
      break;
    case TCLDOM_EVENT_SHIFTKEY:
      Tcl_SetObjResult(interp, eventPtr->shiftKey);
      break;
    case TCLDOM_EVENT_TARGET:
      Tcl_SetObjResult(interp, eventPtr->target);
      break;
    case TCLDOM_EVENT_TIMESTAMP:
      Tcl_SetObjResult(interp, eventPtr->timeStamp);
      break;
    case TCLDOM_EVENT_TYPE:
      if (eventPtr->type == TCLDOM_EVENT_USERDEFINED) {
	Tcl_SetObjResult(interp, eventPtr->typeObjPtr);
      } else {
	Tcl_SetObjResult(interp, Tcl_NewStringObj(TclDOM_EventTypes[eventPtr->type], -1));
      }
      break;
    case TCLDOM_EVENT_VIEW:
      Tcl_SetObjResult(interp, eventPtr->view);
      break;
    default:
      Tcl_SetResult(interp, "unknown option", NULL);
      return TCL_ERROR;
    }

    break;

  case TCLDOM_EVENT_CONFIGURE:
    if (objc < 2) {
      Tcl_WrongNumArgs(interp, 3, objv, "configure option ?value?");
      return TCL_ERROR;
    }

    /* No event options are writable */
    Tcl_SetResult(interp, "option cannot be modified", NULL);
    return TCL_ERROR;

    break;

  case TCLDOM_EVENT_STOPPROPAGATION:

    if (clientData) {
	  if (objc != 2) {
		Tcl_WrongNumArgs(interp, 2, objv, "");
		return TCL_ERROR;
	  }
	  
      tNodePtr = (TclDOM_libxml2_Node *) clientData;
	  if (tNodePtr->type != TCLDOM_LIBXML2_NODE_EVENT) {
		Tcl_SetResult(interp, "bad event node", NULL);
		return TCL_ERROR;
	  }
      eventPtr = tNodePtr->ptr.eventPtr;
    } else {
	  if (objc != 3) {
		Tcl_WrongNumArgs(interp, 3, objv, "");
		return TCL_ERROR;
	  }
	  
      if (TclDOM_libxml2_GetEventFromObj(interp, objv[2], &eventPtr) != TCL_OK) {
		return TCL_ERROR;
      }
    }

    eventPtr->stopPropagation = 1;

    break;

  case TCLDOM_EVENT_PREVENTDEFAULT:

    if (clientData) {
	  if (objc != 2) {
		Tcl_WrongNumArgs(interp, 2, objv, "");
		return TCL_ERROR;
	  }
	  
      tNodePtr = (TclDOM_libxml2_Node *) clientData;
	  if (tNodePtr->type != TCLDOM_LIBXML2_NODE_EVENT) {
		Tcl_SetResult(interp, "bad event node", NULL);
		return TCL_ERROR;
	  }
      eventPtr = tNodePtr->ptr.eventPtr;
    } else {
	  if (objc != 3) {
		Tcl_WrongNumArgs(interp, 3, objv, "");
		return TCL_ERROR;
	  }
	  
      if (TclDOM_libxml2_GetEventFromObj(interp, objv[2], &eventPtr) != TCL_OK) {
		return TCL_ERROR;
      }
    }

    eventPtr->preventDefault = 1;

    break;

  case TCLDOM_EVENT_INITEVENT:

    if (clientData) {
	  if (objc != 5) {
		Tcl_WrongNumArgs(interp, 2, objv, "type bubbles cancelable");
		return TCL_ERROR;
	  }
	  
      tNodePtr = (TclDOM_libxml2_Node *) clientData;
	  if (tNodePtr->type != TCLDOM_LIBXML2_NODE_EVENT) {
		Tcl_SetResult(interp, "bad event node", NULL);
		return TCL_ERROR;
	  }
      eventPtr = tNodePtr->ptr.eventPtr;
      objc -= 2;
	  objv += 2;
    } else {
	  if (objc != 6) {
		Tcl_WrongNumArgs(interp, 3, objv, "type bubbles cancelable");
		return TCL_ERROR;
	  }
	  
      if (TclDOM_libxml2_GetEventFromObj(interp, objv[2], &eventPtr) != TCL_OK) {
		return TCL_ERROR;
      }
      objc -= 3;
	  objv += 3;
    }

    if (eventPtr->dispatched) {
      Tcl_SetResult(interp, "event has been dispatched", NULL);
      return TCL_ERROR;
    }

    if (Tcl_GetIndexFromObj(interp, objv[0], TclDOM_EventTypes,
			    "type", TCL_EXACT, &option) == TCL_OK) {
      type = (enum TclDOM_EventTypes) option;
    } else {
      type = TCLDOM_EVENT_USERDEFINED;
    }
	Tcl_ResetResult(interp);

    TclDOM_InitEvent(eventPtr, type, objv[0], objv[1], objv[2]);

    break;

  case TCLDOM_EVENT_INITUIEVENT:

    if (clientData) {
	  if (objc < 6 || objc > 7) {
		Tcl_WrongNumArgs(interp, 2, objv, "type bubbles cancelable view ?detail?");
		return TCL_ERROR;
	  }
	  
      tNodePtr = (TclDOM_libxml2_Node *) clientData;
	  if (tNodePtr->type != TCLDOM_LIBXML2_NODE_EVENT) {
		Tcl_SetResult(interp, "bad event node", NULL);
		return TCL_ERROR;
	  }
      eventPtr = tNodePtr->ptr.eventPtr;
	  
      objc -= 2;
	  objv += 2;
    } else {
	  if (objc < 7 || objc > 8) {
		Tcl_WrongNumArgs(interp, 3, objv, "type bubbles cancelable view ?detail?");
		return TCL_ERROR;
	  }
	  
      if (TclDOM_libxml2_GetEventFromObj(interp, objv[2], &eventPtr) != TCL_OK) {
		return TCL_ERROR;
      }

      objc -= 3;
	  objv += 3;
    }

    if (eventPtr->dispatched) {
      Tcl_SetResult(interp, "event has been dispatched", NULL);
      return TCL_ERROR;
    }

    if (Tcl_GetIndexFromObj(interp, objv[0], TclDOM_EventTypes,
			    "type", TCL_EXACT, &option) == TCL_OK) {
      type = (enum TclDOM_EventTypes) option;
    } else {
      type = TCLDOM_EVENT_USERDEFINED;
    }
	Tcl_ResetResult(interp);

    TclDOM_InitUIEvent(eventPtr, type, objv[0], objv[1], objv[2], objv[3], objc == 5 ? objv[4] : NULL);

    break;

  case TCLDOM_EVENT_INITMOUSEEVENT:

    if (clientData) {
	  if (objc != 17) {
		Tcl_WrongNumArgs(interp, 2, objv, "type bubbles cancelable view detail screenX screenY clientX clientY ctrlKey altKey shiftKey metaKey button relatedNode");
		return TCL_ERROR;
	  }
	  
      tNodePtr = (TclDOM_libxml2_Node *) clientData;
	  if (tNodePtr->type != TCLDOM_LIBXML2_NODE_EVENT) {
		Tcl_SetResult(interp, "bad event node", NULL);
		return TCL_ERROR;
	  }
      eventPtr = tNodePtr->ptr.eventPtr;
	  
      objc -= 2;
	  objv += 2;
    } else {
	  if (objc != 18) {
		Tcl_WrongNumArgs(interp, 3, objv, "type bubbles cancelable view detail screenX screenY clientX clientY ctrlKey altKey shiftKey metaKey button relatedNode");
		return TCL_ERROR;
	  }
	  
      if (TclDOM_libxml2_GetEventFromObj(interp, objv[2], &eventPtr) != TCL_OK) {
		return TCL_ERROR;
      }

      objc -= 3;
	  objv += 3;
    }

    if (eventPtr->dispatched) {
      Tcl_SetResult(interp, "event has been dispatched", NULL);
      return TCL_ERROR;
    }

    if (Tcl_GetIndexFromObj(interp, objv[0], TclDOM_EventTypes,
			    "type", TCL_EXACT, &option) == TCL_OK) {
      type = (enum TclDOM_EventTypes) option;
    } else {
      type = TCLDOM_EVENT_USERDEFINED;
    }
	Tcl_ResetResult(interp);

    TclDOM_InitMouseEvent(eventPtr, type, objv[0], objv[1], objv[2], objv[3], objv[4], objv[5], objv[6], objv[7], objv[8], objv[9], objv[10], objv[11], objv[12], objv[13], objv[14]);

    break;

  case TCLDOM_EVENT_INITMUTATIONEVENT:

    if (clientData) {
	  if (objc != 10) {
		Tcl_WrongNumArgs(interp, 2, objv, "type bubbles cancelable relatedNode prevValue newValue attrName attrChange");
		return TCL_ERROR;
	  }
	  
      tNodePtr = (TclDOM_libxml2_Node *) clientData;
	  if (tNodePtr->type != TCLDOM_LIBXML2_NODE_EVENT) {
		Tcl_SetResult(interp, "bad event node", NULL);
		return TCL_ERROR;
	  }
      eventPtr = tNodePtr->ptr.eventPtr;
	  
      objc -= 2;
	  objv += 2;
    } else {
	  if (objc != 11) {
		Tcl_WrongNumArgs(interp, 3, objv, "type bubbles cancelable relatedNode prevValue newValue attrName attrChange");
		return TCL_ERROR;
	  }
	  
      if (TclDOM_libxml2_GetEventFromObj(interp, objv[2], &eventPtr) != TCL_OK) {
		return TCL_ERROR;
      }

      objc -= 3;
	  objv += 3;
    }

    if (eventPtr->dispatched) {
      Tcl_SetResult(interp, "event has been dispatched", NULL);
      return TCL_ERROR;
    }

    if (Tcl_GetIndexFromObj(interp, objv[0], TclDOM_EventTypes,
			    "type", TCL_EXACT, &option) == TCL_OK) {
      type = (enum TclDOM_EventTypes) option;
    } else {
      type = TCLDOM_EVENT_USERDEFINED;
    }
	Tcl_ResetResult(interp);

    TclDOM_InitMutationEvent(eventPtr, type, objv[0], objv[1], objv[2], objv[3], objv[4], objv[5], objv[6], objv[7]);

    break;

  case TCLDOM_EVENT_POSTUIEVENT:

	if (clientData) {
	  Tcl_SetResult(interp, "bad method for event", NULL);
	  return TCL_ERROR;
	}
	
    if (objc < 4) {
      Tcl_WrongNumArgs(interp, 1, objv, "postUIEvent node type ?args ...?");
      return TCL_ERROR;
    }

    if (TclDOM_libxml2_GetNodeFromObj(interp, objv[2], &nodePtr) != TCL_OK) {
      return TCL_ERROR;
    }
    nodeObj = objv[2];

    if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
      return TCL_ERROR;
    }

    if (Tcl_GetIndexFromObj(interp, objv[3], TclDOM_EventTypes,
			    "type", TCL_EXACT, &option) == TCL_OK) {
      type = (enum TclDOM_EventTypes) option;
    } else {
      type = TCLDOM_EVENT_USERDEFINED;
    }
    typeObjPtr = objv[3];
	Tcl_ResetResult(interp);

    bubblesPtr = Tcl_GetVar2Ex(interp, "::dom::bubbles", Tcl_GetStringFromObj(objv[3], NULL), TCL_GLOBAL_ONLY|TCL_LEAVE_ERR_MSG);
    if (!bubblesPtr) {
      return TCL_ERROR;
    }
    Tcl_IncrRefCount(bubblesPtr);
    cancelablePtr = Tcl_GetVar2Ex(interp, "::dom::cancelable", Tcl_GetStringFromObj(objv[3], NULL), TCL_GLOBAL_ONLY|TCL_LEAVE_ERR_MSG);
    if (!cancelablePtr) {
      Tcl_DecrRefCount(bubblesPtr);
      return TCL_ERROR;
    }
    Tcl_IncrRefCount(cancelablePtr);

    viewPtr = Tcl_NewObj();
    detailPtr = Tcl_NewObj();

    objc -= 4;
    objv += 4;
    while (objc) {

      if (objc == 1) {
	Tcl_SetResult(interp, "value missing", NULL);
        Tcl_DecrRefCount(bubblesPtr);
        Tcl_DecrRefCount(cancelablePtr);
        Tcl_DecrRefCount(viewPtr);
        Tcl_DecrRefCount(detailPtr);
	return TCL_ERROR;
      }

      if (Tcl_GetIndexFromObj(interp, objv[0], TclDOM_EventCommandOptions,
			      "option", 0, &option) != TCL_OK) {
        Tcl_DecrRefCount(bubblesPtr);
        Tcl_DecrRefCount(cancelablePtr);
        Tcl_DecrRefCount(viewPtr);
        Tcl_DecrRefCount(detailPtr);
	return TCL_ERROR;
      }
      switch ((enum TclDOM_EventCommandOptions) option) {
      case TCLDOM_EVENT_BUBBLES:
	Tcl_DecrRefCount(bubblesPtr);
	bubblesPtr = objv[1];
	Tcl_IncrRefCount(bubblesPtr);
	break;
      case TCLDOM_EVENT_CANCELABLE:
	Tcl_DecrRefCount(cancelablePtr);
	cancelablePtr = objv[1];
	Tcl_IncrRefCount(cancelablePtr);
	break;
      case TCLDOM_EVENT_VIEW:
	Tcl_DecrRefCount(viewPtr);
	viewPtr = objv[1];
	Tcl_IncrRefCount(viewPtr);
	break;
      case TCLDOM_EVENT_DETAIL:
	Tcl_DecrRefCount(detailPtr);
	detailPtr = objv[1];
	Tcl_IncrRefCount(detailPtr);
	break;
      default:
	Tcl_SetResult(interp, "bad option", NULL);
        Tcl_DecrRefCount(bubblesPtr);
        Tcl_DecrRefCount(cancelablePtr);
        Tcl_DecrRefCount(viewPtr);
        Tcl_DecrRefCount(detailPtr);
	return TCL_ERROR;
      }

      objc -= 2;
      objv += 2;
    }

    if (TclDOM_PostUIEvent(interp, tDocPtr, nodeObj, type, typeObjPtr, bubblesPtr, cancelablePtr, viewPtr, detailPtr) != TCL_OK) {
      Tcl_DecrRefCount(bubblesPtr);
      Tcl_DecrRefCount(cancelablePtr);
      Tcl_DecrRefCount(viewPtr);
      Tcl_DecrRefCount(detailPtr);
      return TCL_ERROR;
    }

    break;

  case TCLDOM_EVENT_POSTMOUSEEVENT:

	if (clientData) {
	  Tcl_SetResult(interp, "bad method for event", NULL);
	  return TCL_ERROR;
	}

    if (objc < 4) {
      Tcl_WrongNumArgs(interp, 1, objv, "postMouseEvent node type ?args ...?");
      return TCL_ERROR;
    }

    if (TclDOM_libxml2_GetNodeFromObj(interp, objv[2], &nodePtr) != TCL_OK) {
      return TCL_ERROR;
    }
    nodeObj = objv[2];

    if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
      return TCL_ERROR;
    }

    if (Tcl_GetIndexFromObj(interp, objv[3], TclDOM_EventTypes,
			    "type", TCL_EXACT, &option) == TCL_OK) {
      type = (enum TclDOM_EventTypes) option;
    } else {
      type = TCLDOM_EVENT_USERDEFINED;
    }
    typeObjPtr = objv[3];
	Tcl_ResetResult(interp);

    bubblesPtr = Tcl_GetVar2Ex(interp, "::dom::bubbles", Tcl_GetStringFromObj(objv[3], NULL), TCL_GLOBAL_ONLY|TCL_LEAVE_ERR_MSG);
    if (!bubblesPtr) {
      return TCL_ERROR;
    }
    Tcl_IncrRefCount(bubblesPtr);
    cancelablePtr = Tcl_GetVar2Ex(interp, "::dom::cancelable", Tcl_GetStringFromObj(objv[3], NULL), TCL_GLOBAL_ONLY|TCL_LEAVE_ERR_MSG);
    if (!cancelablePtr) {
      Tcl_DecrRefCount(bubblesPtr);
      return TCL_ERROR;
    }
    Tcl_IncrRefCount(cancelablePtr);

    viewPtr = Tcl_NewObj();
    detailPtr = Tcl_NewObj();
    relatedNodePtr = Tcl_NewObj();
    screenXPtr = Tcl_NewObj();
    screenYPtr = Tcl_NewObj();
    clientXPtr = Tcl_NewObj();
    clientYPtr = Tcl_NewObj();
    ctrlKeyPtr = Tcl_NewObj();
    shiftKeyPtr = Tcl_NewObj();
    metaKeyPtr = Tcl_NewObj();
    buttonPtr = Tcl_NewObj();

    objc -= 4;
    objv += 4;
    while (objc) {

      if (objc == 1) {
	Tcl_SetResult(interp, "value missing", NULL);
        goto mouse_error;
      }

      if (Tcl_GetIndexFromObj(interp, objv[0], TclDOM_EventCommandOptions,
			      "option", 0, &option) != TCL_OK) {
        goto mouse_error;
      }
      switch ((enum TclDOM_EventCommandOptions) option) {
      case TCLDOM_EVENT_BUBBLES:
	Tcl_DecrRefCount(bubblesPtr);
	bubblesPtr = objv[1];
	Tcl_IncrRefCount(bubblesPtr);
	break;
      case TCLDOM_EVENT_CANCELABLE:
	Tcl_DecrRefCount(cancelablePtr);
	cancelablePtr = objv[1];
	Tcl_IncrRefCount(cancelablePtr);
	break;
      case TCLDOM_EVENT_RELATEDNODE:
	Tcl_DecrRefCount(relatedNodePtr);
	relatedNodePtr = objv[1];
	Tcl_IncrRefCount(relatedNodePtr);
	break;
      case TCLDOM_EVENT_VIEW:
	Tcl_DecrRefCount(viewPtr);
	viewPtr = objv[1];
	Tcl_IncrRefCount(viewPtr);
	break;
      case TCLDOM_EVENT_DETAIL:
	Tcl_DecrRefCount(detailPtr);
	detailPtr = objv[1];
	Tcl_IncrRefCount(detailPtr);
	break;
      case TCLDOM_EVENT_SCREENX:
	Tcl_DecrRefCount(screenXPtr);
	screenXPtr = objv[1];
	Tcl_IncrRefCount(screenXPtr);
	break;
      case TCLDOM_EVENT_SCREENY:
	Tcl_DecrRefCount(screenYPtr);
	screenYPtr = objv[1];
	Tcl_IncrRefCount(screenYPtr);
	break;
      case TCLDOM_EVENT_CLIENTX:
	Tcl_DecrRefCount(clientXPtr);
	clientXPtr = objv[1];
	Tcl_IncrRefCount(clientXPtr);
	break;
      case TCLDOM_EVENT_CLIENTY:
	Tcl_DecrRefCount(clientYPtr);
	clientYPtr = objv[1];
	Tcl_IncrRefCount(clientYPtr);
	break;
      case TCLDOM_EVENT_CTRLKEY:
	Tcl_DecrRefCount(ctrlKeyPtr);
	ctrlKeyPtr = objv[1];
	Tcl_IncrRefCount(ctrlKeyPtr);
	break;
      case TCLDOM_EVENT_SHIFTKEY:
	Tcl_DecrRefCount(shiftKeyPtr);
	shiftKeyPtr = objv[1];
	Tcl_IncrRefCount(shiftKeyPtr);
	break;
      case TCLDOM_EVENT_METAKEY:
	Tcl_DecrRefCount(metaKeyPtr);
	metaKeyPtr = objv[1];
	Tcl_IncrRefCount(metaKeyPtr);
	break;
      case TCLDOM_EVENT_BUTTON:
	Tcl_DecrRefCount(buttonPtr);
	buttonPtr = objv[1];
	Tcl_IncrRefCount(buttonPtr);
	break;
      default:
	Tcl_SetResult(interp, "bad option", NULL);
	goto mouse_error;
      }

      objc -= 2;
      objv += 2;
    }

    if (TclDOM_PostMouseEvent(interp, tDocPtr, nodeObj, type, typeObjPtr, bubblesPtr, cancelablePtr, relatedNodePtr, viewPtr, detailPtr, screenXPtr, screenYPtr, clientXPtr, clientYPtr, ctrlKeyPtr, shiftKeyPtr, metaKeyPtr, buttonPtr, relatedNodePtr) != TCL_OK) {
      goto mouse_error;
    }

    break;

mouse_error:
    Tcl_DecrRefCount(bubblesPtr);
    Tcl_DecrRefCount(cancelablePtr);
    Tcl_DecrRefCount(viewPtr);
    Tcl_DecrRefCount(detailPtr);
    Tcl_DecrRefCount(relatedNodePtr);
    Tcl_DecrRefCount(screenXPtr);
    Tcl_DecrRefCount(screenYPtr);
    Tcl_DecrRefCount(clientXPtr);
    Tcl_DecrRefCount(clientYPtr);
    Tcl_DecrRefCount(ctrlKeyPtr);
    Tcl_DecrRefCount(shiftKeyPtr);
    Tcl_DecrRefCount(metaKeyPtr);
    Tcl_DecrRefCount(buttonPtr);

    return TCL_ERROR;

  case TCLDOM_EVENT_POSTMUTATIONEVENT:

	if (clientData) {
	  Tcl_SetResult(interp, "bad method for event", NULL);
	  return TCL_ERROR;
	}
	
    if (objc < 4) {
      Tcl_WrongNumArgs(interp, 1, objv, "postMutationEvent node type ?args ...?");
      return TCL_ERROR;
    }

    if (TclDOM_libxml2_GetNodeFromObj(interp, objv[2], &nodePtr) != TCL_OK) {
      return TCL_ERROR;
    }
    nodeObj = objv[2];

    if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
      return TCL_ERROR;
    }

    if (Tcl_GetIndexFromObj(interp, objv[3], TclDOM_EventTypes,
			    "type", TCL_EXACT, &option) == TCL_OK) {
      type = (enum TclDOM_EventTypes) option;
    } else {
      type = TCLDOM_EVENT_USERDEFINED;
    }
    typeObjPtr = objv[3];
	Tcl_ResetResult(interp);

    bubblesPtr = Tcl_GetVar2Ex(interp, "::dom::bubbles", Tcl_GetStringFromObj(objv[3], NULL), TCL_GLOBAL_ONLY|TCL_LEAVE_ERR_MSG);
    if (!bubblesPtr) {
      return TCL_ERROR;
    }
    Tcl_IncrRefCount(bubblesPtr);
    cancelablePtr = Tcl_GetVar2Ex(interp, "::dom::cancelable", Tcl_GetStringFromObj(objv[3], NULL), TCL_GLOBAL_ONLY|TCL_LEAVE_ERR_MSG);
    if (!cancelablePtr) {
      Tcl_DecrRefCount(bubblesPtr);
      return TCL_ERROR;
    }
    Tcl_IncrRefCount(cancelablePtr);

    relatedNodePtr = Tcl_NewObj();
    prevValuePtr = Tcl_NewObj();
    newValuePtr = Tcl_NewObj();
    attrNamePtr = Tcl_NewObj();
    attrChangePtr = Tcl_NewObj();

    objc -= 4;
    objv += 4;
    while (objc) {

      if (objc == 1) {
	Tcl_SetResult(interp, "value missing", NULL);
        goto mutation_error;
      }

      if (Tcl_GetIndexFromObj(interp, objv[0], TclDOM_EventCommandOptions,
			      "option", 0, &option) != TCL_OK) {
        goto mutation_error;
      }
      switch ((enum TclDOM_EventCommandOptions) option) {
      case TCLDOM_EVENT_BUBBLES:
	Tcl_DecrRefCount(bubblesPtr);
	bubblesPtr = objv[1];
	Tcl_IncrRefCount(bubblesPtr);
	break;
      case TCLDOM_EVENT_CANCELABLE:
	Tcl_DecrRefCount(cancelablePtr);
	cancelablePtr = objv[1];
	Tcl_IncrRefCount(cancelablePtr);
	break;
      case TCLDOM_EVENT_RELATEDNODE:
	Tcl_DecrRefCount(relatedNodePtr);
	relatedNodePtr = objv[1];
	Tcl_IncrRefCount(relatedNodePtr);
	break;
      case TCLDOM_EVENT_PREVVALUE:
	Tcl_DecrRefCount(prevValuePtr);
	prevValuePtr = objv[1];
	Tcl_IncrRefCount(prevValuePtr);
	break;
      case TCLDOM_EVENT_NEWVALUE:
	Tcl_DecrRefCount(newValuePtr);
	newValuePtr = objv[1];
	Tcl_IncrRefCount(newValuePtr);
	break;
      case TCLDOM_EVENT_ATTRNAME:
	Tcl_DecrRefCount(attrNamePtr);
	attrNamePtr = objv[1];
	Tcl_IncrRefCount(attrNamePtr);
	break;
      case TCLDOM_EVENT_ATTRCHANGE:
	Tcl_DecrRefCount(attrChangePtr);
	attrChangePtr = objv[1];
	Tcl_IncrRefCount(attrChangePtr);
	break;
      default:
	Tcl_SetResult(interp, "bad option", NULL);
        goto mutation_error;
      }

      objc -= 2;
      objv += 2;
    }

    if (TclDOM_PostMutationEvent(interp, tDocPtr, nodeObj, type, typeObjPtr, bubblesPtr, cancelablePtr, relatedNodePtr, prevValuePtr, newValuePtr, attrNamePtr, attrChangePtr) != TCL_OK) {
      goto mutation_error;
    }

    break;

mutation_error:
    Tcl_DecrRefCount(bubblesPtr);
    Tcl_DecrRefCount(cancelablePtr);
    Tcl_DecrRefCount(relatedNodePtr);
    Tcl_DecrRefCount(prevValuePtr);
    Tcl_DecrRefCount(newValuePtr);
    Tcl_DecrRefCount(attrNamePtr);
    Tcl_DecrRefCount(attrChangePtr);

    return TCL_ERROR;

  default:

    Tcl_SetResult(interp, "unknown method", NULL);
    return TCL_ERROR;

  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * GetPath --
 *
 *  Constructs a list of ancestor nodes.
 *
 * Results:
 *  Returns list as a Tcl_Obj.
 *
 * Side effects:
 *  Allocates Tcl_Obj structures.
 *
 *----------------------------------------------------------------------------
 */

static Tcl_Obj *
GetPath (interp, nodePtr)
     Tcl_Interp *interp;
     xmlNodePtr nodePtr;
{
  Tcl_Obj *listPtr, *resultPtr;
  Tcl_Obj *objv[2];

  if (nodePtr) {
    if (nodePtr->type == XML_DOCUMENT_NODE) {
	  objv[0] = TclXML_libxml2_CreateObjFromDoc((xmlDocPtr) nodePtr);
	} else {
	  objv[0] = TclDOM_libxml2_CreateObjFromNode(interp, nodePtr);
	}
    objv[1] = NULL;

    listPtr = Tcl_NewListObj(1, objv);
    if (nodePtr->parent) {
      resultPtr = GetPath(interp, nodePtr->parent);
      Tcl_ListObjAppendList(interp, resultPtr, listPtr);
    } else {
      resultPtr = listPtr;
    }
    return resultPtr;
  } else {
    return Tcl_NewObj();
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * Node (and event) Tcl Object management
 *
 *----------------------------------------------------------------------------
 */

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_libxml2_CreateObjFromNode --
 *
 *  Create a Tcl_Obj to wrap a tree node.
 *
 * Results:
 *  Returns Tcl_Obj*.
 *
 * Side effects:
 *  Allocates object.  Creates node command.
 *
 *----------------------------------------------------------------------------
 */

Tcl_Obj *
TclDOM_libxml2_CreateObjFromNode (interp, nodePtr)
     Tcl_Interp *interp;
     xmlNodePtr nodePtr;
{
  TclDOM_libxml2_Node *tNodePtr;
  TclXML_libxml2_Document *tDocPtr;
  TclDOM_libxml2_Document *domDocPtr;
  Tcl_Obj *objPtr;
  Tcl_HashEntry *entry;
  int new;

  if (TclXML_libxml2_GetTclDocFromNode(interp, nodePtr, &tDocPtr) != TCL_OK) {
    Tcl_SetResult(interp, "unable to find document for node", NULL);
    return NULL;
  }
  if ((domDocPtr = GetDOMDocument(interp, tDocPtr)) == NULL) {
    Tcl_SetResult(interp, "internal error", NULL);
    return NULL;
  }

  tNodePtr = (TclDOM_libxml2_Node *) Tcl_Alloc(sizeof(TclDOM_libxml2_Node));
  tNodePtr->ptr.nodePtr = nodePtr;
  tNodePtr->type = TCLDOM_LIBXML2_NODE_NODE;
  tNodePtr->objs = NULL;
  tNodePtr->token = Tcl_Alloc(30);
  sprintf(tNodePtr->token, "::dom::%s::node%d", tDocPtr->token, domDocPtr->nodeCntr++);

  entry = Tcl_CreateHashEntry(domDocPtr->nodes, tNodePtr->token, &new);
  if (!new) {
    Tcl_Free((char *) tNodePtr->token);
    Tcl_Free((char *) tNodePtr);
    Tcl_SetResult(interp, "internal error", NULL);
    return NULL;
  }
  Tcl_SetHashValue(entry, (void *) tNodePtr);

  tNodePtr->cmd = Tcl_CreateObjCommand(interp, tNodePtr->token, TclDOMNodeCommand, (ClientData) tNodePtr, TclDOMNodeCommandDelete);

  objPtr = Tcl_NewObj();
  objPtr->internalRep.otherValuePtr = (VOID *) tNodePtr;
  objPtr->typePtr = &NodeObjType;

  objPtr->bytes = Tcl_Alloc(strlen(tNodePtr->token) + 1);
  strcpy(objPtr->bytes, tNodePtr->token);
  objPtr->length = strlen(objPtr->bytes);

  NodeAddObjRef(tNodePtr, objPtr);

  return objPtr;
}

/*
 *----------------------------------------------------------------------------
 *
 * NodeAddObjRef --
 *
 *  Add an object reference to a node wrapper.
 *
 * Results:
 *  Adds a reference to the Tcl_Obj for the node.
 *
 * Side effects:
 *  Allocates memory.
 *
 *----------------------------------------------------------------------------
 */

static void
NodeAddObjRef(tNodePtr, objPtr)
  TclDOM_libxml2_Node *tNodePtr;
  Tcl_Obj *objPtr;
{
  ObjList *listPtr;

  listPtr = (ObjList *) Tcl_Alloc(sizeof(ObjList));
  listPtr->next = tNodePtr->objs;
  listPtr->objPtr = objPtr;

  tNodePtr->objs = (void *) listPtr;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOMNodeCommandDelete --
 *
 *  Invoked when a DOM node's Tcl command is deleted.
 *
 * Results:
 *  Invalidates the Tcl_Obj for the node, but doesn't actually destroy the node.
 *
 * Side effects:
 *  Frees memory.
 *
 *----------------------------------------------------------------------------
 */

void
TclDOMNodeCommandDelete (clientData)
     ClientData clientData;
{
  TclDOM_libxml2_Node *tNodePtr = (TclDOM_libxml2_Node *) clientData;

  TclDOM_libxml2_InvalidateNode(tNodePtr);
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_libxml2_GetNodeFromObj --
 *
 *  Gets an xmlNodePtr from a Tcl_Obj.
 *
 * Results:
 *  Returns success code.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_libxml2_GetNodeFromObj (interp, objPtr, nodePtrPtr)
     Tcl_Interp *interp;
     Tcl_Obj *objPtr;
     xmlNodePtr *nodePtrPtr;
{
  TclDOM_libxml2_Node *tNodePtr;

  if (TclDOM_libxml2_GetTclNodeFromObj(interp, objPtr, &tNodePtr) != TCL_OK) {
    return TCL_ERROR;
  }

  *nodePtrPtr = tNodePtr->ptr.nodePtr;

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_libxml2_GetTclNodeFromObj --
 *
 *  Gets the TclDOM node structure from a Tcl_Obj.
 *
 * Results:
 *  Returns success code.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_libxml2_GetTclNodeFromObj (interp, objPtr, tNodePtrPtr)
     Tcl_Interp *interp;
     Tcl_Obj *objPtr;
     TclDOM_libxml2_Node **tNodePtrPtr;
{
  TclDOM_libxml2_Node *tNodePtr;

  if (objPtr->typePtr == &NodeObjType) {
    tNodePtr = (TclDOM_libxml2_Node *) objPtr->internalRep.otherValuePtr;
  } else if (NodeTypeSetFromAny(interp, objPtr) == TCL_OK) {
    tNodePtr = (TclDOM_libxml2_Node *) objPtr->internalRep.otherValuePtr;
  } else {
    return TCL_ERROR;
  }

  if (tNodePtr->type != TCLDOM_LIBXML2_NODE_NODE) {
    return TCL_ERROR;
  }

  *tNodePtrPtr = tNodePtr;

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_libxml2_GetEventFromObj --
 *
 *  Gets an eventPtr from a Tcl_Obj.
 *
 * Results:
 *  Returns success code.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_libxml2_GetEventFromObj (interp, objPtr, eventPtrPtr)
     Tcl_Interp *interp;
     Tcl_Obj *objPtr;
     TclDOM_libxml2_Event **eventPtrPtr;
{
  TclDOM_libxml2_Node *tNodePtr;

  if (TclDOM_libxml2_GetTclEventFromObj(interp, objPtr, &tNodePtr) != TCL_OK) {
    return TCL_ERROR;
  }

  *eventPtrPtr = tNodePtr->ptr.eventPtr;

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_libxml2_GetTclEventFromObj --
 *
 *  Gets the node structure for an event from a Tcl_Obj.
 *
 * Results:
 *  Returns success code.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_libxml2_GetTclEventFromObj (interp, objPtr, nodePtrPtr)
     Tcl_Interp *interp;
     Tcl_Obj *objPtr;
     TclDOM_libxml2_Node **nodePtrPtr;
{
  TclDOM_libxml2_Node *tNodePtr;

  if (objPtr->typePtr == &NodeObjType) {
    tNodePtr = (TclDOM_libxml2_Node *) objPtr->internalRep.otherValuePtr;
  } else if (NodeTypeSetFromAny(interp, objPtr) == TCL_OK) {
    tNodePtr = (TclDOM_libxml2_Node *) objPtr->internalRep.otherValuePtr;
  } else {
    return TCL_ERROR;
  }

  if (tNodePtr->type != TCLDOM_LIBXML2_NODE_EVENT) {
    return TCL_ERROR;
  }

  *nodePtrPtr = tNodePtr;

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_libxml2_DestroyNode --
 *
 *  Destroys a node
 *
 * Results:
 *  Frees node.
 *
 * Side effects:
 *  Deallocates memory.
 *
 *----------------------------------------------------------------------------
 */

static void
TclDOM_libxml2_DeleteNode(clientData)
    ClientData clientData;
{
  TclDOM_libxml2_Node *tNodePtr = (TclDOM_libxml2_Node *) clientData;
  TclDOM_libxml2_Event *eventPtr;
  TclXML_libxml2_Document *tDocPtr;
  TclDOM_libxml2_Document *domDocPtr;
  Tcl_Obj *objPtr;
  xmlNodePtr nodePtr;
  Tcl_HashEntry *entry;

  if (tNodePtr->type == TCLDOM_LIBXML2_NODE_NODE) {
    nodePtr = tNodePtr->ptr.nodePtr;
    objPtr = TclXML_libxml2_CreateObjFromDoc(nodePtr->doc);
    TclXML_libxml2_GetTclDocFromObj(NULL, objPtr, &tDocPtr);
    domDocPtr = GetDOMDocument(NULL, tDocPtr);
    if (domDocPtr == NULL) {
      /* internal error */
      return;
    }
  } else {
    eventPtr = tNodePtr->ptr.eventPtr;
    domDocPtr = eventPtr->ownerDocument;
    Tcl_Free((char *) eventPtr);
  }

  entry = Tcl_FindHashEntry(domDocPtr->nodes, tNodePtr->token);
  if (entry) {
    Tcl_DeleteHashEntry(entry);
  } else {
    fprintf(stderr, "cannot delete node hash entry!\n");
  }

  TclDOM_libxml2_InvalidateNode(tNodePtr);

  if (tNodePtr->appfree) {
    (tNodePtr->appfree)(tNodePtr->apphook);
  }

  Tcl_Free((char *) tNodePtr);
}

void
TclDOM_libxml2_DestroyNode (interp, tNodePtr)
     Tcl_Interp *interp;
     TclDOM_libxml2_Node *tNodePtr;
{
  Tcl_DeleteCommandFromToken(interp, tNodePtr->cmd);
}

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_libxml2_InvalidateNode --
 *
 *  Invalidates the internal representation of any Tcl_obj that refers to
 *  this node.  NB. This does not destroy the node, or delete the node command.
 *
 * Results:
 *  Tcl_Obj internal reps changed.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

void
TclDOM_libxml2_InvalidateNode (tNodePtr)
     TclDOM_libxml2_Node *tNodePtr;
{
  ObjList *listPtr, *nextPtr;

  for (listPtr = (ObjList *) tNodePtr->objs; listPtr;) {

    listPtr->objPtr->internalRep.otherValuePtr = NULL;
    listPtr->objPtr->typePtr = NULL;

    nextPtr = listPtr->next;
    Tcl_Free((char *) listPtr);
    listPtr = nextPtr;
  }

  tNodePtr->objs = NULL;
}

/*
 *----------------------------------------------------------------------------
 *
 * Node object type management
 *
 *----------------------------------------------------------------------------
 */

/*
 * NodeTypeSetFromAny --
 *
 *  Sets the internal representation from the string rep.
 *
 * Results:
 *  Success code.
 *
 * Side effects:
 *  Changes internal rep.
 *
 *----------------------------------------------------------------------------
 */

int
NodeTypeSetFromAny(interp, objPtr)
     Tcl_Interp *interp;
     Tcl_Obj *objPtr;
{
  Tcl_Obj *docObjPtr;
  TclXML_libxml2_Document *tDocPtr;
  TclDOM_libxml2_Document *domDocPtr;
  Tcl_HashEntry *entry;
  char *id, doc[21], node[21];
  int i, idlen, len;

  /* Parse string rep for doc and node ids */
  id = Tcl_GetStringFromObj(objPtr, &idlen);
  /* node tokens are prefixed with "::dom::" */
  if (idlen < 7 || strncmp("::dom::", id, 7) != 0) {
    Tcl_ResetResult(interp);
    Tcl_AppendResult(interp, "malformed node token \"", id, "\"", NULL);
    return TCL_ERROR;
  }
  for (i = 0; i < idlen && id[i + 7] != ':' && i < 21; i++) {
    if (!((id[i + 7] >= 'a' && id[i + 7] <= 'z') || (id[i + 7] >= '0' && id[i + 7] <= '9'))) {
      /* only lowercase chars and digits are found in a token */
      Tcl_ResetResult(interp);
      Tcl_AppendResult(interp, "malformed node token \"", id, "\"", NULL);
      return TCL_ERROR;
    }
    doc[i] = id[i + 7];
  }
  if (i == idlen || id[i + 7] != ':') {
    Tcl_ResetResult(interp);
    Tcl_AppendResult(interp, "malformed node token \"", id, "\"", NULL);
    return TCL_ERROR;
  }
  doc[i] = '\0';
  i++;

  if (i == idlen || id[i + 7] != ':') {
    Tcl_ResetResult(interp);
    Tcl_AppendResult(interp, "malformed node token \"", id, "\"", NULL);
    return TCL_ERROR;
  }
  i++;
  for (len = i + 7, i = 0; i + len < idlen && i < 21; i++) {
    node[i] = id[len + i];
  }
  node[i] = '\0';

  docObjPtr = Tcl_NewStringObj(doc, -1);
  if (TclXML_libxml2_GetTclDocFromObj(interp, docObjPtr, &tDocPtr) != TCL_OK) {
    Tcl_DecrRefCount(docObjPtr);
    Tcl_SetResult(interp, "invalid node token", NULL);
    return TCL_ERROR;
  }
  domDocPtr = GetDOMDocument(interp, tDocPtr);
  if (domDocPtr == NULL) {
    Tcl_SetResult(interp, "internal error", NULL);
    return TCL_ERROR;
  }

  entry = Tcl_FindHashEntry(domDocPtr->nodes, id);
  if (entry) {
	TclDOM_libxml2_Node *tNodePtr;

    if (objPtr->typePtr != NULL && objPtr->typePtr->freeIntRepProc != NULL) {
      objPtr->typePtr->freeIntRepProc(objPtr);
    }

	tNodePtr = (TclDOM_libxml2_Node *) Tcl_GetHashValue(entry);
    objPtr->internalRep.otherValuePtr = (void *) tNodePtr;
    objPtr->typePtr = &NodeObjType;
	NodeAddObjRef(tNodePtr, objPtr);

  } else {
    Tcl_DecrRefCount(docObjPtr);
    Tcl_SetResult(interp, "not a DOM node", NULL);
    return TCL_ERROR;
  }

  Tcl_DecrRefCount(docObjPtr);

  return TCL_OK;
}

void
NodeTypeUpdate(objPtr)
     Tcl_Obj *objPtr;
{
  TclDOM_libxml2_Node *tNodePtr = (TclDOM_libxml2_Node *) objPtr->internalRep.otherValuePtr;

  objPtr->bytes = Tcl_Alloc(strlen(tNodePtr->token) + 1);
  strcpy(objPtr->bytes, tNodePtr->token);
  objPtr->length = strlen(objPtr->bytes);
}

void
NodeTypeDup(srcPtr, dstPtr)
     Tcl_Obj *srcPtr;
     Tcl_Obj *dstPtr;
{
  TclDOM_libxml2_Node *tNodePtr = (TclDOM_libxml2_Node *) srcPtr->internalRep.otherValuePtr;

  if (dstPtr->typePtr != NULL && dstPtr->typePtr->freeIntRepProc != NULL) {
    dstPtr->typePtr->freeIntRepProc(dstPtr);
  }

  Tcl_InvalidateStringRep(dstPtr);

  dstPtr->internalRep.otherValuePtr = (ClientData) tNodePtr;
  dstPtr->typePtr = srcPtr->typePtr;
  
  NodeAddObjRef(tNodePtr, dstPtr);
}

/*
 * Unlike documents, nodes are not destroyed just because they have no Tcl_Obj's
 * referring to them.
 */

void
NodeTypeFree(objPtr)
     Tcl_Obj *objPtr;
{
  TclDOM_libxml2_Node *tNodePtr = (TclDOM_libxml2_Node *) objPtr->internalRep.otherValuePtr;
  ObjList *listPtr = tNodePtr->objs;
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
    tNodePtr->objs = listPtr->next;
  } else {
    prevPtr->next = listPtr->next;
  }
  Tcl_Free((char *) listPtr);

  objPtr->internalRep.otherValuePtr = NULL;
  objPtr->typePtr = NULL;
}
#if 0
static void
DumpNode(tNodePtr)
TclDOM_libxml2_Node *tNodePtr;
{
  ObjList *listPtr;
  
  fprintf(stderr, "    node token \"%s\" type %d ptr x%x\n", 
		  tNodePtr->token, tNodePtr->type, 
		  tNodePtr->ptr.nodePtr);
  listPtr = (ObjList *) tNodePtr->objs;
  if (listPtr) {
	fprintf(stderr, "        objects:");
	while (listPtr) {
	  fprintf(stderr, " objPtr x%x", listPtr->objPtr);
	  listPtr = listPtr->next;
	  fprintf(stderr, "\n");
	}
  } else {
	fprintf(stderr, "        no objects\n");
  }
}
#endif

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_libxml2_NewEventObj --
 *
 *  Create a Tcl_Obj for an event.
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
TclDOM_libxml2_NewEventObj (interp, docPtr, type, typeObjPtr)
     Tcl_Interp *interp;
     xmlDocPtr docPtr;
     enum TclDOM_EventTypes type;
     Tcl_Obj *typeObjPtr;	/* NULL for standard types */
{
  Tcl_Obj *objPtr, *docObjPtr;
  TclDOM_libxml2_Node *tNodePtr;
  TclDOM_libxml2_Event *eventPtr;
  TclXML_libxml2_Document *tDocPtr;
  TclDOM_libxml2_Document *domDocPtr;
  Tcl_HashEntry *entry;
  int new;

  docObjPtr = TclXML_libxml2_CreateObjFromDoc(docPtr);
  TclXML_libxml2_GetTclDocFromObj(interp, docObjPtr, &tDocPtr);
  domDocPtr = GetDOMDocument(interp, tDocPtr);
  if (domDocPtr == NULL) {
    Tcl_SetResult(interp, "internal error", NULL);
    return NULL;
  }

  tNodePtr = (TclDOM_libxml2_Node *) Tcl_Alloc(sizeof(TclDOM_libxml2_Node));
  tNodePtr->token = Tcl_Alloc(30);
  sprintf(tNodePtr->token, "::dom::%s::event%d", tDocPtr->token, domDocPtr->nodeCntr++);
  tNodePtr->type = TCLDOM_LIBXML2_NODE_EVENT;
  tNodePtr->objs = NULL;
  tNodePtr->apphook = NULL;
  tNodePtr->appfree = NULL;

  entry = Tcl_CreateHashEntry(domDocPtr->nodes, tNodePtr->token, &new);
  if (!new) {
    Tcl_Free((char *) tNodePtr->token);
    Tcl_Free((char *) tNodePtr);
    return NULL;
  }
  Tcl_SetHashValue(entry, (void *) tNodePtr);

  tNodePtr->cmd = Tcl_CreateObjCommand(interp, tNodePtr->token, TclDOMEventCommand, (ClientData) tNodePtr, TclDOMEventCommandDelete);

  eventPtr = (TclDOM_libxml2_Event *) Tcl_Alloc(sizeof(TclDOM_libxml2_Event));
  eventPtr->ownerDocument = domDocPtr;
  eventPtr->tNodePtr = tNodePtr;

  /*
   * Overload the node pointer to refer to the event structure.
   */
  tNodePtr->ptr.eventPtr = eventPtr;

  objPtr = Tcl_NewObj();
  objPtr->internalRep.otherValuePtr = (VOID *) tNodePtr;
  objPtr->typePtr = &NodeObjType;

  objPtr->bytes = Tcl_Alloc(strlen(tNodePtr->token) + 1);
  strcpy(objPtr->bytes, tNodePtr->token);
  objPtr->length = strlen(objPtr->bytes);

  NodeAddObjRef(tNodePtr, objPtr);

  eventPtr->type = type;
  if (type == TCLDOM_EVENT_USERDEFINED) {
    eventPtr->typeObjPtr = typeObjPtr;
    Tcl_IncrRefCount(eventPtr->typeObjPtr);
  } else {
    eventPtr->typeObjPtr = NULL;
  }

  eventPtr->stopPropagation = 0;
  eventPtr->preventDefault = 0;
  eventPtr->dispatched = 0;

  eventPtr->altKey = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->altKey);
  eventPtr->attrName = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->attrName);
  eventPtr->attrChange = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->attrChange);
  eventPtr->bubbles = Tcl_NewIntObj(1);
  Tcl_IncrRefCount(eventPtr->bubbles);
  eventPtr->button = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->button);
  eventPtr->cancelable = Tcl_NewIntObj(1);
  Tcl_IncrRefCount(eventPtr->cancelable);
  eventPtr->clientX = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->clientX);
  eventPtr->clientY = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->clientY);
  eventPtr->ctrlKey = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->ctrlKey);
  eventPtr->currentNode = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->currentNode);
  eventPtr->detail = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->detail);
  eventPtr->eventPhase = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->eventPhase);
  eventPtr->metaKey = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->metaKey);
  eventPtr->newValue = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->newValue);
  eventPtr->prevValue = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->prevValue);
  eventPtr->relatedNode = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->relatedNode);
  eventPtr->screenX = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->screenX);
  eventPtr->screenY = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->screenY);
  eventPtr->shiftKey = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->shiftKey);
  eventPtr->target = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->target);

  /* Timestamping of DOM events is not available in Tcl 8.3.x.
   * The required API (Tcl_GetTime) is public only since 8.4.0.
   */

  eventPtr->timeStamp = Tcl_NewLongObj(0);
#if (TCL_MAJOR_VERSION > 8) || ((TCL_MAJOR_VERSION == 8) && (TCL_MINOR_VERSION > 3))
  {
    Tcl_Time time;

    Tcl_GetTime(&time);
    Tcl_SetLongObj(eventPtr->timeStamp, time.sec*1000 + time.usec/1000);
  }
#endif
  Tcl_IncrRefCount(eventPtr->timeStamp);

  eventPtr->view = Tcl_NewObj();
  Tcl_IncrRefCount(eventPtr->view);

  return objPtr;
}
/*
 *----------------------------------------------------------------------------
 *
 * TclDOMEventCommandDelete --
 *
 *  Invoked when a DOM event node's Tcl command is deleted.
 *
 * Results:
 *  Destroy the node.
 *
 * Side effects:
 *  Frees memory.
 *
 *----------------------------------------------------------------------------
 */

void
TclDOMEventCommandDelete (clientData)
ClientData clientData;
{
  TclDOM_libxml2_Node *tNodePtr = (TclDOM_libxml2_Node *) clientData;
  TclDOM_libxml2_Event *eventPtr;

  if (tNodePtr->type != TCLDOM_LIBXML2_NODE_EVENT) {
	return; /* internal error. should this panic? */
  }
  eventPtr = tNodePtr->ptr.eventPtr;

  if (eventPtr->typeObjPtr) {
	Tcl_DecrRefCount(eventPtr->typeObjPtr);
  }
  if (eventPtr->altKey) {
	Tcl_DecrRefCount(eventPtr->altKey);
  }
  if (eventPtr->attrName) {
	Tcl_DecrRefCount(eventPtr->attrName);
  }
  if (eventPtr->attrChange) {
	Tcl_DecrRefCount(eventPtr->attrChange);
  }
  if (eventPtr->bubbles) {
	Tcl_DecrRefCount(eventPtr->bubbles);
  }
  if (eventPtr->button) {
	Tcl_DecrRefCount(eventPtr->button);
  }
  if (eventPtr->cancelable) {
	Tcl_DecrRefCount(eventPtr->cancelable);
  }
  if (eventPtr->clientX) {
	Tcl_DecrRefCount(eventPtr->clientX);
  }
  if (eventPtr->clientY) {
	Tcl_DecrRefCount(eventPtr->clientY);
  }
  if (eventPtr->ctrlKey) {
	Tcl_DecrRefCount(eventPtr->ctrlKey);
  }
  if (eventPtr->currentNode) {
	Tcl_DecrRefCount(eventPtr->currentNode);
  }
  if (eventPtr->detail) {
	Tcl_DecrRefCount(eventPtr->detail);
  }
  if (eventPtr->eventPhase) {
	Tcl_DecrRefCount(eventPtr->eventPhase);
  }
  if (eventPtr->metaKey) {
	Tcl_DecrRefCount(eventPtr->metaKey);
  }
  if (eventPtr->newValue) {
	Tcl_DecrRefCount(eventPtr->newValue);
  }
  if (eventPtr->prevValue) {
	Tcl_DecrRefCount(eventPtr->prevValue);
  }
  if (eventPtr->relatedNode) {
	Tcl_DecrRefCount(eventPtr->relatedNode);
  }
  if (eventPtr->screenX) {
	Tcl_DecrRefCount(eventPtr->screenX);
  }
  if (eventPtr->screenY) {
	Tcl_DecrRefCount(eventPtr->screenY);
  }
  if (eventPtr->shiftKey) {
	Tcl_DecrRefCount(eventPtr->shiftKey);
  }
  if (eventPtr->target) {
	Tcl_DecrRefCount(eventPtr->target);
  }
  if (eventPtr->timeStamp) {
	Tcl_DecrRefCount(eventPtr->timeStamp);
  }
  if (eventPtr->view) {
	Tcl_DecrRefCount(eventPtr->view);
  }

  /* Invalidates all referring objects and frees all data structures */
  TclDOM_libxml2_DeleteNode((ClientData) tNodePtr);
}

