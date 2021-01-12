/* tcllibxml2.c --
 *
 *	A Tcl wrapper for libxml2.
 *
 * Copyright (c) 2005-2008 Explain.
 * http://www.explain.com.au/
 * Copyright (c) 2003-2004 Zveno Pty Ltd
 * http://www.zveno.com/
 *
 * See the file "LICENSE" for information on usage and
 * redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * $Id: tclxml-libxml2.c,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $
 */

#include <tclxml-libxml2/tclxml-libxml2.h>
#include <libxml/globals.h>
#include <libxml/tree.h>
#include <libxml/parserInternals.h>
#include <libxml/xmlreader.h>
#include <libxml/SAX2.h>
#include <libxml/xmlerror.h>
#include <libxml/uri.h>
#include <string.h>

#define TCL_DOES_STUBS \
    (TCL_MAJOR_VERSION > 8 || TCL_MAJOR_VERSION == 8 && (TCL_MINOR_VERSION > 1 || \
    (TCL_MINOR_VERSION == 1 && TCL_RELEASE_LEVEL == TCL_FINAL_RELEASE)))

/*
 * The structure below is used to refer to a libxml2 parser object.
 */

typedef struct TclXMLlibxml2Info {
  Tcl_Interp *interp;		/* Interpreter for this instance */

  xmlTextReaderPtr reader;  /* New TextReader interface */

  Tcl_Obj *docObjPtr;		/* Result of parsing */
  TclXML_libxml2_DocumentHandling keep;	/* Document handling flag */
  Tcl_Obj *preserve;  /* XPath for retaining (a portion of) the document */
  Tcl_Obj *preservens; /* list of namespace declarations */

  TclXML_Info *xmlinfo;		/* Generic data structure */

  Tcl_HashTable *scope;		/* XML namespaces in scope */

} TclXMLlibxml2Info;

/*
 * Forward declarations for private functions.
 */

static ClientData ReaderCreate _ANSI_ARGS_((Tcl_Interp *interp, 
											TclXML_Info *xmlinfo));
static int  ReaderReset _ANSI_ARGS_((ClientData clientData));
static int	TclXMLlibxml2Delete _ANSI_ARGS_((ClientData clientData));
static int	ReaderParse _ANSI_ARGS_((ClientData clientData, 
											char *data, int len, int final));
static int	TclXMLlibxml2Configure _ANSI_ARGS_((ClientData clientdata, 
						    Tcl_Obj *CONST optionPtr,
						    Tcl_Obj *CONST valuePtr));
static int	TclXMLlibxml2Get _ANSI_ARGS_((ClientData clientData, 
                    int objc, Tcl_Obj *CONST objv[]));

static xmlParserInputPtr TclXMLlibxml2ExternalEntityLoader _ANSI_ARGS_((const char *URL,
									const char *ID,
									xmlParserCtxtPtr ctxt));

/*
 * Externally visible functions
 */

typedef struct ThreadSpecificData {
  int initialized;

  Tcl_Interp *interp;

  /*
   * Interpose on default external entity loader
   */

  TclXMLlibxml2Info *current;
  xmlExternalEntityLoader defaultLoader;

} ThreadSpecificData;
static Tcl_ThreadDataKey dataKey;

/*
 * libxml2 is mostly thread-safe, but there are issues with error callbacks
 */

TCL_DECLARE_MUTEX(libxml2)

#ifndef CONST84
#define CONST84 /* Before 8.4 no 'const' required */
#endif

