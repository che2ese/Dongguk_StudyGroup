package Java_week2;

import java.util.Scanner;

public class Q04 {
    // 홀수 - https://www.acmicpc.net/problem/2576
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int sum = 0;
        int min = 100;
        for (int i = 0; i < 7; i++) {
            int num = scanner.nextInt();
            if (num % 2 == 1) {
                sum += num;
                if (num < min)
                    min = num;
            }
        }

        if (min == 100) {
            System.out.print("-1");
        } else {
            System.out.println(sum + "\n" + min);
        }

    }
}
