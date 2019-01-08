/*
 * tcldom.c --
 *
 *	Generic interface to DOM Implementation.
 *	As of v3.0, there is no substantial generic layer;
 *	instead each implementation provides its own commands
 *	directly.  This module now provides common definitions
 *	for method/option tables, etc.
 *
 * Copyright (c) 2006-2007 Explain
 * http://www.explain.com.au/
 * Copyright (c) 2002-2004 Steve Ball, Zveno Pty Ltd
 *
 * See the file "LICENSE" for information on usage and
 * redistribution of this file, and for a DISCLAIMER OF ALL WARRANTIES.
 *
 * $Id: tcldom.c,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $
 *
 */

#include <tcldom/tcldom.h>

/*
 * Method tables for commands
 */

#ifndef CONST84
#define CONST84 /* Before 8.4 no 'const' required */
#endif

CONST84 char *TclDOM_DOMImplementationCommandMethods[] = {
  "hasFeature",
  "createDocument",
  "create",
  "createDocumentType",
  "createNode",
  "destroy",
  "isNode",
  "parse",
  "selectNode",
  "serialize",
  "trim",
  (char *) NULL
};
CONST84 char *TclDOM_DocumentCommandMethods[] = {
  "cget",
  "configure",
  "createElement",
  "createDocumentFragment",
  "createTextNode",
  "createComment",
  "createCDATASection",
  "createProcessingInstruction",
  "createAttribute",
  "createEntity",
  "createEntityReference",
  "createDocTypeDecl",
  "importNode",
  "createElementNS",
  "createAttributeNS",
  "getElementsByTagNameNS",
  "getElementsById",
  "createEvent",
  "getElementsByTagName",
  "dtd",
  "schema",
  (char *) NULL
};
CONST84 char *TclDOM_DocumentCommandOptions[] = {
  "-doctype",
  "-implementation",
  "-documentElement",
  (char *) NULL
};
CONST84 char *TclDOM_DocumentDTDSubmethods[] = {
  "validate",
  (char *) NULL
};
CONST84 char *TclDOM_DocumentSchemaSubmethods[] = {
  "compile",
  "validate",
  (char *) NULL
};
CONST84 char *TclDOM_DocumentRelaxNGSubmethods[] = {
  "compile",
  "validate",
  (char *) NULL
};
CONST84 char *TclDOM_NodeCommandMethods[] = {
  "cget",
  "configure",
  "insertBefore",
  "replaceChild",
  "removeChild",
  "appendChild",
  "hasChildNodes",
  "cloneNode",
  "children",
  "parent",
  "path",
  "createNode",
  "selectNode",
  "stringValue",
  "addEventListener",
  "removeEventListener",
  "dispatchEvent",
  "isSameNode",
  (char *) NULL
};
CONST84 char *TclDOM_NodeCommandOptions[] = {
  "-nodeType",
  "-parentNode",
  "-childNodes",
  "-firstChild",
  "-lastChild",
  "-previousSibling",
  "-nextSibling",
  "-attributes",
  "-namespaceURI",
  "-prefix",
  "-localName",
  "-nodeValue",
  "-cdatasection",
  "-nodeName",
  "-ownerDocument",
  (char *) NULL
};
CONST84 char *TclDOM_NodeCommandAddEventListenerOptions[] = {
  "-usecapture",
  (char *) NULL
};
CONST84 char *TclDOM_ElementCommandMethods[] = {
  "cget",
  "configure",
  "getAttribute",
  "setAttribute",
  "removeAttribute",
  "getAttributeNS",
  "setAttributeNS",
  "removeAttributeNS",
  "getAttributeNode",
  "setAttributeNode",
  "removeAttributeNode",
  "getAttributeNodeNS",
  "setAttributeNodeNS",
  "removeAttributeNodeNS",
  "getElementsByTagName",
  "normalize",
  (char *) NULL
};
CONST84 char *TclDOM_ElementCommandOptions[] = {
  "-tagName",
  "-empty",
  (char *) NULL
};
CONST84 char *TclDOM_EventCommandMethods[] = {
  "cget",
  "configure",
  "stopPropagation",
  "preventDefault",
  "initEvent",
  "initUIEvent",
  "initMouseEvent",
  "initMutationEvent",
  "postUIEvent",
  "postMouseEvent",
  "postMutationEvent",
  (char *) NULL
};
CONST84 char *TclDOM_EventCommandOptions[] = {
  "-altKey",
  "-attrName",
  "-attrChange",
  "-bubbles",
  "-button",
  "-cancelable",
  "-clientX",
  "-clientY",
  "-ctrlKey",
  "-currentNode",
  "-detail",
  "-eventPhase",
  "-metaKey",
  "-newValue",
  "-prevValue",
  "-relatedNode",
  "-screenX",
  "-screenY",
  "-shiftKey",
  "-target",
  "-timeStamp",
  "-type",
  "-view",
  (char *) NULL
};
CONST84 char *TclDOM_EventTypes[] = {
  "DOMFocusIn",
  "DOMFocusOut",
  "DOMActivate",
  "click",
  "mousedown",
  "mouseup",
  "mouseover",
  "mousemove",
  "mouseout",
  "DOMSubtreeModified",
  "DOMNodeInserted",
  "DOMNodeRemoved",
  "DOMNodeInsertedIntoDocument",
  "DOMNodeRemovedFromDocument",
  "DOMAttrModified",
  "DOMCharacterDataModified"
};

