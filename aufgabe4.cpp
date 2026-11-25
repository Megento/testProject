/* 
* Progra I, WiSe 2026 
*Uebung07, Aufgabe 4
*Jannik Schwarzbach 985428 
*/ 

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int potenz(int basis, int exponent) {
    int ergebnis = 1;
    for (int i = 0; i < exponent; ++i) {
        ergebnis = ergebnis * basis;
    }
    return ergebnis;
}

int main() {
    int basis;
    int exponent;

    cout << "Geben Sie eine ganze Zahl ein: ";
    cin >> basis;

    do {
        cout << "Geben Sie einen nicht-negativen Exponenten ein: ";
        cin >> exponent;
        if (exponent < 0) {
            cout << "Der Exponent muss nicht-negativ sein." << endl;
        }
    } while (exponent < 0);

    cout << basis << "^" << exponent << " = "
              << potenz(basis, exponent) << endl;
    return 0;
}