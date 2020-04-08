// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __vector3d_h__
#define __vector3d_h__

#include <math.h>
#include <float.h>

#include <iostream>
using namespace std;

class Vector;
class Matrix;
class Matrix3d;

class Vector3d {
 public:
  double v[4];

 public:
  Vector3d() 
    {v[0]=0;v[1]=0;v[2]=0;v[3]=1;}
  Vector3d(double* f) 
    {v[0]=f[0]; v[1]=f[1]; v[2]=f[2]; v[3]=1;}
  Vector3d(double x, double y) 
    {v[0]=x;v[1]=y;v[2]=0;v[3]=1;}
  Vector3d(double x, double y, double z) 
    {v[0]=x;v[1]=y;v[2]=z;v[3]=1;}

  Vector3d(const Vector&);
  Vector3d(const Vector&, double);
  Vector3d& operator=(const Vector&);
  
  Vector3d(const Vector3d& a) 
    {v[0]=a.v[0];v[1]=a.v[1];v[2]=a.v[2];v[3]=a.v[3];}
  Vector3d& operator=(const Vector3d& a) 
    {v[0]=a.v[0];v[1]=a.v[1];v[2]=a.v[2];v[3]=a.v[3]; return *this;}

  const double& operator[](int i) const {return v[i];} // return element
  double& operator[](int i) {return v[i];} // return element
  double* vv() {return v;} // return vector

  Vector3d& operator+=(const Vector3d& a) // addition
    {v[0]+=a.v[0]; v[1]+=a.v[1]; v[2]+=a.v[2]; return *this;}
  Vector3d& operator-=(const Vector3d& a) // subtraction
    {v[0]-=a.v[0]; v[1]-=a.v[1]; v[2]-=a.v[2]; return *this;}
  Vector3d& operator*=(double f) // scalar multiply
    {v[0]*=f; v[1]*=f; v[2]*=f; return *this;}
  Vector3d& operator/=(double f) // scalar division
    {v[0]/=f; v[1]/=f; v[2]/=f; return *this;}
  Vector3d& operator*=(const Matrix3d&); // vector multiply

  Vector3d abs()
  {return Vector3d(fabs(v[0]),fabs(v[1]),fabs(v[2]));}
  double angleX() 
  {return atan2(v[2],v[1]);}
  double angleY() 
  {return atan2(v[0],v[2]);}
  double angleZ() 
  {return atan2(v[1],v[0]);}
  Vector3d ceil()
  {return Vector3d(::ceil(v[0]),::ceil(v[1]),::ceil(v[2]));}
  Vector3d floor()
  {return Vector3d(::floor(v[0]),::floor(v[1]),::floor(v[2]));}
  Vector3d invert()
  {return Vector3d(1/v[0],1/v[1],1/v[2]);}
  double length()
  {return sqrt(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]);}
  Vector3d round()
  {return Vector3d((int)(v[0]+.5),(int)(v[1]+.5),(int)(v[2]+.5));}
  Vector3d normalize()
  {double d = sqrt(v[0]*v[0]+v[1]*v[1]+v[2]*v[2]);
    return d ? Vector3d(v[0]/d,v[1]/d,v[2]/d) : Vector3d();}
  Vector3d project()
  {return (v[3]!=1) ? Vector3d(v[0]/v[3],v[1]/v[3],v[2]/v[3]) : *this;}
};
ostream& operator<<(ostream&, const Vector3d&);
istream& operator>>(istream&, Vector3d&);

inline Vector3d operator-(const Vector3d& a) 
{return Vector3d(-a.v[0],-a.v[1],-a.v[2]);}
inline Vector3d operator+(const Vector3d& a, const Vector3d& b)
{return Vector3d(a) +=b;}
inline Vector3d operator-(const Vector3d& a, const Vector3d& b)
{return Vector3d(a) -=b;}
inline Vector3d operator*(const Vector3d& a, double b) 
{return Vector3d(a) *=b;}
inline Vector3d operator/(const Vector3d& a, double b)
{return Vector3d(a) /=b;}
inline Vector3d operator*(const Vector3d& v, const Matrix3d& m)
{return Vector3d(v) *=m;}
inline double operator*(const Vector3d& a, const Vector3d& b) // dot product
{double r=0; r+=a.v[0]*b.v[0]; r+=a.v[1]*b.v[1]; r+=a.v[2]*b.v[2]; return r;}
inline Vector3d cross(Vector3d& a, Vector3d& b) // cross product
{return Vector3d(a[1]*b[2]-b[1]*a[2],a[2]*b[0]-b[2]*a[0],a[0]*b[1]-b[0]*a[1]);}

