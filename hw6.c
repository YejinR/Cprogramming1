#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int arr[5];
	int even[5], odd[5];
	int even_count = 0, odd_count = 0;
	printf("Please input five integers: ");
	for (int i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
	}

	for (int i = 0; i < 5; i++) {
		if (arr[i] % 2 == 0) {
			even[even_count++] = arr[i];
		}
		else {
			odd[odd_count++] = arr[i];
		}
	}

	printf("\nOdd numbers: ");
	for (int i = 0; i < odd_count; i++) {
		printf("%d ", odd[i]);
	}
	printf("\nEven numbers: ");
	for (int i = 0; i < even_count; i++) {
		printf("%d ", even[i]);
	}

	return 0;
}