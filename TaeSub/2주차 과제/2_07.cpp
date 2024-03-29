//7. 정수 2개를 입력 받아 나누는 프로그램을 만든다.단 0으로 나누면 error라는 문자가 출력되게 한다.
//(조건 3항 연산자 이용)

#include<stdio.h>

int main(void)
{
	int num1, num2;
	float tot;

	scanf_s("%d %d", &num1, &num2);
	tot = (num1 / num2);
	(num2 == 0) ? printf("error\n") : printf("%.2f\n", tot);
	return 0;
	

}