CONST84 char *TclDOM_ParseCommandOptions[] = {
  "-baseuri",
  "-externalentitycommand",
  (char *) NULL
};
CONST84 char *TclDOM_SerializeCommandOptions[] = {
  "-indent",
  "-method",
  "-encoding",
  "-omitxmldeclaration",
  (char *) NULL
};
CONST84 char *TclDOM_SerializeMethods[] = {
  "xml",
  "html",
  "text",
  (char *) NULL
};
CONST84 char *TclDOM_SelectNodeOptions[] = {
  "-namespaces",
  (char *) NULL
};

#if 0
/*
 *----------------------------------------------------------------------------
 *
 * Tcldom_Init --
 *
 *  Initialisation routine for generic module.
 *  NB. As of TclDOM v3.0 this module no longer gets loaded as
 *  a separate package.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Creates variables.
 *
 *----------------------------------------------------------------------------
 */

int
Tcldom_Init (interp)
      Tcl_Interp *interp; /* Interpreter to initialise. */
{
  Tcl_Obj *objPtr;

  Tcl_SetVar(interp, "::dom::strictDOM", "0", TCL_GLOBAL_ONLY);
  Tcl_SetVar(interp, "::dom::maxSpecials", "10", TCL_GLOBAL_ONLY);
  objPtr = Tcl_NewListObj(0, NULL);
  Tcl_ListObjAppendElement(interp, objPtr, Tcl_NewIntObj(2));
  Tcl_ListObjAppendElement(interp, objPtr, Tcl_NewStringObj("        ", -1));
  Tcl_ListObjAppendElement(interp, objPtr, Tcl_NewStringObj("\t", -1));
  Tcl_SetVar2Ex(interp, "::dom::indentspec", NULL, objPtr, TCL_GLOBAL_ONLY);
  Tcl_SetVar(interp, "::dom::xmlnsURI", "http://www.w3.org/2000/xmlns/", TCL_GLOBAL_ONLY);

  return TCL_OK;
}
#endif /* 0 */

/*
 *----------------------------------------------------------------------------
 *
 * TclDOM_SetVars --
 *
 *  Initialisation routine for TclDOM modules.
 *
 * Results:
 *  None.
 *
 * Side effects:
 *  Creates variables.
 *
 *----------------------------------------------------------------------------
 */

int
TclDOM_SetVars(interp)
     Tcl_Interp *interp;
{
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "DOMFocusIn", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "DOMFocusOut", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "DOMActivate", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "click", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "mousedown", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "mouseup", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "mouseover", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "mousemove", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "mouseout", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "DOMSubtreeModified", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "DOMNodeInserted", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "DOMRemoved", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "DOMNodeInsertedIntoDocument", Tcl_NewIntObj(0), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "DOMRemovedFromDocument", Tcl_NewIntObj(0), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "DOMAttrModified", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "DOMAttrRemoved", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::bubbles", "DOMCharacterDataModified", Tcl_NewIntObj(1), 0);

  Tcl_SetVar2Ex(interp, "::dom::cancelable", "DOMFocusIn", Tcl_NewIntObj(0), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "DOMFocusOut", Tcl_NewIntObj(0), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "DOMActivate", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "click", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "mousedown", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "mouseup", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "mouseover", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "mousemove", Tcl_NewIntObj(0), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "mouseout", Tcl_NewIntObj(1), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "DOMSubtreeModified", Tcl_NewIntObj(0), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "DOMNodeInserted", Tcl_NewIntObj(0), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "DOMRemoved", Tcl_NewIntObj(0), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "DOMNodeInsertedIntoDocument", Tcl_NewIntObj(0), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "DOMRemovedFromDocument", Tcl_NewIntObj(0), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "DOMAttrModified", Tcl_NewIntObj(0), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "DOMAttrRemoved", Tcl_NewIntObj(0), 0);
  Tcl_SetVar2Ex(interp, "::dom::cancelable", "DOMCharacterDataModified", Tcl_NewIntObj(0), 0);

  return TCL_OK;
}
