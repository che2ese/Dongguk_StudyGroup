/*n이 주어졌을 때, 1부터 n까지 합을 구하는 프로그램을 작성하시오.

첫째 줄에 n (1 ≤ n ≤ 10,000)이 주어진다.

1부터 n까지 합을 출력한다.*/

#include <stdio.h>

int main(void)
{
	int n = 0;
	int nResult = 0;
	scanf_s("%d", &n);
	1 <= n <= 10000;
	for (int b = 1;b <= n;++b)
		nResult += b;

	printf("%d", nResult);

	return 0;
}
