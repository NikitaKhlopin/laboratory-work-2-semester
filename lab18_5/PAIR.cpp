#include <iostream>
#include "Pair.h"


using namespace std;

Pair Pair :: operator +(const Pair& other)
{
	int F1, S1, F2, S2;
	F1 = other.first;
	S1 = other.second;
	F2 = this->first;
	S2 = this->second;
	Pair tmp;
	int Fsum = F1 + F2;
	int Ssum = S1 + S2;
	tmp.first = Fsum;
	tmp.second = Ssum;
	return tmp;
}

Pair Pair :: operator -(const Pair& other)
{
	int F1, S1, F2, S2;
	F1 = other.first;
	S1 = other.second;
	F2 = this->first;
	S2 = this->second;
	Pair tmp;
	int Fsum = F1 - F2;
	int Ssum = S1 - S2;
	tmp.first = Fsum;
	tmp.second = Ssum;

	return tmp;
}

void Pair::Read()
{
	double R, K;
	cout << "first?"; cin >> R; cout << endl;
	while (R != (int)R)
	{
		cout << "Число должно быть целым" << endl;
		cin >> R;
	}
	first = R;
	cout << "second?"; cin >> K; cout << endl;
	while (K != (int)K)
	{
		cout << "Число должно быть целым" << endl;
		cin >> K;
	}
	second = K;
}

void Pair::Show()
{
	cout << "first : " << first << "," << second << endl;
}

Pair::Pair()
{
	first = 0;
	second = 0;
}

Pair::Pair(double R, double K)
{
	while (R != (int)R)
	{
		cout << "Число должно быть целым" << endl;
		cin >> R;
	}
	first = R;
	cout << endl;
	while (K != (int)K)
	{
		cout << "Число должно быть целым" << endl;
		cin >> K;
	}
	second = K;
	cout << endl;
}

Pair::~Pair()
{

}

int Pair::getFirst()
{
	return first;
}

int Pair::getSecond()
{
	return second;
}

void Pair::setFirst()
{
	double a;
	cout << "first ?"; cin >> a; cout << endl;
	while (a != (int)a)
	{
		cout << "Число должно быть целым" << endl;
		cin >> a;
	}
	first = a;
	cout << endl;
}

void Pair::setSecond()
{
	double a;
	cout << "second?"; cin >> a; cout << endl;
	while (a != (int)a)
	{
		cout << "Число должно быть целым" << endl;
		cin >> a;
	}
	second = a;
	cout << endl;
}

Pair Pair::operator=(const Pair& T)
{
	if (&T == this) return *this;
	first = T.first;
	second = T.second;
	return *this;
}

istream& operator>>(istream& in, Pair& other)
{
	double R, K;
	cout << "first ?";
	in >> R;
	other.first = R;
	cout << endl;
	cout << "second ?";
	in >> K;
	cout << endl;
	other.second = K;
	return in;
}

ostream& operator<<(ostream& out, const Pair& other)
{
	return (out << "(" << other.first << "," << other.second << ")");
}

