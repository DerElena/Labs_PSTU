#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int n, m;
	cout << "¬ведите n: ";
	cin >> n;

	cout << "¬ведите m: ";
	cin >> m;

	int copy_n = n;
	int copy_m = m;

	int res1 = copy_n++ * copy_m;
	cout << "n++ * m = " << res1 << endl;

	copy_n = n;
	bool res2 = copy_n++ < m;
	cout << "n++ < m = " << res2 << endl;

	bool res3 = copy_m-- > copy_m;
	cout << "m-- > m = " << res3 << endl;

	system("pause");
}


