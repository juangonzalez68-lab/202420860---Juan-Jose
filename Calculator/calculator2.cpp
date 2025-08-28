#include <iostream>
using namespace std;

int main() {
    int num1, num2, resultado;
    char operacion;

    cout << "Calculadora basica" << endl;
    cout << "Operaciones disponibles: +  -  *  /" << endl;

    cout << "Ingresa el primer numero: ";
    cin >> num1;

    cout << "Ingresa el segundo numero: ";
    cin >> num2;

    cout << "Elige la operacion (+, -, *, /): ";
    cin >> operacion;

    if (operacion == '+') {
        resultado = num1 + num2;
        cout << "Resultado: " << resultado << endl;
    }
    else if (operacion == '-') {
        resultado = num1 - num2;
        cout << "Resultado: " << resultado << endl;
    }
    else if (operacion == '*') {
        resultado = num1 * num2;
        cout << "Resultado: " << resultado << endl;
    }
    else if (operacion == '/') {
        if (num2 != 0) {
            resultado = num1 / num2;
            cout << "Resultado: " << resultado << endl;
        } else {
            cout << "Error: No se puede dividir entre cero." << endl;
        }
    }
    else {
        cout << "Operacion no valida." << endl;
    }

    return 0;
}
