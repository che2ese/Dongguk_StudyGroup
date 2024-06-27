import java.util.Scanner;
//이상한데


public class p9 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num;
        int loop = 0;
        int sum = 0;
        float average;

        System.out.println("숫자를 입력하세요. 입력을 중단하려면 -1을 입력하세요:");
        while(true){
            num = sc.nextInt();

            if (num == -1){
                break;
            }
            sum += num;
            loop++;
        }
        average = (float) sum/loop;
        System.out.println("입력한 숫자들의 합계 : "+ sum);
        System.out.println("입력한 숫자들의 평균: "+ average);

    }
}
