#include "Test.h"
#include <iostream>
using namespace std;

void Test::Run()
{
	/*
	[���� 2637]
	�츮�� � �峭���� ���� ���� ��ǰ���� �����Ͽ� ������� �Ѵ�. 
	�� �峭���� ����µ��� �⺻ ��ǰ�� �� �⺻ ��ǰ���� �����Ͽ� ���� �߰� ��ǰ�� ���ȴ�. �⺻ ��ǰ�� �ٸ� ��ǰ�� ����Ͽ� ������ �� ���� ��ǰ�̴�. 
	�߰� ��ǰ�� �� �ٸ� �߰� ��ǰ�̳� �⺻ ��ǰ�� �̿��Ͽ� ��������� ��ǰ�̴�.
	
	���� ����. 
	�⺻ ��ǰ���μ� 1, 2, 3, 4�� �ִ�. 
	�߰� ��ǰ 5�� 2���� �⺻ ��ǰ 1�� 2���� �⺻ ��ǰ 2�� ���������. 
	�׸��� �߰� ��ǰ 6�� 2���� �߰� ��ǰ 5, 3���� �⺻ ��ǰ 3�� 4���� �⺻ ��ǰ 4�� ���������. 
	���������� �峭�� ����ǰ 7�� 2���� �߰� ��ǰ 5, 3���� �߰� ��ǰ 6�� 5���� �⺻ ��ǰ 4�� ���������. 
	�̷� ��쿡 �峭�� ����ǰ 7�� ����µ� �ʿ��� �⺻ ��ǰ�� ������ 1�� 16��, 2�� 16��, 3�� 9��, 4�� 17���̴�.
	�̿� ���� � �峭�� ����ǰ�� �׿� �ʿ��� ��ǰ�� ������ ���谡 �־��� ���� �� �ϳ��� �峭�� ����ǰ�� �����ϱ� ���Ͽ� �ʿ��� '�⺻ ��ǰ�� ������ ����'�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	*/

	/*
	�Է�
	ù° �ٿ��� �ڿ��� N(3 �� N �� 100)�� �־����µ�, 1���� N-1������ �⺻ ��ǰ�̳� �߰� ��ǰ�� ��ȣ�� ��Ÿ����,
	N�� ����ǰ�� ��ȣ�� ��Ÿ����. 
	�׸��� �� ���� �ٿ��� �ڿ��� M(3 �� M �� 100)�� �־�����, �� ���� M���� �ٿ��� � ��ǰ�� �ϼ��ϴµ� �ʿ��� ��ǰ�� ���� ���谡 3���� �ڿ��� X, Y, K�� �־�����. 
	�� ���� "�߰� ��ǰ�̳� ����ǰ X�� ����µ� �߰� ��ǰ Ȥ�� �⺻ ��ǰ Y�� K�� �ʿ��ϴ�"�� ���̴�. 
	�� �߰� ��ǰ�� ���θ� �ʿ�� �ϴ� ��찡 ����.
	*/
	int m;
	cin >> n;
	for (int i = 0; i < m; i++) {
		int x, y, k;
		cin >> x >> y >> k;

		isNotBasic[x] = true;
		mat[x][y] = k;
	}

	for (int i = 0; i < n; i++) {

	}

	/*
	���
	�ϳ��� ����ǰ�� �����ϴµ� �ʿ��� �⺻ ��ǰ�� ���� �� �ٿ� �ϳ��� ����ϵ�(�߰� ��ǰ�� ������� ����), 
	�ݵ�� �⺻ ��ǰ�� ��ȣ�� ���� �ͺ��� ū ������ �ǵ��� �Ѵ�. 
	�� �ٿ��� �⺻ ��ǰ�� ��ȣ�� �ҿ� ������ ����Ѵ�.
	������ 2,147,483,647 �����̴�.(int ���� ��)
	*/
}