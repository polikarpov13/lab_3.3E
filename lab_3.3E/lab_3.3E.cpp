#include <iostream>
#include "Date.h"
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    Date A, B, C, D;

    cout << " Enter A: " << endl;
    cin >> A;

    cout << " Enter B: " << endl;
    cin >> B;

    cout << " A > B " << endl;
    if (A > B)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << " Enter C: " << endl;
    cin >> C;

    cout << " Enter D: " << endl;
    cin >> D;

    cout << " C > D " << endl;
    if (C > D)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    cout << " Кількість елементів класу Date : " << Object::Count() << endl;

}