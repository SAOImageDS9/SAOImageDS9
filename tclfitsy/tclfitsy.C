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
#include "allocgz.h"
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
    else if (!strncmp(argv[1], "rows", 4))
      return fitsy->rows(argc, argv);
    else if (!strncmp(argv[1], "colnum", 6))
      return fitsy->colnum(argc, argv);
    else if (!strncmp(argv[1], "keyword", 7))
      return fitsy->keyword(argc, argv);
    else if (!strncmp(argv[1], "minmax", 6))
      return fitsy->minmax(argc, argv);
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
    Tcl_AppendResult(interp, "usage: fitsy ?dir? ?header? ?istable? ?rows? ?colnum? ?keyword? ?minmax? ?table? ?histogram? ?plot?", NULL);
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
  if (argc!=4) { 
    Tcl_AppendResult(interp_, "usage: fitsy dir ?filename? ?load?", NULL);
    return TCL_ERROR;
  }
  
  for (int ii=2; ii<4; ii++)
    if (!(argv[ii] && *argv[ii]))
      return TCL_ERROR;

  FitsFile* fits =NULL;
  if (!strncmp(argv[3],"mmapincr",8))
    fits = new FitsFitsMMapIncr(argv[2]);
  else
    fits = new FitsFitsAllocGZ(argv[2],FitsFile::FLUSH);
  
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

    FitsFile* next =NULL;
    if (!strncmp(argv[3],"mmapincr",8))
      next = new FitsMosaicNextMMapIncr(fits);
    else
      next = new FitsMosaicNextAllocGZ(fits,FitsFile::FLUSH);
    
    delete fits;
    fits = next;
  }

  return TCL_OK;
}

