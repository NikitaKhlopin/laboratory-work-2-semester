#include "lorry.h"
#include "Pair.h"
#include <iostream>
using namespace std;
LONG::LONG()
{
	first = 0;
	second = 0;
	hi = 0;
	low = 0;
}

LONG::LONG(int a, int b, int c, int d)
{
	first = a;
	second = b;
	hi = c;
	low = d;
}

LONG LONG::operator=(const LONG& T)
{
	if (&T == this) return *this;
	first = T.first;
	second = T.second;
	hi = T.hi;
	low = T.low;
	return *this;
}

LONG LONG:: operator +(const LONG& other)
{
	LONG tmp;
	return tmp;
}

LONG LONG:: operator *(const LONG& other)
{
	LONG tmp;
	tmp.first = other.first * this->first;
	tmp.second = other.second * this->second;
	tmp.hi = other.hi * this->hi;
	tmp.low = other.low * this->low;
	return tmp;
}

LONG LONG::operator-(const LONG other)
{
	LONG tmp;
	tmp.first = this->first - other.first;
	tmp.second = this->second - other.second;
	tmp.hi = this->hi - other.hi;
	tmp.low = this->low - other.low;
	return tmp;
}

void LONG::Show()
{
	cout << "(" << first << "," << hi << ")(" << hi << "," << low << ")" << endl;
}

void LONG::SetHi(double a)
{
	while (a != (int)a)
	{
		cout << "Число должно быть целым" << endl;
		cin >> a;
	}
	first = a;
	cout << endl;
}

void LONG::SetHi()
{
	double a;
	cout << "hi ?"; cin >> a; cout << endl;
	while (a != (int)a)
	{
		cout << "Число должно быть целым" << endl;
		cin >> a;
	}
	first = a;
	cout << endl;
}

void LONG::SetLow(double a)
{
	while (a != (int)a)
	{
		cout << "Число должно быть целым" << endl;
		cin >> a;
	}
	first = a;
	cout << endl;
}

void LONG::SetLow()
{
	double a;
	cout << "Low ?"; cin >> a; cout << endl;
	while (a != (int)a)
	{
		cout << "Число должно быть целым" << endl;
		cin >> a;
	}
	first = a;
	cout << endl;
}

int LONG::GetHi()
{
	return hi;
}

int LONG::GetLow()
{
	return low;
}

LONG::~LONG()
{
	cout << "Long" << endl;
}

ostream& operator<<(ostream& out, const LONG& other)
{
	return(out << "(" << other.first << "," << other.second << ")(" << other.hi << "," << other.low << ")");
}

istream& operator>>(istream& in, LONG& other)
{
	double a, b, c, d;
	cout << "first ?";
	in >> a;
	while (a != (int)a)
	{
		cout << "Число жолжно быть интовым" << endl;
		in >> a;
	}
	other.first = a;
	cout << endl;
	cout << "second ?";
	in >> b;
	while (b != (int)b)
	{
		cout << "Число жолжно быть интовым" << endl;
		in >> b;
	}
	other.second = b;
	cout << endl;
	cout << "hi ?";
	in >> c;
	while (c != (int)c)
	{
		cout << "Число жолжно быть интовым" << endl;
		in >> c;
	}
	other.hi = c;
	cout << endl;
	cout << "low ?";
	in >> d;
	while (d != (int)d)
	{
		cout << "Число жолжно быть интовым" << endl;
		in >> d;
	}
	other.low = d;
	cout << endl;
	return in;
}









