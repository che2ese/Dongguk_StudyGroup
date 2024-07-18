package Java_week4;
import java.util.*;

public class No_03 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int N = scanner.nextInt(); // 운동해야 하는 시간
        int m = scanner.nextInt(); // 초기 맥박
        int M = scanner.nextInt(); // 최대 맥박
        int T = scanner.nextInt(); // 운동 시 증가하는 맥박
        int R = scanner.nextInt(); // 휴식 시 감소하는 맥박

        if (m + T > M) {
            // 운동을 할 수 없는 경우
            System.out.println(-1);
            return;
        }

        int currentPulse = m;
        int exerciseTime = 0;
        int totalTime = 0;

        while (exerciseTime < N) {
            if (currentPulse + T <= M) {
                // 운동할 수 있는 경우
                currentPulse += T;
                exerciseTime++;
            } else {
                // 운동할 수 없어서 휴식을 취하는 경우
                currentPulse = Math.max(currentPulse - R, m);
            }
            totalTime++;
        }

        System.out.println(totalTime);
    }
}
