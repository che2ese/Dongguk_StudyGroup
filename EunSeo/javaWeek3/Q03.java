package javaWeek3;

import java.util.Scanner;

public class Q03 {

    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);

        int[] nums1 = new int[5];
        int[] nums2 = new int[5];

        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();
        int sum = 0;

        for (int i = 4 ; i >= 0 ; i--) {
            nums1[i] = num1 / (int) Math.pow(10, i);
            if (nums1[i] > 9) {
                nums1[i] = 0;
            }
            num1 %= (int) Math.pow(10, i);
            nums2[i] = num2 / (int) Math.pow(10, i);
            if (nums2[i] > 9) {
                nums2[i] = 0;
            }
            num2 %= (int) Math.pow(10, i);
        }

        for (int i = 0 ; i < 5 ; i++) {
            for (int j = 0 ; j < 5 ; j++) {
                sum += nums1[i] * nums2[j];
            }
        }

        System.out.println(sum);
    }
}

