
// 15.주사위(하)
// https://www.acmicpc.net/problem/9295

#include <stdio.h>

int main(void) {

    int n = 0, case1 = 0, case2 = 0;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &case1, &case2);
        printf("Case %d: %d\n", i+1, case1 + case2);
    }
    return 0;
}
