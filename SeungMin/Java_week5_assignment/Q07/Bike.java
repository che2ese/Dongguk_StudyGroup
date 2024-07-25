package Java_week5_assignment.Q07;

public class Bike extends Vihecle {
    private int cc;
    private String color;

    public void set(String name, String color, int cc) {
        setVihecle(name);
        this.color = color;
        this.cc = cc;
    }

    public void get() {
        System.out.print("당신의 바이크는 " + cc + "cc " + color + "의 멋진 ");
        getVihecle();
    }
}
