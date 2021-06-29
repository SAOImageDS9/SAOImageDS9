// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include <math.h>

#include "util.h"
#include "default.h"

GreyColorMap::GreyColorMap(Colorbar* p) : SAOColorMap(p)
{
  name_ = dupstr("grey");
  filename_ = dupstr("grey.sao");

  red.append(new LIColor(0,0));
  red.append(new LIColor(1,1));

  green.append(new LIColor(0,0));
  green.append(new LIColor(1,1));

  blue.append(new LIColor(0,0));
  blue.append(new LIColor(1,1));
}

RedColorMap::RedColorMap(Colorbar* p) : SAOColorMap(p)
{
  name_ = dupstr("red");
  filename_ = dupstr("red.sao");

  red.append(new LIColor(0,0));
  red.append(new LIColor(1,1));

  green.append(new LIColor(0,0));
  green.append(new LIColor(0,0));

  blue.append(new LIColor(0,0));
  blue.append(new LIColor(0,0));
}

GreenColorMap::GreenColorMap(Colorbar* p) : SAOColorMap(p)
{
  name_ = dupstr("green");
  filename_ = dupstr("green.sao");

  red.append(new LIColor(0,0));
  red.append(new LIColor(0,0));

  green.append(new LIColor(0,0));
  green.append(new LIColor(1,1));

  blue.append(new LIColor(0,0));
  blue.append(new LIColor(0,0));
}

BlueColorMap::BlueColorMap(Colorbar* p) : SAOColorMap(p)
{
  name_ = dupstr("blue");
  filename_ = dupstr("blue.sao");

  red.append(new LIColor(0,0));
  red.append(new LIColor(0,0));

  green.append(new LIColor(0,0));
  green.append(new LIColor(0,0));

  blue.append(new LIColor(0,0));
  blue.append(new LIColor(1,1));
}

AColorMap::AColorMap(Colorbar* p) : SAOColorMap(p)
{
  name_ = dupstr("a");
  filename_ = dupstr("a.sao");
  
  red.append(new LIColor(0,0));
  red.append(new LIColor(.25,0));
  red.append(new LIColor(.5,1));
  red.append(new LIColor(1,1));

  green.append(new LIColor(0,0));
  green.append(new LIColor(.25,1));
  green.append(new LIColor(.5,0));
  green.append(new LIColor(.77,0));
  green.append(new LIColor(1,1));

  blue.append(new LIColor(0,0));
  blue.append(new LIColor(.125,0));
  blue.append(new LIColor(.5,1));
  blue.append(new LIColor(.64,.5));
  blue.append(new LIColor(.77,0));
  blue.append(new LIColor(1,0));
}

BColorMap::BColorMap(Colorbar* p) : SAOColorMap(p)
{
  name_ = dupstr("b");
  filename_ = dupstr("b.sao");
  
  red.append(new LIColor(0,0));
  red.append(new LIColor(.25,0));
  red.append(new LIColor(.5,1));
  red.append(new LIColor(1,1));

  green.append(new LIColor(0,0));
  green.append(new LIColor(.5,0));
  green.append(new LIColor(.75,1));
  green.append(new LIColor(1,1));

  blue.append(new LIColor(0,0));
  blue.append(new LIColor(.25,1));
  blue.append(new LIColor(.5,0));
  blue.append(new LIColor(.75,0));
  blue.append(new LIColor(1,1));
}

BBColorMap::BBColorMap(Colorbar* p) : SAOColorMap(p)
{
  name_ = dupstr("bb");
  filename_ = dupstr("bb.sao");
  
  red.append(new LIColor(0,0));
  red.append(new LIColor(.5,1));
  red.append(new LIColor(1,1));

  green.append(new LIColor(0,0));
  green.append(new LIColor(.25,0));
  green.append(new LIColor(.75,1));
  green.append(new LIColor(1,1));

  blue.append(new LIColor(0,0));
  blue.append(new LIColor(.5,0));
  blue.append(new LIColor(1,1));
}

