#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int N, M;
	char** arr;
	int count = 0;

	scanf("%d%d", &N, &M);
	arr = (char**)malloc(sizeof(char*) * N);
	for (int i = 0; i < N; i++) {
		arr[i] = (char*)malloc(sizeof(char) * M);
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%c", &arr[i][j]);
		}
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (arr[i][j] == arr[i][j + 1]) {
				count++;
			}
		}
	}
	printf("%d", count);
	for (int i = 0; i < N; i++) {
		free(arr[i]);
	}
	free(arr);
	return 0;
}