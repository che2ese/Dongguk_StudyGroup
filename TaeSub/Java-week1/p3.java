import java.util.Scanner;

public class p3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String foodName;
        int foodPrice;
        int foodQuantity;

        System.out.print("음식 이름을 입력해주세요:");
        foodName = sc.next();
        System.out.print("음식의 가격을 입력해주세요: ");
        foodPrice = sc.nextInt();
        System.out.print("음식의 수량을 입력해주세요: ");
        foodQuantity = sc.nextInt();

        System.out.println(foodName + " "+ foodQuantity + "개를 주문하셧습니다. 총 가격은 "+ foodPrice*foodQuantity+"원 입니다.");
    }
}
