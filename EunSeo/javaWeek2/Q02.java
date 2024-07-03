package javaWeek2;

import java.util.Scanner;

public class Q02 {
    // 임시 반장 정하기 - https://www.acmicpc.net/problem/1268
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt();

        int[][] classes = new int[n][5];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 5; j++) {
                classes[i][j] = scanner.nextInt();
            }
        }

        for (int i = 0 ; i < n ; i++) {
            int sum[i] = 0;
            for (int j = 0 ; j < 5 ; j++) {
                if (classes[i][j]
            }
        }

        //1번 학생과 1학년 때, 2학년 때 ... 5학년 때 같은 반인 학생 수 찾기 -> 학생 수 sum
        //이걸 n번 학생까지 반복
        //학생 수 sum의 max 찾는 코드 -> if문
    }
}
