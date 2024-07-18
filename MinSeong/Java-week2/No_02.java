package Java_week2;

import java.util.Scanner;

public class No_02 {
    // https://www.acmicpc.net/problem/2033
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int t = 1;
        int num = n;

        while(n > 9){
            int a = n % 10;
            if(a >= 5){
                num += (10 - a) * t;
                n += 10;
            }
            else{
                num -= a * t;
            }
            t *= 10;
            n /= 10;
        }
        System.out.print(num);
    }
}
