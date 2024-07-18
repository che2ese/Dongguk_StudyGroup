package Java_week4;

import java.util.Scanner;

public class Q01 {
    // 너의 평점은 - https://www.acmicpc.net/problem/25206
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String name;
        String grade;
        double credit = 0;
        double GPA = 0;
        double cnt = 0;

        for (int i = 0; i < 20; i++) {
            name = scanner.next();
            credit = scanner.nextDouble();
            grade = scanner.next();

            GPA += credit * gradeConversion(grade);
            if (grade.charAt(0) != 'P')
                cnt += credit;
        }

        System.out.printf("%.6f", (GPA / cnt));

    }

    static double gradeConversion(String grade) {
        double score = 0;
        if (grade.charAt(0) == 'A') score = 4;
        else if (grade.charAt(0) == 'B') score = 3;
        else if (grade.charAt(0) == 'C') score = 2;
        else if (grade.charAt(0) == 'D') score = 1;
        else score = 0;

        if (grade.length() == 2 && grade.charAt(1) == '+') score += 0.5;
        return score;
    }
}
