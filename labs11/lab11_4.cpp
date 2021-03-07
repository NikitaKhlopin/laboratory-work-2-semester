#include <iostream>
using namespace std;

		struct queue {
			int data;
			queue* next;
		};

		queue* make_queue(int n, queue * &first, queue * &last) // Создание очереди
		{
			if (n == 0) 
				return NULL;
			queue* p = new queue;
			
			int a;
			cout <<"Введите элеметы очереди: ";
			cin >> a;
			
			p->data = a;
			p->next = NULL;
			first = p;
			last = p;
			
			for (int i = 2; i <= n; i++)
			{
				queue* h = new queue;
				
				cin>>a;
				h->data = a;
				h->next = p;
				last = h;
				p = last;
			}
			return first;
		}

		queue* push(int n, queue * &last)
		{
			queue* p = new queue;
			p->data = n;
			p->next = last;
			last = p;
			
			return last;
		}

		void print(queue * last) // Вывод
		{
			queue* p = last;
			
			
				while (p != NULL)
				{
					cout << p->data << " ";
					p = p->next;
				}
			
			cout << endl;
		}

		int pop(queue * &first, queue * &last)
		{
			queue* p = last;
			
			int k = 0;
			
			while (p != NULL)
			{
				k++;
				p = p->next;
			}
			p = last;
			
			if (k == 1)
			{
				int t = last->data;
				delete p;
				last = NULL;
				first = NULL;
			
				return t;
			}
			
			else {
				while (p->next->next != NULL)
				{
					p = p->next;
				}
				queue* t = p;
				
				int e = p->next->data;
				p = p->next;
				t->next = NULL;
				first = t;
				
				delete p;
				
				return e;
			}
		}
		int main()
		{
			setlocale(LC_ALL, "Rus");
			
			cout<<"Введите кол-во элементов в стеке: ";
			int n;
			int k;
			cin >> n;
			
			queue* first, * last;
			
			make_queue(n, first, last);

			cout << "Очередь: ";
			print(last);
			
			int* arr = new int[n];

			for (int i = 0; i < n; i++)
			{
				int t = pop(first, last);
				arr[i] = t;
				
				if (t % 2 == 0)
				{
					k = t;
				}
			}

			for (int i = 0; i < n; i++)
			{
				if (arr[i] != k)
				{
					push(arr[i], last);
				}
			}

			cout << "Очередь после удаления: ";
			print(last);
			
			return 0;
		}
