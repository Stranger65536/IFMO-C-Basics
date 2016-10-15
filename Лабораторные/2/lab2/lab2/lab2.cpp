// Course: Programming technologies (ANSI C)
// Lab 2. Calculating value of the function in point.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 08.09.2012
// Description: Program entry point.


#include <stdio.h>
#include <math.h>
#include <conio.h>

double z1(double x) {
	return sqrt(2 * x + 2 * sqrt(x * x - 4)) / (sqrt(x * x - 4) + x + 2);
}

double z2(double x) {
	return 1 / sqrt(x + 2);
}

void main() {
	double a, b;
	scanf("%lf %lf", &a, &b);
	printf("%lf %lf", z1(a), z2(b));
	getch();
}
