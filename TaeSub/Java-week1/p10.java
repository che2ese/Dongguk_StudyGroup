import java.util.Scanner;

public class p10 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int option;
        int total = 0;

        String name;
        int price;
        int quantity;



        while(true) {
            System.out.println("1: 상품 입력, 2: 결제, 3: 프로그램 종료");
            option = sc.nextInt();
            if(option ==1) {
                System.out.print("상품명을 입력하세요: ");
                name = sc.next();
                System.out.print("상품의 가격을 입력하세요: ");
                price = sc.nextInt();
                System.out.print("구매 수량을 입력하세요: ");
                quantity = sc.nextInt();
                System.out.println("상품명: " + name + " 가격: " + price + " 수량: " + quantity + " 합계: " + price * quantity);
                total += price * quantity;


            }
            else if(option==2) {
                System.out.println("총비용: " + total);


            } else if (option == 3) {
                System.out.println("프로그램을 종료합니다.");

                break;

            }else{
                break;
            }
        }
    }
}
