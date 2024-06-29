package javaWeek1;

import java.util.Scanner;

public class JavaWeek1_6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("첫 번째 숫자를 입력하세요: ");
        int num1 = scanner.nextInt();
        System.out.print("두 번째 숫자를 입력하세요: ");
        int num2 = scanner.nextInt();

        if (num1 > num2) {
            int temp = num1;
            num1 = num2; //변수 선언은 한 번만.
            num2 = temp;
        }

        System.out.print("두 숫자 사이의 모든 정수:");
        int i = num1;

        while (true) {
            System.out.print(i);
            i++;

            if (i > num2) {
            break;}
            System.out.print(",");
        }
    }
}
