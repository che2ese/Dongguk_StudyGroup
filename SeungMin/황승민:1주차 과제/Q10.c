
// 10. 숫자를 입력 받아 10진수, 12진수, 8진수 상수를 출력하는 프로그램을 작성하세요.

#include <stdio.h>

int main(void) {

    int num;
    scanf("%d", &num);

    printf("10진수 : %d\n12진수 : %#x\n8진수 : %#o", num, num, num);    

    return 0;
} 