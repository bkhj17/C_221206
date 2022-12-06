#include "Homework.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int MakeRand(int mn, int mx) {
	return rand() % (mx - mn + 1) + mn;
}

bool isValidSelection(int select, int mn, int mx) {
	return select >= mn && select <= mx;
}

void Homework::Run()
{
	Intro();

	srand((unsigned int)time(NULL));
	int i = 0;
	for (; i < MAX_GAME; i++) {
		//업다운 게임
		PrintStartMessage(i);
		bool result = Game(i);
		if (result)
			printf(MESSAGES_WIN[i]);
		else {
			GameOver();
			break;
		}
	}

	if(i == MAX_GAME)
		printf("마지막까지 승리하셨습니다. 게임을 종료합니다.\n");
}

int Homework::GetPlayerInput(int mn, int mx)
{
	int in = 0;
	//입력받기
	do {
		printf("숫자 입력(%d~%d) -> ", mn, mx);
		scanf_s("%d", &in);

		if (!isValidSelection(in, mn, mx))
			printf("거기는 범위 밖인데요\n");
		else
			break;
	} while (1);

	return in;
}

bool Homework::Game(int range, int chance) {
	pick = MakeRand(1, range);
	int player_select = 0;

	while (chance--) {	//남은 기회
		player_select = GetPlayerInput(1, range);	//플레이어한테 입력받기
		//성공
		if (pick == player_select) {
			printf("정답입니다!\n");
			return true;
		}
		//실패
		if (pick > player_select)
			printf("UP!");
		else
			printf("Down!");
		
		if (chance >= 0)
			printf(" 남은 기회 : %d", chance);
		printf("\n");
	}

	return false;
}

bool Homework::Game(int num) {	//몇번째 게임인가
	return Game(rangeTable[num], chanceTable[num]);
}

void Homework::PrintStartMessage(int num) {
	printf("Round %d. 범위 1~%d", num+1, rangeTable[num]);
	if (chanceTable[num] > 0)
		printf(", 기회 %d번\n", chanceTable[num]);
	if (num == 1)
		printf("[기회를 다 쓰면 게임오버입니다]");
	printf("\n");
}

void Homework::GameOver() {
	printf("%s%d\n", MESSAGE_GAME_OVER, pick);
}

void Homework::Intro() {
	printf("[업다운 게임!]");
	fflush(stdin);
	char check = getchar();
	printf("[지정된 범위 안에서 제가 어떤 숫자를 골랐는지 알아맞히는 게임입니다]");

	fflush(stdin);
	check = getchar();
	printf("[그럼 시작!]\n\n");
}
