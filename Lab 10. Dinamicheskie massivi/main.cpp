#include <iostream>
#include <ctime>
using namespace std;
void fill_array(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 100;
	}
}
void print_array(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
bool delete_element(int* a, int& n, int num_del)
{
	if (num_del < 0 || num_del >= n)
		return false;
	for (int i = num_del; i < n - 1; i++)
	{
		a[i] = a[i + 1];
	}
	n--;
	return true;
}
int* insert_elements(int* a, int& n, int pos, int k)
{
	if (pos >= 0 && pos <= n)
	{
		a = (int*)realloc(a, (n + k) * sizeof(int));
		for (int i = n - 1; i >= pos; i--)
		{
			a[i + k] = a[i];
		}
		for (int i = pos; i < pos + k; i++)
		{
			a[i] = rand() % 100;
		}
	}
	n = n + k;
	return a;
}
int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));
	cout << "n = ";
	int n;
	cin >> n;
	int* a = (int*)malloc(n * sizeof(int));
	fill_array(a, n);
	print_array(a, n);
	int num_del;
	cout << "Номер удаляемого элемента: ";
	cin >> num_del;
	bool res = delete_element(a, n, num_del);
	if (res == true)
		print_array(a, n);
	else
		cout << "Некорректный номер удаляемого элемента" << endl;
	cout << "Куда добавить элементы? ";
	int pos;
	cin >> pos;
	cout << "Сколько эл-тов добавить? ";
	int k;
	cin >> k;
	a = insert_elements(a, n, pos, k);
	print_array(a, n);
	free(a);
}
