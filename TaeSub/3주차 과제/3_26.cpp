#include<stdio.h>

int main(void) {
	int N = 0;
	int Max = -1000000, Min = 1000000;//최대 최소 저장
	scanf_s("%d", &N);

	for (int i = 0; i < N; i++) {
		//최대 최소 저장
		int num = 0; //입력할 값
		
		scanf_s("%d", &num);

		if (num > Max)
			Max = num;
		//else는 그냥 pass하면 될듯?
			
		if (num < Min)
			Min = num;
	}
	printf("%d %d", Max, Min);
	return 0;
}