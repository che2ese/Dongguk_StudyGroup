
// 12.평균(하)
// https://www.acmicpc.net/problem/1546

#include <stdio.h>

int main(void) {

    int n, max=0;
    float avg=0;
    scanf("%d", &n);
    float arr[n];

    // n번 입력 받기
    for ( int i = 0; i < n; i++ ) {
        scanf("%f", &arr[i]);
    }

    // 최댓값 구하기
    for ( int i = 0; i < n; i++ ) {
        if (max < arr[i]) {
            max = arr[i];
        }   
    }

    // 주어진 계산식
    for ( int i = 0; i < n; i++ ) {
        avg += arr[i] / max * 100;
    }
    avg = avg / n;
    printf("%f", avg);
    
    return 0;
}
