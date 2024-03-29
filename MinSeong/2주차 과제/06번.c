/*
6. 정수 5개를 입력받아 최소값을 구하는 프로그램을 작성하시오.
(조건 3항 연산자 이용)
*/
#include<stdio.h>

int main(void) {
	int a, b, c, d, e;
	printf("숫자 5개를 입력하세요:");
	scanf_s("%d%d%d%d%d", &a, &b, &c, &d, &e); 

	int min1 = a < b ? a : b;
	int min2 = c < d ? c : d;
	int min3 = min1 < min2 ? min1 : min2;
	int min4 = min3 < e ? min3 : e;
	printf("%d", min4);
}