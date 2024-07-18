package Java_week2;
import java.util.Scanner;
public class No_04 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();

        for (;;) {
            int input = N;
            int len = (int) Math.log10(N);

            for (int i = len; i >= 0; i--) {

                if (input / (int)Math.pow(10,i) == 4)
                    input -= (int)Math.pow(10,i) * 4;
                else if (input / (int)Math.pow(10,i) == 7)
                    input -= (int)Math.pow(10,i) * 7;
                else
                    break;

                if (i == 0) {
                    System.out.println(N);
                    System.exit(0);
                }
            }
            --N;
        }
    }
}
