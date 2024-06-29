package javaWeek1;

import java.util.Scanner;

public class JavaWeek1_2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("하나의 정수를 입력하세요: ");
        int num = scanner.nextInt();

        if (num % 2 == 0) {
            System.out.print("입력한 숫자 " + num + "는 짝수입니다.");
        }
    }
}
