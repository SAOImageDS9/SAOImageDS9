// Copyright (C) 1999-2020
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <stdlib.h>

#include <iostream>
#include <sstream>
using namespace std;

#include <tcl.h>

#include "tclfitsy.h"
#include "file.h"
#include "mmapincr.h"
#include "util.h"

extern "C" {
  int Tclfitsy_Init(Tcl_Interp* interp);
  int TclfitsyCmd(ClientData data, Tcl_Interp *interp, int argc, 
		  const char* argv[]);
}

TclFITSY* fitsy=NULL;

int Tclfitsy_Init(Tcl_Interp* interp) {

  if (Tcl_InitStubs(interp, TCL_PATCH_LEVEL, 0) == NULL)
    return TCL_ERROR;

  Tcl_CreateCommand(interp, "fitsy", TclfitsyCmd,
		    (ClientData)NULL, (Tcl_CmdDeleteProc *)NULL);

  if (Tcl_PkgProvide(interp, PACKAGE_NAME, PACKAGE_VERSION) != TCL_OK)
    return TCL_ERROR;

  fitsy = new TclFITSY(interp);

  if (fitsy)
    return TCL_OK;
  else
    return TCL_ERROR;
}

int TclfitsyCmd(ClientData data, Tcl_Interp *interp,
		int argc, const char* argv[])
{
  if (argc>=2) {
    if (!strncmp(argv[1], "table", 5))
      return fitsy->table(argc, argv);
    else {
      Tcl_AppendResult(interp, "fitsy: unknown command: ", argv[1], NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: fitsy ?table?", NULL);
    return TCL_ERROR;
  }
}

TclFITSY::TclFITSY(Tcl_Interp* interp)
{
  interp_ = interp;
}

TclFITSY::~TclFITSY()
{
}

int TclFITSY::table(int argc, const char* argv[])
{
  if (argc==4) {
    if (argv[2] && *argv[2]) {
      FitsFile* fits = new FitsFitsMMapIncr(argv[2], FitsFile::RELAXTABLE);

      // valid?
      if (!fits->isValid())
	return TCL_ERROR;

      // sanity check
      if (!fits->isBinTable())
	return TCL_ERROR;

      FitsHead* head = fits->head();
      FitsBinTableHDU* hdu = (FitsBinTableHDU*)(head->hdu());

      // header
      char* cc=head->first();
      int cnt=0;
      while (cc) {
	cnt++;
	ostringstream idstr;
	idstr << "H_" << cnt << ends;
	char buf[81];
	strncpy(buf,cc,80);
	buf[80]='\0';
	Tcl_SetVar2(interp_, argv[3], idstr.str().c_str(), buf,
		    TCL_GLOBAL_ONLY);
	cc = head->next();
      }
      ostringstream ncardstr;
      ncardstr << head->ncard() << ends;
      Tcl_SetVar2(interp_, argv[3], "HLines", ncardstr.str().c_str(),
		  TCL_GLOBAL_ONLY);

      // cols
      char* ptr = (char*)fits->data();
      int rows = hdu->rows();
      int cols = hdu->cols();
      int width  = hdu->width();
      
      ostringstream headstr;
      for (int jj=0; jj<cols; jj++) {
	FitsColumn* cc=hdu->find(jj);
	headstr << trim(cc->ttype()) << ' ';

	if (cc->repeat()>1) {
	  switch (cc->type()) {
	  case 'A':
	    break;
	  default:
	    for (int kk=1; kk<cc->repeat(); kk++) {
	      char* tt = trim(cc->ttype());
	      headstr << tt << kk+1 << ' ';
	      delete [] tt;
	    }
	    break;
	  }
	}
      }
      headstr << ends;
      Tcl_SetVar2(interp_, argv[3], "Header" , headstr.str().c_str(),
		  TCL_GLOBAL_ONLY);

      ostringstream rowstr;
      rowstr << rows << ends;
      Tcl_SetVar2(interp_, argv[3], "Nrows", rowstr.str().c_str(),
		  TCL_GLOBAL_ONLY);

      // data
      for (int ii=0; ii<rows; ii++, ptr+=width) {
	int ccnt = 0;
	for (int jj=0; jj<cols; jj++) {
	  FitsColumn* cc=hdu->find(jj);
	  ccnt++;

	  ostringstream index;
	  index << ii+1 << ',' << ccnt << ends;
	  ostringstream value;
	  value << cc->str(ptr) << ends;
	  Tcl_SetVar2(interp_, argv[3], index.str().c_str(),
		      value.str().c_str(), TCL_GLOBAL_ONLY);

	  if (cc->repeat()>1) {
	    switch (cc->type()) {
	    case 'A':
	      break;
	    default:
	      for (int kk=1; kk<cc->repeat(); kk++) {
		ccnt++;
		ostringstream index;
		index << ii+1 << ',' << ccnt << ends;
		ostringstream value;
		value << cc->str(ptr,kk) << ends;
		Tcl_SetVar2(interp_, argv[3], index.str().c_str(),
			    value.str().c_str(), TCL_GLOBAL_ONLY);
	      }
	      break;
	    }
	  }
	}
      }
      return TCL_OK;
    }
  }
  
  Tcl_AppendResult(interp_, "usage: fitsy table ?filename? ?varname?", NULL);
  return TCL_ERROR;
}
