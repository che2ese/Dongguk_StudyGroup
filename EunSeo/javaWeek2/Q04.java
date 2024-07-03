package java_week2;

import java.util.Scanner;

public class Q04 {
    // 중앙 이동 알고리즘 - https://www.acmicpc.net/problem/2903
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();
        int answer = 1;

        for (int i = 0 ; i < n ; i++) {
            answer *= 2;
        }

        answer = (answer + 1) * (answer + 1);
        System.out.println(answer);

    }
}