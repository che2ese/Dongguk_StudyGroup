#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int input = 0;
	int div, sum;
	int count;
	int divs[100] = { 0, };

	for (;;) {
		scanf("%d", &input);
		
		if (input == -1) {
			break;
		}

		else
			sum = 0;
			count = 0;

			for (int i = 1; i < input; ++i) {
				if (input % i == 0) {
					sum += i;
					div = i;
					divs[count++] = div;
				}
			}	
			if(sum == input){
				printf("%d = ", input);
				for (int i = 0; i < count; i++) {
					printf("%d", divs[i]);
					if (i < count - 1)
						printf(" + ");
				}
				printf("\n");
			}
			else
				printf("%d is NOT perfect.\n", input);
			continue;
	}
}