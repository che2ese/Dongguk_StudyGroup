package java_2;
import java.util.Arrays;
import java.util.Scanner;
public class JavaWeek2_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("");
        int number = scanner.nextInt();

        int[][] student = new int[number][5];
        for (int i = 0; i < number; i++) {
            for (int j = 0; j < 5; j++) {
                System.out.print("");
                student[i][j] = scanner.nextInt();
            }
            System.out.println("");
        }

        for(int i=0;i<number;i++) {
            for (int j = 0; j < 5; j++) {
                if (student[i][j]==student[][j])
                {

                }
            }
        }
    }
}
