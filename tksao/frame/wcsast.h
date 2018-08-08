// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "vector.h"
#include "vector3d.h"
#include "coord.h"

extern "C" {
#include "ast.h"
}

int wcsSystem(AstFrameSet* ast, Coord::CoordSystem sys);
int wcsSkyFrame(AstFrameSet* ast, Coord::SkyFrame sky);

Vector wcsTran(AstFrameSet*, const Vector&, int);
void wcsTran(AstFrameSet*, int, Vector*, int, Vector*);
Vector3d wcsTran(AstFrameSet*, const Vector3d&, int);

double wcsDistance(AstFrameSet*, const Vector&, const Vector&);
double wcsAngle(AstFrameSet*, const Vector&, const Vector&, const Vector&);
double wcsAxAngle(AstFrameSet*, const Vector&, const Vector&);
