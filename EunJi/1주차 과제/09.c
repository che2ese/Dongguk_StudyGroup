// 9. 나이와 키를 입력하는 기능을 만들어 키는 나이는 정수형 키는 소수점 이하 1자리까지를 한 문장에 나타내시오.

#include <stdio.h>

int main(void)
{
	int nAge = 0;
	int hight = 0;

	printf("나이를 입력하세요.: ");
	scanf_s("%d", &nAge);

	printf("키를 입력하세요.: ");
	scanf_s("%d", &hight);

	double dData = nAge, hight  //키랑 나이를 입력한 다음에 소수점 이하 1자리 나타내는 프로그래밍을 어떻게 넣어야 할지 잘 모르겠음...

	printf("%d, %s\n", nAge, hight);

	return 0;

}