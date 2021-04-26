#include "Plenty.h"

void main()
{
    setlocale(LC_ALL, "Rus");
    Plenty a(5);

    cout << "a: ";
    cout << a << endl;
    cout << "Enter a: ";
    cin >> a;
    cout <<"a: " ;
    cout << a << endl;
    cout << "a[2] = 0" << endl;
    a[2] = 0;
    cout << "a: ";
    cout << a << endl;

    cout << "b:";
    Plenty b(10, 3);
    cout << b << endl;
    Plenty c(10);
    cout << endl << "Объединение множеств (c = a+b) :";
    c = b + a;
    cout << c << endl;

    cout << endl << "a.length = " << a() << endl;
    cout << "a.first = " << *(a.first()) << endl;
    Iterator i = a.first();
    i++;
    cout << "i++" << endl << "*i = " << *i << endl;
    cout << endl << "Iterator a: " << endl;
    for (i = a.first(); i != a.last(); i++) 
    {
        cout << *i <<" ";
    }
}