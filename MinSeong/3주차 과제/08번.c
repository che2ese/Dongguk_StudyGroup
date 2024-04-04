#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	char sub[50] = { 0, };
	float score = 0;
	float scoreSum = 0;
	char rank[3] = { 0, };
	float grade = 0;
	float gradeSum = 0;
	float total = 0;


	for (int i = 0; i < 20; ++i) {
		scanf("%s%f%s", sub, &score, rank);
		if (rank[0] == 'A') grade = 4.0;
		else if (rank[0] == 'B') grade = 3.0;
		else if (rank[0] == 'C') grade = 2.0;
		else if (rank[0] == 'D') grade = 1.0;
		else if (rank[0] == 'F') grade = 0.0;
		else score = 0;

		if (rank[1] == '+') grade += 0.5;
		else if (rank[1] == '0') grade += 0;
		scoreSum += score;
		gradeSum += score * grade;

	}
	total = gradeSum / scoreSum;
	printf("%f", total);
	return 0;
}