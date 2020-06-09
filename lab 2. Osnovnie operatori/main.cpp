#include <iostream>
#include <locale>

using namespace std;

int main()
{
setlocale(LC_ALL, "rus");
int sum = 0;
for (int i = 20; i < 100; i++)
{
if (i % 3 == 0)
sum += i;
}
cout << "Сумма целых положительных чисел" << endl << "меньших 200 и кратных 3 равна: " << sum << endl;
}
