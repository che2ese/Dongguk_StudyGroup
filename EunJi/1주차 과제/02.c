//2. char, short, int, long, long long 자료형의 크기를 구하는 프로그램을 작성하세요.

//오류떴어요..........

#include <stdio.h>

int main(void)
{
	printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
		sizeof(char), sizeof(short), sizeof(int), sizeof(long), sizeof(long long));

	return 0;
}
