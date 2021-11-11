#include <iostream>
#include <string>
using namespace std;



int main() {
    setlocale(0, "");
    int  line, lenghtLine, figure;
    char texturLine;
    cout << "[ + ] Программа - Геометрические фигуры\n";
    cout << "[ 1 ] Линия\n\n";
    cout << "[+] Выберите фигуру :";
    cin >> figure;

    switch (figure)
    {
    case 1:
        system("cls");
        cout << "[ + ] Фигура: “Линия”\n";
        cout << "[ + ] Выберите тип:\n";
        cout << "[ 1 ] Горизонтальная\n";
        cout << "[ 2 ] Вертикальная\n";
        cout << "[ + ] Выберите тип: 1";
        switch (line)
        {
        case 1:
            system("cls");
            cout << "Вы выбрали горизонтальную линию\n\n";
            cout << "Длина линии";
            cin >> lenghtLine;
            cout << "Текстура линии:";

            cout << "[+] Вывод";
            short i = 0;
            while (i <= lenghtLine)
            {
                cout << texturLine;
                i++;
            }
            break;
        case 2:
        {
            system("cls");
            cout << "Вы выбрали вертикальную линию\n\n";
            cout << "Длина линии";
            cin >> lenghtLine;
            cout << "[+] Текстура линии:";
            cin >> texturLine;
            cout << "[+] Вывод";

            short i = 0;
            while (i < lenghtLine)
            {
                cout << texturLine;
                i++;
            }
            break;
        }
        break;

        }






        int _; cin >> _;
        return 0;
    }
}