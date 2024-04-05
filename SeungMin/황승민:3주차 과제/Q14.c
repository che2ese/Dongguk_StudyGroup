
// 14.소음(중)
// https://www.acmicpc.net/problem/2935

#include<stdio.h>
#include<string.h>

int main(void)
{

    char num1[110], num2[110], num3[110];
    char sign;

    scanf("%s", num1);
    getchar();
    scanf("%c", &sign);
    getchar();
    scanf("%s", num2);
    getchar();

    if (sign == '+') {
        if (strlen(num1) >= strlen(num2)) {
            strcpy(num3, num1);
            num3[strlen(num1)-strlen(num2)] += 1;
        }
        else {
            strcpy(num3, num2);
            num3[strlen(num2)-strlen(num1)] += 1;
        }
        printf("%s", num3);
    }
    else {
        printf("1");
        for (int i = 0; i < strlen(num1) + strlen(num2) - 2; i++) {
            printf("0");
        }
    }
}