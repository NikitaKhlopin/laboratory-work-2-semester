#include<iostream>
#include <iomanip>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include<string>
using namespace std;


int main()
{
    setlocale(0, ".1251"); //включили кодировку.
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    int raz, k;
    cout << "Введите кол-во элементов: ";
    cin >> raz;
    string * mass1 = new string[raz]; //Создаем динамический массив

    for (int i = 0; i < raz; i++)
    {
        mass1[i] = rand() % 200 - 100;
        cout << "mass1[" << i << "] = " << mass1[i] << endl;
    }
    cout << endl;
    
    cout << "Введите количество элементов, которые хотите удалить: ";
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
