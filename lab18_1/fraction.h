#pragma once
#include <iostream>
using namespace std;

struct fraction
{
	double first;
	double second;
	void init(double, double);
	void read();
	void show();
	double root(double);
};