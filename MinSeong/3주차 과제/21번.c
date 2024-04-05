#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int height, climb, slip;
	int day = 1;
	scanf("%d%d%d", &climb, &slip, &height);

	/*while (height - climb > 0) {
		++day;
		height -= (climb - slip);
	}*/

	height -= climb;
	int oneClimb = climb - slip;
	day = (height + oneClimb - 1) / oneClimb;
	++day;

	printf("%d", day);

	return 0;
}