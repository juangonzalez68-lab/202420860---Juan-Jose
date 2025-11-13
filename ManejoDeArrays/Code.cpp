#include<iostream>

using namespace std;

int getUserAction() {
    int userAction;
    cout << "-----------------------------" << endl;
    cout << "Por favor seleccione: " << endl;
    cout << "1 Crear o reemplazar lista." << endl;
    cout << "2 para imprimir la lista." << endl;
    cout << "3 para modificar la lista." << endl;
    cout << "4 para salir." << endl;
    cout << "Ingrese un valor: ";
    cin >> userAction;
    cout << "-----------------------------" << endl;
    return userAction;
}

void printArray(int numbers[], int size) {
    cout << "Lista actual" << endl;
    cout << "-----------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Posicion " << i + 1 << " -> Valor actual: " << numbers[i] << endl;
    }
}

void modifyArray(int numbers[]) {
    cout << "Ingrese la posicion a modificar: ";
    int positionToModify, newPositionValue;
    cin >> positionToModify;
    cout << "Ingrese el nuevo valor: ";
    cin >> newPositionValue;
    numbers[positionToModify - 1] = newPositionValue;
}

int* getNewList(int size) {
    int* newList = new int[size];
    for (int i = 0; i < size; i++)
    {
        int userValue;
        cout << "Ingrese el elemento para la posicion " << i + 1 << ": ";
        cin >> userValue;
        newList[i] = userValue;
    }
    return newList;
}

void run() {
    bool continueRuning = true;
    int arraySize = 0;
    int* numbers = getNewList(arraySize);
    while (continueRuning)
    {
        int userAction = getUserAction();
        // Reestablecer
        if(userAction == 1) {
            int newArraySize;
            cout << "Ingrese el tamaño que quiere que tenga la lista: ";
            cin >> newArraySize;
            numbers = getNewList(newArraySize);
            arraySize = newArraySize;
        // Imprimir
        } else if (userAction == 2){
            printArray(numbers, arraySize);
        // Modificar
        } else if (userAction == 3) {
            printArray(numbers, arraySize);
            modifyArray(numbers);
        // Salir    
        } else if (userAction == 4) {
            delete[] numbers;
            continueRuning = false;
        }
    }
}

int main() {
    run();
    return 0;
}