
#include <iostream>
#include "fraction.h"

using namespace std;

void fraction::init(double f, double s) {
	first = f;
	second = s;
}

void fraction::read() {
	cout << "first? "; cin >> first;
	cout << "second? "; cin >> second;
}

void fraction::show() {
	cout << "first = " << first << endl;
	cout << "second = " << second << endl;
}

double fraction::root(double q) {
	return (q-second)/first;
}