/*
 *----------------------------------------------------------------------------
 *
 * Tclxml_libxml2_Init --
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
Tclxml_libxml2_Init (interp)
     Tcl_Interp *interp;	/* Interpreter to initialise */
{
  ThreadSpecificData *tsdPtr;
  TclXML_ParserClassInfo *classinfo;

#ifdef USE_TCL_STUBS
  if (Tcl_InitStubs(interp, "8.1", 0) == NULL) {
    return TCL_ERROR;
  }
#endif
#ifdef USE_TCLXML_STUBS
  if (TclXML_InitStubs(interp, TCLXML_VERSION, 1) == NULL) {
    return TCL_ERROR;
  }
#endif

  classinfo = (TclXML_ParserClassInfo *) ckalloc(sizeof(TclXML_ParserClassInfo));
  classinfo->name = Tcl_NewStringObj("libxml2", -1);
  classinfo->create = ReaderCreate;
  classinfo->createCmd = NULL;
  classinfo->createEntity = NULL; /* TclXMLlibxml2CreateEntityParser; */
  classinfo->createEntityCmd = NULL;
  classinfo->parse = ReaderParse;
  classinfo->parseCmd = NULL;
  classinfo->configure = TclXMLlibxml2Configure;
  classinfo->configureCmd = NULL;
  classinfo->get = TclXMLlibxml2Get;
  classinfo->getCmd = NULL;
  classinfo->destroy = TclXMLlibxml2Delete;
  classinfo->destroyCmd = NULL;
  classinfo->reset = ReaderReset;
  classinfo->resetCmd = NULL;

  if (TclXML_RegisterXMLParser(interp, classinfo) != TCL_OK) {
    Tcl_SetResult(interp, "unable to register parser", NULL);
    return TCL_ERROR;
  }

  /* Configure the libxml2 parser */

  Tcl_MutexLock(&libxml2);

  xmlInitParser();
  xmlSubstituteEntitiesDefault(1);

  /*
   * TODO: provide configuration option for setting this value.
   */
  xmlLoadExtDtdDefaultValue |= 1;
  xmlLoadExtDtdDefaultValue |= XML_COMPLETE_ATTRS;

  /*
   * Override default entity loader so we can implement callbacks
   */

  tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));

  if (!tsdPtr->initialized) {
    tsdPtr->initialized = 1;
    tsdPtr->interp = interp;

    tsdPtr->current = NULL;
    tsdPtr->defaultLoader = xmlGetExternalEntityLoader();
    xmlSetExternalEntityLoader(TclXMLlibxml2ExternalEntityLoader);
  } /* only need to init the library once per process */

  /* Setting the variable is insufficient - must create namespace too. */
  if (Tcl_VarEval(interp, "namespace eval ::xml::libxml2 {variable libxml2version ", xmlParserVersion, "}\n", NULL) != TCL_OK) {
    return TCL_ERROR;
  }

  Tcl_MutexUnlock(&libxml2);

  TclXML_libxml2_InitDocObj(interp);

  #if (TCL_DOES_STUBS && USE_TCLXML_STUBS)
    {
      extern Tclxml_libxml2Stubs tclxml_libxml2Stubs;
      if (Tcl_PkgProvideEx(interp, "xml::libxml2", TCLXML_VERSION,
	(ClientData) &tclxml_libxml2Stubs) != TCL_OK) {
        return TCL_ERROR;
      }
    }
  #else
    if (Tcl_PkgProvide(interp, "xml::libxml2", TCLXML_VERSION) != TCL_OK) {
      return TCL_ERROR;
    }
  #endif

  return TCL_OK;
}

/*
 * TclXML/libxml2 is made safe by preventing the use of the default
 * external entity loader.
 */

