#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int num;
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        for (int k = i; k < (num - 1); k++) {
            printf(" ");
        }
        for (int k = 0; k <= (i * 2); k++) {
            printf("*");
        }
        printf("\n");
    }
    for (int i = (num - 2); i >= 0; i--) {
        for (int k = i; k < (num - 1); k++) {
            printf(" ");
        }
        for (int k = 0; k <= (i * 2); k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}