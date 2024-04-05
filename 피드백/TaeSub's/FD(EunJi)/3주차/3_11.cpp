//변수는 테스트 케이스 T와 입력받을거 ninput
#include<stdio.h>

int main(void) {
	int T = 0;
	//int sum =0; 이 위치에 놓으면 안되는 이유
	scanf_s("%d", &T);//테스트 횟수 

	for (int i = 0; i < T; i++) {
		int num = 0; //자연수의 개수
		int sum = 0; // 여기서 sum변수가 for문 루프 안에서 초기화 되기 때문이
		scanf_s("%d", &num);
		for (int j = 0; j < num; j++) { //걍 입력할때 한줄로 해도 되는군...
			int nInput;
			scanf_s("%d", &nInput);
			sum += nInput;
		}
		printf("%d\n", sum);

	}
	return 0;

}