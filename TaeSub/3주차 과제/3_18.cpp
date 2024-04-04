//체스판 씨발련아
#include<stdio.h>

int main(void) {
	int num1, num2, num3, num4, num5, num6; //킹부터 폰까지 변수 선언
	int res1, res2, res3, res4, res5, res6;
	scanf_s("%d %d %d %d %d %d", &num1, &num2, &num3, &num4, &num5, &num6);
	
	//각 말별 숫자는 정해져 있다.
	// resX = 정수 - numN
	res1 = 1 - num1;
	res2 = 1 - num2;
	res3 = 2 - num3;
	res4 = 2 - num4;
	res5 = 2 - num5;
	res6 = 8 - num6;
	printf("%d %d %d %d %d %d", res1, res2, res3, res4, res5, res6);

	return 0;

}