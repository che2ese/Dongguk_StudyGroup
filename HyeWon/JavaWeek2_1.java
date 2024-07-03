package java_2;
import java.util.Arrays;
import java.util.Scanner;
public class JavaWeek2_1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println();
        int number = scanner.nextInt();

        while (number%10 != 4 && number%10 != 7) // !=를 쓴다
            number--;

        if(number<100)
        {

        }


    }
}
