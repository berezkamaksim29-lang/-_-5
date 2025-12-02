#include <iostream>
#include "Mathfuncslib.h"

using namespace std;
using namespace Mathfuncs;

int main()
{
    setlocale(LC_ALL, "ukr");
    
    double a, b;
    int op;

    cout << "Введiть перше число: ";
    cin >> a;

    cout << "Введiть друге число: ";
    cin >> b;

    cout << "\nОберiть операцiю:\n";
    cout << "1 - Додавання\n";
    cout << "2 - Вiднiмання\n";
    cout << "3 - Множення\n";
    cout << "4 - Дiлення\n";
    cout << "Ваш вибiр: ";
    cin >> op;

    try
    {
        switch (op)
        {
        case 1:
            cout << "Результат: " << Mymathfuncs::Add(a, b) << endl;
            break;

        case 2:
            cout << "Результат: " << Mymathfuncs::Subtract(a, b) << endl;
            break;

        case 3:
            cout << "Результат: " << Mymathfuncs::Multiply(a, b) << endl;
            break;

        case 4:
            cout << "Результат: " << Mymathfuncs::Divide(a, b) << endl;
            break;

        default:
            cout << "Невiрна операцiя!" << endl;
        }
    }
    catch (const exception& e)
    {
        cout << "Помилка: " << e.what() << endl;
    }

    return 0;
}
