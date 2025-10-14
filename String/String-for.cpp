#include <iostream>

using namespace std;

void forWithString(){
    cout << "--------------" << endl;
    string exampleText = "Hello World";
    cout << "size():" << exampleText.size() << endl;
    cout << "posicion 1: " << exampleText[1] << endl;
    cout << "--------------" << endl;
    for (int i = 0; i < exampleText.size (); i++)
    {
        char textCharacter = exampleText[i];

        if (textCharacter == 'a' || textCharacter == 'e'|| textCharacter == 'i' || textCharacter == 'O' || textCharacter == 'U')
        {
            cout << "se encontro una a, e, i, o, u" << endl;
        }
        cout << "posicion: " << i << "-" << textCharacter << endl;  
    }
}

int main () {

    forWithString();
  
    return 0;
    }
