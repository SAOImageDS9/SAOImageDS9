// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "vector.h"
#include "vector3d.h"
#include "fuzzy.h"

// Vector

int Vector::separator = ios_base::xalloc();
int Vector::unit = ios_base::xalloc();

Vector::Vector(const Vector3d& a)
{
  v[0]=a.v[0];
  v[1]=a.v[1];
  v[2]=1;
}

Vector& Vector::operator=(const Vector3d& a)
{
  v[0]=a.v[0];
  v[1]=a.v[1];
  v[2]=1;
  return *this;
}

Vector& Vector::clip(const BBox& bb)
{
  // restrict vector by bbox
  Vector ll(bb.ll);
  Vector ur(bb.ur);
  if (v[0]<ll[0])
    v[0]=ll[0];
  if (v[0]>ur[0])
    v[0]=ur[0];
  if (v[1]<ll[1])
    v[1]=ll[1];
  if (v[1]>ur[1])
    v[1]=ur[1];
  return *this;
}

ostream& operator<<(ostream& os, const Vector& v)
{
  unsigned char sep = (unsigned char)os.iword(Vector::separator);
  if (!sep)
    sep = ' ';

  unsigned char unit = (unsigned char)os.iword(Vector::unit);
  if (!unit)
    os << v.v[0] << sep << v.v[1];
  else
    os << v.v[0] << unit << sep << v.v[1] << unit;

  // reset unit
  os.iword(Vector::unit) = '\0';

  return os;
}

istream& operator>>(istream& s, Vector& v)
{
  s >> v.v[0] >> v.v[1];
  return s;
}

// Vertex

ostream& operator<<(ostream& os, const Vertex& v)
{
  os << v.vector;
  return os;
}

// Matrix

Matrix& Matrix::operator*=(const Matrix& a)
{
  Matrix r;
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      r.m[i][j] = 
	m[i][0]*a.m[0][j] + 
	m[i][1]*a.m[1][j] + 
	m[i][2]*a.m[2][j];

  return *this=r;
}

Matrix Matrix::invert()
{
  Matrix cc = this->cofactor();
  Matrix aa = cc.adjoint();
  double dd = m[0][0]*aa.m[0][0] + m[0][1]*aa.m[1][0] + m[0][2]*aa.m[2][0];

  Matrix rr;
  for (int ii=0; ii<3; ii++ )
    for (int jj=0; jj<3; jj++)
      rr.m[ii][jj] = aa.m[ii][jj]/dd;

  return rr;
}

Matrix Matrix::cofactor()
{
  Matrix rr;

  rr.m[0][0] = +(m[1][1]*m[2][2]-m[1][2]*m[2][1]);
  rr.m[0][1] = -(m[1][0]*m[2][2]-m[1][2]*m[2][0]);
  rr.m[0][2] = +(m[1][0]*m[2][1]-m[1][1]*m[2][0]);

  rr.m[1][0] = -(m[0][1]*m[2][2]-m[0][2]*m[2][1]);
  rr.m[1][1] = +(m[0][0]*m[2][2]-m[0][2]*m[2][0]);
  rr.m[1][2] = -(m[0][0]*m[2][1]-m[0][1]*m[2][0]);

  rr.m[2][0] = +(m[0][1]*m[1][2]-m[0][2]*m[1][1]);
  rr.m[2][1] = -(m[0][0]*m[1][2]-m[0][2]*m[1][0]);
  rr.m[2][2] = +(m[0][0]*m[1][1]-m[0][1]*m[1][0]);

  return rr;
}

double Matrix::det()
{
  return 
    + m[0][0]*(m[1][1]*m[2][2]-m[1][2]*m[2][1])
    - m[0][1]*(m[1][0]*m[2][2]-m[1][2]*m[2][0])
    + m[0][2]*(m[1][0]*m[2][1]-m[1][1]*m[2][0]);
}

Matrix Matrix::adjoint()
{
  Matrix rr;
  for (int ii=0; ii<3; ii++)
    for (int jj=0; jj<3; jj++)
      rr.m[jj][ii] = m[ii][jj];

  return rr;
}

