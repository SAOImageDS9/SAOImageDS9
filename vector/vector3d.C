// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "vector3d.h"
#include "vector.h"
#include "fuzzy.h"

// Vector3d

Vector3d::Vector3d(const Vector& a)
{
  v[0]=a.v[0];
  v[1]=a.v[1];
  v[2]=0;
  v[3]=1;
}

Vector3d::Vector3d(const Vector& a, double z)
{
  v[0]=a.v[0];
  v[1]=a.v[1];
  v[2]=z;
  v[3]=1;
}

Vector3d& Vector3d::operator=(const Vector& a)
{
  v[0]=a.v[0];
  v[1]=a.v[1];
  v[2]=0;
  v[3]=1;
  return *this;
}

ostream& operator<<(ostream& os, const Vector3d& v)
{
  unsigned char sep = (unsigned char)os.iword(Vector::separator);
  if (!sep)
    sep = ' ';

  unsigned char unit = (unsigned char)os.iword(Vector::unit);
  if (!unit)
    os << v.v[0] << sep << v.v[1] << sep << v.v[2];
  else
    os << v.v[0] << unit << v.v[1] << unit << v.v[2] << unit;

  // reset unit
  os.iword(Vector::unit) = '\0';

  return os;
}

istream& operator>>(istream& s, Vector3d& v)
{
  s >> v.v[0] >> v.v[1] >> v.v[2];
  return s;
}

// Vertex3d

ostream& operator<<(ostream& os, const Vertex3d& v)
{
  os << v.vector;
  return os;
}

// Matrix3d

Matrix3d& Matrix3d::operator*=(const Matrix3d& a)
{
  Matrix3d r;
  for (int ii=0; ii<4; ii++)
    for (int jj=0; jj<4; jj++)
      r.m[ii][jj] = 
	m[ii][0]*a.m[0][jj] + 
	m[ii][1]*a.m[1][jj] + 
	m[ii][2]*a.m[2][jj] + 
	m[ii][3]*a.m[3][jj];

  return *this=r;
}

Matrix3d::Matrix3d(const Matrix& a)
{ 
  m[0][0]=a.m[0][0];
  m[0][1]=a.m[0][1];
  m[0][2]=0;
  m[0][3]=0;

  m[1][0]=a.m[1][0];
  m[1][1]=a.m[1][1];
  m[1][2]=0;
  m[1][3]=0;

  m[2][0]=0;
  m[2][1]=0;
  m[2][2]=1;
  m[2][3]=0;
  
  m[3][0]=a.m[2][0];
  m[3][1]=a.m[2][1];
  m[3][2]=0;
  m[3][3]=1;
}

Matrix3d Matrix3d::invert()
{
  Matrix3d cc = this->cofactor();
  Matrix3d aa = cc.adjoint();
  double dd = m[0][0]*aa.m[0][0] + m[0][1]*aa.m[1][0] + 
    m[0][2]*aa.m[2][0] + m[0][3]*aa.m[3][0];

  Matrix3d rr;
  for (int ii=0; ii<4; ii++ )
    for (int jj=0; jj<4; jj++)
      rr.m[ii][jj] = aa.m[ii][jj]/dd;

  return rr;
}

