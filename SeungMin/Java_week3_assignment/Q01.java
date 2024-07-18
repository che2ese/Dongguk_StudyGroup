package Java_week3_assignment;

import java.util.Scanner;

public class Q01 {
    // 전투 드로이드 가격 - https://www.acmicpc.net/problem/5361
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < N; i++) {
            double sum = 0;
            sum += 350.34 * scanner.nextInt();
            sum += 230.90 * scanner.nextInt();
            sum += 190.55 * scanner.nextInt();
            sum += 125.30 * scanner.nextInt();
            sum += 180.90 * scanner.nextInt();
            scanner.nextLine();
            System.out.printf("$%.2f\n",sum);
        }
    }
}
