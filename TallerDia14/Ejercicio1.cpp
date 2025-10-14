#include <iostream>

using namespace std;

void consonant(char c, string &consonants) {
    string palabra;
    cout << "Ingrese la palabra: ";
    cin >> palabra;
    for (char c : palabra) 
        if (c >= 'a' && c <= 'z' && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            consonants += c;
        }
    cout << "Consonantes halladas: " << consonants << endl;
    
    }
int main ()
{
    string consonants = "";
    
    consonant('a', consonants);
    return 0;
}
