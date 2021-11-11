#include <iostream>
using namespase std;
int main()
{
    setlocale(0, "");

    cout << "Калькулятор\n\n";

    cout << "[+] Cложение\n";
    cout << "[-] Вычитание\n";
    cout << "[] Умножение\n";
    cout << "[/] Деление\n";


    cout << "[!] Введите операцию: ";

    char operation;
    cin >> operation;

    cout << "[!] Введите первое число: ";
    float number1;
    cin >> number1;


    cout << "[!] Введите второе число: ";
    float number2;
    cin >> number2;

    if (operation == '+')
    {
        cout << "[+] Результат : " << number1 << " + " << number2 << " = " << number1 + number2;
    }

    else if (operation == '-')
    {
        cout << "[-] Результат : " << number1 << " - " << number2 << " = " << number1 - number2;
    }

    else if (operation == '')
    {
        cout << "[*] Результат : " << number1 << " * " << number2 << " = " << number1 * number2;
    }

    else if (operation == '/')
    {
        cout << "[/] Результат : " << number1 << " / " << number2 << " = " << number1 / number2;
    }

    else cout << "Что-то не робит  🙂  !!";


    int ; cin >> ;
    return 0;

}