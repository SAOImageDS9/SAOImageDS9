/* tcldom.h --
 *
 *	Generic layer of TclDOM API.
 *
 * Copyright (c) 2006-2008 Explain
 * http://www.explain.com.au/
 * Copyright (c) 2002-2004 Zveno Pty Ltd
 * http://www.zveno.com/
 *
 * Zveno Pty Ltd makes this software and associated documentation
 * available free of charge for any purpose.  You may make copies
 * of the software but you must include all of this notice on any copy.
 *
 * Zveno Pty Ltd does not warrant that this software is error free
 * or fit for any purpose.  Zveno Pty Ltd disclaims any liability for
 * all claims, expenses, losses, damages and costs any user may incur
 * as a result of using, copying or modifying the software.
 *
 * $Id: tcldom.h,v 1.1.1.1 2009/01/16 22:11:49 joye Exp $
 */

#ifndef __TCLDOM_H__
#define __TCLDOM_H__

#include <tcl.h>

/*
 * For C++ compilers, use extern "C"
 */

#ifdef __cplusplus
extern "C" {
#endif

/*

 * These macros are used to control whether functions are being declared for
 * import or export in Windows, 
 * They map to no-op declarations on non-Windows systems.
 * Assumes that tcl.h defines DLLEXPORT & DLLIMPORT correctly.
 * The default build on windows is for a DLL, which causes the DLLIMPORT
 * and DLLEXPORT macros to be nonempty. To build a static library, the
 * macro STATIC_BUILD should be defined before the inclusion of tcl.h
 *
 * If a function is being declared while it is being built
 * to be included in a shared library, then it should have the DLLEXPORT
 * storage class.  If is being declared for use by a module that is going to
 * link against the shared library, then it should have the DLLIMPORT storage
 * class.  If the symbol is beind declared for a static build or for use from a
 * stub library, then the storage class should be empty.
 *
 * The convention is that a macro called BUILD_xxxx, where xxxx is the
 * name of a library we are building, is set on the compile line for sources
 * that are to be placed in the library.  When this macro is set, the
 * storage class will be set to DLLEXPORT.  At the end of the header file, the
 * storage class will be reset to DLLIMPORt.
 */

#undef TCL_STORAGE_CLASS
#ifdef BUILD_tcldom
# define TCL_STORAGE_CLASS DLLEXPORT
#else
# ifdef USE_TCL_STUBS
#  define TCL_STORAGE_CLASS
# else
#  define TCL_STORAGE_CLASS DLLIMPORT
# endif
#endif

/*
 * The main purpose of this module is to provide common switch tables
 * for command methods and options.
 */

enum TclDOM_DOMImplementationCommandMethods {
  TCLDOM_IMPL_HASFEATURE,
  TCLDOM_IMPL_CREATEDOCUMENT,
  TCLDOM_IMPL_CREATE,
  TCLDOM_IMPL_CREATEDOCUMENTTYPE,
  TCLDOM_IMPL_CREATENODE,
  TCLDOM_IMPL_DESTROY,
  TCLDOM_IMPL_ISNODE,
  TCLDOM_IMPL_PARSE,
  TCLDOM_IMPL_SELECTNODE,
  TCLDOM_IMPL_SERIALIZE,
  TCLDOM_IMPL_TRIM
};
enum TclDOM_DocumentCommandMethods {
  TCLDOM_DOCUMENT_CGET,
  TCLDOM_DOCUMENT_CONFIGURE,
  TCLDOM_DOCUMENT_CREATEELEMENT,
  TCLDOM_DOCUMENT_CREATEDOCUMENTFRAGMENT,
  TCLDOM_DOCUMENT_CREATETEXTNODE,
  TCLDOM_DOCUMENT_CREATECOMMENT,
  TCLDOM_DOCUMENT_CREATECDATASECTION,
  TCLDOM_DOCUMENT_CREATEPI,
  TCLDOM_DOCUMENT_CREATEATTRIBUTE,
  TCLDOM_DOCUMENT_CREATEENTITY,
  TCLDOM_DOCUMENT_CREATEENTITYREFERENCE,
  TCLDOM_DOCUMENT_CREATEDOCTYPEDECL,
  TCLDOM_DOCUMENT_IMPORTNODE,
  TCLDOM_DOCUMENT_CREATEELEMENTNS,
  TCLDOM_DOCUMENT_CREATEATTRIBUTENS,
  TCLDOM_DOCUMENT_GETELEMENTSBYTAGNAMENS,
  TCLDOM_DOCUMENT_GETELEMENTSBYID,
  TCLDOM_DOCUMENT_CREATEEVENT,
  TCLDOM_DOCUMENT_GETELEMENTSBYTAGNAME,
  TCLDOM_DOCUMENT_DTD,
  TCLDOM_DOCUMENT_SCHEMA
};
enum TclDOM_DocumentCommandOptions {
  TCLDOM_DOCUMENT_DOCTYPE,
  TCLDOM_DOCUMENT_IMPLEMENTATION,
  TCLDOM_DOCUMENT_DOCELEMENT
};
enum TclDOM_DocumentDTDSubmethods {
  TCLDOM_DOCUMENT_DTD_VALIDATE
};
enum TclDOM_DocumentSchemaSubmethods {
  TCLDOM_DOCUMENT_SCHEMA_COMPILE,
  TCLDOM_DOCUMENT_SCHEMA_VALIDATE
};
enum TclDOM_DocumentRelaxNGSubmethods {
  TCLDOM_DOCUMENT_RELAXNG_COMPILE,
  TCLDOM_DOCUMENT_RELAXNG_VALIDATE
};
enum TclDOM_NodeCommandMethods {
  TCLDOM_NODE_CGET,
  TCLDOM_NODE_CONFIGURE,
  TCLDOM_NODE_INSERTBEFORE,
  TCLDOM_NODE_REPLACECHILD,
  TCLDOM_NODE_REMOVECHILD,
  TCLDOM_NODE_APPENDCHILD,
  TCLDOM_NODE_HASCHILDNODES,
  TCLDOM_NODE_CLONENODE,
  TCLDOM_NODE_CHILDREN,
  TCLDOM_NODE_PARENT,
  TCLDOM_NODE_PATH,
  TCLDOM_NODE_CREATENODE,
  TCLDOM_NODE_SELECTNODE,
  TCLDOM_NODE_STRINGVALUE,
  TCLDOM_NODE_ADDEVENTLISTENER,
  TCLDOM_NODE_REMOVEEVENTLISTENER,
  TCLDOM_NODE_DISPATCHEVENT,
  TCLDOM_NODE_ISSAMENODE
};
enum TclDOM_NodeCommandOptions {
  TCLDOM_NODE_NODETYPE,
  TCLDOM_NODE_PARENTNODE,
  TCLDOM_NODE_CHILDNODES,
  TCLDOM_NODE_FIRSTCHILD,
  TCLDOM_NODE_LASTCHILD,
  TCLDOM_NODE_PREVIOUSSIBLING,
  TCLDOM_NODE_NEXTSIBLING,
  TCLDOM_NODE_ATTRIBUTES,
  TCLDOM_NODE_NAMESPACEURI,
  TCLDOM_NODE_PREFIX,
  TCLDOM_NODE_LOCALNAME,
  TCLDOM_NODE_NODEVALUE,
  TCLDOM_NODE_CDATASECTION,
  TCLDOM_NODE_NODENAME,
  TCLDOM_NODE_OWNERDOCUMENT
};
enum TclDOM_NodeCommandAddEventListenerOptions {
  TCLDOM_NODE_ADDEVENTLISTENER_USECAPTURE
};
enum TclDOM_ElementCommandMethods {
  TCLDOM_ELEMENT_CGET,
  TCLDOM_ELEMENT_CONFIGURE,
  TCLDOM_ELEMENT_GETATTRIBUTE,
  TCLDOM_ELEMENT_SETATTRIBUTE,
  TCLDOM_ELEMENT_REMOVEATTRIBUTE,
  TCLDOM_ELEMENT_GETATTRIBUTENS,
  TCLDOM_ELEMENT_SETATTRIBUTENS,
  TCLDOM_ELEMENT_REMOVEATTRIBUTENS,
  TCLDOM_ELEMENT_GETATTRIBUTENODE,
  TCLDOM_ELEMENT_SETATTRIBUTENODE,
  TCLDOM_ELEMENT_REMOVEATTRIBUTENODE,
  TCLDOM_ELEMENT_GETATTRIBUTENODENS,
  TCLDOM_ELEMENT_SETATTRIBUTENODENS,
  TCLDOM_ELEMENT_REMOVEATTRIBUTENODENS,
  TCLDOM_ELEMENT_GETELEMENTSBYTAGNAME,
  TCLDOM_ELEMENT_NORMALIZE
};
enum TclDOM_ElementCommandOptions {
  TCLDOM_ELEMENT_TAGNAME,
  TCLDOM_ELEMENT_EMPTY
};
enum TclDOM_EventCommandMethods {
  TCLDOM_EVENT_CGET,
  TCLDOM_EVENT_CONFIGURE,
  TCLDOM_EVENT_STOPPROPAGATION,
  TCLDOM_EVENT_PREVENTDEFAULT,
  TCLDOM_EVENT_INITEVENT,
  TCLDOM_EVENT_INITUIEVENT,
  TCLDOM_EVENT_INITMOUSEEVENT,
  TCLDOM_EVENT_INITMUTATIONEVENT,
  TCLDOM_EVENT_POSTUIEVENT,
  TCLDOM_EVENT_POSTMOUSEEVENT,
  TCLDOM_EVENT_POSTMUTATIONEVENT
};
enum TclDOM_EventCommandOptions {
  TCLDOM_EVENT_ALTKEY,
  TCLDOM_EVENT_ATTRNAME,
  TCLDOM_EVENT_ATTRCHANGE,
  TCLDOM_EVENT_BUBBLES,
  TCLDOM_EVENT_BUTTON,
  TCLDOM_EVENT_CANCELABLE,
  TCLDOM_EVENT_CLIENTX,
  TCLDOM_EVENT_CLIENTY,
  TCLDOM_EVENT_CTRLKEY,
  TCLDOM_EVENT_CURRENTNODE,
  TCLDOM_EVENT_DETAIL,
  TCLDOM_EVENT_EVENTPHASE,
  TCLDOM_EVENT_METAKEY,
  TCLDOM_EVENT_NEWVALUE,
  TCLDOM_EVENT_PREVVALUE,
  TCLDOM_EVENT_RELATEDNODE,
  TCLDOM_EVENT_SCREENX,
  TCLDOM_EVENT_SCREENY,
  TCLDOM_EVENT_SHIFTKEY,
  TCLDOM_EVENT_TARGET,
  TCLDOM_EVENT_TIMESTAMP,
  TCLDOM_EVENT_TYPE,
  TCLDOM_EVENT_VIEW
};
  /*
   * NB. TCLDOM_EVENT_USERDEFINED does not have an entry in the string table.
   */
enum TclDOM_EventTypes {
  TCLDOM_EVENT_DOMFOCUSIN,
  TCLDOM_EVENT_DOMFOCUSOUT,
  TCLDOM_EVENT_DOMACTIVATE,
  TCLDOM_EVENT_CLICK,
  TCLDOM_EVENT_MOUSEDOWN,
  TCLDOM_EVENT_MOUSEUP,
  TCLDOM_EVENT_MOUSEOVER,
  TCLDOM_EVENT_MOUSEMOVE,
  TCLDOM_EVENT_MOUSEOUT,
  TCLDOM_EVENT_DOMSUBTREEMODIFIED,
  TCLDOM_EVENT_DOMNODEINSERTED,
  TCLDOM_EVENT_DOMNODEREMOVED,
  TCLDOM_EVENT_DOMNODEINSERTEDINTODOCUMENT,
  TCLDOM_EVENT_DOMNODEREMOVEDFROMDOCUMENT,
  TCLDOM_EVENT_DOMATTRMODIFIED,
  TCLDOM_EVENT_DOMCHARACTERDATAMODIFIED,
  TCLDOM_EVENT_USERDEFINED
};
enum TclDOM_ParseCommandOptions {
  TCLDOM_PARSE_BASEURI,
  TCLDOM_PARSE_EXTERNALENTITYCOMMAND
};
enum TclDOM_SerializeCommandOptions {
  TCLDOM_SERIALIZE_INDENT,
  TCLDOM_SERIALIZE_METHOD,
  TCLDOM_SERIALIZE_ENCODING,
  TCLDOM_SERIALIZE_OMIT_XML_DECLARATION
};
enum TclDOM_SerializeMethods {
  TCLDOM_SERIALIZE_METHOD_XML,
  TCLDOM_SERIALIZE_METHOD_HTML,
  TCLDOM_SERIALIZE_METHOD_TEXT
};
enum TclDOM_SelectNodeOptions {
  TCLDOM_SELECTNODE_OPTION_NAMESPACES
};

/*
 * DOM Level 2 Event support
 */

#define TCLDOM_NUM_EVENT_TYPES 17

/*
 * The following function is required to be defined in all stubs aware
 * extensions of TclDOM.  The function is actually implemented in the stub
 * library, not the main Tcldom library, although there is a trivial
 * implementation in the main library in case an extension is statically
 * linked into an application.
 */

#ifndef USE_TCLDOM_STUBS

#undef TCL_STORAGE_CLASS
#define TCL_STORAGE_CLASS DLLIMPORT

#endif

#ifdef __cplusplus
}
#endif

#endif /* __TCLDOM_H__ */
