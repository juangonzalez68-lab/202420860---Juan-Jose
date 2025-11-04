#include <iostream>
using namespace std;

void forWithArray()
{
    
    float precios[6] = {12.5, 8.0, 9.9, 15.3, 11.7, 6.4};
    float maximo = precios[0];
    float lowerCost = precios[0];
    
   

    for (int i = 0 ; i < 6 ;i++)
        {
        float arrayValue = precios[i];
        cout << "el precio es: " << arrayValue << endl;

        if (precios[i] > maximo)
            {
            maximo = precios[i];
            }   
        if (precios[i] < lowerCost)
            {
            lowerCost = precios[i];
            }   
    
        }
        
    cout << "el precio mayor es: " << maximo << endl;
    cout << "el precio minimo es: " << lowerCost << endl;
}

int main() {

forWithArray();

    return 0;
}
