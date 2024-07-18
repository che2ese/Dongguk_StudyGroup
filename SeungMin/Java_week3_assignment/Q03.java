package Java_week3_assignment;

import java.util.Scanner;

public class Q03 {
    // 이상한 곱셈 - https://www.acmicpc.net/problem/1225
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String strA = scanner.next();
        String strB = scanner.next();
        long sum = 0;

        for (int i = 0; i < strA.length(); i++) {
            for (int j = 0; j < strB.length(); j++) {
                int intA = (int)strA.charAt(i) - 48;
                int intB = (int)strB.charAt(j) - 48;
                sum += (long)intA * intB;
            }
        }
        System.out.println(sum);
    }
}
