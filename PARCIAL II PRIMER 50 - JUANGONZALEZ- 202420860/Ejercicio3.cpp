#include <iostream>
using namespace std;

bool isValidAmount(int amount) {
   if(amount % 50 == 0)
    { 
       return true;
    }
    else 
    {
        return false;
    }
}
void dispenseBills(int amount) {
    int bills200 = 0, bills100 = 0, bills50 = 0;
    while (amount >= 200) 
    {
        bills200++;
        amount -= 200;
    }


    while (amount >= 100) 
    {
        bills100++;
        amount -= 100;
    }

 
    while (amount >= 50) 
    {
        bills50++;
        amount -= 50;
    }

    cout << bills200 << " bills of 200" << endl;
    cout << bills100 << " bills of 100" << endl;
    cout << bills50 << " bills of 50" << endl;
}

int main() {
    int amount;

    cout << "Ingrese el monto a retirar: ";
    cin >> amount;

    if (isValidAmount(amount))
    {
        dispenseBills(amount);
    } 
    else 
    {
        cout << "Monto no valido, debe ser multiplo de 50" << endl;
    }

    return 0;
}
