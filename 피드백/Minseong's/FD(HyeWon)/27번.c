#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int student[29];

	for (int i = 0; i < 28; ++i) {
		scanf("%d", &student[i]);
	}
    for (int i = 0; i < 28; i++) {
        for (int j = i; j < 28; j++) {
            if (student[i] > student[j]) {
                int tmp = student[i];
                student[i] = student[j];
                student[j] = tmp;
            }
        }
    }
    for (int i = 0; i < 27; ++i) {
        if (student[i + 1] - student[i] != 1)
            printf("%d\n", student[i] + 1);
    }

}