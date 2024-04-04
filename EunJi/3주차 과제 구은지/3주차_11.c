/*
11번
-문제: 10보다 작거나 같은 자연수 N개를 주면 합을 구하는 프로그램을 작성하시오.
-입력: 
입력의 첫 줄에는 테스트 케이스의 개수 T(1 ≤ T ≤ 10)가 주어진다. 
각 테스트 케이스는 첫 줄에 자연수의 개수 N(1 ≤ N ≤ 100)이 주어지고, 
그 다음 줄에는 N개의 자연수가 주어진다. 
각각의 자연수 사이에는 하나씩의 공백이 있다.
-출력: 각 테스트 케이스에 대해서 주어진 자연수의 합을 한 줄에 하나씩 출력한다.
*/

#include <stdio.h>

int main(void)
{
	int T = 0;
	int N = 0;
	scanf_s("%d", &T);

	for (int t = 0; t < T; t++)
	{
		scanf_s("%d", &N); 
		int sum = 0;

		for (int n = 0; n < N; n++)
		{
			int num = 0;
			scanf_s("%d", &num);
			sum += num;
		}
		printf("%d\n", sum);
	}

	return 0;
}