#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

// 다항식을 적분하는 함수
void integrate(char polynomial[]) {
    int constant = 0; // 상수를 저장할 변수
    int x_coefficient = 0; // x 계수를 저장할 변수

    char* term = polynomial; // 다항식의 각 항을 가리킬 포인터

    // 각 항에 대해 적분 수행
    while (*term != '\0') {
        // 각 항의 계수를 추출
        int coefficient = 0;
        if (*term == 'x') {
            coefficient = 1; // "x" 항의 계수가 1인 경우
        }
        else {
            coefficient = atoi(term); // 상수 항의 계수 추출
            while (*term != '\0' && *term != 'x') {
                term++; // 다음 문자로 이동
            }
        }

        // x 계수와 상수를 더함
        if (*term == 'x') {
            x_coefficient += coefficient / 2;
        }
        else {
            constant += coefficient;
        }

        // 항 구분자인 '+'까지 이동
        while (*term != '\0' && *term != '+') {
            term++;
        }
        if (*term == '+') {
            term++; // '+' 다음 문자로 이동
        }
    }

    // 결과 출력
    if (x_coefficient != 0)
        printf("%dxx", x_coefficient);
    if (constant != 0) {
        if (x_coefficient != 0)
            printf("+");
        printf("%dx", constant);
    }
        printf("+W"); // 적분상수
}

int main() {
    char polynomial[100];
    scanf("%s", polynomial);

    integrate(polynomial);

    return 0;
}
