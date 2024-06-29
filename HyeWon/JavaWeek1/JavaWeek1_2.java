package java_1;

import java.util.Scanner;
    public class JavaWeek1_2 {
        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);

            System.out.print("하나의 정수를 입력하세요:");
            int intValue = scanner.nextInt(); // 입력을 int로 가져옵니다.

            if (intValue%2==0) {
                System.out.println("입력한 정수: " + intValue + "는 짝수입니다");
            }else{
                System.out.println("입력한 정수: " + intValue + "는 홀수입니다");
            }

        }
    }
