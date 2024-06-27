package java_1;
import java.util.Scanner;
public class JavaWeek1_9 {
    public static void main(String[] args) {
        int sum =0; //나눗셈 해야해서 double 이용
        double count=0;
        Scanner scanner = new Scanner(System.in);
        System.out.print("숫자를 입력하세요. 입력을 중단하려면 -1을 입력하세요: \n");
        while(true)
        {
            int num = scanner.nextInt();
            if(num==-1)
                break;
            sum+=num;
            count++;
        }
        double average= sum/count ;
        System.out.println("입력한 숫자들의 합계:"+sum);
        System.out.print("입력한 숫자들의 평균:"+average);

    }
}
