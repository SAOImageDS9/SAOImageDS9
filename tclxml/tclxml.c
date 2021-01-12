/*
 * tclxml.c --
 *
 *  Entry point for XML parsers, DOM and XSLT.
 *
 * Copyright (c) 2005-2007 Steve Ball, explain
 * http://www.explain.com.au/
 * Copyright (c) 1998-2004 Steve Ball, Zveno Pty Ltd
 *
 * See the file "LICENSE" for information on usage and
 * redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * $Id: tclxml.c,v 1.2 2009/03/03 22:55:36 joye Exp $
 *
 */

#include <tclxml/tclxml.h>
#include <tclxml-libxml2/tclxml-libxml2.h>
#include <tcldom-libxml2/tcldom-libxml2.h>
#include <tclxslt/tclxslt.h>
#include <string.h>

#define TCL_DOES_STUBS \
    (TCL_MAJOR_VERSION > 8 || TCL_MAJOR_VERSION == 8 && (TCL_MINOR_VERSION > 1 || \
    (TCL_MINOR_VERSION == 1 && TCL_RELEASE_LEVEL == TCL_FINAL_RELEASE)))
#ifdef USE_TCLXML_STUBS
#ifndef TCLXML_DOES_STUBS
# define TCLXML_DOES_STUBS TCL_DOES_STUBS
#endif /* USE_TCLXML_STUBS */
#endif /* TCL_DOES_STUBS */

/*
 * The structure below is used to manage package options.
 */

typedef struct ThreadSpecificData {
  int initialized;

  TclXML_ParserClassInfo *defaultParser;    /* Current default parser */
  Tcl_HashTable *registeredParsers;         /* All known parser classes */

  /*
   * Retain a pointer to the whitespace variable
   */

  Tcl_Obj *whitespaceRE;

  /*
   * Counter to generate unique command names
   */

  int uniqueCounter;

  /*
   * Callback for external entity resolution
   */

  Tcl_Obj *externalentitycmd;
  Tcl_Interp *interp;
} ThreadSpecificData;
static Tcl_ThreadDataKey dataKey;

/* This string is a backup.  Value should be defined in xml package. */
static char whitespace[] = " \t\r\n";

/*
 * Configuration option tables
 */

static CONST84 char *globalConfigureSwitches[] = {
  "-externalentitycommand",
  (char *) NULL
};
enum globalConfigureSwitches {
  TCLXML_GLOBAL_EXTERNALENTITYCOMMAND
};

static CONST84 char *instanceConfigureSwitches[] = {
    "-final",
    "-validate",
    "-baseurl", 
    "-baseuri", 
    "-encoding",
    "-elementstartcommand",
    "-elementendcommand",
    "-characterdatacommand",
    "-processinginstructioncommand",
    "-defaultcommand",
    "-unparsedentitydeclcommand",
    "-notationdeclcommand",
    "-externalentitycommand",
    "-unknownencodingcommand",
    "-commentcommand",
    "-notstandalonecommand",
    "-startcdatasectioncommand",
    "-endcdatasectioncommand",
    "-defaultexpandinternalentities",
    "-elementdeclcommand",
    "-attlistdeclcommand",
    "-startdoctypedeclcommand",
    "-enddoctypedeclcommand",
    "-paramentityparsing",
    "-ignorewhitespace",
    "-reportempty",
    "-entitydeclcommand",             /* added to avoid exception */
    "-parameterentitydeclcommand",    /* added to avoid exception */
    "-doctypecommand",                /* added to avoid exception */
    "-entityreferencecommand",        /* added to avoid exception */
    "-xmldeclcommand",                /* added to avoid exception */
    (char *) NULL
  };
enum instanceConfigureSwitches {
  TCLXML_FINAL, TCLXML_VALIDATE, TCLXML_BASEURL, TCLXML_BASEURI, 
  TCLXML_ENCODING,
  TCLXML_ELEMENTSTARTCMD, TCLXML_ELEMENTENDCMD,
  TCLXML_DATACMD, TCLXML_PICMD, 
  TCLXML_DEFAULTCMD,
  TCLXML_UNPARSEDENTITYCMD, TCLXML_NOTATIONCMD,
  TCLXML_EXTERNALENTITYCMD, TCLXML_UNKNOWNENCODINGCMD,
  TCLXML_COMMENTCMD, TCLXML_NOTSTANDALONECMD,
  TCLXML_STARTCDATASECTIONCMD, TCLXML_ENDCDATASECTIONCMD,
  TCLXML_DEFAULTEXPANDINTERNALENTITIES,
  TCLXML_ELEMENTDECLCMD, TCLXML_ATTLISTDECLCMD,
  TCLXML_STARTDOCTYPEDECLCMD, TCLXML_ENDDOCTYPEDECLCMD,
  TCLXML_PARAMENTITYPARSING,
  TCLXML_NOWHITESPACE,
  TCLXML_REPORTEMPTY,
  TCLXML_ENTITYDECLCMD,
  TCLXML_PARAMENTITYDECLCMD,
  TCLXML_DOCTYPECMD,
  TCLXML_ENTITYREFCMD,
  TCLXML_XMLDECLCMD
};

/*
 * Prototypes for procedures defined later in this file:
 */

static void TclXMLInstanceDeleteCmd _ANSI_ARGS_((ClientData clientData));
static int  TclXMLDestroyParserInstance _ANSI_ARGS_((TclXML_Info *xmlinfo));
static int  TclXMLInstanceCmd _ANSI_ARGS_((ClientData dummy,
            Tcl_Interp *interp, int objc, struct Tcl_Obj *CONST objv[]));
static int  TclXMLCreateParserCmd _ANSI_ARGS_((ClientData dummy,
            Tcl_Interp *interp, int objc, Tcl_Obj *CONST objv[]));
static int  TclXMLParserClassCmd _ANSI_ARGS_((ClientData dummy,
            Tcl_Interp *interp, int objc, Tcl_Obj *CONST objv[]));
static int  TclXMLResetParser _ANSI_ARGS_((Tcl_Interp *interp, TclXML_Info *xmlinfo));
static int  TclXMLConfigureCmd _ANSI_ARGS_((ClientData dummy,
            Tcl_Interp *interp, int objc, Tcl_Obj *CONST objv[]));
static Tcl_Obj* FindUniqueCmdName _ANSI_ARGS_((Tcl_Interp *interp));
static int  TclXMLInstanceConfigure _ANSI_ARGS_((Tcl_Interp *interp,
            TclXML_Info *xmlinfo, int objc, Tcl_Obj *CONST objv[]));
static int  TclXMLCget _ANSI_ARGS_((Tcl_Interp *interp,
            TclXML_Info *xmlinfo, int objc, Tcl_Obj *CONST objv[]));
static int  TclXMLConfigureParserInstance _ANSI_ARGS_((
            TclXML_Info *xmlinfo, Tcl_Obj *option, Tcl_Obj *value));
static int  TclXMLGet _ANSI_ARGS_((Tcl_Interp *interp,
            TclXML_Info *xmlinfo, int objc, Tcl_Obj *CONST objv[]));
static int  TclXMLParse _ANSI_ARGS_((Tcl_Interp *interp,
            TclXML_Info *xmlinfo, char *data, int len));
static void TclXMLDispatchPCDATA _ANSI_ARGS_((TclXML_Info *xmlinfo));

#if (TCL_MAJOR_VERSION == 8 && TCL_MINOR_VERSION == 0)

/*
 *----------------------------------------------------------------------------
 *
 * Tcl_GetString --
 *
 *  Compatibility routine for Tcl 8.0
 *
 * Results:
 *  String representation of object..
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

static char *
Tcl_GetString (obj)
      Tcl_Obj *obj; /* Object to retrieve string from. */
{
  char *s;
  int i;

  s = Tcl_GetStringFromObj(obj, &i);
  return s;
}
#endif /* TCL_MAJOR_VERSION == 8 && TCL_MINOR_VERSION == 0 */

/*
 *----------------------------------------------------------------------------
 *
 * Tclxml_Init --
 *
 *  Initialisation routine for loadable module.
 *  Also calls the initialisation routines for TclDOM and TclXSLT,
 *  as these were originally separate modules.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Creates commands in the interpreter,
 *  loads xml, dom and xslt packages.
 *
 *----------------------------------------------------------------------------
 */

