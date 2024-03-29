/*7. 키보드로 문자를 입력하여 아스키 코드 값을 출력하는 프로그램을 작성하세요. 
어떤 문자가 입력될지는 실행할 때 결정합니다.*/

#include <stdio.h>

int main(void) {
	char ch;

	printf("문자를 입력하세요 : ");
	scanf_s("%c", &ch);

	printf("%c의 ASCII 코드 값 : %d", ch, ch);

	return 0;
}
