#include <iostream>

using namespace std;
// suma
void sumOfTwoValues( int valueOne, int valueTwo){
      int sumResult;
      sumResult = valueOne + valueTwo;
      cout << "la suma de los valores es: " << sumResult << endl;
}
// resta
void subsOfTwoValues (int valueOne, int valueTwo){
    int subsResult;
    subsResult = valueOne - valueTwo;
    cout << "la resta de los valores es: " << subsResult << endl;
}
// multiplicacion 
void multTwoValues(int valueOne, int valueTwo){
    int multResult = valueOne * valueTwo;
    cout << "La multiplicacion es: " << multResult << endl;  
}
// division
void divideNumbers(int valueOne, int valueTwo){
    if (valueTwo==0){
        cout << "La division es erronea " << endl;  
        return ;
    
    }
    else {
        double divResult = (double)valueOne / valueTwo;
            cout << "La division es: " << divResult << endl;  
    }
}   





int main(){
    int valueOne, vTwo;
    cout << "Ingrese el primer valor: ";
    cin >> valueOne;
     cout << "Ingrese el segundo valor: ";
    cin >> vTwo;
    
    sumOfTwoValues(valueOne, vTwo);
    subsOfTwoValues(valueOne, vTwo);
    multTwoValues (valueOne, vTwo);
    divideNumbers (valueOne, vTwo);

    

    return 0;
}
    



    
    