Matrix3d Matrix3d::cofactor()
{
  Matrix3d rr;

  rr.m[0][0] = +det2d(m[1][1],m[1][2],m[1][3],
		      m[2][1],m[2][2],m[2][3],
		      m[3][1],m[3][2],m[3][3]);
  rr.m[0][1] = -det2d(m[1][0],m[1][2],m[1][3],
		      m[2][0],m[2][2],m[2][3],
		      m[3][0],m[3][2],m[3][3]);
  rr.m[0][2] = +det2d(m[1][0],m[1][1],m[1][3],
		      m[2][0],m[2][1],m[2][3],
		      m[3][0],m[3][1],m[3][3]);
  rr.m[0][3] = -det2d(m[1][0],m[1][1],m[1][2],
		      m[2][0],m[2][1],m[2][2],
		      m[3][0],m[3][1],m[3][2]);

  rr.m[1][0] = -det2d(m[0][1],m[0][2],m[0][3],
		      m[2][1],m[2][2],m[2][3],
		      m[3][1],m[3][2],m[3][3]);
  rr.m[1][1] = +det2d(m[0][0],m[0][2],m[0][3],
		      m[2][0],m[2][2],m[2][3],
		      m[3][0],m[3][2],m[3][3]);
  rr.m[1][2] = -det2d(m[0][0],m[0][1],m[0][3],
		      m[2][0],m[2][1],m[2][3],
		      m[3][0],m[3][1],m[3][3]);
  rr.m[1][3] = +det2d(m[0][0],m[0][1],m[0][2],
		      m[2][0],m[2][1],m[2][2],
		      m[3][0],m[3][1],m[3][2]);

  rr.m[2][0] = +det2d(m[0][1],m[0][2],m[0][3],
		      m[1][1],m[1][2],m[1][3],
		      m[3][1],m[3][2],m[3][3]);
  rr.m[2][1] = -det2d(m[0][0],m[0][2],m[0][3],
		      m[1][0],m[1][2],m[1][3],
		      m[3][0],m[3][2],m[3][3]);
  rr.m[2][2] = +det2d(m[0][0],m[0][1],m[0][3],
		      m[1][0],m[1][1],m[1][3],
		      m[3][0],m[3][1],m[3][3]);
  rr.m[2][3] = -det2d(m[0][0],m[0][1],m[0][2],
		      m[1][0],m[1][1],m[1][2],
		      m[3][0],m[3][1],m[3][2]);

  rr.m[3][0] = -det2d(m[0][1],m[0][2],m[0][3],
		      m[1][1],m[1][2],m[1][3],
		      m[2][1],m[2][2],m[2][3]);
  rr.m[3][1] = +det2d(m[0][0],m[0][2],m[0][3],
		      m[1][0],m[1][2],m[1][3],
		      m[2][0],m[2][2],m[2][3]);
  rr.m[3][2] = -det2d(m[0][0],m[0][1],m[0][3],
		      m[1][0],m[1][1],m[1][3],
		      m[2][0],m[2][1],m[2][3]);
  rr.m[3][3] = +det2d(m[0][0],m[0][1],m[0][2],
		      m[1][0],m[1][1],m[1][2],
		      m[2][0],m[2][1],m[2][2]);

  return rr;
}

Matrix3d Matrix3d::adjoint()
{
  Matrix3d rr;
  for (int ii=0; ii<4; ii++)
    for (int jj=0; jj<4; jj++)
      rr.m[jj][ii] = m[ii][jj];

  return rr;
}

double Matrix3d::det()
{
  Matrix3d cc = this->cofactor();
  Matrix3d aa = cc.adjoint();
  return m[0][0]*aa.m[0][0] + m[0][1]*aa.m[1][0] 
    + m[0][2]*aa.m[2][0] + m[0][3]*aa.m[3][0];
}

void Matrix3d::dump()
{
  for (int ii=0; ii<4; ii++) {
    for (int jj=0; jj<4; jj++)
      cerr << m[ii][jj] << ' ';
    cerr << endl;
  }
  cerr << endl;
}

ostream& operator<<(ostream& os, const Matrix3d& m)
{
  os << ' ';
  for (int ii=0; ii<4; ii++)
    for (int jj=0; jj<3; jj++)
      os << m.m[ii][jj] << ' ';

  return os;
}

istream& operator>>(istream& s, Matrix3d& m)
{
  for (int ii=0; ii<4; ii++ )
    for (int jj=0; jj<3; jj++)
      s >> m.m[ii][jj];

  return s;
}

// Translate3d

