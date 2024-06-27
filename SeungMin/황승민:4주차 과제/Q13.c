
// 팰린드롬수 - https://www.acmicpc.net/problem/1259

#include <stdio.h>
#include <string.h>

int main(void) {

    char arr[6];
    
    for (;;) {
        int check = 0;
        scanf("%s", arr);
        if (arr[0] == '0') break;
        int len = strlen(arr);

        for (int i = 0; i < len/2; i++) {
            if (arr[i] != arr[len-i-1]) check = 1;
        }
        printf("%s\n", (check == 1) ? "no" : "yes");
    }

    return 0;
}