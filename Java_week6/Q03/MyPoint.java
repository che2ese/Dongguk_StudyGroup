package Java_week6.Q03;

public class MyPoint {
    private int x;
    private int y;

    public MyPoint(int x, int y) {
        this.x = x;
        this.y = y;
    }

    @Override
    public String toString() {
        return "Point(" + x + "," + y + ")";
    }

    public boolean equals(MyPoint q) {
        return this.x == q.x && this.y == q.y;
    }
}
