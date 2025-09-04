#include <iostream>

using namespace std;
// suma
void nota ( int noteOne){
    if (noteOne > 30){
        cout << "Usted paso con: " << noteOne << endl;
    }
    else
    cout << "Usted perdio con: " << noteOne << endl;
    
}
int main(){
    
    int note;
    cout << "Digite la nota: ";
    cin >> note;

    nota ( note);




    return 0;
}
    