int
Tclxml_Init (interp)
      Tcl_Interp *interp; /* Interpreter to initialise. */
{
  ThreadSpecificData *tsdPtr;

#ifdef USE_TCL_STUBS
  if (Tcl_InitStubs(interp, "8.1", 0) == NULL) {
    return TCL_ERROR;
  }
#endif

  tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  tsdPtr->initialized = 1;
  tsdPtr->defaultParser = NULL;
  tsdPtr->uniqueCounter = 0;

  /*
  tsdPtr->whitespaceRE = Tcl_GetVar2Ex(interp, "::xml::Wsp", NULL, TCL_GLOBAL_ONLY);
  if (tsdPtr->whitespaceRE == NULL) {
    tsdPtr->whitespaceRE = Tcl_SetVar2Ex(interp, "::xml::Wsp", NULL, Tcl_NewStringObj(whitespace, -1), TCL_GLOBAL_ONLY|TCL_LEAVE_ERR_MSG);
    if (tsdPtr->whitespaceRE == NULL) {
      return TCL_ERROR;
    }
  }
  Tcl_IncrRefCount(tsdPtr->whitespaceRE);
  */

  tsdPtr->registeredParsers = (Tcl_HashTable *) Tcl_Alloc(sizeof(Tcl_HashTable));
  Tcl_InitHashTable(tsdPtr->registeredParsers, TCL_STRING_KEYS);

  tsdPtr->externalentitycmd = NULL;
  tsdPtr->interp = interp;

  Tcl_CreateObjCommand(interp, "xml::configure", TclXMLConfigureCmd, NULL, NULL);
  Tcl_CreateObjCommand(interp, "xml::parser", TclXMLCreateParserCmd, NULL, NULL);
  Tcl_CreateObjCommand(interp, "xml::parserclass", TclXMLParserClassCmd, NULL, NULL);

  if (Tclxml_libxml2_Init(interp) != TCL_OK) {
    return TCL_ERROR;
  }

  /*
  if (Tcldom_libxml2_Init(interp) != TCL_OK) {
    return TCL_ERROR;
  }

  if (Tclxslt_libxslt_Init(interp) != TCL_OK) {
    return TCL_ERROR;
  }
  */

  #if TCLXML_DOES_STUBS
    {
      extern TclxmlStubs tclxmlStubs;
      if (Tcl_PkgProvideEx(interp, "xml::c", TCLXML_VERSION,
	(ClientData) &tclxmlStubs) != TCL_OK) {
        return TCL_ERROR;
      }
    }
  #else
    if (Tcl_PkgProvide(interp, "xml::c", TCLXML_VERSION) != TCL_OK) {
      return TCL_ERROR;
    }
  #endif

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * Tclxml_SafeInit --
 *
 *  Initialisation routine for loadable module in a safe interpreter.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Creates commands in the interpreter,
 *  loads xml package.
 *
 *----------------------------------------------------------------------------
 */

int
Tclxml_SafeInit (interp)
      Tcl_Interp *interp; /* Interpreter to initialise. */
{
    return Tclxml_Init(interp);
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLConfigureCmd --
 *
 *  Command for xml::configure command.
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
TclXMLConfigureCmd(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  int index;

  if (objc < 3) {
    Tcl_SetResult(interp, "must specify option", NULL);
    return TCL_ERROR;
  } else if (objc == 3) {
    /* TODO: retrieve option's value */
    return TCL_OK;
  } else if (objc % 2 == 1) {
    Tcl_SetResult(interp, "value for option missing", NULL);
    return TCL_ERROR;
  }

  for (objc -= 2, objv += 2; objc; objc -= 2, objv += 2) {
    if (Tcl_GetIndexFromObj(interp, objv[0], globalConfigureSwitches,
			    "switch", 0, &index) != TCL_OK) {
      return TCL_ERROR;
    }
    switch ((enum globalConfigureSwitches) index) {
    case TCLXML_GLOBAL_EXTERNALENTITYCOMMAND:
      tsdPtr->externalentitycmd = objv[1];
      Tcl_IncrRefCount(tsdPtr->externalentitycmd);
      break;

    default:
      return TCL_ERROR;
    }
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLParserClassCmd --
 *
 *  Command for xml::parserclass command.
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
TclXMLParserClassCmd(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  TclXML_ParserClassInfo *classinfo;
  int method, index;
  Tcl_Obj *listPtr;
  Tcl_HashEntry *entryPtr;
  Tcl_HashSearch search;

  static CONST84 char *methods[] = {
    "create", "destroy", "info", 
    NULL
  };
  enum methods {
    TCLXML_CREATE, TCLXML_DESTROY, TCLXML_INFO
  };
  static CONST84 char *createOptions[] = {
    "-createcommand", "-createentityparsercommand",
    "-parsecommand", "-configurecommand",
    "-deletecommand", "-resetcommand", 
    NULL
  };
  enum createOptions {
    TCLXML_CREATEPROC, TCLXML_CREATE_ENTITY_PARSER,
    TCLXML_PARSEPROC, TCLXML_CONFIGUREPROC,
    TCLXML_DELETEPROC, TCLXML_RESETPROC
  };
  static CONST84 char *infoMethods[] = {
    "names", "default", 
    NULL
  };
  enum infoMethods {
    TCLXML_INFO_NAMES, TCLXML_INFO_DEFAULT
  };

  if (objc < 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "method ?args?");
    return TCL_ERROR;
  }

  if (Tcl_GetIndexFromObj(interp, objv[1], methods, 
              "method", 0, &method) != TCL_OK) {
    return TCL_ERROR;
  }

  switch ((enum methods) method) {
    case TCLXML_CREATE:
      if (objc < 3) {
        Tcl_WrongNumArgs(interp, 2, objv, "create name ?args?");
        return TCL_ERROR;
      }

      classinfo = (TclXML_ParserClassInfo *) Tcl_Alloc(sizeof(TclXML_ParserClassInfo));
      classinfo->name = objv[2];
      Tcl_IncrRefCount(classinfo->name);
      classinfo->create = NULL;
      classinfo->createCmd = NULL;
      classinfo->createEntity = NULL;
      classinfo->createEntityCmd = NULL;
      classinfo->parse = NULL;
      classinfo->parseCmd = NULL;
      classinfo->configure = NULL;
      classinfo->configureCmd = NULL;
      classinfo->reset = NULL;
      classinfo->resetCmd = NULL;
      classinfo->destroy = NULL;
      classinfo->destroyCmd = NULL;

      objv += 3;
      objc -= 3;
      while (objc > 1) {
        if (Tcl_GetIndexFromObj(interp, objv[0], createOptions, 
          "options", 0, &index) != TCL_OK) {
          return TCL_ERROR;
        }
        Tcl_IncrRefCount(objv[1]);
        switch ((enum createOptions) index) {

          case TCLXML_CREATEPROC:

            classinfo->createCmd = objv[1];
            break;

          case TCLXML_CREATE_ENTITY_PARSER:

            classinfo->createEntityCmd = objv[1];
            break;

          case TCLXML_PARSEPROC:

            classinfo->parseCmd = objv[1];
            break;

          case TCLXML_CONFIGUREPROC:

            classinfo->configureCmd = objv[1];
            break;

          case TCLXML_RESETPROC:

            classinfo->resetCmd = objv[1];
            break;

          case TCLXML_DELETEPROC:

            classinfo->destroyCmd = objv[1];
            break;

          default:
            Tcl_AppendResult(interp, "unknown option \"", Tcl_GetStringFromObj(objv[0], NULL), "\"", NULL);
            Tcl_DecrRefCount(objv[1]);
            Tcl_DecrRefCount(classinfo->name);
            Tcl_Free((char *)classinfo);
            return TCL_ERROR;
        }
    
        objc -= 2;
        objv += 2;

      }

      if (TclXML_RegisterXMLParser(interp, classinfo) != TCL_OK) {
        Tcl_Free((char *)classinfo);
        return TCL_ERROR;
      }
      break;
    
    case TCLXML_DESTROY:
      /* Not yet implemented */
      break;
    
    case TCLXML_INFO:
      if (objc < 3) {
        Tcl_WrongNumArgs(interp, 2, objv, "method");
        return TCL_ERROR;
      }

      if (Tcl_GetIndexFromObj(interp, objv[2], infoMethods,
                              "method", 0, &index) != TCL_OK) {
        return TCL_ERROR;
      }
      switch ((enum infoMethods) index) {
        case TCLXML_INFO_NAMES:
          
          listPtr = Tcl_NewListObj(0, NULL);
          entryPtr = Tcl_FirstHashEntry(tsdPtr->registeredParsers, &search);
          while (entryPtr != NULL) {
            Tcl_ListObjAppendElement(interp, listPtr, Tcl_NewStringObj(Tcl_GetHashKey(tsdPtr->registeredParsers, entryPtr), -1));
            entryPtr = Tcl_NextHashEntry(&search);
          }

          Tcl_SetObjResult(interp, listPtr);

          break;

        case TCLXML_INFO_DEFAULT:

          if (!tsdPtr->defaultParser) {
            Tcl_SetResult(interp, "", NULL);
          } else {
            Tcl_SetObjResult(interp, tsdPtr->defaultParser->name);
          }

          break;

        default:
            Tcl_SetResult(interp, "unknown method", NULL);
            return TCL_ERROR;
      }
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
 * TclXML_RegisterXMLParser --
 *
 *  Adds a new XML parser.
 *
 * Results:
 *  Standard Tcl return code.
 *
 * Side effects:
 *  New parser is available for use in parser instances.
 *
 *----------------------------------------------------------------------------
 */

int
TclXML_RegisterXMLParser(interp, classinfo)
     Tcl_Interp *interp;
     TclXML_ParserClassInfo *classinfo;
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  int new;
  Tcl_HashEntry *entryPtr;

  entryPtr = Tcl_CreateHashEntry(tsdPtr->registeredParsers, Tcl_GetStringFromObj(classinfo->name, NULL), &new);
  if (!new) {
    Tcl_Obj *ptr = Tcl_NewStringObj("parser class \"", -1);
    Tcl_AppendObjToObj(ptr, classinfo->name);
    Tcl_AppendObjToObj(ptr, Tcl_NewStringObj("\" already registered", -1));

    Tcl_ResetResult(interp);
    Tcl_SetObjResult(interp, ptr);
    return TCL_ERROR;
  }

  Tcl_SetHashValue(entryPtr, (ClientData) classinfo);

  /*
   * Set default parser - last wins
   */

  tsdPtr->defaultParser = classinfo;

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLCreateParserCmd --
 *
 *  Creation command for xml::parser command.
 *
 * Results:
 *  The name of the newly created parser instance.
 *
 * Side effects:
 *  This creates a parser instance.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXMLCreateParserCmd(clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  TclXML_Info *xmlinfo;
  int found, i, index, poption;

  static CONST84 char *switches[] = {
    "-parser",
    (char *) NULL
  };
  enum switches {
    TCLXML_PARSER
  };

  if (tsdPtr == NULL) {
    Tcl_SetObjResult(interp, Tcl_NewStringObj("TclXML package improperly initialised", -1));
    return TCL_ERROR;
  }
  if (!tsdPtr->defaultParser) {
    Tcl_SetResult(interp, "no parsers available", NULL);
    return TCL_ERROR;
  }

  /*
   * Create the data structures for this parser.
   */

  if (!(xmlinfo = (TclXML_Info *) Tcl_Alloc(sizeof(TclXML_Info)))) {
    Tcl_SetResult(interp, "unable to create parser", NULL);
    return TCL_ERROR;
  }
  xmlinfo->interp = interp;
  xmlinfo->clientData = NULL;
  xmlinfo->base = NULL;
  xmlinfo->encoding = Tcl_NewStringObj("utf-8", -1);

  /*
   * Find unique command name
   */
  if (objc < 2) {
    xmlinfo->name = FindUniqueCmdName(interp);
  } else {
    xmlinfo->name = objv[1];
    if (*(Tcl_GetStringFromObj(xmlinfo->name, NULL)) != '-') {
      Tcl_IncrRefCount(xmlinfo->name);
      objv++;
      objc--;
    } else {
      xmlinfo->name = FindUniqueCmdName(interp);
    }
  }

  xmlinfo->validate = 0;
  xmlinfo->elementstartcommand = NULL;
  xmlinfo->elementstart = NULL;
  xmlinfo->elementstartdata = 0;
  xmlinfo->elementendcommand = NULL;
  xmlinfo->elementend = NULL;
  xmlinfo->elementenddata = 0;
  xmlinfo->datacommand = NULL;
  xmlinfo->cdatacb = NULL;
  xmlinfo->cdatacbdata = 0;
  xmlinfo->picommand = NULL;
  xmlinfo->pi = NULL;
  xmlinfo->pidata = 0;
  xmlinfo->defaultcommand = NULL;
  xmlinfo->defaultcb = NULL;
  xmlinfo->defaultdata = 0;
  xmlinfo->unparsedcommand = NULL;
  xmlinfo->unparsed = NULL;
  xmlinfo->unparseddata = 0;
  xmlinfo->notationcommand = NULL;
  xmlinfo->notation = NULL;
  xmlinfo->notationdata = 0;
  xmlinfo->entitycommand = NULL;
  xmlinfo->entity = NULL;
  xmlinfo->entitydata = 0;
  xmlinfo->unknownencodingcommand = NULL;
  xmlinfo->unknownencoding = NULL;
  xmlinfo->unknownencodingdata = 0;
  /* ericm@scriptics.com */
  xmlinfo->commentCommand                = NULL;
  xmlinfo->comment                       = NULL;
  xmlinfo->commentdata = 0;
  xmlinfo->notStandaloneCommand          = NULL;
  xmlinfo->notStandalone                 = NULL;
  xmlinfo->notstandalonedata = 0;
  xmlinfo->elementDeclCommand            = NULL;
  xmlinfo->elementDecl                   = NULL;
  xmlinfo->elementdecldata = 0;
  xmlinfo->attlistDeclCommand            = NULL;
  xmlinfo->attlistDecl                   = NULL;
  xmlinfo->attlistdecldata = 0;
  xmlinfo->startDoctypeDeclCommand       = NULL;
  xmlinfo->startDoctypeDecl              = NULL;
  xmlinfo->startdoctypedecldata = 0;
  xmlinfo->endDoctypeDeclCommand         = NULL;
  xmlinfo->endDoctypeDecl                = NULL;
  xmlinfo->enddoctypedecldata = 0;
#ifdef TCLXML_CDATASECTIONS
  xmlinfo->startCDATASectionCommand      = NULL;
  xmlinfo->startCDATASection             = NULL;
  xmlinfo->startcdatasectiondata = 0;
  xmlinfo->endCdataSectionCommand        = NULL;
  xmlinfo->endCdataSection               = NULL;
  xmlinfo->endcdatasectiondata = 0;
#endif

  /*
   * Options may include an explicit desired parser class
   *
   * SF TclXML Bug 513909 ...
   * Start search at first argument!  If there was a parser name
   * specified we already skipped over it.
   *
   * Changing the search. Do not stop at the first occurence of
   * "-parser". There can be more than one instance of the option in
   * the argument list and it is the last instance that counts.
   */

  found   = 0;
  i       = 1;
  poption = -1;

  while (i < objc) {
    Tcl_ResetResult (interp);
    if (Tcl_GetIndexFromObj(interp, objv[i], switches, "option", 0, &index) == TCL_OK) {
      poption = i;
      found   = 1;
    }
    i += 2;
  }
  Tcl_ResetResult (interp);

  if (found) {
    Tcl_HashEntry *pentry;

    if (poption == (objc - 1)) {
      Tcl_SetResult(interp, "no value for option", NULL);
      goto error;
    }

    /*
     * Use given parser class
     */

    pentry = Tcl_FindHashEntry(tsdPtr->registeredParsers,
			       Tcl_GetStringFromObj(objv[poption + 1],
						    NULL));
    if (pentry != NULL) {
      xmlinfo->parserClass = Tcl_GetHashValue(pentry);
    } else {
      Tcl_AppendResult(interp, "no such parser class \"",
		       Tcl_GetStringFromObj(objv[poption + 1], NULL),
		       "\"", NULL);
      goto error;
    }

  } else {
    /*
     * Use default parser
     */
    xmlinfo->parserClass = tsdPtr->defaultParser;
  }

  if (TclXMLResetParser(interp, xmlinfo) != TCL_OK) {
    /* this may leak memory...
    Tcl_Free((char *)xmlinfo);
    */
    return TCL_ERROR;
  }

  /*
   * Register a Tcl command for this parser instance.
   */

  Tcl_CreateObjCommand(interp, Tcl_GetStringFromObj(xmlinfo->name, NULL),
      TclXMLInstanceCmd, (ClientData) xmlinfo, TclXMLInstanceDeleteCmd);

  /*
   * Handle configuration options
   *
   * SF TclXML Bug 513909 ...
   * Note: If the caller used "-parser" to specify a parser class we
   * have to take care that it and its argument are *not* seen by
   * "TclXMLInstanceConfigure" because this option is not allowed
   * during general configuration.
   */

  if (objc > 1) {
    if (found) {
      /*
       * The options contained at least one instance of "-parser
       * class". We now go through the whole list of arguments and
       * build a new list which contains only the non-"-parser"
       * switches. The 'ResetResult' takes care of clearing the
       * interpreter result before "Tcl_GetIndexFromObj" tries to
       * use it again.
       */

      int      res;
      int       cfgc = 0;
      Tcl_Obj** cfgv = (Tcl_Obj**) Tcl_Alloc (objc * sizeof (Tcl_Obj*));

      i = 1;
      while (i < objc) {
	Tcl_ResetResult (interp);
	if (Tcl_GetIndexFromObj(interp, objv[i], switches, "option", 0, &index) == TCL_OK) {
	  /* Ignore "-parser" during copying */
	  i += 2;
	  continue;
	}

	cfgv [cfgc] = objv [i]; i++ ; cfgc++ ; /* copy option ... */
	cfgv [cfgc] = objv [i]; i++ ; cfgc++ ; /* ...   and value */
      }
      Tcl_ResetResult (interp);

      res = TclXMLInstanceConfigure(interp, xmlinfo, cfgc, cfgv);
      Tcl_Free ((char*) cfgv);
      if (res == TCL_ERROR) {
	return TCL_ERROR;
      }
    } else {
      /*
       * The options contained no "-parser class" specification. We
       * can propagate it unchanged.
       */

      if (TclXMLInstanceConfigure(interp, xmlinfo, objc - 1, objv + 1) == TCL_ERROR) {
	return TCL_ERROR;
      }
    }
  }

  Tcl_SetObjResult(interp, xmlinfo->name);
  return TCL_OK;

 error:
/* this may leak memory
  Tcl_Free((char*)xmlinfo);
*/
  return TCL_ERROR;
}

/*
 *----------------------------------------------------------------------------
 *
 * FindUniqueCmdName --
 *
 *  Generate new command name in caller's namespace.
 *
 * Results:
 *  Returns newly allocated Tcl object containing name.
 *
 * Side effects:
 *  Allocates Tcl object.
 *
 *----------------------------------------------------------------------------
 */

static Tcl_Obj *
FindUniqueCmdName(interp)
     Tcl_Interp *interp;
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  Tcl_Obj *name;
  Tcl_CmdInfo cmdinfo;
  char s[20];

  name = Tcl_NewObj();
  Tcl_IncrRefCount(name);

  do {
    sprintf(s, "xmlparser%d", tsdPtr->uniqueCounter++);
    Tcl_SetStringObj(name, s, -1);
  } while (Tcl_GetCommandInfo(interp, Tcl_GetStringFromObj(name, NULL), &cmdinfo));

  return name;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLResetParser --
 *
 *  (Re-)Initialise the parser instance structure.
 *
 * Results:
 *  Parser made ready for parsing.
 *
 * Side effects:
 *  Destroys and creates a parser instance.
 *  Modifies TclXML_Info fields.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXMLResetParser(interp, xmlinfo)
     Tcl_Interp *interp;
     TclXML_Info *xmlinfo;
{
  TclXML_ParserClassInfo *classInfo = (TclXML_ParserClassInfo *) xmlinfo->parserClass;

  if (xmlinfo->base) {
    Tcl_DecrRefCount(xmlinfo->base);
    xmlinfo->base = NULL;
  }
  
  xmlinfo->final = 1;
  xmlinfo->status = TCL_OK;
  xmlinfo->result = NULL;
  xmlinfo->continueCount = 0;
  xmlinfo->context = NULL;

  xmlinfo->cdata = NULL;
  xmlinfo->nowhitespace = 0;

  xmlinfo->reportempty = 0;
  xmlinfo->expandinternalentities = 1;
  xmlinfo->paramentities = 1;

  if (classInfo->reset) {
    if ((*classInfo->reset)((ClientData) xmlinfo) != TCL_OK) {
      return TCL_ERROR;
    }
  } else if (classInfo->resetCmd) {
    Tcl_Obj *cmdPtr = Tcl_DuplicateObj(classInfo->resetCmd);
    int result;

    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) interp);
    Tcl_ListObjAppendElement(interp, cmdPtr, xmlinfo->name);

    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) interp);

    if (result != TCL_OK) {
      Tcl_Free((char*)xmlinfo);
      return TCL_ERROR;
    }
  } else if (classInfo->create) {

    /*
     * Otherwise destroy and then create a fresh parser instance
     */

    /*
     * Destroy the old parser instance, if it exists
     * Could probably just reset it, but this approach
     * is pretty much guaranteed to work.
     */

    if (TclXMLDestroyParserInstance(xmlinfo) != TCL_OK) {
      return TCL_ERROR;
    }

    /*
     * Directly invoke the create routine
     */
    if ((xmlinfo->clientData = (*classInfo->create)(interp, xmlinfo)) == NULL) {
      Tcl_Free((char*)xmlinfo);
      return TCL_ERROR;
    }
  } else if (classInfo->createCmd) {
    Tcl_Obj *cmdPtr = Tcl_DuplicateObj(classInfo->createCmd);
    int result, i;

    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) interp);
    Tcl_ListObjAppendElement(interp, cmdPtr, xmlinfo->name);

    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) interp);

    if (result != TCL_OK) {
      Tcl_Free((char*)xmlinfo);
      return TCL_ERROR;
    } else {

      /*
       * Return result is parser instance argument
       */

      xmlinfo->clientData = (ClientData) Tcl_GetObjResult(interp);
      Tcl_IncrRefCount((Tcl_Obj *) xmlinfo->clientData);

      /*
       * Add all of the currently configured callbacks to the
       * creation command line.  Destroying the parser instance
       * just clobbered all of these settings.
       */

      cmdPtr = Tcl_DuplicateObj(classInfo->configureCmd);
      Tcl_IncrRefCount(cmdPtr);
      Tcl_Preserve((ClientData) interp);
      Tcl_ListObjAppendElement(interp, cmdPtr, xmlinfo->name);

      for (i = 0; instanceConfigureSwitches[i]; i++) {
        Tcl_Obj *objPtr = Tcl_NewStringObj(instanceConfigureSwitches[i], -1);
        Tcl_ListObjAppendElement(interp, cmdPtr, objPtr);
        TclXMLCget(interp, xmlinfo, 1, &objPtr);
        Tcl_ListObjAppendElement(interp, cmdPtr, Tcl_GetObjResult(interp));
      }

      result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

      Tcl_DecrRefCount(cmdPtr);
      Tcl_Release((ClientData) interp);

      if (result != TCL_OK) {
        Tcl_Free((char *)xmlinfo);
        return TCL_ERROR;
      }

    }

  } else {
    Tcl_SetResult(interp, "bad parser class data", NULL);
    Tcl_Free((char*)xmlinfo);
    return TCL_ERROR;
  }
  
  return TCL_OK;
}

