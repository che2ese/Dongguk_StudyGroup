
// 8.너의 평점은(상)
// https://www.acmicpc.net/problem/25206

#include <stdio.h>

// 등급을 과목평점으로 변환하는 함수
double gradeConversion(char*);

int main(void) {

    char subName[51]; // 과목명
    char subGrade[3]; // 등급
    double subCredit = 0; // 학점
    double subGPA = 0; // 전공평점
    double subCnt = 0; // P를 제외한 학점의 총합
    
    for (int i = 0; i < 20; i++) {
        scanf("%s %lf %s", subName, &subCredit, subGrade);
        subGPA += subCredit * gradeConversion(subGrade);
        if (subGrade[0] != 'P') subCnt += subCredit;
    }

    subGPA /= subCnt;
    printf("%lf", subGPA);

    return 0;
}

double gradeConversion(char subGrade[]) {

    double subScore = 0;
    
    if (subGrade[0] == 'A' && subGrade[1] == '+') subScore = 4.5;
    else if (subGrade[0] == 'A' && subGrade[1] == '0') subScore = 4.0;
    else if (subGrade[0] == 'B' && subGrade[1] == '+') subScore = 3.5;
    else if (subGrade[0] == 'B' && subGrade[1] == '0') subScore = 3.0;
    else if (subGrade[0] == 'C' && subGrade[1] == '+') subScore = 2.5;
    else if (subGrade[0] == 'C' && subGrade[1] == '0') subScore = 2.0;
    else if (subGrade[0] == 'D' && subGrade[1] == '+') subScore = 1.5;
    else if (subGrade[0] == 'D' && subGrade[1] == '0') subScore = 1.0;
    else  subScore = 0.0;

    return subScore;
}