#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double calculate_standard_deviation(double* arr, int size) {
    double sum = 0.0, mean, variance = 0.0;

    // 배열 요소의 합 계산
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // 평균 계산
    mean = sum / size;

    // 분산 계산
    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= size;

    // 표준편차 계산
    return sqrt(variance);
}



int main() {
    double numbers[5];
    int size = 5;

    // 사용자로부터 5개의 실수를 입력받음
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%lf", &numbers[i]);
    }

    // 표준편차 계산 및 출력
    double std_dev = calculate_standard_deviation(numbers, size);
    printf("Standard Deviation = %.3f\n", std_dev);

    return 0;
}
