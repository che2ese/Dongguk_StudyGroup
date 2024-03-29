//8. 단항 증/감 연산자를 이용하여 x=5와 y=10을 x=8, y=6으로 만들어보세요.

#include <stdio.h>

int main(void)
{
	int x = 5, y = 10;

	++x;
	++x;
	++x;

	--y;
	--y;
	--y;
	--y;

	printf("x:%d\ny:%d", x, y);

	return 0;
}