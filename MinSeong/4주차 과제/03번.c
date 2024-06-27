#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void swap(char* a, char* b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(char* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void generate_combinations(char* chars, char* password, int start, int depth, int L, int C, char* vows) {
    if (depth == L) { // 조합의 길이가 L이면 실행
        // 모음과 자음 개수 확인
        int vowels = 0, consonants = 0;
        for (int i = 0; i < L; i++) {
            int isVowel = 0; // 모음 여부 확인
            for (int j = 0; j < 5; j++) {
                if (vows[j] == password[i]) {
                    isVowel = 1;
                    break;
                }
            }
            if (isVowel)
                vowels++;
            else
                consonants++;
        }
        if (vowels >= 1 && consonants >= 2) {
            password[L] = '\0'; // 조건에 부합하면 마지막 위치에 null 적용
            printf("%s\n", password);
        }
        return;
    }

    for (int i = start; i < C; i++) {
        password[depth] = chars[i];
        generate_combinations(chars, password, i + 1, depth + 1, L, C, vows);
    }
}

int main(void) {
    int L, C;
    char ch;
    char* ary;
    char vows[5] = { 'a', 'e', 'i', 'o', 'u' }; // 모음

    scanf("%d%d", &L, &C);
    while (getchar() != '\n');

    ary = (char*)malloc(sizeof(char) * C);
    for (int i = 0; i < C; i++) {
        scanf(" %c", &ch);
        ary[i] = ch;
    }

    bubble_sort(ary, C);
    char* password = (char*)malloc((L + 1) * sizeof(char)); // +1 for null-terminator
    generate_combinations(ary, password, 0, 0, L, C, vows);

    free(ary);
    free(password);

    return 0;
}