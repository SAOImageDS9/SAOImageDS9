// Copyright (C) 1999-2018
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#include "vector.h"
#include "vector3d.h"
#include "coord.h"
#include "context.h"

extern "C" {
#include "ast.h"
}

int wcsSystem(AstFrameSet*, Coord::CoordSystem);
void wcsSkyFrame(AstFrameSet*, Coord::SkyFrame);
void wcsFormat(AstFrameSet*, int id, const char* format);

Vector wcsTran(Context*, AstFrameSet*, const Vector&, int);
void wcsTran(Context*, AstFrameSet*, int, Vector*, int, Vector*);
Vector3d wcsTran(Context*, AstFrameSet*, const Vector3d&, int);

double wcsDistance(AstFrameSet*, const Vector&, const Vector&);
double wcsAngle(AstFrameSet*, const Vector&, const Vector&, const Vector&);
double wcsAxAngle(AstFrameSet*, const Vector&, const Vector&);

AstWinMap* wcsWinMap(AstFrameSet*, Vector&, Vector&, Vector&);
AstCmpMap* wcsMatrixMap(AstFrameSet* ast, Matrix&);
