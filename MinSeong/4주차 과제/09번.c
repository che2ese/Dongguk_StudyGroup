#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int N, M;
    int* A;
    int* B;

    scanf("%d", &N);
    A = (int*)malloc(sizeof(int) * N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    scanf("%d", &M);
    B = (int*)malloc(sizeof(int) * M);
    for (int i = 0; i < M; i++) {
        scanf("%d", &B[i]);
    }
    for (int i = 0; i < M; i++) {
        int found = 0; // B 배열의 현재 원소가 A 배열에 있는지 여부를 나타내는 플래그
        for (int j = 0; j < N; j++) {
            if (B[i] == A[j]) {
                found = 1; // 찾았음을 표시하고,
                break; // 반복문 탈출
            }
        }
        if (i != M - 1) {
            printf("%d\n", found); // 찾았으면 1을, 찾지 못했으면 0을 출력
        }
        else {
            printf("%d", found);
        }
    }

    // 메모리 해제
    free(A);
    free(B);

    return 0;
}
