
// 5. (A+B)%C는 ((A%C) + (B%C))%C 와 같을까? (A×B)%C는 ((A%C) × (B%C))%C 와 같을까?
// 세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오.

#include <stdio.h>

int main(void) {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n%d\n%d\n%d\n", (a+b)/c , ((a/c) + (b/c))/c , (a*b)/c , ((a/c) * (a/c))/c );

    return 0;
} 
