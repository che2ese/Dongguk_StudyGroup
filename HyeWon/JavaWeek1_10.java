package java_1;
import java.util.Scanner;
public class JavaWeek1_10 {
    public static void main(String[] args) {
        System.out.print("1: 상품 입력, 2: 결제, 3: 프로그램 종료");

        int sum=0;
        while(true) {
            Scanner scanner = new Scanner(System.in);
            System.out.print("");
            int num = scanner.nextInt();
            scanner.nextLine(); // 버퍼 비우기

            if (num == 1) {
                System.out.print("상품명을 입력하세요: ");
                String name = scanner.nextLine();
                System.out.print("상품의 가격을 입력하세요: ");
                int price = scanner.nextInt();
                System.out.print("구매 수량을 입력하세요: ");
                int quantity = scanner.nextInt();
                System.out.print("상품명:" + name + "가격: " + price + " 수량: " + quantity + " 합계:" + (price * quantity));

                sum += price * quantity;
            }else if (num == 2)
            {
                System.out.println("총비용: " + sum);
                sum=0;
            }else if(num==3) {
                System.out.print("프로그램을 종료합니다.");
                break;
            }
            else if(num>3||num<1)
                System.out.print("올바른 옵션을 선택해주세요.");
        }

    }
}
