#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input;
	int a, b;

	scanf("%d", &input);
	for (int i = 0; i < input; ++i) {
		scanf("%d%d", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}