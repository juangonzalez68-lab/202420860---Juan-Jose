#include <iostream>
using namespace std;
//Objetivo: Dado un código como "A12-BX9-Z", el programa debe:
//1. Contar cuántos guiones (-) hay.
//2. Contar cuántos caracteres son dígitos.
//3. Validar que el código termine con una letra mayúscula
int contarGuiones(string codigoProducto)
{
    int contador = 0;
    for (char c : codigoProducto)
    {
        if (c == '-')
        {
            contador++;
        }
    }
    return contador;
}
int contarDigitos(string codigoProducto){
    int contador = 0;
    for (char c : codigoProducto)
    {
        if (isdigit(c))
        {
            contador++;
        }
    }
    return contador;
}
bool validarUltimaMayuscula(string codigoProducto){
    if (codigoProducto.empty())
    {
        return false;
    }
    char ultimoCaracter = codigoProducto.back();
    return isupper(ultimoCaracter);
}

int main() {
    string codigoProducto;
    cout << "Ingrese el código de producto: ";
    cin >> codigoProducto;
    int guiones = contarGuiones(codigoProducto);
    int digitos = contarDigitos(codigoProducto);
    bool esValido = validarUltimaMayuscula(codigoProducto);
    cout << "Cantidad de guiones: " << guiones << endl;
    cout << "Cantidad de dígitos: " << digitos << endl;
    if (esValido)
    {
        cout << "El código termina con una letra mayúscula." << endl;
    }
    else
    {
        cout << "El código no termina con una letra mayúscula." << endl;
    }



    return 0;
}
