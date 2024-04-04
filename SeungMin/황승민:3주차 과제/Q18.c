
// 18. 킹, 퀸, 룩, 비숍, 나이트, 폰(중)
// https://www.acmicpc.net/problem/3003

#include <stdio.h>

int main(void) {

    int king = 1, queen = 1, rook = 2, bishop = 2, knight = 2, pawn = 8;

    scanf("%d %d %d %d %d %d", &king, &queen, &rook, &bishop, &knight, &pawn);
    printf("%d %d %d %d %d %d", 1-king, 1-queen, 2-rook, 2-bishop, 2-knight, 8-pawn);

    return 0;
}