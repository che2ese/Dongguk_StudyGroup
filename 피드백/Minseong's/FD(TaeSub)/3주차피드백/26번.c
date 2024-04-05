#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input;
	int num;
	long long min = 1000000; 
	long long max = -1000000; 

	scanf("%d", &input);
	for (int i = 0; i < input; ++i) {
		scanf("%d", &num);
		if (num > max) max = num;
		if (num < min) min = num;
	}
	printf("%lld %lld", min, max);
}