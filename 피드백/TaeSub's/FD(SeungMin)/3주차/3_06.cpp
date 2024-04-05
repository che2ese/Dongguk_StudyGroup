

#include<stdio.h>

int main(void) {
	int N;

	scanf_s("%d", &N);

	for (int i = 1; i <= N; i++) {
		//공백 횟수 반복
		for(int j= N - i;j>=0;j--){
			printf("_");
		}
		for (i; i <= N; i) {
			printf("*");
		}
		printf("\n");

	}
	return 0;
	//무한으로 *이 찍힌다.... for문 안쪽 한번 살펴보기

}