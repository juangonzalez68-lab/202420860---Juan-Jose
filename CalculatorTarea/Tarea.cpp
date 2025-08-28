#include <iostream>
using namespace std;

int main() {
    int variable1, variable2, resultado;
    int eleccion;

    cout << "Calculadora <3" << endl;
    cout << "1. Suma" << endl;
    cout << "2. Resta" << endl;
    cout << "3. Multiplicacion" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulo" << endl;

    cout << "Elige una opcion: " << endl;
    cout << "suma: 1 ";
    cout << "resta: 2 ";
    cout << "multiplicacion: 3 ";
    cout << "division: 4 ";
    cout << "modulo: 5 ";

    cin >> eleccion;

    cout << "Ingresa el primer numero: ";
    cin >> variable1;
    cout << "Ingresa el segundo numero: ";
    cin >> variable2;

    switch(eleccion) {
        case 1:
            resultado = variable1 + variable2;
            cout << "Resultado de la suma: " << resultado << endl;
            break;
        case 2:
            resultado = variable1 - variable2;
            cout << "Resultado de la resta: " << resultado << endl;
            break;
        case 3:
            resultado = variable1 * variable2;
            cout << "Resultado de la multiplicacion: " << resultado << endl;
            break;
        case 4:
            resultado = variable1 / variable2;
            cout << "Resultado de la division: " << resultado << endl;
            break;
        case 5:
            resultado = variable1 % variable2;
            cout << "Resultado del modulo: " << resultado << endl;
            break;
    }

    return 0;
}
