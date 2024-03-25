
// 9. 나이와 키를 입력하는 기능을 만들어 키는 나이는 정수형 키는 소수점 이하 1자리까지를 한 문장에 나타내시오.

#include <stdio.h>

int main(void) {

    int age; 
    float height;

    scanf("%d %f", &age, &height);
    printf("나이 : %d\n키 : %.1f", age, height);


    return 0;
} 

