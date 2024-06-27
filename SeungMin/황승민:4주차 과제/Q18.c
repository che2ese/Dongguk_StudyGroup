
// 유기농 배추 - https://www.acmicpc.net/problem/1012

#include <stdio.h>
#include <string.h>
 
int field[50][50];
int m, n, k; // 배추밭 크기 , 배추 개수
 
int dfs(int x, int y) {

    field[x][y] = 0;
 
    if (x + 1 < m && field[x + 1][y] == 1) dfs(x + 1, y);
    if (x - 1 >= 0 && field[x - 1][y] == 1) dfs(x - 1, y);
    if (y + 1 < n && field[x][y + 1] == 1) dfs(x, y + 1);
    if (y - 1 >= 0 && field[x][y - 1] == 1) dfs(x, y - 1);
    return 0;
}
 
int main() {

    int testCase;
    int x, y, cnt; // 배추 위치 , 배추흰지렁이 마리 수
    scanf("%d", &testCase);
 
    for (int l = 0; l < testCase; l++) {

        // 배추밭 셋팅
        memset(field, 0, sizeof(field));
        scanf("%d %d %d", &m, &n, &k);

        for (int i = 0; i < k; i++) {
            scanf("%d %d", &x, &y);
            field[x][y] = 1;
        }
 
        cnt = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (field[i][j] == 1) {
                    dfs(i, j);
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}
