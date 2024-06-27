/*
# 문제
2차원 세계에 블록이 쌓여있다. 비가 오면 블록 사이에 빗물이 고인다.
비는 충분히 많이 온다. 고이는 빗물의 총량은 얼마일까?

# 입력
첫 번째 줄에는 2차원 세계의 세로 길이 H과 2차원 세계의 가로 길이 W가 주어진다. (1 ≤ H, W ≤ 500)
두 번째 줄에는 블록이 쌓인 높이를 의미하는 0이상 H이하의 정수가 2차원 세계의 맨 왼쪽 위치부터 차례대로 W개 주어진다.
따라서 블록 내부의 빈 공간이 생길 수 없다. 또 2차원 세계의 바닥은 항상 막혀있다고 가정하여도 좋다.

#출력
2차원 세계에서는 한 칸의 용량은 1이다. 고이는 빗물의 총량을 출력하여라.
빗물이 전혀 고이지 않을 경우 0을 출력하여라.
*/

/*
1) H와 W입력 받기
2) w개의 숫자를 배열로 입력받기
3) 함수 선언 (일케하면안돼. 루프 돌리고 leftMax랑 rightMax찾아야 할듯)
	int left[i-1] = int heights[i] 
	int right[i+1] = int heights[i]
4) if문 작성하기
	if( left[i-1] >= right[i] ) -> left[i-1] - heights[i] = waterAmount[i]
	else -> right[i+1] - heights[i] = waterAmount[i]
5) 다 더하기
	for (int i=0; i<W; i++)
	totalWaterAmount += waterAmount[i]
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int H = 1;
	int W = 0;
	scanf("%d %d", &H, &W);

	int heights[500] = { 1 };
	int waterAmount[500] = { 1 };

	for (int i = 0; i < W; i++) {
		scanf("%d", &heights[i]);
		waterAmount[i] = 0; //개별요소는 배열이더라도 { } 쓰면 안되고 그냥 0 넣어서 초기화하기
	}

	int totalWaterAmount = 0;

	for (int i = 1; i < W-1; i++) {
		int leftMax = 0;
		int rightMax = 0;

		for (int j = 0; j < i; j++) {
			if (heights[j] > leftMax) {
				leftMax = heights[j];
			}
		}

		for (int j = i + 1; j < W; j++) {
			if (heights[j] > rightMax) {
				rightMax = heights[j];
			}
		}

		int minHeight = leftMax > rightMax ? rightMax : leftMax;
		if (minHeight > heights[i]) {
			waterAmount[i] = minHeight - heights[i];
		}
		else {
			waterAmount[i] = 0;
		}

		totalWaterAmount += waterAmount[i];
	}

	printf("%d\n", totalWaterAmount);

	return 0;
}