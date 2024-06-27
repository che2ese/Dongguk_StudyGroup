
// 삼각김밥 - https://www.acmicpc.net/problem/2783

#include <stdio.h>

int main(void) {

    float x, y;
    int n;
    scanf("%f%f", &x, &y);
    scanf("%d", &n);
    float min = 1000/y * x;

    for (int i = 1; i < n+1; i++) {
        scanf("%f%f", &x, &y);
        if (1000/y * x < min) min = 1000/y * x;
    }
    printf("%.2f", min);
    return 0;
}