
// 체스판 다시 칠하기 - https://www.acmicpc.net/problem/1018

#include <stdio.h>

int main(void) {

    int n, m, cnt = 1000;
    int test1 = 0, test2 = 0;
    char arr[50][51];
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++)
        scanf("%s", arr[i]);
        
    for (int x = 0; x < n - 7; x++) {  
        for (int y = 0; y < m - 7; y++) {  
            for (int i = x; i < x + 8; i++) {
                for (int j = y; j < y + 8; j++) {
                    if (((i - x + j - y) % 2) == 0) {
                        if (arr[i][j] != 'W') test1++;
                    }
                    else if (arr[i][j] != 'B') test1++;  
                    if (((i - x + j - y) % 2) == 0) {
                        if (arr[i][j] != 'B') test2++;  
                    } 
                    else if (arr[i][j] != 'W') test2++; 
                }
            }
            int tmp = test1 > test2 ? test2 : test1;
            if (tmp < cnt) cnt = tmp;
            test1 = 0;
            test2 = 0;
        }
    }
    printf("%d", cnt);
    return 0;
}