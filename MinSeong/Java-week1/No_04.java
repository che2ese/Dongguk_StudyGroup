// 사용자로부터 하나의 정수 n 을 입력받고, 입력받은 정수 n 의 구구단을 출력하는 프로그램을 작성하세요.
import java.util.Scanner;

public class No_4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("구구단의 단 수를 입력하세요: ");
        int num = scanner.nextInt();
        System.out.println(num + "단의 구구단");
        for(int i = 1; i < 10; ++i){
            System.out.println(num + "x" + i + "=" + num * i);
        }
    }
}
