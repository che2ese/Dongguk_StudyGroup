//4. 절대 평가로 인해 각각의 과목에서 총 10명중에 1~5등까지는 100점,
//6~10등까지는 0점으로 계산해 총 3과목의 등수를 입력 받아 점수의 평균을 내는 프로그램을 만들어보자
//(조건 3항 연산자 이용)
/*
	입력 받는것 : 과목의 등수  * 3 
	(grade1,2,3 <= 5) ? 100 : 0
	x
*/

#include<stdio.h>

int main(void)
{
	int grade1, grade2, grade3;//과목의 등수에 대한 변수
	float total; //총합 변수

	printf("과목1의 등수: ");
	scanf_s("%d", &grade1);

	printf("과목2의 등수: ");
	scanf_s("%d", &grade2);
	
	printf("과목3의 등수: ");
	scanf_s("%d", &grade3);

	grade1 = (grade1 <= 5) ? 100 : 0;
	grade2 = (grade2 <= 5) ? 100 : 0;
	grade3 = (grade3 <= 5) ? 100 : 0;

	total = grade1 + grade2 + grade3;

	printf("점수의 평균은 %.1f", (total / 3));
	return 0;

}