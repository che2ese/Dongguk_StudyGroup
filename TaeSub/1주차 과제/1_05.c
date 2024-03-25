// 5. (A+B)%C는 ((A%C) + (B%C))%C 와 같을까? (A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
// 세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.
#include<stdio.h>

int main(void)
{
    int a,b,c;
    scanf("%d %d  %d", &a, &b, &c);

    printf("(A+B)%C는 ((A%C) + (B%C))%C 와 같은가? %d \n",%((a+b)%c) == (((a%c) + (b%c))%c)); //어캐하지흠
    printf("(A×B)%C는 ((A%C) × (B%C))%C 와 같을까? %d\n",%((a*b)%c) == (((a%c) *(b%c))%c));

    return 0;



}