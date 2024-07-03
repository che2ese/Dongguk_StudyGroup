package java_week2;

import java.util.Scanner;

public class Q05 {
    // 세탁소 사장 동혁 - https://www.acmicpc.net/problem/2720

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int T = scanner.nextInt();

        for (int i = 0 ; i < T ; i++) {
            int cent = scanner.nextInt();
            int quarter = cent / 25;
            System.out.print(quarter + " ");
            cent %= 25;
            int dime = cent / 10;
            System.out.print(dime + " ");
            cent %= 10;
            int nickel = cent / 5;
            System.out.print(nickel + " ");
            cent %= 5;
            int penny = cent;
            System.out.println(penny);
        }
    }

}