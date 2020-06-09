#include <iostream>
#include "Number.h"
using namespace std;

void printNumber(Number& num)
{ 
	num.show();
}


Number getNumber()
{
	Number temp(6.2174, 7, "62174000");
	return temp;
}


int main()
{
	Number n1;
	cout << "n1 - Without param: ";
	n1.show();
	Number n2(4.1, 3, "41000");
	cout << "n2 - With param: ";
	n2.show();
	Number n3 = n2;
	cout << "n3=n2 - With copy: ";
	n3.show();
	cout << "\nSetters and getter for n3:\m";
	n3.setStr("46640000");
	cout << "n3.setStr(46640000) = "; n3.show();
	n3.setMantissa(5.1823);
	cout << "n3.setMantissa(5.1823) = "; n3.show();
	n3.setExponent(7);
	cout << "n3.setExponent(7) = "; n3.show();
	Number n4 = getNumber();
	cout << "\nn4 - With copy #3: ";
	printNumber(n4);
	return 0;
}