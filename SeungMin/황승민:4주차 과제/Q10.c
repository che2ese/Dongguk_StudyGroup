
// 일곱 난쟁이 - https://www.acmicpc.net/problem/2309

#include <stdio.h>

int sumArr(int *arr, int a, int b) {
    int total = 0;
    for (int i = 0; i < 9; i++) {
        total += arr[i];
    }
    total -= a;
    total -= b;

    return total;
}

void prtArr(int *arr, int a, int b) {

    for (int i = 0; i < 9; i++) {
        if (i != a && i != b) {
            printf("%d\n", arr[i]);
        }
    }

}

int main(void) {

    int not1, not2;
    int arr[9];
    for (int i = 0; i < 9; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 8 - i; j++) {
            if (arr[j] > arr[j + 1]) {	
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < 8; i++) {
        not1 = i;
        for (int j = not1+1; j < 9; j++) {
            not2 = j;
            if (sumArr(arr, arr[not1], arr[not2]) == 100) {
                prtArr(arr, not1, not2);
                return 0;
            }
        }
    }

    return 0;
}