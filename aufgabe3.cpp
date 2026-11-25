/* 
* Progra I, WiSe 2026 
*Uebung07, Aufgabe 3
*Jannik Schwarzbach 985428 
*/ 

#include <iostream>

using std::cout;
using std::cin;
using std::endl;


void calculateFibonacciZahlen(int num){
    cout << "x_1 = 1" << endl;
    cout << "x_2 = 1" << endl;
    int x = 2;
    int n = 1;
    int nMinus1 = 1;
    int nPlus1;
    while (num > x){
        nPlus1 = n + nMinus1;
        nMinus1 = n;
        n = nPlus1;
        x++;
        cout << "x_" << x << " = " << nPlus1 << endl;
    }

}

int main (){
    int zahl;
    do{
        cout << "Fibonacci-Zahlen" << endl;
        cout << "Bitte geben Sie eine ganze Zahl m ein (m>0): ";    
        
        cin >> zahl;   
        
        if (zahl < 0){
        cout << "Dies ist keine positive Zahl. Bitte versuchen Sie es erneut. " << std::endl;            
        }     

    } while (zahl <= 0);
    calculateFibonacciZahlen(zahl);
    return 0;

}

