#include "Number.h"
#include <sstream>

Number::Number(float m, int e, string s)
{
	mantissa = m;
	exponent = e;
	str = s;
}

Number::Number()
{
	mantissa = 1, 201;
	exponent = 6;
	str = "1201000";
}

Number::Number(const Number& num)
{
	mantissa = num.mantissa;
	exponent = num.exponent;
	str = num.str;
}

Number::~Number()
{
	str.clear();
}

float Number::getMantissa()
{
	return mantissa;
}

int Number::getExponent()
{
	return exponent;
}

string Number::getStr()
{
	return str;
}

void Number::setMantissa(float m)
{
	mantissa = m;
	float f = mantissa * powf(10, exponent);
	stringstream ss;
	string temp;
	ss << f / powf(10, exponent);
	ss >> temp;
	int exp = exponent - temp.length() + 1;
	for (int i = 0; i < exp; i++)
		temp += "0";
	str = temp;
}

void Number::setExponent(int e)
{
	exponent = e;
	float f = mantissa * powf(10, exponent);
	stringstream ss;
	string temp;
	ss << f / powf(10, exponent);
	ss >> temp;
	int exp = exponent - temp.length() + 1;
	for (int i = 0; i < exp; i++)
		temp += "0";
	str = temp;
}

void Number::setStr(string s)
{
	str = s;
	float f = atof(str.c_str());
	int exp = 1;
	while (f > 10) {
		f /= 10;
		exp++;
	}
	exponent = exp;
	mantissa = f;
}

void Number::show()
{
	cout << str << ", M=" << mantissa << ", p=" << exponent << endl;
}