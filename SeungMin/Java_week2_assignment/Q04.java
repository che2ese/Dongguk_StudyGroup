package Java_week2_assignment;

import java.util.Scanner;

public class Q04 {
    // 중앙 이동 알고리즘 - https://www.acmicpc.net/problem/2903

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int ans = 1;
        for (int i = 0; i < N; i++) {
            ans *= 2;
        }
        ans = (ans+1) * (ans+1);
        System.out.println(ans);
    }
}
