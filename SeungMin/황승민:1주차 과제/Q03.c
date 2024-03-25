
// 3. 자신의 학번, 이름, 학점을 출력하는 프로그램을 작성하세요.
// 학번은 정수, 이름은 문자열, 학점은 문자 상수를 사용합니다.

#include <stdio.h>

int main(void) {

    int id = 2024112607;
    char name[] = "황승민";
    char f = 'A';

    printf("학번은 %d이고 이름은 %s이고 학점은 %c입니다", id, name, f);

    return 0;
}