HEColorMap::HEColorMap(Colorbar* p) : SAOColorMap(p)
{
  name_ = dupstr("he");
  filename_ = dupstr("he.sao");
  
  red.append(new LIColor(0,0));
  red.append(new LIColor(.015,.5));
  red.append(new LIColor(.25,.5));
  red.append(new LIColor(.5,.75));
  red.append(new LIColor(1,1));

  green.append(new LIColor(0,0));
  green.append(new LIColor(.065,0));
  green.append(new LIColor(.125,.5));
  green.append(new LIColor(.25,.75));
  green.append(new LIColor(.5,.81));
  green.append(new LIColor(1,1));

  blue.append(new LIColor(0,0));
  blue.append(new LIColor(.015,.125));
  blue.append(new LIColor(.03,.375));
  blue.append(new LIColor(.065,.625));
  blue.append(new LIColor(.25,.25));
  blue.append(new LIColor(1,1));
}

I8ColorMap::I8ColorMap(Colorbar* p) : LUTColorMap(p)
{
  name_ = dupstr("i8");
  filename_ = dupstr("i8.lut");

  colors.append(new RGBColor(0,0,0));
  colors.append(new RGBColor(0,1,0));
  colors.append(new RGBColor(0,0,1));
  colors.append(new RGBColor(0,1,1));
  colors.append(new RGBColor(1,0,0));
  colors.append(new RGBColor(1,1,0));
  colors.append(new RGBColor(1,0,1));
  colors.append(new RGBColor(1,1,1));
}

AIPSColorMap::AIPSColorMap(Colorbar* p) : LUTColorMap(p)
{
  name_ = dupstr("aips0");
  filename_ = dupstr("aips0.lut");

  colors.append(new RGBColor(.196,.196,.196));
  colors.append(new RGBColor(.475,.000,.608));
  colors.append(new RGBColor(.000,.000,.785));
  colors.append(new RGBColor(.373,.655,.925));
  colors.append(new RGBColor(.000,.596,.000));
  colors.append(new RGBColor(.000,.965,.000));
  colors.append(new RGBColor(1.00,1.00,.000));
  colors.append(new RGBColor(1.00,.694,.000));
  colors.append(new RGBColor(1.00,.000,.000));
}

HeatColorMap::HeatColorMap(Colorbar* p) : SAOColorMap(p)
{
  name_ = dupstr("heat");
  filename_ = dupstr("heat.sao");

  red.append(new LIColor(0,0));
  red.append(new LIColor(.34,1));
  red.append(new LIColor(1,1));

  green.append(new LIColor(0,0));
  green.append(new LIColor(1,1));

  blue.append(new LIColor(0,0));
  blue.append(new LIColor(.65,0));
  blue.append(new LIColor(.98,1));
  blue.append(new LIColor(1,1));
}

CoolColorMap::CoolColorMap(Colorbar* p) : SAOColorMap(p)
{
  name_ = dupstr("cool");
  filename_ = dupstr("cool.sao");

  red.append(new LIColor(0,0));
  red.append(new LIColor(.29,0));
  red.append(new LIColor(.76,.1));
  red.append(new LIColor(1,1));

  green.append(new LIColor(0,0));
  green.append(new LIColor(.22,0));
  green.append(new LIColor(.96,1));
  green.append(new LIColor(1,1));

  blue.append(new LIColor(0,0));
  blue.append(new LIColor(.53,1));
  blue.append(new LIColor(1,1));
}

RainbowColorMap::RainbowColorMap(Colorbar* p) : SAOColorMap(p)
{
  name_ = dupstr("rainbow");
  filename_ = dupstr("rainbow.sao");

  red.append(new LIColor(0,1));
  red.append(new LIColor(.2,0));
  red.append(new LIColor(.6,0));
  red.append(new LIColor(.8,1));
  red.append(new LIColor(1,1));

  green.append(new LIColor(0,0));
  green.append(new LIColor(.2,0));
  green.append(new LIColor(.4,1));
  green.append(new LIColor(.8,1));
  green.append(new LIColor(1,0));

  blue.append(new LIColor(0,1));
  blue.append(new LIColor(.4,1));
  blue.append(new LIColor(.6,0));
  blue.append(new LIColor(1,0));
}

