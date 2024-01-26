#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

/*
«адание 2

ћатрица размера N x N (где N - случайное число в диапазоне от 3 до
10) должна быть заполнена числами от 1 до N x N по спирали от внешнего
"кольца" к центру (реализовано с помощью класса matrix).

ѕор€док обхода спирали (по часовой или против) определ€етс€
случайным образом при каждом запуске программы (как и число N).
*/

class matrix{
	size_t N;
	int **arr;
	public:
	matrix() {
		srand(time(nullptr));
		N = rand() % 8 + 3;
		arr = new int*[N];
		for (size_t i = 0; i < N; i++)
		{
			int* t = new int[N];
			for (size_t j = 0; j < N; j++) 
			{
				t[j] = 0;
			}
			arr[i] = t;
		}
		int dx[] = { 0, 1, 0, -1 };
		int dy[] = { 1, 0, -1, 0 };
		int x = 0;
		int y = 0;
		int di = 0;
		if (rand() % 2)
		{
			dy[0] = -1;
			dy[2] = 1;
			x = 0;
			y = N-1;
		}
		for (size_t i = 0; i < N*N; i++)
		{
			arr[x][y] = i+1;
			int newX = x + dx[di];
			int newY = y + dy[di];

			if (0 <= newX && newX < N && 0 <= newY && newY < N && arr[newX][newY] == 0) 
			{
				x = newX;
				y = newY;
			}
			else
			{
				di = (di + 1) % 4;
				x += dx[di];
				y += dy[di];
			}
		}
	}
	void print() {
		for (size_t i = 0; i < N; i++)
		{
			for (size_t j = 0; j < N; j++)
				cout << arr[i][j] << " ";
			cout << "\n";
		}
	}
};