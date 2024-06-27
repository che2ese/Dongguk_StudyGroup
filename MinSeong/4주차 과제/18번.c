#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int dfs(int x, int y, int** arr, int m, int n) {
    if (x < 0 || y < 0 || x >= m || y >= n || arr[x][y] == 0)
        return 0;

    arr[x][y] = 0;

    dfs(x + 1, y, arr, m, n);
    dfs(x - 1, y, arr, m, n);
    dfs(x, y + 1, arr, m, n);
    dfs(x, y - 1, arr, m, n);

    return 0;
}

int main(void) {
    int T;
    scanf("%d", &T);

    for (int t = 0; t < T; ++t) {
        int M, N, K, count;
        int* x = NULL;
        int* y = NULL;
        int** arr;

        scanf("%d%d%d", &M, &N, &K);
        x = (int*)malloc(sizeof(int) * K);
        y = (int*)malloc(sizeof(int) * K);

        for (int i = 0; i < K; ++i) {
            scanf("%d%d", &x[i], &y[i]); // x와 y를 순서대로 받음
        }

        arr = (int**)malloc(sizeof(int*) * N);
        for (int i = 0; i < N; i++) {
            arr[i] = (int*)malloc(sizeof(int) * M);
            for (int j = 0; j < M; j++) {
                arr[i][j] = 0;
            }
        }

        for (int i = 0; i < K; i++) {
            arr[N - y[i] - 1][x[i]] = 1; // 좌표 변환 및 1 할당
        }
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                printf("%d", arr[i][j]);
            }
            printf("\n");
        }

        count = 0;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (arr[i][j] == 1) {
                    dfs(i, j, arr, N, M);
                    count++;
                }
            }
        }

        printf("%d\n", count);

        for (int i = 0; i < N; i++) {
            free(arr[i]);
        }
        free(arr);
        free(x);
        free(y);
    }

    return 0;
}