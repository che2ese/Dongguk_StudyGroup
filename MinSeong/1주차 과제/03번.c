/* 3. 자신의 학번, 이름, 학점을 출력하는 프로그램을 작성하세요.
학번은 정수, 이름은 문자열, 학점은 문자 상수를 사용합니다. */

#include <stdio.h>

int main(void) {
	int student_no;
	char name[10];
	char grade;

	printf("학번을 입력하세요 : ");
	scanf_s("%d%*c", &student_no);

	printf("이름을 입력하세요 : ");
	gets_s(name, sizeof(name));

	printf("학점을 입력하세요 : ");
	grade = getchar();

	printf("학번 : %d\n이름 : %s\n학점 : %c", student_no, name, grade);

	return 0;
}