package java_1;
import java.util.Scanner;
public class JavaWeek1_6 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("첫번째 숫자를 입력하세요: ");
        int num1 = scanner.nextInt();
        System.out.print("두번째 숫자를 입력하세요: ");
        int num2 = scanner.nextInt();

        System.out.print("두 숫자 사이의 모든 정수: ");
        for(int i=0;i<=num2-num1;i++)
        {
            System.out.print((num1+i));
            if (i<num2-num1)
            {
                System.out.print(",");
            }
        }
    }
}
