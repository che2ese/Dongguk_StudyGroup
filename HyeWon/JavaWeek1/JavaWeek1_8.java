package java_1;

import java.util.Scanner;
import java.util.Scanner;
public class JavaWeek1_8 {
    public static void main(String[] args) {
        while(true) {
            Scanner scanner = new Scanner(System.in);
            System.out.print("상품의 가격을 입력하세요 (-1을 입력하면 종료): ");
            int price = scanner.nextInt();

            if(price==-1)
                break;

            System.out.print("구매하려는 수량을 입력하세요: ");
            int quantity = scanner.nextInt();

            System.out.print("총비용: "+price*quantity+"\n");
        }
        System.out.print("프로그램을 종료합니다.");
    }
}
