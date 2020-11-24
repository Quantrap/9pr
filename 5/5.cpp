#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(NULL, "rus");
    string s;
    string glas = "QWERTYUIOPASDFGHJKLLZXCVBNM";
    int k = 0;
    cout << "Введите строку:";
    cin >> s;

    for (std::string::size_type i = 0; i < s.length(); i++)
    {
        for (std::string::size_type g = 0; g < glas.length(); g++)
        {
            if (s.find(glas[g], i) == i)
            {
                k++;
                break;
            }
        }
    }
    cout << "Количество прописных букв = " << k;
    cout << "\n";
    system("pause");
}


