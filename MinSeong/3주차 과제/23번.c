#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input;
	int num[100];
	int sameNum;
	int count = 0;

	scanf("%d", &input);
	for (int i = 0; i < input; ++i) {
		scanf("%d", &num[i]);
	}
	scanf("%d", &sameNum);
	
	for (int i = 0; i < input; ++i) {
		if (sameNum == num[i])
			count++;
	}
	printf("%d", count);

	return 0;
}