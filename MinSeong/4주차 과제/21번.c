#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swap_int(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

void swap_str(char** a, char** b) {
	char* temp = *a;
	*a = *b;
	*b = temp;
}

void bubble_sort(int* age, char** name, int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (age[j] > age[j + 1]) {
				swap_int(&age[j], &age[j + 1]);
				swap_str(&name[j], &name[j + 1]);
			}
		}
	}
}
int main(void) {
	int N;
	int* age;
	char** name;

	scanf("%d", &N);
	age = (int*)malloc(sizeof(int) * N);
	name = (char**)malloc(sizeof(char*) * N);
	for (int i = 0; i < N; i++) {
		name[i] = (char*)malloc(sizeof(char) * 101); // 이름 최대 길이를 100으로 가정하고 널 문자를 포함하여 101로 설정
	}

	for (int i = 0; i < N; i++) {
		scanf("%d %[^\n]", &age[i], name[i]); // 나이와 이름을 읽어옴
	}

	bubble_sort(age, name, N); // 나이와 이름을 같이 정렬

	for (int i = 0; i < N; i++) {
		printf("%d %s\n", age[i], name[i]); // 나이와 이름을 출력
	}
	// 메모리 해제
	for (int i = 0; i < N; i++) {
		free(name[i]);
	}
	free(name);
	free(age);

	return 0;
}
