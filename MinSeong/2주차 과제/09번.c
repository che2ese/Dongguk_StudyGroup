/*
9. 두 정수 x와 y를 입력 받아 x와 y의 값을 서로 바꾸는 프로그램을 작성하세요.
*/
#include <stdio.h>

int main(void){
	int x, y;
	int tmp;

	printf("두 수를 입력하세요:");
	scanf_s("%d %d", &x, &y);
	printf("x = %d y =%d\n", x, y);
	
	tmp = x;
	x = y;
	y = tmp;

	printf("x = %d y =%d", x, y);

	return 0;
}