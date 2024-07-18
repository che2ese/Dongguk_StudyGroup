package Java_week4;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Arrays;
import java.util.Collections;
import java.util.StringTokenizer;

public class Q02 {
    // 배 - https://www.acmicpc.net/problem/1092
    public static void main(String[] args) throws IOException {
        // 선언 & 입력
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        Integer[] crane = new Integer[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            crane[i] = Integer.parseInt(st.nextToken());
        }
        int M = Integer.parseInt(br.readLine());
        Integer[] box = new Integer[M];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < M; i++) {
            box[i] = Integer.parseInt(st.nextToken());
        }
        int time = 0;
        int cnt = 0;

        // 내림차순 정렬
        Arrays.sort(crane, Collections.reverseOrder());
        Arrays.sort(box, Collections.reverseOrder());

        // 불가능 경우 종료
        if (crane[0] < box[0]) {
            System.out.println("-1");
            return;
        }

        // 연산
        while (true) {
            for (int i = 0; i < N; i++) {
                boolean isAble = false;
                for (int j = 0; j < M; j++) {
                    if (crane[i] >= box[j]) {
                        box[j] = 1000001;
                        cnt++;
                        isAble = true;
                        break;
                    }
                }
                if (!isAble) N--;
            }
            time++;

            // 전부 옮기면 종료
            if (cnt == M) {
                System.out.println(time);
                return;
            }
        }
    }
}
