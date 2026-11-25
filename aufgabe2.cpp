/* 
* Progra I, WiSe 2026 
*Uebung07, Aufgabe 2
*Jannik Schwarzbach 985428 
*/ 

#include <iostream>

using std::cout;
using std::cin;

int main(){
    int eingabeZahl;
    cout << "Geben Sie eine ganze Zahl min ein: ";
    int min;
    cin >> min;
    int max;
    do{
        cout << "Geben Sie eine ganze Zahl max (>= 3) ein: ";
        cin >> max;
        if(max <= min){
            cout << "Bitte geben Sie eine größere Zahl als min an." << std::endl;
        }else{
            if(max < 3){
                cout << "Bitte geben Sie eine Zahl an, die größer oder gleich 3 ist" << std::endl;
            }            
        }
        
    }while(max < 3 || max <= min);
    do{
        cout << "Geben Sie eine Zahl zwischen " << min << " und " << max << " an: ";
        
        cin >> eingabeZahl;
        if(eingabeZahl > max || eingabeZahl < min){
            cout << "Ungueltige Eingabe: " << eingabeZahl << " Die Zahl muss zwischen " << min << " und " << max << " liegen!" << std::endl;
        }        
    }while(eingabeZahl > max || eingabeZahl < min);
    

}