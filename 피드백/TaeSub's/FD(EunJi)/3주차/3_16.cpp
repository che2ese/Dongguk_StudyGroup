#include<stdio.h>

int main(void) {
	int A, B;
	scanf_s("%d %d", &A, &B);

	A = B - A;
	printf("%d %d", A, B);
	return 0;

}