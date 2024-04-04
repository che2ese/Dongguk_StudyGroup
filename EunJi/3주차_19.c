/*
문제:
2022 연세대학교 미래캠퍼스 슬기로운코딩생활에 N명의 학생들이 응시했다.
이들 중 점수가 가장 높은 k명은 상을 받을 것이다. 이때, 상을 받는 커트라인이 몇 점인지 구하라.
커트라인이란 상을 받는 사람들 중 점수가 가장 가장 낮은 사람의 점수를 말한다.
입력:
첫째 줄에는 응시자의 수 N과 상을 받는 사람의 수 k가 공백을 사이에 두고 주어진다.
둘째 줄에는 각 학생의 점수x가 공백을 사이에 두고 주어진다.
출력: 상을 받는 커트라인을 출력하라.
*/

//여기서도 그놈의 N 때문에 빌드가 안됨........

#include <stdio.h>

int main(void)
{
	int N = 0, k = 0;
	scanf_s("%d%d", &N, &k);

	int scores[N] = { 0 };
	for (int n = 0; n < N; n++)
	{
		scanf_s("%d", &scores[n]); 
	}

	for (int i = 0; i < N - 1; i++) 
	{
		for (int j = i + 1; j < N; j++)
		{
			if (scores[i] > scores[j])
			{
				int tmp = scores[i];
				scores[i] = scores[j];
				scores[j] = tmp;
			}
		}
	}

	printf("%d\n", scores[N - k]);
	return 0;
}