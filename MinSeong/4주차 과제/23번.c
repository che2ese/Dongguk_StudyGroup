#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char words[5][16] = { 0 }; // 다섯 개의 단어, 최대 길이 15, 널 문자를 포함하여 16
    int max_length = 0;

    // 다섯 개의 단어를 입력받습니다.
    for (int i = 0; i < 5; i++) {
        scanf("%s", words[i]);
        int length = strlen(words[i]);
        if (length > max_length) {
            max_length = length;
        }
    }

    // 세로로 읽어서 출력합니다.
    for (int col = 0; col < max_length; col++) {
        for (int row = 0; row < 5; row++) {
            if (col < strlen(words[row])) {
                printf("%c", words[row][col]);
            }
        }
    }
    printf("\n");

    return 0;
}
