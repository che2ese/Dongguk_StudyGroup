#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    int N; //회원 인원 받는 것

    scanf_s("%d", &N);

    int* age = (int*)malloc(N * sizeof(int));
    char** name = (char**)malloc(N * sizeof(char*));

    for (int i = 0; i < N; i++) {
        name[i] = (char*)malloc(100 * sizeof(char)); // 이름은 최대 99자 + NULL 문자
    }

    // 회원 정보 입력 받기
    for (int i = 0; i < N; i++) {
        scanf_s("%d %s", &age[i], name[i]);
    }

    // 나이순 정렬 (버블 정렬)
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (age[j] > age[j + 1]) {
                // 나이 교환
                int tempAge = age[j];
                age[j] = age[j + 1];
                age[j + 1] = tempAge;

                // 이름 교환
                char* tempName = name[j];
                name[j] = name[j + 1];
                name[j + 1] = tempName;
            }
        }
    }

    // 정렬된 결과 출력
    for (int i = 0; i < N; i++) {
        printf("%d %s\n", age[i], name[i]);
    }

    // 동적 메모리 해제
    for (int i = 0; i < N; i++) {
        free(name[i]);
    }
    free(age);
    free(name);

    return 0;
}