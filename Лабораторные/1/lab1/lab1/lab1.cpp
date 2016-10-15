// Course: Programming technologies (ANSI C)
// Lab 1. Developing console application.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 04.09.2012
// Description: Program entry point.

#include <stdio.h>
#include <conio.h>

void main() {
	float f; char c;
	scanf("%f %c", &f, &c);
	printf("%f %c", f, c);
	getch();
}
