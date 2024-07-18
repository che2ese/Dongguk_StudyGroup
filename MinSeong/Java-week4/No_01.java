package Java_week4;
import java.util.Scanner;
public class No_01 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double totalGradePoints = 0.0;
        double totalCredits = 0.0;

        for (int i = 0; i < 20; i++) {
            String subject = scanner.next();
            double credit = scanner.nextDouble();
            String grade = scanner.next();

            double gradePoint = convertGradeToPoint(grade);
            if (gradePoint >= 0) {
                totalGradePoints += credit * gradePoint;
                totalCredits += credit;
            }
        }

        double gpa = totalGradePoints / totalCredits;
        System.out.printf("%.6f\n", gpa);
    }

    private static double convertGradeToPoint(String grade) {
        switch (grade) {
            case "A+": return 4.5;
            case "A0": return 4.0;
            case "B+": return 3.5;
            case "B0": return 3.0;
            case "C+": return 2.5;
            case "C0": return 2.0;
            case "D+": return 1.5;
            case "D0": return 1.0;
            case "F": return 0.0;
            default: return -1;
        }
    }
}
