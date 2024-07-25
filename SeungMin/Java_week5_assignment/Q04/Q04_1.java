package Java_week5_assignment.Q04;

class Sample{
    public int a;
    private int b;
    int c;
}

public class Q04_1 {
    public static void main(String[] args) {
        Sample sample = new Sample();
        sample.a = 10;
        // sample.b = 10; // 클래스 Sample에서 private로 선언된 변수이기 때문이다.
        sample.c = 10;
    }
}
