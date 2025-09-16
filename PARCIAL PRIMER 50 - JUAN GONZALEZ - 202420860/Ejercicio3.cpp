#include <iostream>
using namespace std;

bool requiresMaintenance(int leaves, int interval) {
    if (leaves % interval == 0) 
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    
    int leaves, intervalo;

    cout << "Ingrese la cantidad de hojas producidas: ";
    cin >> leaves;

    cout << "Ingrese el intervalo de mantenimiento: ";
    cin >> intervalo;

    if (requiresMaintenance(leaves, intervalo))
    {
        cout << "La máquina requiere mantenimiento.\n";
    } 
    else 
    {
        cout << "La máquina no requiere mantenimiento.\n";
    }

    return 0;
}
