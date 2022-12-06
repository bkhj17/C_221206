#pragma once
#include "Base.h"

#define MAX_GAME 5
class Homework : public Base
{
	int pick = 0;
	int rangeTable[MAX_GAME] = {10, 50, 100, 500, 1000};
	int chanceTable[MAX_GAME] = {-1, 10, 10, 10, 8};
	const char* MESSAGES_WIN[MAX_GAME] = { 
		"[�������� ��!]\n\n", "[�ƹ����� �ϴ� ���� �ƴ� �� ���׿�]\n\n", "[�����?]\n\n", "[���� �ѹ� ���Ҵ�...]\n\n", "[�����ϴ٤Ф�]\n\n"};
	const char* MESSAGE_GAME_OVER = "[���� ����] ���� : ";

	int GetPlayerInput(int mn, int mx);
	bool Game(int range, int chance);
	bool Game(int num);
	void PrintStartMessage(int num);
	void GameOver();
	void Intro();
public:
	virtual void Run() override;
};

