#pragma once
#include "Base.h"
#include <vector>
class Test : public Base
{
private:
	int n = 0;
	bool isNotBasic[101] = { false };
	bool did[101] = {false};	//탐색여부
	int mat[101][101] = { 0 };	//필요한 각 부품 수
	int cnt[101] = { 0 };
	std::vector<int> child[101];

	void dfs(int p);
public:
	// Base을(를) 통해 상속됨
	virtual void Run() override;
};

