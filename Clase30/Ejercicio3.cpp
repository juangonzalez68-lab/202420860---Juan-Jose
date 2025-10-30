#include <iostream>
using namespace std;

void forWithArray()
{
    int maximo=0;
    int numbers[6] = {8, 12, 5, 20, 7, 15};
    

    for (int i = 0 ; i < 6 ;i++)
        {
        int arrayValue = numbers[i];
        cout << "el numero es: " << arrayValue << endl;

        if (numbers[i] > maximo)
        {
            maximo = numbers[i];
        }   
    }
    cout << "el numero mayor es: " << maximo << endl;
}

int main() {

forWithArray();

    return 0;
}
