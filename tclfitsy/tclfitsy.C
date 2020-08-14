// Copyright (C) 1999-2020
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <sstream>
using namespace std;

#include <tcl.h>

#include "tclfitsy.h"
#include "head.h"
#include "mmapincr.h"
#include "util.h"
#include "vector.h"
#include "tkbltVector.h"

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
    if (!strncmp(argv[1], "dir", 3))
      return fitsy->dir(argc, argv);
    else if (!strncmp(argv[1], "header", 6))
      return fitsy->header(argc, argv);
    else if (!strncmp(argv[1], "isimage", 7))
      return fitsy->isimage(argc, argv);
    else if (!strncmp(argv[1], "istable", 7))
      return fitsy->istable(argc, argv);
    else if (!strncmp(argv[1], "table", 5))
      return fitsy->table(argc, argv);
    else if (!strncmp(argv[1], "histogram", 8))
      return fitsy->histogram(argc, argv);
    else if (!strncmp(argv[1], "plot", 4))
      return fitsy->plot(argc, argv);
    else {
      Tcl_AppendResult(interp, "fitsy: unknown command: ", argv[1], NULL);
      return TCL_ERROR;
    }
  }
  else {
    Tcl_AppendResult(interp, "usage: fitsy ?dir? ?header? ?istable? ?table? ?histogram? ?plot?",
		     NULL);
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
  if (argc!=4) {
    Tcl_AppendResult(interp_, "usage: fitsy header ?filename? ?ext?", NULL);
    return TCL_ERROR;
  }
  
  FitsFile* fits = findFits(argv);
  if (!fits)
    return TCL_ERROR;

  FitsHead* hd = fits->head();
  int size = hd->ncard() * (FTY_CARDLEN+1);
  char* lbuf = new char[size+1];

  char* lptr = lbuf;
  char* cptr = hd->cards();
  for (int i=0; i<hd->ncard(); i++,cptr+=FTY_CARDLEN) {
    memcpy(lptr, cptr, FTY_CARDLEN);
    lptr+=FTY_CARDLEN;
    *(lptr++) = '\n';
  }
  lbuf[size] = '\0';

  Tcl_AppendResult(interp_, lbuf, NULL);

  return TCL_OK;
}

int TclFITSY::isimage(int argc, const char* argv[])
{
  if (argc!=4) {
    Tcl_AppendResult(interp_, "usage: fitsy isimage ?filename? ?ext?",
		     NULL);
    return TCL_ERROR;
  }
  
  FitsFile* fits = findFits(argv);
  if (!fits)
    return TCL_ERROR;

  // sanity check
  if (fits->isImage())
    Tcl_AppendResult(interp_, "1", NULL);
  else
    Tcl_AppendResult(interp_, "0", NULL);

  return TCL_OK;
}

int TclFITSY::istable(int argc, const char* argv[])
{
  if (argc!=4) {
    Tcl_AppendResult(interp_, "usage: fitsy istable ?filename? ?ext?",
		     NULL);
    return TCL_ERROR;
  }

  FitsFile* fits = findFits(argv);
  if (!fits)
    return TCL_ERROR;

  // sanity check
  if (fits->isTable())
    Tcl_AppendResult(interp_, "1", NULL);
  else
    Tcl_AppendResult(interp_, "0", NULL);

  return TCL_OK;
}

