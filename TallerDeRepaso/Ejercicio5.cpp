#include <iostream>
using namespace std;

void greaterNumber(int firstValue, int secondValue) {
    if (firstValue > secondValue) 
    {
        cout << "El mayor es: " << firstValue << endl;
    } 
    else if (secondValue > firstValue) 
    {
        cout << "El mayor es: " << secondValue << endl;
    } 
    else 
    {
        cout << "Ambos numeros son iguales: " << firstValue << endl;
    }
}

int main() {
    int userNumber1, userNumber2;

    cout << "Ingresa el primer numero: ";
    cin >> userNumber1;

    cout << "Ingresa el segundo numero: ";
    cin >> userNumber2;

    greaterNumber(userNumber1, userNumber2);

    return 0;
}
