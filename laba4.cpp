#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	int  i, k, j;
	int a[100];
	
	cout << "¬ведите количество чисел: ";
	cin >> k;


	cout << "¬ведите элементы массива: " << endl;
	for (i = 0; i < k; i++)
	{
		cout << "a[" << i + 1 << "]= ";
		cin >> a[i];
	}

	for (i = 0; i < k; i++) 
	{
		for (j = i + 1; j < k; j++) 
		{
			if (a[i] == a[j])
			{
				for (int b = j; b < k; b++)
				{
					a[b] = a[b + 1];
				}
			}
		}
	}
	
	cout << endl << endl;

	for (i = 0; i < k; i++)
	{
		if (a[i] != -858993460) cout << "a[" << i + 1 << "]= " << a[i] << endl;
	}

	system("pause");
	return 0;
}