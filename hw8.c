#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double calculate_standard_deviation(double* arr, int size) {
    double sum = 0.0, mean, variance = 0.0;

    // �迭 ����� �� ���
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }

    // ��� ���
    mean = sum / size;

    // �л� ���
    for (int i = 0; i < size; i++) {
        variance += pow(arr[i] - mean, 2);
    }
    variance /= size;

    // ǥ������ ���
    return sqrt(variance);
}



int main() {
    double numbers[5];
    int size = 5;

    // ����ڷκ��� 5���� �Ǽ��� �Է¹���
    printf("Enter 5 real numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%lf", &numbers[i]);
    }

    // ǥ������ ��� �� ���
    double std_dev = calculate_standard_deviation(numbers, size);
    printf("Standard Deviation = %.3f\n", std_dev);

    return 0;
}
