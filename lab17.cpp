#include <iostream>
#include <ctime>
#include <string>
#include <math.h> 


using namespace std;

#define RND_CNT 100

#define FAKE_DATA 14


string name_fake[FAKE_DATA] = { //фио
    "Иванов Иван Иванович",
    "Петров Петр Петрович",
    "Александров Александр Александрович",
    "Иванов Петр Иванович",
    "Александров Петр Александрович",
    "Петров Иван Петрович",
    "Александров Иван Александрович",
    "Иванов Александр Иванович",
    "Петров Александр Петрович",
    "Иванов Петр Александрович",
    "Петров Александр Иванович",
    "Александров Петр Александрович",
    "Петров Иван Александрович",
    "Иванов Александр Петрович"
};

string birthday_fake[FAKE_DATA] = { //дата рождения
    "10.01.1994",
    "20.02.1990",
    "20.02.2009",
    "20.02.2004",
    "20.02.2005",
    "20.02.2006",
    "20.02.2007",
    "24.02.2008",
    "20.02.1983",
    "20.05.2010",
    "21.02.2011",
    "30.08.2012",
    "20.02.2013",
    "22.02.2014"
};

string number_phone[FAKE_DATA] = { //номер телефона
    "+79127499599",
    "+79225213500",
    "+79823338999",
    "+79123459012",
    "+79292774989",
    "+79826789091",
    "+79504049722",
    "+79508172026",
    "+79512027273",
    "+79524028093",
    "+79228690120",
    "+79129341234",
    "+79298889900",
    "+79501234567"
};

string pasport_fake[FAKE_DATA] = { //номер паспорта
    "5715403111",
    "5716401022",
    "5717401023",
    "5718401024",
    "5719401025",
    "5723401026",
    "5721401027",
    "5722401028",
    "5723401029",
    "5724401010",
    "5725401011",
    "5726401012",
    "5727401013",
    "5728401014"
};

struct User {
    string name;
    string data;
    string phone;
    string passport;
};

struct Node {
    User data;     // Элемент списка
    Node* next;     // Указатель на следующий элемент
};

pair<Node**, int> make_table(User* items, int n, int size);
int hash_func(string key, int size);
void pressKey();
int echoMenu();
void generate(User* people, int n);
void print(User* people, int n);
void search(User* people, int n);

int main() 
{
    srand(time(NULL));
    setlocale(LC_ALL, "Rus");

    int n;
    cout << "Введите количество человек для генерации" << endl;
    cin >> n;

    User* people = new User[n];
    generate(people, n);

    cout << "Введите размер хэш таблицы: ";
    int size;
    cin >> size;
    auto table = make_table(people, n, size);
    cout << "Количество коллизий: " << table.second << endl;
    pressKey();
    int input = -1;
    while (input != 0) 
    {
        input = echoMenu();
        switch (input) {
        case 1: {
            system("clear");
            print(people, n);
            pressKey();
        }
        case 2: {
            system("clear");
            cout << "Введите номер телефона для поиска" << endl;
            string key;
            cin.ignore();
            getline(cin, key);
            int hash = hash_func(key, size);
            Node* current = table.first[hash];
            if (current != nullptr) {
                while (current->data.phone != key && current->next != nullptr) {
                    current = current->next;
                }
                if (current->data.phone == key) {
                    cout << current->data.name << ' ' << current->data.data << ' ' << current->data.phone << ' ' << current->data.passport << endl;
                }
                else {
                    cout << "Никто не найден" << endl;
                }
            }
            pressKey();
        }
        case 3: {
            system("clear");
            cout << "Введите новый размер" << endl;
            cin >> size;
            auto table = make_table(people, n, size);
            cout << "Количество коллизий: " << table.second << endl;
            pressKey();
        }
        default: {}
        }
    }
    system("clear");
    return 0;
}

int get_value(string str) 
{
    int value = 0;
    int j = 1;
    for (auto i : str) {
        value += i * j;
        j++;
    }
    return value;
}

int hash_func(string key, int size) {
    double f;
    return int(size * modf(get_value(key) * 0.803523421, &f));
}

// H(k)= [M(kAmod1)],0<A<1, mod1

pair<Node**, int> make_table(User* items, int n, int size) 
{
    Node** table = new Node * [size];
    for (int i = 0; i < size; i++)
        table[i] = nullptr;

    int n_of_collisions = 0;
    for (int i = 0; i < n; i++) {
        int hash = hash_func(items[i].phone, size);
        if (table[hash] == nullptr) {
            Node* p = new Node;
            p->data = items[i];
            p->next = nullptr;
            table[hash] = p;
        }
        else {
            n_of_collisions++;
            Node* current = table[hash];
            while (current->next != nullptr) {
                current = current->next;
            }
            Node* p = new Node;
            p->data = items[i];
            p->next = nullptr;
            current->next = p;
        };
    }
    return make_pair(table, n_of_collisions);
}

void pressKey()
{
    cout << "Press any key to continue..." << endl;
    string n;
    cin >> n;
}

int echoMenu() 
{
    int input;

    system("clear");
    cout << "1 - Вывод" << endl;
    cout << "2 - Поиск" << endl;
    cout << "3 - Перегенерация хэш таблицы" << endl << endl;
    cout << "0 - Выход" << endl;
    cin >> input;

    return input;
}

void generate(User* people, int n) 
{
    for (int i = 0; i < n; i++) {
        User p;

        p.name = name_fake[rand() % FAKE_DATA];
        p.data = birthday_fake[rand() % FAKE_DATA];
        p.phone = number_phone[rand() % FAKE_DATA];
        p.passport = pasport_fake[rand() % FAKE_DATA];

        people[i] = p;
    }
}

void print(User* people, int n) 
{
    for (int i = 0; i < n; i++) {
        cout << people[i].name << ' ' << people[i].data << ' ' << people[i].phone << ' ' << people[i].passport<<endl;
    }
}

void search(User* people, int n) 
{

}