/* 
* Progra I, WiSe 2026 
*Uebung7, Aufgabe 1 
*Jannik Schwarzbach 985428 
*/ 

#include <iostream>

using std::cout;
using std::cin;

int restBerechnen(int a, int b){
    int q = 0;
    int r = a;

    while(r >= b){
        r = r-b;
        q = q+1;
    }
    return r,q;
}

bool berechnungPrimzahl(int eingabeZahl){
    if(eingabeZahl < 2){
        return false;
    }
    int i = 2;
    bool primzahl = true;
    while (i < eingabeZahl && primzahl == true){
        int rest = restBerechnen(eingabeZahl, i);
        if (rest == 0){
            primzahl = false;
        }
        i++;        
    }
    return primzahl;
}

int main() {
    int zahl;
    do{
        cout << "Bitte geben Sie eine positive ganze Zahl eingeben: ";    
        
        cin >> zahl;   
        
        if (zahl < 0){
        cout << "Dies ist keine positive Zahl. Bitte versuchen Sie es erneut. " << std::endl;            
        }     
    } while (zahl <= 0);
    
    bool isPrimzahl  = berechnungPrimzahl(zahl);
    if (isPrimzahl == true){
        cout << zahl << " ist eine Primzahl.";
    }else{
        cout << zahl << " ist keine Primzahl.";
    }
    return 0;
}

