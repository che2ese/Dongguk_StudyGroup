#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int year;
	scanf("%d", &year);

	if (year >= 1 && year <= 4000) 
		((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) ? printf("1") : printf("0");
	else printf("error");
}