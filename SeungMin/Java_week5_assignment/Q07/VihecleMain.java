package Java_week5_assignment.Q07;

import java.util.Scanner;

public class VihecleMain {
    /*
    클래스의 맴버 변수는 private로 만든다.
    클래스의 맴버 변수 값의 입력은 set변수() 메소드를 public으로 만든다.
    클래스의 맴버 변수에 저장된 값을 불러오기 위해서 get변수() 메소드를 만든다.
    출력과 같은 결과를 만드는 main함수도 작성하라.
     */
    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        Car car = new Car();
        Bike bike = new Bike();

        while (true) {
            System.out.print("탈것 종류를 고르세요(1.자동차, 2.바이크) : ");
            int num = s.nextInt();
            s.nextLine();
            if (num == 1) {
                System.out.print("자동차 이름 : ");
                String name = s.nextLine();
                System.out.print("자동차 색상 : ");
                String color = s.nextLine();
                System.out.print("자동차 의자 개수 : ");
                int seat = s.nextInt();
                car.set(name, color, seat);
                car.get();
            } else if (num == 2) {
                System.out.print("바이크 이름 : ");
                String name = s.nextLine();
                System.out.print("바이크 색상 : ");
                String color = s.nextLine();
                System.out.print("배기량 : ");
                int cc = s.nextInt();
                bike.set(name, color, cc);
                bike.get();
            } else {
                System.out.println("종료합니다.");
                return;
            }
        }
    }
}
