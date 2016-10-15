// Course: Programming technologies (ANSI C)
// Lab 11. Headers.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 01.10.2012

#ifndef _RHOMBUS_HEAD
#define _RHOMBUS_HEAD

#include <math.h>
#include <stdio.h>

struct Rhombus {
	float x1 ,y1;
	float x2 ,y2;
	float x3 ,y3;
	float x4 ,y4;
	void Create(float x1, float y1, float x2, float y2, 
				float x3, float y3, float x4, float y4);
	void CreateFromConsole();
	float Area();
	float Perimeter();
};
#endif