#include <iomanip>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	
	double a, b, h, x, y, s, z;
	int n, i;
	long double m;

	n = 140;
	x = a = 0.1;
	b = 1;
	m = 1;
	h = (b - a) / 10;

	do
	{
		s = 0;

		for (i = 0; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				m *= j;
			}

			z = ((2 * i + 1) * (pow(x, 2 * i))) / m;
			m = 1;
			s += z;
		}
		
		y = (1 + 2 * pow(x, 2)) * exp(pow(x, 2));

		cout << setw(15) << x << setw(15) << y << setw(15) << s << endl;
		x += h;

	} while (x <= b);

	system("pause");
	return 0;
}