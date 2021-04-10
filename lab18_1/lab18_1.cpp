#include "fraction.h"
#include <iostream>

using namespace std;

double q;


fraction make_fraction(double f, double s) {
	fraction p;
	p.init(f, s);
	return p;
}

int main()
{
	cout << "Q= ";
cin >> q; 
	fraction A;
	fraction B;
	A.init(5, 2.3);
	B.read();
	A.show();
	B.show();
	cout << "A.root(" << A.first << ", " << A.second << ") = " << A.root(q) << endl;
	cout << "B.root(" << B.first << ", " << B.second << ") = " << B.root(q) << endl;
	fraction* X = new fraction;
	X->init(2, 0.5);
	X->show();
	X->root(q);
	cout << "X.root(" << X->first << ", " << X->second << ") = " << X->root(q) << endl;
	fraction mas[3];
	for (int i = 0; i < 3; i++) {
		mas[i].read();
	}
	for (int i = 0; i < 3; i++) {
		mas[i].show();
	}
	for (int i = 0; i < 3; i++) {
		mas[i].root(q);
		cout << "mas[" << i << "].root(" << mas[i].first << ", " << mas[i].second << ") = " << mas[i].root(q) << endl;
	}
	fraction* p_mas = new fraction[3];
	for (int i = 0; i < 3; i++) {
		p_mas[i].read();
	}
	for (int i = 0; i < 3; i++) {
		p_mas[i].show();
	}
	for (int i = 0; i < 3; i++) {
		mas[i].root(q);
		cout << "p_mas[" << i << "].root(" << p_mas[i].first << ", " << p_mas[i].second << ") = " << p_mas[i].root(q) << endl;
	}

	double y; double z;
	cout << "first? "; cin >> y;
	cout << "second? "; cin >> z;
	fraction f = make_fraction(y, z);
	f.show();
}