#include <stdio.h>

void main() {
	int i ,j;
	char arr[9] = {99, 88, 77, 66, 55, 44, 33, 22, 11};
	for(i = 0; i < 9; i++)
		printf("a[%d] = %d\n", i + 1, arr[i]);
	char a[2][2] = {{2, 5}, {2, 2}};
	char b[2][2] = {{1, 2}, {0, 1}};
	char c[2][2];
	for (i = 0; i < 2; i++) {
		for (j = 0; j < 2; j++) {
			c[i][j] = a[i][0] * b[0][j] + a[i][1] * b[1][j];
			printf("%d ", c[i][j]);
		}
		printf("\n");
	}
}