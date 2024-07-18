package javaWeek3;

import java.util.Scanner;

public class Q02 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        int[] burgers = new int[3];
        burgers[0] = scanner.nextInt();
        int burger = burgers[0];

        for (int i = 0 ; i < 2 ; i++) {
            burgers[i+1] = scanner.nextInt();
            if ( burgers[i] >= burgers[i+1]) {
                burger = burgers[i+1];
            }
        }

        int coke = scanner.nextInt();
        int cider = scanner.nextInt();
        int beverage;

        if ( coke >= cider ) {
            beverage = cider;
        } else {
            beverage = coke;
        }

        System.out.println(burger + beverage - 50);

    }
}
