#include "pch.h"
#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	char str[100];
	cin.get(str, 100);

	int kol = 0, j;
	int n = 0;


	for (int i = 0; i < (strlen(str) + 1); i++)
	{
		if (((str[i] == '\0') || (str[i] == ' ')) && ((i - n) % 2 == 0)) n = i + 1;

		if (((str[i] == '\0') || (str[i] == ' ')) && ((i - n) % 2 != 0))
		{
			for (j = n; (j <= i); j++)
			{
				cout << str[j];
				if (str[j] == '1') kol++;
			}
			n = i + 1;
		}
	}

	cout << "Количество единиц в группах с нечетным количеством символов: " << kol << endl << endl;
	system("pause");
	return 0;
}