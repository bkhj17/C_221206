//Homework2.h
#pragma once
#include "Base.h"

class Homework2 : public Base
{
	const char* STAR = "★";
	const char* BLANK = "  ";
	const char* MESSAGE_INPUT_EVEN = "짝수를 입력하셨어요.";
	const char* MESSAGE_INPUT_NEGATIVE = "미안합니다. 양수로만 만들 수 있어요.";
	const char* MESSAGE_SIZE_INPUT_GUIDE = "Size 입력(홀수) -> ";
	const char* MESSAGE_ASK_ONE_MORE = "계속 하시겠습니까(Y/N)? ";
	const char* MESSAGE_YN_INPUT_GUIDE = "계속할 거면 Y, 아니면 N을 입력하시오\n";
	const char* MESSAGE_EXIT = "Size 입력(홀수) -> ";
	
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

