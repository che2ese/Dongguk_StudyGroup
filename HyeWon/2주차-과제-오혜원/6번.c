/*6. 정수 5개를 입력받아 최소값을 구하는 프로그램을 작성하시오.
(조건 3항 연산자 이용)*/

#include <stdio.h>
int main(void) // 조건 3항 모르겠음 
{
	int a, b, c, d, e;
	int min;

	scanf_s("%d %d %d %d %d", &a, &b, &c, &d, &e);
	
	
	min=(a < b) ? a : b;
	min = (min < c) ? min : c;
	min = (min < d) ? min : d;
	min = (min < e) ? min : e;
	
	printf("min: %d\n", min);

	return 0;
}
