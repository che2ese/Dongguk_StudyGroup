package java_2;
import java.util.Arrays;
import java.util.Scanner;
public class JavaWeek2_3 {
    public static void main(String[] args) {
        int answer=0;

        Scanner scanner = new Scanner(System.in);
        System.out.println();
        int number = scanner.nextInt();

        int[] divisor = new int[number];
        for(int i=0;i<number;i++)
        {
            System.out.print("");
            divisor[i]=scanner.nextInt();
        }

        Arrays.sort(divisor);

        answer=divisor[0]*divisor[number-1];
        System.out.println(+answer);

    }
}