/*
 *----------------------------------------------------------------------
 *
 * TclXMLCreateEntityParser --
 *
 *  Create an entity parser, based on the original
 *      parser referred to by parent.
 *
 * Results:
 *  New entity parser created and initialized.
 *
 * Side effects:
 *  The TclXML_Info struct pointed to by external is modified.
 *
 *----------------------------------------------------------------------
 */

static int
TclXMLCreateEntityParser(interp, external, parent)
     Tcl_Interp *interp;
     TclXML_Info *external;
     TclXML_Info *parent;
{
  TclXML_ParserClassInfo *extClassInfo;

  external->parserClass = parent->parserClass;
  extClassInfo = (TclXML_ParserClassInfo *) external->parserClass;

  if (!extClassInfo->createEntity || !extClassInfo->createEntityCmd) {
    Tcl_SetResult(interp, "cannot create entity parser", NULL);
    return TCL_ERROR;
  }

    if (parent->elementstartcommand) {
      Tcl_IncrRefCount(parent->elementstartcommand);
    }
    if (parent->elementendcommand) {
      Tcl_IncrRefCount(parent->elementendcommand);
    }
    if (parent->datacommand) {
      Tcl_IncrRefCount(parent->datacommand);
    }
    if (parent->picommand) {
      Tcl_IncrRefCount(parent->picommand);
    }
    if (parent->defaultcommand) {
      Tcl_IncrRefCount(parent->defaultcommand);
    }
    if (parent->unparsedcommand) {
      Tcl_IncrRefCount(parent->unparsedcommand);
    }
    if (parent->notationcommand) {
      Tcl_IncrRefCount(parent->notationcommand);
    }
    if (parent->entitycommand) {
      Tcl_IncrRefCount(parent->entitycommand);
    }
    if (parent->unknownencodingcommand) {
      Tcl_IncrRefCount(parent->unknownencodingcommand);
    }
    if (parent->commentCommand) {
      Tcl_IncrRefCount(parent->commentCommand);
    }
    if (parent->notStandaloneCommand) {
      Tcl_IncrRefCount(parent->notStandaloneCommand);
    }
#ifdef TCLXML_CDATASECTIONS
    if (parent->startCdataSectionCommand) {
      Tcl_IncrRefCount(parent->startCdataSectionCommand);
    }
    if (parent->endCdataSectionCommand) {
      Tcl_IncrRefCount(parent->endCdataSectionCommand);
    }
#endif
    if (parent->elementDeclCommand) {
      Tcl_IncrRefCount(parent->elementDeclCommand);
    }
    if (parent->attlistDeclCommand) {
      Tcl_IncrRefCount(parent->attlistDeclCommand);
    }
    if (parent->startDoctypeDeclCommand) {
      Tcl_IncrRefCount(parent->startDoctypeDeclCommand);
    }
    if (parent->endDoctypeDeclCommand) {
      Tcl_IncrRefCount(parent->endDoctypeDeclCommand);
    }
    
    external->elementstartcommand      = parent->elementstartcommand;
    external->elementstart             = parent->elementstart;
    external->elementendcommand        = parent->elementendcommand;
    external->elementend               = parent->elementend;
    external->datacommand              = parent->datacommand;
    external->cdatacb                  = parent->cdatacb;
    external->picommand                = parent->picommand;
    external->pi                       = parent->pi;
    external->defaultcommand           = parent->defaultcommand;
    external->defaultcb                = parent->defaultcb;
    external->unparsedcommand          = parent->unparsedcommand;
    external->unparsed                 = parent->unparsed;
    external->notationcommand          = parent->notationcommand;
    external->notation                 = parent->notation;
    external->entitycommand            = parent->entitycommand;
    external->entity                   = parent->entity;
    external->unknownencodingcommand   = parent->unknownencodingcommand;
    external->unknownencoding          = parent->unknownencoding;
    external->commentCommand           = parent->commentCommand;
    external->comment                  = parent->comment;
    external->notStandaloneCommand     = parent->notStandaloneCommand;
    external->notStandalone            = parent->notStandalone;
    external->elementDeclCommand       = parent->elementDeclCommand;
    external->elementDecl              = parent->elementDecl;
    external->attlistDeclCommand       = parent->attlistDeclCommand;
    external->attlistDecl              = parent->attlistDecl;
    external->startDoctypeDeclCommand  = parent->startDoctypeDeclCommand;
    external->startDoctypeDecl         = parent->startDoctypeDecl;
    external->endDoctypeDeclCommand    = parent->endDoctypeDeclCommand;
    external->endDoctypeDecl           = parent->endDoctypeDecl;
#ifdef TCLXML_CDATASECTIONS
    external->startCdataSectionCommand = parent->startCdataSectionCommand;
    external->startCdataSection        = parent->startCdataSection;
    external->endCdataSectionCommand   = parent->endCdataSectionCommand;
    external->endCdataSection          = parent->endCdataSection;
#endif

    external->final = 1;
    external->validate = parent->validate;
    external->status = TCL_OK;
    external->result = NULL;
    external->continueCount = 0;
    external->context = NULL;
    external->cdata = NULL;
    external->nowhitespace = parent->nowhitespace;
	if (parent->encoding) {
	  external->encoding = Tcl_DuplicateObj(parent->encoding);
	} else {
	  external->encoding = Tcl_NewStringObj("utf-8", -1);
	}

  if (extClassInfo->createEntity) {
    /*
     * Directly invoke the create routine
     */
    if ((external->clientData = (*extClassInfo->createEntity)(interp, (ClientData) external)) == NULL) {
      Tcl_Free((char*)external);
      return TCL_ERROR;
    }
  } else if (extClassInfo->createEntityCmd) {
    int result;

    result = Tcl_GlobalEvalObj(interp, extClassInfo->createEntityCmd);
    if (result != TCL_OK) {
      Tcl_Free((char*)external);
      return TCL_ERROR;
    } else {

      /*
       * Return result is parser instance argument
       */

      external->clientData = (ClientData) Tcl_GetObjResult(interp);
      Tcl_IncrRefCount((Tcl_Obj *) external->clientData);

    }
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLDestroyParserInstance --
 *
 *  Destroys the parser instance.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Depends on class destroy proc.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXMLDestroyParserInstance(xmlinfo)
     TclXML_Info *xmlinfo;
{
  TclXML_ParserClassInfo *classInfo = (TclXML_ParserClassInfo *) xmlinfo->parserClass;

  if (xmlinfo->clientData) {
    if (classInfo->destroy) {
      if ((*classInfo->destroy)(xmlinfo->clientData) != TCL_OK) {
		if (xmlinfo->encoding) {
		  Tcl_DecrRefCount(xmlinfo->encoding);
		}
        Tcl_Free((char *)xmlinfo);
        return TCL_ERROR;
      }
    } else if (classInfo->destroyCmd) {
      Tcl_Obj *cmdPtr = Tcl_DuplicateObj(classInfo->destroyCmd);
       int result;

      Tcl_IncrRefCount(cmdPtr);
      Tcl_Preserve((ClientData) xmlinfo->interp);
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, (Tcl_Obj *) xmlinfo->clientData);

      result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);
      Tcl_DecrRefCount(cmdPtr);
      Tcl_Release((ClientData) xmlinfo->interp);

      if (result != TCL_OK) {
		if (xmlinfo->encoding) {
		  Tcl_DecrRefCount(xmlinfo->encoding);
		}
        Tcl_Free((char *)xmlinfo);
        return TCL_ERROR;
      }

      Tcl_DecrRefCount((Tcl_Obj *) xmlinfo->clientData);

    }

    xmlinfo->clientData = NULL;

  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLFreeParser --
 *
 *  Destroy the parser instance structure.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Frees any memory allocated for the XML parser instance.
 *
 *----------------------------------------------------------------------------
 */

static void
TclXMLFreeParser(xmlinfo)
     TclXML_Info *xmlinfo;
{
  if (TclXMLDestroyParserInstance(xmlinfo) == TCL_OK) {
	if (xmlinfo->encoding) {
	  Tcl_DecrRefCount(xmlinfo->encoding);
	}
	Tcl_Free((char*)xmlinfo);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLInstanceCmd --
 *
 *  Implements instance command for XML parsers.
 *
 * Results:
 *  Depends on the method.
 *
 * Side effects:
 *  Depends on the method.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXMLInstanceCmd (clientData, interp, objc, objv)
     ClientData clientData;
     Tcl_Interp *interp;
     int objc;
     Tcl_Obj *CONST objv[];
{
  TclXML_Info *xmlinfo = (TclXML_Info *) clientData;
  TclXML_Info *child;
  char *encoding, *data;
  int len, index, result = TCL_OK;
  Tcl_Obj *childNamePtr;
  static CONST84 char *options[] = {
    "configure", "cget", "entityparser", "free", "get", "parse", "reset", NULL
  };
  enum options {
    TCLXML_CONFIGURE, TCLXML_CGET, TCLXML_ENTITYPARSER, TCLXML_FREE, TCLXML_GET,
    TCLXML_PARSE, TCLXML_RESET
  };

  if (objc < 2) {
    Tcl_WrongNumArgs(interp, 1, objv, "method ?args?");
    return TCL_ERROR;
  }

  if (Tcl_GetIndexFromObj(interp, objv[1], options, "option", 0,
                          &index) != TCL_OK) {
    return TCL_ERROR;
  }

  switch ((enum options) index) {
    case TCLXML_CONFIGURE:

      result = TclXMLInstanceConfigure(interp, xmlinfo, objc - 2, objv + 2);
      break;

    case TCLXML_CGET:

      if (objc != 3) {
       Tcl_WrongNumArgs(interp, 1, objv, "cget option");
       return TCL_ERROR;
      }

      result = TclXMLCget(interp, xmlinfo, objc - 2, objv + 2);
      break;

    case TCLXML_ENTITYPARSER:
      /* ericm@scriptics.com, 1999.9.13 */

      /* check for args - Pat Thoyts */
      if (objc == 2) {
	childNamePtr = FindUniqueCmdName(interp);
      } else if (objc == 3) {
	childNamePtr = objv[2];
      } else {
        Tcl_WrongNumArgs(interp, 1, objv, "entityparser ?args?");
        return TCL_ERROR;
      }

      /*
       * Create the data structures for this parser.
       */
      if (!(child = (TclXML_Info *) Tcl_Alloc(sizeof(TclXML_Info)))) {
        Tcl_Free((char*)child);
        Tcl_SetResult(interp, "unable to create parser", NULL);
        return TCL_ERROR;
      }

      child->interp = interp;
      Tcl_IncrRefCount(childNamePtr);
      child->name = childNamePtr;
    
      /* Actually create the parser instance */
      if (TclXMLCreateEntityParser(interp, child,
        xmlinfo) != TCL_OK) {
	Tcl_DecrRefCount(childNamePtr);
        Tcl_Free((char*)child);
        return TCL_ERROR;
      }
    
      /* Register a Tcl command for this parser instance */
      Tcl_CreateObjCommand(interp, Tcl_GetString(child->name),
          TclXMLInstanceCmd, (ClientData) child, TclXMLInstanceDeleteCmd);

      Tcl_SetObjResult(interp, child->name);
      result = TCL_OK;
      break;
   
    case TCLXML_FREE:

      /* ericm@scriptics.com, 1999.9.13 */
      Tcl_DeleteCommand(interp, Tcl_GetString(xmlinfo->name));
      result = TCL_OK;
      break;
      
    case TCLXML_GET:
      
      /* ericm@scriptics.com, 1999.6.28 */
      result = TclXMLGet(interp, xmlinfo, objc - 2, objv + 2);
      break;

    case TCLXML_PARSE:

      if (objc != 3) {
        Tcl_WrongNumArgs(interp, 2, objv, "data");
        return TCL_ERROR;
      }

	  if (xmlinfo->encoding) {
		encoding = Tcl_GetStringFromObj(xmlinfo->encoding, NULL);
	  } else {
		encoding = "utf-8";
	  }
	  if (strlen(encoding) == 0 || strcmp(encoding, "utf-8") == 0) {
		data = Tcl_GetStringFromObj(objv[2], &len);
	  } else {
	    data = (char *) Tcl_GetByteArrayFromObj(objv[2], &len);
	  }

      result = TclXMLParse(interp, xmlinfo, data, len);

      break;

    case TCLXML_RESET:

      if (objc > 2) {
        Tcl_WrongNumArgs(interp, 1, objv, "");
        return TCL_ERROR;
      }

      TclXMLResetParser(interp, xmlinfo);
      break;

    default:

      Tcl_SetResult(interp, "unknown method", NULL);
      return TCL_ERROR;
  }

  return result;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLParse --
 *
 *  Invoke parser class' parse proc and check return result.
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
TclXMLParse (interp, xmlinfo, data, len)
     Tcl_Interp *interp;
     TclXML_Info *xmlinfo;
     char *data;
     int len;
{
  int result;
  TclXML_ParserClassInfo *classInfo = (TclXML_ParserClassInfo *) xmlinfo->parserClass;

  xmlinfo->status = TCL_OK;
  if (xmlinfo->result != NULL) {
    Tcl_DecrRefCount(xmlinfo->result);
  }
  xmlinfo->result = NULL;

  if (classInfo->parse) {
    if ((*classInfo->parse)(xmlinfo->clientData, data, len, xmlinfo->final) != TCL_OK) {
      return TCL_ERROR;
    }
  } else if (classInfo->parseCmd) {
    Tcl_Obj *cmdPtr = Tcl_DuplicateObj(classInfo->parseCmd);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    if (xmlinfo->clientData) {
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, (Tcl_Obj *) xmlinfo->clientData);
    } else if (xmlinfo->name) {
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, xmlinfo->name);
    }
    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, Tcl_NewStringObj(data, len));

    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);

    if (result != TCL_OK) {
      return TCL_ERROR;
    }

  } else {
    Tcl_SetResult(interp, "XML parser cannot parse", NULL);
    return TCL_ERROR;
  }

  switch (xmlinfo->status) {
    case TCL_OK:
    case TCL_BREAK:
    case TCL_CONTINUE:
      TclXMLDispatchPCDATA(xmlinfo);
      Tcl_ResetResult(interp);
      return TCL_OK;

    case TCL_ERROR:
      Tcl_SetObjResult(interp, xmlinfo->result);
      return TCL_ERROR;

    default:
      /*
       * Propagate application-specific error condition.
       * Patch by Marshall Rose <mrose@dbc.mtview.ca.us>
       */
      Tcl_SetObjResult(interp, xmlinfo->result);
      return xmlinfo->status;
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLInstanceConfigure --
 *
 *  Configures a XML parser instance.
 *
 * Results:
 *  Depends on the method.
 *
 * Side effects:
 *  Depends on the method.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXMLInstanceConfigure (interp, xmlinfo, objc, objv)
     Tcl_Interp *interp;
     TclXML_Info *xmlinfo;
     int objc;
     Tcl_Obj *CONST objv[];
{
  int index, boolv, doParse = 0, result;
  TclXML_ParserClassInfo *classinfo = (TclXML_ParserClassInfo *) xmlinfo->parserClass;

  while (objc > 1) {
    /*
     * Firstly, pass the option to the parser's own 
     * configuration management routine.
     * It may pass back an error or break code to
     * stop us from further processing the options.
     */

    if (classinfo->configure) {
      result = (*classinfo->configure)(xmlinfo->clientData, objv[0], objv[1]);
      if (result == TCL_BREAK) {
	objc -= 2;
	objv += 2;
	continue;
      }
      if (result != TCL_OK) {
	return TCL_ERROR;
      }
    } else if (classinfo->configureCmd) {
      Tcl_Obj *cmdPtr = Tcl_DuplicateObj(classinfo->configureCmd);

      Tcl_IncrRefCount(cmdPtr);
      Tcl_Preserve((ClientData) interp);

      if (xmlinfo->clientData) {
	Tcl_ListObjAppendElement(interp, cmdPtr, (Tcl_Obj *) xmlinfo->clientData);
      } else if (xmlinfo->name) {
	Tcl_ListObjAppendElement(interp, cmdPtr, xmlinfo->name);
      }

      Tcl_ListObjAppendElement(interp, cmdPtr, objv[0]);
      Tcl_ListObjAppendElement(interp, cmdPtr, objv[1]);

      result = Tcl_GlobalEvalObj(interp, cmdPtr);

      Tcl_DecrRefCount(cmdPtr);
      Tcl_Release((ClientData) interp);

      if (result == TCL_BREAK) {
	objc -= 2;
	objv += 2;
	continue;
      } else if (result != TCL_OK) {
	return TCL_ERROR;
      }
    }

    Tcl_ResetResult (interp);

    if (Tcl_GetIndexFromObj(interp, objv[0], instanceConfigureSwitches,
                            "switch", 0, &index) != TCL_OK) {
      return TCL_ERROR;
    }
    switch ((enum instanceConfigureSwitches) index) {
      case TCLXML_FINAL:            /* -final */

        if (Tcl_GetBooleanFromObj(interp, objv[1], &boolv) != TCL_OK) {
          return TCL_ERROR;
        }

        if (boolv && !xmlinfo->final) {
          doParse = 1;

        } else if (!boolv && xmlinfo->final) {
          /*
           * Reset the parser for new input
           */

          TclXMLResetParser(interp, xmlinfo);
          doParse = 0;
        }
        xmlinfo->final = boolv;
        break;

	  case TCLXML_ENCODING: /* -encoding */
		if (xmlinfo->encoding) {
		  Tcl_DecrRefCount(xmlinfo->encoding);
		}
		xmlinfo->encoding = objv[1];
		Tcl_IncrRefCount(xmlinfo->encoding);
		break;

      case TCLXML_VALIDATE:         /* -validate */
        if (Tcl_GetBooleanFromObj(interp, objv[1], &boolv) != TCL_OK) {
          return TCL_ERROR;
        }
        /*
         * If the parser is in the middle of parsing a document,
         * this will be ignored.  Perhaps an error should be returned?
         */
        xmlinfo->validate = boolv;
        break;

    case TCLXML_BASEURL:             /* -baseurl, -baseuri */
    case TCLXML_BASEURI:
        if (xmlinfo->base != NULL) {
          Tcl_DecrRefCount(xmlinfo->base);
        }

        xmlinfo->base = objv[1];
        Tcl_IncrRefCount(xmlinfo->base);
        break;

      case TCLXML_DEFAULTEXPANDINTERNALENTITIES:    /* -defaultexpandinternalentities */
        /* ericm@scriptics */
        if (Tcl_GetBooleanFromObj(interp, objv[1], &boolv) != TCL_OK) {
          return TCL_ERROR;
        }
        xmlinfo->expandinternalentities = boolv;
        break;

      case TCLXML_PARAMENTITYPARSING:
        /* ericm@scriptics */
      case TCLXML_NOWHITESPACE:
      case TCLXML_REPORTEMPTY:
        /*
         * All of these get passed through to the instance's
         * configure procedure.
         */

        if (TclXMLConfigureParserInstance(xmlinfo, objv[0], objv[1]) != TCL_OK) {
          return TCL_ERROR;
        }
        break;

      case TCLXML_ELEMENTSTARTCMD:  /* -elementstartcommand */

        if (xmlinfo->elementstartcommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->elementstartcommand);
        }
        xmlinfo->elementstart = NULL;

        xmlinfo->elementstartcommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->elementstartcommand);
        break;

      case TCLXML_ELEMENTENDCMD:        /* -elementendcommand */

        if (xmlinfo->elementendcommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->elementendcommand);
        }
        xmlinfo->elementend = NULL;

        xmlinfo->elementendcommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->elementendcommand);
        break;

      case TCLXML_DATACMD:      /* -characterdatacommand */

        if (xmlinfo->datacommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->datacommand);
        }
        xmlinfo->cdatacb = NULL;

        xmlinfo->datacommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->datacommand);
        break;

      case TCLXML_PICMD:         /* -processinginstructioncommand */

        if (xmlinfo->picommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->picommand);
        }
        xmlinfo->pi = NULL;

        xmlinfo->picommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->picommand);
        break;

      case TCLXML_DEFAULTCMD:       /* -defaultcommand */

        if (xmlinfo->defaultcommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->defaultcommand);
        }
        xmlinfo->defaultcb = NULL;

        xmlinfo->defaultcommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->defaultcommand);
        break;

      case TCLXML_UNPARSEDENTITYCMD:        /* -unparsedentitydeclcommand */

        if (xmlinfo->unparsedcommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->unparsedcommand);
        }
        xmlinfo->unparsed = NULL;

        xmlinfo->unparsedcommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->unparsedcommand);
        break;

      case TCLXML_NOTATIONCMD:          /* -notationdeclcommand */

        if (xmlinfo->notationcommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->notationcommand);
        }
        xmlinfo->notation = NULL;

        xmlinfo->notationcommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->notationcommand);
        break;

      case TCLXML_EXTERNALENTITYCMD:    /* -externalentitycommand */

        if (xmlinfo->entitycommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->entitycommand);
        }
        xmlinfo->entity = NULL;

        xmlinfo->entitycommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->entitycommand);
        break;

      case TCLXML_UNKNOWNENCODINGCMD:       /* -unknownencodingcommand */

        /* Not implemented */
        break;

        if (xmlinfo->unknownencodingcommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->unknownencodingcommand);
        }
        xmlinfo->unknownencoding = NULL;

        xmlinfo->unknownencodingcommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->unknownencodingcommand);
        break;
    
      case TCLXML_COMMENTCMD:      /* -commentcommand */
        /* ericm@scriptics.com */
        if (xmlinfo->commentCommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->commentCommand);
        }
        xmlinfo->comment = NULL;

        xmlinfo->commentCommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->commentCommand);
        break;

      case TCLXML_NOTSTANDALONECMD:      /* -notstandalonecommand */
        /* ericm@scriptics.com */
        if (xmlinfo->notStandaloneCommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->notStandaloneCommand);
        }
        xmlinfo->notStandalone = NULL;

        xmlinfo->notStandaloneCommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->notStandaloneCommand);
        break;

