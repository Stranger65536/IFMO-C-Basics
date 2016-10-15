// Course: Programming technologies (ANSI C)
// Lab 6. Pointers and dynamic memory.
// Student: Trofimov V.A. Group: 1511
// Teacher: Povishev V.V.
// Created 04.09.2012 Modified: 01.10.2012
// Description: Program entry point.


#include <stdio.h>
#include <stdlib.h>
#define N 4

void main() {
     char a1[4];
	 char *a;
	 a = a1;
	 int i;
	 a[0] = 'W'; a[1] = 'O'; a[2] = 'R'; a[3] = 'K';
	 for (i = 0; i < N; i++)
		printf("a[%d] = %c\n", i, *(a + i));
	 printf("\n");
	 char * b;
	 b = (char*) malloc(N * sizeof(char));
	 *(b + 0) = 'W'; *(b + 1) = 'O';
	 b[2] = 'R'; b[3] = 'K';
	 for (i = 0; i < N; i++) 
		 printf("b[%d] = %c\n", i, b[i]);
	 free(b);
}