#pragma once
#ifndef __REAL_MATH_H__
#define __REAL_MATH_H__

/* ---------- headers */

/* ---------- constants */

/* ---------- definitions */

typedef float real;

union vector3d
{
	real n[3];
	struct {
		real i;
		real j;
		real k;
	};
};

typedef vector3d real_vector3d; // $todo compat

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

#endif // __REAL_MATH_H__
