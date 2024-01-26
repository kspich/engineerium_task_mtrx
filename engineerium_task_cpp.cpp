#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

#include "Task2.cpp"
#include "Task1.cpp"

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	cout << "Номер задания: ";
	int n;
	cin >> n;
	switch (n)
	{
		case 1:{
			//Извините, только такой неуклюжий пример.
			int* row1 = new int[3] { 1, 2, 3 };
			int* row2 = new int[3] { 4, 5, 6 };
			int* row3 = new int[3] { 7, 8, 9 };

			int** layer1 = new int* [3] {row1, row2, row3};
			int** layer2 = new int* [3] {row3, row2, row1};
			int** layer3 = new int* [3] {row3, row1, row2};

			int*** mtrx = new int** [3] {layer1, layer2, layer3};

			cout << "Вывожу трехмерные координаты всех троек для конкретного примера, смотрите код.\n";
			for (auto a : threeDsearch(mtrx, 3, 3, 3, 3))
			{
				cout << a[0] << " " << a[1] << " " << a[2] << "\n";
			};
			break;
		}
		case 2:{
			cout << "Вывожу поэлементно квадратную матрицу случайного размера.\n";
			auto mtrx = matrix();
			mtrx.print();
			break;
		}
		case 3: {
			break;
		}
		default:
			cout << "Такого задания нет";
	}
}