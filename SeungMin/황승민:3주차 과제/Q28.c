
// 28. 접미사 배열(중)
// https://www.acmicpc.net/problem/11656

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

    char input[1001];
    char dictionary[1001][1001];
    char tmp[1001];
    scanf("%s", input);
    int sizeInput = strlen(input);

    // 2차원 배열에 모든 접미사 대입
    for (int i = 0; i < sizeInput; i++) {
        strcpy(dictionary[i], input + i);
    }
    
    // 버블정렬 문자열 버전
    for (int i = 0; i < sizeInput - 1; i++) {
        for (int j = 0; j < sizeInput - 1 - i; j++) {
            int k = 0;
            while (dictionary[j][k] == dictionary[j+1][k]) {
                k++;
            }
            if (dictionary[j][k] > dictionary[j+1][k]) {
                strcpy(tmp, dictionary[j]);
                strcpy(dictionary[j], dictionary[j+1]);
                strcpy(dictionary[j+1], tmp);
            }
        }
    }

    // 출력문
    for (int i = 0; i < sizeInput; i++) {
        printf("%s\n", dictionary[i]);
    }
    
    return 0;
}