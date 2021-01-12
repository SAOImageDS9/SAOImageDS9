/*
 * tclxslt.c --
 *
 *  Interface to Gnome libxslt.
 *
 * Copyright (c) 2005-2007 Explain
 * http://www.explain.com.au/
 * Copyright (c) 2001-2004 Zveno Pty Ltd
 * http://www.zveno.com/
 *
 * See the file "LICENSE" for information on usage and
 * redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * $Id: tclxslt-libxslt.c,v 1.2 2016/01/15 21:06:01 joye Exp $
 *
 */

#include <tclxslt/tclxslt.h>
#include <string.h>
#include <libxslt/imports.h>
#include <libxslt/security.h>

#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLEXPORT

#ifdef __WIN32__
/*#     include "win/win32config.h"*/
#endif

/*
 * Manage stylesheet objects
 */

typedef struct TclXSLT_Stylesheet {
  Tcl_Interp *interp;
  char *name;
  xsltStylesheetPtr stylesheet;
  Tcl_HashEntry *entryPtr;

  Tcl_Obj *resulturi;
  Tcl_Obj *profilechannelObj;

  Tcl_Obj *messagecommand;
} TclXSLT_Stylesheet;

/*
 * Extension management
 */

typedef struct TclXSLT_Extension {
  Tcl_Interp *interp;
  Tcl_Obj *nsuri;
  Tcl_Obj *tclns;
  xsltTransformContextPtr xformCtxt;
} TclXSLT_Extension;

typedef struct ThreadSpecificData {
  int initialised;
  Tcl_Interp *interp;
  int ssheetCntr;
  Tcl_HashTable *stylesheets;
  Tcl_HashTable *extensions;
} ThreadSpecificData;
static Tcl_ThreadDataKey dataKey;

/*
 * Prototypes for procedures defined later in this file:
 */

/*
 * Forward declarations for private functions.
 */

static void TclXSLTGenericError _ANSI_ARGS_((void *ctx, const char *msg, ...));

static int TclXSLTCompileCommand _ANSI_ARGS_((ClientData dummy,
						Tcl_Interp *interp,
						int objc,
						Tcl_Obj *CONST objv[]));
static int TclXSLTInstanceCommand _ANSI_ARGS_((ClientData ssheet,
						Tcl_Interp *interp,
						int objc,
						Tcl_Obj *CONST objv[]));
static void TclXSLTDeleteStylesheet _ANSI_ARGS_((ClientData ssheet));
static int TclXSLTExtensionCommand _ANSI_ARGS_((ClientData dummy,
						Tcl_Interp *interp,
						int objc,
						Tcl_Obj *CONST objv[]));

static Tcl_Obj * GetParameters _ANSI_ARGS_((Tcl_Interp *interp,
					    xsltStylesheetPtr stylesheet));
static int TclXSLTTransform _ANSI_ARGS_((TclXSLT_Stylesheet *stylesheet,
                                         Tcl_Obj *source,
                                         int paramc,
                                         Tcl_Obj *CONST paramv[]));

static void TclXSLT_RegisterAll _ANSI_ARGS_((TclXSLT_Extension *extinfo,
						const xmlChar *nsuri));

/* static xsltExtInitFunction TclXSLTExtInit; */
static void *TclXSLTExtInit _ANSI_ARGS_((xsltTransformContextPtr ctxt,
					const xmlChar *URI));
/* static xsltExtShutdownFunction TclXSLTExtShutdown; */
static void TclXSLTExtShutdown _ANSI_ARGS_((xsltTransformContextPtr ctxt,
					    const xmlChar *URI,
					    void *userdata));
/* static xmlXPathEvalFunc TclXSLTExtFunction; */
static void TclXSLTExtFunction _ANSI_ARGS_((xmlXPathParserContextPtr xpathCtxt,
					    int nargs));
/* static xsltPreComputeFunction TclXSLTExtElementPreComp; */
static void TclXSLTExtElementPreComp _ANSI_ARGS_((xsltStylesheetPtr style,
						  xmlNodePtr inst,
						  xsltTransformFunction function));
/* static xsltTransformFunction TclXSLTExtElementTransform; */
static void TclXSLTExtElementTransform _ANSI_ARGS_((xsltTransformContextPtr ctxt,
					            xmlNodePtr node,
					            xmlNodePtr inst,
					            xsltStylePreCompPtr comp));
/* static xsltSecurityCheck TclXSLTSecurityReadFile; */
static int TclXSLTSecurityReadFile _ANSI_ARGS_((xsltSecurityPrefsPtr sec,
						xsltTransformContextPtr ctxt,
						const char *value));
/* static xsltSecurityCheck TclXSLTSecurityWriteFile; */
static int TclXSLTSecurityWriteFile _ANSI_ARGS_((xsltSecurityPrefsPtr sec,
						 xsltTransformContextPtr ctxt,
						 const char *value));
/* static xsltSecurityCheck TclXSLTSecurityCreateDirectory; */
static int TclXSLTSecurityCreateDirectory _ANSI_ARGS_((xsltSecurityPrefsPtr sec,
						       xsltTransformContextPtr ctxt,
						       const char *value));
/* static xsltSecurityCheck TclXSLTSecurityReadNetwork; */
static int TclXSLTSecurityReadNetwork _ANSI_ARGS_((xsltSecurityPrefsPtr sec,
						   xsltTransformContextPtr ctxt,
						   const char *value));
/* static xsltSecurityCheck TclXSLTSecurityWriteNetwork; */
static int TclXSLTSecurityWriteNetwork _ANSI_ARGS_((xsltSecurityPrefsPtr sec,
						    xsltTransformContextPtr ctxt,
						    const char *value));

static Tcl_Obj * TclXSLT_ConvertXPathObjToTclObj _ANSI_ARGS_((Tcl_Interp *interp,
                                                              xmlXPathObjectPtr xpobj));
static xmlXPathObjectPtr TclXSLT_ConvertTclObjToXPathObj _ANSI_ARGS_((Tcl_Interp *interp,
                                                              Tcl_Obj *objPtr));

/*
 * Error context for passing error result back to caller.
 */

typedef struct GenericError_Info {
  Tcl_Interp *interp;
  TclXSLT_Stylesheet *stylesheet;
  int code;
  Tcl_Obj *msg;
} GenericError_Info;

/*
 * Switch tables
 */

#ifndef CONST84
#define CONST84 /* Before 8.4 no 'const' required */
#endif

static CONST84 char *instanceCommandMethods[] = {
  "cget",
  "configure",
  "get",
  "transform",
  (char *) NULL
};
enum instanceCommandMethods {
  TCLXSLT_CGET,
  TCLXSLT_CONFIGURE,
  TCLXSLT_GET,
  TCLXSLT_TRANSFORM
};
static CONST84 char *instanceCommandOptions[] = {
  "-messagecommand",
  "-method",
  "-indent",
  "-resulturi",
  "-profilechannel",
  "-encoding",
  "-omitxmldeclaration",
  (char *) NULL
};
enum instanceCommandOptions {
  TCLXSLT_OPTION_MESSAGECOMMAND,
  TCLXSLT_OPTION_METHOD,
  TCLXSLT_OPTION_INDENT,
  TCLXSLT_OPTION_RESULTURI,
  TCLXSLT_OPTION_PROFILECHANNEL,
  TCLXSLT_OPTION_ENCODING,
  TCLXSLT_OPTION_OMITXMLDECLARATION
};

static CONST84 char *instanceGetMethods[] = {
  "parameters",
  (char *) NULL
};
enum instanceGetMethods {
  TCLXSLT_GET_PARAMETERS
};

