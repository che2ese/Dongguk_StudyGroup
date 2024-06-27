import java.util.Scanner;

public class p5 {
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        int tmp;

        tmp = b;
        b = a;
        a = tmp;
        System.out.println("a = "+ a);
        System.out.println("b = "+ b);

    }
}
