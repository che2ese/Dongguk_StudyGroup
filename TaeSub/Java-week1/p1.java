
import java.util.Scanner;

public class p1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name;
        int age;


        System.out.print("당신의 이름을 입력하세요: ");
        name = sc.next();
        System.out.print("당신의 나이를 입력하세요: " );
        age = sc.nextInt();

        System.out.println("당신의 이름은 "+name + "이고, 나이는 "+ age+"살 입니다." );

    }
}
