package Java_week2_assignment;

import java.util.Scanner;

public class Q01 {
    // 가장 큰 금민수 - https://www.acmicpc.net/problem/1526

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt();

        while (true)  {
            int temp = N;
            int len = (int)Math.log10(N);

            for (int i = len; i >= 0; i--) {

                if (temp / (int)Math.pow(10,i) == 4) temp -= (int)Math.pow(10,i) * 4;
                else if (temp / (int)Math.pow(10,i) == 7) temp -= (int)Math.pow(10,i) * 7;
                else break;

                if (i == 0) {
                    System.out.println(N);
                    System.exit(0);
                }
            }
            --N;
        }
    }
}


