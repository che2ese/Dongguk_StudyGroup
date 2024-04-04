
// 30. 최대값(상)
// https://www.acmicpc.net/problem/2566 

#include <stdio.h>

int main(void) {

    int arr[9][9];
    int max[3] = {0, 0, 0};

    // 입력 받기
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] > max[0]) {
                max[0] = arr[i][j];
                max[1] = i;
                max[2] = j;
            }
        }
    }

    printf("%d\n%d %d", max[0], max[1]+1, max[2]+1);

    return 0;
}