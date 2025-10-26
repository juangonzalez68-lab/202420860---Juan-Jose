#include <iostream>
using namespace std;
//Validar si un nombre de usuario cumple con las siguientes condiciones: Debe tener entre 6 y 12 caracteres, Debe empezar con una letra,No debe contener espacios.
bool validarLongitud(string nombreUsuario)
{
    int Length = nombreUsuario.length();
    if (Length >= 6 && Length <= 12)
    {
        return true;    
    }
    else
    {
        return false;
    }
}

bool validarInicioLetra(string nombreUsuario)
{
    char firstChar = nombreUsuario[0];
    if ((firstChar >= 'A' && firstChar <= 'Z') || (firstChar >= 'a' && firstChar <= 'z'))
    {
        return true;    
}
    else
    {
        return false;
    }
}
bool validarSinEspacios(string nombreUsuario)
{
    for (char c : nombreUsuario)
    {
        if (c == ' ')
        {
            return false;    
        }
    }
    return true;    
}    

int main() {

    string nombreUsuario;
    cout << "Ingrese un nombre de usuario: ";
    cin >> nombreUsuario;
    if (validarLongitud(nombreUsuario) && validarInicioLetra(nombreUsuario) && validarSinEspacios(nombreUsuario))
    {
        cout << "El nombre de usuario es valido." << endl;
    }
    else
    {
        cout << "El nombre de usuario no es valido." << endl;
    }
   
    return 0;
}