int TclFITSY::table(int argc, const char* argv[])
{
  if (argc!=7) {
    Tcl_AppendResult(interp_, "usage: fitsy table ?filename? ?ext? ?varname? ?start? ?max?", NULL);
    return TCL_ERROR;
  }
  
  if (!(argv[4] && *argv[4]))
    return TCL_ERROR;

  int start =0;
  {
    string x(argv[5]);
    istringstream sstr(x);
    sstr >> start;
  }
  if (start<0)
    return TCL_ERROR;
  
  int max =0;
  {
    string x(argv[6]);
    istringstream sstr(x);
    sstr >> max;
  }
  if (max<=0)
    return TCL_ERROR;
  
  FitsFile* fits = findFits(argv);
  if (!fits)
    return TCL_ERROR;

  if (!fits->isTable()) 
    return TCL_ERROR;

  FitsHead* head = fits->head();
  FitsTableHDU* hdu = (FitsTableHDU*)head->hdu();

  // header
  // first time only
  if (start==0) {
    char* cc=head->first();
    int cnt=0;
    while (cc) {
      cnt++;
      ostringstream idstr;
      idstr << "H_" << cnt << ends;
      char buf[81];
      strncpy(buf,cc,80);
      buf[80]='\0';
      Tcl_SetVar2(interp_, argv[4], idstr.str().c_str(), buf,
		  TCL_GLOBAL_ONLY);
      cc = head->next();
    }
    ostringstream ncardstr;
    ncardstr << head->ncard() << ends;
    Tcl_SetVar2(interp_, argv[4], "HLines", ncardstr.str().c_str(),
		TCL_GLOBAL_ONLY);
  }

  // cols
  char* ptr = (char*)fits->data();
  int rows = hdu->rows();
  int cols = hdu->cols();
  int width  = hdu->width();
      
  // first time only
  if (start==0) {
    ostringstream headstr;
    for (int jj=0; jj<cols; jj++) {
      FitsColumn* col= hdu->find(jj);
      headstr << trim(col->ttype()) << ' ';

      if (col->repeat()>1) {
	switch (col->type()) {
	case 'A':
	case 'X':
	case 'L':
	  break;
	default:
	  for (int kk=1; kk<col->repeat(); kk++) {
	    char* tt = trim(col->ttype());
	    headstr << tt << kk+1 << ' ';
	    delete [] tt;
	  }
	  break;
	}
      }
    }
    headstr << ends;
    Tcl_SetVar2(interp_, argv[4], "Header" , headstr.str().c_str(),
		TCL_GLOBAL_ONLY);

    ostringstream rowstr;
    rowstr << rows << ends;
    Tcl_SetVar2(interp_, argv[4], "Nrows", rowstr.str().c_str(),
		TCL_GLOBAL_ONLY);
  }

  // data
  int end = (max<rows-start) ? start+max : rows;
  for (int ii=start; ii<end; ii++, ptr+=width) {
    int ccnt = 0;
    for (int jj=0; jj<cols; jj++) {
      FitsColumn* col = hdu->find(jj);
      ccnt++;

      ostringstream index;
      index << ii+1 << ',' << ccnt << ends;
      ostringstream value;
      value << col->str(ptr) << ends;
      Tcl_SetVar2(interp_, argv[4], index.str().c_str(),
		  value.str().c_str(), TCL_GLOBAL_ONLY);

      if (col->repeat()>1) {
	switch (col->type()) {
	case 'A':
	case 'X':
	case 'L':
	  break;
	default:
	  for (int kk=1; kk<col->repeat(); kk++) {
	    ccnt++;
	    ostringstream index;
	    index << ii+1 << ',' << ccnt << ends;
	    ostringstream value;
	    value << col->str(ptr,kk) << ends;
	    Tcl_SetVar2(interp_, argv[4], index.str().c_str(),
			value.str().c_str(), TCL_GLOBAL_ONLY);
	  }
	  break;
	}
      }
    }
  }
  
  {
    ostringstream str;
    str << ((end-start<0) ? 0 : end-start) << ends;
    Tcl_AppendResult(interp_, str.str().c_str(), NULL);
  }

  return TCL_OK;
}

