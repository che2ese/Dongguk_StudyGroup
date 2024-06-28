package javaWeek1;

import java.util.Scanner;

public class JavaWeek1_9 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while (true) {

            System.out.print("숫자를 입력하세요. 입력을 중단하려면 -1을 입력하세요: ");
            int num = scanner.nextInt(); //출력은 반복문 내에 들어가야 함.
            int sum = 0; //변수 선언은 반복문 내에 하지 않는 것이 좋음 -> 변수 선언이 반복되므로.
            int i = 1;
            double average = 0;

            if (num == -1) {
                System.out.println("입력한 숫자들의 합계: " + sum);
                average = sum / 3;
                System.out.println("입력한 숫자들의 평균: " + average);
                break;
            }

            sum += num;
            i++;
        }
    }
}

