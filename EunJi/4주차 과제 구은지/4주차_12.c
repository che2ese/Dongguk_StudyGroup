/*
#문제
상근이의 할머니는 아래 그림과 같이 오래된 다이얼 전화기를 사용한다.
전화를 걸고 싶은 번호가 있다면, 숫자를 하나를 누른 다음에 금속 핀이 있는 곳 까지 시계방향으로 돌려야 한다. 
숫자를 하나 누르면 다이얼이 처음 위치로 돌아가고, 다음 숫자를 누르려면 다이얼을 처음 위치에서 다시 돌려야 한다.

숫자 1을 걸려면 총 2초가 필요하다. 
1보다 큰 수를 거는데 걸리는 시간은 이보다 더 걸리며, 한 칸 옆에 있는 숫자를 걸기 위해선 1초씩 더 걸린다.

상근이의 할머니는 전화 번호를 각 숫자에 해당하는 문자로 외운다. 
즉, 어떤 단어를 걸 때, 각 알파벳에 해당하는 숫자를 걸면 된다. 예를 들어, UNUCIC는 868242와 같다.

할머니가 외운 단어가 주어졌을 때, 이 전화를 걸기 위해서 필요한 최소 시간을 구하는 프로그램을 작성하시오.

#입력
첫째 줄에 알파벳 대문자로 이루어진 단어가 주어진다. 단어의 길이는 2보다 크거나 같고, 15보다 작거나 같다.

#출력
첫째 줄에 다이얼을 걸기 위해서 필요한 최소 시간을 출력한다.
*/

/*
1) 문자를 입력받음 (문자 입력받을 때 몇개 입력받을지 모르니까 배열로 받아야 할 듯)
2) if문 써가지고 어떤 알파벳일때는 몇이 나온다를 출력하면 됨. 1->2/2->3/ 이런식으로.. 그니까 결국 걸리는 시간의 일반항은 n+1임
3) 몇이 나오는지 각각 출력한거를 총으로 더함 -> 이게 최소 시간임
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int eachDialTime(char c) //각 문자가 몇을 출력하는지 변수에 넣음
{
	if (c == 'A' || c == 'B' || c == 'C')
		return 3;
	else if (c == 'D' || c == 'E' || c == 'F')
		return 4;
	else if (c == 'G' || c == 'H' || c == 'I')
		return 5;
	else if (c == 'J' || c == 'K' || c == 'L')
		return 6;
	else if (c == 'M' || c == 'N' || c == 'O')
		return 7;
	else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S')
		return 8;
	else if (c == 'T' || c == 'U' || c == 'V')
		return 9;
	else if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
		return 10;
}

int main(void)
{
	char alphabet[16] = { 0 };
	int totalDialTime = 0;

	scanf("%s", alphabet); //단어를 입력받음

	for (int i = 0; i < strlen(alphabet); i++)
	{
		totalDialTime += eachDialTime(alphabet[i]); //아까 return 받은 값들을 더함
	}

	printf("%d", totalDialTime);

	return 0;
}