Translate3d::Translate3d(const Vector& v) 
{
  m[3][0]=v.v[0];
  m[3][1]=v.v[1];
  m[3][2]=0;
}

Translate3d::Translate3d(const Vector& v, double z) 
{
  m[3][0]=v.v[0]; 
  m[3][1]=v.v[1]; 
  m[3][2]=z;
}

ostream& operator<<(ostream& os, const Translate3d& m)
{
  os << ' ' << m.m[3][0] << ' ' << m.m[3][1] << ' ' << m.m[3][2] << ' ';
  return os;
}

istream& operator>>(istream& s, Translate3d& m)
{
  s >> m.m[3][0] >> m.m[3][1] >> m.m[3][2];
  return s;
}

// Scale3d

Scale3d::Scale3d(const Vector& v)
{
  m[0][0]=v.v[0]; m[1][1]=v.v[1]; m[2][2]=1;
}

Scale3d::Scale3d(const Vector& v, double c)
{
  m[0][0]=v.v[0]; m[1][1]=v.v[1]; m[2][2]=c;
}

ostream& operator<<(ostream& os, const Scale3d& m)
{
  os << ' ' << m.m[0][0] << ' ' << m.m[1][1] << ' ' << m.m[2][2] << ' ';
  return os;
}

istream& operator>>(istream& s, Scale3d& m)
{
  s >> m.m[0][0] >> m.m[1][1] >> m.m[2][2];
  return s;
}

// RotateX3d

RotateX3d::RotateX3d(double a) : Matrix3d()
{
  m[1][1] = cos(a);
  m[1][2] = sin(a);
  m[2][1] = -sin(a);
  m[2][2] = cos(a);

  // this fixes a problem with numbers too small and tring to invert the matrix
  tzero(&m[1][1]);
  tzero(&m[1][2]);
  tzero(&m[2][1]);
  tzero(&m[2][2]);
}

ostream& operator<<(ostream& os, const RotateX3d& m)
{
  os << ' ' << m.m[1][1] << ' ' << m.m[1][2]
    << ' ' << m.m[2][1] << ' ' << m.m[2][2] << ' ';
  return os;
}

istream& operator>>(istream& s, RotateX3d& m)
{
  s >> m.m[1][1] >> m.m[1][2] >> m.m[2][1] >> m.m[2][2];
  return s;
}

// RotateY3d

RotateY3d::RotateY3d(double a) : Matrix3d()
{
  m[0][0] = cos(a);
  m[0][2] = -sin(a);
  m[2][0] = sin(a);
  m[2][2] = cos(a);

  // this fixes a problem with numbers too small and tring to invert the matrix
  tzero(&m[0][0]);
  tzero(&m[0][2]);
  tzero(&m[2][0]);
  tzero(&m[2][2]);
}

ostream& operator<<(ostream& os, const RotateY3d& m)
{
  os << ' ' << m.m[0][0] << ' ' << m.m[0][2]
    << ' ' << m.m[2][0] << ' ' << m.m[2][2] << ' ';
  return os;
}

istream& operator>>(istream& s, RotateY3d& m)
{
  s >> m.m[0][0] >> m.m[0][2] >> m.m[2][0] >> m.m[2][2];
  return s;
}

// RotateZ3d

RotateZ3d::RotateZ3d(double a) : Matrix3d()
{
  m[0][0] = cos(a);
  m[0][1] = sin(a);
  m[1][0] = -sin(a);
  m[1][1] = cos(a);

  // this fixes a problem with numbers too small and tring to invert the matrix
  tzero(&m[0][0]);
  tzero(&m[0][1]);
  tzero(&m[1][0]);
  tzero(&m[1][1]);
}

ostream& operator<<(ostream& os, const RotateZ3d& m)
{
  os << ' ' << m.m[0][0] << ' ' << m.m[0][1]
    << ' ' << m.m[1][0] << ' ' << m.m[1][1] << ' ';
  return os;
}

