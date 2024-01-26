#include <iostream>
#include <vector>

/*
������� 1

�������� ��������� �������. �� ����� 5 ����������: ����������
������ int ***mtrx, ��� ������� int l, int m, int n � ����� ����� int z.

������� ������ ������������ ����� ����� ���� ��������� �������,
�������� ������� ����� z. ������� ���������� ��������� vector/list,
������ ������� �������� �������� vector/list'�� ������� 3 � ��������
���������� �������� mtrx, �������� �������� ��������� � ������ z.
*/

using namespace std;

static vector <vector <int>> threeDsearch(int*** mtrx, int l, int m, int n, int z) {
	vector <vector <int>> res;
	for (size_t i = 0; i < l; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			for (size_t k = 0; k < n; k++)
			{
				if (mtrx[i][j][k] == z)
				{
					int t[] = { i, j, k };
					res.push_back(vector<int>(t, t + sizeof(t) / sizeof(int)));
				}
			}
		}
	}
	return res;
}