// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "wcsast.h"

int wcsSystem(AstFrameSet* ast, Coord::CoordSystem sys)
{
  int nn = astGetI(ast,"nframe");
  char cc = ' ';
  int ww = sys-Coord::WCS;
  if (ww < 0)
    return 0;
  if (ww)
    cc = ww+'@';

  for (int ss=0; ss<nn; ss++) {
    const char* id = astGetC(astGetFrame(ast,ss+1),"Ident");
    if (cc == id[0]) {
      astSetI(ast,"Current",ss+1);
      return 1;
    }
  }

  return 0;
}

void wcsSkyFrame(AstFrameSet* ast, Coord::SkyFrame sky)
{
  // Asssume the current frame is an Equatoral SkyFrame
  // must be checked else where
  switch (sky) {
  case Coord::FK4:
    astSet(ast, "System=FK4, Equinox=B1950");
    break;
  case Coord::FK5:
    astSet(ast, "System=FK5, Equinox=J2000");
    break;
  case Coord::ICRS:
    astSet(ast, "System=ICRS");
    break;
  case Coord::GALACTIC:
    astSet(ast, "System=GALACTIC");
    break;
  case Coord::ECLIPTIC:
    astSet(ast, "System=ECLIPTIC");
    // get AST to agree with WCSSUBS
    astSetD(ast, "EQUINOX", astGetD(ast, "EPOCH"));
    break;
  }
}

void wcsFormat(AstFrameSet* ast, int id, const char* format)
{
  // is it already set?
  // ast is very slow when changing params
  {
    ostringstream str;
    str << "Format(" << id << ")" << ends;
    const char* out = astGetC(ast, str.str().c_str());
    if (!strcmp(out,format))
      return;
  }
  ostringstream str;
  str << "Format(" << id << ")=" << format << ends;
  astSet(ast, str.str().c_str());
}

Vector wcsTran(Context* context, AstFrameSet* ast,
	       const Vector& in, int forward)
{
  int naxes = astGetI(ast,"Naxes");
  switch (naxes) {
  case 1:
    {
      double pin[1];
      double pout[1];
      pin[0] = in[0];
      astTran1(ast, 1, pin, forward, pout);
      return Vector(pout[0],forward ? 1 : 0);
    }
  case 2:
    {
      double xout, yout;
      astTran2(ast, 1, in.v, in.v+1, forward, &xout, &yout);
      return Vector(xout, yout);
    }
  case 3:
    {
      double pin[3];
      double pout[3];
      pin[0] = in[0];
      pin[1] = in[1];
      pin[2] = forward ? context->slice(2) : 0;
      astTranN(ast, 1, 3, 1, pin, forward, 3, 1, pout);
      return Vector(pout[0],pout[1]);
    }
  case 4:
    {
      double pin[4];
      double pout[4];
      pin[0] = in[0];
      pin[1] = in[1];
      pin[2] = forward ? context->slice(2) : 0;
      pin[3] = forward ? context->slice(3) : 0;
      astTranN(ast, 1, 4, 1, pin, forward, 4, 1, pout);
      return Vector(pout[0],pout[1]);
    }
  case 5:
    {
      double pin[5];
      double pout[5];
      pin[0] = in[0];
      pin[1] = in[1];
      pin[2] = forward ? context->slice(2) : 0;
      pin[3] = forward ? context->slice(3) : 0;
      pin[4] = forward ? context->slice(4) : 0;
      astTranN(ast, 1, 5, 1, pin, forward, 5, 1, pout);
      return Vector(pout[0],pout[1]);
    }
  }
  return Vector();
}

