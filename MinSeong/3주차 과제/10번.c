#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int money;
	int total = 0;
	int count;
	int sum = 0;
	int num = 0;

	scanf("%d", &money);
	scanf("%d", &count);

	for (int i = 0; i < count; i++) {
		scanf("%d%d", &sum, &num);
		total += sum * num;
	}
	money == total ? printf("Yes") : printf("No");

	return 0;
}