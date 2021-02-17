#include <iostream>
#include <string>
using namespace std;

struct students
{
	string name; // Фамилия
	string surname; // Имя
    string surname3; // Отчество
	string nomertel; // Номер телефона
	int group; // Номер группы
	int mark1; // Оценка1
	int mark2; // Оценка2
	int mark3; // Оценка3
};

int main()
{
	setlocale(LC_ALL, "rus");
	system("chcp 1251>nul");
	students student[100];
	students student_sort[100];
	string otvet;
	int i = 0, N, k = 1, j;
	char l;
	while ( otvet!= "Нет")
	{
		cout << "Введите  фамилию, имя и отчество: ";
		cin >> student[i].surname >> student[i].name >> student[i].surname3;

		cout << "Введите номер телефона ";
		cin >> student[i].nomertel;

		cout << "Введите номер группы: ";
		cin >> student[i].group;

		cout << "Введите оценки студента: ";
		cin >> student[i].mark1>> student[i].mark2>> student[i].mark3;		
		
		cout << "Хотите ли вы продолжить (Да / Нет)? ";
		cin >> otvet;

		i++;
		system("cls");
	}

	N = i;
	for (i = 0; i < N; i++)

	{

		cout << "Фамилия Имя Отчество| " << student[i].surname << " " << student[i].name << " " << student[i].surname3 << endl;

		cout << "Номер телефона| " << student[i].nomertel<< endl;

		cout << "Группа| " << student[i].group<< endl;

		cout << "Оценки| " << student[i].mark1<< student[i].mark2<< student[i].mark3 << endl;

	}
	system("pause");
	system("cls");
	k = 1;
	int kol = 0;
	bool flag = false;
	float s;
	int  d;
	
	cout << "Введите номер группы, из которой хотите удалить: ";
	cin >> d;   
	cout << endl;
	
	cout << "Введите среднее арифметическое: ";
	cin >> s;  
	cout << endl;  
	
	for (i = 0; i < N; i++)
	{
		flag = false;
		for (j = i; j < N; j++)
		{					
			if ((((student[i].mark1 + student[i].mark2 + student[i].mark3) / 3 < s) && ((student[j].mark1 + student[j].mark2 + student[j].mark3) / 3 < s)) && (d==student[i].group== student[j].group))
			{
					kol++;
					student[j].mark1 = 0;
					flag = true;
				}
		}
		if (flag == true) student[i].mark1= 0;
	}
	j = 0;
	for (i = 0; i < N; i++)
	{
		if (student[i].mark1 != 0)
		{
			student_sort[j] = student[i];

			cout << "Фамилия Имя Отчество| " << student_sort[j].surname << " " << student_sort[j].name << " " << student_sort[j].surname3 << endl;

			cout << "Номер телефона| " << student_sort[j].nomertel<<endl;

			cout << "Группа| " << student_sort[j].group<< endl;

			cout << "Три оценки| " << student_sort[j].mark1<<" "<< student_sort[j].mark2<<" "<< student_sort[j].mark3 << endl;

			j++;
		}
	}
    N = j;
	bool F = false;
	while (F == false)
	{
		cout << " Введите фамилию, после которой нужно добавить элемент: ";
		cin >> otvet;

		i = 0;
		while (otvet != student_sort[i].surname & i < N)
		{
			i++;
		}
		if (i != N) F = true;
	}
	system("cls");
	k = i;
	cout << "N=" << N << endl << endl; //Кол-во оставшихся студентов
	for (i = N; i >k+1 ; i--)

	{
		student_sort[i] = student_sort[i-1];
	}
	cout << "Введите фамилию, имя и отчество: ";
	cin >> student_sort[k+1].surname >> student_sort[k+1].name >> student_sort[k+1].surname3;

	cout << "Введите номер телефона: ";
	cin >> student_sort[k+1].nomertel;
	
	cout << "Введите номер группы: ";
	cin>>student_sort[k+1].group;

	cout << "Введите оценки студента: ";
	cin >> student_sort[k+1].mark1>> student_sort[k+1].mark2>>student_sort[k+1].mark3;

	for (i = 0; i <= N; i++)
	{
		if (student_sort[i].mark1!= 0)
		{
			cout << "Фамилия Имя Отчество| " << student_sort[i].surname << " " << student_sort[i].name << " " << student_sort[i].surname3 << endl;

			cout << "Номер телефона| " << student_sort[i].nomertel<< endl;

			cout << "Группа| " << student_sort[i].group<< endl;

			cout << "Три оценки| " << student_sort[i].mark1 <<" "<< student_sort[i].mark2 <<" "<< student_sort[i].mark3 << endl;
		}
	}
	system("pause");
	return 0;
}
