package Java_week2;

import java.util.Scanner;

public class Q02 {
    // 반올림 - https://www.acmicpc.net/problem/2033
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        double n = scanner.nextDouble();
        int len = (int)Math.log10(n)+1;
        for (int i = 1; i < len; i++) {
            int temp = (int)Math.pow(10, i);
            n = Math.round(n/temp)* temp;
        }
        System.out.println((int)n);
    }
}

