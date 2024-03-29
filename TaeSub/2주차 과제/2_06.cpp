//6. 정수 5개를 입력받아 최소값을 구하는 프로그램을 작성하시오.
//(조건 3항 연산자 이용)
/* 
* if else 존나 쓰고 싶다...
* 최소값을 구하려면 일단 크기 판단을 해야겠지?
* 흠흠
* min
*/
#include<stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5;
	int min;
	scanf_s("%d %d %d %d %d", &num1, &num2, &num3, &num4, &num5);

	min = (num1 < num2) ? num1 : num2;
	min = (min < num3) ? min : num3;
	min = (min < num4) ? min : num4;
	min = (min < num5) ? min : num5;

	printf("최소값: %d", min);
	return 0;
}