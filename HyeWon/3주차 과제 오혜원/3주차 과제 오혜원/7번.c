/*예제를 보고 규칙을 유추한 뒤에 별을 찍어 보세요.
첫째 줄에 N(1 ≤ N ≤ 100)이 주어진다.
첫째 줄부터 2×N-1번째 줄까지 차례대로 별을 출력한다.*/

#include <stdio.h>

int main(void)
{
	int n = 0;
	scanf_s("%d", &n);

	for (int i = 1;i <= n; ++i)
	{
		for (int j = 1;j <= n-1+i; ++j)
		{
			if (j <= n - i)
				printf(" ");
			else
				printf("*");
		}
		putchar('\n');
	}

	for (int i = 1;i < n;++i)
	{
		for (int j = 1;j <= 2*n -1-i; ++j)
		{
			if (i < j && j <= 2*n - 1 - i) //연산자의 연쇄 사용이 지원되지 않됨
				printf("*");
			else
				printf(" "); 
		}
		putchar('\n');
	}

	return 0; 
}