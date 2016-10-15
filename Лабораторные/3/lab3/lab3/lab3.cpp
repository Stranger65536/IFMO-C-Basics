// Course: Programming technologies (ANSI C)
// Lab 3. Representation of numbers in different number systems. Bitwise operations.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 08.09.2012
// Description: Program entry point.

#include <stdio.h>
#include <conio.h>

void main() {
	int a, b;
	scanf("%x", &a);
	printf("%d\n", a);
	printf("%o %o\n", a, a >> 3);
	printf("%o %o\n", a, ~a);
	scanf("%o", &b);
	printf("%o", a | b);
	getch();
}