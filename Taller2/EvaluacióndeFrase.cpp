#include <iostream>
#include <string>
#include <cctype>
using namespace std;

//Objetivo: Analizar una frase ingresada por el usuario y:
//1. Contar cuántas palabras tiene (separadas por espacios).
//2. Contar cuántos signos de puntuación aparecen.
//3. Verificar si la frase termina con un punto (.)

int contarPalabras(string frase)
{
    int contador = 0;
    bool enPalabra = false;

    for (char c : frase)
    {
        if (isspace(c))
        {
            if (enPalabra)
            {
                contador++;
                enPalabra = false;
            }
        }
        else
        {
            enPalabra = true;
        }
    }

    if (enPalabra)
    {
        contador++;
    }

    return contador;
}

int contarPuntuacion(string frase)
{
    int contador = 0;
    string signos = ".,;:!?\"'()-";

    for (int i = 0; i < frase.size(); i++)
    {
        for (int j = 0; j < signos.size(); j++)
        {
            if (frase[i] == signos[j])
            {
                contador++;
            }
        }
    }

    return contador;
}

bool terminaEnPunto(string frase)
{
    if (frase.size() > 0)
    {
        if (frase[frase.size() - 1] == '.')
        {
            cout << "¿Termina en punto? Sí" << endl;
            return true;
        }
        else
        {
            cout << "¿Termina en punto? No" << endl;
            return false;
        }
    }

    cout << "¿Termina en punto? No" << endl;
    return false;
}

int main()
{
    string frase;
    cout << "Ingrese una frase: ";
    getline(cin, frase);

    int numPalabras = contarPalabras(frase);
    int numPuntuacion = contarPuntuacion(frase);
    bool terminaPunto = terminaEnPunto(frase);

    cout << "Número de palabras: " << numPalabras << endl;
    cout << "Número de signos de puntuación: " << numPuntuacion << endl;

    return 0;
}