#ifdef TCLXML_CDATASECTIONS
      case TCLXML_STARTCDATASECTIONCMD: /* -startcdatasectioncommand */
        /* ericm@scriptics */
        if (xmlinfo->startCdataSectionCommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->startCdataSectionCommand);
        }
        xmlinfo->startCDATASection = NULL;

        xmlinfo->startCdataSectionCommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->startCdataSectionCommand);
        break;

      case TCLXML_ENDCDATASECTIONCMD:       /* -endcdatasectioncommand */
        /* ericm@scriptics */
        if (xmlinfo->endCdataSectionCommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->endCdataSectionCommand);
        }
        xmlinfo->endCDATASection = NULL;

        xmlinfo->endCdataSectionCommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->endCdataSectionCommand);
        break;
#endif

      case TCLXML_ELEMENTDECLCMD:      /* -elementdeclcommand */
        /* ericm@scriptics.com */
        if (xmlinfo->elementDeclCommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->elementDeclCommand);
        }
        xmlinfo->elementDecl = NULL;

        xmlinfo->elementDeclCommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->elementDeclCommand);
        break;

      case TCLXML_ATTLISTDECLCMD:      /* -attlistdeclcommand */
        /* ericm@scriptics.com */
        if (xmlinfo->attlistDeclCommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->attlistDeclCommand);
        }
        xmlinfo->attlistDecl = NULL;

        xmlinfo->attlistDeclCommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->attlistDeclCommand);
        break;

      case TCLXML_STARTDOCTYPEDECLCMD:      /* -startdoctypedeclcommand */
        /* ericm@scriptics.com */
        if (xmlinfo->startDoctypeDeclCommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->startDoctypeDeclCommand);
        }
        xmlinfo->startDoctypeDecl = NULL;

        xmlinfo->startDoctypeDeclCommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->startDoctypeDeclCommand);
        break;

      case TCLXML_ENDDOCTYPEDECLCMD:      /* -enddoctypedeclcommand */
        /* ericm@scriptics.com */
        if (xmlinfo->endDoctypeDeclCommand != NULL) {
          Tcl_DecrRefCount(xmlinfo->endDoctypeDeclCommand);
        }
        xmlinfo->endDoctypeDecl = NULL;

        xmlinfo->endDoctypeDeclCommand = objv[1];
        Tcl_IncrRefCount(xmlinfo->endDoctypeDeclCommand);
        break;

      case TCLXML_ENTITYDECLCMD:      /* -entitydeclcommand */
      case TCLXML_PARAMENTITYDECLCMD: /* -parameterentitydeclcommand */
      case TCLXML_DOCTYPECMD:         /* -doctypecommand */
      case TCLXML_ENTITYREFCMD:       /* -entityreferencecommand */
      case TCLXML_XMLDECLCMD:         /* -xmldeclcommand */
	/* commands used by tcldom, but not here yet */
        break;

      default:
        return TCL_ERROR;
        break;
    }

    objv += 2;
    objc -= 2;

  }

  if (doParse) {
    return TclXMLParse(interp, xmlinfo, "", 0);
  } else {
    return TCL_OK;
  }

}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLCget --
 *
 *  Returns setting of configuration option.
 *
 * Results:
 *  Option value.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXMLCget (interp, xmlinfo, objc, objv)
     Tcl_Interp *interp;
     TclXML_Info *xmlinfo;
     int objc;
     Tcl_Obj *CONST objv[];
{
  int index;

  if (Tcl_GetIndexFromObj(interp, objv[0], instanceConfigureSwitches, "switch", 0, &index) != TCL_OK) {
    return TCL_ERROR;
  }

  Tcl_SetObjResult(interp, Tcl_NewObj());

  switch ((enum instanceConfigureSwitches) index) {
    case TCLXML_FINAL:
      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(xmlinfo->final));
      break;
    case TCLXML_VALIDATE:
      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(xmlinfo->validate));
      break;
    case TCLXML_DEFAULTEXPANDINTERNALENTITIES:
      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(xmlinfo->expandinternalentities));
      break;
    case TCLXML_REPORTEMPTY:
      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(xmlinfo->reportempty));
      break;
    case TCLXML_PARAMENTITYPARSING:
      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(xmlinfo->paramentities));
      break;
    case TCLXML_NOWHITESPACE:
      Tcl_SetObjResult(interp, Tcl_NewBooleanObj(xmlinfo->nowhitespace));
      break;
    case TCLXML_BASEURL:
	case TCLXML_BASEURI:
      if (xmlinfo->base) {
        Tcl_SetObjResult(interp, xmlinfo->base);
      }
      break;
	case TCLXML_ENCODING:
	  if (xmlinfo->encoding) {
		Tcl_SetObjResult(interp, xmlinfo->encoding);
	  }
	  break;
    case TCLXML_ELEMENTSTARTCMD:
      if (xmlinfo->elementstartcommand) {
        Tcl_SetObjResult(interp, xmlinfo->elementstartcommand);
      }
      break;
    case TCLXML_ELEMENTENDCMD:
      if (xmlinfo->elementendcommand) {
        Tcl_SetObjResult(interp, xmlinfo->elementendcommand);
      }
      break;
    case TCLXML_DATACMD:
      if (xmlinfo->datacommand) {
       Tcl_SetObjResult(interp, xmlinfo->datacommand);
      }
      break;
    case TCLXML_PICMD:
      if (xmlinfo->picommand) {
        Tcl_SetObjResult(interp, xmlinfo->picommand);
      }
      break;
    case TCLXML_DEFAULTCMD:
      if (xmlinfo->defaultcommand) {
        Tcl_SetObjResult(interp, xmlinfo->defaultcommand);
      }
      break;
    case TCLXML_UNPARSEDENTITYCMD:
      if (xmlinfo->unparsedcommand) {
        Tcl_SetObjResult(interp, xmlinfo->unparsedcommand);
      }
      break;
    case TCLXML_NOTATIONCMD:
      if (xmlinfo->notationcommand) {
        Tcl_SetObjResult(interp, xmlinfo->notationcommand);
      }
      break;
    case TCLXML_EXTERNALENTITYCMD:
      if (xmlinfo->entitycommand) {
        Tcl_SetObjResult(interp, xmlinfo->entitycommand);
      }
      break;
    case TCLXML_UNKNOWNENCODINGCMD:
      if (xmlinfo->unknownencodingcommand) {
        Tcl_SetObjResult(interp, xmlinfo->unknownencodingcommand);
      }
      break;
    case TCLXML_COMMENTCMD:
      if (xmlinfo->commentCommand) {
        Tcl_SetObjResult(interp, xmlinfo->commentCommand);
      }
      break;
    case TCLXML_NOTSTANDALONECMD:
      if (xmlinfo->notStandaloneCommand) {
        Tcl_SetObjResult(interp, xmlinfo->notStandaloneCommand);
      }
      break;