class Vertex3d {
public:
  Vector3d vector;

private:
  Vertex3d* next_;
  Vertex3d* previous_;

public:
  Vertex3d() 
    {next_=NULL; previous_=NULL;}
  Vertex3d(double x, double y, double z) 
    {vector=Vector3d(x,y,z); next_=NULL; previous_=NULL;}
  Vertex3d(const Vector3d& a) 
    {vector=a; next_=NULL; previous_=NULL;}

  Vertex3d(const Vertex3d& a) 
    {vector=a.vector; next_=a.next_; previous_=a.previous_;}
  Vertex3d& operator=(const Vertex3d& a)
    {vector=a.vector; next_=a.next_; previous_=a.previous_; return *this;}

  Vertex3d* next()
  {return next_;}
  Vertex3d* previous()
  {return previous_;}
  void setNext(Vertex3d* v)
  {next_ = v;}
  void setPrevious(Vertex3d* v)
  {previous_ = v;}
};
ostream& operator<<(ostream&, const Vertex3d&);

class Matrix3d {
 public:
  double m[4][4];

 public:
  Matrix3d()
    { m[0][0]=1; m[0][1]=0; m[0][2]=0; m[0][3]=0;
      m[1][0]=0; m[1][1]=1; m[1][2]=0; m[1][3]=0;
      m[2][0]=0; m[2][1]=0; m[2][2]=1; m[2][3]=0;
      m[3][0]=0; m[3][1]=0; m[3][2]=0; m[3][3]=1; }

  Matrix3d(double a, double b, double c,
	   double d, double e, double f,
	   double g, double h, double i,
	   double j, double k, double l)
    { m[0][0]=a; m[0][1]=b; m[0][2]=c; m[0][3]=0;
      m[1][0]=d; m[1][1]=e; m[1][2]=f; m[1][3]=0;
      m[2][0]=g; m[2][1]=h; m[2][2]=i; m[2][3]=0;
      m[3][0]=j; m[3][1]=k; m[3][2]=l; m[3][3]=1; }

  Matrix3d(Vector3d& x, Vector3d& y, Vector3d& z)
    { m[0][0]=x[0]; m[0][1]=y[0]; m[0][2]=z[0]; m[0][3]=0;
      m[1][0]=x[1]; m[1][1]=y[1]; m[1][2]=z[1]; m[1][3]=0;
      m[2][0]=x[2]; m[2][1]=y[2]; m[2][2]=z[2]; m[2][3]=0;
      m[3][0]=0;    m[3][1]=0;    m[3][2]=0;    m[3][3]=1; }

  Matrix3d(const Matrix3d& a)
    { m[0][0]=a.m[0][0];m[0][1]=a.m[0][1];m[0][2]=a.m[0][2];m[0][3]=a.m[0][3];
      m[1][0]=a.m[1][0];m[1][1]=a.m[1][1];m[1][2]=a.m[1][2];m[1][3]=a.m[1][3];
      m[2][0]=a.m[2][0];m[2][1]=a.m[2][1];m[2][2]=a.m[2][2];m[2][3]=a.m[2][3];
      m[3][0]=a.m[3][0];m[3][1]=a.m[3][1];m[3][2]=a.m[3][2];m[3][3]=a.m[3][3]; }

  Matrix3d& operator=(const Matrix3d& a)
    { m[0][0]=a.m[0][0];m[0][1]=a.m[0][1];m[0][2]=a.m[0][2];m[0][3]=a.m[0][3];
      m[1][0]=a.m[1][0];m[1][1]=a.m[1][1];m[1][2]=a.m[1][2];m[1][3]=a.m[1][3];
      m[2][0]=a.m[2][0];m[2][1]=a.m[2][1];m[2][2]=a.m[2][2];m[2][3]=a.m[2][3];
      m[3][0]=a.m[3][0];m[3][1]=a.m[3][1];m[3][2]=a.m[3][2];m[3][3]=a.m[3][3];
      return *this;}
  
  Matrix3d(const Matrix& a);
  double matrix(int i, int j)
  {return m[i][j];} // return element
  Vector3d operator[](int i)
  {return Vector3d(m[i]);} // return row
  double* mm()
  {return (double*)m;} // return matrix

