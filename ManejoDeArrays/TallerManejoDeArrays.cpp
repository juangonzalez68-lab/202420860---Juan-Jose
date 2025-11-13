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
void getNewSales(char**& names, int*& values, int& size) {
    cout << "Ingrese el numero de ventas a registrar: ";
    cin >> size;

 
    names = new char*[size];
    values = new int[size];

    for (int i = 0; i < size; i++) 
    {
        names[i] = new char[30];
        cout << "Ingrese el nombre de la venta #" << i + 1 << ": ";
        cin >> names[i];
        cout << "Ingrese el valor de " << names[i] << ": ";
        cin >> values[i];
    }
}
//2. mostrar todas las ventas

void printSales(char** names, int* values, int size) {
    if (size == 0) 
    {
        cout << "No hay ventas registradas." << endl;
        return;
    }
    cout << "Lista actual de ventas" << endl;
    cout << "-----------------------------" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Venta: " << names[i] << ", Valor: " << values[i] << endl;
    }
}
// funcion para cuando son iguales
bool sonIguales(const char* str1, const char* str2) {
    while (*str1 && *str2) 
    {
        if (*str1 != *str2) 
        {
            return false;
        }
        str1++;
        str2++;
    }
    return *str1 == *str2;
}
// 3. Modificar el valor de una venta específica
void modifySale(char** names, int* values, int size) {
    if (size == 0)
    {
        cout << "No hay ventas registradas para modificar." << endl;
        return;
    }
    char search[30];
    cout << "Ingrese el nombre de la venta a modificar: ";
    cin >> search;
    int newPositionValue;
    cout << "Ingrese el nuevo valor: ";
    cin >> newPositionValue;
    for (int i = 0; i < size; i++)
    {
        if (sonIguales(names[i], search))
        {
            cout << "Venta encontrada." << endl;
            values[i] = newPositionValue;
            cout << "Valor actualizado exitosamente." << endl;
            return;
        
        }
    }
    cout << "Venta no encontrada." << endl;
}
// 4. Buscar una venta por nombre
void findSale(char** names, int* values, int size) {
    if (size == 0)
    {
        cout << "No hay ventas registradas." << endl;
        return;
    }
    char search[30];
    cout << "Ingrese el nombre de la venta a buscar: ";
    cin >> search;
    for (int i = 0; i < size; i++) 
    {
        if (sonIguales(names[i], search))
        {
            cout << "Venta encontrada: " << names[i] << ", Valor: " << values[i] << endl;
            return;
        
        }
    }
    cout << "Venta no encontrada." << endl;
}
//5. Mostrar las ventas dentro de un rango de precios
void salesInRange(char** names, int* values, int size) {
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
    char** names;
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
            continueRuning = false;
        } 
        else 
        {
            cout << "Accion no valida. Por favor intente de nuevo." << endl;
        }
    }
    for (int i = 0; i < arraySize; i++) 
    {
        delete[] names[i];
    }
    delete[] names;
    delete[] values;
    
}

int main() {
    run();
    return 0;
}