//Homework2.cpp
#include "Homework2.h"
#include <stdio.h>
#include <stdlib.h>
#include <string>
bool Homework2::AskOneMore() {
	char c = ' ';
	do {
		c = getchar();
		printf("%s", MESSAGE_ASK_ONE_MORE);
		fflush(stdin);
		c = getchar();
		fflush(stdin);

		for (int i = 0; i < 2; i++) {
			if (c == YES[i])
				return true;
		}

		for (int i = 0; i < 2; i++) {
			if (c == NO[i])
				return false;
		}
		
		printf("%s", MESSAGE_YN_INPUT_GUIDE);
	} while (1);

	return c == 'Y' || c == 'y';
}

void Homework2::Run()
{
	bool oneMore;
	do {
		int in = Homework2::GetInput();
		Homework2::Draw(in);
		oneMore = AskOneMore();
		if (oneMore)
			printf("\n");
		else 
			printf("종료합니다.\n");
	} while (oneMore);
}

int Homework2::GetInput() {
	int n = 0;
	do 
	{
		printf("%s", MESSAGE_SIZE_INPUT_GUIDE);
		scanf_s("%d", &n);
		
		if (n < 0) 
			printf("%s\n", Homework2::MESSAGE_INPUT_NEGATIVE);
		else if (n % 2 == 0)
			printf("%s\n", Homework2::MESSAGE_INPUT_EVEN);
		else
			break;
	} while (1);

	return n;
}

void Homework2::Draw(int size)
{
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < abs(size / 2 - i); j++)
			printf("%s", Homework2::BLANK);
		
		for (int j = 0; j < (i*2 < size ? i*2+1 : (size-i)*2-1); j++)
			printf("%s", Homework2::STAR);
		printf("\n");
	}
}

