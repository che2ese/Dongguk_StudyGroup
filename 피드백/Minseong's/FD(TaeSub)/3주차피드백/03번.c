#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int hour, min;
	scanf("%d%d", &hour, &min);
	if (min < 45) {
		min += 15;
		if (hour == 0)
			hour = 23;
		else
			hour -= 1;
	}
	else
		min -= 45;
	printf("%d %d", hour, min);
}