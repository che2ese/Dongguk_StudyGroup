//6. 정수 5개를 입력받아 최소값을 구하는 프로그램을 작성하시오.
//(조건 3항 연산자 이용)

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;
	int min;
	printf("정수 5개를 입력하세요.: ");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);

	min = (a > b) ? b : a;
	min = (c > min) ? min : c;
	min = (d > min) ? min : d;
	min = (e > min) ? min : e;

	printf("최솟값은: %d", min);

	return 0;
}