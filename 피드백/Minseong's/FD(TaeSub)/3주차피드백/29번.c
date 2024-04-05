#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int row;
	int col;
	int ary1[100][100];
	int ary2[100][100];

	scanf("%d%d", &row, &col);

	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			scanf("%d", &ary1[i][j]);
		}
	}
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			scanf("%d", &ary2[i][j]);
		}
	}
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			printf("%d", ary1[i][j] + ary2[i][j]);
			if (j+1 != row)
				printf(" ");
		}
		if (i+1 != col)
			printf("\n");
	}
}