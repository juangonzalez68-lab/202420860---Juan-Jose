#include <iostream>
using namespace std;

string classifyNumber(int userNumber) {
    if (userNumber > 0)
    {
        return "Positivo";
    } 
    else if (userNumber < 0) 
    {
        return "Negativo";
    } 
    else
    {
        return "Cero";
    }
}

int main() {
    int inputNumber;
    cout << "Ingresa un numero entero: ";
    cin >> inputNumber;

    cout << classifyNumber(inputNumber) << endl;

    return 0;
}