static CONST84 char *extensionCommandMethods[] = {
  "add",
  "remove",
  (char *) NULL
};
enum extensionCommandMethods {
  TCLXSLT_EXT_ADD,
  TCLXSLT_EXT_REMOVE
};

/*
 * libxml2 and libxslt are mostly thread-safe,
 * but there are issues with error callbacks.
 */

TCL_DECLARE_MUTEX(libxslt)

/*
 *----------------------------------------------------------------------------
 *
 * Tclxslt_libxslt_Init --
 *
 *  Initialisation routine for loadable module
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
Tclxslt_libxslt_Init (interp)
     Tcl_Interp *interp;	/* Interpreter to initialise */
{
  ThreadSpecificData *tsdPtr;
  xsltSecurityPrefsPtr sec;

  tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  if (!tsdPtr->initialised) {
    tsdPtr->initialised = 1;
    tsdPtr->interp = interp;
    tsdPtr->ssheetCntr = 0;
    tsdPtr->stylesheets = (Tcl_HashTable *) Tcl_Alloc(sizeof(Tcl_HashTable));
    Tcl_InitHashTable(tsdPtr->stylesheets, TCL_ONE_WORD_KEYS);
    tsdPtr->extensions = (Tcl_HashTable *) Tcl_Alloc(sizeof(Tcl_HashTable));
    Tcl_InitHashTable(tsdPtr->extensions, TCL_STRING_KEYS);
  } /* only need to init the library once per process */

  Tcl_CreateObjCommand(interp, "xslt::compile", TclXSLTCompileCommand, NULL, NULL);
  Tcl_CreateObjCommand(interp, "xslt::extension", TclXSLTExtensionCommand, NULL, NULL);

  Tcl_MutexLock(&libxslt);
#ifndef TCLXML_STATIC_TCLXSLT
  exsltRegisterAll();
#endif /* TCLXML_STATIC_TCLXSLT */

  /*
   * Setup security preferences
   */
  sec = xsltNewSecurityPrefs();
  if (xsltSetSecurityPrefs(sec, XSLT_SECPREF_READ_FILE,
			   TclXSLTSecurityReadFile)) {
    Tcl_SetResult(interp, "unable to set readfile security", NULL);
    return TCL_ERROR;
  }
  if (xsltSetSecurityPrefs(sec, XSLT_SECPREF_WRITE_FILE,
			   TclXSLTSecurityWriteFile)) {
    Tcl_SetResult(interp, "unable to set writefile security", NULL);
    return TCL_ERROR;
  }
  if (xsltSetSecurityPrefs(sec, XSLT_SECPREF_CREATE_DIRECTORY,
			   TclXSLTSecurityCreateDirectory)) {
    Tcl_SetResult(interp, "unable to set createdirectory security", NULL);
    return TCL_ERROR;
  }
  if (xsltSetSecurityPrefs(sec, XSLT_SECPREF_READ_NETWORK,
			   TclXSLTSecurityReadNetwork)) {
    Tcl_SetResult(interp, "unable to set readnetwork security", NULL);
    return TCL_ERROR;
  }
  if (xsltSetSecurityPrefs(sec, XSLT_SECPREF_WRITE_NETWORK,
			   TclXSLTSecurityWriteNetwork)) {
    Tcl_SetResult(interp, "unable to set writenetwork security", NULL);
    return TCL_ERROR;
  }
  /* xsltSetCtxtSecurityPrefs(sec, userCtxt); */
  xsltSetDefaultSecurityPrefs(sec);

  Tcl_MutexUnlock(&libxslt);

  Tcl_SetVar2Ex(interp, "::xslt::libxsltversion", NULL, Tcl_NewStringObj(xsltEngineVersion, -1), 0);
  Tcl_SetVar2Ex(interp, "::xslt::libexsltversion", NULL, Tcl_NewStringObj(exsltLibraryVersion, -1), 0);

  return TCL_OK;
}

/*
 * XSLT is not safe due to the document(), xsl:include and xsl:import functions/elements.
 * However, libxslt checks whether access is permitted to external resources.
 *
 * NOTE: need to make sure decision to allow access to resources is made by a trusted interpreter, not the untrusted slave.  Even better, use a mechanism similar to TclXML/libxml2 to access external resources.
 */

