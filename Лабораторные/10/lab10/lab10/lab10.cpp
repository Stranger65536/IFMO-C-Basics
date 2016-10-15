// Course: Programming technologies (ANSI C)
// Lab 10. Functions.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 01.10.2012
// Description: Program entry point.

#include <stdio.h>
#include <stdlib.h>

int gcd (int a, int b) {
	return b ? gcd (b, a % b) : a;
}

int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}

char * toString(int a) {
	int b = a;
	char count = 1;
	while ((a /= 10) != 0) count++;
	char * res = (char *) malloc((count + 1) * sizeof(char));
	for(a = 0; a < count; a++) {
		res[count - a - 1] = (char)'0' + b % 10;
		b /= 10;
	}
	res[count] = 0;
	return res;
}

void main() {
	int a, b;
	printf("Enter 2 numbers:\n");
	scanf("%d %d", &a, &b);
	printf("Greatest common divisor: %d\n", gcd(a, b));
	printf("Least common multiple: %d\n\n", lcm(a, b));
	printf("Enter 1 number:\n");
	scanf("%d", &a);
	char * res = toString(a);
	printf("The string representation of this number: %s\n", res);
	free(res);
}