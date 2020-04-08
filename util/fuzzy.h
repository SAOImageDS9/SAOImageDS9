// Copyright (C) 1999-2020
// Smithsonian Astrophysical Observatory, Cambridge, MA, USA
// For conditions of distribution and use, see copyright notice in "copyright"

#ifndef __fuzzy_h__
#define __fuzzy_h__

#include <float.h>

inline void tzero(double* ff, const double epsilon= DBL_EPSILON)
{if (*ff>=-epsilon && *ff<=epsilon) *ff = 0;}

inline bool teq(const double f1, const double f2,
		const double epsilon= DBL_EPSILON)
{return f1-f2 >= -epsilon && f1-f2 <= epsilon;}

inline bool tlt(const double f1, const double f2,
		const double epsilon= DBL_EPSILON)
{return f1-f2 < -epsilon;}

inline bool tle(const double f1, const double f2,
		const double epsilon= DBL_EPSILON)
{return f1-f2 <= -epsilon;  }

inline bool tgt(const double f1, const double f2, 
		const double epsilon= DBL_EPSILON)
{return f1-f2 > epsilon;}

inline bool tge(const double f1, const double f2, 
		const double epsilon= DBL_EPSILON)
{return f1-f2 >= epsilon;}

#endif
