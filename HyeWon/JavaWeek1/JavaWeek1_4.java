package java_1;
import java.util.Scanner;
public class JavaWeek1_4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("구구단의 수를 입력하세요:");
        int num = scanner.nextInt();

        for (int i = 1; i < 10; i++) {
            System.out.println(num + "*" + i + "=" + num * i);
        }
    }
}
