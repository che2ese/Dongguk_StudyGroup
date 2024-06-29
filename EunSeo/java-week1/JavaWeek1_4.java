package javaWeek1;

import java.util.Scanner;

public class JavaWeek1_4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("구구단의 단 수를 입력해주세요: ");
        int num = scanner.nextInt();

        System.out.println(num + "단의 구구단:");

        for (int i = 1; i <= 9; i++) {
            int result = 8 * i;
            System.out.println("8 x " + i + " = " + 8 * i);
        }
    }
}
