#include "Loop.h"
#include <stdio.h>

//�����
//F5 : ����� ����
//F9 : �극��ũ ����Ʈ
//F10, F11 : ���α׷� �帧 �б�
class DrawStars {
	const char* STAR = "��";
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
	//do { ���� } while(����); : 1ȸ ���� �� ���ǿ� ���� �ݺ�
	//while(����) {����} : ������ ���̸� �ݺ�
	//for(�ʱ�ȭ; ����; ��ó��) { ���� } : �����Ҷ� �ʱ�ȭ -> ���ǿ� ���� �ݺ��ϵ�, ���๮ ���� ������ ��ó�� ����
	
	//break : �ݺ��� Ż��
	//continue : ���� ���๮�� ������ ���� �ݺ����� �Ѿ
	
	int n = 0;
	/*
	do 
	{
		printf("n : %d\n", ++n);
		//���������� : �տ� ������ ���� �� ���� ����, �ڿ� ������ ���� ���� �� ����
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
	printf("���� -> ");
	scanf_s("%d", &n);
	d.DrawSquareStars(n);
	d.DrawTriangleStars(n);
	d.DrawReverseTriangleStars(n);
	d.DrawReverseTriangleStars2(n);
}

