#pragma once
#include<iostream>
#include<string>
using namespace std;
class strana
{
	string stolica;//Столица
	int kol;//Кол-во жителей
	double plo;//Площадь
public:
	strana();
	strana(string, int, double);
	strana(const strana&);
	~strana();
	string get_stolica();
	void set_stolica(string);
	int get_kol();
	void set_kol(int);
	double get_plo();
	void set_plo(double);
	void show();
};

