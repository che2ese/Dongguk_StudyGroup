#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

void dfs(char grid[MAX][MAX], int x, int y, int n, char color, int visited[MAX][MAX]) {
    if (x < 0 || x >= n || y < 0 || y >= n || visited[x][y] || grid[x][y] != color) {
        return;
    }

    visited[x][y] = 1;

    dfs(grid, x - 1, y, n, color, visited);
    dfs(grid, x + 1, y, n, color, visited);
    dfs(grid, x, y - 1, n, color, visited);
    dfs(grid, x, y + 1, n, color, visited);
}

int countRegions(char grid[MAX][MAX], int n, int isColorBlind) {
    int visited[MAX][MAX] = { 0 };
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (!visited[i][j]) {
                char currentColor = grid[i][j];
                if (isColorBlind && currentColor == 'G') {
                    currentColor = 'R';
                }
                dfs(grid, i, j, n, currentColor, visited);
                count++;
            }
        }
    }

    return count;
}

int main(void) {
    int n;
    char grid[MAX][MAX];
    char gridColorBlind[MAX][MAX];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", grid[i]);
    }

    // 적록색약을 고려한 grid 생성
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 'G') {
                gridColorBlind[i][j] = 'R';
            } else {
                gridColorBlind[i][j] = grid[i][j];
            }
        }
    }

    int normalCount = countRegions(grid, n, 0);
    int colorBlindCount = countRegions(gridColorBlind, n, 1);

    printf("%d %d\n", normalCount, colorBlindCount);

    return 0;
}
