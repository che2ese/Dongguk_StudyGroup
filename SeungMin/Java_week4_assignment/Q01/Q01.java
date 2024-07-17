package Java_week4_assignment.Q01;

import java.util.Scanner;

public class Q01 {
    /*
    보기와 같이 3일간 상품의 개수를 입력받아 출력하는 프로그램을 작성하라.
    각 날짜별로 상품의 개수를 먼저 입력받고, 상품의 개수에 따라 이름들을 입력받는다.
    입력을 모두 받은 후에는 날짜별로 상품의 목록을 출력한다.
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        String[][] arr = new String[3][];

        for (int i = 0; i < 3; i++) {
            System.out.print((i+1) + "번째날 상품의 개수 : ");
            int num = scanner.nextInt();
            arr[i] = new String[num];
            scanner.nextLine();

            for (int j = 0; j < num; j++) {
                System.out.print("상품의 이름 : ");
                arr[i][j] = scanner.nextLine();
            }
        }

        for (int i = 0; i < 3; i++) {
            System.out.print((i + 1) + "번째날 상품 목록 : ");
            for (int j = 0; j < arr[i].length; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
    }
}
