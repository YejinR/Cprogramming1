#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int row = 5;
	for (int i = 1; i <= row; i++) { 
		for (int j = 0; j < row - i; j++) {
			printf(" ");
		}
		for (int k = 0; k < 2 * i-1; k++) {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}