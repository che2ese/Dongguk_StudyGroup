#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swap(float* a, float* b) {
	float temp = *a;
	*a = *b;
	*b = temp;
}
void bubble_sort(float* arr, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}

int main(void) {
	int X, Y;
	int N;
	int* Xi;
	int* Yi;
	float* mul;

	scanf("%d%d", &X, &Y);
	scanf("%d", &N);
	Xi = (int*)malloc(sizeof(int) * N);
	Yi = (int*)malloc(sizeof(int) * N);
	mul = (float*)malloc(sizeof(float) * (N + 1));

	for (int i = 0; i < N; i++) {
		scanf("%d%d", &Xi[i], &Yi[i]);
	}
	for (int i = 0; i < N + 1; i++) {
		if (i == 0)
			mul[i] = (float)X / (float)Y * 1000;
		else
			mul[i] = ((float)Xi[i - 1] / (float)Yi[i - 1] * 1000.0);
	}
	
	bubble_sort(mul, N + 1);

	printf("%.2f", mul[0]);

	free(Xi);
	free(Yi);
	free(mul);
	return 0;
}