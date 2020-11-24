// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    string s;

    cout << "Введите строку:";
    cin >> s;
    cout << "Изменённая строка:\n";
    for (std::string::size_type i = 0; i < s.length(); ++i)
    {
        if (!isdigit(s[i]))
        {
            cout << s[i];
        }
    }
    cout << "\n";
    system("pause");
}


