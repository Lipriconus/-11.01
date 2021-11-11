//Калькулятор
#include <iostream>
using namespace std;

void calculate(double  a, char op, double  b);
int main()
{
    float a, b; 
    char op; 

    cout << "Ввелити вырадение из двух чисел и одной из предложенных операций  - \n\n";
    cout << "Операции с числами\n";
    cout << "+\n";
    cout << "-\n";
    cout << "*\n";
    cout << "/ \n";
    cout << "sqrt\n";
    cout << "**\n";


    if (cin >> a >> op >> b)
        calculate(a, op, b);

    return 0;
}

void calculate(double a, char op, double b)
{
    switch (op) {
    case '+':
        cout << "\nAddition of two numbers is " << (a + b);
        break;
    case '-':
        cout << "\nSubtraction of two numbers is " << (a - b);
        break;
    case '*':
        cout << "\nMultiplication of two numbers is= " << (a * b);
        break;
    case '/':
        cout << "\nDivision of two numbers is= " << (a / b);
        break; 
    case 'sqrt':
        cout << "\n Корень числа а "<< (sqrt(a));
        break;
    case '**':
        cout << "\n Степень" << (a ** b);
        break;


    default:
        cerr << "\nUnkown operator!";
    }
}