StandardColorMap::StandardColorMap(Colorbar* p) : SAOColorMap(p)
{
  name_ = dupstr("standard");
  filename_ = dupstr("standard.sao");

  red.append(new LIColor(0,0));
  red.append(new LIColor(.333,.3));
  red.append(new LIColor(.333,0));
  red.append(new LIColor(.666,.3));
  red.append(new LIColor(.666,.3));
  red.append(new LIColor(1,1));

  green.append(new LIColor(0,0));
  green.append(new LIColor(.333,.3));
  green.append(new LIColor(.333,.3));
  green.append(new LIColor(.666,1));
  green.append(new LIColor(.666,0));
  green.append(new LIColor(1,.3));

  blue.append(new LIColor(0,0));
  blue.append(new LIColor(.333,1));
  blue.append(new LIColor(.333,0));
  blue.append(new LIColor(.666,.3));
  blue.append(new LIColor(.666,0));
  blue.append(new LIColor(1,.3));
}

StaircaseColorMap::StaircaseColorMap(Colorbar* p) : LUTColorMap(p)
{
  name_ = dupstr("staircase");
  filename_ = dupstr("staircase.lut");

  for (int ii=1; ii<=5; ii++) {
    float kk = ii/5.;
    colors.append(new RGBColor(kk*.3,kk*.3,kk*1));
  }

  for (int ii=1; ii<=5; ii++) {
    float kk = ii/5.;
    colors.append(new RGBColor(kk*.3,kk*1,kk*.3));
  }

  for (int ii=1; ii<=5; ii++) {
    float kk = ii/5.;
    colors.append(new RGBColor(kk*1,kk*.3,kk*.3));
  }
}

ColorColorMap::ColorColorMap(Colorbar* p) : LUTColorMap(p)
{
  name_ = dupstr("color");
  filename_ = dupstr("color.lut");

  colors.append(new RGBColor(0,0,0));
  colors.append(new RGBColor(0.18431, 0.18431, 0.18431));
  colors.append(new RGBColor(0.37255, 0.37255, 0.37255));
  colors.append(new RGBColor(0.56078, 0.56078, 0.56078));
  colors.append(new RGBColor(0.74902, 0.74902, 0.74902));
  colors.append(new RGBColor(0.93725, 0.93725, 0.93725));
  colors.append(new RGBColor(0.00000, 0.18431, 0.93725));
  colors.append(new RGBColor(0.00000, 0.37255, 0.74902));
  colors.append(new RGBColor(0.00000, 0.49804, 0.49804));
  colors.append(new RGBColor(0.00000, 0.74902, 0.30980));
  colors.append(new RGBColor(0.00000, 0.93725, 0.00000));
  colors.append(new RGBColor(0.30980, 0.62353, 0.00000));
  colors.append(new RGBColor(0.49804, 0.49804, 0.00000));
  colors.append(new RGBColor(0.62353, 0.30980, 0.00000));
  colors.append(new RGBColor(0.93725, 0.00000, 0.00000));
  colors.append(new RGBColor(0.74902, 0.00000, 0.30980));
}

