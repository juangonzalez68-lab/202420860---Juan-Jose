#include <iostream>

using namespace std;

void contarPalabras() {
    int number;
    string word;
    int total = 0;

    cout << "Ingrese un numero: ";
    cin >> number;

    cout << "Ingrese las palabras una por una, cuando desee terminar ingrese la palabra: fin" << endl;
    cin >> word;
    while (word != "fin") {
        if (word.length() > number) total++;
        cin >> word;
    }

    cout << "Palabras con longitud mayor a " << number << ": " << total << endl;
}

int main() {
    contarPalabras();
    return 0;
}