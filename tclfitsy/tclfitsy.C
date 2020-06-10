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
#include "head.h"
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
    else if (!strncmp(argv[1], "dir", 3))
      return fitsy->dir(argc, argv);
    else if (!strncmp(argv[1], "header", 6))
      return fitsy->header(argc, argv);
    else {
      Tcl_AppendResult(interp, "fitsy: unknown command: ", argv[1], NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: fitsy ?table? ?dir? ?header?", NULL);
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
  if (argc!=4) {
    Tcl_AppendResult(interp_, "usage: fitsy table ?filename? ?varname?", NULL);
    return TCL_ERROR;
  }
  
  if (!(argv[2] && *argv[2]))
    return TCL_ERROR;

  if (!(argv[3] && *argv[3]))
    return TCL_ERROR;

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

int TclFITSY::dir(int argc, const char* argv[])
{
  if (argc!=3) { 
    Tcl_AppendResult(interp_, "usage: fitsy dir ?filename?", NULL);
    return TCL_ERROR;
  }
  
  if (!(argv[2] && *argv[2]))
    return TCL_ERROR;

  FitsFile* fits = new FitsFitsMMapIncr(argv[2]);
  int cnt =0;
  while (fits->isValid()) {
    FitsHead* head = fits->head();
    FitsHDU* hdu = fits->head()->hdu();
    
    ostringstream str;
    // Ext
    str << '{' << cnt << '}';
    str << ' ';

    // Extname
    if (head->find("SIMPLE"))
      str << "{PRIMARY}";
    else if (head->find("XTENSION")) {
      char* nn = head->getString("EXTNAME");
      if (nn)
	str << '{' << trim(nn) << '}';
      else
	str << "{XTENSION}";
    }
    str << ' ';

    // Type
    if (fits->isImage()) {
      str << " {image} {";
      int naxes = hdu->naxes();
      for (int ii=0; ii<naxes; ii++) {
	str << hdu->naxis(ii);
	if (ii < naxes-1)
	  str << 'x';
      }
      str << '}';
    }
    else if (fits->isTable()) {
      FitsTableHDU* table = (FitsTableHDU*)hdu;
      str << " {table} {"
	  << table->cols() << " cols, "
	  << table->rows() << " rows}";
    }
    else
      str << "{image} {NULL}";
    str << ' ';

    str << ends;
    Tcl_AppendResult(interp_, str.str().c_str(), NULL);

    cnt++;
    FitsFile* next = new FitsMosaicNextMMapIncr(fits);
    delete fits;
    fits = next;
  }

  return TCL_OK;
}

int TclFITSY::header(int argc, const char* argv[])
{
  if (argc!=5) {
    Tcl_AppendResult(interp_, "usage: fitsy header ?filename? ?ext? ?varname?",
		     NULL);
    return TCL_ERROR;
  }
  
  if (!(argv[2] && *argv[2]))
    return TCL_ERROR;

  int ext =0;
  string x(argv[3]);
  istringstream sstr(x);
  sstr >> ext;
  
  if (ext<0)
    return TCL_ERROR;

  if (!(argv[4] && *argv[4]))
    return TCL_ERROR;

  FitsFile* fits = new FitsFitsMMapIncr(argv[2]);
  if (!fits->isValid())
    return TCL_ERROR;

  for (int ii=0; ii<ext; ii++) {
    FitsFile* next = new FitsMosaicNextMMapIncr(fits);
    delete fits;
    fits = next;
    if (!fits->isValid())
      return TCL_ERROR;
  }

  FitsHead* head = fits->head();

  int cnt=0;
  char buf[80];
  char* cc=head->first();
  while (cc) {
    cnt++;

    // Index
    {
      ostringstream index;
      index << cnt << ',' << 1 << ends;
      ostringstream value;
      value << cnt << ends;
      Tcl_SetVar2(interp_, argv[4], index.str().c_str(), value.str().c_str(),
		  TCL_GLOBAL_ONLY);
    }

    // Name
    {
      ostringstream index;
      index << cnt << ',' << 2 << ends;
      strncpy(buf,cc,8);
      buf[8] = '\0';
      Tcl_SetVar2(interp_, argv[4], index.str().c_str(), buf, TCL_GLOBAL_ONLY);
    }

    cc = head->next();
  }

  // Nrows
  {
    ostringstream str;
    str << cnt << ends;
    Tcl_SetVar2(interp_, argv[4], "Nrows", str.str().c_str(), TCL_GLOBAL_ONLY);
  }

  return TCL_OK;
}

