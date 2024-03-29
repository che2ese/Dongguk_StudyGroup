//10. 두 정수를 입력받아 차를 구하세요(단, 큰 수에서 작은 수를 빼 항상 양수가 나오게 한다)
#include <stdio.h>


int main(void)
{
	int num1, num2;
	int result;
	
	printf("num1 : ");
	scanf_s("%d", &num1);
	printf("num2 : ");
	scanf_s("%d", &num2);


	result = (num1 - num2) > 0 ? num1 - num2 : num2 - num1;
	printf("두 정수의 차이 : %d",result );
	return 0;

}
