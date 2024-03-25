// 8. 3.14를 입력하고 소수점 이하 6자리까지 출력하시오.

#include <stdio.h>

int main(void)
{
	double dData = 3.14;
	printf("%f, 6f\n", dData);

	return 0;
}

// 1) 3.14로 넣으니까 3.140000로 출력이 되는데, pi를 넣으니까 pi가 정의되어있지 않다고 뜸.
//  pi가 여기 프로그램에서 정의가 안된건가..? 그럼 어떻게 해야하지..?