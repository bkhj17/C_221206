#pragma once
#include "Base.h"

#define MAX_GAME 5
class Homework : public Base
{
	int pick = 0;
	int rangeTable[MAX_GAME] = {10, 50, 100, 500, 1000};
	int chanceTable[MAX_GAME] = {-1, 10, 10, 10, 8};
	const char* MESSAGES_WIN[MAX_GAME] = { 
		"[연습게임 끝!]\n\n", "[아무래도 하는 법은 아는 것 같네요]\n\n", "[어어어어?]\n\n", "[아직 한번 남았다...]\n\n", "[졌습니다ㅠㅠ]\n\n"};
	const char* MESSAGE_GAME_OVER = "[게임 오버] 정답 : ";

	int GetPlayerInput(int mn, int mx);
	bool Game(int range, int chance);
	bool Game(int num);
	void PrintStartMessage(int num);
	void GameOver();
	void Intro();
public:
	virtual void Run() override;
};

