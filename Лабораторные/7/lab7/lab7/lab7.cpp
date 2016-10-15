// Course: Programming technologies (ANSI C)
// Lab 7. User data types.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 01.10.2012
// Description: Program entry point.

#include <stdio.h>
#include <math.h>

enum Styles{
	classic = 1,
	pop,
	rock,
	rap,
	newage,
	electronic
};

struct Triangle{

	struct Point{
		double x;
		double y;
	};

	Point A;
	Point B;
	Point C;

	double Perimeter(){
		double AB = sqrt(pow(B.x - A.x, 2) + pow(B.y - A.y, 2));
		double BC = sqrt(pow(C.x - B.x, 2) + pow(C.y - B.y, 2));
		double AC = sqrt(pow(C.x - A.x, 2) + pow(C.y - A.y, 2));
		return AB + BC + AC;
	}
};

union Printer{ 
	unsigned char value;
	struct Status{ 
		unsigned char isReady      : 1; // ... 0000000?
		unsigned char isEmptyToner : 1; // ... 000000?0
		unsigned char isDamaged    : 1; // ... 00000?00
		unsigned char isEmptyPaper : 1; // ... 0000?000
	} flags;
	int i;
};

void main() {
	printf("%d\n", rock);	
	struct Triangle newTriangle;
	newTriangle.A.x = 0; newTriangle.A.y = 0;
	newTriangle.B.x = 3; newTriangle.B.y = 0;
	newTriangle.C.x = 0; newTriangle.C.y = 4;
	printf("%lf\n", newTriangle.Perimeter());
	union Printer newPrinter;
	scanf("%X", &newPrinter.value);
	printf("Printer is ready: %s\n", newPrinter.flags.isReady ? "YES" : "NO");
	printf("Toner is empty: %s\n", newPrinter.flags.isEmptyToner ? "YES" : "NO");
	printf("Roller is damaged: %s\n", newPrinter.flags.isDamaged ? "YES" : "NO");
	printf("Paper is empty: %s\n", newPrinter.flags.isEmptyPaper ? "YES" : "NO");
}