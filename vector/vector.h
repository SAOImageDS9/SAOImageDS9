// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __vector_h__
#define __vector_h__

#include <math.h>
#include <float.h>

#include <iostream>
using namespace std;

class Vector3d;
class Matrix;
class BBox;

class Vector {
 public:
  static int separator;
  static int unit;

  double v[3];

 public:
  Vector() 
    {v[0]=0; v[1]=0; v[2]=1;}
  Vector(double* f) 
    {v[0]=f[0]; v[1]=f[1]; v[2]=1;}
  Vector(double x, double y) 
    {v[0]=x; v[1]=y; v[2]=1;}

  Vector(const Vector& a) 
    {v[0]=a.v[0]; v[1]=a.v[1]; v[2]=a.v[2];}
  Vector& operator=(const Vector& a)
    {v[0]=a.v[0]; v[1]=a.v[1]; v[2]=a.v[2]; return *this;}

  Vector(const Vector3d&);
  Vector& operator=(const Vector3d&);

  const double& operator[](int i) const {return v[i];} // return element
  double& operator[](int i) {return v[i];} // return element
  double* vv() {return v;} // return vector

  Vector& origin()
    {v[0]=0; v[1]=0; v[2]=1; return *this;}

  Vector& operator+=(const Vector& a) // addition
    {v[0]+=a.v[0]; v[1]+=a.v[1]; return *this;}
  Vector& operator-=(const Vector& a) // subtraction
    {v[0]-=a.v[0]; v[1]-=a.v[1]; return *this;}
  Vector& operator*=(double f) // scalar multipy
    {v[0]*=f; v[1]*=f; return *this;}
  Vector& operator/=(double f) // scalar division
    {v[0]/=f; v[1]/=f; return *this;}
  Vector& operator*=(const Matrix& m); // vector multipy

  Vector abs() 
  {return Vector(fabs(v[0]),fabs(v[1]));}
  double angle() 
  {return atan2(v[1],v[0]);}
  Vector ceil() 
  {return Vector(::ceil(v[0]),::ceil(v[1]));}
  Vector floor() 
  {return Vector(::floor(v[0]),::floor(v[1]));}
  Vector invert() 
  {return Vector(1/v[0],1/v[1]);}
  double length() 
  {return sqrt(v[0]*v[0]+v[1]*v[1]);}
  double area()
  {return v[0]*v[1];}
  Vector round() 
  {return Vector((int)(v[0]+.5),(int)(v[1]+.5));}
  Vector normalize() 
  {double d = sqrt(v[0]*v[0]+v[1]*v[1]);
    return d ? Vector(v[0]/d,v[1]/d) : Vector();}

  // restrict vector by bbox
  Vector& clip(const BBox&);
};

// Vector separator(int)

struct _Setseparator {int _M_n;};
inline _Setseparator setseparator(int __n)
{
  _Setseparator __x;
  __x._M_n = __n;
  return __x;
}

template<class _CharT, class _Traits>
  inline basic_ostream<_CharT,_Traits>& 
  operator<<(basic_ostream<_CharT,_Traits>& __os, _Setseparator __f)
{ 
  __os.iword(Vector::separator) = __f._M_n;
  return __os; 
}

// Vector unit(int)

struct _Setunit {int _M_n;};
inline _Setunit setunit(int __n)
{
  _Setunit __x;
  __x._M_n = __n;
  return __x;
}

template<class _CharT, class _Traits>
  inline basic_ostream<_CharT,_Traits>& 
  operator<<(basic_ostream<_CharT,_Traits>& __os, _Setunit __f)
{ 
  __os.iword(Vector::unit) = __f._M_n;
  return __os; 
}

ostream& operator<<(ostream&, const Vector&);
istream& operator>>(istream&, Vector&);

inline Vector operator-(const Vector& a)
{return Vector(-a.v[0],-a.v[1]);}
inline Vector operator+(const Vector& a, const Vector& b) 
{return Vector(a) +=b;}
inline Vector operator-(const Vector& a, const Vector& b) 
{return Vector(a) -=b;}
inline Vector operator*(const Vector& a, double b)
{return Vector(a) *=b;}
inline Vector operator/(const Vector& a, double b)
{return Vector(a) /=b;}
inline Vector operator*(const Vector& v, const Matrix& m) 
{return Vector(v) *=m;}
inline double operator*(const Vector& a, const Vector& b) // dot product
{double r =0; r+=a.v[0]*b.v[0]; r+=a.v[1]*b.v[1]; return r;}

