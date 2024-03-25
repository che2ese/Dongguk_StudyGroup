// 8. 3.14를 입력하고 소수점 이하 6자리까지 출력하시오.
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    double num1;

    scanf("%lf%*c",&num1); 
    printf("%.6f", num1); 
    return 0;

}