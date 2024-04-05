
// 1. 사분면 고르기(하)
// https://www.acmicpc.net/problem/14681

#include <stdio.h>

int main(void) {

    int x, y;
    scanf("%d %d", &x, &y);

    if ( x > 0 ) {
        if ( y > 0 )
            printf("1");
        else
            printf("4"); 

    } else if ( y > 0 )
        printf("2");
    else
        printf("3");

    return 0;
}

