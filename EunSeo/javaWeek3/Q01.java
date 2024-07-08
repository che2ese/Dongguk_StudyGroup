package javaWeek3;

import java.util.Scanner;

public class Q01 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        double[] prices = {350.34, 230.90, 190.55, 125.30, 180.90};
        int[] counts = new int[5];
        double total = 0;
        double sum = 0;

        int n = scanner.nextInt();

        for (int i = 0 ; i < n ; i++) {
            for (int j = 0 ; j < 5 ; j++ ) {
                 counts[j] = scanner.nextInt();
                 total = counts[j] * prices[j];
                 sum += total;
            }
            System.out.println("$" + sum);
        }
    }
}
