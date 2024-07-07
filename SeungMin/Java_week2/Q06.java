package Java_week2;

import java.util.Scanner;

public class Q06 {
    // 크로아티아 알파벳 - https://www.acmicpc.net/problem/2941
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String word = scanner.nextLine() + "aa";
        int cnt = -2;

        for (int i = 0; i < word.length(); i++) {
            if (word.charAt(i) == 'c' && (word.charAt(i+1) == '=' || word.charAt(i+1) == '-')) {
                i++;
            } else if (word.charAt(i) == 'd') {
                if (word.charAt(i+1) == 'z' && word.charAt(i+2) == '=')
                    i += 2;
                else if (word.charAt(i+1) == '-')
                    i++;
            } else if ((word.charAt(i) == 'l' || word.charAt(i) == 'n') && word.charAt(i+1) == 'j')
                i++;
            else if ((word.charAt(i) == 's' || word.charAt(i) == 'z') && word.charAt(i+1) == '=')
                i++;
            cnt++;
        }
        System.out.println(cnt);

    }
}
