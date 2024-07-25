package Java_week5_assignment.Q07;

public class Car extends Vihecle {
    private int seat;
    private String color;

    public void set(String name, String color, int seat) {
        setVihecle(name);
        this.color = color;
        this.seat = seat;
    }

    public void get() {
        System.out.print("당신의 자동차는 의자가 " + seat + "개인 " + color + "의 멋진 ");
        getVihecle();
    }
}
