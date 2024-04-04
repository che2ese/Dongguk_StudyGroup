#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int ary[9][9];
	int max = 0;

	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			scanf("%d", &ary[i][j]);
		}
	}

	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			if (max >= ary[i][j])
				max = max;
			else	
				max = ary[i][j];
		}
	}
	
	printf("%d\n", max);

	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			if (max == ary[i][j]) {
				printf("%d %d", i + 1, j + 1);
				goto EXIT;
			}
		}
	}
	EXIT:
	return 0;
}