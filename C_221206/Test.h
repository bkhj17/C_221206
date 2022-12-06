#pragma once
#include "Base.h"
class Test : public Base
{
	int n;
	bool isNotBasic[101] = { false };
	int mat[101][101] = { 0 };	
	int dp[101][101] = { 0 };	//각 부품을 만드는 데에 들어가는 기본부품
	bool did[101] = {false};	//탐색여부
	int cnt[101] = { 0 };
public:
	// Base을(를) 통해 상속됨
	virtual void Run() override;
};

