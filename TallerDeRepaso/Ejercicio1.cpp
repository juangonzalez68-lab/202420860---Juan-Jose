#include <iostream>
using namespace std;

int main() {
    string userName;
    int userAge;
    double userHeight;

    cout << "Ingrese su nombre: ";
    cin >> userName;

    cout << "Ingrese su edad: ";
    cin >> userAge;

    cout << "Ingrese su altura (metros): ";
    cin >> userHeight;

    cout << "Hola " << userName << ", tienes " << userAge  << " años y tu altura es " << userHeight << " metros." << endl;

    return 0;
}
