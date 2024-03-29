/* 5. (A + B) % C는((A % C) + (B % C)) % C 와 같을까 ? (A×B) % C는((A % C) ×(B % C)) % C 와 같을까 ?
세 수 A, B, C가 주어졌을 때, 위의 네 가지 값을 구하는 프로그램을 작성하시오. */

#include <stdio.h>

int main(void) {
	int a, b, c;

	printf("세 수를 입력하세요 : ");
	scanf_s("%d %d %d", &a, &b, &c);
	printf("1 : %d\n", (a+b)%c);
	printf("2 : %d\n", ((a%c)+(b%c))%c);
	printf("3 : %d\n", ((a*b)%c));
	printf("4 : %d\n", ((a%c)*(b%c))%c);
	
	return 0;
}