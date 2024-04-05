#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int count;
	int case1, case2;
	scanf("%d", &count);
	for (int i = 0; i < count; ++i) {
		scanf("%d%d", &case1, &case2);
		if ((case1 <= 6 && case1 >= 1) && (case2 <= 6 && case2 >= 1))
			printf("Case %d: %d\n", i + 1, case1 + case2);
		else
			--i;
	}
	return 0;
}