#ifdef TCLXML_CDATASECTIONS
    case TCLXML_STARTCDATASECTIONCMD:
      if (xmlinfo->startCdataSectionCommand) {
        Tcl_SetObjResult(interp, xmlinfo->startCdataSectionCommand);
      }
      break;
    case TCLXML_ENDCDATASECTIONCMD:
      if (xmlinfo->endCdataSectionCommand) {
        Tcl_SetObjResult(interp, xmlinfo->endCdataSectionCommand);
      }
      break;
#else
    case TCLXML_STARTCDATASECTIONCMD:
    case TCLXML_ENDCDATASECTIONCMD:
      break;
#endif
    case TCLXML_ELEMENTDECLCMD:
      if (xmlinfo->elementDeclCommand) {
        Tcl_SetObjResult(interp, xmlinfo->elementDeclCommand);
      }
      break;
    case TCLXML_ATTLISTDECLCMD:
      if (xmlinfo->attlistDeclCommand) {
       Tcl_SetObjResult(interp, xmlinfo->attlistDeclCommand);
      }
      break;
    case TCLXML_STARTDOCTYPEDECLCMD:
      if (xmlinfo->startDoctypeDeclCommand) {
       Tcl_SetObjResult(interp, xmlinfo->startDoctypeDeclCommand);
      }
      break;
    case TCLXML_ENDDOCTYPEDECLCMD:
      if (xmlinfo->endDoctypeDeclCommand) {
        Tcl_SetObjResult(interp, xmlinfo->endDoctypeDeclCommand);
      }
      break;

  case TCLXML_ENTITYDECLCMD:
  case TCLXML_PARAMENTITYDECLCMD:
  case TCLXML_DOCTYPECMD:
  case TCLXML_ENTITYREFCMD:
  case TCLXML_XMLDECLCMD:
    /* These are not (yet) supported) */
    break;
  }

  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLConfigureParserInstance --
 *
 *  Set an option in a parser instance.
 *
 * Results:
 *  Standard Tcl result.
 *
 * Side effects:
 *  Depends on parser class.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXMLConfigureParserInstance (xmlinfo, option, value)
     TclXML_Info *xmlinfo;
     Tcl_Obj *option;
     Tcl_Obj *value;
{
  TclXML_ParserClassInfo *classInfo = (TclXML_ParserClassInfo *) xmlinfo->parserClass;

  if (classInfo->configure) {
    if ((*classInfo->configure)(xmlinfo->clientData, option, value) != TCL_OK) {
      return TCL_ERROR;
    }
  } else if (classInfo->configureCmd) {
    Tcl_Obj *cmdPtr = Tcl_DuplicateObj(classInfo->configureCmd);
    int result;

    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    /* SF Bug 514045.
     */

    if (xmlinfo->clientData) {
      Tcl_ListObjAppendElement(NULL, cmdPtr, (Tcl_Obj *) xmlinfo->clientData);
    } else if (xmlinfo->name) {
      Tcl_ListObjAppendElement(NULL, cmdPtr, xmlinfo->name);
    }

    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, option);
    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, value);

    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);

    if (result != TCL_OK) {
      return TCL_ERROR;
    }
  } else {
    Tcl_SetResult(xmlinfo->interp, "no configure procedure for parser", NULL);
    return TCL_ERROR;
  }
  return TCL_OK;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLGet --
 *
 *  Returns runtime parser information, depending on option
 *      ericm@scriptics.com, 1999.6.28
 *
 * Results:
 *  Option value.
 *
 * Side effects:
 *  None.
 *
 *----------------------------------------------------------------------------
 */

