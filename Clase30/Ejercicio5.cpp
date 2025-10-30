#include <iostream>
using namespace std;

void forWithArray()
{
    string products[3] = {"Pan", "Leche", "Queso"}; 
    float prices[3] = {1500, 3200, 4800};;
    
   for (int i = 0 ; i < 3 ;i++)
        {
        string arrayValue = products[i];
        cout << "los productos son: " << arrayValue << endl;
        }
}

int main() {

forWithArray();



    return 0;
}