SLSColorMap::SLSColorMap(Colorbar* p) : LUTColorMap(p)
{
  name_ = dupstr("sls");
  filename_ = dupstr("sls.lut");

  colors.append(new RGBColor(0.000000, 0.000000, 0.000000));
  colors.append(new RGBColor(0.043442, 0.000000, 0.052883));
  colors.append(new RGBColor(0.086883, 0.000000, 0.105767));
  colors.append(new RGBColor(0.130325, 0.000000, 0.158650));
  colors.append(new RGBColor(0.173767, 0.000000, 0.211533));
  colors.append(new RGBColor(0.217208, 0.000000, 0.264417));
  colors.append(new RGBColor(0.260650, 0.000000, 0.317300));
  colors.append(new RGBColor(0.304092, 0.000000, 0.370183));
  colors.append(new RGBColor(0.347533, 0.000000, 0.423067));
  colors.append(new RGBColor(0.390975, 0.000000, 0.475950));
  colors.append(new RGBColor(0.434417, 0.000000, 0.528833));
  colors.append(new RGBColor(0.477858, 0.000000, 0.581717));
  colors.append(new RGBColor(0.521300, 0.000000, 0.634600));
  colors.append(new RGBColor(0.506742, 0.000000, 0.640217));
  colors.append(new RGBColor(0.492183, 0.000000, 0.645833));
  colors.append(new RGBColor(0.477625, 0.000000, 0.651450));
  colors.append(new RGBColor(0.463067, 0.000000, 0.657067));
  colors.append(new RGBColor(0.448508, 0.000000, 0.662683));
  colors.append(new RGBColor(0.433950, 0.000000, 0.668300));
  colors.append(new RGBColor(0.419392, 0.000000, 0.673917));
  colors.append(new RGBColor(0.404833, 0.000000, 0.679533));
  colors.append(new RGBColor(0.390275, 0.000000, 0.685150));
  colors.append(new RGBColor(0.375717, 0.000000, 0.690767));
  colors.append(new RGBColor(0.361158, 0.000000, 0.696383));
  colors.append(new RGBColor(0.346600, 0.000000, 0.702000));
  colors.append(new RGBColor(0.317717, 0.000000, 0.712192));
  colors.append(new RGBColor(0.288833, 0.000000, 0.722383));
  colors.append(new RGBColor(0.259950, 0.000000, 0.732575));
  colors.append(new RGBColor(0.231067, 0.000000, 0.742767));
  colors.append(new RGBColor(0.202183, 0.000000, 0.752958));
  colors.append(new RGBColor(0.173300, 0.000000, 0.763150));
  colors.append(new RGBColor(0.144417, 0.000000, 0.773342));
  colors.append(new RGBColor(0.115533, 0.000000, 0.783533));
  colors.append(new RGBColor(0.086650, 0.000000, 0.793725));
  colors.append(new RGBColor(0.057767, 0.000000, 0.803917));
  colors.append(new RGBColor(0.028883, 0.000000, 0.814108));
  colors.append(new RGBColor(0.000000, 0.000000, 0.824300));
  colors.append(new RGBColor(0.000000, 0.019817, 0.838942));
  colors.append(new RGBColor(0.000000, 0.039633, 0.853583));
  colors.append(new RGBColor(0.000000, 0.059450, 0.868225));
  colors.append(new RGBColor(0.000000, 0.079267, 0.882867));
  colors.append(new RGBColor(0.000000, 0.099083, 0.897508));
  colors.append(new RGBColor(0.000000, 0.118900, 0.912150));
  colors.append(new RGBColor(0.000000, 0.138717, 0.926792));
  colors.append(new RGBColor(0.000000, 0.158533, 0.941433));
  colors.append(new RGBColor(0.000000, 0.178350, 0.956075));
  colors.append(new RGBColor(0.000000, 0.198167, 0.970717));
  colors.append(new RGBColor(0.000000, 0.217983, 0.985358));
  colors.append(new RGBColor(0.000000, 0.237800, 1.000000));
  colors.append(new RGBColor(0.000000, 0.268533, 1.000000));
  colors.append(new RGBColor(0.000000, 0.299267, 1.000000));
  colors.append(new RGBColor(0.000000, 0.330000, 1.000000));
  colors.append(new RGBColor(0.000000, 0.360733, 1.000000));
  colors.append(new RGBColor(0.000000, 0.391467, 1.000000));
  colors.append(new RGBColor(0.000000, 0.422200, 1.000000));
  colors.append(new RGBColor(0.000000, 0.452933, 1.000000));
  colors.append(new RGBColor(0.000000, 0.483667, 1.000000));
  colors.append(new RGBColor(0.000000, 0.514400, 1.000000));
  colors.append(new RGBColor(0.000000, 0.545133, 1.000000));
  colors.append(new RGBColor(0.000000, 0.575867, 1.000000));
  colors.append(new RGBColor(0.000000, 0.606600, 1.000000));
  colors.append(new RGBColor(0.000000, 0.631733, 0.975300));
  colors.append(new RGBColor(0.000000, 0.656867, 0.950600));
  colors.append(new RGBColor(0.000000, 0.682000, 0.925900));
  colors.append(new RGBColor(0.000000, 0.707133, 0.901200));
  colors.append(new RGBColor(0.000000, 0.732267, 0.876500));
  colors.append(new RGBColor(0.000000, 0.757400, 0.851800));
  colors.append(new RGBColor(0.000000, 0.782533, 0.827100));
  colors.append(new RGBColor(0.000000, 0.807667, 0.802400));
  colors.append(new RGBColor(0.000000, 0.832800, 0.777700));
  colors.append(new RGBColor(0.000000, 0.857933, 0.753000));
  colors.append(new RGBColor(0.000000, 0.883067, 0.728300));
  colors.append(new RGBColor(0.000000, 0.908200, 0.703600));
  colors.append(new RGBColor(0.000000, 0.901908, 0.676675));
  colors.append(new RGBColor(0.000000, 0.895617, 0.649750));
  colors.append(new RGBColor(0.000000, 0.889325, 0.622825));
  colors.append(new RGBColor(0.000000, 0.883033, 0.595900));
  colors.append(new RGBColor(0.000000, 0.876742, 0.568975));
  colors.append(new RGBColor(0.000000, 0.870450, 0.542050));
  colors.append(new RGBColor(0.000000, 0.864158, 0.515125));
  colors.append(new RGBColor(0.000000, 0.857867, 0.488200));
  colors.append(new RGBColor(0.000000, 0.851575, 0.461275));
  colors.append(new RGBColor(0.000000, 0.845283, 0.434350));
  colors.append(new RGBColor(0.000000, 0.838992, 0.407425));
  colors.append(new RGBColor(0.000000, 0.832700, 0.380500));
  colors.append(new RGBColor(0.000000, 0.832308, 0.354858));
  colors.append(new RGBColor(0.000000, 0.831917, 0.329217));
  colors.append(new RGBColor(0.000000, 0.831525, 0.303575));
  colors.append(new RGBColor(0.000000, 0.831133, 0.277933));
  colors.append(new RGBColor(0.000000, 0.830742, 0.252292));
  colors.append(new RGBColor(0.000000, 0.830350, 0.226650));
  colors.append(new RGBColor(0.000000, 0.829958, 0.201008));
  colors.append(new RGBColor(0.000000, 0.829567, 0.175367));
  colors.append(new RGBColor(0.000000, 0.829175, 0.149725));
  colors.append(new RGBColor(0.000000, 0.828783, 0.124083));
  colors.append(new RGBColor(0.000000, 0.828392, 0.098442));
  colors.append(new RGBColor(0.000000, 0.828000, 0.072800));
  colors.append(new RGBColor(0.033167, 0.834167, 0.066733));
  colors.append(new RGBColor(0.066333, 0.840333, 0.060667));
  colors.append(new RGBColor(0.099500, 0.846500, 0.054600));
  colors.append(new RGBColor(0.132667, 0.852667, 0.048533));
  colors.append(new RGBColor(0.165833, 0.858833, 0.042467));
  colors.append(new RGBColor(0.199000, 0.865000, 0.036400));
  colors.append(new RGBColor(0.232167, 0.871167, 0.030333));
  colors.append(new RGBColor(0.265333, 0.877333, 0.024267));
  colors.append(new RGBColor(0.298500, 0.883500, 0.018200));
  colors.append(new RGBColor(0.331667, 0.889667, 0.012133));
  colors.append(new RGBColor(0.364833, 0.895833, 0.006067));
  colors.append(new RGBColor(0.398000, 0.902000, 0.000000));
  colors.append(new RGBColor(0.430950, 0.902000, 0.000000));
  colors.append(new RGBColor(0.463900, 0.902000, 0.000000));
  colors.append(new RGBColor(0.496850, 0.902000, 0.000000));
  colors.append(new RGBColor(0.529800, 0.902000, 0.000000));
  colors.append(new RGBColor(0.562750, 0.902000, 0.000000));
  colors.append(new RGBColor(0.595700, 0.902000, 0.000000));
  colors.append(new RGBColor(0.628650, 0.902000, 0.000000));
  colors.append(new RGBColor(0.661600, 0.902000, 0.000000));
  colors.append(new RGBColor(0.694550, 0.902000, 0.000000));
  colors.append(new RGBColor(0.727500, 0.902000, 0.000000));
  colors.append(new RGBColor(0.760450, 0.902000, 0.000000));
  colors.append(new RGBColor(0.793400, 0.902000, 0.000000));
  colors.append(new RGBColor(0.810617, 0.897133, 0.003983));
  colors.append(new RGBColor(0.827833, 0.892267, 0.007967));
  colors.append(new RGBColor(0.845050, 0.887400, 0.011950));
  colors.append(new RGBColor(0.862267, 0.882533, 0.015933));
  colors.append(new RGBColor(0.879483, 0.877667, 0.019917));
  colors.append(new RGBColor(0.896700, 0.872800, 0.023900));
  colors.append(new RGBColor(0.913917, 0.867933, 0.027883));
  colors.append(new RGBColor(0.931133, 0.863067, 0.031867));
  colors.append(new RGBColor(0.948350, 0.858200, 0.035850));
  colors.append(new RGBColor(0.965567, 0.853333, 0.039833));
  colors.append(new RGBColor(0.982783, 0.848467, 0.043817));
  colors.append(new RGBColor(1.000000, 0.843600, 0.047800));
  colors.append(new RGBColor(0.995725, 0.824892, 0.051600));
  colors.append(new RGBColor(0.991450, 0.806183, 0.055400));
  colors.append(new RGBColor(0.987175, 0.787475, 0.059200));
  colors.append(new RGBColor(0.982900, 0.768767, 0.063000));
  colors.append(new RGBColor(0.978625, 0.750058, 0.066800));
  colors.append(new RGBColor(0.974350, 0.731350, 0.070600));
  colors.append(new RGBColor(0.970075, 0.712642, 0.074400));
  colors.append(new RGBColor(0.965800, 0.693933, 0.078200));
  colors.append(new RGBColor(0.961525, 0.675225, 0.082000));
  colors.append(new RGBColor(0.957250, 0.656517, 0.085800));
  colors.append(new RGBColor(0.952975, 0.637808, 0.089600));
  colors.append(new RGBColor(0.948700, 0.619100, 0.093400));
  colors.append(new RGBColor(0.952975, 0.600408, 0.085617));
  colors.append(new RGBColor(0.957250, 0.581717, 0.077833));
  colors.append(new RGBColor(0.961525, 0.563025, 0.070050));
  colors.append(new RGBColor(0.965800, 0.544333, 0.062267));
  colors.append(new RGBColor(0.970075, 0.525642, 0.054483));
  colors.append(new RGBColor(0.974350, 0.506950, 0.046700));
  colors.append(new RGBColor(0.978625, 0.488258, 0.038917));
  colors.append(new RGBColor(0.982900, 0.469567, 0.031133));
  colors.append(new RGBColor(0.987175, 0.450875, 0.023350));
  colors.append(new RGBColor(0.991450, 0.432183, 0.015567));
  colors.append(new RGBColor(0.995725, 0.413492, 0.007783));
  colors.append(new RGBColor(1.000000, 0.394800, 0.000000));
  colors.append(new RGBColor(0.998342, 0.361900, 0.000000));
  colors.append(new RGBColor(0.996683, 0.329000, 0.000000));
  colors.append(new RGBColor(0.995025, 0.296100, 0.000000));
  colors.append(new RGBColor(0.993367, 0.263200, 0.000000));
  colors.append(new RGBColor(0.991708, 0.230300, 0.000000));
  colors.append(new RGBColor(0.990050, 0.197400, 0.000000));
  colors.append(new RGBColor(0.988392, 0.164500, 0.000000));
  colors.append(new RGBColor(0.986733, 0.131600, 0.000000));
  colors.append(new RGBColor(0.985075, 0.098700, 0.000000));
  colors.append(new RGBColor(0.983417, 0.065800, 0.000000));
  colors.append(new RGBColor(0.981758, 0.032900, 0.000000));
  colors.append(new RGBColor(0.980100, 0.000000, 0.000000));
  colors.append(new RGBColor(0.955925, 0.000000, 0.000000));
  colors.append(new RGBColor(0.931750, 0.000000, 0.000000));
  colors.append(new RGBColor(0.907575, 0.000000, 0.000000));
  colors.append(new RGBColor(0.883400, 0.000000, 0.000000));
  colors.append(new RGBColor(0.859225, 0.000000, 0.000000));
  colors.append(new RGBColor(0.835050, 0.000000, 0.000000));
  colors.append(new RGBColor(0.810875, 0.000000, 0.000000));
  colors.append(new RGBColor(0.786700, 0.000000, 0.000000));
  colors.append(new RGBColor(0.762525, 0.000000, 0.000000));
  colors.append(new RGBColor(0.738350, 0.000000, 0.000000));
  colors.append(new RGBColor(0.714175, 0.000000, 0.000000));
  colors.append(new RGBColor(0.690000, 0.000000, 0.000000));
  colors.append(new RGBColor(0.715833, 0.083333, 0.083333));
  colors.append(new RGBColor(0.741667, 0.166667, 0.166667));
  colors.append(new RGBColor(0.767500, 0.250000, 0.250000));
  colors.append(new RGBColor(0.793333, 0.333333, 0.333333));
  colors.append(new RGBColor(0.819167, 0.416667, 0.416667));
  colors.append(new RGBColor(0.845000, 0.500000, 0.500000));
  colors.append(new RGBColor(0.870833, 0.583333, 0.583333));
  colors.append(new RGBColor(0.896667, 0.666667, 0.666667));
  colors.append(new RGBColor(0.922500, 0.750000, 0.750000));
  colors.append(new RGBColor(0.948333, 0.833333, 0.833333));
  colors.append(new RGBColor(0.974167, 0.916667, 0.916667));
  colors.append(new RGBColor(1.000000, 1.000000, 1.000000));
  colors.append(new RGBColor(1.000000, 1.000000, 1.000000));
  colors.append(new RGBColor(1.000000, 1.000000, 1.000000));
  colors.append(new RGBColor(1.000000, 1.000000, 1.000000));
  colors.append(new RGBColor(1.000000, 1.000000, 1.000000));
  colors.append(new RGBColor(1.000000, 1.000000, 1.000000));
  colors.append(new RGBColor(1.000000, 1.000000, 1.000000));
  colors.append(new RGBColor(1.000000, 1.000000, 1.000000));
}

