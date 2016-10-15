// Course: Programming technologies (ANSI C)
// Lab 9. Cycles.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 01.10.2012
// Description: Program entry point.


#include <stdio.h>
#include <ctype.h>

void main(){
	char a[80];
	int digit = 0;
	int lowcase = 0;
	int upcase = 0;
	double cash, addition;
	int month, count;
	printf("Enter a string:\n");
	scanf("%s", a);
	for(int i = 0; a[i] != '\0'; i++) {
		if (isdigit(a[i])) digit++;
		if (isupper(a[i])) upcase++;
		if (islower(a[i])) lowcase++;
	}
	printf("There are %d digits, %d lowcase and %d upcase characters\n\n", 
		digit, lowcase, upcase);
	printf("Enter the start cash, the year addition percent and count of month:\n");
	scanf("%lf %lf %d", &cash, &addition, &count);
	addition = cash * (addition/100.0);
	for(month = 1; month <= count; month++){
		cash += addition / 12.0;
		printf("Month %d: %lf\n", month, cash); 
	}
}