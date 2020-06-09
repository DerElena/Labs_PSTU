#include <iostream>
using namespace std;
int sum(int k, ...)
{
	int* p = &k;
	p++;
	int res = 0;
	for (int i = 0; i < k; i += 2)
	{
		res += *p * *(p + 1);
		p += 2;
	}
	return res;
}
int main()
{
	setlocale(LC_ALL, "rus");
	int sum1 = sum(8, 1, 2, 3, 4, 5, 6, 7, 8);
	int sum2 = sum(10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);
	int sum3 = sum(12, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12);
	cout << "Ñóììà 1 = " << sum1 << endl;
	cout << "Ñóììà 2 = " << sum2 << endl;
	cout << "Ñóììà 3 = " << sum3 << endl;
}
