// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    string s, h,c;

    int k = 0;
    cout << "Введите строку:";
    cin >> s;
    cout << "Введите символ:";
    cin >> h;
    cout << "Введите символ, который будет заменять предыдущий:";
    cin >> c;
    for (std::string::size_type i = 0; i < s.length(); ++i)
    {
        if (s.find(h, i) == i)
        {
            s[i] = c[0];
        }
    }
    cout << "Изменённая строка " << s << "\n";
    system("pause");
}


