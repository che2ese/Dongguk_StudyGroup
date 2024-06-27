/*
# 문제
과거 이집트인들은 각 변들의 길이가 3, 4, 5인 삼각형이 직각 삼각형인것을 알아냈다. 주어진 세변의 길이로 삼각형이 직각인지 아닌지 구분하시오.

# 입력
입력은 여러개의 테스트케이스로 주어지며 마지막줄에는 0 0 0이 입력된다. 각 테스트케이스는 모두 30,000보다 작은 양의 정수로 주어지며, 각 입력은 변의 길이를 의미한다.

# 출력
각 입력에 대해 직각 삼각형이 맞다면 "right", 아니라면 "wrong"을 출력한다.
*/

/*
1) 세 수 입력받기
2) 세 수를 오름차순으로 정리 (이걸 받는 배열을 하나 선언해야할 듯)
3) 오름차순으로 정리한 상태에서 Max Middle Min 으로 변수 도입
4) if(Max^2==Middle^2+Min^2) -> right // else->wrong 출력 
*/

//###근데... 이거 코드를 너무 길게 짠 것 같음 ㅠㅅㅠ

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c = 0; //먼저 입력받을 세 수를 선언

    while (1) //일단 세 수를 오름차순으로 정리하는 과정을 세팅. 여러개의 테스트케이스이므로 무한루프 돌림
    {
        scanf("%d %d %d", &a, &b, &c); //세 수 입력받음
        if (a == 0 && b == 0 && c == 0) //마지막줄에는 0 0 0이 입력되고 끝남
            break; 

        // 세 수를 오름차순으로 정리
        int max, square = 0;

        if (a > b && a > c) 
        {
            max = a;
            square = b * b + c * c;
        }
        else if (b > a && b > c) 
        {
            max = b;
            square = c * c + a * a;
        }
        else 
        {
            max = c;            
            square = a * a + b * b;

        }

        //직각 삼각형인지 확인
        if (max * max == square)
        {
            printf("right\n");
        }
        else 
        {
            printf("wrong\n");
        }
    }
    return 0;
}

/* 원래 코드 이걸로 짰었는데, 너무 길어서 위와 같이 바꿈 (필요없는 변수를 없앰)
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
   int a, b, c = 0; //먼저 입력받을 세 수를 선언

    while (1) //일단 세 수를 오름차순으로 정리하는 과정을 세팅. 여러개의 테스트케이스이므로 무한루프 돌림
    {
        scanf("%d %d %d", &a, &b, &c); //세 수 입력받음
        if (a == 0 && b == 0 && c == 0) //마지막줄에는 0 0 0이 입력되고 끝남
            break;

        // 세 수를 오름차순으로 정리
        int max, middle, min = 0;

        if (a > b && a > c)
        {
            max = a;
            if (b >= c)
            {
                middle = b;
                min = c;
            }
            else
            {
                middle = c;
                min = b;
            }
        }
        else if (b > a && b > c)
        {
            max = b;
            if (a >= c)
            {
                middle = a;
                min = c;
            }
            else
            {
                middle = c;
                min = a;
            }
        }
        else
        {
            max = c;
            if (a >= b)
            {
                middle = a;
                min = b;
            }
            else
            {
                middle = b;
                min = a;
            }
        }

        //직각 삼각형인지 확인
        if (max*max == middle*middle + min*min)
        {
            printf("right\n");
        }
        else {
            printf("wrong\n");
        }
    }

    return 0;
}
*/