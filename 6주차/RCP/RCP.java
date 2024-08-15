package RCP;
import java.util.Scanner;

public class RCP {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        for(;;){
            System.out.print("철수[가위(1),바위(2),보(3),끝내기(4)]>>");
            int human = sc.nextInt();
            int computer = (int) (Math.random()* 3)+ 1;

            if(human == 4){
                break;
            }

            if(human == 1 && computer ==1) {
                System.out.println("철수(가위):컴퓨터(가위)");
                System.out.println("비겼음");
            } else if (human == 1 && computer ==2) {
                System.out.println("철수(가위):컴퓨터(바위)");
                System.out.println("컴퓨터가 이겼습니다.");
            } else if (human == 1 && computer ==3) {
                System.out.println("철수(가위):컴퓨터(보)");
                System.out.println("철수가 이겼습니다.");
            }else if (human ==2 && computer ==1 ){
                System.out.println("철수(바위):컴퓨터(가위)");
                System.out.println("철수가 이겼습니다.");
            } else if (human == 2 && computer ==2) {
                System.out.println("철수(바위):컴퓨터(바위)");
                System.out.println("비겼음");
            } else if (human ==2 && computer ==3) {
                System.out.println("철수(바위):컴퓨터(보)");
                System.out.println("컴퓨터가 이겼습니다.");
            } else if (human ==3 && computer ==1 ) {
                System.out.println("철수(보):컴퓨터(가위)");
                System.out.println("컴퓨터가 이겼습니다.");
            } else if (human ==3 && computer ==2) {
                System.out.println("철수(보):컴퓨터(바위)");
                System.out.println("철수가 이겼습니다.");
            } else if (human == 3 && computer == 3) {
                System.out.println("철수(보):컴퓨터(보)");
                System.out.println("비겼음");
            }else{
                System.out.println("잘못된 수를 입력했습니다.");
            }
        }

    }
}
