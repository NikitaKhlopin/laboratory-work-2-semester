#include<iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include<string>
using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    int raz, k;
    cout << "¬ведите кол-во элементов: ";
    cin >> raz;
    string * mass1 = new string[raz]; //—оздаем динамический массив

    for (int i = 0; i < raz; i++)
    {
        mass1[i] = rand() % 200 - 100;
        cout << "mass1[" << i << "] = " << mass1[i] << endl;
    }
    cout << endl;
    
    cout << "¬ведите количество элементов, которые хотите удалить: ";
    cin >> k;

    for (int i = 0; i < raz - k; i++)
    {
        mass1[i] = mass1[i + k];
        
    }

    for (int i = 0; i < raz - k; i++)
    {
        cout << "mass1[" << i <<"] = "<< mass1[i] << endl;
    }
    delete[] mass1;
 
    return 0;
}