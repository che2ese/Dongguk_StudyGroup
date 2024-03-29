/*10. 숫자를 입력 받아 10진수, 16진수, 8진수 상수를 출력하는 프로그램을 작성하세요.*/

#include <stdio.h>

int main(void) {
	int num;

	printf("숫자를 입력하세요 : ");
	scanf_s("%d", &num);

	printf("%d의 10진수 : %d\n", num, num);
	printf("%d의 8진수 : %o\n", num, num);
	printf("%d의 16진수 : %X\n", num, num);

	return 0;
}