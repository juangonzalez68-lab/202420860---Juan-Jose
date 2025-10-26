#include <iostream>
#include <string>
using namespace std;

//Objetivo: Verificar si un código de acceso cumple con estas reglas:
//1. Debe contener al menos un dígito.
//2. Debe incluir al menos un símbolo especial (@, #, $, %).
//3. No debe contener espacios.

bool tieneDigito(string codigoAcceso)
{
    for (int i = 0; i < codigoAcceso.size(); i++)
    {
        if (codigoAcceso[i] >= '0' && codigoAcceso[i] <= '9')
        {
            return true;
        }
    }
    return false;
}

bool tieneSimboloEspecial(string codigoAcceso)
{
    string simbolos = "@#$%";

    for (int i = 0; i < codigoAcceso.size(); i++)
    {
        for (int j = 0; j < simbolos.size(); j++)
        {
            if (codigoAcceso[i] == simbolos[j])
            {
                return true;
            }
        }
    }
    return false;
}

bool sinEspacios(string codigoAcceso)
{
    for (int i = 0; i < codigoAcceso.size(); i++)
    {
        if (codigoAcceso[i] == ' ')
        {
            return false;
        }
    }
    return true;
}

int main() {

    string codigoAcceso;
    cout << "Ingrese el código de acceso: ";
    cin >> codigoAcceso;

    if (tieneDigito(codigoAcceso) && tieneSimboloEspecial(codigoAcceso) && sinEspacios(codigoAcceso))
    {
        cout << "Código de acceso válido." << endl;
    }
    else
    {
        cout << "Código de acceso inválido." << endl;
    }

    return 0;
}
