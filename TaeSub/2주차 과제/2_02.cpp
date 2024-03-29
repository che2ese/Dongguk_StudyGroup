//2. 승민이는 전과목의 평균을 내는 프로그램을 만들려고 한다.
//총 5과목이며 각각의 점수를 입력받아 평균을 내는 프로그램을 만들어보자
#include<stdio.h>

int main(void)
{
	int num1, num2, num3, num4, num5;
	float tot;

	
	printf("과목1번 성적: ");
	scanf_s("%d", &num1);

	printf("과목2번 성적: ");
	scanf_s("%d", &num2);

	printf("과목3번 성적: ");
	scanf_s("%d", &num3);

	printf("과목4번 성적: ");
	scanf_s("%d", &num4);

	printf("과목5번 성적: ");
	scanf_s("%d", &num5);

	tot = (num1 + num2 + num3 + num4 + num5)/5;

	printf("과목의 성적 평균 : %.1f", tot);
	return 0;

}