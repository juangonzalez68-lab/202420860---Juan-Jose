#include <iostream>
using namespace std;

void printShifts(int initialTurn, int finalTurn){
    if (initialTurn > finalTurn) 
    {
        cout << "Error: el turno inicial no puede ser mayor que el final." << endl;
        return;
    }
    else
    {
        cout << "La máquina trabajó en los turnos:";
        int start = initialTurn;
        while (start <= finalTurn) 
        {
            cout << " " << start;
            start = start + 1;  
        }
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Ingrese el turno inicial: ";
    cin >> start;
    cout << "Ingrese el turno final: ";
    cin >> end;

    printShifts(start, end);

    return 0;
}
