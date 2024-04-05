
// 11. 더하기(하)
// https://www.acmicpc.net/problem/9085

#include <stdio.h>

int main(void) {

    int t = 0;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int n = 0, cnt = 0, ans = 0;
        scanf("%d", &n);
        for (int j = 0; j < n; j++) {
            scanf("%d", &ans);
            cnt += ans;
        }
        printf("%d\n", cnt);
    }

    return 0;
}
