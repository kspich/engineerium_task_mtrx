#include <iostream>
#include <vector>

/*
Задание 1

Написать следующую функцию. На входе 5 параметров: трехмерный
массив int ***mtrx, его размеры int l, int m, int n и целое число int z.

Функция должна осуществлять поиск среди всех элементов массива,
значения которых равны z. Функция возвращает двумерный vector/list,
каждый элемент которого является vector/list'ом размера 3 и содержит
координаты элемента mtrx, значение которого совпадает с числом z.
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