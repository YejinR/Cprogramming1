#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	double km;
	printf("km�� �Է��ϼ���: ");
	scanf("%lf", &km);
	double result = km / 1.609;
	printf("%.1f km�� %.1f miles�� �����ϴ�.\n", km, result);
	return 0;
}