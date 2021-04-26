#include <iostream>
#include "Pair.h"
#include "lorry.h"
#include "object.h"
#include "vector.h"

using namespace std;

void f1()
{

}

LONG f2()
{
    LONG m;
    cout << "cin >> m" << endl;
    cin >> m;
    return m;
}

int main()
{
    Pair a, b;
    cout << "cin a" << endl;
    cin >> a;
    cout << "cin b" << endl;
    cin >> b;
    cout << "a + b = " << a + b << endl;
    LONG c(2, 2, 2, 2);
    LONG d = f2();
    d.Show();
    cout << d;
    cout << " d * c  = " << d * c << endl;
    cout << " d - c  = " << d - c << endl;



    vector v(5);
    Pair a;
    cin >> a;
    LONG b;
    cin >> b;
    object* p = &a;
    v.add(p);
    p = &b;
    v.add(p);
    cout << v;

    return 0;
}

