package javaWeek3;

import java.util.Scanner;

public class Q05 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int result = 1;

        while (true) {

            int a = scanner.nextInt();

            if (a != 0) {
                for (int i = 0 ; i < a ; i++) {
                    int splittingFactor = scanner.nextInt();
                    int cut = scanner.nextInt();
                    result = result * splittingFactor - cut;
                }
                System.out.println(result);
                result = 1;
            } else {
                break;
            }
        }
    }
}
