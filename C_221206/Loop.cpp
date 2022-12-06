#include "Loop.h"
#include <stdio.h>

//디버깅
//F5 : 디버깅 시작
//F9 : 브레이크 포인트
//F10, F11 : 프로그램 흐름 읽기
class DrawStars {
	const char* STAR = "★";
	const char* BLANK = "  ";
public:
	void DrawSquareStars(int size)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size; j++)
				printf("%s", STAR);
			printf("\n");
		}
	}

	void DrawTriangleStars(int size)
	{
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j <= i; j++)
				printf("%s", STAR);
			printf("\n");
		}
	}

	void DrawReverseTriangleStars(int size) {
		for (int i = 0; i < size; i++)
		{
			for (int j = size; j > i; j--)
				//for(int j = 0; j < size-i; j++)
				printf("%s", STAR);
			printf("\n");
		}
	}

	void DrawReverseTriangleStars2(int size) {
		for (int i = 0; i < size; i++)
		{
			for (int j = 0; j < size - i - 1; j++) {
				printf("%s", BLANK);
			}
			for (int j = 0; j <= i; j++)
				printf("%s", STAR);
			printf("\n");
		}
	}
};


void Loop::Run()
{
	//do { 실행 } while(조건); : 1회 실행 후 조건에 따라 반복
	//while(조건) {실행} : 조건이 참이면 반복
	//for(초기화; 조건; 후처리) { 실행 } : 시작할때 초기화 -> 조건에 따라 반복하되, 실행문 끝날 때마다 후처리 실행
	
	//break : 반복문 탈출
	//continue : 현재 실행문을 끝내고 다음 반복으로 넘어감
	
	int n = 0;
	/*
	do 
	{
		printf("n : %d\n", ++n);
		//증감연산자 : 앞에 붙으면 증감 후 문장 실행, 뒤에 붙으면 문장 실행 후 증감
	} while (n < 10);
	
	n = 0;
	while (1)
	{
		printf("n : %d\n", ++n);
		if (n == 10)
			break;
	}
	*/
	DrawStars d;
	printf("숫자 -> ");
	scanf_s("%d", &n);
	d.DrawSquareStars(n);
	d.DrawTriangleStars(n);
	d.DrawReverseTriangleStars(n);
	d.DrawReverseTriangleStars2(n);
}

