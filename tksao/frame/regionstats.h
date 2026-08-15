// Copyright (C) 1999-2026
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __regionstats_h__
#define __regionstats_h__

#include <algorithm>
#include <cmath>
#include <map>
#include <string>
#include <vector>

#include "vector.h"

class FitsImage;
class Marker;

// Stable descriptions of statistics produced by the region statistics engine.
// The registry order is the display order used by future structured consumers.
// Labels are deliberately separate from keys so labels may change without
// breaking scripts or saved catalog state.
struct RegionStatisticField {
  enum DataType {FIELD_INTEGER, FIELD_REAL, FIELD_STRING};
  enum UnitKind {NO_UNIT, DATA_VALUE, DATA_ERROR, PIXEL_COUNT,
                 AREA, DATA_PER_AREA, IMAGE_COORDINATE, WCS_COORDINATE};

  const char* key;
  const char* label;
  DataType datatype;
  UnitKind unit;
  const char* description;
  const char* ucd;
  int precision;
};

class RegionStatisticValue {
public:
  enum Type {VALUE_MISSING, VALUE_INTEGER, VALUE_REAL, VALUE_STRING};

private:
  Type type_;
  long integer_;
  double real_;
  std::string string_;

public:
  RegionStatisticValue()
    : type_(VALUE_MISSING), integer_(0), real_(0) {}
  explicit RegionStatisticValue(long value)
    : type_(VALUE_INTEGER), integer_(value), real_(value) {}
  explicit RegionStatisticValue(double value)
    : type_(VALUE_REAL), integer_(0), real_(value) {}
  explicit RegionStatisticValue(const std::string& value)
    : type_(VALUE_STRING), integer_(0), real_(0), string_(value) {}

  Type type() const {return type_;}
  bool isMissing() const {return type_ == VALUE_MISSING;}
  long integerValue() const {return integer_;}
  double realValue() const
  {return type_ == VALUE_INTEGER ? double(integer_) : real_;}
  const std::string& stringValue() const {return string_;}
};

struct RegionStatisticComponent {
  int component;
  int hasCentroid;
  Vector centroid;
  std::map<std::string, RegionStatisticValue> values;

  explicit RegionStatisticComponent(int value=0)
    : component(value), hasCentroid(0) {}

  void set(const char* key, long value)
  {values[key] = RegionStatisticValue(value);}
  void set(const char* key, double value)
  {values[key] = RegionStatisticValue(value);}

  const RegionStatisticValue* find(const char* key) const
  {
    std::map<std::string, RegionStatisticValue>::const_iterator found =
      values.find(key);
    return found == values.end() ? NULL : &found->second;
  }
};

struct RegionStatisticResult {
  enum AreaUnit {PIXEL_AREA, ARCSEC_AREA, LINEAR_PIXEL_AREA};

  int regionId;
  std::string shape;
  Vector center;
  int background;
  int exclude;
  AreaUnit areaUnit;
  std::vector<RegionStatisticComponent> components;

  RegionStatisticResult()
    : regionId(0), background(0), exclude(0), areaUnit(PIXEL_AREA) {}
};

// Accumulates the primitive values needed by the current statistics. Keeping
// the samples provides the exact median used by the legacy Statistics report.
// merge() is intentionally part of the Phase 2 interface so Phase 4 workers can
// combine accumulators without changing the result model. Parallel reduction
// may introduce insignificant last-bit differences in floating-point sums.
class RegionStatisticAccumulator {
  double sum_;
  double sum2_;
  double min_;
  double max_;
  double weightedX_;
  double weightedY_;
  std::vector<double> samples_;

public:
  RegionStatisticAccumulator()
    : sum_(0), sum2_(0), min_(0), max_(0), weightedX_(0), weightedY_(0) {}

  void reserve(size_t size) {samples_.reserve(size);}

  void add(double value, const Vector& reference)
  {
    if (samples_.empty()) {
      min_ = value;
      max_ = value;
    }
    else {
      if (value < min_)
        min_ = value;
      if (value > max_)
        max_ = value;
    }

    sum_ += value;
    sum2_ += value*value;
    weightedX_ += reference[0]*value;
    weightedY_ += reference[1]*value;
    samples_.push_back(value);
  }

  void merge(const RegionStatisticAccumulator& other)
  {
    if (other.samples_.empty())
      return;

    if (samples_.empty()) {
      min_ = other.min_;
      max_ = other.max_;
    }
    else {
      if (other.min_ < min_)
        min_ = other.min_;
      if (other.max_ > max_)
        max_ = other.max_;
    }

    sum_ += other.sum_;
    sum2_ += other.sum2_;
    weightedX_ += other.weightedX_;
    weightedY_ += other.weightedY_;
    samples_.insert(samples_.end(), other.samples_.begin(),
                    other.samples_.end());
  }

  size_t count() const {return samples_.size();}
  double sum() const {return sum_;}
  double sum2() const {return sum2_;}
  double minimum() const {return min_;}
  double maximum() const {return max_;}
  int hasCentroid() const {return !samples_.empty() && sum_ > 0;}
  Vector centroid() const {return Vector(weightedX_/sum_,weightedY_/sum_);}

  double median()
  {
    if (samples_.empty())
      return 0;
    std::sort(samples_.begin(), samples_.end());
    return samples_[samples_.size()/2];
  }
};

struct RegionStatisticPixel {
  Vector reference;
  double value;

  RegionStatisticPixel(const Vector& ref, double val)
    : reference(ref), value(val) {}
};

// A batch job owns a duplicated marker used only as an immutable geometry
// snapshot. Pixel values and reference coordinates are copied on the main
// thread, so workers never touch FitsImage, frame, Tcl/Tk, or signal handlers.
struct RegionStatisticJob {
  enum GeometryKind {SIMPLE_GEOMETRY, ANNULUS_GEOMETRY, PANDA_GEOMETRY};

  size_t order;
  size_t workSize;
  GeometryKind geometryKind;
  int radialComponents;
  int angularComponents;
  Marker* geometry;
  Matrix backMatrix;
  FitsImage* image;
  RegionStatisticResult seed;
  std::vector<std::vector<RegionStatisticPixel> > pixelSets;
  std::vector<RegionStatisticAccumulator> accumulators;

  RegionStatisticJob();
  ~RegionStatisticJob();
  void measure();
};

const std::vector<RegionStatisticField>& regionStatisticFields();

#endif
