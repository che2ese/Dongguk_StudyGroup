package java_week2;

import java.util.Scanner;

public class Q03 {
    // 약수 - https://www.acmicpc.net/problem/1037
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int max = 0;
        int min = 1000000;

        for (int i = 0 ; i < n ; i++) {
            int num = scanner.nextInt();
            if (num > max) {
                max = num;
            }
            if (num < min) {
                min = num;
            }
        }
        System.out.println(min*max);
    }
}
