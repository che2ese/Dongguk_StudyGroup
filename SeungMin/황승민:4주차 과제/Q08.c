
// 다항함수의 미분 - https://www.acmicpc.net/problem/15725

#include <stdio.h>
#include <string.h>

int main(void) {

    char arr[30];
    int end = -1, zero = 0;
    scanf("%s", arr);
    int len = strlen(arr);

    if (arr[0] == 'x') {
        printf("1");
        return 0;
    }

    for (int i = 0; i < len; i++) {
        if ( arr[i] == '+') {
            if (arr[i+1] == 'x') {
                printf("1");
                return 0;
            }
        }
        else if ( arr[i] == '-') {
            if (arr[i+1] == 'x') {
                printf("-1");
                return 0;
            }
        }
        if ( arr[i] == 'x') {
            end = i-1;
            zero = 1;
            break;
        } 
    }

    if (zero == 1) {
        for (int i = 0; i < end+1; i++) {
        printf("%c", arr[i]);
        }
    }
    else printf("0");

    return 0;
}