void wcsTran(Context* context, AstFrameSet* ast,
	     int npoint, Vector* in, int forward, Vector* out)
{
  int naxes = astGetI(ast,"Naxes");
  switch (naxes) {
  case 1:
    {
      double* xin = new double[npoint];
      double* xout = new double[npoint];

      for (int ii=0; ii<npoint; ii++)
	xin[ii] = in[ii][0];
      astTran1(ast, npoint, xin, forward, xout);
      for (int ii=0; ii<npoint; ii++)
	out[ii] = Vector(xout[ii],forward ? 1 : 0);

      if (xin)
	delete [] xin;
      if (xout)
	delete [] xout;
    }
    break;
  case 2:
    {
      double* xin = new double[npoint];
      double* yin = new double[npoint];
      double* xout = new double[npoint];
      double* yout = new double[npoint];

      for (int ii=0; ii<npoint; ii++) {
	xin[ii] = in[ii][0];
	yin[ii] = in[ii][1];
      }
      astTran2(ast, npoint, xin, yin, forward, xout, yout);
      for (int ii=0; ii<npoint; ii++)
	out[ii] = Vector(xout[ii],yout[ii]);

      if (xin)
	delete [] xin;
      if (yin)
	delete [] yin;
      if (xout)
	delete [] xout;
      if (yout)
	delete [] yout;
    }
    break;
  case 3:
    {
      double* ptr_in[3];
      ptr_in[0] = new double[npoint];
      ptr_in[1] = new double[npoint];
      ptr_in[2] = new double[npoint];
      double* ptr_out[3];
      ptr_out[0] = new double[npoint];
      ptr_out[1] = new double[npoint];
      ptr_out[2] = new double[npoint];

      for (int kk=0; kk<npoint; kk++) {
	ptr_in[0][kk] = in[kk][0];
	ptr_in[1][kk] = in[kk][1];
	ptr_in[2][kk] = forward ? context->slice(2) : 0;
      }      
      astTranP(ast, npoint, 3, (const double**)ptr_in, forward, 3, ptr_out);
      for (int kk=0; kk<npoint; kk++)
	out[kk] = Vector(ptr_out[0][kk], ptr_out[1][kk]);

      if (ptr_in[0])
	delete [] ptr_in[0];
      if (ptr_in[1])
	delete [] ptr_in[1];
      if (ptr_in[2])
	delete [] ptr_in[2];

      if (ptr_out[0])
	delete [] ptr_out[0];
      if (ptr_out[1])
	delete [] ptr_out[1];
      if (ptr_out[2])
	delete [] ptr_out[2];
    }
    break;
  case 4:
    {
      double* ptr_in[4];
      ptr_in[0] = new double[npoint];
      ptr_in[1] = new double[npoint];
      ptr_in[2] = new double[npoint];
      ptr_in[3] = new double[npoint];
      double* ptr_out[4];
      ptr_out[0] = new double[npoint];
      ptr_out[1] = new double[npoint];
      ptr_out[2] = new double[npoint];
      ptr_out[3] = new double[npoint];

      for (int kk=0; kk<npoint; kk++) {
	ptr_in[0][kk] = in[kk][0];
	ptr_in[1][kk] = in[kk][1];
	ptr_in[2][kk] = forward ? context->slice(2) : 0;
	ptr_in[3][kk] = forward ? context->slice(3) : 0;
      }      
      astTranP(ast, npoint, 4, (const double**)ptr_in, forward, 4, ptr_out);
      for (int kk=0; kk<npoint; kk++)
	out[kk] = Vector(ptr_out[0][kk], ptr_out[1][kk]);

      if (ptr_in[0])
	delete [] ptr_in[0];
      if (ptr_in[1])
	delete [] ptr_in[1];
      if (ptr_in[2])
	delete [] ptr_in[2];
      if (ptr_in[3])
	delete [] ptr_in[3];

      if (ptr_out[0])
	delete [] ptr_out[0];
      if (ptr_out[1])
	delete [] ptr_out[1];
      if (ptr_out[2])
	delete [] ptr_out[2];
      if (ptr_out[3])
	delete [] ptr_out[3];
    }
    break;
  case 5:
    {
      double* ptr_in[5];
      ptr_in[0] = new double[npoint];
      ptr_in[1] = new double[npoint];
      ptr_in[2] = new double[npoint];
      ptr_in[3] = new double[npoint];
      ptr_in[4] = new double[npoint];
      double* ptr_out[5];
      ptr_out[0] = new double[npoint];
      ptr_out[1] = new double[npoint];
      ptr_out[2] = new double[npoint];
      ptr_out[3] = new double[npoint];
      ptr_out[4] = new double[npoint];

      for (int kk=0; kk<npoint; kk++) {
	ptr_in[0][kk] = in[kk][0];
	ptr_in[1][kk] = in[kk][1];
	ptr_in[2][kk] = forward ? context->slice(2) : 0;
	ptr_in[3][kk] = forward ? context->slice(3) : 0;
	ptr_in[4][kk] = forward ? context->slice(4) : 0;
      }      
      astTranP(ast, npoint, 5, (const double**)ptr_in, forward, 5, ptr_out);
      for (int kk=0; kk<npoint; kk++)
	out[kk] = Vector(ptr_out[0][kk], ptr_out[1][kk]);

      if (ptr_in[0])
	delete [] ptr_in[0];
      if (ptr_in[1])
	delete [] ptr_in[1];
      if (ptr_in[2])
	delete [] ptr_in[2];
      if (ptr_in[3])
	delete [] ptr_in[3];
      if (ptr_in[4])
	delete [] ptr_in[4];

      if (ptr_out[0])
	delete [] ptr_out[0];
      if (ptr_out[1])
	delete [] ptr_out[1];
      if (ptr_out[2])
	delete [] ptr_out[2];
      if (ptr_out[3])
	delete [] ptr_out[3];
      if (ptr_out[4])
	delete [] ptr_out[4];
    }
    break;
  }
}

