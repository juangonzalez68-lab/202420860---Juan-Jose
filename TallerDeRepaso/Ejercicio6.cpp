#include <iostream>
using namespace std;

int greaterOfThree(int firstValue, int secondValue, int thirdValue) {
    if (firstValue >= secondValue && firstValue >= thirdValue) 
    {
        return firstValue;
    } 
    else if (secondValue >= firstValue && secondValue >= thirdValue) 
    {
        return secondValue;
    } 
    else 
    {
        return thirdValue;
    }
}

int main() {
    int userNumber1, userNumber2, userNumber3;

    cout << "Ingresa tres numeros enteros: ";
    cin >> userNumber1 >> userNumber2 >> userNumber3;

    cout << "El mayor es: " 
         << greaterOfThree(userNumber1, userNumber2, userNumber3) << endl;

    return 0;
}
