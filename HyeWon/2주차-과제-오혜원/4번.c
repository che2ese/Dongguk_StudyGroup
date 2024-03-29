/*4. 절대 평가로 인해 각각의 과목에서 총 10명중에 1~5등까지는 100점,
6~10등까지는 0점으로 계산해 총 3과목의 등수를 입력 받아 점수의 평균을 내는 프로그램을 만들어보자
(조건 3항 연산자 이용)
*/

#include <stdio.h>
int main(void)
{
	int rank1 = 0, rank2 = 0, rank3 = 0;
	scanf_s("%d%d%d", &rank1, &rank2, &rank3);

	printf("%d\n", 
	(((rank1 >= 6) ? 0 : 100)+( (rank2 >= 6) ? 0 : 100)+( (rank3 >= 6)? 0 : 100))/3);

	return 0;
}