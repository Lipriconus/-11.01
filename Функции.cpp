#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
	setlocale(0, "");

	cout << "[X] FUNCTION \n\n"
    cout << "[1] Очищение консоли\n"
    cout << "[2] Изменение цвета консоли \n"
    cout << "[3] Изменение цвета текста \n "
    cout << "[4] Вывод типа данных INT\n\n"
    cout << "[5] Вывод типа данных CHAT \n"
    cout << "[6] Вывод типа данных DOUBLE \n"
    cout << "[7] Вывод типа данных FLOAT \n"
    cout << "[8] Вывод типа данных BOOL\n\n"
    cout << "[9] Хочешь получить сообщение? Жми девяточку!!! \n "
    cout << "[10] Квадрат 5x5"
    
    int userFunction;
    cin >> userFunction;
    System("cls");

    switch (userFunction)
    {
    case 1:
    {
        HANDLE h;
         h = GetStdHandle(STD_OUTPUT_HANDLE);
         SetConsoleTextAttribute(h, (((2 << 4) | 14)));

    } 
        break;
    
    default:
        break;
    }









    retutn 0;
}