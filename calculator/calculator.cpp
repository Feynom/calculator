#include <iostream>
#include <Windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double x, y, f;
    char d;
    do
    {
        cout << "О....Всевишній, ведіть перше значення:"; cin >> x;
        cout << "О....Всевишній, введіть дію:"; cin >> d;
        cout << "О....Всевишній, ведіть друге значення:"; cin >> y;
        cout << endl;

        if (d == '+' || d == '-' || d == '*' || d == '/')
        {
            if (d == '+')
                cout << x << d << y << "=" << x + y << endl;
            if (d == '-')
                cout << x << d << y << "=" << x - y << endl;
            if (d == '*')
                cout << x << d << y << "=" << x * y << endl;
            if (d == '/')
            {
                if (y != 0)
                    cout << x << ":" << y << "=" << x / (y * 1.0) << endl;
                else
                    cout << "Помилка!Ділити на нуль не можна!"; cout << endl;
            }
        }
        else
            cout << "Ви ввели неправильну дію!" << endl;

        cout << "\nБажаєте повторити обчислення?\nЯкщо Так - введіть 1\nЯкщо Ні  - інший символ\n"; cin >> f;      
    } while (f == 1);
    return 0;
}