static int
TclXMLGet (interp, xmlinfo, objc, objv)
     Tcl_Interp *interp;
     TclXML_Info *xmlinfo;
     int objc;
     Tcl_Obj *CONST objv[];
{
  TclXML_ParserClassInfo *classInfo = (TclXML_ParserClassInfo *) xmlinfo->parserClass; 

  if (classInfo->get) {
    return (*classInfo->get)(xmlinfo->clientData, objc, objv);
  } else if (classInfo->getCmd) {
    Tcl_Obj *cmdPtr = Tcl_DuplicateObj(classInfo->getCmd);
    int i, result;

    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    for (i = 0; i < objc; i++) {
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, objv[i]);
    }

    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);

    return result;
  } else {
    Tcl_SetResult(interp, "parser has no get procedure", NULL);
    return TCL_ERROR;
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLHandlerResult --
 *
 *  Manage the result of the application callback.
 *
 * Results:
 *  None.
 *
 * Side Effects:
 *  Further invocation of callback scripts may be inhibited.
 *
 *----------------------------------------------------------------------------
 */

static void
TclXMLHandlerResult(xmlinfo, result)
     TclXML_Info *xmlinfo;
     int result;
{
  switch (result) {
    case TCL_OK:
      xmlinfo->status = TCL_OK;
      break;

    case TCL_CONTINUE:
      /*
       * Skip callbacks until the matching end element event
       * occurs for the currently open element.
       * Keep a reference count to handle nested
       * elements.
       */
      xmlinfo->status = TCL_CONTINUE;
      xmlinfo->continueCount = 0;
      break;

    case TCL_BREAK:
      /*
       * Skip all further callbacks, but return OK.
       */
      xmlinfo->status = TCL_BREAK;
      break;

    case TCL_ERROR:
    default:
      /*
       * Skip all further callbacks, and return error.
       */
      xmlinfo->status = TCL_ERROR;
      xmlinfo->result = Tcl_GetObjResult(xmlinfo->interp);
      Tcl_IncrRefCount(xmlinfo->result);
      break;
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_ElementStartHandler --
 *
 *  Called by parser instance for each start tag.
 *
 * Results:
 *  None.
 *
 * Side Effects:
 *  Callback script is invoked.
 *
 *----------------------------------------------------------------------------
 */

void
TclXML_ElementStartHandler(userData, name, nsuri, atts, nsDecls)
     void *userData;
     Tcl_Obj *name;
     Tcl_Obj *nsuri;
     Tcl_Obj *atts;
     Tcl_Obj *nsDecls;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;

  TclXMLDispatchPCDATA(xmlinfo);

  if (xmlinfo->status == TCL_CONTINUE) {

    /*
     * We're currently skipping elements looking for the 
     * close of the continued element.
     */

    xmlinfo->continueCount++;
    return;
  }

  if ((xmlinfo->elementstartcommand == NULL && 
       xmlinfo->elementstart == NULL) || 
      xmlinfo->status != TCL_OK) {
    return;
  }

  if (xmlinfo->elementstart) {
    result = (xmlinfo->elementstart)(xmlinfo->interp, xmlinfo->elementstartdata, name, nsuri, atts, nsDecls);
  } else if (xmlinfo->elementstartcommand) {
    Tcl_Obj *cmdPtr;

    /*
     * Take a copy of the callback script so that arguments may be appended.
     */

    cmdPtr = Tcl_DuplicateObj(xmlinfo->elementstartcommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, name);
    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, atts);
    if (nsuri) {
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, Tcl_NewStringObj("-namespace", -1));
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, nsuri);
    }
    if (nsDecls) {
      int len;
      if ((Tcl_ListObjLength(xmlinfo->interp, nsDecls, &len) == TCL_OK) && (len > 0)) {
	Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, Tcl_NewStringObj("-namespacedecls", -1));
	Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, nsDecls);
      }
    }

    /*
     * It would be desirable to be able to terminate parsing
     * if the return result is TCL_ERROR or TCL_BREAK.
     */

    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_ElementEndHandler --
 *
 *  Called by parser instance for each end tag.
 *
 * Results:
 *  None.
 *
 * Side Effects:
 *  Callback script is invoked.
 *
 *----------------------------------------------------------------------------
 */

void
TclXML_ElementEndHandler(userData, name)
     void *userData;
     Tcl_Obj *name;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;;

  TclXMLDispatchPCDATA(xmlinfo);

  if (xmlinfo->status == TCL_CONTINUE) {
    /*
     * We're currently skipping elements looking for the
     * end of the currently open element.
     */

    if (!--(xmlinfo->continueCount)) {
      xmlinfo->status = TCL_OK;
    } else {
      return;
	}
  }

  if ((xmlinfo->elementend == NULL && 
       xmlinfo->elementendcommand == NULL) ||
      xmlinfo->status != TCL_OK) {
    return;
  }

  if (xmlinfo->elementend) {
    result = (xmlinfo->elementend)(xmlinfo->interp, xmlinfo->elementenddata, name);
  } else if (xmlinfo->elementendcommand) {
    Tcl_Obj *cmdPtr;

    /*
     * Take a copy of the callback script so that arguments may be appended.
     */

    cmdPtr = Tcl_DuplicateObj(xmlinfo->elementendcommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, name);

    /*
     * It would be desirable to be able to terminate parsing
     * if the return result is TCL_ERROR or TCL_BREAK.
     */
    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

  return;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_CharacterDataHandler --
 *
 *  Called by parser instance for character data.
 *
 * Results:
 *  None.
 *
 * Side Effects:
 *  Character data is accumulated in a string object
 *
 *----------------------------------------------------------------------------
 */

void
TclXML_CharacterDataHandler(userData, s)
     void *userData;
     Tcl_Obj *s;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  if (xmlinfo->cdata == NULL) {
    xmlinfo->cdata = s;
    Tcl_IncrRefCount(xmlinfo->cdata);
  } else {
    Tcl_AppendObjToObj(xmlinfo->cdata, s);
  }
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLDispatchPCDATA --
 *
 *  Called to check whether any accumulated character data
 *  exists, and if so invoke the callback.
 *
 * Results:
 *  None.
 *
 * Side Effects:
 *  Callback script evaluated.
 *
 *----------------------------------------------------------------------------
 */

static void
TclXMLDispatchPCDATA(xmlinfo)
     TclXML_Info *xmlinfo;
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  int result = TCL_OK;

  if (xmlinfo->cdata == NULL || 
      (xmlinfo->datacommand == NULL && xmlinfo->cdatacb == NULL) ||
      xmlinfo->status != TCL_OK) {
    return;
  }

  /*
   * Optionally ignore white-space-only PCDATA
   */

  if (xmlinfo->nowhitespace) {
    if (!Tcl_RegExpMatchObj(xmlinfo->interp, xmlinfo->cdata, tsdPtr->whitespaceRE)) {
      goto finish;
    }
  }

  if (xmlinfo->cdatacb) {
    result = (xmlinfo->cdatacb)(xmlinfo->interp, xmlinfo->cdatacbdata, xmlinfo->cdata);
  } else if (xmlinfo->datacommand) {
    Tcl_Obj *cmdPtr;

    /*
     * Take a copy of the callback script so that arguments may be appended.
     */

    cmdPtr = Tcl_DuplicateObj(xmlinfo->datacommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    if (Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, xmlinfo->cdata) != TCL_OK) {
      xmlinfo->status = TCL_ERROR;
      return;
    }

    /*
     * It would be desirable to be able to terminate parsing
     * if the return result is TCL_ERROR or TCL_BREAK.
     */
    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

 finish:
  Tcl_DecrRefCount(xmlinfo->cdata);
  xmlinfo->cdata = NULL;

  return;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_ProcessingInstructionHandler --
 *
 *  Called by parser instance for processing instructions.
 *
 * Results:
 *  None.
 *
 * Side Effects:
 *  Callback script is invoked.
 *
 *----------------------------------------------------------------------------
 */

void
TclXML_ProcessingInstructionHandler(userData, target, data)
     void *userData;
     Tcl_Obj *target;
     Tcl_Obj *data;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;

  TclXMLDispatchPCDATA(xmlinfo);

  if ((xmlinfo->picommand == NULL && xmlinfo->pi == NULL) ||
      xmlinfo->status != TCL_OK) {
    return;
  }

  if (xmlinfo->pi) {
    result = (xmlinfo->pi)(xmlinfo->interp, xmlinfo->pidata, target, data);
  } else if (xmlinfo->picommand) {
    Tcl_Obj *cmdPtr;

    /*
     * Take a copy of the callback script so that arguments may be appended.
     */

    cmdPtr = Tcl_DuplicateObj(xmlinfo->picommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, target);
    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, data);

    /*
     * It would be desirable to be able to terminate parsing
     * if the return result is TCL_ERROR or TCL_BREAK.
     */
    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

  return;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_DefaultHandler --
 *
 *  Called by parser instance for processing data which has no other handler.
 *
 * Results:
 *  None.
 *
 * Side Effects:
 *  Callback script is invoked.
 *
 *----------------------------------------------------------------------------
 */

void
TclXML_DefaultHandler(userData, s)
     void *userData;
     Tcl_Obj *s;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;

  TclXMLDispatchPCDATA(xmlinfo);

  if ((xmlinfo->defaultcommand == NULL && xmlinfo->defaultcb == NULL) ||
      xmlinfo->status != TCL_OK) {
    return;
  }

  if (xmlinfo->defaultcb) {
    result = (xmlinfo->defaultcb)(xmlinfo->interp, xmlinfo->defaultdata, s);
  } else if (xmlinfo->defaultcommand) {
    Tcl_Obj *cmdPtr;

    /*
     * Take a copy of the callback script so that arguments may be appended.
     */

    cmdPtr = Tcl_DuplicateObj(xmlinfo->defaultcommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, s);

    /*
     * It would be desirable to be able to terminate parsing
     * if the return result is TCL_ERROR or TCL_BREAK.
     */
    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

  return;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_UnparsedDeclHandler --
 *
 *  Called by parser instance for processing an unparsed entity references.
 *
 * Results:
 *  None.
 *
 * Side Effects:
 *  Callback script is invoked.
 *
 *----------------------------------------------------------------------------
 */

void
TclXML_UnparsedDeclHandler(userData, entityName, base, systemId, publicId, notationName)
     void *userData;
     Tcl_Obj *entityName;
     Tcl_Obj *base;
     Tcl_Obj *systemId;
     Tcl_Obj *publicId;
     Tcl_Obj *notationName;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;

  TclXMLDispatchPCDATA(xmlinfo);

  if ((xmlinfo->unparsedcommand == NULL && xmlinfo->unparsed == NULL) ||
      xmlinfo->status != TCL_OK) {
    return;
  }

  if (xmlinfo->unparsed) {
    result = (xmlinfo->unparsed)(xmlinfo->interp, xmlinfo->unparseddata, entityName, base, systemId, publicId, notationName);
  } else if (xmlinfo->unparsedcommand) {
    Tcl_Obj *cmdPtr;

    /*
     * Take a copy of the callback script so that arguments may be appended.
     */

    cmdPtr = Tcl_DuplicateObj(xmlinfo->unparsedcommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, entityName);
    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, base);
    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, systemId);
    if (publicId == NULL) {
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, Tcl_NewObj());
    } else {
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, publicId);
    }
    if (notationName == NULL) {
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, Tcl_NewObj());
    } else {
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, notationName);
    }

    /*
     * It would be desirable to be able to terminate parsing
     * if the return result is TCL_ERROR or TCL_BREAK.
     */
    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

  return;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_NotationDeclHandler --
 *
 *  Called by parser instance for processing a notation declaration.
 *
 * Results:
 *  None.
 *
 * Side Effects:
 *  Callback script is invoked.
 *
 *----------------------------------------------------------------------------
 */