istream& operator>>(istream& s, RotateZ3d& m)
{
  s >> m.m[0][0] >> m.m[0][1] >> m.m[1][0] >> m.m[1][1];
  return s;
}

// BBox3d

BBox3d::BBox3d(double a, double b, double c, double d, double e, double f)
{
  // we want a 'positive' cube
  ll.v[0] = a < d ? a : d;
  ll.v[1] = b < e ? b : e;
  ll.v[2] = c < f ? c : f;
  ur.v[0] = a < d ? d : a;
  ur.v[1] = b < e ? e : b;
  ur.v[2] = c < f ? f : c;
}

BBox3d::BBox3d(const Vector3d& l, const Vector3d& h)
{
  // we want a 'positive' cube
  ll.v[0] = l.v[0] < h.v[0] ? l.v[0] : h.v[0];
  ll.v[1] = l.v[1] < h.v[1] ? l.v[1] : h.v[1];
  ll.v[2] = l.v[2] < h.v[2] ? l.v[2] : h.v[2];
  ur.v[0] = l.v[0] < h.v[0] ? h.v[0] : l.v[0];
  ur.v[1] = l.v[1] < h.v[1] ? h.v[1] : l.v[1];
  ur.v[2] = l.v[2] < h.v[2] ? h.v[2] : l.v[2];
}

int BBox3d::isIn(const Vector3d& v) const
{
  return !(v.v[0] < ll.v[0] || v.v[1] < ll.v[1] || v.v[2] < ll.v[2] ||
	   v.v[0] > ur.v[0] || v.v[1] > ur.v[1] || v.v[2] > ur.v[2]);
}

double BBox3d::volume()
{
  Vector3d aa =ur-ll;
  return aa[0]*aa[1]*aa[2];
}

BBox3d& BBox3d::bound(const Vector3d& vv)
{
  // expand bbox3d to include vector3d
  if (vv.v[0] < ll[0])
    ll[0] = vv.v[0];
  if (vv.v[1] < ll[1])
    ll[1] = vv.v[1];
  if (vv.v[2] < ll[2])
    ll[2] = vv.v[2];
    
  if (vv.v[0] > ur[0])
    ur[0] = vv.v[0];
  if (vv.v[1] > ur[1])
    ur[1] = vv.v[1];
  if (vv.v[2] > ur[2])
    ur[2] = vv.v[2];

  return *this;
}

ostream& operator<<(ostream& os, const BBox3d& b)
{
  os << b.ll << ' ' << b.ur;
  return os;
}

// WorldToView

Matrix3d WorldToView3d(const Vector3d& cop, 
		       const Vector3d& vpn, 
		       const Vector3d& vup)
{
  Vector3d zv = ((Vector3d)vpn).normalize();
  Vector3d xv = cross(zv,(Vector3d&)vup).normalize();
  Vector3d yv = cross(xv,zv).normalize();

  return Translate3d(-cop) * 
    Matrix3d(xv[0],yv[0],zv[0],
	     xv[1],yv[1],zv[1],
	     xv[2],yv[2],zv[2],
	         0,    0,    0);
}

Matrix3d WorldToView3d(const Vector3d& cop, 
		       double head, double pitch, double bank)
{
  return Translate3d(-cop) *
    RotateY3d(head) * 
    RotateX3d(pitch) * 
    RotateZ3d(bank) *
    Scale3d(1,1,-1);
}

Matrix3d WorldToView3d(const Vector3d& cop, const Vector3d& vpn, double bank)
{
  Vector3d zv = -((Vector3d)vpn).normalize();
  double l=sqrt(zv[0]*zv[0]+zv[2]*zv[2]);

  return Translate3d(-cop) *
    RotateY3d(zv[2]/l,zv[0]/l,-zv[0]/l,zv[2]/l) * 
    RotateX3d(l,zv[1],-zv[1],l) * 
    RotateZ3d(bank) *
    Scale3d(1,1,-1);
}
