// Course: Programming technologies (ANSI C)
// Lab 8. Strings.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 01.10.2012
// Description: Program entry point.

#include <stdio.h>
#include <string.h>

void main(){
	char a[80];
	char b[80];
	int n;
	char c;
	//problem 2
	printf("Problem 2. Contact n characters to another string. ");
	printf("Enter 2 strings and a number\n");
	scanf("%s %s %d", a, b, &n);
	strncat(a, b, n);
	printf("%s\n", a);
	//probles 5
	printf("Problem 5. Copy string into another string. ");
	printf("Enter 2 strings\n");
	scanf("%s %s", a, b);
	strcpy(a, b);
	printf("%s\n", a);
	//problem 8
	printf("Problem 8. Search the first enter character in the string. ");
	printf("Enter a string and a character\n");
	scanf("%s %c", a, &c);
	char * res;
	res = strchr(a, c);
	printf("%d\n", res - (char*)a + (char*)1); 
	//problem 11
	printf("Problem 11. Find a length of string which contains characters ");
	printf("from the other string. Enter 2 strings.\n");
	scanf("%s %s", a, b);
	char * temp = a;
	temp = strpbrk(a, b);
	n = strspn(temp, b);
	printf("%d\n", n);
	//problem 13
	printf("Problem 13. Parsing String. Enter 2 strings.\n");
	scanf("%s %s", a, b);
	temp = strtok(a, b);
	while(temp != NULL) {
		printf("%s\n", temp);
		temp = strtok(NULL, b);
	}
}