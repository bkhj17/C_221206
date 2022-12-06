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
		//���ٿ� ����
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
		printf("���������� �¸��ϼ̽��ϴ�. ������ �����մϴ�.\n");
}

int Homework::GetPlayerInput(int mn, int mx)
{
	int in = 0;
	//�Է¹ޱ�
	do {
		printf("���� �Է�(%d~%d) -> ", mn, mx);
		scanf_s("%d", &in);

		if (!isValidSelection(in, mn, mx))
			printf("�ű�� ���� ���ε���\n");
		else
			break;
	} while (1);

	return in;
}

bool Homework::Game(int range, int chance) {
	pick = MakeRand(1, range);
	int player_select = 0;

	while (chance--) {	//���� ��ȸ
		player_select = GetPlayerInput(1, range);	//�÷��̾����� �Է¹ޱ�
		//����
		if (pick == player_select) {
			printf("�����Դϴ�!\n");
			return true;
		}
		//����
		if (pick > player_select)
			printf("UP!");
		else
			printf("Down!");
		
		if (chance >= 0)
			printf(" ���� ��ȸ : %d", chance);
		printf("\n");
	}

	return false;
}

bool Homework::Game(int num) {	//���° �����ΰ�
	return Game(rangeTable[num], chanceTable[num]);
}

void Homework::PrintStartMessage(int num) {
	printf("Round %d. ���� 1~%d", num+1, rangeTable[num]);
	if (chanceTable[num] > 0)
		printf(", ��ȸ %d��\n", chanceTable[num]);
	if (num == 1)
		printf("[��ȸ�� �� ���� ���ӿ����Դϴ�]");
	printf("\n");
}

void Homework::GameOver() {
	printf("%s%d\n", MESSAGE_GAME_OVER, pick);
}

void Homework::Intro() {
	printf("[���ٿ� ����!]");
	fflush(stdin);
	char check = getchar();
	printf("[������ ���� �ȿ��� ���� � ���ڸ� ������� �˾Ƹ����� �����Դϴ�]");

	fflush(stdin);
	check = getchar();
	printf("[�׷� ����!]\n\n");
}