int TclFITSY::header(int argc, const char* argv[])
{
  if (argc!=5) {
    Tcl_AppendResult(interp_, "usage: fitsy header ?filename? ?load? ?ext?", NULL);
    return TCL_ERROR;
  }
  
  FitsFile* fits = findFits(argv);
  if (!fits)
    return TCL_ERROR;

  FitsHead* hd = fits->head();
  if (!hd)
    return TCL_ERROR;

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
  if (argc!=5) {
    Tcl_AppendResult(interp_, "usage: fitsy isimage ?filename? ?load? ?ext?", NULL);
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
  if (argc!=5) {
    Tcl_AppendResult(interp_, "usage: fitsy istable ?filename? ?load? ?ext?", NULL);
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

int TclFITSY::rows(int argc, const char* argv[])
{
  if (argc!=5) {
    Tcl_AppendResult(interp_, "usage: fitsy rows ?filename? ?load? ?ext?", NULL);
    return TCL_ERROR;
  }

  FitsFile* fits = findFits(argv);
  if (!fits)
    return TCL_ERROR;

  // sanity check
  if (!fits->isTable())
    return TCL_ERROR;

  FitsHead* head = fits->head();
  if (!head)
    return TCL_ERROR;
  FitsTableHDU* hdu = (FitsTableHDU*)head->hdu();
  if (!hdu)
    return TCL_ERROR;

  ostringstream str;
  str << hdu->rows() << ends;
  Tcl_AppendResult(interp_, str.str().c_str(), NULL);

  return TCL_OK;
}

int TclFITSY::colnum(int argc, const char* argv[])
{
  if (argc!=6) {
    Tcl_AppendResult(interp_, "usage: fitsy colnum ?filename? ?load? ?ext? ?column name?", NULL);
    return TCL_ERROR;
  }

  for (int ii=5; ii<6; ii++)
    if (!(argv[ii] && *argv[ii]))
      return TCL_ERROR;

  FitsFile* fits = findFits(argv);
  if (!fits)
    return TCL_ERROR;

  // sanity check
  if (!fits->isTable())
    Tcl_AppendResult(interp_, "", NULL);
  
  FitsHead* head = fits->head();
  if (!head)
    return TCL_ERROR;
  FitsTableHDU* hdu = (FitsTableHDU*)head->hdu();
  if (!hdu)
    return TCL_ERROR;
  FitsColumn* col= hdu->find(argv[5]);
  if (!col)
    return TCL_ERROR;

  ostringstream str;
  str << col->index() << ends;
  Tcl_AppendResult(interp_, str.str().c_str(), NULL);
  return TCL_OK;
}

int TclFITSY::keyword(int argc, const char* argv[])
{
  if (argc!=6) {
    Tcl_AppendResult(interp_, "usage: fitsy keyword ?filename? ?load? ?ext? ?keyword?", NULL);
    return TCL_ERROR;
  }

  for (int ii=5; ii<6; ii++)
    if (!(argv[ii] && *argv[ii]))
      return TCL_ERROR;

  FitsFile* fits = findFits(argv);
  if (!fits)
    return TCL_ERROR;

  Tcl_AppendResult(interp_, fits->getString(argv[5]), NULL);

  return TCL_OK;
}

int TclFITSY::minmax(int argc, const char* argv[])
{
  if (argc!=7) {
    Tcl_AppendResult(interp_, "usage: fitsy minmax ?filename? ?load? ?ext? ?col? ?varname?", NULL);
    return TCL_ERROR;
  }
  
  for (int ii=5; ii<7; ii++)
    if (!(argv[ii] && *argv[ii]))
      return TCL_ERROR;

  FitsFile* fits = findFits(argv);
  if (!fits)
    return TCL_ERROR;

  if (!fits->isValid())
    return TCL_ERROR;
      
  if (!fits->isTable()) 
    return TCL_ERROR;

  FitsTableHDU* hdu = (FitsTableHDU*)fits->head()->hdu();
  FitsColumn* col = hdu->find(argv[5]);

  if (!col)
    return TCL_ERROR;

  // find min/max
  Vector maxmin= fits->getColMinMax(argv[5]);
  double min =maxmin[0];
  double max =maxmin[1];
  if (col->isInt()) {
    min -= .5;
    max += .5;
  }

  {
    ostringstream str;
    str << min << ends;
    Tcl_SetVar2(interp_, argv[6], "min", str.str().c_str(), TCL_GLOBAL_ONLY);
  }
  {
    ostringstream str;
    str << max << ends;
    Tcl_SetVar2(interp_, argv[6], "max", str.str().c_str(), TCL_GLOBAL_ONLY);
  }

  return TCL_OK;
}

int TclFITSY::table(int argc, const char* argv[])
{
  if (argc!=8) {
    Tcl_AppendResult(interp_, "usage: fitsy table ?filename? ?load? ?ext? ?varname? ?start? ?max?", NULL);
    return TCL_ERROR;
  }
  
  for (int ii=5; ii<8; ii++)
    if (!(argv[ii] && *argv[ii]))
      return TCL_ERROR;

  int start =0;
  {
    string x(argv[6]);
    istringstream sstr(x);
    sstr >> start;
  }
  if (start<0)
    return TCL_ERROR;
  
  int max =0;
  {
    string x(argv[7]);
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
  if (!head) 
    return TCL_ERROR;

  // cols
  FitsTableHDU* hdu = (FitsTableHDU*)head->hdu();
  if (!hdu) 
    return TCL_ERROR;

  char* ptr = (char*)fits->data();
  int rows = hdu->rows();
  int cols = hdu->cols();
  int width  = hdu->width();
      
  ostringstream headstr;
  headstr << "Row" << ' ';
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
  Tcl_SetVar2(interp_, argv[5], "Header" , headstr.str().c_str(),
	      TCL_GLOBAL_ONLY);
  
  int end = (max<rows-start) ? max : rows-start;
  ostringstream rowstr;
  rowstr << end << ends;
  Tcl_SetVar2(interp_, argv[5], "Nrows", rowstr.str().c_str(),
	      TCL_GLOBAL_ONLY);
  
  // data
  ptr += start*width;
  for (int ii=0; ii<end; ii++, ptr+=width) {
    int ccnt = 1;

    ostringstream index;
    index << ii+1 << ',' << ccnt << ends;
    ostringstream value;
    value << ii+1+start << ends;
    Tcl_SetVar2(interp_, argv[5], index.str().c_str(),
		value.str().c_str(), TCL_GLOBAL_ONLY);

    for (int jj=0; jj<cols; jj++) {
      FitsColumn* col = hdu->find(jj);
      ccnt++;

      ostringstream index;
      index << ii+1 << ',' << ccnt << ends;
      ostringstream value;
      value << col->str(ptr) << ends;
      Tcl_SetVar2(interp_, argv[5], index.str().c_str(),
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
	    Tcl_SetVar2(interp_, argv[5], index.str().c_str(),
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
  if (argc!=13) {
    Tcl_AppendResult(interp_, "usage: fitsy histogram ?filename? ?load? ?ext? ?col? ?xname? ?yname? ?num? ?min? ?max? ?useMinMax? ?varname?", NULL);
    return TCL_ERROR;
  }
  
  for (int ii=5; ii<13; ii++)
    if (!(argv[ii] && *argv[ii]))
      return TCL_ERROR;

  int num =0;
  {
    string x(argv[8]);
    istringstream sstr(x);
    sstr >> num;
  }
  if (num<1)
    return TCL_ERROR;

  double min =0;
  {
    string x(argv[9]);
    istringstream sstr(x);
    sstr >> min;
  }

  double max =0;
  {
    string x(argv[10]);
    istringstream sstr(x);
    sstr >> max;
  }

  int useminmax =1;
  {
    string x(argv[11]);
    istringstream sstr(x);
    sstr >> useminmax;
  }

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
  FitsColumn* col = hdu->find(argv[5]);

  if (!col)
    return TCL_ERROR;

  double* x = (double*)malloc(num*sizeof(double));
  double* y = (double*)malloc(num*sizeof(double));
  memset(x,0,num*sizeof(double));
  memset(y,0,num*sizeof(double));

  // fill Axes
  char* ptr = (char*)fits->data();

  if (!useminmax) {
  // find min/max
    Vector minmax= fits->getColMinMax(argv[5]);
    min =minmax[0];
    max =minmax[1];
    if (col->isInt()) {
      min -= .5;
      max += .5;
    }
  }

  if ((max-min) <= 0)
    return TCL_ERROR;

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
    Tcl_SetVar2(interp_, argv[12], "bar,width", str.str().c_str(), TCL_GLOBAL_ONLY);
  }

  // load into BLT vectors
  Blt_Vector* xx;
  Blt_GetVector(interp_, argv[6], &xx);
  Blt_ResetVector(xx, x, num, num*sizeof(double), TCL_DYNAMIC);

  Blt_Vector* yy;
  Blt_GetVector(interp_, argv[7], &yy);
  Blt_ResetVector(yy, y, num, num*sizeof(double), TCL_DYNAMIC);

  return TCL_OK;
}

int TclFITSY::plot(int argc, const char* argv[])
{
  if (argc<10) {
    Tcl_AppendResult(interp_, "usage: fitsy plot ?filename? ?load? ?ext? ?dim? ?xcol? ?xname? ?ycol? ?yname? [?xerrcol? ?xerrname?] [?yerrcol? ?yerrname?]", NULL);
    return TCL_ERROR;
  }
  
  for (int ii=5; ii<10; ii++)
    if (!(argv[ii] && *argv[ii]))
      return TCL_ERROR;

  Dimension dim = XY;
  if (!strncmp(argv[5],"xy",2))
    dim = XY;
  else if (!strncmp(argv[5],"xyxe",4)) {
    dim = XYXE;
    // xerrcol
    if (!(argv[10] && *argv[10]))
      return TCL_ERROR;
    // xerrvarname
    if (!(argv[11] && *argv[11]))
      return TCL_ERROR;
  }
  else if (!strncmp(argv[5],"xyye",4)) {
    dim = XYYE;
    // yerrcol
    if (!(argv[10] && *argv[10]))
      return TCL_ERROR;
    // yerrvarname
    if (!(argv[11] && *argv[11]))
      return TCL_ERROR;
  }
  else if (!strncmp(argv[5],"xyxeye",6)) {
    dim = XYXEYE;
    // xerrcol
    if (!(argv[10] && *argv[10]))
      return TCL_ERROR;
    // xerrvarname
    if (!(argv[11] && *argv[11]))
      return TCL_ERROR;
    // yerrcol
    if (!(argv[12] && *argv[12]))
      return TCL_ERROR;
    // yerrvarname
    if (!(argv[13] && *argv[13]))
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

  FitsColumn* xcol = (FitsBinColumnB*)hdu->find(argv[6]);
  FitsColumn* ycol = (FitsBinColumnB*) hdu->find(argv[8]);
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
    xecol= (FitsBinColumnB*)hdu->find(argv[10]);
    if (!xecol)
      return TCL_ERROR;
    xe = new double[rows];
    break;
  case XYYE:
    yecol= (FitsBinColumnB*)hdu->find(argv[10]);
    if (!yecol)
      return TCL_ERROR;
    ye = new double[rows];
    break;
  case XYXEYE:
    xecol= (FitsBinColumnB*)hdu->find(argv[10]);
    yecol= (FitsBinColumnB*)hdu->find(argv[12]);
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

  Blt_GetVector(interp_, argv[7], &xx);
  Blt_ResetVector(xx, x, rows, rows*sizeof(double), TCL_DYNAMIC);

  Blt_GetVector(interp_, argv[9], &yy);
  Blt_ResetVector(yy, y, rows, rows*sizeof(double), TCL_DYNAMIC);

  switch (dim) {
  case XY:
    break;
  case XYXE:
    Blt_GetVector(interp_, argv[11], &xxe);
    Blt_ResetVector(xxe, xe, rows, rows*sizeof(double), TCL_DYNAMIC);
    break;
  case XYYE:
      Blt_GetVector(interp_, argv[11], &yye);
    Blt_ResetVector(yye, ye, rows, rows*sizeof(double), TCL_DYNAMIC);
    break;
  case XYXEYE:
    Blt_GetVector(interp_, argv[11], &xxe);
    Blt_ResetVector(xxe, xe, rows, rows*sizeof(double), TCL_DYNAMIC);

    Blt_GetVector(interp_, argv[13], &yye);
    Blt_ResetVector(yye, ye, rows, rows*sizeof(double), TCL_DYNAMIC);
    break;
  }

  return TCL_OK;
}

// Support

FitsFile* TclFITSY::findFits(const char** argv)
{
  for (int ii=2; ii<5; ii++)
    if (!(argv[ii] && *argv[ii]))
      return NULL;

  int ext =0;
  string x(argv[4]);
  istringstream sstr(x);
  sstr >> ext;

  FitsFile* fits =NULL;
  if (ext<0) {
    if (!strncmp(argv[3],"mmapincr",8))
      fits = new FitsFitsMMapIncr(argv[2], FitsFile::RELAXTABLE);
    else
      fits = new FitsFitsAllocGZ(argv[2], FitsFile::RELAXTABLE,FitsFile::FLUSH);

    if (!fits->isValid()) {
      delete fits;
      return NULL;
    }
  }
  else {
    if (!strncmp(argv[3],"mmapincr",8))
      fits = new FitsFitsMMapIncr(argv[2]);
    else
      fits = new FitsFitsAllocGZ(argv[2],FitsFile::FLUSH);

    if (!fits->isValid()) {
      delete fits;
      return NULL;
    }

    FitsFile* next =NULL;
    for (int ii=0; ii<ext; ii++) {
      if (!strncmp(argv[3],"mmapincr",8))
	next = new FitsMosaicNextMMapIncr(fits);
      else
	next = new FitsMosaicNextAllocGZ(fits,FitsFile::FLUSH);

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
