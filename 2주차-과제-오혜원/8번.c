//8. 단항 증/감 연산자를 이용하여 x=5와 y=10을 x=8, y=6으로 만들어보세요.

#include <stdio.h>
int main(void)
{
	int x = 5, y = 10;
	x += 5;
	x += 6;
	x += 7;
	y -= 10;
	y -= 9;
	y -= 8;
	y -= 7;

	printf("%d\n %d\n", x, y)
	return 0;
}//예외 처리 안 됐다는데 7번 자동으로 떠짐 