ostream& operator<<(ostream& os, const Matrix& m)
{
  os << ' ';
  for (int i=0; i<3; i++)
    for (int j=0; j<2; j++)
      os << m.m[i][j] << ' ';

  return os;
}

istream& operator>>(istream& s, Matrix& m)
{
  for (int i=0; i<3; i++ )
    for (int j=0; j<2; j++)
      s >> m.m[i][j];

  return s;
}

// Translate

ostream& operator<<(ostream& os, const Translate& m)
{
  os << ' ' << m.m[2][0] << ' ' << m.m[2][1] << ' ';
  return os;
}

istream& operator>>(istream& s, Translate& m)
{
  s >> m.m[2][0] >> m.m[2][1];
  return s;
}

// Scale

ostream& operator<<(ostream& os, const Scale& m)
{
  os << ' ' << m.m[0][0] << ' ' << m.m[1][1] << ' ';
  return os;
}

istream& operator>>(istream& s, Scale& m)
{
  s >> m.m[0][0] >> m.m[1][1];
  return s;
}

// Rotate

Rotate::Rotate(double a) : Matrix()
{
  // note: signs reverse for X-Windows (origin is upper left)
  m[0][0] = cos(a);
  m[0][1] = -sin(a);
  m[1][0] = sin(a);
  m[1][1] = cos(a);

  // this fixes a problem with numbers too small and tring to invert the matrix
  tzero(&m[0][0]);
  tzero(&m[0][1]);
  tzero(&m[1][0]);
  tzero(&m[1][1]);
}

ostream& operator<<(ostream& os, const Rotate& m)
{
  os << ' ' << m.m[0][0] << ' ' << m.m[0][1]
    << ' ' << m.m[1][0] << ' ' << m.m[1][1] << ' ';
  return os;
}

istream& operator>>(istream& s, Rotate& m)
{
  s >> m.m[0][0] >> m.m[0][1] >> m.m[1][0] >> m.m[1][1];
  return s;
}

// BBox

BBox::BBox(double a, double b, double c, double d)
{
  // we want a 'positive' box
  ll.v[0] = a < c ? a : c;
  ll.v[1] = b < d ? b : d;
  ur.v[0] = a < c ? c : a;
  ur.v[1] = b < d ? d : b;
}

BBox::BBox(const Vector& l, const Vector& h)
{
  // we want a 'positive' box
  ll.v[0] = l.v[0] < h.v[0] ? l.v[0] : h.v[0];
  ll.v[1] = l.v[1] < h.v[1] ? l.v[1] : h.v[1];
  ur.v[0] = l.v[0] < h.v[0] ? h.v[0] : l.v[0];
  ur.v[1] = l.v[1] < h.v[1] ? h.v[1] : l.v[1];
}

int BBox::isIn(const Vector& v) const
{
  return !(v.v[0] < ll.v[0] || v.v[1] < ll.v[1] || 
	   v.v[0] > ur.v[0] || v.v[1] > ur.v[1]);
}

int BBox::isIn(const BBox& bb) const
{
  // return 0 if outside, > 0 if intersection
  // = 4 if inside
  BBox b = bb;
  return isIn(b.ll) + isIn(b.ur) + isIn(b.ul()) + isIn(b.lr());
}

BBox& BBox::bound(const Vector& v)
{
  if (v.v[0] < ll[0])
    ll[0] = v.v[0];
  if (v.v[1] < ll[1])
    ll[1] = v.v[1];
    
  if (v.v[0] > ur[0])
    ur[0] = v.v[0];
  if (v.v[1] > ur[1])
    ur[1] = v.v[1];

  return *this;
}

BBox& BBox::bound(BBox b)
{
  this->bound(b.ll);
  this->bound(b.lr());
  this->bound(b.ur);
  this->bound(b.ul());

  return *this;
}

