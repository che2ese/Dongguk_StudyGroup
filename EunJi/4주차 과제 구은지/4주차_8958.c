/*
"OOXXOXXOOO"와 같은 OX퀴즈의 결과가 있다. O는 문제를 맞은 것이고, X는 문제를 틀린 것이다.
문제를 맞은 경우 그 문제의 점수는 그 문제까지 연속된 O의 개수가 된다.
예를 들어, 10번 문제의 점수는 3이 된다.
"OOXXOXXOOO"의 점수는 1+2+0+0+1+0+0+1+2+3 = 10점이다.
OX퀴즈의 결과가 주어졌을 때, 점수를 구하는 프로그램을 작성하시오.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char QuizResult[81];
	int score = 0;
	int currentScore = 0;
	int count = 0;

	scanf("%d", &count);
	

	
	for (int j = 0; j < count; j++)
	{
		score = 0;
		currentScore = 0;
		scanf("%s", QuizResult);

		int length = strlen(QuizResult); //이거를 for문 안에 넣었어야 함

		for (int i = 0; i < length; i++)
		{
			if (QuizResult[i] == 'O')
			{
				currentScore++;
				score += currentScore;
			}
			else
			{
				currentScore = 0;
			}
		}

		printf("총 점수: %d\n", score);
	}
	return 0;
}