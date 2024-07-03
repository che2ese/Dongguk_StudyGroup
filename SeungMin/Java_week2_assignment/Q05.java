package Java_week2_assignment;

import java.util.Scanner;

public class Q05 {
    // 세탁소 사장 동혁 - https://www.acmicpc.net/problem/2720

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int quarter = 0;
        int dime = 0;
        int nickel = 0;
        int penny = 0;
        int T = scanner.nextInt();

        for (int i = 0; i < T; i++) {
            int C = scanner.nextInt();
            quarter = C / 25;
            C -= quarter * 25;
            dime = C / 10;
            C -= dime * 10;
            nickel = C / 5;
            C -= nickel * 5;
            penny = C;
            System.out.println(quarter + " " + dime + " " + nickel + " " + penny);
        }

    }
}
