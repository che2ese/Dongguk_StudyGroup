//2. 승민이는 전과목의 평균을 내는 프로그램을 만들려고 한다.
//총 5과목이며 각각의 점수를 입력받아 평균을 내는 프로그램을 만들어보자

#include <stdio.h>

int main(void)
{
	int a = 0, b = 0, c = 0, d = 0, e = 0;

	printf("5과목의 점수를 입력하세요.: ");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);

	double average = 0.0;
	average = (a + b + c + d + e) / 5.0;   
	printf("다섯 과목의 평균은: %.2f", average);

	return 0;
}