#include"strana.h"
#include<iostream>
#include<string>
using namespace std;

strana::strana()
{
	stolica = "";
	kol = 0;
	plo = 0;
	cout << "Constructor bez parametrov dlia objecta" << this << endl;
}

strana::strana(string N, int K, double S)
{
	stolica = N;
	kol = K;
	plo = S;
	cout << "Constructor s parametrami dlia objecta " << this << endl;
}

strana::strana(const strana& t)
{
	stolica = t.stolica;
	kol = t.kol;
	plo = t.plo;
	cout << "Constructor copirovania dlia objecta " << this << endl;

}

strana::~strana()
{
	cout << "Destructor dlia objecta " << this << endl;
}

string strana::get_stolica()
{
	return stolica;

}
int strana::get_kol()
{
	return kol;
}
double strana::get_plo()
{
	return plo;
}

void strana::set_stolica(string N)
{
	stolica = N;
}
void strana::set_kol(int K)
{
	kol = K;
}
void strana::set_plo(double S)
{
	plo = S;
}

void strana::show()
{
	cout << "Stolica : " << stolica << endl;
	cout << "Kolichestvo : " << kol << endl;
	cout << "Ploshad' : " << plo << endl;
}
