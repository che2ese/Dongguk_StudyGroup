
// 21. 달팽이(중)
// https://www.acmicpc.net/problem/2869

#include <stdio.h>

int main(void) {

    int days = 0;
    int v = 0, a = 0, b = 0;

    scanf("%d %d %d", &a, &b, &v);

    days = ( v - b - 1 ) / ( a - b ) + 1;

    printf("%d", days);

    return 0;
}
