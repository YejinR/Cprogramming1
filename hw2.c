#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double km;
	printf("km를 입력하세요: ");
	scanf("%lf", &km);
	double result = km / 1.609;
	printf("%.1f km는 %.1f miles과 동일하다.\n", km, result);
	return 0;
}