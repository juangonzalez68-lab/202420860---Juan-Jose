#include <iostream>

using namespace std;

int main () {
    int variable1;
    
    for (int i = 1; i <= 10; i++)
    {  
        cout << "tabla del: " << i <<  endl;

        for (int j = 1; j <= 5; j++)
        {
            int result = i * j;
            cout << i << "*" << j << "=" << result << endl;
        }
       cout << "--------------" << endl; 
    }

return 0;
}
