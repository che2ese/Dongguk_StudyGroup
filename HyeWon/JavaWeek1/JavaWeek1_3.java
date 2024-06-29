package java_1;
import java.util.Scanner;
public class JavaWeek1_3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("음식의 이름을 입력하세요:");
        String foodName  = scanner.nextLine();

        System.out.print("음식의 가격을 입력해주세요:");
        int foodPrice = scanner.nextInt();

        System.out.print("음식의 수량을 입력해주세요:");
        int foodQuantity = scanner.nextInt();

        int sum= foodPrice*foodQuantity;

        System.out.println("" + foodName+foodQuantity+"를 주문하셨습니다. 총 가격은 "+sum+"입니다");
    }
}
