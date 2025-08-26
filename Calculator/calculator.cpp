#include <iostream>

using namespace std;

int main () {
    int  variable1, variable2;

    int multiplication, division, modulo, suma, substrac;
    // suma = 1 // substrac = 2 // multiplication = 3 // division = 4 // module
    
    cout << "ingrese el primer digito";
    cin >> variable1;
    cout << "ingrese el segundo digito";
    cin >> variable2;

    cout << "suma:";
    suma = variable1 + variable2 ;
    cout << suma << endl; 
    cout << "resta:";
    substrac = variable1 - variable2 ;
    cout << substrac << endl;
    cout << "multiplicacion: ";
    multiplication = variable1 * variable2;
    cout << multiplication << endl;
    cout << "division:" ;
    division = variable1 / variable2;
    cout << division << endl;
    modulo = variable1 % variable2;
    cout << "modulo:" ;
    cout << modulo << endl;

    return 0;
    }

