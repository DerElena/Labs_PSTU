#include <iostream>
#include <cmath>
using namespace std;

double f(double x)
{
	return sqrt(x) + x * x - 10;
}

double poldel(double a, double b, double eps)
{
	double c;
	while (fabs(b - a) > eps)
	{
		c = (b + a) / 2;

		if (f(a) * f(c) < 0)
			b = c;
		else a = c;
	}

	return c;
}

int main()
{
	setlocale(LC_ALL, "rus");

	double a = 0, b = 5, c, eps = 0.0001;

	cout << "eps = " << eps << " a = " << a << " b = " << b << endl;

	c = poldel(a, b, eps);

	cout << "Корень = " << c << endl;
}
