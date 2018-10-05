#include "stdafx.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int n, m, k;
	cin >> n >> m;

	int** mass = new int*[n];
	for (int i = 0; i < n; i++)
	{
		mass[i] = new int[m];
	}

	//zapolnenie and vivod
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			mass[i][j] = rand() % 99 + 1;
			cout << setw(2) << mass[i][j] << " ";
		}
		cout << endl;
	}

	//poisk osobih elementov
	k = 0;
	for (int i = 1; i < (n - 1); i++)
	{
		for (int j = 1; j < (m - 1); j++)
		{
			if ((mass[i][j - 1] < mass[i][j]) && (mass[i][j] < mass[i][j + 1]))
			{
				k++;
				cout << endl << "mass[" << i + 1 << "]" << "[" << j + 1 << "] = " << mass[i][j];
			}
		}
	}

	cout << endl << endl;
	cout << "Количество особых элементов = " << k << endl << endl;

	for (int i = 0; i < n; i++)
		delete[] mass[i];

	system("pause");
	return 0;
}