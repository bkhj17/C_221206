#pragma once
#include "Base.h"
#include <vector>
class Test : public Base
{
private:
	int n = 0;
	bool isNotBasic[101] = { false };
	bool did[101] = {false};	//Ž������
	int mat[101][101] = { 0 };	//�ʿ��� �� ��ǰ ��
	int cnt[101] = { 0 };
	std::vector<int> child[101];

	void dfs(int p);
public:
	// Base��(��) ���� ��ӵ�
	virtual void Run() override;
};

