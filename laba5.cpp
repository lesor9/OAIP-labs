#include<iostream>
#include<time.h>
using namespace std;

int main()
{
	srand(time(0));
	int n , m , i_max = 0, j_max = 0, max;
	cin >> n >> m;
	int** mass = new int*[n];
	for( int i = 0; i < n; i++ )
	{
		mass[i] = new int[m];
	}
	for( int i = 0; i < n; i++ )
	{
		for( int j = 0; j < m; j++ )
		{
			mass[i][j] = rand() % 100;
		}
	}

	max = mass[0][0];

	for( int i = 0; i < n; i++ )
	{
		for( int j = 0; j < m; j++ )
		{
			if( abs(max) <= abs(mass[i][j]) )
			{
				max = mass[i][j];
				i_max = i;
				j_max = j;
			}
		}
	}


	for( int i = 0; i < n; i++ )
	{
		for( int j = j_max; j < m - 1; j++ )
		{
			mass[i][j] = mass[i][j + 1];
		}
	}
	m--;

	for( int i = i_max; i < n - 1; i++ )
	{
		for( int j = 0; j < m; j++ )
		{
			mass[i][j] = mass[i + 1][j];
		}
	}
	n--;

	for( int i = 0; i < n; i++ )
	{
		for( int j = 0; j < m; j++ )
		{
			cout << mass[i][j] << " ";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}
