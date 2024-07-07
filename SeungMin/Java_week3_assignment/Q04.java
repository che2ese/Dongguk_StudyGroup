package Java_week3_assignment;

import java.util.Scanner;

public class Q04 {
    // 파티가 끝나고 난 뒤 - https://www.acmicpc.net/problem/2845
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int L = scanner.nextInt();
        int P = scanner.nextInt();
        scanner.nextLine();

        for (int i = 0; i < 5; i++) {
            System.out.print(scanner.nextInt() - L * P + " ");
        }
    }
}
