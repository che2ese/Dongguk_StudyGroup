package Java_week3_assignment;

import java.util.Scanner;

public class Q02 {
    // 상근날드 - https://www.acmicpc.net/problem/5543
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int burgerMin = 2000;
        int drinkMin = 2000;

        for (int i = 0; i < 3; i++) {
            int burger = scanner.nextInt();
            if (burger < burgerMin) burgerMin = burger;
        }
        for (int i = 0; i < 2; i++) {
            int drink = scanner.nextInt();
            if (drink < drinkMin) drinkMin = drink;
        }
        System.out.println(drinkMin + burgerMin - 50);

    }
}
