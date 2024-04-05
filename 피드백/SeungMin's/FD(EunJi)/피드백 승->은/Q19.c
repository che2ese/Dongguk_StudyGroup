
// 19. 커트라인(중)
// https://www.acmicpc.net/problem/25305

#include <stdio.h>

int main(void) {

    int n = 0, k = 0;
    scanf("%d %d", &n, &k);
    int score[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &score[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (score[j] < score[j + 1])
            {
                int temp = score[j];
                score[j] = score[j + 1];
                score[j + 1] = temp;
            }
        }
    }
    printf("%d", score[k-1]);

    return 0;
}