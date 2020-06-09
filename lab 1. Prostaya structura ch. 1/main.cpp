#include <iostream>
#include <math.h>
#include <locale>

using namespace std;

int main()
{
	setlocale(0, "rus");
	float a = 1000, b = 0.0001, c, d, e, f, g, h, i, j, k, l, y;
	c = a + b;
	d = pow(c, 3);
	e = pow(a, 3);
	f = d - e;
	g = pow(b, 2);
	h = 3 * a * g;
	i = pow(b, 3);
	j = pow(a, 2);
	k = 3 * j * b;
	l = h + i + k;
	y = f / l;

	cout << "Результат в формате float: " << y << endl;

	double a1 = 1000, b1 = 0.0001, c1, d1, e1, f1, g1, h1, i1, j1, k1, l1, y1;
	c1 = a1 + b1;
	d1 = pow(c1, 3);
	e1 = pow(a1, 3);
	f1 = d1 - e1;
	g1 = pow(b1, 2);
	h1 = 3 * a1 * g1;
	i1 = pow(b1, 3);
	j1 = pow(a1, 2);
	k1 = 3 * j1 * b1;
	l1 = h1 + i1 + k1;
	y1 = f1 / l1;

	cout << "Результат в формате double: " << y1 << endl;

}
