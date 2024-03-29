/*2. 승민이는 전과목의 평균을 내는 프로그램을 만들려고 한다. 
총 5과목이며 각각의 점수를 입력받아 평균을 내는 프로그램을 만들어보자
*/

#include <stdio.h>
int main(void)
{
	int sub1 = 0, sub2 = 0, sub3 = 0, sub4 = 0, sub5 = 0;
	scanf_s("%d%d%d%d%d", &sub1, &sub2, &sub3, &sub4, &sub5);

	printf("%d\n", (sub1 + sub2 + sub3 + sub4 + sub5) / 5);

	return 0;
}