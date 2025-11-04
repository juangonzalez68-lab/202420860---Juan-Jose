#include <iostream>
using namespace std;
//Ejercicio 1: Contar caracteres de un texto (sin espacios)Crea un programa que reciba un string y cuente cuántos caracteres tiene, ignorando los espacios.Muestra el texto original, la cantidad total de caracteres y la cantidad sin espacios.

int contarVocales(string texto)
{
    int contador = 0;
    for(char c : texto)
    {
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
            {
            contador++;
            }
    }
    return contador;
}
int contarConsonantes(string texto)
{
    int contador = 0;
    for(char c : texto)
    
        if((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') &&
           !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
             c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
            {
            contador++;
            }
    return contador;
}
 void AnalyzeText()
{
    string palabra;
    cout << "ingrese el texto: " ;
    cin >> palabra;

    cout << "El numero de vocales es: " <<  contarVocales(palabra)<< endl;
    cout << "El numero de consonantes es: " <<  contarConsonantes(palabra) << endl;
}

int main() {


AnalyzeText();


    return 0;
}

