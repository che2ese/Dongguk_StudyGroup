/*
10. 두 정수를 입력받아 차를 구하세요 (단, 큰 수에서 작은 수를 빼 항상 양수가 나오게 한다)
*/
#include <stdio.h>

int main(void) {
	int a, b;
	printf("두 수를 입력하세요:");
	scanf_s("%d %d", &a, &b);

	printf("%d", a >= b ? a - b : b - a);

	return 0;
}