class Vertex {
public:
  Vector vector;

private:
  Vertex* next_;
  Vertex* previous_;

public:
  Vertex() 
    {next_=NULL; previous_=NULL;}
  Vertex(double x, double y) 
    {vector=Vector(x,y); next_=NULL; previous_=NULL;}
  Vertex(const Vector& a) 
    {vector=a; next_=NULL; previous_=NULL;}

  Vertex(const Vertex& a) 
    {vector=a.vector; next_=a.next_; previous_=a.previous_;}
  Vertex& operator=(const Vertex& a)
    {vector=a.vector; next_=a.next_; previous_=a.previous_; return *this;}
  
  Vertex* next() 
  {return next_;}
  Vertex* previous()
  {return previous_;}
  void setNext(Vertex* v)
  {next_=v;}
  void setPrevious(Vertex* v)
  {previous_=v;}
};
ostream& operator<<(ostream&, const Vertex&);

class Matrix {
 public:
  double m[3][3];

 public:
  Matrix()
    { m[0][0]=1; m[0][1]=0; m[0][2]=0; 
      m[1][0]=0; m[1][1]=1; m[1][2]=0; 
      m[2][0]=0; m[2][1]=0; m[2][2]=1;}
  Matrix(double a, double b, 
	 double c, double d, 
	 double e, double f)
    { m[0][0]=a; m[0][1]=b; m[0][2]=0; 
      m[1][0]=c; m[1][1]=d; m[1][2]=0; 
      m[2][0]=e; m[2][1]=f; m[2][2]=1;}
  Matrix(double a, double b, double c, 
	 double d, double e, double f, 
	 double g, double h, double i)
    { m[0][0]=a; m[0][1]=b; m[0][2]=c; 
      m[1][0]=d; m[1][1]=e; m[1][2]=f; 
      m[2][0]=g; m[2][1]=h; m[2][2]=i;}

  Matrix(const Matrix& a)
    { m[0][0]=a.m[0][0]; m[0][1]=a.m[0][1]; m[0][2]=a.m[0][2]; 
      m[1][0]=a.m[1][0]; m[1][1]=a.m[1][1]; m[1][2]=a.m[1][2]; 
      m[2][0]=a.m[2][0]; m[2][1]=a.m[2][1]; m[2][2]=a.m[2][2];}
  Matrix& operator=(const Matrix& a)
    { m[0][0]=a.m[0][0]; m[0][1]=a.m[0][1]; m[0][2]=a.m[0][2]; 
      m[1][0]=a.m[1][0]; m[1][1]=a.m[1][1]; m[1][2]=a.m[1][2]; 
      m[2][0]=a.m[2][0]; m[2][1]=a.m[2][1]; m[2][2]=a.m[2][2]; return *this;}
  
  double matrix(int i, int j) // return element
  {return m[i][j];}
  Vector operator[](int i) // return row
  {return Vector(m[i]);}
  double* mm() const // return matrix
  {return (double*)m;}

  Matrix& identity()
    { m[0][0]=1; m[0][1]=0; m[0][2]=0; 
      m[1][0]=0; m[1][1]=1; m[1][2]=0; 
      m[2][0]=0; m[2][1]=0; m[2][2]=1; return *this;}
  Matrix& operator*=(const Matrix&); // matrix multiply

  Matrix invert();
  Matrix cofactor();
  Matrix adjoint();
  double det();
};
ostream& operator<<(ostream&, const Matrix&);
istream& operator>>(istream&, Matrix&);

inline Matrix operator*(const Matrix& a, const Matrix& b) 
{return Matrix(a) *= b;}
inline Vector& Vector::operator*=(const Matrix& m)
{
  double vv[3];
  double* mm = (double*)(m.m);
  vv[0] = v[0]*mm[0] + v[1]*mm[3] + v[2]*mm[6]; 
  vv[1] = v[0]*mm[1] + v[1]*mm[4] + v[2]*mm[7]; 
  vv[2] = v[0]*mm[2] + v[1]*mm[5] + v[2]*mm[8];
  v[0] = vv[0];
  v[1] = vv[1];
  v[2] = vv[2];
  return *this;
}

