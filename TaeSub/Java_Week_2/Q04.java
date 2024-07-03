package Java_Week_2;

import java.util.*;

public class Q04 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        double N = sc.nextDouble();
        int Ans;
        Ans = (int)Math.pow((Math.pow(2,N)+1),2);
        System.out.println(Ans);
    }
}