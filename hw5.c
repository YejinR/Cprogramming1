#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Solve(int num) {
	if (num == 0) {
		return;
	}
	Solve(num / 2);
	printf("%d", num % 2); //나머지 출력
}

int main(void) {
	int num;
	printf("Please enter a number: ");
	scanf("%d", &num);
	if (num == 0) {
		printf("0\n");
	}
	else {
		Solve(num);
	}
	return 0;
}