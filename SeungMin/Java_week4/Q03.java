package Java_week4;

import java.util.Scanner;

public class Q03 {
    // 운동 - https://www.acmicpc.net/problem/1173

    static Scanner scanner = new Scanner(System.in);
    static int healthNeedTime = scanner.nextInt();
    static int pulseMin = scanner.nextInt();
    static int pulseMax = scanner.nextInt();
    static int health = scanner.nextInt();
    static int rest = scanner.nextInt();
    static int pulse = pulseMin;
    static int time = 0;
    static int healthTime = 0;

    public static void main(String[] args) {

        if (pulseMin+health > pulseMax) {
            System.out.println("-1");
            return;
        }

        while (true) {
            if (pulse+health <= pulseMax) {
                Health();
            } else {
                Rest();
            }
            if (healthTime == healthNeedTime) {
                System.out.println(time);
                return;
            }
        }
    }

    static void Health() {
        pulse += health;
        time++;
        healthTime++;
    }

    static void Rest() {
        pulse -= rest;
        time++;
        if (pulse <= pulseMin)
            pulse = pulseMin;
    }
}
