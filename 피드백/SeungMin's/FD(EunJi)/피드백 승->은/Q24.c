
// 24. 공넣기(중)
// https://www.acmicpc.net/problem/10810

#include <stdio.h>

int main(void) {

    int n = 0, m = 0, start = 0, end = 0, num = 0;
    scanf("%d %d", &n, &m);

    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = 0;
    }

    for (int i = 0; i < m; i++) {
        scanf("%d %d %d", &start, &end, &num);

        for (int j = start-1; j < end; j++) {
            arr[j] = num;
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}