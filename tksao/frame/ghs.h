// Copyright (C) 1999-2026
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

// Generalized Hyperbolic Stretch (GHS) transfer curve.
// Equations by D. Payne and M. Cranfield (ghsastro.co.uk); implemented here
// from the published equations.

#ifndef __ghs_h__
#define __ghs_h__

#include <math.h>

// Parameters. sp/lp/hp are in data units; NaN means auto
// (sp, lp -> low; hp -> high of the current clip limits)
struct GhsParams {
  double sf; // stretch factor, D = exp(sf)-1, sf=0 => identity
  double b;  // local intensity
  double sp; // symmetry point
  double lp; // protect shadows, [low,sp]
  double hp; // protect highlights, [sp,high]

  GhsParams() : sf(5), b(0), sp(NAN), lp(NAN), hp(NAN) {}

  static int same(double a, double b) {
    return (isnan(a) && isnan(b)) || a==b;
  }
  int operator==(const GhsParams& a) const {
    return sf==a.sf && b==a.b && same(sp,a.sp) && same(lp,a.lp) &&
      same(hp,a.hp);
  }
  int operator!=(const GhsParams& a) const {return !(*this==a);}
};

class GhsCurve {
 private:
  double D_;
  double b_;
  double sp_;
  double lp_;
  double hp_;
  int identity_;

  double t2lp_;   // T2(LP)
  double t2plp_;  // T2'(LP)
  double t3hp_;   // T3(HP)
  double t3php_;  // T3'(HP)
  double t1zero_; // T1(0)
  double norm_;   // T4(1) - T1(0)

  // base curve, x>=0
  double T(double x) const {
    double Dx = D_*x;
    if (b_ == -1)
      return log1p(Dx);
    if (b_ < 0)
      return -expm1((b_+1)/b_ * log1p(-b_*Dx)) / (D_*(b_+1));
    if (b_ == 0)
      return -expm1(-Dx);
    return -expm1(-log1p(b_*Dx)/b_);
  }

  // derivative of base curve, x>=0
  double Tp(double x) const {
    double Dx = D_*x;
    if (b_ == -1)
      return D_/(1+Dx);
    if (b_ < 0)
      return exp(log1p(-b_*Dx)/b_);
    if (b_ == 0)
      return D_*exp(-Dx);
    return D_*exp(-(1+b_)/b_ * log1p(b_*Dx));
  }

  // inverse of base curve, y>=0
  double InvT(double y) const {
    if (b_ == -1)
      return expm1(y)/D_;
    if (b_ < 0) {
      double aa = 1-(b_+1)*D_*y;
      if (aa < 0)
	aa = 0;
      return -expm1(b_/(b_+1) * log(aa)) / (D_*b_);
    }
    if (y >= 1)
      y = 1-1e-16;
    if (b_ == 0)
      return -log1p(-y)/D_;
    return expm1(-b_*log1p(-y))/(b_*D_);
  }

  // unnormalised piecewise curve
  double raw(double x) const {
    if (x < lp_)
      return t2plp_*(x-lp_) + t2lp_;
    if (x < sp_)
      return -T(sp_-x);
    if (x < hp_)
      return T(x-sp_);
    return t3php_*(x-hp_) + t3hp_;
  }

 public:
  // p in data units, normalised with the clip limits low/high
  GhsCurve(const GhsParams& p, double low, double high) {
    D_ = expm1(p.sf);
    b_ = p.b;

    double diff = high-low;
    double sp = 0;
    double lp = 0;
    double hp = 1;
    if (diff > 0 && isfinite(diff)) {
      if (isfinite(p.sp))
	sp = (p.sp-low)/diff;
      if (isfinite(p.lp))
	lp = (p.lp-low)/diff;
      if (isfinite(p.hp))
	hp = (p.hp-low)/diff;
    }

    sp_ = sp<0 ? 0 : sp>1 ? 1 : sp;
    lp_ = lp<0 ? 0 : lp>sp_ ? sp_ : lp;
    hp_ = hp<sp_ ? sp_ : hp>1 ? 1 : hp;

    identity_ = !(D_ > 0);
    if (identity_)
      return;

    t2lp_ = -T(sp_-lp_);
    t2plp_ = Tp(sp_-lp_);
    t3hp_ = T(hp_-sp_);
    t3php_ = Tp(hp_-sp_);
    t1zero_ = t2plp_*(0-lp_) + t2lp_;
    norm_ = (t3php_*(1-hp_) + t3hp_) - t1zero_;
    if (!(norm_ > 0) || !isfinite(norm_))
      identity_ = 1;
  }

  // x in [0,1] -> [0,1]
  double operator()(double x) const {
    if (identity_)
      return x;
    return (raw(x) - t1zero_)/norm_;
  }

  // For a lookup table of ss entries (entry ii <-> x = ii/ss) mapped onto
  // count colour cells, the first entry past cell kk, i.e. the first ii with
  // curve(ii/ss) >= (kk+1)/count. Lets tables be filled in runs with count
  // inverse evaluations instead of ss forward ones.
  int cellStop(int kk, int count, int ss) const {
    if (kk+1 >= count)
      return ss;
    int stop = (int)ceil(inverse(double(kk+1)/count) * ss);
    return stop>ss ? ss : stop<0 ? 0 : stop;
  }

  // y in [0,1] -> x in [0,1]
  double inverse(double y) const {
    if (identity_)
      return y;
    double yy = t1zero_ + y*norm_;
    double xx;
    if (yy < t2lp_)
      xx = lp_ + (yy-t2lp_)/t2plp_;
    else if (yy < 0)
      xx = sp_ - InvT(-yy);
    else if (yy < t3hp_)
      xx = sp_ + InvT(yy);
    else
      xx = hp_ + (yy-t3hp_)/t3php_;
    return xx<0 ? 0 : xx>1 ? 1 : xx;
  }
};

#endif
