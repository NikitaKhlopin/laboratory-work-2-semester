#include <iostream>
#include <string>
using namespace std;

struct students
{
	string name; // �������
	string surname; // ���
    string surname3; // ��������
	string nomertel; // ����� ��������
	int group; // ����� ������
	int mark1; // ������1
	int mark2; // ������2
	int mark3; // ������3
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
	while ( otvet!= "���")
	{
		cout << "�������  �������, ��� � ��������: ";
		cin >> student[i].surname >> student[i].name >> student[i].surname3;

		cout << "������� ����� �������� ";
		cin >> student[i].nomertel;

		cout << "������� ����� ������: ";
		cin >> student[i].group;

		cout << "������� ������ ��������: ";
		cin >> student[i].mark1>> student[i].mark2>> student[i].mark3;		
		
		cout << "������ �� �� ���������� (�� / ���)? ";
		cin >> otvet;

		i++;
		system("cls");
	}

	N = i;
	for (i = 0; i < N; i++)

	{

		cout << "������� ��� ��������| " << student[i].surname << " " << student[i].name << " " << student[i].surname3 << endl;

		cout << "����� ��������| " << student[i].nomertel<< endl;

		cout << "������| " << student[i].group<< endl;

		cout << "������| " << student[i].mark1<< student[i].mark2<< student[i].mark3 << endl;

	}
	system("pause");
	system("cls");
	k = 1;
	int kol = 0;
	bool flag = false;
	float s;
	int  d;
	
	cout << "������� ����� ������, �� ������� ������ �������: ";
	cin >> d;   
	cout << endl;
	
	cout << "������� ������� ��������������: ";
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

			cout << "������� ��� ��������| " << student_sort[j].surname << " " << student_sort[j].name << " " << student_sort[j].surname3 << endl;

			cout << "����� ��������| " << student_sort[j].nomertel<<endl;

			cout << "������| " << student_sort[j].group<< endl;

			cout << "��� ������| " << student_sort[j].mark1<<" "<< student_sort[j].mark2<<" "<< student_sort[j].mark3 << endl;

			j++;
		}
	}
    N = j;
	bool F = false;
	while (F == false)
	{
		cout << "������� �������, ����� ������� ����� �������� �������: ";
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
	cout << "N=" << N << endl << endl; //���-�� ���������� ���������
	for (i = N; i >k+1 ; i--)

	{
		student_sort[i] = student_sort[i-1];
	}
	cout << "������� �������, ��� � ��������: ";
	cin >> student_sort[k+1].surname >> student_sort[k+1].name >> student_sort[k+1].surname3;

	cout << "������� ����� ��������: ";
	cin >> student_sort[k+1].nomertel;
	
	cout << "������� ����� ������: ";
	cin>>student_sort[k+1].group;

	cout << "������� ������ ��������: ";
	cin >> student_sort[k+1].mark1>> student_sort[k+1].mark2>>student_sort[k+1].mark3;

	for (i = 0; i <= N; i++)
	{
		if (student_sort[i].mark1!= 0)
		{
			cout << "������� ��� ��������| " << student_sort[i].surname << " " << student_sort[i].name << " " << student_sort[i].surname3 << endl;

			cout << "����� ��������| " << student_sort[i].nomertel<< endl;

			cout << "������| " << student_sort[i].group<< endl;

			cout << "��� ������| " << student_sort[i].mark1 <<" "<< student_sort[i].mark2 <<" "<< student_sort[i].mark3 << endl;
		}
	}
	system("pause");
	return 0;
}