int
Tclxml_libxml2_SafeInit (interp)
     Tcl_Interp *interp;	/* Interpreter to initialise */
{
  return Tclxml_libxml2_Init(interp);
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLlibxml2Create --
 *
 *	Prepare for parsing.
 *
 * Results:
 *	Standard Tcl result.
 *
 * Side effects:
 *	This creates a Text Reader.
 *
 *----------------------------------------------------------------------------
 */

static ClientData
ReaderCreate(interp, xmlinfo)
     Tcl_Interp *interp;
     TclXML_Info *xmlinfo;
{
  TclXMLlibxml2Info *info;
  xmlParserInputBufferPtr inputPtr;

  if (!(info = (TclXMLlibxml2Info *) Tcl_Alloc(sizeof(TclXMLlibxml2Info)))) {
    Tcl_Free((char *) info);
    Tcl_SetResult(interp, "unable to create parser", NULL);
    return NULL;
  }
  info->interp = interp;
  info->xmlinfo = xmlinfo;
  info->preserve = NULL;
  info->preservens = NULL;

  /* Create a dummy input buffer for the purpose of creating the TextReader.
   * This will be replaced when we come to actually parse the document.
   */
  Tcl_MutexLock(&libxml2);
  inputPtr = xmlAllocParserInputBuffer(XML_CHAR_ENCODING_NONE);
  if (inputPtr == NULL) {
	Tcl_MutexUnlock(&libxml2);
	
	Tcl_Free((char *) info);
	Tcl_SetResult(interp, "unable to create input buffer", NULL);
	return NULL;
  }
  info->reader = xmlNewTextReader(inputPtr, NULL);
  if (info->reader == NULL) {
	Tcl_MutexUnlock(&libxml2);

	Tcl_Free((char *) info);
	Tcl_SetResult(interp, "unable to create XML reader", NULL);
	return NULL;
  }
   xmlTextReaderSetStructuredErrorHandler(info->reader,
					  (xmlStructuredErrorFunc) TclXML_libxml2_ErrorHandler,
					  NULL);

  Tcl_MutexUnlock(&libxml2);

  info->docObjPtr = NULL;
  info->keep = TCLXML_LIBXML2_DOCUMENT_IMPLICIT;
  info->scope = (Tcl_HashTable *) Tcl_Alloc(sizeof(Tcl_HashTable));
  Tcl_InitHashTable(info->scope, TCL_STRING_KEYS);

  return (ClientData) info;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLlibxml2Delete --
 *
 *	Destroy the libxml2 parser structure.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	Frees any memory allocated for the XML parser.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXMLlibxml2Delete(clientData)
     ClientData clientData;
{
  TclXMLlibxml2Info *info = (TclXMLlibxml2Info *) clientData;

  if (info->reader) {
    xmlFreeTextReader(info->reader);
  }
  if (info->docObjPtr) {
    Tcl_DecrRefCount(info->docObjPtr);
  }
  if (info->preserve) {
    Tcl_DecrRefCount(info->preserve);
  }
  if (info->preservens) {
    Tcl_DecrRefCount(info->preservens);
  }
  Tcl_DeleteHashTable(info->scope);
  Tcl_Free((char *) info->scope);
  Tcl_Free((char *) info);

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * ReaderReset --
 *
 *	Reset the libxml2 parser structure.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	None.
 *
 *----------------------------------------------------------------------------
 */

static int
ReaderReset(clientData)
ClientData clientData;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) clientData;

  if (xmlinfo->clientData == NULL) {
    xmlinfo->clientData = (ClientData) ReaderCreate(xmlinfo->interp, xmlinfo);
    if (xmlinfo->clientData == NULL) {
      return TCL_ERROR;
    }
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * ReaderParse --
 *
 *	Wrapper to invoke libxml2 parser and check return result.
 *
 *	NB. Most of the logic from xmlSAXUserParseMemory is used here.
 *
 * Results:
 *     TCL_OK if no errors, TCL_ERROR otherwise.
 *
 * Side effects:
 *     Sets interpreter result as appropriate.
 *
 *----------------------------------------------------------------------------
 */

static int
ReaderParse(clientData, data, len, final)
     ClientData clientData;
     char *data;
     int len;
     int final;
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  TclXMLlibxml2Info *info = (TclXMLlibxml2Info *) clientData;
  Tcl_Obj *nameObj, *nsObj, *nsdeclObj, *valueObj, *attrsObj, *errObj, *baseuriObj, *sysidObj, *extidObj;
  const char *baseuri, *encoding, *name, *ns, *value;
  xmlChar **preservens = NULL;
  int ret, result = TCL_OK, i, listlen, options = 0, empty;

  /* not used... at present (see case XML_READER_TYPE_DOCUMENT_TYPE)
    xmlNodePtr nodePtr;
  */
  xmlEntityPtr entityPtr = NULL;

  if (final == 0) {
    Tcl_SetResult(info->interp, "partial input not yet supported", NULL);
    return TCL_ERROR;
  }

  if (info->preserve && info->preservens) {
    if (Tcl_ListObjLength(info->interp, info->preservens, &listlen) != TCL_OK) {
      return TCL_ERROR;
    }
    preservens = (xmlChar **) Tcl_Alloc(len * sizeof(xmlChar *) + 1);
    for (i = 0; i < listlen; i++) {
      Tcl_Obj *objPtr;
      const char *str;
      int strlen;

      if (Tcl_ListObjIndex(info->interp, info->preservens, i, &objPtr) != TCL_OK) {
	Tcl_Free((char *) preservens);
	return TCL_ERROR;
      }
      str = Tcl_GetStringFromObj(objPtr, &strlen);
      preservens[i] = xmlCharStrndup(str, strlen);
    }
    preservens[listlen] = NULL;
  }
  if (info->xmlinfo->base) {
	baseuri = Tcl_GetStringFromObj(info->xmlinfo->base, NULL);
  } else {
	baseuri = NULL;
  }
  if (info->xmlinfo->encoding) {
	encoding = Tcl_GetStringFromObj(info->xmlinfo->encoding, NULL);
	if (strcmp(encoding, "unknown") == 0) {
	  encoding = NULL;
	}
  } else {
	encoding = "utf-8";
  }

  TclXML_libxml2_ResetError(info->interp);

  options |= XML_PARSE_NOCDATA;

  tsdPtr->current = info;

  Tcl_MutexLock(&libxml2);

  if (info->xmlinfo->expandinternalentities) {
    options |= XML_PARSE_NOENT;
    xmlSubstituteEntitiesDefault(1);
  } else {
    xmlSubstituteEntitiesDefault(0);
  }
  if (info->xmlinfo->nowhitespace) {
    options |= XML_PARSE_NOBLANKS;
  }

  if (xmlReaderNewMemory(info->reader,
			 data, len,
			 baseuri,
			 encoding,
			 options) != 0) {
    Tcl_MutexUnlock(&libxml2);
    if (preservens) {
      int i;
      for (i = 0; preservens[i]; i++) {
	xmlFree(preservens[i]);
      }
      Tcl_Free((char *) preservens);
    }
    tsdPtr->current = NULL;
    Tcl_SetResult(info->interp, "unable to prepare parser", NULL);
    return TCL_ERROR;
  }

  if (info->preserve) {
    int preserveret;
    preserveret = xmlTextReaderPreservePattern(info->reader,
					       (const xmlChar *) Tcl_GetStringFromObj(info->preserve, NULL),
					       (const xmlChar **) preservens);
    if (preserveret < 0) {
      Tcl_MutexUnlock(&libxml2);
      if (preservens) {
	int i;
	for (i = 0; preservens[i]; i++) {
	  xmlFree(preservens[i]);
	}
	Tcl_Free((char *) preservens);
      }
      tsdPtr->current = NULL;
      Tcl_ResetResult(info->interp);
      Tcl_AppendResult(info->interp,
		       "preparation for parsing failed: unable to preserve pattern \"",
		       Tcl_GetStringFromObj(info->preserve, NULL),
		       "\"",
		       NULL);
      return TCL_ERROR;
    }
  }

  for (ret = xmlTextReaderRead(info->reader);
       ret == 1;
       ret = xmlTextReaderRead(info->reader)) {
    result = TCL_OK;
    switch (xmlTextReaderNodeType(info->reader)) {
    case XML_READER_TYPE_ELEMENT:
      name = (const char *) xmlTextReaderConstLocalName(info->reader);
      ns = (const char *) xmlTextReaderConstNamespaceUri(info->reader);
      Tcl_MutexUnlock(&libxml2);
      if (name != NULL) {
	nameObj = Tcl_NewStringObj(name, -1);
      } else {
	nameObj = Tcl_NewObj();
      }
      Tcl_IncrRefCount(nameObj);
      if (ns != NULL) {
	nsObj = Tcl_NewStringObj(ns, -1);
      } else {
	nsObj = Tcl_NewObj();
      }
      Tcl_IncrRefCount(nsObj);

      attrsObj = Tcl_NewObj();
      Tcl_IncrRefCount(attrsObj);
      Tcl_MutexLock(&libxml2);
      if (xmlTextReaderHasAttributes(info->reader)) {
	if (xmlTextReaderMoveToFirstAttribute(info->reader) == 1) {
	  Tcl_Obj *itemObj;

	  itemObj = Tcl_NewObj();
	  Tcl_SetStringObj(itemObj, (CONST char *) xmlTextReaderConstLocalName(info->reader), -1);
	  Tcl_ListObjAppendElement(info->interp, attrsObj, itemObj);
	  itemObj = Tcl_NewStringObj((CONST char *) xmlTextReaderConstValue(info->reader), -1);
	  Tcl_ListObjAppendElement(info->interp, attrsObj, itemObj);

	  while (xmlTextReaderMoveToNextAttribute(info->reader) == 1) {
	    itemObj = Tcl_NewStringObj((CONST char *) xmlTextReaderConstLocalName(info->reader), -1);
	    Tcl_ListObjAppendElement(info->interp, attrsObj, itemObj);
	    itemObj = Tcl_NewStringObj((CONST char *) xmlTextReaderConstValue(info->reader), -1);
	    Tcl_ListObjAppendElement(info->interp, attrsObj, itemObj);
	  }
	}
      }
      empty = xmlTextReaderIsEmptyElement(info->reader);
      Tcl_MutexUnlock(&libxml2);

      nsdeclObj = Tcl_NewObj();
      Tcl_IncrRefCount(nsdeclObj);

      TclXML_ElementStartHandler(info->xmlinfo,
				 nameObj,
				 nsObj,
				 attrsObj, nsdeclObj);

      Tcl_DecrRefCount(nsdeclObj);

      if (empty) {
	TclXML_ElementEndHandler(info->xmlinfo,
				 nameObj);
      }

      Tcl_DecrRefCount(nameObj);
      Tcl_DecrRefCount(nsObj);
      Tcl_DecrRefCount(attrsObj);
      break;

    case XML_READER_TYPE_END_ELEMENT:
      name = (const char *) xmlTextReaderConstLocalName(info->reader);
      ns = (const char *) xmlTextReaderConstNamespaceUri(info->reader);
      Tcl_MutexUnlock(&libxml2);

      if (name != NULL) {
	nameObj = Tcl_NewStringObj(name, -1);
      } else {
	nameObj = Tcl_NewObj();
      }
      Tcl_IncrRefCount(nameObj);
      if (ns != NULL) {
	nsObj = Tcl_NewStringObj(ns, -1);
      } else {
	nsObj = Tcl_NewObj();
      }
      Tcl_IncrRefCount(nsObj);

      TclXML_ElementEndHandler(info->xmlinfo,
			       nameObj);

      Tcl_DecrRefCount(nameObj);
      Tcl_DecrRefCount(nsObj);
      break;

    case XML_READER_TYPE_TEXT:
    case XML_READER_TYPE_CDATA:
    case XML_READER_TYPE_WHITESPACE:
    case XML_READER_TYPE_SIGNIFICANT_WHITESPACE:
      value = (const char *) xmlTextReaderConstValue(info->reader);
      Tcl_MutexUnlock(&libxml2);
      if (value != NULL) {
	valueObj = Tcl_NewStringObj(value, -1);
      } else {
	valueObj = Tcl_NewObj();
      }
      Tcl_IncrRefCount(valueObj);

      TclXML_CharacterDataHandler(info->xmlinfo,
				  valueObj);

      Tcl_DecrRefCount(valueObj);
      break;

    case XML_READER_TYPE_COMMENT:
      value = (const char *) xmlTextReaderConstValue(info->reader);
      Tcl_MutexUnlock(&libxml2);
      if (value != NULL) {
	valueObj = Tcl_NewStringObj(value, -1);
      } else {
	valueObj = Tcl_NewObj();
      }

      TclXML_CommentHandler(info->xmlinfo,
			    valueObj);
      break;

    case XML_READER_TYPE_PROCESSING_INSTRUCTION:
      name = (const char *) xmlTextReaderConstName(info->reader);
      value = (const char *) xmlTextReaderConstValue(info->reader);
      Tcl_MutexUnlock(&libxml2);
      if (name != NULL) {
	nameObj = Tcl_NewStringObj(name, -1);
      } else {
	nameObj = Tcl_NewObj();
      }
      if (value != NULL) {
	valueObj = Tcl_NewStringObj(value, -1);
      } else {
	valueObj = Tcl_NewObj();
      }

      TclXML_ProcessingInstructionHandler(info->xmlinfo,
					  nameObj,
					  valueObj);
      break;

    case XML_READER_TYPE_ENTITY_REFERENCE:
      name = (const char *) xmlTextReaderConstName(info->reader);
      baseuri = (const char *) xmlTextReaderConstBaseUri(info->reader);
      entityPtr = xmlGetDocEntity(xmlTextReaderCurrentDoc(info->reader),
				  (const xmlChar *) name);
      Tcl_MutexUnlock(&libxml2);

      nameObj = Tcl_NewStringObj(name, -1);
      Tcl_IncrRefCount(nameObj);
      baseuriObj = Tcl_NewStringObj(baseuri, -1);
      Tcl_IncrRefCount(baseuriObj);
      sysidObj = Tcl_NewStringObj((CONST char *) entityPtr->SystemID, -1);
      Tcl_IncrRefCount(sysidObj);
      extidObj = Tcl_NewStringObj((CONST char *) entityPtr->ExternalID, -1);
      Tcl_IncrRefCount(extidObj);

      result = TclXML_ExternalEntityRefHandler(info->xmlinfo,
					       nameObj,
					       baseuriObj,
					       sysidObj,
					       extidObj);

      Tcl_MutexLock(&libxml2);

      Tcl_DecrRefCount(nameObj);
      Tcl_DecrRefCount(baseuriObj);
      Tcl_DecrRefCount(sysidObj);
      Tcl_DecrRefCount(extidObj);

      if (result == TCL_ERROR || result == TCL_BREAK) {
	Tcl_MutexUnlock(&libxml2);
	xmlTextReaderClose(info->reader);
	break;
      }
      Tcl_MutexUnlock(&libxml2);

      break;

    case XML_READER_TYPE_DOCUMENT_TYPE:
      /* these are not used... at present
	name = xmlTextReaderName(info->reader);
	nodePtr = xmlTextReaderCurrentNode(info->reader);
      */
      Tcl_MutexUnlock(&libxml2);

    default:
      break;
    }
    Tcl_MutexLock(&libxml2);
  }

  Tcl_MutexUnlock(&libxml2);

  if (preservens) {
    int i;
    for (i = 0; preservens[i]; i++) {
      xmlFree(preservens[i]);
    }
    Tcl_Free((char *) preservens);
  }

  if (ret != 0 || result != TCL_OK) {
    errObj = TclXML_libxml2_GetErrorObj(info->interp);
    if (errObj) {
      Tcl_SetObjResult(info->interp, errObj);
    } else {
      Tcl_SetResult(info->interp, "parsing error", NULL);
    }
    tsdPtr->current = NULL;

    return TCL_ERROR;
  }

  info->docObjPtr = TclXML_libxml2_CreateObjFromDoc(xmlTextReaderCurrentDoc(info->reader));

  TclXML_libxml2_DocKeep(info->docObjPtr, info->keep);

  /* TODO: errObjPtr may contain warnings, flush them through */
  
  tsdPtr->current = NULL;
  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLlibxml2Configure --
 *
 *      Set options for the parser.
 *
 * Results:
 *     None.
 *
 * Side effects:
 *     None (there are no options to set).
 *
 *----------------------------------------------------------------------------
 */

static int
TclXMLlibxml2Configure(clientData, optionPtr, valuePtr)
    ClientData clientData;
    Tcl_Obj *CONST optionPtr;
    Tcl_Obj *CONST valuePtr;
{
  TclXMLlibxml2Info *info = (TclXMLlibxml2Info *) clientData;
  int option, len;
  char *value;
  CONST84 char *Options[] = {
    "-keep",
    "-retainpath",
    "-retainpathns",
    NULL
  };
  enum Options {
    OPTION_KEEP,
    OPTION_RETAINPATH,
    OPTION_RETAINPATHNS
  };
  CONST84 char *KeepOptions[] = {
    "normal",
    "implicit",
    NULL
  };
  enum KeepOptions {
    OPTION_KEEP_NORMAL,
    OPTION_KEEP_IMPLICIT
  };

  if (Tcl_GetIndexFromObj(info->interp, optionPtr, Options,
			  "option", 0, &option) != TCL_OK) {
    /*
     * Just ignore options we don't understand
     */
    return TCL_OK;
  }

  switch ((enum Options) option) {
  case OPTION_KEEP:

    value = Tcl_GetStringFromObj(valuePtr, &len);
    if (len == 0) {
      info->keep = TCLXML_LIBXML2_DOCUMENT_KEEP;
      if (info->docObjPtr) {
	TclXML_libxml2_DocKeep(info->docObjPtr, TCLXML_LIBXML2_DOCUMENT_KEEP);
	return TCL_BREAK;
      }
    } else {
      if (Tcl_GetIndexFromObj(info->interp, valuePtr, KeepOptions,
			      "value", 0, &option) != TCL_OK) {
	return TCL_ERROR;
      }
      switch ((enum KeepOptions) option) {
      case OPTION_KEEP_NORMAL:
	info->keep = TCLXML_LIBXML2_DOCUMENT_KEEP;
	if (info->docObjPtr) {
	  TclXML_libxml2_DocKeep(info->docObjPtr, TCLXML_LIBXML2_DOCUMENT_KEEP);
	}
	return TCL_BREAK;

      case OPTION_KEEP_IMPLICIT:
	info->keep = TCLXML_LIBXML2_DOCUMENT_IMPLICIT;
	if (info->docObjPtr) {
	  TclXML_libxml2_DocKeep(info->docObjPtr, TCLXML_LIBXML2_DOCUMENT_IMPLICIT);
	}
	return TCL_BREAK;

      default:
	Tcl_SetResult(info->interp, "bad value", NULL);
	return TCL_ERROR;
      }
    }

    break;

  case OPTION_RETAINPATH:
	if (info->preserve) {
	  Tcl_DecrRefCount(info->preserve);
	}
	info->preserve = valuePtr;
	Tcl_IncrRefCount(valuePtr);
	return TCL_BREAK;

  case OPTION_RETAINPATHNS:
	if (info->preservens) {
	  Tcl_DecrRefCount(info->preservens);
	}
	info->preservens = valuePtr;
	Tcl_IncrRefCount(valuePtr);
	return TCL_BREAK;

  default:

    Tcl_SetResult(info->interp, "no such option", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLlibxml2Get --
 *
 *      Retrieve data from the parser.
 *
 * Results:
 *     Depends on argument.
 *
 * Side effects:
 *     May create Tcl object.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXMLlibxml2Get(clientData, objc, objv)
    ClientData clientData;
    int objc;
    Tcl_Obj *CONST objv[];
{
  TclXMLlibxml2Info *info = (TclXMLlibxml2Info *) clientData;
  CONST84 char *methods[] = {
    "document",
    NULL
  };
  enum methods {
    TCLXML_LIBXML2_GET_DOCUMENT
  };
  int option;

  if (objc != 1) {
    Tcl_WrongNumArgs(info->interp, 0, objv, "method");
    return TCL_ERROR;
  }

  if (Tcl_GetIndexFromObj(info->interp, objv[0], methods,
                          "method", 0, &option) != TCL_OK) {
    return TCL_ERROR;
  }

  switch ((enum methods) option) {
  case TCLXML_LIBXML2_GET_DOCUMENT:
    if (info->docObjPtr) {
      Tcl_SetObjResult(info->interp, info->docObjPtr);
    }

    break;

  default:
    Tcl_SetResult(info->interp, "unknown method", NULL);
    return TCL_ERROR;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLlibxml2ExternalEntityLoader --
 *
 *      Retrieve an external entity, allowing interposing by the application.
 *
 * Results:
 *     External entity parsed.
 *
 * Side effects:
 *     Depends on application callback.
 *
 *----------------------------------------------------------------------------
 */

static xmlParserInputPtr
Result2ParserInput(interp, ctxt, URL)
     Tcl_Interp *interp;
     xmlParserCtxtPtr ctxt;
     const char *URL;
{
  xmlParserInputPtr inputPtr = NULL;

  /* build our own xmlParserInput from returned data */
  inputPtr = xmlNewStringInputStream(ctxt, (const xmlChar *) Tcl_GetStringFromObj(Tcl_GetObjResult(interp), NULL));
  if (inputPtr == NULL) {
    Tcl_SetResult(interp, "unable to create input stream", NULL);
    Tcl_BackgroundError(interp);
    return NULL;
  }
  inputPtr->filename = (char *) xmlCanonicPath((const xmlChar *) URL);

  return inputPtr;
}

static xmlParserInputPtr
TclXMLlibxml2ExternalEntityLoader(URL, ID, ctxt)
    const char *URL;
    const char *ID;
    xmlParserCtxtPtr ctxt;
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  TclXMLlibxml2Info *info;
  Tcl_Interp *interp;
  int result;

  info = tsdPtr->current;

  if (info) {
    result = TclXML_ExternalEntityRefHandler(info->xmlinfo, NULL, NULL,
					     Tcl_NewStringObj(URL, -1),
					     Tcl_NewStringObj(ID, -1));
    interp = info->interp;
  } else {
    result = TclXML_ExternalEntityRefHandler(NULL, NULL, NULL,
					     Tcl_NewStringObj(URL, -1),
					     Tcl_NewStringObj(ID, -1));
    interp = tsdPtr->interp;
  }

  switch (result) {
  case TCL_OK:
    return Result2ParserInput(interp, ctxt, URL);

  case TCL_BREAK:
    return NULL;

  case TCL_CONTINUE:
    break;

  case TCL_ERROR:
  case TCL_RETURN:
  default:
    Tcl_BackgroundError(interp);
    return NULL;
  }

  if (Tcl_IsSafe(interp)) {
    return NULL;
  } else {
    return (tsdPtr->defaultLoader)(URL, ID, ctxt);
  }
}
