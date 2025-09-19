#include <iostream>
using namespace std;

int greaterNumber(int firstValue, int secondValue) {
    if (firstValue > secondValue) 
    {
        return firstValue;
    } 
    else
    {
        return secondValue;
    }
}

int main() {
    int userNumber1, userNumber2;

    cout << "Ingresa el primer numero: ";
    cin >> userNumber1;

    cout << "Ingresa el segundo numero: ";
    cin >> userNumber2;

    cout << "El mayor es: " << greaterNumber(userNumber1, userNumber2) << endl;

    return 0;
}