BBox intersect(const BBox& a, const BBox& b)
{
  // test for obvious
  int ab = a.isIn(b);
  int ba = b.isIn(a);

  // no intersection?
  if (ab==0 && ba == 0) {
    // maybe they are just crossed, check the centers
    int abc = a.isIn(((BBox&)b).center());
    int bac = b.isIn(((BBox&)a).center());
    if (abc==0 && bac==0)
      return BBox();
  }

  if (ab == 4) // b is inside a
    return b; 
  if (ba == 4) // a is inside b
    return a;

  // else, there seems to be some overlap
  BBox r;
  r.ll.v[0] = (a.ll.v[0] > b.ll.v[0]) ? a.ll.v[0] : b.ll.v[0];
  r.ll.v[1] = (a.ll.v[1] > b.ll.v[1]) ? a.ll.v[1] : b.ll.v[1];
  r.ur.v[0] = (a.ur.v[0] < b.ur.v[0]) ? a.ur.v[0] : b.ur.v[0];
  r.ur.v[1] = (a.ur.v[1] < b.ur.v[1]) ? a.ur.v[1] : b.ur.v[1];

  return r;
}

ostream& operator<<(ostream& os, const BBox& b)
{
  os << b.ll << ' ' << b.ur;
  return os;
}

// Cohen–Sutherland clipping algorithm
// bounded diagonally by (0,0), and (width, height)

const int INSIDE = 0; // 0000
const int LEFT = 1;   // 0001
const int RIGHT = 2;  // 0010
const int BOTTOM = 4; // 0100
const int TOP = 8;    // 1000

static int calcOutCode(Vector vv, int width, int height)
{
  int code = INSIDE;

  if (vv[0] < 0)           // to the left of clip window
    code |= LEFT;
  else if (vv[0] > width)  // to the right of clip window
    code |= RIGHT;
  if (vv[1] < 0)           // below the clip window
    code |= BOTTOM;
  else if (vv[1] > height) // above the clip window
    code |= TOP;

  return code;
}

int clip(Vector* v0, Vector* v1, int width, int height) 
{
  int outcode0 = calcOutCode(*v0, width, height);
  int outcode1 = calcOutCode(*v1, width, height);
  int accept = false;

  while (true) {
    if (!(outcode0 | outcode1)) { 
      // Bitwise OR is 0. Trivially accept and get out of loop
      accept = true;
      break;
    } 
    else if (outcode0 & outcode1) {
      // Bitwise AND is not 0. Trivially reject and get out of loop
      break;
    } 
    else {
      // At least one endpoint is outside the clip rectangle; pick it.
      int outcodeOut = outcode0 ? outcode0 : outcode1;

      // Now find the intersection point
      // y = y0 + slope * (x - x0)
      // x = x0 + (1 / slope) * (y - y0)
      double x, y;
      if (outcodeOut & TOP) {
	// point is above the clip rectangle
	x = (*v0)[0] + ((*v1)[0]-(*v0)[0]) * 
	  (height-(*v0)[1]) / ((*v1)[1]-(*v0)[1]);
	y = height;
      } 
      else if (outcodeOut & BOTTOM) {
	// point is below the clip rectangle
	x = (*v0)[0] + ((*v1)[0]-(*v0)[0]) * 
	  (0-(*v0)[1]) / ((*v1)[1]-(*v0)[1]);
	y = 0;
      } 
      else if (outcodeOut & RIGHT) {
	// point is to the right of clip rectangle
	y = (*v0)[1] + ((*v1)[1]-(*v0)[1]) * 
	  (width-(*v0)[0]) / ((*v1)[0]-(*v0)[0]);
	x = width;
      } 
      else if (outcodeOut & LEFT) {
	// point is to the left of clip rectangle
	y = (*v0)[1] + ((*v1)[1]-(*v0)[1]) * 
	  (0-(*v0)[0]) / ((*v1)[0]-(*v0)[0]);
	x = 0;
      }

      // Now we move outside point to intersection point to clip
      // and get ready for next pass.
      if (outcodeOut == outcode0) {
	(*v0)[0] = x;
	(*v0)[1] = y;
	outcode0 = calcOutCode(*v0, width, height);
      } 
      else {
	(*v1)[0] = x;
	(*v1)[1] = y;
	outcode1 = calcOutCode(*v1, width, height);
      }
    }
  }

  return accept;
}