void
TclXML_NotationDeclHandler(userData, notationName, base, systemId, publicId)
     void *userData;
     Tcl_Obj *notationName;
     Tcl_Obj *base;
     Tcl_Obj *systemId;
     Tcl_Obj *publicId;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;

  TclXMLDispatchPCDATA(xmlinfo);

  if ((xmlinfo->notationcommand == NULL && xmlinfo->notation == NULL) ||
      xmlinfo->status != TCL_OK) {
    return;
  }

  if (xmlinfo->notation) {
    result = (xmlinfo->notation)(xmlinfo->interp, xmlinfo->notationdata, notationName, base, systemId, publicId);
  } else if (xmlinfo->notationcommand) {
    Tcl_Obj *cmdPtr;

    /*
     * Take a copy of the callback script so that arguments may be appended.
     */

    cmdPtr = Tcl_DuplicateObj(xmlinfo->notationcommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, notationName);
    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, base);
    if (systemId == NULL) {
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, Tcl_NewObj());
    } else {
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, systemId);
    }
    if (publicId == NULL) {
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, Tcl_NewObj());
    } else {
      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, publicId);
    }

    /*
     * It would be desirable to be able to terminate parsing
     * if the return result is TCL_ERROR or TCL_BREAK.
     */
    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

  return;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_UnknownEncodingHandler --
 *
 *  Called by parser instance for processing a reference to a character in an 
 *  unknown encoding.
 *
 * Results:
 *  None.
 *
 * Side Effects:
 *  Callback script is invoked.
 *
 *----------------------------------------------------------------------------
 */

int
TclXML_UnknownEncodingHandler(encodingHandlerData, name, info)
     void *encodingHandlerData;
     Tcl_Obj *name;
     void *info;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) encodingHandlerData;
  int result = TCL_OK;

  TclXMLDispatchPCDATA(xmlinfo);

  Tcl_SetResult(xmlinfo->interp, "not implemented", NULL);
  return 0;

  if ((xmlinfo->unknownencodingcommand == NULL && xmlinfo->unknownencoding == NULL) ||
      xmlinfo->status != TCL_OK) {
    return 0;
  }

  if (xmlinfo->unknownencoding) {
    result = (xmlinfo->unknownencoding)(xmlinfo->interp, xmlinfo->unknownencodingdata, name, info);
  } else if (xmlinfo->unknownencodingcommand) {
    Tcl_Obj *cmdPtr;

    /*
     * Take a copy of the callback script so that arguments may be appended.
     */

    cmdPtr = Tcl_DuplicateObj(xmlinfo->unknownencodingcommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    /*
     * Setup the arguments
     */

    /*
     * It would be desirable to be able to terminate parsing
     * if the return result is TCL_ERROR or TCL_BREAK.
     */
    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

  return 0;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_ExternalEntityRefHandler --
 *
 *  Called by parser instance for processing external entity references.
 *  May also be called outside the context of a parser for XInclude
 *  or XSLT import/include.
 *
 * Results:
 *  Returns success code.
 *
 * Side Effects:
 *  Callback script is invoked.
 *
 *----------------------------------------------------------------------------
 */

int
TclXML_ExternalEntityRefHandler(userData, openEntityNames, base,
    systemId, publicId)
     ClientData userData;	/* NULL if not in parser context, current interp gets result */
     Tcl_Obj *openEntityNames;
     Tcl_Obj *base;
     Tcl_Obj *systemId;
     Tcl_Obj *publicId;
{
  ThreadSpecificData *tsdPtr = (ThreadSpecificData *) Tcl_GetThreadData(&dataKey, sizeof(ThreadSpecificData));
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;
  Tcl_Obj *oldContext;

  if (xmlinfo != NULL) {
    TclXMLDispatchPCDATA(xmlinfo);

    if (xmlinfo->entitycommand == NULL && xmlinfo->entity == NULL) {
      if (Tcl_IsSafe(xmlinfo->interp)) {
	return TCL_BREAK;
      } else {
	return TCL_CONTINUE;
      }
    }
    if (xmlinfo->status != TCL_OK) {
      return xmlinfo->status;
    }
    oldContext = xmlinfo->context;
    xmlinfo->context = openEntityNames;

    if (xmlinfo->entity) {
      result = (xmlinfo->entity)(xmlinfo->interp, xmlinfo->entitydata, xmlinfo->name, base, systemId, publicId);
    } else if (xmlinfo->entitycommand) {
      Tcl_Obj *cmdPtr;

      /*
       * Take a copy of the callback script so that arguments may be appended.
       */

      cmdPtr = Tcl_DuplicateObj(xmlinfo->entitycommand);
      Tcl_IncrRefCount(cmdPtr);
      Tcl_Preserve((ClientData) xmlinfo->interp);

      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, xmlinfo->name);

      if (base) {
	Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, base);
      } else {
	Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, Tcl_NewObj());
      }

      Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, systemId);

      if (publicId) {
	Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, publicId);
      } else {
	Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, Tcl_NewObj());
      }

      /*
       * It would be desirable to be able to terminate parsing
       * if the return result is TCL_ERROR or TCL_BREAK.
       */
      result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

      Tcl_DecrRefCount(cmdPtr);
      Tcl_Release((ClientData) xmlinfo->interp);
    }

    /*
     * Return results have a different meaning for external entities,
     * so don't retain the result for later use.
     * TclXMLHandlerResult(xmlinfo, result);
     */
    xmlinfo->context = oldContext;

  } else {
    /*
     * No parser context
     */

    if (tsdPtr->externalentitycmd) {
      Tcl_Obj *cmdPtr;

      /*
       * Take a copy of the callback script so that arguments may be appended.
       */

      cmdPtr = Tcl_DuplicateObj(tsdPtr->externalentitycmd);
      Tcl_IncrRefCount(cmdPtr);
      Tcl_Preserve((ClientData) tsdPtr->interp);

      if (base) {
	Tcl_ListObjAppendElement(tsdPtr->interp, cmdPtr, base);
      } else {
	Tcl_ListObjAppendElement(tsdPtr->interp, cmdPtr, Tcl_NewObj());
      }

      Tcl_ListObjAppendElement(tsdPtr->interp, cmdPtr, systemId);

      if (publicId) {
	Tcl_ListObjAppendElement(tsdPtr->interp, cmdPtr, publicId);
      } else {
	Tcl_ListObjAppendElement(tsdPtr->interp, cmdPtr, Tcl_NewObj());
      }

      /*
       * It would be desirable to be able to terminate parsing
       * if the return result is TCL_ERROR or TCL_BREAK.
       */
      result = Tcl_GlobalEvalObj(tsdPtr->interp, cmdPtr);

      Tcl_DecrRefCount(cmdPtr);
      Tcl_Release((ClientData) tsdPtr->interp);
    } else if (Tcl_IsSafe(tsdPtr->interp)) {
      return TCL_BREAK;
    } else {
      return TCL_CONTINUE;
    }
  }

  return result;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_CommentHandler --
 *
 *  Called by parser instance to handle comments encountered while parsing
 *      Added by ericm@scriptics.com, 1999.6.25.
 *
 * Results:
 *  None.
 *
 * Side Effects:
 *  Callback script is invoked.
 *
 *----------------------------------------------------------------------------
 */