Vector3d wcsTran(Context* context, AstFrameSet* ast,
		 const Vector3d& in, int forward)
{
  int naxes = astGetI(ast,"Naxes");
  switch (naxes) {
  case 1:
    {
      double pin[1];
      double pout[1];
      pin[0] = in[0];
      astTran1(ast, 1, pin, forward, pout);
      return Vector3d(pout[0],forward ? 1 : 0,forward ? 1 : 0);
    }
  case 2:
    {
      double pin[2];
      double pout[2];
      pin[0] = in[0];
      pin[1] = in[1];
      astTranN(ast, 1, 2, 1, pin, forward, 2, 1, pout);
      return Vector3d(pout[0],pout[1],forward ? 1 : 0);
    }
  case 3:
    {
      double pin[3];
      double pout[3];
      pin[0] = in[0];
      pin[1] = in[1];
      pin[2] = in[2];
      astTranN(ast, 1, 3, 1, pin, forward, 3, 1, pout);
      return Vector3d(pout[0],pout[1],pout[2]);
    }
  case 4:
    {
      double pin[4];
      double pout[4];
      pin[0] = in[0];
      pin[1] = in[1];
      pin[2] = in[2];
      pin[3] = forward ? context->slice(3) : 0;
      astTranN(ast, 1, 4, 1, pin, forward, 4, 1, pout);
      return Vector3d(pout[0],pout[1],pout[2]);
    }
  case 5:
    {
      double pin[5];
      double pout[5];
      pin[0] = in[0];
      pin[1] = in[1];
      pin[2] = in[2];
      pin[3] = forward ? context->slice(3) : 0;
      pin[4] = forward ? context->slice(4) : 0;
      astTranN(ast, 1, 5, 1, pin, forward, 5, 1, pout);
      return Vector3d(pout[0],pout[1],pout[2]);
    }
  }
  return Vector3d();
}

double wcsDistance(AstFrameSet* ast, const Vector& vv1, const Vector& vv2)
{
  int naxes = astGetI(ast,"Naxes");
  switch (naxes) {
  case 1:
    {
      double ptr1[1];
      ptr1[0] = vv1[0];
      double ptr2[1];
      ptr2[0] = vv2[0];

      return astDistance(ast, ptr1, ptr2);
    }
  case 2:
    return astDistance(ast, vv1.v, vv2.v);
  case 3:
    {
      double ptr1[3];
      ptr1[0] = vv1[0];
      ptr1[1] = vv1[1];
      ptr1[2] = 0;
      double ptr2[3];
      ptr2[0] = vv2[0];
      ptr2[1] = vv2[1];
      ptr2[2] = 0;

      return astDistance(ast, ptr1, ptr2);
    }
  case 4:
    {
      double ptr1[4];
      ptr1[0] = vv1[0];
      ptr1[1] = vv1[1];
      ptr1[2] = 0;
      ptr1[3] = 0;
      double ptr2[4];
      ptr2[0] = vv2[0];
      ptr2[1] = vv2[1];
      ptr2[2] = 0;
      ptr2[3] = 0;

      return astDistance(ast, ptr1, ptr2);
    }
  case 5:
    {
      double ptr1[5];
      ptr1[0] = vv1[0];
      ptr1[1] = vv1[1];
      ptr1[2] = 0;
      ptr1[3] = 0;
      ptr1[4] = 0;
      double ptr2[5];
      ptr2[0] = vv2[0];
      ptr2[1] = vv2[1];
      ptr2[2] = 0;
      ptr2[3] = 0;
      ptr2[4] = 0;

      return astDistance(ast, ptr1, ptr2);
    }
  }

  return 0;
}

