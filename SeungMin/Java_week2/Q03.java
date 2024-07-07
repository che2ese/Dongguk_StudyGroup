package Java_week2;

import java.util.Scanner;
import java.util.Arrays;

public class Q03 {
    // 베스트셀러 - https://www.acmicpc.net/problem/1302
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int N = scanner.nextInt();
        scanner.nextLine();
        String[] arrTemp = new String[N];
        String[] arrMain = new String[N];
        int[] arrCnt = new int[N];

        for (int i = 0; i < N; i++) {
            arrTemp[i] = scanner.nextLine();
        }
        Arrays.sort(arrTemp);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (arrCnt[j] == 0) {
                    arrCnt[j] += 1;
                    arrMain[j] = arrTemp[i];
                    break;
                } else if (arrMain[j].equals(arrTemp[i])) {
                    arrCnt[j] += 1;
                    break;
                }
            }
        }

        int maxCnt = 0;
        int maxi = 0;
        for (int i = 0; i < N; i++) {
            if (arrCnt[i] > maxCnt) {
                maxCnt = arrCnt[i];
                maxi = i;
            }
        }
        System.out.println(arrMain[maxi]);
    }

}
