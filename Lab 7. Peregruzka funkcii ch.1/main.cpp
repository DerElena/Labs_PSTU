#include <iostream>
#include <complex>
using namespace std;

int subtract(int a, int b)
{
	int res = a - b;
	return res;
}

complex<int> subtract(complex<int> c1, complex<int> c2)
{
	complex<int> res = c1 - c2;
	return res;
}

int main()
{
	setlocale(LC_ALL, "rus");

	cout << "������� ������ �����: ";
	int num1;
	cin >> num1;

	cout << "������� ������ �����: ";
	int num2;
	cin >> num2;

	int res = subtract(num1, num2);
	cout << "��������� ��������� = " << res << endl;

	int re1, im1, re2, im2;
	cout << "������� ������ ���������� �����" << endl;
	cout << "Re = ";
	cin >> re1;
	cout << "Im = ";
	cin >> im1;

	cout << "������� ������ ���������� �����" << endl;
	cout << "Re = ";
	cin >> re2;
	cout << "Im = ";
	cin >> im2;

	complex<int> c1(re1, im1);
	complex<int> c2(re2, im2);

	complex<int> res2 = subtract(c1, c2);
	cout << "��������� ��������� = " << res2 << endl;
}
