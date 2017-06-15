// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "vector.h"

// Vector

Vector operator-(const Vector& a)
{
  return Vector(-a.v[0], -a.v[1]);
}

Vector& Vector::operator+=(const Vector& a)
{
  v[0]+=a.v[0];
  v[1]+=a.v[1];
  return *this;
}

Vector operator+(const Vector& a, const Vector& b)
{
  Vector r=a;
  r+=b;
  return r;
}

Vector& Vector::operator-=(const Vector& a)
{
  v[0]-=a.v[0];
  v[1]-=a.v[1];
  return *this;
}

Vector operator-(const Vector& a, const Vector& b)
{
  Vector r=a;
  r-=b;
  return r;
}

Vector& Vector::operator*=(double f)
{
  v[0]*=f;
  v[1]*=f;
  return *this;
}

Vector operator*(const Vector& a, double b)
{
  Vector r=a;
  r*=b;
  return r;
}

Vector& Vector::operator/=(double f)
{
  v[0]/=f;
  v[1]/=f;
  return *this;
}

Vector operator/(const Vector& a, double b)
{
  Vector r=a;
  r/=b;
  return r;
}

double operator*(const Vector& a, const Vector& b) //  2D dot product
{
  double r = 0;
  for (int i=0; i<2; i++)
    r += a.v[i]*b.v[i];
  return r;
}

Vector Vector::normalize()    // 2D normalize
{
  Vector r = *this;
  double d = sqrt(v[0]*v[0]+v[1]*v[1]);
  if (d) {
    r[0] /= d;
    r[1] /= d;
  }
  else {
    r[0] = 0;
    r[1] = 0;
  }

  return r;
}

Vector Vector::abs() // absolute value
{
  Vector r;
  r[0] = fabs(v[0]);
  r[1] = fabs(v[1]);
  r[2] = 1;
  return r;
}

double Vector::length()
{
  return sqrt(v[0]*v[0] + v[1]*v[1]);
}

double Vector::angle()
{
  return atan2(v[1],v[0]);
}

double Vector::avg()
{
  return (v[0]+v[1])/2;
}

double Vector::max()
{
  return v[0]>v[1]?v[0]:v[1];
}

double Vector::min()
{
  return v[0]<v[1]?v[0]:v[1];
}

Vector Vector::round()
{
  return Vector((int)(v[0]+.5), (int)(v[1]+.5));
}

Vector Vector::floor()
{
  return Vector(::floor(v[0]), ::floor(v[1]));
}

Vector Vector::ceil()
{
  return Vector(::ceil(v[0]), ::ceil(v[1]));
}

Vector Vector::invert()
{
  Vector r = *this;
  r[0]=1/r[0];
  r[1]=1/r[1];
  r[2]=1;
  return r;
}

Vector Vector::TkCanvasPs(Tk_Canvas canvas)
{
  return Vector(v[0], Tk_CanvasPsY(canvas, v[1]));
}

Vector& Vector::operator*=(const Matrix& m)
{
  Vector vv = *this;
  for (int i=0; i<3; i++)
    v[i] = vv.v[0]*m.m[0][i] + vv.v[1]*m.m[1][i] + vv.v[2]*m.m[2][i];

  return *this;
}

Vector operator*(const Vector& v, const Matrix& m)
{
  Vector r;
  for (int i=0; i<3; i++)
    r.v[i] = v.v[0]*m.m[0][i] + v.v[1]*m.m[1][i] + v.v[2]*m.m[2][i];

  return r;
}

ostream& operator<<(ostream& s, const Vector& v)
{
  s << ' ' << v.v[0] << ' ' << v.v[1] << ' ';
  return s;
}

istream& operator>>(istream& s, Vector& v)
{
  s >> v.v[0] >> v.v[1];
  return s;
}

Vector cross(Vector& a, Vector& b)
{
  return Vector(a[1]*b[2]-b[1]*a[2], a[2]*b[0]-b[2]*a[0], a[0]*b[1]-b[0]*a[1]);
}

// the following are not valid for 2D graphics:

Vector& Vector::div(double f)
{
  v[0]/=f;
  v[1]/=f;
  v[2]/=f;
  return *this;
}

Vector& Vector::minus(const Vector& a)
{
  v[0]-=a.v[0];
  v[1]-=a.v[1];
  v[2]-=a.v[2];
  return *this;
}

Vector mult(const Vector& a, double f)
{
  Vector r = a;
  r.v[0]*= f;
  r.v[1]*= f;
  r.v[2]*= f;
  return r;
}