double wcsAngle(AstFrameSet* ast, const Vector& vv1, const Vector& vv2,
		const Vector& vv3)
{
  int naxes = astGetI(ast,"Naxes");
  switch (naxes) {
  case 1:
    {
      double ptr1[1];
      ptr1[0] = vv1[0];
      double ptr2[1];
      ptr2[0] = vv2[0];
      double ptr3[1];
      ptr3[0] = vv3[0];
      
      return astAngle(ast, ptr1, ptr2, ptr3);
    }
  case 2:
    return astAngle(ast, vv1.v, vv2.v, vv3.v);
  case 3:
    {
      double ptr1[3];
      ptr1[0] = vv1[0];
      ptr1[1] = vv1[1];
      ptr1[2] = 0;
      double ptr2[3];
      ptr2[0] = vv2[0];
      ptr2[1] = vv2[1];
      ptr2[2] = 0;
      double ptr3[3];
      ptr3[0] = vv3[0];
      ptr3[1] = vv3[1];
      ptr3[2] = 0;
      
      return astAngle(ast, ptr1, ptr2, ptr3);
    }
  case 4:
    {
      double ptr1[4];
      ptr1[0] = vv1[0];
      ptr1[1] = vv1[1];
      ptr1[2] = 0;
      ptr1[3] = 0;
      double ptr2[4];
      ptr2[0] = vv2[0];
      ptr2[1] = vv2[1];
      ptr2[2] = 0;
      ptr2[3] = 0;
      double ptr3[4];
      ptr3[0] = vv3[0];
      ptr3[1] = vv3[1];
      ptr3[2] = 0;
      ptr3[3] = 0;

      return astAngle(ast, ptr1, ptr2, ptr3);
    }
  case 5:
    {
      double ptr1[5];
      ptr1[0] = vv1[0];
      ptr1[1] = vv1[1];
      ptr1[2] = 0;
      ptr1[3] = 0;
      ptr1[4] = 0;
      double ptr2[5];
      ptr2[0] = vv2[0];
      ptr2[1] = vv2[1];
      ptr2[2] = 0;
      ptr2[3] = 0;
      ptr2[4] = 0;
      double ptr3[5];
      ptr3[0] = vv3[0];
      ptr3[1] = vv3[1];
      ptr3[2] = 0;
      ptr3[3] = 0;
      ptr3[4] = 0;

      return astAngle(ast, ptr1, ptr2, ptr3);
    }
  }

  return 0;
}

double wcsAxAngle(AstFrameSet* ast, const Vector& vv1, const Vector& vv2)
{
  int naxes = astGetI(ast,"Naxes");
  switch (naxes) {
  case 1:
    {
      double ptr1[1];
      ptr1[0] = vv1[0];
      double ptr2[1];
      ptr2[0] = vv2[0];

      return astAxAngle(ast, ptr1, ptr2, 1);
    }
  case 2:
    return astAxAngle(ast, vv1.v, vv2.v, 2);
  case 3:
    {
      double ptr1[3];
      ptr1[0] = vv1[0];
      ptr1[1] = vv1[1];
      ptr1[2] = 0;
      double ptr2[3];
      ptr2[0] = vv2[0];
      ptr2[1] = vv2[1];
      ptr2[2] = 0;

      return astAxAngle(ast, ptr1, ptr2, 2);
    }
  case 4:
    {
      double ptr1[4];
      ptr1[0] = vv1[0];
      ptr1[1] = vv1[1];
      ptr1[2] = 0;
      ptr1[3] = 0;
      double ptr2[4];
      ptr2[0] = vv2[0];
      ptr2[1] = vv2[1];
      ptr2[2] = 0;
      ptr2[3] = 0;

      return astAxAngle(ast, ptr1, ptr2, 2);
    }
  case 5:
    {
      double ptr1[5];
      ptr1[0] = vv1[0];
      ptr1[1] = vv1[1];
      ptr1[2] = 0;
      ptr1[3] = 0;
      ptr1[4] = 0;
      double ptr2[5];
      ptr2[0] = vv2[0];
      ptr2[1] = vv2[1];
      ptr2[2] = 0;
      ptr2[3] = 0;
      ptr2[4] = 0;

      return astAxAngle(ast, ptr1, ptr2, 2);
    }
  }

  return 0;
}