void
TclXML_CommentHandler(userData, data)
    void *userData;
    Tcl_Obj *data;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;

  TclXMLDispatchPCDATA(xmlinfo);

  if (xmlinfo->status == TCL_CONTINUE) {
    /* Currently skipping elements, looking for the close of the
     * continued element.  Comments don't have an end tag, so
     * don't increment xmlinfo->continueCount
     */
    return;
  }

  if ((xmlinfo->commentCommand == NULL && xmlinfo->comment == NULL) ||
      xmlinfo->status != TCL_OK) {
    return;
  }

  if (xmlinfo->comment) {
    result = (xmlinfo->comment)(xmlinfo->interp, xmlinfo->commentdata, data);
  } else if (xmlinfo->commentCommand) {
    Tcl_Obj *cmdPtr;

    cmdPtr = Tcl_DuplicateObj(xmlinfo->commentCommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, data);

    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

  return;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_NotStandaloneHandler --
 *
 *  Called by parser instance to handle "not standalone" documents (ie, documents
 *      that have an external subset or a reference to a parameter entity, 
 *      but do not have standalone="yes")
 *      Added by ericm@scriptics.com, 1999.6.25.
 *
 * Results:
 *  None.
 *
 * Side Effects:
 *  Callback script is invoked.
 *
 *----------------------------------------------------------------------------
 */

int
TclXML_NotStandaloneHandler(userData)
    void *userData;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;

  TclXMLDispatchPCDATA(xmlinfo);

  if (xmlinfo->status != TCL_OK) {
    return 0;
  } else if (xmlinfo->notStandaloneCommand == NULL && xmlinfo->notStandalone == NULL) {
    return 1;
  }

  if (xmlinfo->notStandalone) {
    result = (xmlinfo->notStandalone)(xmlinfo->interp, xmlinfo->notstandalonedata);
  } else if (xmlinfo->notStandaloneCommand) {
    Tcl_Obj *cmdPtr;

    cmdPtr = Tcl_DuplicateObj(xmlinfo->notStandaloneCommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

  return 1;
}

/*
 *----------------------------------------------------------------------
 *
 * TclXML_ElementDeclHandler --
 *
 *	Called by expat to handle <!ELEMENT declarations.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	Callback script is invoked.
 *
 *----------------------------------------------------------------------
 */

void
TclXML_ElementDeclHandler(userData, name, contentspec)
    void *userData;
    Tcl_Obj *name;
    Tcl_Obj *contentspec;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;

  TclXMLDispatchPCDATA(xmlinfo);

  if ((xmlinfo->elementDeclCommand == NULL && xmlinfo->elementDecl == NULL) || 
      xmlinfo->status != TCL_OK) {
    return;
  }

  if (xmlinfo->elementDecl) {
    result = (xmlinfo->elementDecl)(xmlinfo->interp, xmlinfo->elementdecldata, name, contentspec);
  } else if (xmlinfo->elementDeclCommand) {
    Tcl_Obj *cmdPtr;

    cmdPtr = Tcl_DuplicateObj(xmlinfo->elementDeclCommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, name);
  
    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, contentspec);

    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

  return;
}

/*
 *----------------------------------------------------------------------
 *
 * TclXML_AttlistDeclHandler --
 *
 *	Called by parser instance to handle <!ATTLIST declarations.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	Callback script is invoked.
 *
 *----------------------------------------------------------------------
 */

void
TclXML_AttlistDeclHandler(userData, name, attributes)
    void *userData;
    Tcl_Obj *name;
    Tcl_Obj *attributes;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;

  TclXMLDispatchPCDATA(xmlinfo);

  if ((xmlinfo->attlistDeclCommand == NULL && xmlinfo->attlistDecl == NULL) || 
      xmlinfo->status != TCL_OK) {
    return;
  }

  if (xmlinfo->attlistDecl) {
    result = (xmlinfo->attlistDecl)(xmlinfo->interp, xmlinfo->attlistdecldata, name, attributes);
  } else if (xmlinfo->attlistDeclCommand) {
    Tcl_Obj *cmdPtr;

    cmdPtr = Tcl_DuplicateObj(xmlinfo->attlistDeclCommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, name);
  
    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, attributes);

    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

  return;
}

/*
 *----------------------------------------------------------------------
 *
 * TclXML_StartDoctypeDeclHandler --
 *
 *	Called by parser instance to handle the start of <!DOCTYPE declarations.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	Callback script is invoked.
 *
 *----------------------------------------------------------------------
 */

void
TclXML_StartDoctypeDeclHandler(userData, name)
    void *userData;
    Tcl_Obj *name;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;

  TclXMLDispatchPCDATA(xmlinfo);

  if ((xmlinfo->startDoctypeDeclCommand == NULL && xmlinfo->startDoctypeDecl == NULL) || 
      xmlinfo->status != TCL_OK) {
    return;
  }

  if (xmlinfo->startDoctypeDecl) {
    result = (xmlinfo->startDoctypeDecl)(xmlinfo->interp, xmlinfo->startdoctypedecldata, name);
  } else if (xmlinfo->startDoctypeDeclCommand) {
    Tcl_Obj *cmdPtr;

    cmdPtr = Tcl_DuplicateObj(xmlinfo->startDoctypeDeclCommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    Tcl_ListObjAppendElement(xmlinfo->interp, cmdPtr, name);
  
    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

  return;
}

/*
 *----------------------------------------------------------------------
 *
 * TclXML_EndDoctypeDeclHandler --
 *
 *	Called by parser instance to handle the end of <!DOCTYPE declarations.
 *
 * Results:
 *	None.
 *
 * Side effects:
 *	Callback script is invoked.
 *
 *----------------------------------------------------------------------
 */

void
TclXML_EndDoctypeDeclHandler(userData)
    void *userData;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) userData;
  int result = TCL_OK;

  TclXMLDispatchPCDATA(xmlinfo);

  if ((xmlinfo->endDoctypeDeclCommand == NULL && xmlinfo->endDoctypeDecl == NULL) || 
      xmlinfo->status != TCL_OK) {
    return;
  }

  if (xmlinfo->endDoctypeDecl) {
    result = (xmlinfo->endDoctypeDecl)(xmlinfo->interp, xmlinfo->enddoctypedecldata);
  } else if (xmlinfo->endDoctypeDeclCommand) {
    Tcl_Obj *cmdPtr;

    cmdPtr = Tcl_DuplicateObj(xmlinfo->endDoctypeDeclCommand);
    Tcl_IncrRefCount(cmdPtr);
    Tcl_Preserve((ClientData) xmlinfo->interp);

    result = Tcl_GlobalEvalObj(xmlinfo->interp, cmdPtr);

    Tcl_DecrRefCount(cmdPtr);
    Tcl_Release((ClientData) xmlinfo->interp);
  }

  TclXMLHandlerResult(xmlinfo, result);

  return;
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXMLInstanceDeleteCmd --
 *
 *	Called when a parser instance is deleted.
 *
 * Results:
 *	None.
 *
 * Side Effects:
 *	Memory structures are freed.
 *
 *----------------------------------------------------------------------------
 */

static void
TclXMLInstanceDeleteCmd(clientData)
     ClientData clientData;
{
  TclXML_Info *xmlinfo = (TclXML_Info *) clientData;

  Tcl_DecrRefCount(xmlinfo->name);

  if (xmlinfo->cdata) {
    Tcl_DecrRefCount(xmlinfo->cdata);
    xmlinfo->cdata = NULL;
  }

  if (xmlinfo->elementstartcommand) {
    Tcl_DecrRefCount(xmlinfo->elementstartcommand);
  }
  if (xmlinfo->elementendcommand) {
    Tcl_DecrRefCount(xmlinfo->elementendcommand);
  }
  if (xmlinfo->datacommand) {
    Tcl_DecrRefCount(xmlinfo->datacommand);
  }
  if (xmlinfo->picommand) {
    Tcl_DecrRefCount(xmlinfo->picommand);
  }
  if (xmlinfo->entitycommand) {
    Tcl_DecrRefCount(xmlinfo->entitycommand);
  }

  if (xmlinfo->unknownencodingcommand) {
    Tcl_DecrRefCount(xmlinfo->unknownencodingcommand);
  }

  if (xmlinfo->commentCommand) {
    Tcl_DecrRefCount(xmlinfo->commentCommand);
  }

  if (xmlinfo->notStandaloneCommand) {
    Tcl_DecrRefCount(xmlinfo->notStandaloneCommand);
  }

  if (xmlinfo->elementDeclCommand) {
    Tcl_DecrRefCount(xmlinfo->elementDeclCommand);
  }

  if (xmlinfo->attlistDeclCommand) {
    Tcl_DecrRefCount(xmlinfo->attlistDeclCommand);
  }

  if (xmlinfo->startDoctypeDeclCommand) {
    Tcl_DecrRefCount(xmlinfo->startDoctypeDeclCommand);
  }

  if (xmlinfo->endDoctypeDeclCommand) {
    Tcl_DecrRefCount(xmlinfo->endDoctypeDeclCommand);
  }

  TclXMLFreeParser(xmlinfo);
}

/*
 *----------------------------------------------------------------------------
 *
 * TclXML_Register*Cmd --
 *
 *	Configures a direct callback handler.
 *
 * Results:
 *	None.
 *
 * Side Effects:
 *	Parser data structure modified.
 *
 *----------------------------------------------------------------------------
 */

int
TclXML_RegisterElementStartProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_ElementStartProc *callback;
{
  parser->elementstart = callback;
  parser->elementstartdata = clientData;

  if (parser->elementstartcommand) {
    Tcl_DecrRefCount(parser->elementstartcommand);
    parser->elementstartcommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterElementEndProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_ElementEndProc *callback;
{
  parser->elementend = callback;
  parser->elementenddata = clientData;

  if (parser->elementendcommand) {
    Tcl_DecrRefCount(parser->elementendcommand);
    parser->elementendcommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterCharacterDataProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_CharacterDataProc *callback;
{
  parser->cdatacb = callback;
  parser->cdatacbdata = clientData;

  if (parser->datacommand) {
    Tcl_DecrRefCount(parser->datacommand);
    parser->datacommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterPIProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_PIProc *callback;
{
  parser->pi = callback;
  parser->pidata = clientData;

  if (parser->picommand) {
    Tcl_DecrRefCount(parser->picommand);
    parser->picommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterDefaultProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_DefaultProc *callback;
{
  parser->defaultcb = callback;
  parser->defaultdata = clientData;

  if (parser->defaultcommand) {
    Tcl_DecrRefCount(parser->defaultcommand);
    parser->defaultcommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterUnparsedProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_UnparsedProc *callback;
{
  parser->unparsed = callback;
  parser->unparseddata = clientData;

  if (parser->unparsedcommand) {
    Tcl_DecrRefCount(parser->unparsedcommand);
    parser->unparsedcommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterNotationDeclProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_NotationDeclProc *callback;
{
  parser->notation = callback;
  parser->notationdata = clientData;

  if (parser->notationcommand) {
    Tcl_DecrRefCount(parser->notationcommand);
    parser->notationcommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterEntityProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_EntityProc *callback;
{
  parser->entity = callback;
  parser->entitydata = clientData;

  if (parser->entitycommand) {
    Tcl_DecrRefCount(parser->entitycommand);
    parser->entitycommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterUnknownEncodingProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_UnknownEncodingProc *callback;
{
  parser->unknownencoding = callback;
  parser->unknownencodingdata = clientData;

  if (parser->unknownencodingcommand) {
    Tcl_DecrRefCount(parser->unknownencodingcommand);
    parser->unknownencodingcommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterCommentProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_CommentProc *callback;
{
  parser->comment = callback;
  parser->commentdata = clientData;

  if (parser->commentCommand) {
    Tcl_DecrRefCount(parser->commentCommand);
    parser->commentCommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterNotStandaloneProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_NotStandaloneProc *callback;
{
  parser->notStandalone = callback;
  parser->notstandalonedata = clientData;

  if (parser->notStandaloneCommand) {
    Tcl_DecrRefCount(parser->notStandaloneCommand);
    parser->notStandaloneCommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterElementDeclProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_ElementDeclProc *callback;
{
  parser->elementDecl = callback;
  parser->elementdecldata = clientData;

  if (parser->elementDeclCommand) {
    Tcl_DecrRefCount(parser->elementDeclCommand);
    parser->elementDeclCommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterAttListDeclProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_AttlistDeclProc *callback;
{
  parser->attlistDecl = callback;
  parser->attlistdecldata = clientData;

  if (parser->attlistDeclCommand) {
    Tcl_DecrRefCount(parser->attlistDeclCommand);
    parser->attlistDeclCommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterStartDoctypeDeclProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_StartDoctypeDeclProc *callback;
{
  parser->startDoctypeDecl = callback;
  parser->startdoctypedecldata = clientData;

  if (parser->startDoctypeDeclCommand) {
    Tcl_DecrRefCount(parser->startDoctypeDeclCommand);
    parser->startDoctypeDeclCommand = NULL;
  }

  return TCL_OK;
}

int
TclXML_RegisterEndDoctypeDeclProc(interp, parser, clientData, callback)
     Tcl_Interp *interp;
     TclXML_Info *parser;
     ClientData clientData;
     TclXML_EndDoctypeDeclProc *callback;
{
  parser->endDoctypeDecl = callback;
  parser->enddoctypedecldata = clientData;

  if (parser->endDoctypeDeclCommand) {
    Tcl_DecrRefCount(parser->endDoctypeDeclCommand);
    parser->endDoctypeDeclCommand = NULL;
  }

  return TCL_OK;
}
