package Java_week2_assignment;

import java.util.Scanner;

public class Q02 {
    // 임시 반장 정하기 - https://www.acmicpc.net/problem/1268

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();
        int[][] arrClass = new int[N][5];
        int[][] arrMate = new int[N][N];

        int nMate = 0;
        int nMateMax = -1;
        int leader = 0;

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < 5; j++) {
                arrClass[i][j] = scanner.nextInt();
            }
        }

        for (int k = 0; k < 5; k++) {
            for (int i = 0; i < N-1; i++) {
                for (int j = i+1; j < N; j++) {
                    if (arrClass[i][k] == arrClass[j][k]) {
                        arrMate[i][j] = 1;
                        arrMate[j][i] = 1;
                    }
                }
            }
        }

        for (int i = 0; i < N; i++) {
            nMate = 0;
            for (int j = 0; j < N; j++) {
                nMate += arrMate[i][j];
            }
            if (nMate > nMateMax) {
                leader = i+1;
                nMateMax = nMate;
            }
        }
        System.out.print(leader);
    }
}
