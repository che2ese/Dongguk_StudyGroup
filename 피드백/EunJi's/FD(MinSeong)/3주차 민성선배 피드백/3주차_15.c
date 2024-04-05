/*
문제:
오늘은 갑자기 주사위를 던지고 싶다.
그런데 코딩도 하고 싶다. 그럼 같이할까?
입력: 
첫째 줄에 테스트 케이스의 개수 T가 주어진다.
각 테스트 케이스는 한 줄로 이루어져 있으며, 주사위를 두 번 던져 나온 두 수를 입력한다.
출력:
각 테스트 케이스마다 "Case x: "를 출력한 다음, 주사위를 두 번 던져 나온 두 수의 합을 출력한다. 
테스트 케이스 번호(x)는 1부터 시작한다.
*/

#include <stdio.h>

int main(void)
{
	int T = 0;
	int num1 = 1, num2 = 0;
	scanf_s("%d", &T);

	for (int i = 1; i <= T; ++i)
	{
		scanf_s("%d%d", &num1, &num2);
		printf("Case %d: %d\n", i, num1 + num2);
	}
	return 0;
}