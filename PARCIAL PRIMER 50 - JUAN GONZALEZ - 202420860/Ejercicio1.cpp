#include <iostream>
using namespace std;

void reviewPackages(int n) {
    int firstNumber;
    if (n % 2 == 0) 
    {
        firstNumber = 2;   
    } 
    else
    {
        firstNumber = 1;   
    }
    cout << "Paquetes revisados:";
    for (int i = firstNumber; i <= n; i += 2) 
    {
        cout << " " << i;
    }
    cout << endl;
}

int main() {
    int NumberOfPackages;
    cout << "Ingrese el numero de paquetes: ";
    cin >> NumberOfPackages;

    reviewPackages(NumberOfPackages);

    return 0;
}
