/*
2. 승민이는 전과목의 평균을 내는 프로그램을 만들려고 한다. 
총 5과목이며 각각의 점수를 입력받아 평균을 내는 프로그램을 만들어보자
*/
#include <stdio.h>

int main(void) {
	int a, b, c, d, e;
	printf("다섯과목의 성적을 입력하세요:");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e);

	printf("다섯과목의 평균은 %.2f점입니다.", (double)(a + b + c + d + e) / 5);
	
	return 0;
}