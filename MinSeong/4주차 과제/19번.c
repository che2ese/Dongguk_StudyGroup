#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int H, W;
	int* num;
	int** arr;

	scanf("%d%d", &H, &W);
	num = (int*)malloc(sizeof(int) * W);
	arr = (int**)malloc(sizeof(int*) * H);
	for (int i = 0; i < H; i++) {
		arr[i] = (int*)malloc(sizeof(int) * W);
	}

	for (int i = 0; i < W; ++i) {
		scanf("%d", &num[i]);
	}
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			arr[i][j] = 0;
		}
	}

	// 각 열의 최대 높이를 저장할 배열
	int* max_height = (int*)malloc(sizeof(int) * W);
	for (int i = 0; i < W; ++i) {
		max_height[i] = 0;
	}

	// 각 열의 최대 높이 계산
	for (int i = 0; i < W; ++i) {
		for (int j = 0; j < num[i]; ++j) {
			if (j + 1 > max_height[i]) {
				max_height[i] = j + 1;
			}
		}
	}

	// 빗물이 고이는 부분 표시
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			if (H - i <= max_height[j]) {
				arr[i][j] = 1;
			}
		}
	}
	int total_water = 0;
	for (int i = 0; i < W; ++i) {
		// 왼쪽에서 가장 높은 기둥의 높이 찾기
		int left_max = 0;
		for (int j = 0; j < i; ++j) {
			if (num[j] > left_max) {
				left_max = num[j];
			}
		}

		// 오른쪽에서 가장 높은 기둥의 높이 찾기
		int right_max = 0;
		for (int j = i + 1; j < W; ++j) {
			if (num[j] > right_max) {
				right_max = num[j];
			}
		}

		// 현재 열에서 고인 물의 양 계산하여 total_water에 더하기
		int min_height = (left_max < right_max) ? left_max : right_max;
		if (min_height > num[i]) {
			total_water += min_height - num[i];
		}
	}

	printf("%d\n", total_water);

	/*
	for (int i = 0; i < H; ++i) {
		for (int j = 0; j < W; ++j) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	*/

	free(num);
	for (int i = 0; i < H; i++) {
		free(arr[i]);
	}
	free(arr);
}