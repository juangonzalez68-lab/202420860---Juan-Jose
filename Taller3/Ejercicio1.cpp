#include <iostream>
using namespace std;
void showText(string text){
    int total = text.length();
    int countWithoutSpace = 0;
    for (int i = 0 ; i < total; i ++){
        char textChar = text[i];
        if (textChar != '' )
        {
            countWithoutSpace++;
        }
    }
    cout << text << endl;
    cout << "Cantidad total de caractares: " << total << endl;
    cout << " caracteres sin espacios: " << countWithoutSpace << endl;


} 

int main() {
    string text = " programacion en c++";
    showText(text);


    return 0;
}

