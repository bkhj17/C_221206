#pragma once
#include "Base.h"
class Test : public Base
{
	int n;
	bool isNotBasic[101] = { false };
	int mat[101][101] = { 0 };	
	int dp[101][101] = { 0 };	//�� ��ǰ�� ����� ���� ���� �⺻��ǰ
	bool did[101] = {false};	//Ž������
	int cnt[101] = { 0 };
public:
	// Base��(��) ���� ��ӵ�
	virtual void Run() override;
};

