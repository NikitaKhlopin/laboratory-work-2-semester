#include"strana.h"
#include<iostream>
#include<string>
using namespace std;

strana make_strana()
{
	string s;
	int i;
	double d;
	cout << endl;
	cout << "Vvedite nazvanie stolici: ";
	cin >> s;
	cout << "Vvedite kol-vo people's: ";
	cin >> i;
	cout << "Vvedite ploshad': ";
	cin >> d;
	strana t(s, i, d);
	return t;
}

void print_strana(strana t)
{
	t.show();
}

void main() 
{
	strana t1;
	t1.show();

	strana t2("Moscow", 12000000, 2511.0);
	t2.show();
	cout << endl;

	strana t3 = t2;
	t3.set_stolica("Warsaw");
	t3.set_kol(1700000);
	t3.set_plo(517.2);
	cout << endl;

	print_strana(t3);

	t1 = make_strana();
	t1.show();
}