  Matrix3d& identity()
    { m[0][0]=1; m[0][1]=0; m[0][2]=0; m[0][3]=0;
      m[1][0]=0; m[1][1]=1; m[1][2]=0; m[1][3]=0;
      m[2][0]=0; m[2][1]=0; m[2][2]=1; m[2][3]=0;
      m[3][0]=0; m[3][1]=0; m[3][2]=0; m[3][3]=1; return *this;}
  Matrix3d& operator*=(const Matrix3d&); // matrix multiply

  Matrix3d invert();
  Matrix3d cofactor();
  Matrix3d adjoint();
  double det();
  double det2d(double& a, double& b, double& c, 
	       double& d, double& e, double& f,
	       double& g, double& h, double& i)
  {return a*(e*i-f*h) - b*(d*i-f*g) + c*(d*h-e*g);}

  void dump();
};
ostream& operator<<(ostream&, const Matrix3d&);
istream& operator>>(istream&, Matrix3d&);

inline Matrix3d operator*(const Matrix3d& a, const Matrix3d& b)
{return Matrix3d(a) *= b;}
inline Vector3d& Vector3d::operator*=(const Matrix3d& m)
{
  double vv[4];
  double* mm = (double*)(m.m);
  vv[0] = v[0]*mm[0] + v[1]*mm[4] + v[2]*mm[8]  + v[3]*mm[12]; 
  vv[1] = v[0]*mm[1] + v[1]*mm[5] + v[2]*mm[9]  + v[3]*mm[13]; 
  vv[2] = v[0]*mm[2] + v[1]*mm[6] + v[2]*mm[10] + v[3]*mm[14];
  vv[3] = v[0]*mm[3] + v[1]*mm[7] + v[2]*mm[11] + v[3]*mm[15];
  v[0] = vv[0];
  v[1] = vv[1];
  v[2] = vv[2];
  v[3] = vv[3];
  return *this;
}

class Translate3d : public Matrix3d {
public:
  Translate3d() {};
  Translate3d(double x, double y, double z) 
    {m[3][0]=x; m[3][1]=y; m[3][2]=z;}
  Translate3d(const Vector3d& v) 
    {m[3][0]=v.v[0]; m[3][1]=v.v[1]; m[3][2]=v.v[2];}
  Translate3d(const Vector& v);
  Translate3d(const Vector& v, double z);
  Translate3d(const Matrix3d& a)
    {m[3][0] = a.m[3][0]; m[3][1] = a.m[3][1]; m[3][2] = a.m[3][2];}
};
ostream& operator<<(ostream&, const Translate3d&);
istream& operator>>(istream&, Translate3d&);

class Scale3d : public Matrix3d {
public:
  Scale3d() {};
  Scale3d(double a)
    {m[0][0]=a; m[1][1]=a; m[2][2]=a;}
  Scale3d(double a, double b)
    {m[0][0]=a; m[1][1]=a; m[2][2]=b;}
  Scale3d(double a, double b, double c)
    {m[0][0]=a; m[1][1]=b; m[2][2]=c;}
  Scale3d(const Vector& v);
  Scale3d(const Vector& v, double c);
  Scale3d(const Vector3d& v)
    {m[0][0]=v.v[0]; m[1][1]=v.v[1]; m[2][2]=v.v[2];}
  Scale3d(const Matrix3d& a) 
    {m[0][0] = a.m[0][0]; m[1][1] = a.m[1][1]; m[2][2] = a.m[2][2];}
};
ostream& operator<<(ostream&, const Scale3d&);
istream& operator>>(istream&, Scale3d&);

class FlipX3d : public Matrix3d {
public:
  FlipX3d() 
    {m[0][0] = -1;}
};

class FlipY3d : public Matrix3d {
public:
  FlipY3d() 
    {m[1][1] = -1;}
};

class FlipZ3d : public Matrix3d {
public:
  FlipZ3d() 
    {m[2][2] = -1;}
};

class FlipXY3d : public Matrix3d {
public:
  FlipXY3d() 
    {m[0][0] = -1; m[1][1] = -1;}
};

class FlipXYZ3d : public Matrix3d {
public:
  FlipXYZ3d() 
    {m[0][0] = -1; m[1][1] = -1; m[2][2] = -1;}
};

