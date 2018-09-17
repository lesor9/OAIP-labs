#include <iomanip.h>
#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	double a, b, h, x, y, s, p, p1;
	int n, i;

	n = 140;
	x = a = 0.1;
	b = 1;

	do
	{
		s = 0;

		for (i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
			{
				m *= j;
			}

			z = ((2 * n + 1) * (pow(x, 2 * n))) / m;
			s += z;

			y = (1 + 2 * pow(x, 2)) * exp(pow(x, 2);
		}

		cout << setw(15) << x << setw(15) << y << setw(15) << s << endl;
		x += h;

	} while (x <= b);

	system("pause");
	return 0;
}