//첫째 줄에 테스트 케이스의 개수 T가 주어진다.
//
//각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)
#include<stdio.h>

int main(void) {
	int T; //테스트 케이스의 개수
	int A, B;
	int i = 0;
	
	scanf_s("%d", &T);
	//먼저 테스트 케이스만큼 반복해야함
	//while문 사용
	while (i< T) {
		scanf_s("%d %d", &A, &B);
		printf("%d \n", A + B);
		i++;
	}
	return 0;
}
