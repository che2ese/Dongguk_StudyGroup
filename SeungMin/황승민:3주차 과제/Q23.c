
// 23. 개수세기(하)
// https://www.acmicpc.net/problem/10807

#include <stdio.h>

int main(void) {

    int size = 0, v = 0, vCnt = 0;

    // 입력값 받기
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    scanf("%d", &v);

    // 정수 v 개수 구하기
    for (int i = 0; i < size; i++) {
        if ( arr[i] == v ) 
            vCnt += 1;
    }
    
    printf("%d", vCnt);

    return 0;
}
