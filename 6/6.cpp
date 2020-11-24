// 1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    string s, h;

    int k = 0;
    cout << "Введите строку:";
    cin >> s;
    cout << "Введите подстроку:";
    cin >> h;
    for (std::string::size_type i = 0; i < s.length(); ++i)
    {
        if (s.find(h, i) == i)
        {
            k++;
        }
    }
    cout << "Количество вхождений подстроки " << h << " в строку " << s << " = " << k << "\n";
    system("pause");
}


