//3. num1이라는 숫자를 입력받아 50보다 작으면 num2는 0, 크면 100을 출력하는 프로그램을 만들어보자
//(조건 3항 연산자 이용)

#include <stdio.h>

int main(void)
{
	int num1 = 0, num2 = 0;

	printf("숫자를 입력하세요.: ");
	scanf_s("%d", &num1);
	num2 = (num1 < 50) ? 0 : 100;

	printf("num2: %d ", num2);

	return 0;
}