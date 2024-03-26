/* 
6. 정수 5개를 입력받아 최소값을 구하는 프로그램을 작성하시오.
(조건 3항 연산자 이용)
 */

#include <stdio.h>

int main(void) {

    int input = 0, min = 2147483647; // 2147483647은 int형에서 받을 수 있는 최댓값

    scanf("%d", &input);
    min = input < min ? input : min;
    scanf("%d", &input);
    min = input < min ? input : min;
    scanf("%d", &input);
    min = input < min ? input : min;
    scanf("%d", &input);
    min = input < min ? input : min;
    scanf("%d", &input);
    min = input < min ? input : min;

    printf("%d\n", min);

    return 0;
}