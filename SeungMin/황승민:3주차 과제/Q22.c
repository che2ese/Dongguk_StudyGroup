
// 22. 단어 공부(상)
// https://www.acmicpc.net/problem/1157

#include <stdio.h>
#include <string.h>

int main(void) {

    char arr[1000001];
    int cnt[27] = { 0 };
    int max[] = { 0 , 0 }; // [0] : 개수, [1] : 알파벳
    scanf("%s", arr);
    int sizeArr = strlen(arr);

    // 입력값 전부 대문자로 변환 및 알파벳 개수 카운팅
    for (int i = 0; i < sizeArr; i++) {     
        if (arr[i]>='a' && arr[i]<='z') arr[i]=arr[i]-32;  
        cnt[arr[i]-65] += 1;      
    }

    // 가장 많이 사용된 알파벳 찾기
    for (int i = 0; i < 26; i++) {     
        if ( cnt[i] > max[0] ) {
            max[0] = cnt[i];
            max[1] = i + 65;
        }
    }

    // 가장 많이 사용된 알파벳이 여러 개 존재하는 경우 찾기
    for (int i = 0; i < 26; i++) {     
        if ( max[0] == cnt[i] && max[1] != i + 65 ) {
            printf("?");
            return 0;
        }
    }
    printf("%c", max[1]);

    return 0;
}