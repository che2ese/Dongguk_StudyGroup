package Java_week2;

import java.util.Scanner;

public class Q01 {
    // 럭비 클럽 - https://www.acmicpc.net/problem/2083
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        while (true) {
            String name = scanner.next();
            int age = scanner.nextInt();
            int weight = scanner.nextInt();

            if (name.equals("#") && age == 0 && weight == 0) {
                break;
            }

            if (age > 17 || weight >= 80) {
                System.out.println(name + " Senior");
            } else {
                System.out.println(name + " Junior");
            }
        }
    }
}
