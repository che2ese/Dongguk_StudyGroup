#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
	int num;
	char str[1000];

	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%s", str);
		printf("%c%c\n", str[0], str[strlen(str) - 1]);
	}
	return 0;
}