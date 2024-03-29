//9. 두 정수 x와 y를 입력 받아 x와 y의 값을 서로 바꾸는 프로그램을 작성하세요.
#include <stdio.h>

int main(void)
{
	int x, y;
	int tot;

	printf("x: ");
	scanf_s("%d", &x);
	printf("y: ");
	scanf_s("%d", &y);

	
	printf("x: %d, y:%d", x, y);
	tot = x;
	y = x;
	printf("x: %d, y: %d", tot, y);
	

	return 0;
}