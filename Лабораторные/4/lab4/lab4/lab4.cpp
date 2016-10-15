// Course: Programming technologies (ANSI C)
// Lab 4. Logical operations.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 11.09.2012
// Description: Program entry point.

#include <stdio.h>
#include <conio.h>

void main() {
	int a;
	scanf("%d", &a);
	printf("%s\n", a >= -4 && a <= -1 ? "Popal" : "Ne popal");
	int b;
	scanf("%x", &b);
	printf("%x", (b & 3) >> 1);
	getch();
}