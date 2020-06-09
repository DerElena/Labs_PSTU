#include <cmath>
#include <iomanip>
#include <iostream>
using namespace std;

double f(double x)
{
	return sqrt(x) + x * x - 10;
}

double g(double x)
{
	return x - 0.1 * f(x);
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
	double x = 5;
	double eps = 0.0001;
	double root = calc_root(x, eps);
	cout << "Корень = " << root << endl;
}
