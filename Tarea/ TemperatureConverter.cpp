#include <iostream>
using namespace std;

int main() {
    int celsius, fahrenheit;

    cout << "Ingrese la temperatura en Celsius: ";
    cin >> celsius;

    fahrenheit = (celsius * 9/5) + 32;

    cout << "La temperatura en Fahrenheit es: " << fahrenheit << endl;

    return 0;
}
