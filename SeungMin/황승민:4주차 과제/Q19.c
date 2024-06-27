
// 빗물 - https://www.acmicpc.net/problem/14719

#include <stdio.h>

int main() {

    // --------------- 입력 파트 ---------------
    // 크기 설정
    int h, w, m = 0;
    scanf("%d %d", &h, &w);

    // 2차원 배열 생성 및 0(빈 지역)으로 초기화 - 양 끝은 -1(물 불가능)로 초기화
    int world[h][w+2];
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w+2; j++) {
            if (j == 0 || j == w+1) world[i][j] = -1;
            else world[i][j] = 0;
        }
    }

    // 벽 부분 입력 및 배열에 대입
    for (int i = 1; i < w+1; i++) {
        int wall = 0;
        scanf("%d", &wall);
        int j = h-1;

        while (wall != 0)
        {
            world[j][i] = 1;
            --j;
            wall -= 1;
        }
    }

    // --------------- 연산 파트 ---------------
    // 여유 벽 제외하고 하나씩 검사
    for (int i = 0; i < h; i++) {
        for (int j = 1; j < w+1; j++) {

            // 1(벽)일 경우 패스
            if (world[i][j] != 1) {

                // 좌우 중 하나라도 -1이라면 -1 저장 아니면 2(물 가능)로 저장
                if (world[i][j-1] == -1 || world[i][j+1] == -1) {
                    world[i][j] = -1;

                    // 만약 이전 칸이 2였다면 -1로 바꿔야함
                    if (world[i][j-1] == 2) {
                        int tmp = j;
                        while (world[i][j-1] == 2)
                        {
                            j -= 1;
                            world[i][j] = -1;
                            m -= 1;
                        }
                        j = tmp;
                    }
                }
                else {
                    world[i][j] = 2;
                    m += 1;
                }
                
            }
        }
    }    
    
    // --------------- 출력 파트 ---------------
    // world 출력 (최종 삭제)
    // for (int i = 0; i < h; i++) {
    //     for (int j = 0; j < w+2; j++) {
    //         printf("%2d ", world[i][j]);
    //     }
    //     printf("\n");
    // }
    
    // m 출력
    printf("%d", m);
    return 0;
}