package Java_Week_2;

import java.util.*;
// ArrayIndexOutOfBoundsException 해결해야함

public class Q03 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int TestCase = sc.nextInt();

        int[] div = new int[TestCase]; //약수

        String num = sc.next();
        String[] num1 = num.split(" ");
        int Max=0;
        if(num1.length  == TestCase) {
            for (int i = 0; i < TestCase; i++) {
                div[i] = Integer.parseInt(num1[i]);
            }
            for (int j = 0; j < TestCase; j++) {
                if (Max <= div[j]) {
                    Max = div[j];
                } else {
                    Max = Max;
                }
            }
            System.out.println(Max * 2);
        }else{
            System.out.println("잘못 입력함 ㅅㄱ");
        }

    }
}
