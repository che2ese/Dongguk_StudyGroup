package Java_Week_2;

import java.util.Scanner;

public class Q01 {

    static boolean isLuckyNumber(int num) {
        while (num > 0) {
            int digit = num % 10;
            if (digit != 4 && digit != 7) {
                return false;
            }
            num /= 10;
        }
        return true;
    }

    static int FindNum(int N) {
        for (int i = N; i >= 4; i--) {
            if (isLuckyNumber(i)) {
                return i;
            }
        }
        return 4; //minimum number = 4
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int largestLuckyNumber = FindNum(N);
        System.out.println(largestLuckyNumber);
    }
}