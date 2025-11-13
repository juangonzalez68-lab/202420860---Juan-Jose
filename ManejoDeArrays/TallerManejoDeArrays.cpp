#include<iostream>

using namespace std;

int getUserAction() {
    int userAction;
    cout << "-----------------------------" << endl;
    cout << "Por favor seleccione: " << endl;
    cout << "1 Registrar o reiniciar ventas." << endl;
    cout << "2 Mostrar todas las ventas." << endl;
    cout << "3Modificar el valor de una venta específica." << endl;
    cout << "4 Buscar una venta por nombre." << endl;
    cout << "5 Mostrar las ventas dentro de un rango de precios."<< endl;
    cout << "6 Calcular el total de ventas." << endl;
    cout << "7 Salir." << endl;
    cout << "Ingrese : ";
    cin >> userAction;
    cout << "-----------------------------" << endl;
    return userAction;
}

// 1. Registrar o reiniciar ventas
void getNewSales(string* names, int* values, int size) {

    cout << "Ingrese el numero de ventas a registrar: ";
    cin >> size;
    names = new string[size];
    values = new int[size];
    for (int i = 0; i < size; i++) 
    {
    
        cout << "Ingrese el nombre de la venta #" << i + 1 << ": ";
        cin >> names[i];
        cout << "Ingrese el valor de " << names[i] << ": ";
        cin >> values[i];
    }
}
//2. mostrar todas las ventas

void printSales(string names[], int values[], int size){
    cout << "Lista actual de ventas:" << endl;
    cout << "--------------------" << endl;
    for (int i = 0; i < size; i++){
        

        cout << "Venta: " << names[i] << "  Valor: " << values[i] << endl;
    }
}
// 3. Modificar el valor de una venta específica
void modifySale(string names[], int values[], int size){
    string name;
    cout << "Ingrese el nombre de la venta a modificar: ";
    cin >> name;
    int found = 0;

    for (int i = 0; i < size; i++){
        if (names[i] == name){
            cout << "Ingrese el nuevo valor para " << name << ": ";
            cin >> values[i];
            found = 1;
        }
    }

    if (found == 0){
        cout << "Venta no encontrada." << endl;
    }
}
// 4. Buscar una venta por nombre
void findSale(string names[], int values[], int size){
    string name;
    cout << "Ingrese el nombre de la venta que desea buscar: ";
    cin >> name;
    int found = 0;

    for (int i = 0; i < size; i++){
        if (names[i] == name){
            cout << "Venta encontrada en la posición " << i + 1 << "  Valor: " << values[i] << endl;
            found = 1;
        }
    }

    if (found == 0){
        cout << "Venta no encontrada." << endl;
    }
}
//5. Mostrar las ventas dentro de un rango de precios
void salesInRange(string* names, int* values, int size) {
    if (size == 0)
    {
        cout << "No hay ventas registradas." << endl;
        return;
    }
    int minRange, maxRange;
    cout << "Ingrese el valor minimo del rango: ";
    cin >> minRange;
    cout << "Ingrese el valor maximo del rango: ";
    cin >> maxRange;
    cout << "Ventas en el rango [" << minRange << ", " << maxRange << "]:" << endl;
    for (int i = 0; i < size; i++) 
    {
        if (values[i] >= minRange && values[i] <= maxRange)
        {
            cout << "Venta: " << names[i] << ", Valor: " << values[i] << endl;
        }
    }
}
//6. Calcular el total de ventas
void totalSales(int* values, int size) {
    if (size == 0)
    {
        cout << "No hay ventas registradas." << endl;
        return;
    }
    int total = 0;
    for (int i = 0; i < size; i++) 
    {
        total += values[i];
    }
    cout << "El total de ventas es: " << total << endl;
}
void run() {
    bool continueRuning = true;
    int arraySize = 0;
    string* names;
    int* values;

    while (continueRuning)
    {
        int userAction = getUserAction();
        // Reestablecer
        if(userAction == 1)
        {
            getNewSales(names, values, arraySize);
        } 
        else if (userAction == 2)
        {
            printSales(names, values, arraySize);
        // Modificar
        } 
        else if (userAction == 3) 
        {
            modifySale(names, values, arraySize);
        // Buscar por nombre
        } 
        else if (userAction == 4) 
        {
            findSale(names, values, arraySize);
        // Rango de precios
        } 
        else if (userAction == 5) 
        {
            salesInRange(names, values, arraySize);
        // Total de ventas
        } 
        else if (userAction == 6) 
        {
            totalSales(values, arraySize);
        // Salir
        } 
        else if (userAction == 7) 
        {
            delete[] names;
            delete [] values;
            continueRuning = false;
        }
    }
    
}

int main() {
    run();
    return 0;
}