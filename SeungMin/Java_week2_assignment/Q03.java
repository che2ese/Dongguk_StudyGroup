package Java_week2_assignment;

import java.util.Scanner;

public class Q03 {
    // 약수 - https://www.acmicpc.net/problem/1037

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int max = 0;
        int min = 1000000;

        for (int i = 0; i < N; i++) {
            int temp = scanner.nextInt();
            if (temp > max) max = temp;
            if (temp < min) min = temp;
        }
        System.out.println(max * min);

    }
}
