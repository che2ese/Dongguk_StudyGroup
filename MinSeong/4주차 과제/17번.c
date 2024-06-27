#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int N;
	int count = 0;

	scanf("%d", &N);

	while (N > 0) {   // 배달 가야할 설탕이 0보다 작을때까지 반복문으로 설탕을 봉지에 포장한다
		if (N % 5 == 0) {    // 제일 먼저 5로 나눴을때 나머지가 0 이면 5의 배수이니 user 입력 값에서 5를 빼주고 count++
			N -= 5;
			count++;
		}
		else if (N % 3 == 0) {  // 5로 안나눠지고 3으로 나눠서 나머지가 0 이라면 3의 배수이니 user 에서 3을 빼주고 count++ 
			N -= 3;
			count++;
		}
		else if (N > 5) {  //   5나 3으로 나눠서 딱 떨어지지 않는다면 최솟값일수 있으니 일단 5를 빼줘서 계속 반복문을 돌려본다. 
			N -= 5;
			count++;
		}
		else {
			count = -1;  // 계속 빼줬는데 5의 배수나 3의 배수에 걸리지 않는다면 딱 맞아 떨어지지 않는 값이니 -1 출력 
			break;
		}

	}
	printf("%d", count);
}