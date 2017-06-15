// Copyright (C) 1999-2017
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __vector_h__
#define __vector_h__

#include <math.h>
#include <float.h>

#include <iostream>
using namespace std;

#include <tk.h>

class Vector;
class Vertex;
class Matrix;
class Translate;
class Rotate;
class Scale;
class FlipX;
class FlipY;
class FlipXY;
class BBox;

class Vector {
  friend class Matrix;
  friend class Translate;
  friend class Scale;
  friend class BBox;

 public:
  double v[3];

 public:
  Vector() {v[0]=0;v[1]=0;v[2]=1;} // constructor
  Vector(double* f) {v[0]=f[0];v[1]=f[1];v[2]=f[2];} // constructor
  Vector(double x, double y) {v[0]=x;v[1]=y;v[2]=1;} // constructor
  Vector(double x, double y, double z) {v[0]=x;v[1]=y;v[2]=z;} // constructor
  Vector(const Vector& a) {v[0]=a.v[0];v[1]=a.v[1];v[2]=a.v[2];} // copy
  Vector& operator=(const Vector& a) 
    {v[0]=a.v[0];v[1]=a.v[1];v[2]=a.v[2];return *this;}

  double& operator[](int i) {return v[i];}
  Vector abs();
  double length();
  double angle();
  double avg();
  double max();
  double min();
  Vector round();
  Vector floor();
  Vector ceil();
  Vector invert();
  Vector normalize();
  Vector TkCanvasPs(Tk_Canvas);

  friend Vector operator-(const Vector&);                // unary minus
  friend Vector operator*(const Vector&, const Matrix&); // vector/matrix mult
  friend double operator*(const Vector&, const Vector&); // dot product

  friend ostream& operator<<(ostream&, const Vector&);
  friend istream& operator>>(istream&, Vector&);

  Vector& operator+=(const Vector&);   // addition
  Vector& operator-=(const Vector&);   // subtraction
  Vector& operator*=(double);          // scalar multipy
  Vector& operator/=(double);          // scalar division
  Vector& operator*=(const Matrix&);   // vector multiply

  friend BBox intersect(const BBox&, const BBox&);

  // the following are not valid for 2D graphics:
  Vector& div(double);
  Vector& minus(const Vector&);
  friend Vector mult(const Vector&, double);
  Vector& operator*=(const Vector&);
  Vector& operator/=(const Vector&);
};

Vector operator+(const Vector&, const Vector&);    // addition
Vector operator-(const Vector&, const Vector&);    // subtration
Vector operator*(const Vector&, double);           // scalar multiply
Vector operator/(const Vector&, double);           // scalar division

Vector cross(Vector&, Vector&);

class Vertex {
public:
  Vector vector;

private:
  Vertex* next_;
  Vertex* previous_;

public:
  Vertex();
  Vertex(double, double);
  Vertex(const Vector&);
  
  Vertex* next() {return next_;}
  Vertex* previous() {return previous_;}

  void setNext(Vertex* v) {next_ = v;}
  void setPrevious(Vertex* v) {previous_ = v;}

  friend ostream& operator<<(ostream&, const Vertex&);
};

class Matrix {
  friend class Vector;
  friend class Translate;
  friend class Rotate;
  friend class Scale;

protected:
  double m[3][3];

public:
  Matrix();                               // constructor
  Matrix(const Vector&, const Vector&, const Vector&);      // constructor
  Matrix(double, double, double, double, double, double);
  Matrix(const Matrix&);                  // copy constructor
  Matrix& operator=(const Matrix&);       // assignment
  
  Vector operator[](int);                 // return row
  double matrix(int i, int j) {return m[i][j];} // return element
  Matrix& operator*=(double);             // scalar multiply
  Matrix& operator/=(double);             // scalar division
  Matrix& operator*=(const Matrix&);      // matrix multiply

  Matrix invert();                        // matrix inverse

  Matrix invert2();
  Matrix cofactor();
  Matrix adjoint();

  Matrix abs();                           // returns abs with no translation
  Matrix& identity();                        // sets to identity matrix;
  int isIdentity();

  double* mm() {return (double*)m;}

  friend Vector operator*(const Vector&, const Matrix&); // vector/matrix mult
  friend ostream& operator<<(ostream&, const Matrix&);
  friend istream& operator>>(istream&, Matrix&);
};

Matrix operator*(const Matrix&, double);           // scalar multiply
Matrix operator/(const Matrix&, double);           // scalar division
Matrix operator*(const Matrix&, const Matrix&);    // matrix multiply

class Translate : public Matrix {
public:
  Translate() {};                      // constructor
  Translate(double, double);           // constructor
  Translate(const Vector&);            // constructor
  Translate(const Matrix&);            // copy constructor
  Translate& operator=(const Matrix&); // assignment

  friend ostream& operator<<(ostream&, const Translate&);
  friend istream& operator>>(istream&, Translate&);
};

class Rotate : public Matrix {
public:
  Rotate() {};                         // constructor
  Rotate(double);                      // constructor
  Rotate(double, double, double, double); // constructor
  Rotate(const Matrix&);               // copy constructor
  Rotate& operator=(const Matrix&);    // assignment

  friend ostream& operator<<(ostream&, const Rotate&);
  friend istream& operator>>(istream&, Rotate&);
};

class Scale : public Matrix {
public:
  Scale() {};                          // constructor
  Scale(double);                       // constructor
  Scale(double, double);               // constructor
  Scale(const Vector&);                // constructor
  Scale(const Matrix&);                // copy constructor
  Scale& operator=(const Matrix&);     // assignment

  friend ostream& operator<<(ostream&, const Scale&);
  friend istream& operator>>(istream&, Scale&);
};

class FlipX : public Matrix {
public:
  FlipX();                             // constructor
};

class FlipY : public Matrix {
public:
  FlipY();                             // constructor
};

class FlipXY : public Matrix {
public:
  FlipXY();                            // constructor
};

class BBox {
public:
  Vector ll;
  Vector ur;

public:
  BBox() {}
  BBox(const Vector&, const Vector&);
  BBox(const Vector&);
  BBox(double, double);
  BBox(double, double, double, double);

  BBox& operator+=(const Vector&);   // addition
  BBox& operator-=(const Vector&);   // subtraction
  BBox& operator*=(const Matrix&);   // multiplication

  int isIn(const Vector&) const;
  int isIn(const BBox&) const;
  int isEmpty() const;
  Vector center();
  Vector size();
  Vector lr() {return Vector(ur[0],ll[1]);}
  Vector ul() {return Vector(ll[0],ur[1]);}
  BBox& expand(double);
  BBox& expand(const Vector&);
  BBox& shrink(double);
  BBox& shrink(const Vector&);
  BBox& bound(const Vector&);
  BBox& bound(BBox);

  friend ostream& operator<<(ostream&, const BBox&);
};

BBox operator+(const BBox&, const Vector&);    // addition
BBox operator-(const BBox&, const Vector&);    // subtraction
BBox operator*(const BBox&, const Matrix&);
BBox intersect(const BBox&, const BBox&);

#endif