HSVColorMap::HSVColorMap(Colorbar* p) : LUTColorMap(p)
{
  /* HSV: hue varies uniformly from 270 to 360 and back to 270.
   * Value varies from zero to one using a cube root relation
   * which causes the value to approach 1.0 rapidly away from zero.
   * Saturation is zero near the endpoints, causing the curve
   * to range from black to white at the endpoints, but ranges
   * to 1.0 at the halfway point, causing nearly saturated colors
   * in the middle of the range.
   */

  name_ = dupstr("hsv");
  filename_ = dupstr("hsv.lut");
  int size = 200;

  for (int i=0; i<size; i++) {
    // generate in hsv
    float frac = 1.0 - ((float)i / (float)(size - 1));

    float h = frac * 360.0 + 270.0;
    float s = fabs(sin (frac * 3.1416));
    float v = pow((1.0 - frac), (1.0 / 3.0));

    // convert to rgb
    while (h >= 360.0)
      h -= 360.0;

    h /= 60.0;
    int ii = (int)h;
    float f = h - ii;
    float p = v * (1 - s);
    float q = v * (1 - s*f);
    float t = v * (1 - s * (1.0 - f));

    switch (ii) {
    case 0:
      colors.append(new RGBColor(v,t,p));
      break;
    case 1:
      colors.append(new RGBColor(q,v,p));
      break;
    case 2:
      colors.append(new RGBColor(p,v,t));
      break;
    case 3:
      colors.append(new RGBColor(p,q,v));
      break;
    case 4:
      colors.append(new RGBColor(t,p,v));
      break;
    case 5:
      colors.append(new RGBColor(v,p,q));
      break;
    }
  }
}
