package Java_week6.Q02.main;

import Java_week6.Q02.etc.Calc;

public class MainApp {
    public static void main(String[] args) {
        Calc c = new Calc(10, 20);
        System.out.println(c.sum());
    }
}