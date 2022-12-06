//Homework2.h
#pragma once
#include "Base.h"

class Homework2 : public Base
{
	const char* STAR = "��";
	const char* BLANK = "  ";
	const char* MESSAGE_INPUT_EVEN = "¦���� �Է��ϼ̾��.";
	const char* MESSAGE_INPUT_NEGATIVE = "�̾��մϴ�. ����θ� ���� �� �־��.";
	const char* MESSAGE_SIZE_INPUT_GUIDE = "Size �Է�(Ȧ��) -> ";
	const char* MESSAGE_ASK_ONE_MORE = "��� �Ͻðڽ��ϱ�(Y/N)? ";
	const char* MESSAGE_YN_INPUT_GUIDE = "����� �Ÿ� Y, �ƴϸ� N�� �Է��Ͻÿ�\n";
	const char* MESSAGE_EXIT = "Size �Է�(Ȧ��) -> ";
	
	const char* YES = "Yy";
	const char* NO = "Nn";

	int GetInput();
	void Draw(int size = 5);
	void DrawSpace(int);
	void DrawChar(int, const char*);
	bool AskOneMore();
public:
	void Run();
};

