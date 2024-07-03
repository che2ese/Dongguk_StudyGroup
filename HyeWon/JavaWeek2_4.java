package java_2;
import java.util.Arrays;
import java.util.Scanner;
public class JavaWeek2_4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("");
        int number = scanner.nextInt();

        int sum=2;
        if (number==1)
            System.out.println("4");
        else
        {   int times=1;
            sum = 3;
            for(int j=1;j<number;j++)
                {
                    times=times*2;
                    sum+=times;
                }
            int total = sum*sum;
            System.out.println(+total);
        }
    }
}