Vector& Vector::operator*=(const Vector& b)
{
  v[0]*=b.v[0];
  v[1]*=b.v[1];
  v[2]=1;
  return *this;
}

Vector& Vector::operator/=(const Vector& b)
{
  v[0]/=b.v[0];
  v[1]/=b.v[1];
  v[2]=1;
  return *this;
}

// Vertex

Vertex::Vertex()
{
  next_ = NULL;
  previous_ = NULL;
}

Vertex::Vertex(double x, double y)
{
  vector = Vector(x,y);
  next_ = NULL;
  previous_ = NULL;
}

Vertex::Vertex(const Vector& a)
{
  vector = a;
  next_ = NULL;
  previous_ = NULL;
}

ostream& operator<<(ostream& s, const Vertex& v)
{
  s << v.vector;
  return s;
}

// Matrix

Matrix::Matrix()
{
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      m[i][j] = (i==j ? 1 : 0);
}

Matrix::Matrix(const Matrix& a)
{
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      m[i][j] = a.m[i][j];
}

Matrix& Matrix::operator=(const Matrix& a)
{
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      m[i][j] = a.m[i][j];

  return *this;
}

Matrix::Matrix(const Vector& v0, const Vector& v1, const Vector& v2)
{
  int i;
  for (i=0; i<3; i++)
    m[0][i] = v0.v[i];
  for (i=0; i<3; i++)
    m[1][i] = v1.v[i];
  for (i=0; i<3; i++)
    m[2][i] = v2.v[i];
}

Matrix::Matrix(double a, double b, double c, double d, double e, double f)
{
  m[0][0]=a;
  m[0][1]=b;
  m[0][2]=0;
  m[1][0]=c;
  m[1][1]=d;
  m[1][2]=0;
  m[2][0]=e;
  m[2][1]=f;
  m[2][2]=1;
}

Matrix& Matrix::identity()
{
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      m[i][j] = (i==j ? 1 : 0);

  return *this;
}

int Matrix::isIdentity()
{
  return ((m[0][0]==1) && (m[0][1]==0) && (m[0][2]==0) &&
	  (m[1][0]==0) && (m[1][1]==1) && (m[1][2]==0) &&
	  (m[2][0]==0) && (m[2][1]==0) && (m[2][2]==1));
}

Matrix Matrix::abs()
{
  Matrix r;
  r.m[0][0] = fabs(m[0][0]);
  r.m[1][1] = fabs(m[1][1]);
  return r;
}

Matrix& Matrix::operator*=(double a)
{
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      m[i][j] *= a;

  return *this;
}

Matrix& Matrix::operator/=(double a)
{
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      m[i][j] /= a;

  return *this;
}

Matrix& Matrix::operator*=(const Matrix& a)
{
  Matrix r;
  for (int i=0; i<3; i++)
    for (int j=0; j<3; j++)
      r.m[i][j] = m[i][0]*a.m[0][j] + m[i][1]*a.m[1][j] + m[i][2]*a.m[2][j];

  return *this=r;
}

Matrix Matrix::invert()
{
  // Method of Row Reduction-- Calculus and Analylic Geometry, A-13

  Matrix r; // identy matrix

  Vector m0 = m[0];
  Vector m1 = m[1];
  Vector m2 = m[2];

  Vector r0 = r[0];
  Vector r1 = r[1];
  Vector r2 = r[2];

  // check for 0 in m[0], swap rows 0 and 1 if so.
  // this seems to be a problem only in the case of rotation of 90/270 degress

  if ((m0[0]==0) || 
      (m0[0]>0 && m0[0]<DBL_EPSILON) || 
      (m0[0]<0 && m0[0]>-DBL_EPSILON)) {

    Vector tm0 = m0;
    Vector tr0 = r0;
    m0 = m1;
    r0 = r1;
    m1 = tm0;
    r1 = tr0;
  }

  // scale first row by 1/m0[0]

  r0.div(m0[0]);
  m0.div(m0[0]);

  // zero out m1[0] and m2[0]

  r1.minus(mult(r0,m1[0]));
  m1.minus(mult(m0,m1[0]));
  r2.minus(mult(r0,m2[0]));
  m2.minus(mult(m0,m2[0]));
  
  // scale second row by 1/m1[1]

  r1.div(m1[1]);
  m1.div(m1[1]);

  // zero out m0[1] and m2[1]

  r0.minus(mult(r1,m0[1]));
  m0.minus(mult(m1,m0[1]));
  r2.minus(mult(r1,m2[1]));
  m2.minus(mult(m1,m2[1]));

  // scale third row by 1/m[2]

  r2.div(m2[2]);
  m2.div(m2[2]);

  // and zero out m0[2] and m1[2]

  r0.minus(mult(r2,m0[2]));
  m0.minus(mult(m2,m0[2]));
  r1.minus(mult(r2,m1[2]));
  m2.minus(mult(m2,m1[2]));

  return Matrix(r0,r1,r2);
}

