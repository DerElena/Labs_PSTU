#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	srand(time(0));
	int a[100];
	int n;
	cout << "n = ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100 - 50;
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (i % 3 == 0)
		{
			for (int j = i; j < n - 1; j++)
			{
				a[j] = a[j + 1];
			}
			n--;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
		{
			for (int j = n; j > i; j--)
			{
				a[j] = a[j - 1];
			}
			a[i + 1] = a[i] + 1;
			n++;
			i++;
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
}
