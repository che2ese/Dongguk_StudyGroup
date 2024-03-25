
// 2. char, short, int, long, long long 자료형의 크기를 구하는 프로그램을 작성하세요.

#include <stdio.h>

int main(void) {

    printf("char의 크기 : %lu\n", sizeof(char));
    printf("short의 크기 : %lu\n", sizeof(short));
    printf("int의 크기 : %lu\n", sizeof(int));
    printf("long의 크기 : %lu\n", sizeof(long));
    printf("long long의 크기 : %lu\n", sizeof(long long));

    return 0;
}