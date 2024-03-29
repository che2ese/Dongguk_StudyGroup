/* 4. 두 자연수 A와 B가 주어진다.
이때, A + B, A - B, A* B, A / B(몫), A% B(나머지)를 출력하는 프로그램을 작성하시오.
첫째 줄에 A + B, 둘째 줄에 A - B, 셋째 줄에 A* B, 넷째 줄에 A / B, 다섯째 줄에 A% B를 출력한다. */

#include <stdio.h>
#include <math.h>

int main(void) {
	int a, b;

	printf("두 수를 입력하세요 : ");
	scanf_s("%d %d", &a, &b);

	printf("두 수의 합 : %d\n", a + b);
	printf("두 수의 차 : %d\n", abs(a - b));
	printf("두 수의 곱 : %d\n", a * b);
	printf("두 수의 몫 : %d\n", a / b);
	printf("두 수의 나머지 : %d\n", a % b);

	return 0;
}