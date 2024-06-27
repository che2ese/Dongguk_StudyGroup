
// 파티가 끝나고 난 뒤 - https://www.acmicpc.net/problem/2845

#include <stdio.h>

int main(void) {

    int L , P, m;
    int arr[5];
    scanf("%d%d", &L, &P);
    m = L * P;

    scanf("%d%d%d%d%d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i] - m);
    }

    return 0;
}