int TclFITSY::histogram(int argc, const char* argv[])
{
  if (argc!=9) {
    Tcl_AppendResult(interp_, "usage: fitsy histogram ?filename? ?ext? ?col? ?xname? ?yname? ?num? ?varname?", NULL);
    return TCL_ERROR;
  }
  
  if (!(argv[4] && *argv[4]))
    return TCL_ERROR;

  if (!(argv[5] && *argv[5]))
    return TCL_ERROR;

  if (!(argv[6] && *argv[6]))
    return TCL_ERROR;

  int num =0;
  {
    string x(argv[7]);
    istringstream sstr(x);
    sstr >> num;
  }
  if (num<1)
    return TCL_ERROR;

  if (!(argv[8] && *argv[8]))
    return TCL_ERROR;

  FitsFile* fits = findFits(argv);
  if (!fits)
    return TCL_ERROR;

  if (!fits->isValid())
    return TCL_ERROR;
      
  if (!fits->isTable()) 
    return TCL_ERROR;

  FitsTableHDU* hdu = (FitsTableHDU*)fits->head()->hdu();
  int rows = hdu->rows();
  int width  = hdu->width();
  FitsColumn* col = hdu->find(argv[4]);

  if (!col)
    return TCL_ERROR;

  // find min/max
  Vector maxmin= fits->getColMinMax(argv[4]);
  double min =maxmin[0];
  double max =maxmin[1];
  
  double* x = (double*)malloc(num*sizeof(double));
  double* y = (double*)malloc(num*sizeof(double));
  memset(x,0,num*sizeof(double));
  memset(y,0,num*sizeof(double));

  // fill Axes
  char* ptr = (char*)fits->data();

  if (col->isInt()) {
    min -= .5;
    max += .5;
  }
  double diff = max-min;
  double barwidth = diff/num;

  for (int ii=0; ii<num; ii++)
    x[ii] = double(ii)*barwidth + barwidth/2. + min;
  //  x[ii] = double(ii)/num*diff + min;

  for (int ii=0; ii<rows; ii++, ptr+=width) {
    double vv = col->value(ptr);
    double jj = (vv-min)/barwidth;
    //    double jj = (vv-min)/diff*num;
    //    cerr << vv << "->" << jj << endl;
    int kk = jj;
    if (kk>=0 && kk<num)
      y[kk]++;
  }
  
  //  for (int ii=0; ii<num; ii++)
  //    cerr << "ii=" << ii << ' ' << x[ii] << ',' << y[ii] << endl;

  // calc width
  {
    ostringstream str;
    str << barwidth << ends;
    Tcl_SetVar2(interp_, argv[8], "bar,width", str.str().c_str(), TCL_GLOBAL_ONLY);
  }

  // load into BLT vectors
  Blt_Vector* xx;
  Blt_GetVector(interp_, argv[5], &xx);
  Blt_ResetVector(xx, x, num, num*sizeof(double), TCL_DYNAMIC);

  Blt_Vector* yy;
  Blt_GetVector(interp_, argv[6], &yy);
  Blt_ResetVector(yy, y, num, num*sizeof(double), TCL_DYNAMIC);

  return TCL_OK;
}

