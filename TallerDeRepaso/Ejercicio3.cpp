#include <iostream>
using namespace std;

void showTable(int inputNumber) {
    int counter;
    while(counter<=10)
    {
        cout << inputNumber << "*" << counter << "=" << inputNumber * counter << endl;
        counter++; 
    }
}

int main() {
    int userNumber;
    cout << "Ingrese un numero para ver su tabla de multiplicar: ";
    cin >> userNumber;

    showTable(userNumber);

    return 0;
}
