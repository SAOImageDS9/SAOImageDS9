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
    else if (!strncmp(argv[1], "open", 4))
      return fitsy->open(argc, argv);
    else if (!strncmp(argv[1], "close", 4))
      return fitsy->close(argc, argv);

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
    Tcl_AppendResult(interp, "usage: fitsy ?dir? ?open? ?close? ?header? ?istable? ?rows? ?colnum? ?keyword? ?minmax? ?table? ?histogram? ?plot?", NULL);
    return TCL_ERROR;
  }
}

TclFITSY::TclFITSY(Tcl_Interp* interp)
{
  interp_ = interp;
  fits_ =NULL;
}

TclFITSY::~TclFITSY()
{
  if (fits_)
    delete fits_;
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

int TclFITSY::open(int argc, const char* argv[])
{
  if (argc!=5) {
    Tcl_AppendResult(interp_, "usage: fitsy open ?filename? ?load? ?ext?", NULL);
    return TCL_ERROR;
  }
  
  findFits(argv);
  if (!fits_)
    return TCL_ERROR;
  else
    return TCL_OK;
}

int TclFITSY::close(int argc, const char* argv[])
{
  if (fits_)
    delete fits_;
  fits_ =NULL;

  return TCL_OK;
}

int TclFITSY::header(int argc, const char* argv[])
{
  if (argc!=2) {
    Tcl_AppendResult(interp_, "usage: fitsy header", NULL);
    return TCL_ERROR;
  }
  
  if (!fits_)
    return TCL_ERROR;

  FitsHead* hd = fits_->head();
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
  if (argc!=2) {
    Tcl_AppendResult(interp_, "usage: fitsy isimage", NULL);
    return TCL_ERROR;
  }
  
  if (!fits_)
    return TCL_ERROR;

  // sanity check
  if (fits_->isImage())
    Tcl_AppendResult(interp_, "1", NULL);
  else
    Tcl_AppendResult(interp_, "0", NULL);

  return TCL_OK;
}

int TclFITSY::istable(int argc, const char* argv[])
{
  if (argc!=2) {
    Tcl_AppendResult(interp_, "usage: fitsy istable", NULL);
    return TCL_ERROR;
  }

  if (!fits_)
    return TCL_ERROR;

  // sanity check
  if (fits_->isTable())
    Tcl_AppendResult(interp_, "1", NULL);
  else
    Tcl_AppendResult(interp_, "0", NULL);

  return TCL_OK;
}

int TclFITSY::rows(int argc, const char* argv[])
{
  if (argc!=2) {
    Tcl_AppendResult(interp_, "usage: fitsy rows", NULL);
    return TCL_ERROR;
  }

  if (!fits_)
    return TCL_ERROR;

  // sanity check
  if (!fits_->isTable())
    return TCL_ERROR;

  FitsHead* head = fits_->head();
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
  if (argc!=3) {
    Tcl_AppendResult(interp_, "usage: fitsy colnum ?column name?", NULL);
    return TCL_ERROR;
  }

  if (!(argv[2] && *argv[2]))
    return TCL_ERROR;

  if (!fits_)
    return TCL_ERROR;

  // sanity check
  if (!fits_->isTable())
    Tcl_AppendResult(interp_, "", NULL);
  
  FitsHead* head = fits_->head();
  if (!head)
    return TCL_ERROR;
  FitsTableHDU* hdu = (FitsTableHDU*)head->hdu();
  if (!hdu)
    return TCL_ERROR;
  FitsColumn* col= hdu->find(argv[2]);
  if (!col)
    return TCL_ERROR;

  ostringstream str;
  str << col->index() << ends;
  Tcl_AppendResult(interp_, str.str().c_str(), NULL);
  return TCL_OK;
}

int TclFITSY::keyword(int argc, const char* argv[])
{
  if (argc!=3) {
    Tcl_AppendResult(interp_, "usage: fitsy keyword ?keyword?", NULL);
    return TCL_ERROR;
  }

  if (!(argv[2] && *argv[2]))
    return TCL_ERROR;

  if (!fits_)
    return TCL_ERROR;

  Tcl_AppendResult(interp_, fits_->getString(argv[2]), NULL);

  return TCL_OK;
}

int TclFITSY::minmax(int argc, const char* argv[])
{
  if (argc!=4) {
    Tcl_AppendResult(interp_, "usage: fitsy minmax ?col? ?varname?", NULL);
    return TCL_ERROR;
  }
  
  for (int ii=2; ii<4; ii++)
    if (!(argv[ii] && *argv[ii]))
      return TCL_ERROR;

  if (!fits_)
    return TCL_ERROR;

  if (!fits_->isValid())
    return TCL_ERROR;
      
  if (!fits_->isTable()) 
    return TCL_ERROR;

  FitsTableHDU* hdu = (FitsTableHDU*)fits_->head()->hdu();
  FitsColumn* col = hdu->find(argv[2]);

  if (!col)
    return TCL_ERROR;

  // find min/max
  Vector maxmin= fits_->getColMinMax(argv[2]);
  double min =maxmin[0];
  double max =maxmin[1];
  if (col->isInt()) {
    min -= .5;
    max += .5;
  }

  {
    ostringstream str;
    str << min << ends;
    Tcl_SetVar2(interp_, argv[3], "min", str.str().c_str(), TCL_GLOBAL_ONLY);
  }
  {
    ostringstream str;
    str << max << ends;
    Tcl_SetVar2(interp_, argv[3], "max", str.str().c_str(), TCL_GLOBAL_ONLY);
  }

  return TCL_OK;
}

int TclFITSY::table(int argc, const char* argv[])
{
  if (argc!=6) {
    Tcl_AppendResult(interp_, "usage: fitsy table ?varname? ?units? ?start? ?max?", NULL);
    return TCL_ERROR;
  }
  
  for (int ii=2; ii<6; ii++)
    if (!(argv[ii] && *argv[ii]))
      return TCL_ERROR;

  int doUnits = (!strncmp(argv[3],"yes",3) ||
		 !strncmp(argv[3],"1",1) ||
		 !strncmp(argv[3],"true",4)) ? 1 : 0;

  int start =0;
  {
    string x(argv[4]);
    istringstream sstr(x);
    sstr >> start;
  }
  if (start<0)
    return TCL_ERROR;
  
  int max =0;
  {
    string x(argv[5]);
    istringstream sstr(x);
    sstr >> max;
  }
  if (max<=0)
    return TCL_ERROR;
  
  if (!fits_)
    return TCL_ERROR;

  if (!fits_->isTable()) 
    return TCL_ERROR;

  FitsHead* head = fits_->head();
  if (!head) 
    return TCL_ERROR;

  // cols
  FitsTableHDU* hdu = (FitsTableHDU*)head->hdu();
  if (!hdu) 
    return TCL_ERROR;

  char* ptr = (char*)fits_->data();
  int rows = hdu->rows();
  int cols = hdu->cols();
  int width  = hdu->width();
      
  // Header
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
  Tcl_SetVar2(interp_, argv[2], "Header" , headstr.str().c_str(),
	      TCL_GLOBAL_ONLY);
  
  // secondary headers
  if (doUnits) {
    int ccnt=0;
    for (int jj=0; jj<cols; jj++) {
      FitsColumn* col= hdu->find(jj);
      ccnt++;

      ostringstream index;
      index << '1' << ',' << ccnt << ends;
      const char* unit = col->tunit();
      ostringstream value;
      if (unit && *unit)
	value << trim(col->tunit()) << ends;
      else
	value << ' ' << endl;
      Tcl_SetVar2(interp_, argv[2], index.str().c_str(),
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
	    index << '1' << ',' << ccnt << ends;
	    Tcl_SetVar2(interp_, argv[2], index.str().c_str(),
			value.str().c_str(), TCL_GLOBAL_ONLY);

	  }
	  break;
	}
      }
    }
  }
  
  // VOT DataType
  {
    ostringstream datatypestr;
    ostringstream unitstr;
    ostringstream arraysizestr;

    for (int jj=0; jj<cols; jj++) {
      FitsColumn* col= hdu->find(jj);

      char dt[32];
      dt[0] = '\0';
      switch (col->type()) {
      case 'L':
	strcpy(dt,"boolean");
	break;
      case 'X':
	strcpy(dt,"bit");
	break;
      case 'B':
	strcpy(dt,"unsignedByte");
	break;
      case 'I':
	strcpy(dt, "short");
	break;
      case 'J':
	strcpy(dt, "int");
	break;
      case 'K':
	strcpy(dt, "long");
	break;
      case 'A':
	strcpy(dt, "char");
	break;
      case 'E':
	strcpy(dt, "float");
	break;
      case 'D':
	strcpy(dt, "double");
	break;
      case 'C':
      case 'M':
      case 'P':
      case 'Q':
	// not supported
	break;
      }
      datatypestr << dt << ' ';

      const char* ut = col->tunit();
      if (ut && *ut)
	unitstr << ut << ' ';
      else
	unitstr << '"' << '"' << ' ';

      if (col->repeat()>1) {
	switch (col->type()) {
	case 'A':
	case 'X':
	case 'L':
	  arraysizestr << col->repeat() << ' ';
	  break;
	default:
	  for (int kk=1; kk<col->repeat(); kk++) {
	    datatypestr << dt << ' ';
	    if (ut && *ut)
	      unitstr << ut << ' ';
	    else
	      unitstr << '"' << '"' << ' ';
	    arraysizestr << '1' << ' ';
	  }
	  break;
	}
      }
      else {
	arraysizestr << '1' << ' ';
      }
    }

    datatypestr << ends;
    Tcl_SetVar2(interp_, argv[2], "DataType" , datatypestr.str().c_str(),
		TCL_GLOBAL_ONLY);
    unitstr << ends;
    Tcl_SetVar2(interp_, argv[2], "Unit" , unitstr.str().c_str(),
		TCL_GLOBAL_ONLY);
    arraysizestr << ends;
    Tcl_SetVar2(interp_, argv[2], "ArraySize" , arraysizestr.str().c_str(),
		TCL_GLOBAL_ONLY);
  }

  int end = (max<rows-start) ? max : rows-start;
  ostringstream rowstr;
  rowstr << end+doUnits << ends;
  Tcl_SetVar2(interp_, argv[2], "Nrows", rowstr.str().c_str(),
	      TCL_GLOBAL_ONLY);
  
  // data
  ptr += start*width;
  for (int ii=0; ii<end; ii++, ptr+=width) {

    int ccnt = 0;
    for (int jj=0; jj<cols; jj++) {
      FitsColumn* col = hdu->find(jj);
      ccnt++;

      ostringstream index;
      index << ii+1+doUnits << ',' << ccnt << ends;
      ostringstream value;
      value << col->str(ptr) << ends;
      Tcl_SetVar2(interp_, argv[2], index.str().c_str(),
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
	    index << ii+1+doUnits << ',' << ccnt << ends;
	    ostringstream value;
	    value << col->str(ptr,kk) << ends;
	    Tcl_SetVar2(interp_, argv[2], index.str().c_str(),
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
  if (argc!=10) {
    Tcl_AppendResult(interp_, "usage: fitsy histogram ?col? ?xname? ?yname? ?num? ?min? ?max? ?useMinMax? ?varname?", NULL);
    return TCL_ERROR;
  }
  
  for (int ii=2; ii<10; ii++)
    if (!(argv[ii] && *argv[ii]))
      return TCL_ERROR;

  int num =0;
  {
    string x(argv[5]);
    istringstream sstr(x);
    sstr >> num;
  }
  if (num<1)
    return TCL_ERROR;

  double min =0;
  {
    string x(argv[6]);
    istringstream sstr(x);
    sstr >> min;
  }

  double max =0;
  {
    string x(argv[7]);
    istringstream sstr(x);
    sstr >> max;
  }

  int useminmax =1;
  {
    string x(argv[8]);
    istringstream sstr(x);
    sstr >> useminmax;
  }

  if (!fits_)
    return TCL_ERROR;

  if (!fits_->isValid())
    return TCL_ERROR;
      
  if (!fits_->isTable()) 
    return TCL_ERROR;

  FitsTableHDU* hdu = (FitsTableHDU*)fits_->head()->hdu();
  int rows = hdu->rows();
  int width  = hdu->width();
  FitsColumn* col = hdu->find(argv[2]);

  if (!col)
    return TCL_ERROR;

  double* x = (double*)malloc(num*sizeof(double));
  double* y = (double*)malloc(num*sizeof(double));
  memset(x,0,num*sizeof(double));
  memset(y,0,num*sizeof(double));

  // fill Axes
  char* ptr = (char*)fits_->data();

  if (!useminmax) {
  // find min/max
    Vector minmax= fits_->getColMinMax(argv[2]);
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
    Tcl_SetVar2(interp_, argv[9], "bar,width", str.str().c_str(), TCL_GLOBAL_ONLY);
  }

  // load into BLT vectors
  Blt_Vector* xx;
  Blt_GetVector(interp_, argv[3], &xx);
  Blt_ResetVector(xx, x, num, num*sizeof(double), TCL_DYNAMIC);

  Blt_Vector* yy;
  Blt_GetVector(interp_, argv[4], &yy);
  Blt_ResetVector(yy, y, num, num*sizeof(double), TCL_DYNAMIC);

  return TCL_OK;
}

int TclFITSY::plot(int argc, const char* argv[])
{
  if (argc<7) {
    Tcl_AppendResult(interp_, "usage: fitsy plot ?dim? ?xcol? ?xname? ?ycol? ?yname? [?xerrcol? ?xerrname?] [?yerrcol? ?yerrname?]", NULL);
    return TCL_ERROR;
  }
  
  for (int ii=2; ii<7; ii++)
    if (!(argv[ii] && *argv[ii]))
      return TCL_ERROR;

  Dimension dim = XY;
  if (!strncmp(argv[2],"xyexey",6)) {
    dim = XYEXEY;
    // xerrcol
    if (!(argv[7] && *argv[7]))
      return TCL_ERROR;
    // xerrvarname
    if (!(argv[8] && *argv[8]))
      return TCL_ERROR;
    // yerrcol
    if (!(argv[9] && *argv[9]))
      return TCL_ERROR;
    // yerrvarname
    if (!(argv[10] && *argv[10]))
      return TCL_ERROR;
  }
  else if (!strncmp(argv[2],"xyey",4)) {
    dim = XYEY;
    // yerrcol
    if (!(argv[7] && *argv[7]))
      return TCL_ERROR;
    // yerrvarname
    if (!(argv[8] && *argv[8]))
      return TCL_ERROR;
  }
  else if (!strncmp(argv[2],"xyex",4)) {
    dim = XYEX;
    // xerrcol
    if (!(argv[7] && *argv[7]))
      return TCL_ERROR;
    // xerrvarname
    if (!(argv[8] && *argv[8]))
      return TCL_ERROR;
  }
  else if (!strncmp(argv[2],"xy",2))
    dim = XY;
  else
    return TCL_ERROR;

  if (!fits_)
    return TCL_ERROR;

  if (!fits_->isValid())
    return TCL_ERROR;
      
  if (!fits_->isTable()) 
    return TCL_ERROR;

  char* ptr = (char*)fits_->data();
  FitsTableHDU* hdu = (FitsTableHDU*)fits_->head()->hdu();
  int rows = hdu->rows();
  int width  = hdu->width();

  FitsColumn* xcol = (FitsBinColumnB*)hdu->find(argv[3]);
  FitsColumn* ycol = (FitsBinColumnB*) hdu->find(argv[5]);
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
  case XYEX:
    xecol= (FitsBinColumnB*)hdu->find(argv[7]);
    if (!xecol)
      return TCL_ERROR;
    xe = new double[rows];
    break;
  case XYEY:
    yecol= (FitsBinColumnB*)hdu->find(argv[7]);
    if (!yecol)
      return TCL_ERROR;
    ye = new double[rows];
    break;
  case XYEXEY:
    xecol= (FitsBinColumnB*)hdu->find(argv[7]);
    yecol= (FitsBinColumnB*)hdu->find(argv[9]);
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
    case XYEX:
      xe[ii] = xecol->value(ptr);
      break;
    case XYEY:
      ye[ii] = yecol->value(ptr);
      break;
    case XYEXEY:
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

  Blt_GetVector(interp_, argv[4], &xx);
  Blt_ResetVector(xx, x, rows, rows*sizeof(double), TCL_DYNAMIC);

  Blt_GetVector(interp_, argv[6], &yy);
  Blt_ResetVector(yy, y, rows, rows*sizeof(double), TCL_DYNAMIC);

  switch (dim) {
  case XY:
    break;
  case XYEX:
    Blt_GetVector(interp_, argv[8], &xxe);
    Blt_ResetVector(xxe, xe, rows, rows*sizeof(double), TCL_DYNAMIC);
    break;
  case XYEY:
      Blt_GetVector(interp_, argv[8], &yye);
    Blt_ResetVector(yye, ye, rows, rows*sizeof(double), TCL_DYNAMIC);
    break;
  case XYEXEY:
    Blt_GetVector(interp_, argv[8], &xxe);
    Blt_ResetVector(xxe, xe, rows, rows*sizeof(double), TCL_DYNAMIC);

    Blt_GetVector(interp_, argv[10], &yye);
    Blt_ResetVector(yye, ye, rows, rows*sizeof(double), TCL_DYNAMIC);
    break;
  }

  return TCL_OK;
}

// Support

void TclFITSY::findFits(const char** argv)
{
  if (fits_)
    delete fits_;
  fits_ =NULL;

  for (int ii=2; ii<5; ii++)
    if (!(argv[ii] && *argv[ii]))
      return;

  int ext =0;
  string x(argv[4]);
  istringstream sstr(x);
  sstr >> ext;

  if (ext<0) {
    if (!strncmp(argv[3],"mmapincr",8))
      fits_ = new FitsFitsMMapIncr(argv[2], FitsFile::RELAXTABLE);
    else
      fits_ = new FitsFitsAllocGZ(argv[2], FitsFile::RELAXTABLE,FitsFile::FLUSH);

    if (!fits_->isValid()) {
      delete fits_;
      fits_ =NULL;
      return;
    }
  }
  else {
    if (!strncmp(argv[3],"mmapincr",8))
      fits_ = new FitsFitsMMapIncr(argv[2]);
    else
      fits_ = new FitsFitsAllocGZ(argv[2],FitsFile::FLUSH);

    if (!fits_->isValid()) {
      delete fits_;
      fits_ =NULL;
      return;
    }

    FitsFile* next =NULL;
    for (int ii=0; ii<ext; ii++) {
      if (!strncmp(argv[3],"mmapincr",8))
	next = new FitsMosaicNextMMapIncr(fits_);
      else
	next = new FitsMosaicNextAllocGZ(fits_, FitsFile::FLUSH);

      delete fits_;
      fits_ = next;
      if (!fits_->isValid()) {
	delete fits_;
	fits_ =NULL;
	return;
      }
    }
  }
}