class Translate : public Matrix {
public:
  Translate() 
    {};
  Translate(double x, double y) 
    {m[2][0]=x; m[2][1]=y;}
  Translate(const Vector& v) 
    {m[2][0]=v.v[0]; m[2][1]=v.v[1];}
  Translate(const Matrix& a) 
    {m[2][0] = a.m[2][0]; m[2][1] = a.m[2][1];}
};
ostream& operator<<(ostream&, const Translate&);
istream& operator>>(istream&, Translate&);

class Scale : public Matrix {
public:
  Scale() 
    {};
  Scale(double a) 
    {m[0][0]=a; m[1][1]=a;}
  Scale(double a, double b) 
    {m[0][0]=a; m[1][1]=b;}
  Scale(const Vector& v) 
    {m[0][0]=v.v[0]; m[1][1]=v.v[1];}
  Scale(const Matrix& a) 
    {m[0][0] = a.m[0][0]; m[1][1] = a.m[1][1];}
};
ostream& operator<<(ostream&, const Scale&);
istream& operator>>(istream&, Scale&);

class FlipX : public Matrix {
public:
  FlipX() 
    {m[0][0] = -1;}
};

class FlipY : public Matrix {
public:
  FlipY() 
    {m[1][1] = -1;}
};

class FlipXY : public Matrix {
public:
  FlipXY() 
    {m[0][0] = -1; m[1][1] = -1;}
};

class Rotate : public Matrix {
public:
  Rotate() 
    {};
  Rotate(double);
  Rotate(double a, double b, double c, double d)
    {m[0][0] = a; m[0][1] = b; m[1][0] = c; m[1][1] = d;}
  Rotate(const Matrix& a)
    { m[0][0]=a.m[0][0]; m[0][1]=a.m[0][1]; 
      m[1][0]=a.m[1][0]; m[1][1]=a.m[1][1];}
};
ostream& operator<<(ostream&, const Rotate&);
istream& operator>>(istream&, Rotate&);

class BBox {
public:
  Vector ll;
  Vector ur;

public:
  BBox() 
    {}
  BBox(double w, double h) 
    {ll.v[0] = 0; ll.v[1] = 0; ur.v[0] = w; ur.v[1] = h;}
  BBox(const Vector& v) 
    {ll=v; ur=v;}
  BBox(double, double, double, double);
  BBox(const Vector&, const Vector&);

  BBox(const BBox& a)
    {ll=a.ll; ur=a.ur;}
  BBox& operator=(const BBox& a)
    {ll=a.ll; ur=a.ur; return *this;}

  Vector lr() {return Vector(ur[0],ll[1]);}
  Vector ul() {return Vector(ll[0],ur[1]);}

  BBox& operator+=(const Vector& v) // addition
    {ll+=v; ur+=v; return *this;}
  BBox& operator-=(const Vector& a) // subtraction
    {ll-=a; ur-=a; return *this;}
  BBox& operator*=(const Matrix& m) // multiply
    {ll*=m; ur*=m; return *this;}

  Vector center() 
  {return (ur-ll)/2 + ll;}
  Vector size() 
  {return ur - ll;}
  int isEmpty() const 
  {Vector v = ur-ll; return (v[0]==0 && v[1]==0);}
  int isIn(const Vector&) const;
  int isIn(const BBox&) const;

  BBox& expand(double a) 
    {ll-=Vector(a,a); ur+=Vector(a,a); return *this;}
  BBox& expand(const Vector& v) 
    {ll-=v; ur+=v; return *this;}
  BBox& shrink(double a) 
    {ll+=Vector(a,a); ur-=Vector(a,a); return *this;}
  BBox& shrink(const Vector& v) 
    {ll+=v; ur-=v; return *this;}
  BBox& bound(BBox);
  BBox& bound(const Vector&);
};
ostream& operator<<(ostream&, const BBox&);

inline BBox operator+(const BBox& b, const Vector& v) {return BBox(b) += v;}
inline BBox operator-(const BBox& b, const Vector& v) {return BBox(b) -= v;}
inline BBox operator*(const BBox& b, const Matrix& m) {return BBox(b) *= m;}

BBox intersect(const BBox&, const BBox&);

// clip line to box from origin to width,height
int clip(Vector*, Vector*, int, int);
#endif




