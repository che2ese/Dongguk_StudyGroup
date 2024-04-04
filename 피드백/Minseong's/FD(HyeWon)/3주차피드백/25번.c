#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int change, num = 0;
	int basket[100] = { 0, };
	int input1, input2;

	scanf("%d%d", &num, &change);
	for (int i = 0; i < num; ++i) {
		basket[i] = i + 1;
	}
	for (int i = 0; i < change; ++i) {
		scanf("%d%d", &input1, &input2);
		int tmp = basket[input1 - 1];
		basket[input1 - 1] = basket[input2 - 1];
		basket[input2 - 1] = tmp;
	}
	for (int i = 0; i < num; ++i) {
		printf("%d ", basket[i]);
	}
}