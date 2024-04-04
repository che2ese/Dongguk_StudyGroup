/*
문제: N개의 수가 주어졌을 때, 이를 오름차순으로 정렬하는 프로그램을 작성하시오.
입력: 
첫째 줄에 수의 개수 N(1 ≤ N ≤ 1,000)이 주어진다. 
둘째 줄부터 N개의 줄에는 수가 주어진다. 이 수는 절댓값이 1,000보다 작거나 같은 정수이다. 
수는 중복되지 않는다.
출력: 첫째 줄부터 N개의 줄에 오름차순으로 정렬한 결과를 한 줄에 하나씩 출력한다.
*/

//N 때문에 오류가 떴는데..... 거의 다 한 것 같은데....... 못고치겠어여...........

#include <stdio.h>

int main(void)
{
	int N = 0;
	scanf_s("%d", &N);

	int nums[N] = { 0 };
	for (int n = 0; n < N; ++n)
		scanf_s("%d", &nums[n]);

	for (int n = 0; n < N-1; ++n)
	{
		for (int i = n+1; i < N; ++i)
		{
			if (nums[n]> nums[i])
			{
				int tmp = nums[n];
				nums[n] = nums[i];
				nums[i] = tmp;
			}
		}
	}

	for (int n = 0; n < N; ++n)
		printf("%d\n", nums[n]);
	putchar('\n');

	return 0;
}