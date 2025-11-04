#include <iostream>
using namespace std;

void forWithArray()
{
    string names[5] = {"Carlos", "Marta", "Lucía", "Tomás", "Sofía"}; 
    int ages[5] = {20,16, 22, 15, 19};
    cout << "personas mayores de edad: " << endl;
   for (int i = 0 ; i < 5 ;i++)
        {
        
        if (ages[i] >= 18)
        {
            cout << names[i] << "- edad: " << ages[i] << endl;
        }
        
       
    }
}
int main() {

forWithArray();



    return 0;
}