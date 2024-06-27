package java_1;
import java.util.Scanner;
public class JavaWeek1_7 {
    public static void main(String[] args) {
       while(true) {
           Scanner scanner = new Scanner(System.in);
           System.out.print("이름을 입력하세요(종료를 입력하면 종료): ");
           String name = scanner.nextLine();

           if(name.equals("종료")) //문자열에서는 == 말고 .equals()써야함
               break;

           System.out.print("나이를 입력하세요: ");
           int age = scanner.nextInt();

           System.out.print("입력한 이름: " + name + ",나이:" + age);
       }
        System.out.print("프로그램을 종료합니다.");
    }
}
