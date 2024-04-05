
// 9.문자열(중)
// https://www.acmicpc.net/problem/9086

#include <stdio.h>
#include <string.h>

int main(void) {

    int t = 0;
    char arr[1001];
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        scanf("%s", arr);
        printf("%c%c\n", arr[0], arr[strlen(arr)-1]);
    }

    return 0;
}