Matrix Matrix::invert2()
{
  Matrix cc = this->cofactor();
  Matrix aa = cc.adjoint();
  double det = m[0][0]*aa.m[0][0] + m[0][1]*aa.m[1][0] + m[0][2]*aa.m[2][0];

  Matrix rr;
  for (int ii=0; ii<3; ii++ )
    for (int jj=0; jj<3; jj++)
      rr.m[ii][jj] = aa.m[ii][jj]/det;

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

Matrix Matrix::adjoint()
{
  Matrix rr;
  for (int ii=0; ii<3; ii++)
    for (int jj=0; jj<3; jj++)
      rr.m[jj][ii] = m[ii][jj];

  return rr;
}

Matrix operator*(const Matrix& a, double b)
{
  Matrix r=a;
  return r*=b;
}

Matrix operator/(const Matrix& a, double b)
{
  Matrix r=a;
  return r/=b;
}

Matrix operator*(const Matrix& a, const Matrix& b)
{
  Matrix r=a;
  return r*=b;
}

Vector Matrix::operator[](int i)
{
  return Vector(m[i]);
}

ostream& operator<<(ostream& s, const Matrix& m)
{
  s << ' ';
  for (int i=0; i<3; i++)
    for (int j=0; j<2; j++)
      s << m.m[i][j] << ' ';

  return s;
}

istream& operator>>(istream& s, Matrix& m)
{
  for (int i=0; i<3; i++ )
    for (int j=0; j<2; j++)
      s >> m.m[i][j];

  return s;
}

// Translate

Translate::Translate(double x, double y) : Matrix()
{
  m[2][0]=x;
  m[2][1]=y;
}

Translate::Translate(const Vector& v) : Matrix()
{
  m[2][0]=v.v[0];
  m[2][1]=v.v[1];
}

Translate::Translate(const Matrix& a) : Matrix()
{
  m[2][0] = a.m[2][0];
  m[2][1] = a.m[2][1];
}

Translate& Translate::operator=(const Matrix& a)
{
  m[2][0] = a.m[2][0];
  m[2][1] = a.m[2][1];
  return *this;
}

ostream& operator<<(ostream& s, const Translate& m)
{
  s << ' ' << m.m[2][0] << ' ' << m.m[2][1] << ' ';
  return s;
}

istream& operator>>(istream& s, Translate& m)
{
  s >> m.m[2][0] >> m.m[2][1];
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

  if ((m[0][0]>0 && m[0][0]<DBL_EPSILON) || 
      (m[0][0]<0 && m[0][0]>-DBL_EPSILON))
    m[0][0] = 0;

  if ((m[0][1]>0 && m[0][1]<DBL_EPSILON) ||
      (m[0][1]<0 && m[0][1]>-DBL_EPSILON))
    m[0][1] = 0;

  if ((m[1][0]>0 && m[1][0]<DBL_EPSILON) ||
      (m[1][0]<0 && m[1][0]>-DBL_EPSILON))
    m[1][0] = 0;

  if ((m[1][1]>0 && m[1][1]<DBL_EPSILON) ||
      (m[1][1]<0 && m[1][1]>-DBL_EPSILON))
    m[1][1] = 0;

}

Rotate::Rotate(double a, double b, double c, double d) : Matrix()
{
  m[0][0] = a;
  m[0][1] = b;
  m[1][0] = c;
  m[1][1] = d;
}

Rotate::Rotate(const Matrix& a) : Matrix()
{
  for (int i=0; i<2; i++)
    for (int j=0; j<2; j++)
      m[i][j] = a.m[i][j];
}

Rotate& Rotate::operator=(const Matrix& a)
{
  for (int i=0; i<2; i++)
    for (int j=0; j<2; j++)
      m[i][j] = a.m[i][j];

  return *this;
}

ostream& operator<<(ostream& s, const Rotate& m)
{
  s << ' ' << m.m[0][0] << ' ' << m.m[0][1]
    << ' ' << m.m[1][0] << ' ' << m.m[1][1] << ' ';
  return s;
}

istream& operator>>(istream& s, Rotate& m)
{
  s >> m.m[0][0] >> m.m[0][1] >> m.m[1][0] >> m.m[1][1];
  return s;
}

// Scale

Scale::Scale(double a) : Matrix()
{
  m[0][0]=a;
  m[1][1]=a;
}

Scale::Scale(double a, double b) : Matrix()
{
  m[0][0]=a;
  m[1][1]=b;
}

Scale::Scale(const Vector& v) : Matrix()
{
  m[0][0]=v.v[0];
  m[1][1]=v.v[1];
}

Scale::Scale(const Matrix& a) : Matrix()
{
  m[0][0] = a.m[0][0];
  m[1][1] = a.m[1][1];
}

Scale& Scale::operator=(const Matrix& a)
{
  m[0][0] = a.m[0][0];
  m[1][1] = a.m[1][1];
  return *this;
}

ostream& operator<<(ostream& s, const Scale& m)
{
  s << ' ' << m.m[0][0] << ' ' << m.m[1][1] << ' ';
  return s;
}

istream& operator>>(istream& s, Scale& m)
{
  s >> m.m[0][0] >> m.m[1][1];
  return s;
}

// Flip

FlipX::FlipX() : Matrix()
{
  m[0][0] = -1;
}

FlipY::FlipY() : Matrix()
{
  m[1][1] = -1;
}

FlipXY::FlipXY() : Matrix()
{
  m[0][0] = -1;
  m[1][1] = -1;
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

BBox::BBox(double w, double h)
{
  ll.v[0] = 0;
  ll.v[1] = 0;
  ur.v[0] = w;
  ur.v[1] = h;
}

BBox::BBox(const Vector& l, const Vector& h)
{
  // we want a 'positive' box

  ll.v[0] = l.v[0] < h.v[0] ? l.v[0] : h.v[0];
  ll.v[1] = l.v[1] < h.v[1] ? l.v[1] : h.v[1];
  ur.v[0] = l.v[0] < h.v[0] ? h.v[0] : l.v[0];
  ur.v[1] = l.v[1] < h.v[1] ? h.v[1] : l.v[1];
}

BBox::BBox(const Vector& v)
{
  ll = v;
  ur = v;
}

BBox& BBox::operator+=(const Vector& v)
{
  ll+=v;
  ur+=v;
  return *this;
}

BBox operator+(const BBox& b, const Vector& v)
{
  BBox r=b;
  r+=v;
  return r;
}

BBox& BBox::operator-=(const Vector& a)
{
  ll-=a;
  ur-=a;
  return *this;
}

BBox operator-(const BBox& b, const Vector& v)
{
  BBox r=b;
  r-=v;
  return r;
}

int BBox::isIn(const Vector& v) const
{
  if (v.v[0] < ll.v[0] || v.v[1] < ll.v[1] || v.v[0] > ur.v[0] || v.v[1] > ur.v[1])
    return 0;
  else
    return 1;
}

int BBox::isIn(const BBox& bb) const
{
  // return 0 if outside, > 0 if intersection
  // = 4 if inside
  BBox b = bb;
  return isIn(b.ll) + isIn(b.ur) + isIn(b.ul()) + isIn(b.lr());
}

int BBox::isEmpty() const
{
  Vector v = ur-ll;
  return (v[0]==0 && v[1]==0);
}

Vector BBox::center()
{
  return (ur-ll)/2 + ll;
}

Vector BBox::size()
{
  return ur - ll;
}

BBox& BBox::operator*=(const Matrix& m)
{
  ll *= m;
  ur *= m;
  return *this;
}

BBox operator*(const BBox& bb, const Matrix& m)
{
  BBox r = bb;
  r*=m;
  return r;
}

BBox& BBox::expand(double a)
{
  ll -= Vector(a,a);
  ur += Vector(a,a);
  return *this;
}

BBox& BBox::expand(const Vector& v)
{
  ll -= v;
  ur += v;
  return *this;
}

BBox& BBox::shrink(double a)
{
  ll += Vector(a,a);
  ur -= Vector(a,a);
  return *this;
}

BBox& BBox::shrink(const Vector& v)
{
  ll += v;
  ur -= v;
  return *this;
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

  // we are missing a case here! two bbox's that cross

  if (ab==0 && ba == 0) // outside each other
    return BBox();

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

ostream& operator<<(ostream& s, const BBox& b)
{
  s << b.ll << b.ur;
  return s;
}


