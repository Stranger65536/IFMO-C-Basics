// Course: Programming technologies (ANSI C)
// Lab 11. Headers.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 01.10.2012

#include "rhombus.h"

void main() {
	Rhombus romb;
	printf("Please enter 4 Points of rhombus like this: 'x1 y1 ..'\n");
	romb.CreateFromConsole();
	printf("Area of the rhombus: %f\n", romb.Area());
	printf("Perimeter of the rhombus: %f\n", romb.Perimeter());
}