package javaWeek1;

import java.util.Scanner;

public class JavaWeek1_9re {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int num;
        int sum = 0;
        int i = 0;
        double average;

        System.out.println("숫자를 입력하세요. 입력을 중단하려면 -1을 입력하세요: ");

        while (true) {
            num = scanner.nextInt();
            if (num == -1) {
                System.out.println("입력한 숫자들의 합계: " + sum);
                average = (double)sum / i;
                System.out.println("입력한 숫자들의 평균: " + average);
                break;
            }
            sum += num;
            i++; //반복문 쓸 때 초기값 넣어서 2회 돌려보는 것으로 검토
        }
    }
}

