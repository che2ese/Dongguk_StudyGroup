package Java_week4_assignment.Q05;

import java.util.Scanner;

public class CalculatorMain {
    /*
    다음과 같은 계산기를 완성하라.

    SetValue() : 두개의 피연산자를 객체의 변수 a, b에 저장
    run() : 연산자를 받아서 적절한 사칙연산을 수행함.
     */
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int a, b;
        String op;

        System.out.println("수식을 입력하세요. ex)1 + 2");
        a = s.nextInt();
        op = s.next();
        b = s.nextInt();

        Calculator c = new Calculator();
        c.SetValue(a, b);
        System.out.println(a + " " + op + " " + b + " = " + c.run(op));

        s.close();
    }
}
