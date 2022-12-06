#include "RockPaperScissors.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//const ���� ���� ���� �Ұ�
const int MAX_INPUT_NUM = 3;
//��ũ�� : �ڵ�����(��ó���⿡�� '���ڿ� ��ü'�� ġȯ�ϱ⿡ ���ÿ��� ������ ��!)
#define MIN_INPUT_NUM 1

const char* COMMAND[] = {"","����", "����", "��"};
const char* RESULT_STRING[] = { "���", "��", "�̱�", "?"};
const char* WRONG_INPUT_MESSAGE = "�߸��� �Է��Դϴ�.";

//�ݺ��Ǵ� ������ �Լ��� ���� ȣ��
//���漱�� : �Լ��� �ڱ� �ڿ� ����� �Լ��� �ν��� �� ����
template <typename T>
T MakeRand(T mn, T mx);

int GetPlayerInputNum(int& playerNum);
bool PrintRPC(const char* who, int selectNum);
int PrintResult(int player, int com);

/*switch�� ���ο��� ��������{} �� �ϸ� ���� ���� �Ұ�
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
		//�÷��̾�
		GetPlayerInputNum(playerNum);
		PrintRPC("�÷��̾�", playerNum);

		//��ǻ��
		srand((unsigned int)time(NULL));
		randomNum = MakeRand(MIN_INPUT_NUM, MAX_INPUT_NUM);

		do {
			PrintRPC("��ǻ��", randomNum);
		} while (!PrintResult(playerNum, randomNum));
	}
}

template <typename T>
T MakeRand(T mn, T mx) { //������ ���
	return rand() % (mx - mn + 1) + mn;
}

int GetPlayerInputNum(int& playerNum) {
	while(1) 
	{
		printf("���� ���� ��!\n");
		printf("1. ���� 2. ���� 3. ��! -> ");
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
		printf("%s�� �߸��� �� �½��ϴ�\n", who);
		return false;
	}
}

int PrintResult(int playerNum, int randomNum)
{
	int result = (randomNum + 3 - playerNum) % 3;
	printf("%s\n", RESULT_STRING[result]);
	return result;
}
