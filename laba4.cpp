#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
	int  i, k, j;
	int a[100];
	
	cout << "Vvdedite kolichestvo elementov: ";
	cin >> k;


	cout << "Vvedite kazhdui element massiva: " << endl;
	for (i = 0; i < k; i++)
	{
		cout << "a[" << i + 1 << "]= ";
		cin >> a[i];
	}

	cout << endl << endl;

	for (i = 0; i < k; i++) 
	{
		for (j = i + 1; j < k; j++) 
		{
			if (a[i] == a[j])
			{
				k--;
				for (int b = j; b < k; b++)
				{
					a[b] = a[b + 1];
				}
				j--;
			}
		}
		cout << "a[" << i + 1 << "]= " << a[i] << endl;
	}

	system("pause");
	return 0;
}