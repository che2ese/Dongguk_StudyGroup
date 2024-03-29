//3. num1이라는 숫자를 입력받아 50보다 작으면 num2는 0, 크면 100을 출력하는 프로그램을 만들어보자
//(조건 3항 연산자 이용)
/*
	삼항 연산자 형태
	조건 ? true 시 항 선택1 : false 시 항 선택2
	조건 num1<50 ? num2=0 : num2 =100

*/


#include <stdio.h>

int main(void)
{
	int num1, num2;
	
	printf("num1의 값은 무엇인가요? : ");
	scanf_s("%d", &num1);

	num2 = (num1 < 50) ? 0 : 100;
	printf("num2의 값은 %d", num2);
	 

	return 0;


}