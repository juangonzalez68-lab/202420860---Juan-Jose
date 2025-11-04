#include <iostream>
using namespace std;

void forWithArray()
{
   int Age[6] = {18, 21, 25, 30, 27, 22};

    float AgeSum = 0;
  
  
    for (int i = 0 ; i < 6 ;i++)
    {
        float arrayValue = Age[i];
        AgeSum += arrayValue;
       
        cout << "La edad es: " << arrayValue << endl;
    }
    float gradeAverage = AgeSum / 6;
    cout << "El promedio de edad es: " << gradeAverage << endl;
}

int main() {

    forWithArray();

    return 0;
}