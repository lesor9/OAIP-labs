#include "pch.h"
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
	char str[300];

	cout << "Enter string: ";
	cin.getline(str, 300);
	cout << str << endl;

	int n, kol = 0, j;

	for (int i = 0; i < strlen(str); i++)
	{
		if ((str[i] = ' ') && (i % 2 != 0))
		{
			n = i;
			for (j = n; j < i; j++)
			{
				cout << str[j];
				if (str[j] == '1') kol++;
			}
			cout << endl;
		}
	}


	system("pause");
	return 0;
}