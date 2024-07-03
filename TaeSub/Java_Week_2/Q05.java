package Java_Week_2;
import java.util.Scanner;
public class Q05 {
    public static void main(String[] args) {
        /*
        1.TestCase input > for(;;)
        2. 거스름돈 /25
            거스름돈_1차 / 10
                거스름돈_2차 / 5
                    거스름돈 _3차 /1
        3. 거스름돈 Update = 거스름돈 % 25
         */
        Scanner sc = new Scanner(System.in);
        int T = sc.nextInt(); // testcase
        int[] Q = new int[T];
        int[] D = new int[T];
        int[] N = new int[T];
        int[] P = new int[T];
        for(int i = 0; i<T ; i++){
            int C = sc.nextInt(); // 거스름돈
            Q[i] = C / 25;
            C = C % 25;
            D[i] = C / 10;
            C = C % 10;
            N[i] = C / 5;
            P[i] = C % 5;
        }
        for(int j = 0;j< T; j++){
            System.out.println(Q[j]+" "+ D[j] + " "+ N[j] + " " + P[j]);
        }
    }
}
