//8. 3.14를 입력하고 소수점 이하 6자리까지 출력하시오.

#include <stdio.h>

int main(void)
{
	double pi;

	printf("숫자를 입력하세요:");
	scanf_s("%lf", &pi);

	printf("%.6f", pi);

	return 0;
}