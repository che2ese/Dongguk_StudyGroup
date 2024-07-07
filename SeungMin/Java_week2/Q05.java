package Java_week2;

import java.util.Scanner;

public class Q05 {
    // 저항 - https://www.acmicpc.net/problem/1076
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String color1 = scanner.nextLine();
        String color2 = scanner.nextLine();
        String color3 = scanner.nextLine();
        long ans = ((long) changeColor(color1)*10 + changeColor(color2)) * changeColor3(color3);
        System.out.println(ans);
    }

    static int changeColor(String color) {
        return switch (color) {
            case "black" -> 0;
            case "brown" -> 1;
            case "red" -> 2;
            case "orange" -> 3;
            case "yellow" -> 4;
            case "green" -> 5;
            case "blue" -> 6;
            case "violet" -> 7;
            case "grey" -> 8;
            default -> 9;
        };
    }

    static int changeColor3(String color) {
        return switch (color) {
            case "black" -> 1;
            case "brown" -> 10;
            case "red" -> 100;
            case "orange" -> 1000;
            case "yellow" -> 10000;
            case "green" -> 100000;
            case "blue" -> 1000000;
            case "violet" -> 10000000;
            case "grey" -> 100000000;
            default -> 1000000000;
        };
    }
}
