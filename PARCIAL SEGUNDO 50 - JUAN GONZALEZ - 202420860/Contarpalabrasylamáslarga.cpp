#include <iostream>
using namespace std;

void countWordsAndLongest(string phrase)
{
    int wordCount = 0;
    string longestWord = "";
    string currentWord = "";
    
    for (int i = 0; i <= phrase.length(); i++)
    {
        if (i < phrase.length() && phrase[i] != ' ') 
        {
            currentWord += phrase[i];
        } 
        else 
        {
            if (currentWord != "") 
            {
                wordCount++;
                if (currentWord.length() > longestWord.length()) 
                {
                    longestWord = currentWord;
                }
                currentWord = "";
            }
        }
    }
    
    cout << "Cantidad de palabras: " << wordCount << endl;
    cout << "Palabra más larga: " << longestWord << endl;
}

int main() {
    string phrase;
    cout << "ingrese la frase: " ;
    cin >> phrase;
    
    countWordsAndLongest(phrase);
    
    return 0;
}

