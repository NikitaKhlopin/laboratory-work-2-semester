#include <iostream>
#include "Pair.h"
#include "LONG.h"
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
    Pair a,b;
    cout << "cin a" << endl;
    cin >> a;
    cout << "cin b" << endl;
    cin >> b;
    cout << "a + b = " << a + b << endl;
    LONG c(2,2,2,2);
    LONG d = f2();
    d.Show();
    cout << d;
    cout <<" d * c  = "<< d * c << endl;
    cout << " d - c  = " << d - c << endl;
    return 0;
}
