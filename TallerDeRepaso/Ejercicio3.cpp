#include <iostream>
using namespace std;

void showTable(int inputNumber) {
    for (int counter = 1; counter <= 10; ++counter) 
    {
        cout << inputNumber << " x " << counter << " = " << inputNumber * counter << endl;
    }
}

int main() {
    int userNumber;
    cout << "Ingrese un numero para ver su tabla de multiplicar: ";
    cin >> userNumber;

    showTable(userNumber);

    return 0;
}
