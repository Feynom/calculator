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
        cout << "�....��������, ����� ����� ��������:"; cin >> x;
        cout << "�....��������, ������ ��:"; cin >> d;
        cout << "�....��������, ����� ����� ��������:"; cin >> y;
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
                    cout << "�������!ĳ���� �� ���� �� �����!"; cout << endl;
            }
        }
        else
            cout << "�� ����� ����������� ��!" << endl;

        cout << "\n������ ��������� ����������?\n���� ��� - ������ 1\n���� ͳ  - ����� ������\n"; cin >> f;      
    } while (f == 1);
    return 0;
}
