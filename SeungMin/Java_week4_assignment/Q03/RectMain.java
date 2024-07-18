package Java_week4_assignment.Q03;

public class RectMain {
    /*
    패키지를 만들어 Rect 클래스와 Exam 클래스를 생성하라.

    생성자는 점을 없을때는 (0,0) (1,1)을 대각선으로
    가지는 사각형, 점이 하나일때는 (0,0), (x,y)를 대각
    선으로 가지는 사각형, 점이 두개 일때는 (x1, y1),
    (x2, y2)를 대각선으로 가지는 사각형을 생성한다.
    Rect 클래스의 메소드들은 주석에 맞추어 작성한다.
    실행했을 때의 보기와 같은 결과가 나오도록 작성하시오.
     */

    public static void main(String[] args) {
        Rect r1 = new Rect();
        System.out.println("사각형의 면적은 : " + r1.getArea() + ", 사각형의 둘레는 : " + r1.getRound());
        Rect r2 = new Rect(30, 30);
        System.out.println("사각형의 면적은 : " + r2.getArea() + ", 사각형의 둘레는 : " + r2.getRound());
        Rect r3 = new Rect(10, 10, 50, 50);
        System.out.println("사각형의 면적은 : " + r3.getArea() + ", 사각형의 둘레는 : " + r3.getRound());

    }
}
