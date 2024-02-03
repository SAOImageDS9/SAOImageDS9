// Copyright (C) 1999-2024
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <sstream>
using namespace std;

#include <tcl.h>

#include "tclxmlrpc.h"

// Parser Stuff
#undef yyFlexLexer
#define yyFlexLexer xmlrpcFlexLexer
#include <FlexLexer.h>

extern char* xmlrpcbuf;

void* xmlrpclval;
extern int xmlrpcparse(TclXMLRPC*, xmlrpcFlexLexer*);

int xmlrpclex(void* vval, xmlrpcFlexLexer* ll)
{
  xmlrpclval = vval;
  return ll ? ll->yylex() : 0;
}

void xmlrpcerror(TclXMLRPC* xmlrpc, xmlrpcFlexLexer* ll, const char* m)
{
  xmlrpc->error(m);
  const char* cmd = ll ? ll->YYText() : (const char*)NULL;
  if (cmd && cmd[0] != '\n') {
    xmlrpc->error(": ");
    xmlrpc->error(cmd);
  }
}

extern "C" {
  int Tclxmlrpc_Init(Tcl_Interp* interp);
  int TclxmlrpcCmd(ClientData data, Tcl_Interp *interp, int argc, 
		  const char* argv[]);
}

TclXMLRPC* xmlrpc=NULL;

int Tclxmlrpc_Init(Tcl_Interp* interp) {
  if (Tcl_InitStubs(interp, TCL_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  Tcl_CreateCommand(interp, "xmlrpc", TclxmlrpcCmd,
		    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION) != TCL_OK)
    return TCL_ERROR;

  xmlrpc = new TclXMLRPC(interp);

  if (xmlrpc)
    return TCL_OK;
  else
    return TCL_ERROR;
}

int TclxmlrpcCmd(ClientData data, Tcl_Interp *interp,
		int argc, const char* argv[])
{
  if (argc>=2) {
    if (!strncmp(argv[1], "parse", 5))
      return xmlrpc->parseCmd(argc, argv);
    else {
      Tcl_AppendResult(interp, "xmlrpc: unknown command: ", argv[1], NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: xmlrpc ?parse?", NULL);
    return TCL_ERROR;
  }
}

// Public Member Functions

TclXMLRPC::TclXMLRPC(Tcl_Interp* interp)
{
  interp_=interp;
}

TclXMLRPC::~TclXMLRPC()
{ 
}

int TclXMLRPC::parseCmd(int argc, const char* argv[])
{
  if (argc!=4) { 
    Tcl_AppendResult(interp_, "usage: xmlrpc parse ?in? ?out?", NULL);
    return TCL_ERROR;
  }
  
  if (!(argv[2] && *argv[2]))
    return TCL_ERROR;

  if (!(argv[3] && *argv[3]))
    return TCL_ERROR;

  char* xml = (char*)Tcl_GetVar(interp_, argv[2], TCL_LEAVE_ERR_MSG);

  string x(xml);
  istringstream str(x);

  Tcl_SetVar(interp_, argv[3], "", NULL);

  if (!parse(str)) {
    if (xmlrpcbuf) {
      Tcl_SetVar(interp_, argv[3], xmlrpcbuf, NULL);
      free(xmlrpcbuf);
      return TCL_OK;
    }
  }

  return TCL_ERROR;
}

int TclXMLRPC::parse(istringstream& istr)
{
  int result = TCL_OK;
  xmlrpcFlexLexer* ll = new xmlrpcFlexLexer(&istr);
  xmlrpcparse(this, ll);
  delete ll;

  return result;
}

void TclXMLRPC::error(const char* m)
{
  Tcl_AppendResult(interp_, m, NULL);
  result = TCL_ERROR;
}

