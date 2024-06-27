
// 적록색약 - https://www.acmicpc.net/problem/10026

#include <stdio.h>
#include <string.h>

char str[101][101];
int	n;
int arr[101][101] = {};

void dfs(int y, int x, char *set) {
	if (0 <= y && y < n && 0 <= x && x < n && !arr[y][x] && strchr(set, str[y][x])) {
		arr[y][x]++;
		dfs(y + 1, x, set);
		dfs(y - 1, x, set);
		dfs(y, x + 1, set);
		dfs(y, x - 1, set);
	}
}

int main()
{
    int case1 = 0, case2 = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++)
		scanf("%s", str[i]);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!arr[i][j] && ++case1) {
				if (str[i][j] == 'R') dfs(i, j, "R");
				else if (str[i][j] == 'G') dfs(i, j, "G");
				else if (str[i][j] == 'B') dfs(i, j, "B");
			}
		}
	}

    memset(arr, 0, sizeof(arr));

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!arr[i][j] && ++case2) {
				if (str[i][j] == 'B') dfs(i, j, "B");
				else dfs(i, j, "RG");
			}
		}
	}
	printf("%d %d\n", case1, case2);
	return (0);
}