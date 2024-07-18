package Java_week4;
import java.util.*;

public class No_02 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        // 크레인 수 입력
        int n = scanner.nextInt();
        Integer[] cranes = new Integer[n];
        for (int i = 0; i < n; i++) {
            cranes[i] = scanner.nextInt();
        }

        // 박스 수 입력
        int m = scanner.nextInt();
        Integer[] boxes = new Integer[m];
        for (int i = 0; i < m; i++) {
            boxes[i] = scanner.nextInt();
        }

        // 내림차순 정렬
        Arrays.sort(cranes, Collections.reverseOrder());
        Arrays.sort(boxes, Collections.reverseOrder());

        // 모든 박스를 옮길 수 없는 경우
        if (cranes[0] < boxes[0]) {
            System.out.println(-1);
            return;
        }

        int time = 0;
        List<Integer> boxesList = new ArrayList<>(Arrays.asList(boxes));

        while (!boxesList.isEmpty()) {
            int boxIndex = 0;
            for (int i = 0; i < n; i++) {
                if (boxIndex >= boxesList.size()) break;  // 박스가 남아 있지 않은 경우
                if (cranes[i] >= boxesList.get(boxIndex)) {
                    boxesList.remove(boxIndex);
                } else {
                    boxIndex++;
                }
            }
            time++;
        }

        System.out.println(time);
    }
}
