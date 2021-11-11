#include <iostream>
#include <string>
using namespace std;



int main() {
    setlocale(0, "");
    

    const int SIZE = 10;
    int N1[SIZE] = { 1,112,15,16,17,18,19,20,22,109 };
    for (int i = 0; i < 10; i++) {

        cout << N1[i] << endl;

       }

    float N2[SIZE] = { 20,21,22,23,24,25,26,27,28,29.8};
    for (int i = 0; i < 10; i++) {

        cout << N2[i] << endl;

    }

    short N3[SIZE] = { 100,101,102,103,103,105,106,107,108,109 };
    for (int i = 0; i < 10; i++) {

        cout << N3[i] << endl;

    }
    long N4[SIZE] = { 200,201,202,203,204,205,206,207,208,209 };
    for (int i = 0; i < 10; i++) {

        cout << N4[i] << endl;

    }
    
    char N5[SIZE] = { 'a','a2','a3','a4','a5','a6','a7','a8','a9' };
    for (int i = 0; i < 10; i++) {

        cout << N5[i] << endl;

    }

    double N6[SIZE] = { 10,11,12,13,14,15,16,17,18,19 };
    for (int i = 0; i < 10; i++) {

        cout << N6[i] << endl;

    }
    string N7[SIZE] = { "1", "2","3","4","5","6","7","8","9" };
    for (int i = 0; i < 10; i++) {

        cout << N7[i] << endl;

    }

        int _; cin >> _;
        return 0;
    }