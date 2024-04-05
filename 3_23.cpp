#include<stdio.h>

int main(void) {
	int N, V;//주어진 정수의 양과 
	int nList[10000];//기본 1차원 배열 저장
	int count = 0;//

	scanf_s("%d", &N);
	

	for (int i = 0; i < N; i++) {
		scanf_s("%d", &nList[i]);//리스트에 차근차근 저장하기
	}
	scanf_s("%d", &V);

	for (int j = 0; j < N; j++) {
		if (nList[j] == V) {
			count++;
		}
	}
	printf("%d", count);

	return 0;
}