#include "RockPaperScissors.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//const 선언 이후 변경 불가
const int MAX_INPUT_NUM = 3;
//매크로 : 자동변경(전처리기에서 '문자열 자체'를 치환하기에 사용시에는 주의할 것!)
#define MIN_INPUT_NUM 1

const char* COMMAND[] = {"","가위", "바위", "보"};
const char* RESULT_STRING[] = { "비김", "짐", "이김", "?"};
const char* WRONG_INPUT_MESSAGE = "잘못된 입력입니다.";

//반복되는 구문은 함수로 만들어서 호출
//전방선언 : 함수는 자기 뒤에 선언된 함수를 인식할 수 없다
template <typename T>
T MakeRand(T mn, T mx);

int GetPlayerInputNum(int& playerNum);
bool PrintRPC(const char* who, int selectNum);
int PrintResult(int player, int com);

/*switch문 내부에는 지역생성{} 안 하면 변수 선언 불가
switch (playerNum)
{
default:
	break;
}
*/

void RockPaperScissors::Run()
{
	int playerNum = 0, randomNum = 0;
	while (1) {
		//플레이어
		GetPlayerInputNum(playerNum);
		PrintRPC("플레이어", playerNum);

		//컴퓨터
		srand((unsigned int)time(NULL));
		randomNum = MakeRand(MIN_INPUT_NUM, MAX_INPUT_NUM);

		do {
			PrintRPC("컴퓨터", randomNum);
		} while (!PrintResult(playerNum, randomNum));
	}
}

template <typename T>
T MakeRand(T mn, T mx) { //정수형 사용
	return rand() % (mx - mn + 1) + mn;
}

int GetPlayerInputNum(int& playerNum) {
	while(1) 
	{
		printf("가위 바위 보!\n");
		printf("1. 가위 2. 바위 3. 보! -> ");
		scanf_s("%d", &playerNum);
		if (playerNum >= MIN_INPUT_NUM && playerNum <= MAX_INPUT_NUM)
			return playerNum;
		else
			printf("%s\n\n", WRONG_INPUT_MESSAGE);
	}
	
	return playerNum;
}

bool PrintRPC(const char* who, int selectNum) {
	if (selectNum >= MIN_INPUT_NUM && selectNum <= MAX_INPUT_NUM) 
	{
		printf("%s : %s\n", who, COMMAND[selectNum]);
		return true;
	} 
	else 
	{
		printf("%s가 잘못된 걸 냈습니다\n", who);
		return false;
	}
}

int PrintResult(int playerNum, int randomNum)
{
	int result = (randomNum + 3 - playerNum) % 3;
	printf("%s\n", RESULT_STRING[result]);
	return result;
}