class RotateX3d : public Matrix3d {
public:
  RotateX3d()
    {};
  RotateX3d(double);
  RotateX3d(double a, double b, double c, double d)
    {m[1][1] = a; m[1][2] = b; m[2][1] = c; m[2][2] = d;}
};
ostream& operator<<(ostream&, const RotateX3d&);
istream& operator>>(istream&, RotateX3d&);

class RotateY3d : public Matrix3d {
public:
  RotateY3d()
    {};
  RotateY3d(double);
  RotateY3d(double a, double b, double c, double d)
    {m[0][0] = a; m[0][2] = b; m[2][0] = c; m[2][2] = d;}
};
ostream& operator<<(ostream&, const RotateY3d&);
istream& operator>>(istream&, RotateY3d&);

class RotateZ3d : public Matrix3d {
public:
  RotateZ3d()
    {};
  RotateZ3d(double);
  RotateZ3d(double a, double b, double c, double d)
    {m[0][0] = a; m[0][1] = b; m[1][0] = c; m[1][1] = d;}
};
ostream& operator<<(ostream&, const RotateZ3d&);
istream& operator>>(istream&, RotateZ3d&);

class Shear3d : public Matrix3d {
 public:
  Shear3d(double x, double y, double dist)
    {m[2][0] = -x/dist; m[2][1] = -y/dist;}
};

class Perspective3d : public Matrix3d {
 public:
  Perspective3d(double front, double back, double dist)
  { m[2][2] = back/(back-front); m[2][3] = 1; 
    m[3][2] = -front*back/(dist*(back-front)); m[3][3] = 0;}
};

class BBox3d {
 public:
  Vector3d ll;
  Vector3d ur;

 public:
  BBox3d()
    {}
  BBox3d(double w, double h, double d) 
    {ll.v[0]=0; ll.v[1]=0; ll.v[2]=0; ur.v[0]=w; ur.v[1]=h; ur.v[2]=d;}
  BBox3d(const Vector3d& v) 
    {ll=v; ur=v;}
  BBox3d(double, double, double, double, double, double);
  BBox3d(const Vector3d&, const Vector3d&);

  BBox3d(const BBox3d& a)
    {ll=a.ll; ur=a.ur;}
  BBox3d& operator=(const BBox3d& a)
    {ll=a.ll; ur=a.ur; return *this;}

  BBox3d& operator+=(const Vector3d& v) // addition
    {ll+=v; ur+=v; return *this;}
  BBox3d& operator-=(const Vector3d& a) // subtraction
    {ll-=a; ur-=a; return *this;}
  BBox3d& operator*=(const Matrix3d& m) // multiplication
    {ll*=m; ur*=m; return *this;} 

  double volume();
  Vector3d center() 
  {return (ur-ll)/2 + ll;}
  Vector3d size() 
  {return ur - ll;}
  int isEmpty() const 
  {Vector3d v = ur-ll; return (v[0]==0 && v[1]==0 && v[2]==0);}
  int isIn(const Vector3d&) const;

  BBox3d& expand(double a) 
    {ll-=Vector3d(a,a,a); ur+=Vector3d(a,a,a); return *this;}
  BBox3d& expand(const Vector3d& v) 
    {ll-=v; ur+=v; return *this;}
  BBox3d& shrink(double a) 
    {ll+=Vector3d(a,a,a); ur-=Vector3d(a,a,a); return *this;}
  BBox3d& shrink(const Vector3d& v) 
    {ll+=v; ur-=v; return *this;}
  // expand bbox3d to include vector3d
  BBox3d& bound(const Vector3d&);
};
ostream& operator<<(ostream&, const BBox3d&);

inline BBox3d operator+(const BBox3d& b, const Vector3d& v)
{return BBox3d(b) += v;}
inline BBox3d operator-(const BBox3d& b, const Vector3d& v)
{return BBox3d(b) -= v;}
inline BBox3d operator*(const BBox3d& b, const Matrix3d& m)
{return BBox3d(b) *= m;}

// WorldToView

Matrix3d WorldToView3d(const Vector3d& cop, 
		       const Vector3d& vpn, 
		       const Vector3d& vup);
Matrix3d WorldToView3d(const Vector3d& cop, 
		       double head, double pitch, double bank);
Matrix3d WorldToView3d(const Vector3d& cop, const Vector3d& vpn, double bank);

#endif




