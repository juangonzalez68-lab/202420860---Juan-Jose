#include <iostream>
using namespace std;

int getUserAction() {
    int userAction;
    cout << "-----------------------------" << endl;
    cout << "Por favor seleccione: " << endl;
    cout << "1. Crear o reemplazar lista de ventas." << endl;
    cout << "2. Mostrar todas las ventas." << endl;
    cout << "3. Modificar el valor de una venta." << endl;
    cout << "4. Buscar una venta." << endl;
    cout << "5. Mostrar ventas dentro de un rango de precios." << endl;
    cout << "6. Calcular total de ventas." << endl;
    cout << "7. Salir." << endl;
    cout << "Ingrese un valor: ";
    cin >> userAction;
    cout << "-----------------------------" << endl;
    return userAction;
}

void printSales(char** names, int values[], int size) {
    cout << "Lista actual de ventas:" << endl;
    cout << "-----------------------------" << endl;
    for (int i = 0; i < size; i++) {
        cout << "Venta: " << names[i] << " -> Valor: " << values[i] << endl;
    }
}

void modifySale(char** names, int values[], int size) {
    char search[30];
    cout << "Ingrese el nombre de la venta a modificar: ";
    cin >> search;

    bool found = false;
    for (int i = 0; i < size; i++) {
        int j = 0;
        bool equal = true;
        while (names[i][j] != '\0' && search[j] != '\0') {
            if (names[i][j] != search[j]) equal = false;
            j++;
        }
        if (equal && names[i][j] == search[j]) {
            cout << "Valor actual: " << values[i] << endl;
            cout << "Ingrese el nuevo valor: ";
            cin >> values[i];
            found = true;
            cout << "Venta actualizada correctamente." << endl;
            break;
        }
    }
    if (!found) cout << "No se encontró esa venta." << endl;
}

int findSale(char** names, int values[], int size, char search[]) {
    for (int i = 0; i < size; i++) {
        int j = 0;
        bool equal = true;
        while (names[i][j] != '\0' && search[j] != '\0') {
            if (names[i][j] != search[j]) equal = false;
            j++;
        }
        if (equal && names[i][j] == search[j]) {
            cout << "Venta encontrada en posición " << i + 1 
                 << " con valor: " << values[i] << endl;
            return i;
        }
    }
    cout << "Venta no encontrada." << endl;
    return -1;
}

void salesInRange(char** names, int values[], int size) {
    int min, max;
    cout << "Ingrese el valor mínimo: ";
    cin >> min;
    cout << "Ingrese el valor máximo: ";
    cin >> max;

    cout << "Ventas dentro del rango [" << min << ", " << max << "]:" << endl;
    for (int i = 0; i < size; i++) {
        if (values[i] >= min && values[i] <= max)
            cout << "Venta: " << names[i] << " -> Valor: " << values[i] << endl;
    }
}

void calculateTotal(int values[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) total += values[i];
    cout << "El total de las ventas es: " << total << endl;
}

void getNewSales(char**& names, int*& values, int& size) {
    cout << "Ingrese el número de ventas: ";
    cin >> size;

    // Liberar memoria si ya existía
    if (names != nullptr) {
        for (int i = 0; i < size; i++) delete[] names[i];
        delete[] names;
    }
    delete[] values;

    names = new char*[size];
    values = new int[size];

    for (int i = 0; i < size; i++) {
        names[i] = new char[30];
        cout << "Ingrese el nombre (sin espacios) de la venta #" << i + 1 << ": ";
        cin >> names[i];
        cout << "Ingrese el valor de " << names[i] << ": ";
        cin >> values[i];
    }
}

void run() {
    bool continueRuning = true;
    int arraySize = 0;
    char** names = nullptr;
    int* values = nullptr;

    while (continueRuning) {
        int userAction = getUserAction();

        if (userAction == 1) {
            getNewSales(names, values, arraySize);
        } 
        else if (userAction == 2) {
            printSales(names, values, arraySize);
        } 
        else if (userAction == 3) {
            modifySale(names, values, arraySize);
        } 
        else if (userAction == 4) {
            char search[30];
            cout << "Ingrese el nombre de la venta a buscar: ";
            cin >> search;
            findSale(names, values, arraySize, search);
        } 
        else if (userAction == 5) {
            salesInRange(names, values, arraySize);
        } 
        else if (userAction == 6) {
            calculateTotal(values, arraySize);
        } 
        else if (userAction == 7) {
            continueRuning = false;
            cout << "Saliendo del programa..." << endl;
        } 
        else {
            cout << "Opción inválida." << endl;
        }
    }

    if (names != nullptr) {
        for (int i = 0; i < arraySize; i++) delete[] names[i];
        delete[] names;
    }
    delete[] values;
}

int main() {
    run();
    return 0;
}
