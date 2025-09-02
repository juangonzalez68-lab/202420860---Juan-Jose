#include <iostream>

using namespace std;

int main () {
    int userNumber, numberGuess;
    cout << "Ingrese el numero a adivinar; " << endl;
        cin >> numberGuess;
    while ( userNumber!= numberGuess)
    {
        cout << "Adivine el numero: " << endl;
        cin >> userNumber;
        
        if (userNumber > numberGuess)
        {
            cout << "el numero es mayor" << endl;

        }
        else if (userNumber < numberGuess)
        {
            cout << "el numero es menor" << endl;
        }
    }

   

return 0;
}
