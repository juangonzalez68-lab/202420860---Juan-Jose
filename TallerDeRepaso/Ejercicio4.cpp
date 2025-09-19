#include <iostream>
using namespace std;

void countDescending(int startNumber) {
    while (startNumber >= 0) 
    {
        cout << startNumber << " ";
        startNumber--;
    }
    cout << endl;
}

void countAscending(int endNumber) {
    int counter = 0;
    while (counter <= endNumber)
    {
        cout << counter << " ";
        counter++;
    }
    cout << endl;
}

int main() {
    int userNumber;
    cout << "Ingresa un numero: ";
    cin >> userNumber;

    cout << "Conteo descendente:" << endl;
    countDescending(userNumber);

    cout << "Conteo ascendente:" << endl;
    countAscending(userNumber);

    return 0;
}