int TclFITSY::plot(int argc, const char* argv[])
{
  if (argc<9) {
    Tcl_AppendResult(interp_, "usage: fitsy plot ?filename? ?ext? ?dim? ?xcol? ?xname? ?ycol? ?yname? [?xerrcol? ?xerrname?] [?yerrcol? ?yerrname?]", NULL);
    return TCL_ERROR;
  }
  
  // dim
  if (!(argv[4] && *argv[4]))
    return TCL_ERROR;

  // xcolname
  if (!(argv[5] && *argv[5]))
    return TCL_ERROR;

  // xvarname
  if (!(argv[6] && *argv[6]))
    return TCL_ERROR;

  // ycolname
  if (!(argv[7] && *argv[7]))
    return TCL_ERROR;

  // yvarname
  if (!(argv[8] && *argv[8]))
    return TCL_ERROR;

  Dimension dim = XY;
  if (!strncmp(argv[4],"xy",2))
    dim = XY;
  else if (!strncmp(argv[4],"xyxe",4)) {
    dim = XYXE;
    // xerrcol
    if (!(argv[9] && *argv[9]))
      return TCL_ERROR;
    // xerrvarname
    if (!(argv[10] && *argv[10]))
      return TCL_ERROR;
  }
  else if (!strncmp(argv[4],"xyye",4)) {
    dim = XYYE;
    // yerrcol
    if (!(argv[9] && *argv[9]))
      return TCL_ERROR;
    // yerrvarname
    if (!(argv[10] && *argv[10]))
      return TCL_ERROR;
  }
  else if (!strncmp(argv[4],"xyxeye",6)) {
    dim = XYXEYE;
    // xerrcol
    if (!(argv[9] && *argv[9]))
      return TCL_ERROR;
    // xerrvarname
    if (!(argv[10] && *argv[10]))
      return TCL_ERROR;
    // yerrcol
    if (!(argv[11] && *argv[11]))
      return TCL_ERROR;
    // yerrvarname
    if (!(argv[12] && *argv[12]))
      return TCL_ERROR;
  }
  else
    return TCL_ERROR;

  FitsFile* fits = findFits(argv);
  if (!fits)
    return TCL_ERROR;

  if (!fits->isValid())
    return TCL_ERROR;
      
  if (!fits->isTable()) 
    return TCL_ERROR;

  char* ptr = (char*)fits->data();
  FitsTableHDU* hdu = (FitsTableHDU*)fits->head()->hdu();
  int rows = hdu->rows();
  int width  = hdu->width();

  FitsColumn* xcol = (FitsBinColumnB*)hdu->find(argv[5]);
  FitsColumn* ycol = (FitsBinColumnB*) hdu->find(argv[7]);
  FitsColumn* xecol =NULL;
  FitsColumn* yecol =NULL;

  double* x = new double[rows];
  double* y = new double[rows];
  double* xe =NULL;
  double* ye =NULL;

  if (!xcol)
    return TCL_ERROR;
  if (!ycol)
    return TCL_ERROR;

  switch (dim) {
  case XY:
    break;
  case XYXE:
    xecol= (FitsBinColumnB*)hdu->find(argv[9]);
    if (!xecol)
      return TCL_ERROR;
    xe = new double[rows];
    break;
  case XYYE:
    yecol= (FitsBinColumnB*)hdu->find(argv[9]);
    if (!yecol)
      return TCL_ERROR;
    ye = new double[rows];
    break;
  case XYXEYE:
    xecol= (FitsBinColumnB*)hdu->find(argv[9]);
    yecol= (FitsBinColumnB*)hdu->find(argv[11]);
    if (!xecol)
      return TCL_ERROR;
    if (!yecol)
      return TCL_ERROR;
    xe = new double[rows];
    ye = new double[rows];
    break;
  }

  for (int ii=0; ii<rows; ii++, ptr+=width) {
    x[ii] = xcol->value(ptr);
    y[ii] = ycol->value(ptr);
    switch (dim) {
    case XY:
      break;
    case XYXE:
      xe[ii] = xecol->value(ptr);
      break;
    case XYYE:
      ye[ii] = yecol->value(ptr);
      break;
    case XYXEYE:
      xe[ii] = xecol->value(ptr);
      ye[ii] = yecol->value(ptr);
      break;
    }
  }

  // load into BLT vectors
  Blt_Vector* xx =NULL;
  Blt_Vector* yy =NULL;
  Blt_Vector* xxe =NULL;
  Blt_Vector* yye =NULL;

  Blt_GetVector(interp_, argv[6], &xx);
  Blt_ResetVector(xx, x, rows, rows*sizeof(double), TCL_DYNAMIC);

  Blt_GetVector(interp_, argv[8], &yy);
  Blt_ResetVector(yy, y, rows, rows*sizeof(double), TCL_DYNAMIC);

  switch (dim) {
  case XY:
    break;
  case XYXE:
    Blt_GetVector(interp_, argv[10], &xxe);
    Blt_ResetVector(xxe, xe, rows, rows*sizeof(double), TCL_DYNAMIC);
    break;
  case XYYE:
      Blt_GetVector(interp_, argv[10], &yye);
    Blt_ResetVector(yye, ye, rows, rows*sizeof(double), TCL_DYNAMIC);
    break;
  case XYXEYE:
    Blt_GetVector(interp_, argv[10], &xxe);
    Blt_ResetVector(xxe, xe, rows, rows*sizeof(double), TCL_DYNAMIC);

    Blt_GetVector(interp_, argv[12], &yye);
    Blt_ResetVector(yye, ye, rows, rows*sizeof(double), TCL_DYNAMIC);
    break;
  }

  return TCL_OK;
}

// Support

FitsFile* TclFITSY::findFits(const char** argv)
{
  FitsFile* fits =NULL;

  if (!(argv[2] && *argv[2]))
    return NULL;

  int ext =0;
  string x(argv[3]);
  istringstream sstr(x);
  sstr >> ext;

  if (ext<0) {
    fits = new FitsFitsMMapIncr(argv[2], FitsFile::RELAXTABLE);
    if (!fits->isValid()) {
      delete fits;
      return NULL;
    }
  }
  else {
    fits = new FitsFitsMMapIncr(argv[2]);
    if (!fits->isValid()) {
      delete fits;
      return NULL;
    }

    for (int ii=0; ii<ext; ii++) {
      FitsFile* next = new FitsMosaicNextMMapIncr(fits);
      delete fits;
      fits = next;
      if (!fits->isValid()) {
	delete fits;
	return NULL;
      }
    }
  }
  
  return fits;
}
