#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double a = 0.1, b = 0.8;
	int n = 10, k = 10;

	double h = (b - a) / k;
	double eps = 0.0001;

	for (double x = a; x <= b + 0.001; x += h)
	{
		double an = x * x / 2;
		double sn = an;
		int i = 0;
		for (i = 1; i < n; i++)
		{
			an = -an * x * x * i * (2 * i - 1) / ((i + 1) * (2 * i + 1));
			sn += an;
		}

		an = x * x / 2;
		double se = an;
		i = 1;

		do
		{
			an = -an * x * x * i * (2 * i - 1) / ((i + 1) * (2 * i + 1));
			se += an;
			i++;
		} while (abs(an) > eps);

		double y = x * atan(x) - log(sqrt(1 + x * x));
		cout << "X = " << x << " SN = " << sn << " SE = " << se << " Y = " << y << endl;
	}
}
