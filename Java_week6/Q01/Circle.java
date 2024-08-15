package Java_week6.Q01;

import java.util.Objects;

public class Circle {
    private int x;
    private int y;
    private int radius;

    public Circle(int x, int y, int radius) {
        this.x = x;
        this.y = y;
        this.radius = radius;
    }

    @Override
    public String toString() {
        return "Circle(" + x + "," + y + ")반지름" + radius;
    }

    boolean equals(Circle b) {
        return this.x == b.x && this.y == b.y;
    }
}
