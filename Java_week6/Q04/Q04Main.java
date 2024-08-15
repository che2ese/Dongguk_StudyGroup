package Java_week6.Q04;

import java.util.Random;
import java.util.Scanner;

public class Q04Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();

        for (;;) {
            System.out.print("철수[가위(1), 바위(2), 보(3), 끝내기(4)]>>");
            int myValue = scanner.nextInt();
            int randomValue = random.nextInt(3) + 1;
            if (myValue == 4) break;

            printValue("철수", myValue);
            System.out.print(" : ");
            printValue("컴퓨터", randomValue);
            System.out.println();

            if (myValue == randomValue){
                System.out.println("비겼습니다.");
            } else if ((myValue == 1 && randomValue == 3) ||
                       (myValue == 2 && randomValue == 1) ||
                       (myValue == 3 && randomValue == 2)) {
                System.out.println("철수가 이겼습니다.");
            } else {
                System.out.println("컴퓨터가 이겼습니다.");
            }

        }
    }

    public static void printValue(String name ,int value) {
        System.out.print(name);

        if (value == 1)
            System.out.print("(가위)");
        else if (value == 2)
            System.out.print("(바위)");
        else if (value == 3)
            System.out.print("(보)");
    }
}
