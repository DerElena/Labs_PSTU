#include <iomanip>
#include <cmath>
#include <iostream>
using namespace std;

double f(double x)
{
	return sqrt(x) + x * x - 10;
}
double df(double x)
{
	return 1 / (2 * sqrt(x)) + 2 * x;
}
double g(double x)
{
	return x - f(x) / df(x);
}
double calc_root(double x, double eps)
{
	while (eps < fabs(f(x)))
	{
		x = g(x);
	}
	return x;
}
int main()
{
	setlocale(LC_ALL, "rus");
	double x = 1;
	double eps = 0.0001;
	double root = calc_root(x, eps);
	cout << "Корень = " << root << endl;
}
