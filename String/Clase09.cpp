#include <iostream>

using namespace std;

void remplazar(){

string originalString = "Hola mundo soy c++";
cout << originalString << endl;
string newString = "";

    for (int i = 0; i < originalString.size(); i++)
    {
        char letter = originalString [i];
        
        if (letter == ' ')
        {
            newString += "-";
        } 
        else
        {
            newString += letter;
        }
        cout << newString << endl; 
    }    
}

void duplicateString(){






}

void removeVowels(){

    char letter = 'a';
    if (letter == 'a' || letter == 'e')
    {
        
    }

}

int main () {
    
  remplazar();



    return 0;
    }

