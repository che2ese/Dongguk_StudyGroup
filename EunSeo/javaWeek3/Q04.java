package javaWeek3;

import java.util.Scanner;

public class Q04 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int L = scanner.nextInt();
        int P = scanner.nextInt();
        int[] peopleCounts = new int[5];

        for (int i = 0 ; i < 5 ; i++) {
            peopleCounts[i] = scanner.nextInt();
            System.out.println(L * P - peopleCounts[i]);
        }

    }
}
