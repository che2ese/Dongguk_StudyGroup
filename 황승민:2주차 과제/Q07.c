/* 
7. 정수 2개를 입력 받아 나누는 프로그램을 만든다. 단 0으로 나누면 error라는 문자가 출력되게 한다.
(조건 3항 연산자 이용)
 */

#include <stdio.h>

int main(void) {

    int a = 0, b = 0;
    scanf("%d %d", &a, &b);

    b == 0 ? printf("error\n") : printf("%d\n", a / b);

    return 0;
}