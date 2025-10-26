#include <iostream>
using namespace std;
//1. Cuántas vocales contiene.
//2. Cuántas consonantes tiene.
//3. Cuántos caracteres no alfabéticos (números o símbolos) hay.
int contarVocales(string texto){
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
    {
        if((c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') &&
           !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
             c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U'))
            {
            contador++;
            }
    }
    return contador;
}
int contarNoAlfabeticos(string texto, int &contadorNumeros) {
    int contador = 0;
    contadorNumeros = 0;

    for (char c : texto)
    {
        if ((c < 'a' || c > 'z') && (c < 'A' || c > 'Z'))
            {
            contador++;

            if (c >= '0' && c <= '9') 
                {
                contadorNumeros++;
                }
            }
    }

    return contador;
}

int main() {
    string texto;
    cout << "Ingrese el texto para contar las vocales, consonantes y caracteres no alfabeticos: ";
    cin >> texto;
    int vocales = contarVocales(texto);
    int consonantes = contarConsonantes(texto);
    int contadorNumeros = 0;
    int noAlfabeticos = contarNoAlfabeticos(texto, contadorNumeros);
    cout << "Vocales: " << vocales << endl;
    cout << "Consonantes: " << consonantes << endl;
    cout << "No alfabeticos: " << noAlfabeticos << endl;



    return 0;
}


