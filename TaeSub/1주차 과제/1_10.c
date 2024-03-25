// 10. 숫자를 입력 받아 16진수, 10진수, 8진수 상수를 출력하는 프로그램을 작성하세요.
#include<stdio.h>

int main(void)
{
    int num;
    scanf("%d",&num);

    printf("10진수: %d\n",num);
    printf("8진수: %o \n",num);
    printf("16진수: %x\n",num);
    return 0;



}