AstWinMap* wcsWinMap(AstFrameSet* ast, Vector& ll, Vector& ur, Vector& rr)
{
  int naxes = astGetI(ast,"Naxes");
  switch (naxes) {
  case 1:
    {
      double vll[2];
      vll[0] = ll[0];
      vll[1] = .5;
      double vur[2];
      vur[0] = ur[0];
      vur[1] = .5;
      double vrr[2];
      vrr[0] = rr[0];
      vrr[1] = 1.5;
      return astWinMap(2, vll, vrr, vll, vur, "");
    }
  case 2:
    return astWinMap(2, ll.vv(), rr.vv(), ll.vv(), ur.vv(), "");
  case 3:
    {
      double vll[3];
      vll[0] = ll[0];
      vll[1] = ll[0];
      vll[2] = .5;
      double vur[3];
      vur[0] = ur[0];
      vur[1] = ur[0];
      vur[2] = .5;
      double vrr[3];
      vrr[0] = rr[0];
      vrr[1] = rr[1];
      vrr[2] = 1.5;
      return astWinMap(3, vll, vrr, vll, vur, "");
    }
  case 4:
    {
      double vll[4];
      vll[0] = ll[0];
      vll[1] = ll[0];
      vll[2] = .5;
      vll[3] = .5;
      double vur[4];
      vur[0] = ur[0];
      vur[1] = ur[0];
      vur[2] = .5;
      vur[3] = .5;
      double vrr[4];
      vrr[0] = rr[0];
      vrr[1] = rr[1];
      vrr[2] = 1.5;
      vrr[3] = 1.5;
      return astWinMap(4, vll, vrr, vll, vur, "");
    }
  case 5:
    {
      double vll[5];
      vll[0] = ll[0];
      vll[1] = ll[0];
      vll[2] = .5;
      vll[3] = .5;
      vll[4] = .5;
      double vur[5];
      vur[0] = ur[0];
      vur[1] = ur[0];
      vur[2] = .5;
      vur[3] = .5;
      vur[4] = .5;
      double vrr[5];
      vrr[0] = rr[0];
      vrr[1] = rr[1];
      vrr[2] = 1.5;
      vrr[3] = 1.5;
      vrr[4] = 1.5;
      return astWinMap(4, vll, vrr, vll, vur, "");
    }
  }

  return NULL;
}

AstCmpMap* wcsMatrixMap(AstFrameSet* ast, Matrix& mx)
{
  AstMatrixMap* mm =NULL;
  AstShiftMap* sm =NULL;

  int naxes = astGetI(ast,"Naxes");
  switch (naxes) {
  case 1:
    {
      double ss[] = {mx.matrix(0,0),0,0,
		     0,mx.matrix(1,1),0,
		     0,0,1};
      double tt[] = {mx.matrix(2,0),0,0};
      mm = astMatrixMap(2, 2, 0, ss, "");
      sm = astShiftMap(2, tt, "");
    }
  case 2:
    {
      double ss[] = {mx.matrix(0,0),mx.matrix(1,0),
		     mx.matrix(0,1),mx.matrix(1,1)};
      double tt[] = {mx.matrix(2,0),mx.matrix(2,1)};
      mm = astMatrixMap(2, 2, 0, ss, "");
      sm = astShiftMap(2, tt, "");
    }
    break;
  case 3:
    {
      double ss[] = {mx.matrix(0,0),mx.matrix(1,0),0,
		     mx.matrix(0,1),mx.matrix(1,1),0,
		     0,0,1};
      double tt[] = {mx.matrix(2,0),mx.matrix(2,1),0};
      mm = astMatrixMap(3, 3, 0, ss, "");
      sm = astShiftMap(3, tt, "");
    }
    break;
  case 4:
    {
      double ss[] = {mx.matrix(0,0),mx.matrix(1,0),0,0,
		     mx.matrix(0,1),mx.matrix(1,1),0,0,
		     0,0,1,0,
		     0,0,0,1};
      double tt[] = {mx.matrix(2,0),mx.matrix(2,1),0,0};
      mm = astMatrixMap(4, 4, 0, ss, "");
      sm = astShiftMap(4, tt, "");
    }
  case 5:
    {
      double ss[] = {mx.matrix(0,0),mx.matrix(1,0),0,0,0,
		     mx.matrix(0,1),mx.matrix(1,1),0,0,0,
		     0,0,1,0,0,
		     0,0,0,1,0,
		     0,0,0,0,1};
      double tt[] = {mx.matrix(2,0),mx.matrix(2,1),0,0,0};
      mm = astMatrixMap(5, 5, 0, ss, "");
      sm = astShiftMap(5, tt, "");
    }
    break;
  }

  if (mm && sm)
    return astCmpMap(mm, sm, 1, "");
  else
    return NULL;
}
