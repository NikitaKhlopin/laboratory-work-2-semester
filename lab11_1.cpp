#include <iostream>
#include <string>
using namespace std;

struct List
{ //Структура
	char data;
	List* next;
};

List* add(int size) 
{ //Ввод
	
	if (size == 0)
	{
		cout<<"Error!:"<<endl;
		return 0;
	}
	List* first, * p;
	
	first = NULL;
	p = new List;
	
	cout<<"Введите элементы списка: ";
	cin>>p->data;
	first = p;
	
	for (int i = 2; i <= size; i++) 
	{
		List* h = new List; 
		p->next = h;
		p = p->next;
		cin>>p->data;
		p->next = NULL;//Послдений элемент== 0
	}
	return first;//возвращает 1 элемент
}

void print(List* first) 
{ // Вывод
	if (first == NULL) 
	{
		cout<<"Новый список: "<<endl;
	}
	else 
	{
		List* p = first;
		while (p != NULL) 
		{
			cout<<p->data<<" ";
			p = p->next;
		}
		cout<<endl;
	}
}

void add(List*& first, int n) 
{ //Ввод2
	List* p = first;
	List* h = new List;
	
	cout << "Введите " << n << " элемента(ов): ";
	cin >> h->data;
	
	h->next = p;
	first = h;
	
	while (p->next != NULL) 
	{
		List* h = new List;
		cin >> h->data;
		h->next = p->next;
		p->next = h;
		if (p->next->next != NULL) 
		{
			p = p->next->next;
		}
		else p = p->next;
	}
}

int main() 
{
	setlocale(LC_ALL, "Rus");
	
	int size;
	cout<<"Введите размер списка: ";
	cin>>size;
	
	List* list = add(size);
	
	cout<<"Список: ";
	print(list);//Выводим список
	
	add(list, size);//Добавляем элементы в нечетные позиции
	
	cout << "Изменённый список: ";
	print(list);//Снова выводим список
	
	return 0;
}