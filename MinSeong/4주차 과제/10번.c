#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main(void) {
	int num[9];
	int sum = 0;
	int excSum;
	int exc1;
	int exc2;
	int arr[7];

	for (int i = 0; i < 9; ++i) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < 9; ++i) {
		sum += num[i];
	}
	for (int i = 0; i < 8; ++i) {
		for (int j = 1; j < 9; ++j) {
			excSum = num[i] + num[j];
			if (sum - excSum == 100) {
				exc1 = num[i];
				exc2 = num[j];
				break;
			}
		}
	}
	// 정렬 전에 제외할 두 값을 배열에서 제거
	int k = 0;
	for (int i = 0; i < 9; ++i) {
		if (!(num[i] == exc1 || num[i] == exc2)) {
			arr[k++] = num[i];
		}
	}
	// 배열 정렬
	qsort(arr, 7, sizeof(int), compare);

	// 정렬된 배열 출력
	for (int i = 0; i < 7; ++i) {
		printf("%d\n", arr[i]);
	}

	return 0;
}