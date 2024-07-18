package Java_week4_assignment.Q05;

public class Calculator {
    int a, b;

    public void SetValue(int a, int b) {
        this.a = a;
        this.b = b;
    }
    public int run(String op) {
        if (op.equals("+")) {
            return a+b;
        } else if (op.equals("-")) {
            return a-b;
        } else if (op.equals("*")) {
            return a*b;
        } else {
            return a/b;
        }
    }
}
