package Java_week5_assignment.Q03;

public class Rect {
    int x1, y1;
    int x2, y2;

    Rect() {
        x1 = 0;
        y1 = 0;
        x2 = 1;
        y2 = 1;
        System.out.println("(" + x1 + ", " + y1 + "), (" + x2 + ", " + y2 + ")점을 이용한 사각형이 만들어졌습니다.");
    }

    Rect(int x, int y) {
        this.x2 = x;
        this.y2 = y;
        x1 = 0;
        y1 = 0;
        System.out.println("(" + x1 + ", " + y1 + "), (" + x2 + ", " + y2 + ")점을 이용한 사각형이 만들어졌습니다.");
    }

    Rect(int x1, int y1, int x2, int y2) {
        this.x1 = x1;
        this.y1 = y1;
        this.x2 = x2;
        this.y2 = y2;
        System.out.println("(" + x1 + ", " + y1 + "), (" + x2 + ", " + y2 + ")점을 이용한 사각형이 만들어졌습니다.");

    }

    private int getWidth(int x1, int x2) {
        return Math.abs(x1 - x2);
    }

    private int getHeight(int y1, int y2) {
        return Math.abs(y1 - y2);
    }

    public int getArea() {
        return getWidth(x1, x2) * getHeight(y1, y2);
    }

    public int getRound() {
        return (getWidth(x1, x2) + getHeight(y1, y2)) * 2;
    }
}
