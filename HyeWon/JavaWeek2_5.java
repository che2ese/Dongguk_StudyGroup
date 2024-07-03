package java_2;
import java.util.Arrays;
import java.util.Scanner;
public class JavaWeek2_5 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("");
        int number = scanner.nextInt();

        int[] money; //배열 변수 선언
        money = new int[number]; //배열 생성
        int[] quarter= new int[number];
        int[] dime=new int[number];
        int[] nickel=new int[number];
        int[] penny=new int[number];
//변수

        for(int i=0;i<number;i++)
        {
           //앞에 한 번 썼으면 안 써도 됨 Scanner scanner = new Scanner(System.in);
            System.out.println("");
            money[i] = scanner.nextInt();
        }

        for(int i=0;i<number;i++)
        {
            int amount = money[i]; // 원래 금액 저장
            quarter[i] = amount / 25;
            amount %= 25;
            dime[i] = amount / 10;
            amount %= 10;
            nickel[i] = amount / 5;
            amount %= 5;
            penny[i] = amount;
            System.out.println(+quarter[i]+""+dime[i]+""+nickel[i]+""+penny[i]);
        }

    }
}
