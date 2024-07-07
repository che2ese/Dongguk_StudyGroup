package Java_week3_assignment;

import java.util.Scanner;

public class Q05 {
    // 생장점 - https://www.acmicpc.net/problem/1703
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {
            int a = scanner.nextInt();
            if (a == 0) break;

            int leaf = 1;

            for (int i = 0; i < a; i++) {
                leaf *= scanner.nextInt();
                leaf -= scanner.nextInt();
            }
            scanner.nextLine();
            System.out.println(leaf);
        }
    }
}