int
Tclxslt_libxslt_SafeInit (interp)
     Tcl_Interp *interp;	/* Interpreter to initialise */
{
  return Tclxslt_libxslt_Init(interp);
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLTCompileCommand --
 *
 *  Class creation command for xslt stylesheet objects.
 *
 * Results:
 *  Compiles the XSLT stylesheet.
 *  Creates a Tcl command associated with that stylesheet.
 *
 * Side effects:
 *  Memory allocated, stylesheet is compiled.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXSLTCompileCommand(dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  TclXSLT_Stylesheet *info;
  xmlDocPtr origDoc, doc;
  xsltStylesheetPtr ssheetPtr = NULL;
  void *oldxsltErrorCtx, *oldxmlErrorCtx;
  xmlGenericErrorFunc old_xsltGenericError, old_xmlGenericError;
  GenericError_Info *errorInfoPtr;
  Tcl_Obj *errObjPtr = NULL;
  int new;

  if (objc != 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "stylesheet-doc");
    return TCL_ERROR;
  }

  if (TclXML_libxml2_GetDocFromObj(interp, objv[1], &origDoc) != TCL_OK) {
    return TCL_ERROR;
  }

  Tcl_MutexLock(&libxslt);
  doc = xmlCopyDoc(origDoc, 1);
  /*
   * xmlCopyDoc doesn't copy some of the fields.
   */
  if (origDoc->URL) {
    doc->URL = (const xmlChar *) Tcl_Alloc(strlen((char *) origDoc->URL) + 1);
    strcpy((char *) doc->URL, (char *) origDoc->URL);
  }

  /*
   * Prepare for compiling stylesheet
   */

  TclXML_libxml2_ResetError(interp);

  errorInfoPtr = (GenericError_Info *) Tcl_Alloc(sizeof(GenericError_Info));
  errorInfoPtr->interp = interp;
  errorInfoPtr->stylesheet = NULL;
  errorInfoPtr->code = TCL_OK;
  errorInfoPtr->msg = NULL;
  xmlSetGenericErrorFunc((void *) errorInfoPtr,
			 TclXSLTGenericError);

  /*
   * Save the previous error context so that it can
   * be restored upon completion of the operation.
   */
  old_xsltGenericError = xsltGenericError;
  oldxsltErrorCtx = xsltGenericErrorContext;
  old_xmlGenericError = xmlGenericError;
  oldxmlErrorCtx = xmlGenericErrorContext;

  xmlSetGenericErrorFunc((void *) errorInfoPtr,
			 TclXSLTGenericError);
  xsltSetGenericErrorFunc((void *) errorInfoPtr, TclXSLTGenericError);

  /*
   * Compile stylesheet
   */

  ssheetPtr = xsltParseStylesheetDoc(doc);

  xmlSetGenericErrorFunc((void *) oldxmlErrorCtx, old_xmlGenericError);
  xsltSetGenericErrorFunc((void *) oldxsltErrorCtx, old_xsltGenericError);

  Tcl_MutexUnlock(&libxslt);

  errObjPtr = TclXML_libxml2_GetErrorObj(interp);

  if (ssheetPtr == NULL) {
    Tcl_SetResult(interp, "error compiling stylesheet", NULL);
    goto error;
  }

  if (ssheetPtr->errors > 0) {
    Tcl_SetResult(interp, "error compiling XSLT stylesheet", NULL);
    goto error;
  }

  if (errorInfoPtr->code != TCL_OK) {
    goto error;
  }

  /* TODO: notify app of any warnings */

  info = (TclXSLT_Stylesheet *) Tcl_Alloc(sizeof(TclXSLT_Stylesheet));
  info->interp = interp;
  info->name = Tcl_Alloc(20);
  sprintf(info->name, "style%d", tsdPtr->ssheetCntr++);
  info->stylesheet = ssheetPtr;
  info->messagecommand = NULL;
  info->resulturi = NULL;
  info->profilechannelObj = NULL;

  /*
   * Create reverse mapping of stylesheet to name of stylesheet command.
   */
  info->entryPtr = Tcl_CreateHashEntry(tsdPtr->stylesheets, (ClientData) ssheetPtr, &new);
  /* sanity check: new == 1 */
  Tcl_SetHashValue(info->entryPtr, (ClientData) info->name);

  Tcl_CreateObjCommand(interp, info->name, TclXSLTInstanceCommand, (ClientData) info, TclXSLTDeleteStylesheet);

  Tcl_SetObjResult(interp, Tcl_NewStringObj(info->name, -1));

  return TCL_OK;

error:

  if (errObjPtr) {
    Tcl_SetObjResult(interp, errObjPtr);
  } else if (errorInfoPtr->msg) {
    Tcl_SetObjResult(interp, errorInfoPtr->msg);
    Tcl_DecrRefCount(errorInfoPtr->msg);
  }
  Tcl_Free((char *) errorInfoPtr);

  Tcl_MutexLock(&libxslt);
  if (ssheetPtr) {
    xsltFreeStylesheet(ssheetPtr);
  } else {
    xmlFreeDoc(doc);
  }
  Tcl_MutexUnlock(&libxslt);
  
  return TCL_ERROR;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLTDeleteStylesheet --
 *
 *  Class destruction command for xslt stylesheet objects.
 *
 * Results:
 *  Frees memory associated with a stylesheet.
 *
 * Side effects:
 *  Memory deallocated.
 *
 *----------------------------------------------------------------------------
 */

static void
TclXSLTDeleteStylesheet(clientData)
     ClientData clientData;
{
  TclXSLT_Stylesheet *ssheet = (TclXSLT_Stylesheet *) clientData;

  Tcl_DeleteHashEntry(ssheet->entryPtr);
  
  Tcl_Free(ssheet->name);
  if (ssheet->messagecommand) {
    Tcl_DecrRefCount(ssheet->messagecommand);
  }
  if (ssheet->resulturi) {
    Tcl_DecrRefCount(ssheet->resulturi);
  }
  if (ssheet->profilechannelObj) {
    Tcl_DecrRefCount(ssheet->profilechannelObj);
  }
  Tcl_MutexLock(&libxslt);
  xsltFreeStylesheet(ssheet->stylesheet); /* Also frees document */
  Tcl_MutexUnlock(&libxslt);
  Tcl_Free((char *) ssheet);
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLTInstanceCommand --
 *
 *  Handles the stylesheet object command.
 *
 * Results:
 *  Depends on method.
 *
 * Side effects:
 *  Depends on method.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXSLTInstanceCommand(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  TclXSLT_Stylesheet *ssheet = (TclXSLT_Stylesheet *) clientData;
  int method, option, indent = 0, theOmitXMLDeclaration = 0;
  const xmlChar *theMethod, *theEncoding;

  if (objc < 3) {
    Tcl_WrongNumArgs(interp, 1, objv, "method ?args ...?");
    return TCL_ERROR;
  }

  if (Tcl_GetIndexFromObj(interp, objv[1], instanceCommandMethods, 
			    "method", 0, &method) != TCL_OK) {
    return TCL_ERROR;
  }

  switch ((enum instanceCommandMethods) method) {
  case TCLXSLT_CGET:

    if (objc != 3) {
      Tcl_WrongNumArgs(interp, 2, objv, "option");
      return TCL_ERROR;
    }

    if (Tcl_GetIndexFromObj(interp, objv[2], instanceCommandOptions, 
			    "option", 0, &option) != TCL_OK) {
      return TCL_ERROR;
    }

    switch ((enum instanceCommandOptions) option) {

    case TCLXSLT_OPTION_METHOD:
      XSLT_GET_IMPORT_PTR(theMethod, ssheet->stylesheet, method);
      if (theMethod != NULL) {
        Tcl_SetObjResult(interp, Tcl_NewStringObj((CONST char *) theMethod, -1));
      } /* theMethod == NULL means XML method; result should be empty.
	   EXCEPTION: if the result document is of type XML_HTML_DOCUMENT_NODE
	   then the method should be "html".
	 */
      break;

    case TCLXSLT_OPTION_ENCODING:
      XSLT_GET_IMPORT_PTR(theEncoding, ssheet->stylesheet, encoding);
      if (theEncoding != NULL) {
        Tcl_SetObjResult(interp, Tcl_NewStringObj((CONST char *) theEncoding, -1));
      } /* theEncoding == NULL means default (UTF-8) encoding; result should be empty.
	 */
      break;

    case TCLXSLT_OPTION_OMITXMLDECLARATION:
      XSLT_GET_IMPORT_INT(theOmitXMLDeclaration, ssheet->stylesheet, omitXmlDeclaration);
      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(theOmitXMLDeclaration == 1));
      break;

    case TCLXSLT_OPTION_INDENT:
      XSLT_GET_IMPORT_INT(indent, ssheet->stylesheet, indent);
      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(indent));
      break;

    case TCLXSLT_OPTION_MESSAGECOMMAND:
      if (ssheet->messagecommand != NULL) {
        Tcl_SetObjResult(interp, ssheet->messagecommand);
      }
      break;

    case TCLXSLT_OPTION_RESULTURI:
      if (ssheet->resulturi != NULL) {
        Tcl_SetObjResult(interp, ssheet->resulturi);
      }
      break;

    case TCLXSLT_OPTION_PROFILECHANNEL:
      if (ssheet->profilechannelObj != NULL) {
        Tcl_SetObjResult(interp, ssheet->profilechannelObj);
      }
      break;

    default:
      Tcl_SetResult(interp, "unknown option", NULL);
      return TCL_ERROR;
    }

    break;

  case TCLXSLT_CONFIGURE:
    
    if (objc != 4) {
      Tcl_WrongNumArgs(interp, 2, objv, "option value");
      return TCL_ERROR;
    }

    if (Tcl_GetIndexFromObj(interp, objv[2], instanceCommandOptions, 
			    "option", 0, &option) != TCL_OK) {
      return TCL_ERROR;
    }

    switch ((enum instanceCommandOptions) option) {

    case TCLXSLT_OPTION_METHOD:
    case TCLXSLT_OPTION_INDENT:
    case TCLXSLT_OPTION_ENCODING:
    case TCLXSLT_OPTION_OMITXMLDECLARATION:
      Tcl_SetResult(interp, "read-only option", NULL);
      return TCL_ERROR;
      break;

    case TCLXSLT_OPTION_MESSAGECOMMAND:
      if (ssheet->messagecommand != NULL) {
        Tcl_DecrRefCount(ssheet->messagecommand);
      }
      ssheet->messagecommand = objv[3];
      Tcl_IncrRefCount(ssheet->messagecommand);
      break;

    case TCLXSLT_OPTION_RESULTURI:
      if (ssheet->resulturi != NULL) {
        Tcl_DecrRefCount(ssheet->resulturi);
      }
      ssheet->resulturi = objv[3];
      Tcl_IncrRefCount(ssheet->resulturi);
      break;

    case TCLXSLT_OPTION_PROFILECHANNEL:
      if (ssheet->profilechannelObj != NULL) {
        Tcl_DecrRefCount(ssheet->profilechannelObj);
      }
#ifdef __WIN32__
      Tcl_SetResult(interp, "profiling not available", NULL);
      return TCL_ERROR;
#else
      ssheet->profilechannelObj = objv[3];
      Tcl_IncrRefCount(ssheet->profilechannelObj);
#endif
      break;

    default:
      Tcl_SetResult(interp, "unknown option", NULL);
      return TCL_ERROR;
    }

    break;

  case TCLXSLT_GET:
    if (objc != 3) {
      Tcl_WrongNumArgs(interp, 2, objv, "name");
      return TCL_ERROR;
    }

    if (Tcl_GetIndexFromObj(interp, objv[2], instanceGetMethods,
			    "name", 0, &option) != TCL_OK) {
      return TCL_ERROR;
    }

    switch ((enum instanceGetMethods) option) {
    case TCLXSLT_GET_PARAMETERS:

      Tcl_SetObjResult(interp, GetParameters(interp, ssheet->stylesheet));
      break;

    default:
      Tcl_SetResult(interp, "unknown name", NULL);
      return TCL_ERROR;
    }

    break;

  case TCLXSLT_TRANSFORM:
    if (objc < 3) {
      Tcl_WrongNumArgs(interp, 2, objv, "source ?param value...?");
      return TCL_ERROR;
    }

    return TclXSLTTransform(ssheet, objv[2], objc - 3, &objv[3]);

    break;

  default:
    Tcl_SetResult(interp, "unknown method", NULL);
    return TCL_OK;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLTTransform --
 *
 *  Performs an XSL transformation.
 *
 * Results:
 *  Result document created.
 *
 * Side effects:
 *  Memory allocated for result document.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXSLTTransform(stylesheet, source, paramc, paramv)
    TclXSLT_Stylesheet *stylesheet;
    Tcl_Obj *source;
    int paramc;
    Tcl_Obj *CONST paramv[];
{
  xmlDocPtr doc, result;
  char **params = NULL;
  int nbparams = 0, i;
  GenericError_Info *errorInfoPtr;
  void *oldxsltErrorCtx, *oldxmlErrorCtx;
  xmlGenericErrorFunc old_xsltGenericError, old_xmlGenericError;
  Tcl_Obj *resultObjPtr, *errObjPtr = NULL;
  char *resulturi = NULL;
  FILE *profile = NULL;
  xsltTransformContextPtr userCtxt = NULL;

  errorInfoPtr = (GenericError_Info *) Tcl_Alloc(sizeof(GenericError_Info));
  errorInfoPtr->interp = stylesheet->interp;
  errorInfoPtr->stylesheet = stylesheet;
  errorInfoPtr->code = TCL_OK;
  errorInfoPtr->msg = NULL;

  if (TclXML_libxml2_GetDocFromObj(stylesheet->interp, source, &doc) != TCL_OK) {
    goto error;
  }

  TclXML_libxml2_ResetError(stylesheet->interp);

  params = (char **) Tcl_Alloc(sizeof(char **) * (paramc + 1));
  for (i = 0; i < paramc; i++) {
    params[nbparams++] = Tcl_GetStringFromObj(paramv[i++], NULL);
    params[nbparams++] = Tcl_GetStringFromObj(paramv[i], NULL);
  }
  params[nbparams] = NULL;

  if (stylesheet->resulturi) {
    resulturi = Tcl_GetStringFromObj(stylesheet->resulturi, NULL);
  }
#ifdef __WIN32__
  /* Tcl_GetOpenFile not available on Windows */
#else
  if (stylesheet->profilechannelObj) {
    if (Tcl_GetOpenFile(stylesheet->interp,
			Tcl_GetStringFromObj(stylesheet->profilechannelObj, NULL),
			1, 1,
			(ClientData *) &profile) != TCL_OK) {
      goto error;
    }
  }
#endif

  /*
   * Perform the transformation
   */

  Tcl_MutexLock(&libxslt);

  /*
   * Save the previous error context so that it can
   * be restored upon completion of the transformation.
   * This is necessary because transformations may occur
   * recursively (usually due to extensions).
   */
  old_xsltGenericError = xsltGenericError;
  oldxsltErrorCtx = xsltGenericErrorContext;
  old_xmlGenericError = xmlGenericError;
  oldxmlErrorCtx = xmlGenericErrorContext;

  xmlSetGenericErrorFunc((void *) errorInfoPtr,
			 TclXSLTGenericError);
  xsltSetGenericErrorFunc((void *) errorInfoPtr, TclXSLTGenericError);

  userCtxt = xsltNewTransformContext(stylesheet->stylesheet, doc);
  if (userCtxt == NULL) {
    xmlSetGenericErrorFunc((void *) oldxmlErrorCtx, old_xmlGenericError);
    xsltSetGenericErrorFunc((void *) oldxsltErrorCtx, old_xsltGenericError);

    Tcl_MutexUnlock(&libxslt);
    Tcl_SetResult(stylesheet->interp, "unable to create transformation context", NULL);
    goto error;
  }

  result = xsltApplyStylesheetUser(stylesheet->stylesheet,
				   doc,
				   (const char **)params,
				   resulturi,
				   profile,
				   userCtxt);

  xsltFreeTransformContext(userCtxt);

  xmlSetGenericErrorFunc((void *) oldxmlErrorCtx, old_xmlGenericError);
  xsltSetGenericErrorFunc((void *) oldxsltErrorCtx, old_xsltGenericError);

  Tcl_MutexUnlock(&libxslt);

  errObjPtr = TclXML_libxml2_GetErrorObj(stylesheet->interp);

  if (result == NULL) {
    Tcl_Obj *resultPtr = Tcl_NewStringObj("no result document: ", -1);

    if (errObjPtr) {
      Tcl_AppendObjToObj(resultPtr, errObjPtr);
      Tcl_SetObjResult(stylesheet->interp, resultPtr);
      goto error;
    } else {
      if (errorInfoPtr->msg) {
	Tcl_AppendObjToObj(resultPtr, errorInfoPtr->msg);
      }

      Tcl_SetObjResult(stylesheet->interp, resultPtr);
      goto error;
    }
  }

  if ((errObjPtr || (errorInfoPtr->code != TCL_OK && errorInfoPtr->msg)) && stylesheet->messagecommand) {

    /* We have produced a result, but there may possibly
     * have been errors.  Trouble is, there might also
     * have been some completely innocent messages.
     * -messageCommand is the only way to find out about these.
     */

    Tcl_Obj *cmdPtr = Tcl_DuplicateObj(stylesheet->messagecommand);
    if (errObjPtr) {
      if (Tcl_ListObjAppendElement(stylesheet->interp, cmdPtr, errObjPtr) != TCL_OK) {
	goto error;
      }
    } else {
      if (Tcl_ListObjAppendElement(stylesheet->interp, cmdPtr, errorInfoPtr->msg) != TCL_OK) {
	goto error;
      }
    }
    if (Tcl_GlobalEvalObj(stylesheet->interp, cmdPtr) != TCL_OK) {
      Tcl_Obj *resultPtr = Tcl_NewStringObj("message command failed: ", -1);

      Tcl_AppendObjToObj(resultPtr, Tcl_GetObjResult(stylesheet->interp));
      Tcl_SetObjResult(stylesheet->interp, resultPtr);
      goto error;
    }

  }

  resultObjPtr = TclDOM_libxml2_CreateObjFromDoc(stylesheet->interp, result);
  Tcl_SetObjResult(stylesheet->interp, resultObjPtr);

  if (errorInfoPtr->msg) {
    Tcl_DecrRefCount(errorInfoPtr->msg);
  }
  Tcl_Free((char *) errorInfoPtr);
  Tcl_Free((char *) params);

  return TCL_OK;

 error:

  if (errorInfoPtr->msg) {
    Tcl_DecrRefCount(errorInfoPtr->msg);
  }
  if (params) {
    Tcl_Free((char *) params);
  }
  Tcl_Free((char *) errorInfoPtr);

  return TCL_ERROR;
}

void
ListObjAppendUniqueList(interp, tablePtr, listPtr, newElementsPtr)
     Tcl_Interp *interp;
     Tcl_HashTable *tablePtr;
     Tcl_Obj *listPtr;
     Tcl_Obj *newElementsPtr;
{
  int len, idx;
  Tcl_Obj *elementPtr, *keyPtr, *namePtr, *nameURIPtr;
  Tcl_HashEntry *entryPtr;

  Tcl_ListObjLength(interp, newElementsPtr, &len);
  for (idx = 0; idx < len; idx++) {
	Tcl_ListObjIndex(interp, newElementsPtr, idx, &elementPtr);
	Tcl_ListObjIndex(interp, elementPtr, 0, &namePtr);
	Tcl_ListObjIndex(interp, elementPtr, 1, &nameURIPtr);

	keyPtr = Tcl_NewObj();
	Tcl_AppendStringsToObj(keyPtr,
						   Tcl_GetStringFromObj(nameURIPtr, NULL), 
						   "^", 
						   Tcl_GetStringFromObj(namePtr, NULL),
						   NULL);
	entryPtr = Tcl_FindHashEntry(tablePtr, (CONST char *) keyPtr);
	if (entryPtr == NULL) {
	  Tcl_ListObjAppendElement(interp, listPtr, elementPtr);
	}
	Tcl_DecrRefCount(keyPtr);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * GetParameters --
 *
 *  Retrieves the parameters for a stylesheet.
 *
 * Results:
 *  Returns a Tcl list object.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

static Tcl_Obj *
GetParameters(interp, stylesheet)
     Tcl_Interp *interp;
     xsltStylesheetPtr stylesheet;
{
  Tcl_Obj *resultPtr, *objPtr, *keyPtr;
  xsltStackElemPtr varPtr;
  Tcl_HashTable entries;  /* to keep track of parameter qnames */
  int new;

  if (stylesheet == NULL) {
    return NULL;
  }

  resultPtr = Tcl_NewListObj(0, NULL);
  Tcl_InitObjHashTable(&entries);

  for (varPtr = stylesheet->variables; varPtr; varPtr = varPtr->next) {
    Tcl_Obj *listPtr;

    if (strcmp((char *) varPtr->comp->inst->name, "param") == 0) {
      listPtr = Tcl_NewListObj(0, NULL);
      Tcl_ListObjAppendElement(interp, listPtr, Tcl_NewStringObj((CONST char *) varPtr->name, -1));
      Tcl_ListObjAppendElement(interp, listPtr, Tcl_NewStringObj((CONST char *) varPtr->nameURI, -1));
      Tcl_ListObjAppendElement(interp, listPtr, Tcl_NewStringObj((CONST char *) varPtr->select, -1));

      Tcl_ListObjAppendElement(interp, resultPtr, listPtr);

	  keyPtr = Tcl_NewStringObj((CONST char *) varPtr->nameURI, -1);
	  Tcl_AppendStringsToObj(keyPtr, "^", varPtr->name, NULL);
	  Tcl_CreateHashEntry(&entries, (CONST char *) keyPtr, &new);
    }
  }

  objPtr = GetParameters(interp, stylesheet->next);
  if (objPtr) {
    ListObjAppendUniqueList(interp, &entries, resultPtr, objPtr);
  }
  objPtr = GetParameters(interp, stylesheet->imports);
  if (objPtr) {
    ListObjAppendUniqueList(interp, &entries, resultPtr, objPtr);
  }

  Tcl_DeleteHashTable(&entries);

  return resultPtr;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLTGenericError --
 *
 *  Handler for stylesheet errors.
 *
 *  NB. Cannot distinguish between errors and use of xsl:message element.
 *
 * Results:
 *  Stores error message.
 *
 * Side effects:
 *  Transform will return error condition.
 *
 *----------------------------------------------------------------------------
 */

static void
TclXSLTGenericError (void *ctx, const char *msg, ...)
{
  va_list args;
  char buf[2048];
  int len;
  GenericError_Info *errorInfoPtr = (GenericError_Info *) ctx;

  if (ctx < (void *) 0x1000) {
    fprintf(stderr, "TclXSLT: bad context\n");
    va_start(args,msg);
    vfprintf(stderr, msg, args);
    va_end(args);
    return;
  }

  va_start(args,msg);
  len = vsnprintf(buf, 2047, msg, args);
  va_end(args);

  if (!errorInfoPtr->interp) {
    return;
  }

  if (errorInfoPtr->stylesheet && errorInfoPtr->stylesheet->messagecommand) {

    Tcl_Obj *cmdPtr = Tcl_DuplicateObj(errorInfoPtr->stylesheet->messagecommand);
    if (Tcl_ListObjAppendElement(errorInfoPtr->interp, cmdPtr, Tcl_NewStringObj(buf, len)) != TCL_OK) {
      Tcl_BackgroundError(errorInfoPtr->interp);
      return;
    }
    if (Tcl_GlobalEvalObj(errorInfoPtr->interp, cmdPtr) != TCL_OK) {
      Tcl_BackgroundError(errorInfoPtr->interp);
      return;
    }

  } else {

    if (!errorInfoPtr->msg) {
      errorInfoPtr->msg = Tcl_NewObj();
      Tcl_IncrRefCount(errorInfoPtr->msg);
    }

    errorInfoPtr->code = TCL_ERROR;

    Tcl_AppendToObj(errorInfoPtr->msg, buf, len);

  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLTExtensionCommand --
 *
 *  Command for xslt::extension command.
 *
 * Results:
 *  Depends on method.
 *
 * Side effects:
 *  Depends on method
 *
 *----------------------------------------------------------------------------
 */

static int
TclXSLTExtensionCommand(dummy, interp, objc, objv)
     ClientData dummy;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  int method, new;
  TclXSLT_Extension *extinfo;
  Tcl_HashEntry *entry;

  if (objc < 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "method ?args ...?");
    return TCL_ERROR;
  }

  if (Tcl_GetIndexFromObj(interp, objv[1], extensionCommandMethods,
			  "method", 0, &method) != TCL_OK) {
    return TCL_ERROR;
  }

  switch ((enum extensionCommandMethods) method) {

  case TCLXSLT_EXT_ADD:
    if (objc != 4) {
      Tcl_WrongNumArgs(interp, 2, objv, "nsuri tcl-namespace");
      return TCL_ERROR;
    }

    Tcl_MutexLock(&libxslt);

    if (xsltRegisterExtModule((const xmlChar *) Tcl_GetStringFromObj(objv[2], NULL),
			      TclXSLTExtInit,
			      TclXSLTExtShutdown)) {
      Tcl_MutexUnlock(&libxslt);
      Tcl_SetResult(interp, "cannot register extension module", NULL);
    }

    Tcl_MutexUnlock(&libxslt);

    extinfo = (TclXSLT_Extension *) Tcl_Alloc(sizeof(TclXSLT_Extension));
    extinfo->interp = interp;
    extinfo->nsuri = objv[2];
    Tcl_IncrRefCount(objv[2]);
    extinfo->tclns = objv[3];
    Tcl_IncrRefCount(objv[3]);

    extinfo->xformCtxt = NULL;

    entry = Tcl_CreateHashEntry(tsdPtr->extensions, Tcl_GetStringFromObj(objv[2], NULL), &new);

    if (!new) {
      Tcl_SetResult(interp, "extension already exists", NULL);
      Tcl_Free((char *) extinfo);
      return TCL_ERROR;
    }

    Tcl_SetHashValue(entry, extinfo);

    TclXSLT_RegisterAll(extinfo, (const xmlChar *) Tcl_GetStringFromObj(objv[2], NULL));

    Tcl_ResetResult(interp);

    break;

  case TCLXSLT_EXT_REMOVE:
    if (objc != 3) {
      Tcl_WrongNumArgs(interp, 2, objv, "nsuri");
      return TCL_ERROR;
    }

    /*
     * TODO: Remove previously registered elements and functions.
    */

    entry = Tcl_FindHashEntry(tsdPtr->extensions, Tcl_GetStringFromObj(objv[2], NULL));
    if (entry == NULL) {
      Tcl_SetResult(interp, "unknown XML Namespace URI", NULL);
      return TCL_ERROR;
    }

    extinfo = (TclXSLT_Extension *) Tcl_GetHashValue(entry);
    Tcl_DecrRefCount(extinfo->nsuri);
    Tcl_DecrRefCount(extinfo->tclns);
    Tcl_Free((char *) extinfo);

    Tcl_DeleteHashEntry(entry);

    break;

  default:
    Tcl_SetResult(interp, "unknown method", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLTExtInit --
 *
 *  Load extensions into a transformation context.
 *
 * Results:
 *  Returns pointer to extension data.
 *  Elements and functions are pre-registered.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

static void *
TclXSLTExtInit(ctxt, URI)
     xsltTransformContextPtr ctxt;
     const xmlChar *URI;
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  Tcl_HashEntry *entry;
  TclXSLT_Extension *extinfo;

  entry = Tcl_FindHashEntry(tsdPtr->extensions, (CONST char *) URI);
  if (entry == NULL) {
    /* Extension module was removed */
    return NULL;
  }

  extinfo = (TclXSLT_Extension *) Tcl_GetHashValue(entry);
  extinfo->xformCtxt = ctxt;

  return (void *) extinfo;
}

void
TclXSLT_RegisterAll(extinfo, nsuri)
    TclXSLT_Extension *extinfo;
    const xmlChar *nsuri;
{
  Tcl_Obj *cmdPtr, *objPtr;
  Tcl_Obj **reg;
  int ret, i, len;

  /*
   * Q: How to distinguish between extension elements and functions?
   * A: Use the formal parameters.  If the command can accept
   * a variable argument list, then it is registered as a function.
   * Otherwise it will be registered as an extension (and expected
   * to accept certain arguments).
   */

  cmdPtr = Tcl_NewStringObj("::xslt::getprocs ", -1);
  Tcl_IncrRefCount(cmdPtr);
  Tcl_AppendObjToObj(cmdPtr, extinfo->tclns);
  ret = Tcl_EvalObjEx(extinfo->interp, cmdPtr, TCL_EVAL_GLOBAL|TCL_EVAL_DIRECT);
  objPtr = Tcl_GetObjResult(extinfo->interp);
  Tcl_IncrRefCount(objPtr);
  Tcl_DecrRefCount(cmdPtr);

  if (ret != TCL_OK || objPtr == NULL) {
    /*
     * Something went wrong, therefore nothing to register.
     */
    return;
  }

  ret = Tcl_ListObjGetElements(extinfo->interp, objPtr, &len, &reg);
  if (ret != TCL_OK || len != 2) {
    /*
     * Something went wrong, therefore nothing to register.
     */
    return;
  }

  /*
   * reg[0] contains extension elements
   * reg[1] contains extension functions
   */

  Tcl_MutexLock(&libxslt);

  /*
   * First register the extension elements.
   */

  ret = Tcl_ListObjLength(extinfo->interp, reg[0], &len);
  if (ret == TCL_OK && len > 0) {
    for (i = 0; i < len; i++) {

      if (Tcl_ListObjIndex(extinfo->interp, reg[0], i, &objPtr) != TCL_OK) {
        continue;
      }

      xsltRegisterExtModuleElement((const xmlChar *) Tcl_GetStringFromObj(objPtr, NULL),
                             nsuri,
                             (xsltPreComputeFunction) TclXSLTExtElementPreComp,
                             (xsltTransformFunction) TclXSLTExtElementTransform);
    }
  }

  /*
   * Now register the extension functions.
   */

  ret = Tcl_ListObjLength(extinfo->interp, reg[1], &len);
  if (ret != TCL_OK || len == 0) {
    Tcl_MutexUnlock(&libxslt);
    return;
  }

  for (i = 0; i < len; i++) {

    if (Tcl_ListObjIndex(extinfo->interp, reg[1], i, &objPtr) != TCL_OK) {
      continue;
    }

    xsltRegisterExtModuleFunction((const xmlChar *) Tcl_GetStringFromObj(objPtr, NULL),
    	nsuri,
    	TclXSLTExtFunction);
  }

  Tcl_MutexUnlock(&libxslt);

  Tcl_DecrRefCount(objPtr);

  return;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLTExtElementPreComp --
 *
 *  Compilation step for extension element.
 *
 * Results:
 *  Not currently used.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

static void 
TclXSLTExtElementPreComp(style, inst, function)
    xsltStylesheetPtr style;
    xmlNodePtr inst;
    xsltTransformFunction function;
{
  return;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLTExtElementTransform --
 *
 *  Implements extension element.
 *
 * Results:
 *  Returns string returned by Tcl command evaluation.
 *
 * Side effects:
 *  Depends on Tcl command evaluated.
 *
 *----------------------------------------------------------------------------
 */

static void 
TclXSLTExtElementTransform(ctxt, node, inst, comp)
    xsltTransformContextPtr ctxt; /* unused */
    xmlNodePtr node;
    xmlNodePtr inst;
    xsltStylePreCompPtr comp; /* unused */
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  TclXSLT_Extension *extinfo;
  Tcl_HashEntry *entry;
  Tcl_Obj *cmdPtr;
  int ret;

  if (inst == NULL) {
    return;
  }

  entry = Tcl_FindHashEntry(tsdPtr->extensions, (CONST char *) inst->ns->href);
  if (entry == NULL) {
    /*
     * Cannot find extension module.
     * Must have been removed.
     */
    return;
  }

  extinfo = (TclXSLT_Extension *) Tcl_GetHashValue(entry);

  /*
   * Start constructing the script by first defining the command.
   */

  cmdPtr = Tcl_DuplicateObj(extinfo->tclns);
  Tcl_AppendStringsToObj(cmdPtr, "::", inst->name, NULL);

  if (Tcl_ListObjAppendElement(extinfo->interp, cmdPtr, TclDOM_libxml2_CreateObjFromNode(extinfo->interp, node)) != TCL_OK) {
    Tcl_DecrRefCount(cmdPtr);
    return;
  }

  /*
   * Converting the stylesheet node to a TclDOM node may clobber the
   * _private pointer.  It would be nice to find the equivalent node
   * in the original DOM tree, but it may not even exist anymore :-(
   *
   * TODO: make extension elements more effective, and allow
   * pre-computation.
   */

  /*
   * Now evaluate the complete command.
   * Can't propagqte a return error result to
   * XSLT, so flag background error instead.
   */
  ret = Tcl_EvalObjEx(extinfo->interp, cmdPtr, TCL_EVAL_GLOBAL | TCL_EVAL_DIRECT);
  if (ret != TCL_OK) {
    Tcl_BackgroundError(extinfo->interp);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLTExtFunction --
 *
 *  Handles evaluation of an extension function.
 *
 * Results:
 *  Returns string returned by Tcl command evaluation.
 *
 * Side effects:
 *  Depends on Tcl command evaluated.
 *
 *----------------------------------------------------------------------------
 */

static void 
TclXSLTExtFunction(xpathCtxt, nargs)
     xmlXPathParserContextPtr xpathCtxt;
     int nargs;
{
  xsltTransformContextPtr xformCtxt;
  TclXSLT_Extension *extinfo;
  Tcl_Obj *cmdPtr, *resultPtr;
  xmlXPathObjectPtr obj;
  int ret;

  Tcl_MutexLock(&libxslt);

  xformCtxt = xsltXPathGetTransformContext(xpathCtxt);

  /*
   * In order to find the instance data we need the
   * XML Namespace URI of this function.
   */

  extinfo = (TclXSLT_Extension *) xsltGetExtData(xformCtxt,
						 xpathCtxt->context->functionURI);

  /*
   * Start constructing the script by first defining the command.
   */

  cmdPtr = Tcl_DuplicateObj(extinfo->tclns);
  Tcl_IncrRefCount(cmdPtr);
  Tcl_AppendStringsToObj(cmdPtr, "::", xpathCtxt->context->function, NULL);

  /*
   * Each argument on the stack is converted to a Tcl_Obj
   * of an appropriate type and passed as an argument to the Tcl command.
   */

  while (nargs) {
    Tcl_Obj *objv[2];

    obj = (xmlXPathObjectPtr) valuePop(xpathCtxt);
    if (obj == NULL) {
      xmlXPathSetError(xpathCtxt, XPATH_INVALID_OPERAND);
      Tcl_DecrRefCount(cmdPtr);
      Tcl_MutexUnlock(&libxslt);
      return;
    }

    objv[0] = TclXSLT_ConvertXPathObjToTclObj(extinfo->interp, obj);
    objv[1] = NULL;
    if (Tcl_ListObjReplace(extinfo->interp, cmdPtr, 1, 0, 1, objv) != TCL_OK) {
      Tcl_BackgroundError(extinfo->interp);
      Tcl_DecrRefCount(objv[0]);
      Tcl_DecrRefCount(cmdPtr);
      Tcl_MutexUnlock(&libxslt);
      return;
    }

    /* When should this XPath object be freed?
     * Immediately before returning from the function call?
     * What if the application retains a pointer to it?
     * If the application destroys the contents, then memory
     * will leak because the XPath object is not freed.
     *
     * TODO: take a copy of the object's content and pass that
     * to the application callback.  That would allow this object
     * to be freed and allow the application to manage the copy.
     
     xmlXPathFreeObject(obj);
     */

    nargs--;
  }

  ret = Tcl_EvalObjEx(extinfo->interp, cmdPtr, TCL_EVAL_GLOBAL | TCL_EVAL_DIRECT);
  resultPtr = Tcl_GetObjResult(extinfo->interp);
  Tcl_DecrRefCount(cmdPtr);
  Tcl_IncrRefCount(resultPtr);

  if (ret == TCL_OK) {
    obj = TclXSLT_ConvertTclObjToXPathObj(extinfo->interp, resultPtr);
    valuePush(xpathCtxt, obj);
  } else {
    xmlGenericError(xmlGenericErrorContext,
		    "%s", Tcl_GetStringFromObj(resultPtr, NULL));
    /* Need to define a new error code - this is the closest in meaning */
    xpathCtxt->error = XPATH_UNKNOWN_FUNC_ERROR;
  }

  Tcl_MutexUnlock(&libxslt);

  Tcl_DecrRefCount(resultPtr);

}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLT_ConvertTclObjToXPathObj --
 *
 *  Convert a Tcl Object to an XPath object.
 *  Data type is preserved, with nodesets being
 *  mapped from a list of nodes.
 *
 * NB. Mutex is assumed to be locked when invoking this routine.
 *
 * Results:
 *  XPath Object.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

static xmlXPathObjectPtr
TclXSLT_ConvertTclObjToXPathObj(interp, objPtr)
     Tcl_Interp *interp;
     Tcl_Obj *objPtr;
{
  xmlNodePtr nodePtr;
  xmlDocPtr docPtr;

  if (TclDOM_libxml2_GetNodeFromObj(interp, objPtr, &nodePtr) == TCL_OK) {
    return xmlXPathNewNodeSet(nodePtr);
  }
  
   if (TclXML_libxml2_GetDocFromObj(interp, objPtr, &docPtr) == TCL_OK) {
    return xmlXPathNewNodeSet((xmlNodePtr) docPtr);

  }
  
  if (objPtr->typePtr == Tcl_GetObjType("int") ||
      objPtr->typePtr == Tcl_GetObjType("double")) {
    double number;

    if (Tcl_GetDoubleFromObj(interp, objPtr, &number) == TCL_OK) {
      return xmlXPathNewFloat(number);
    } else {
      return NULL;
    }
  } else if (objPtr->typePtr == Tcl_GetObjType("boolean")) {
    int boolv;

    if (Tcl_GetBooleanFromObj(interp, objPtr, &boolv) == TCL_OK) {
      return xmlXPathNewBoolean(boolv);
    } else {
      return NULL;
    }
  } else if (objPtr->typePtr == Tcl_GetObjType("list")) {
    /*
     * If each of the elements can be converted to a node,
     * then return a nodeset.
     */

    int i, len;
    Tcl_Obj **listPtr;
    xmlNodeSetPtr nset;

    Tcl_ListObjGetElements(interp, objPtr, &len, &listPtr);
    if (len == 0) {
      return xmlXPathNewNodeSet(NULL);
    }

    /*
     * First pass: check that the elements are all nodes.
     */
    for (i = 0; i < len; i++) {
      if (TclXML_libxml2_GetDocFromObj(interp, listPtr[i], &docPtr) == TCL_OK) {
        continue;
      }
      if (TclDOM_libxml2_GetNodeFromObj(interp, listPtr[i], &nodePtr) != TCL_OK) {
        return xmlXPathNewString((const xmlChar *) Tcl_GetStringFromObj(objPtr, NULL));
      }
    }
    /*
     * Now go ahead and create the nodeset (we already did the hard
     * work to create internal reps in pass 1).
     */
    if (TclXML_libxml2_GetDocFromObj(interp, listPtr[0], &docPtr) == TCL_OK) {
      nset = xmlXPathNodeSetCreate((xmlNodePtr) docPtr);
    } else {
      TclDOM_libxml2_GetNodeFromObj(interp, listPtr[0], &nodePtr);
      nset = xmlXPathNodeSetCreate(nodePtr);
    }
    for (i = 1; i < len; i++) {
      if (TclXML_libxml2_GetDocFromObj(interp, listPtr[i], &docPtr) == TCL_OK) {
        xmlXPathNodeSetAdd(nset, (xmlNodePtr) docPtr);
      } else {
        TclDOM_libxml2_GetNodeFromObj(interp, listPtr[i], &nodePtr);
        xmlXPathNodeSetAdd(nset, nodePtr);
      }
    }
    return xmlXPathWrapNodeSet(nset);

  } else {
    return xmlXPathNewString((const xmlChar *) Tcl_GetStringFromObj(objPtr, NULL));
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLT_ConvertXPathObjToTclObj --
 *
 *  Convert an XPath object to a Tcl Object.
 *  Data type is preserved, with nodesets being
 *  mapped to a list of nodes.
 *
 * Results:
 *  Tcl Object.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

static Tcl_Obj *
TclXSLT_ConvertXPathObjToTclObj(interp, xpobj)
     Tcl_Interp *interp;
     xmlXPathObjectPtr xpobj;
{
  Tcl_Obj *objPtr;
  int i;

  switch (xpobj->type) {
    case XPATH_XSLT_TREE:
    case XPATH_NODESET:

      objPtr = Tcl_NewListObj(0, NULL);
      if (xpobj->nodesetval) {
	for (i = 0; i < xpobj->nodesetval->nodeNr; i++) {
	  Tcl_Obj *nodeObjPtr = NULL;
	  if (xpobj->nodesetval->nodeTab[i] &&
	      xpobj->nodesetval->nodeTab[i]->type == XML_DOCUMENT_NODE) {
	    nodeObjPtr = TclXML_libxml2_CreateObjFromDoc((xmlDocPtr) xpobj->nodesetval->nodeTab[i]);
	  } else if (xpobj->nodesetval->nodeTab[i]) {
	    nodeObjPtr = TclDOM_libxml2_CreateObjFromNode(interp, xpobj->nodesetval->nodeTab[i]);
	  }
	  Tcl_ListObjAppendElement(interp, objPtr, nodeObjPtr);
	}
      }

      break;

    case XPATH_BOOLEAN:
      objPtr = Tcl_NewBooleanObj(xpobj->boolval);
      break;
      
    case XPATH_NUMBER:
      objPtr = Tcl_NewDoubleObj(xpobj->floatval);
      break;

    case XPATH_STRING:
    case XPATH_UNDEFINED:
    case XPATH_POINT:
    case XPATH_RANGE:
    case XPATH_LOCATIONSET:
    case XPATH_USERS:
    default:
      objPtr = Tcl_NewStringObj((CONST char *) xmlXPathCastToString(xpobj), -1);

      break;
  }

  return objPtr;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLTExtShutdown --
 *
 *  Clean up.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

static void
TclXSLTExtShutdown(ctxt, URI, userdata)
     xsltTransformContextPtr ctxt;
     const xmlChar *URI;
     void *userdata;
{
  /* Nothing to do */
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXSLTSecurity --
 * TclXSLTSecurityReadFile --
 * TclXSLTSecurityWriteFile --
 * TclXSLTSecurityCreateDirectory --
 * TclXSLTSecurityReadNetwork --
 * TclXSLTSecurityWriteNetwork --
 *
 *  Check if external operations are permitted.
 *
 * Results:
 *  Returns boolean value.
 *
 * Side effects:
 *  Depends on callback.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXSLTSecurity(name, method, value)
     Tcl_Obj *name;
     const char *method;
     const char *value;
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  Tcl_Interp *master;
  Tcl_Obj *cmdPtr, *pathPtr;
  int result, permitted;

  if (Tcl_IsSafe(tsdPtr->interp)) {

    /*
     * Invoke hidden command
     */

    master = Tcl_GetMaster(tsdPtr->interp);

    if (!Tcl_IsSafe(master)) {
      return 0;
    }

    if (Tcl_GetInterpPath(master, tsdPtr->interp) != TCL_OK) {
      return 0;
    }
    pathPtr = Tcl_GetObjResult(master);

    cmdPtr = Tcl_NewListObj(0, NULL);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_ListObjAppendElement(master, cmdPtr, Tcl_NewStringObj("interp", -1));
    Tcl_ListObjAppendElement(master, cmdPtr, Tcl_NewStringObj("invokehidden", -1));
    Tcl_ListObjAppendElement(master, cmdPtr, pathPtr);
    Tcl_ListObjAppendElement(master, cmdPtr, Tcl_NewStringObj("-global", -1));
    Tcl_ListObjAppendElement(master, cmdPtr, Tcl_NewStringObj("::xslt::security", -1));
    Tcl_ListObjAppendElement(master, cmdPtr, name);
    Tcl_ListObjAppendElement(master, cmdPtr, Tcl_NewStringObj(method, -1));
    Tcl_ListObjAppendElement(master, cmdPtr, Tcl_NewStringObj(value, -1));

    result = Tcl_EvalObjEx(master, cmdPtr, TCL_EVAL_GLOBAL|TCL_EVAL_DIRECT);

    Tcl_DecrRefCount(cmdPtr);
  } else {

    /*
     * Invoke command normally
     */

    cmdPtr = Tcl_NewListObj(0, NULL);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_ListObjAppendElement(tsdPtr->interp, cmdPtr, Tcl_NewStringObj("::xslt::security", -1));
    Tcl_ListObjAppendElement(tsdPtr->interp, cmdPtr, name);
    Tcl_ListObjAppendElement(tsdPtr->interp, cmdPtr, Tcl_NewStringObj(method, -1));
    Tcl_ListObjAppendElement(tsdPtr->interp, cmdPtr, Tcl_NewStringObj(value, -1));

    result = Tcl_EvalObjEx(tsdPtr->interp, cmdPtr, TCL_EVAL_GLOBAL|TCL_EVAL_DIRECT);

    Tcl_DecrRefCount(cmdPtr);
  }

  if (result == TCL_OK) {
    if (Tcl_GetBooleanFromObj(tsdPtr->interp, Tcl_GetObjResult(tsdPtr->interp), &permitted) == TCL_OK) {
      return permitted;
    } else if (Tcl_IsSafe(tsdPtr->interp)) {
      return 0;
    } else {
      return 1;
    }
  } else if (Tcl_IsSafe(tsdPtr->interp)) {
    return 0;
  } else {
    return 1;
  }
}
static Tcl_Obj *
TclXSLTSecurityGetName(ctxt)
     xsltTransformContextPtr ctxt;
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  Tcl_HashEntry *entryPtr;

  if (ctxt) {
    entryPtr = Tcl_FindHashEntry(tsdPtr->stylesheets, (ClientData) ctxt->style);
    if (entryPtr) {
      return Tcl_NewStringObj((char *) Tcl_GetHashValue(entryPtr), -1);
    } else {
      return Tcl_NewObj();
    }
  } else {
    return Tcl_NewObj();
  }
}
static int
TclXSLTSecurityReadFile(sec, ctxt, value)
     xsltSecurityPrefsPtr sec;
     xsltTransformContextPtr ctxt;
     const char *value;
{
  return TclXSLTSecurity(TclXSLTSecurityGetName(ctxt), "readfile", value);
}
static int
TclXSLTSecurityWriteFile(sec, ctxt, value)
     xsltSecurityPrefsPtr sec;
     xsltTransformContextPtr ctxt;
     const char *value;
{
  return TclXSLTSecurity(TclXSLTSecurityGetName(ctxt), "writefile", value);
}
static int
TclXSLTSecurityCreateDirectory(sec, ctxt, value)
     xsltSecurityPrefsPtr sec;
     xsltTransformContextPtr ctxt;
     const char *value;
{
  return TclXSLTSecurity(TclXSLTSecurityGetName(ctxt), "createdirectory", value);
}
static int
TclXSLTSecurityReadNetwork(sec, ctxt, value)
     xsltSecurityPrefsPtr sec;
     xsltTransformContextPtr ctxt;
     const char *value;
{
  return TclXSLTSecurity(TclXSLTSecurityGetName(ctxt), "readnetwork", value);
}
static int
TclXSLTSecurityWriteNetwork(sec, ctxt, value)
     xsltSecurityPrefsPtr sec;
     xsltTransformContextPtr ctxt;
     const char *value;
{
  return TclXSLTSecurity(TclXSLTSecurityGetName(ctxt), "writenetwork", value);
}
