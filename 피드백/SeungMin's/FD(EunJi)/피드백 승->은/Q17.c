
// 17.수 정렬하기(중)
// https://www.acmicpc.net/problem/2750

#include <stdio.h>

int main(void) {

    int n = 0;
    int list[1001];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &list[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (list[j] > list[j + 1])
            {
                int temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        printf("%d\n", list[i]);
 }

    return 0;
}