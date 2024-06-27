
// 영화감독 숌 - https://www.acmicpc.net/problem/1436

#include <stdio.h>
#include <string.h>

int main(void) {

    int n, count = 0;
    scanf("%d", &n);

    for (int i = 666;; i++) {
        char arr[100];
        sprintf(arr, "%d", i);

        if (strstr(arr,"666") != NULL) {
            ++count;
            if (count == n) {
                printf("%d", i);
                break;
            }
        }
    }

    return 0;
}