#include <stdio.h>
// char, short, int, long, long long 자료형의 크기를 구하는 프로그램을 작성하세요.
int main(void)
{
    printf("char: %d, short: %d, int: %d, long: %d, long long: %d\n",
        sizeof(char),        // 1: sizeof로 char 자료형의 크기를 구함
        sizeof(short),       // 2: sizeof로 short 자료형의 크기를 구함
        sizeof(int),         // 4: sizeof로 int 자료형의 크기를 구함
        sizeof(long),        // 4: sizeof로 long 자료형의 크기를 구함
        sizeof(long long)    // 8: sizeof로 long long 자료형의 크기를 구함
    );

	return 0;
} //실행이 안 됨 인터넷 