/*
9. 나이와 키를 입력하는 기능을 만들어 키는 나이는 정수형 키는 소수점 이하 1자리까지를
한 문장에 나타내시오.
*/

#include <stdio.h>
int main(void)
{
	int age;
	double height;

	printf("나이를 입력하세요 :");
	scanf_s("%d", &age);

	printf("키를 입력하세요 :");
	scanf_s("%.1f", &height);

	printf("나이는 : %d\n 키는 : %lf", age, height);

	return 0;
}