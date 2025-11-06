#include <iostream>
using namespace std;

void filterCities()
{
    float sum = 0;
    int counter = 0;

    string cities[10] = {"Bogotá", "Medellín", "Cali", "Cartagena", "Pereira", "Bucaramanga",
    "Manizales", "Tunja", "Santa Marta", "Villavicencio"};
    float temperatures[10] = {18.5, 25.1, 27.8, 31.3, 22.7, 26.2, 19.0, 16.4, 30.5, 29.0};

        float tempMin, tempMax;
        cout << "Ingrese la temperatura minima: ";
        cin >> tempMin;
        cout << "Ingrese la temperatura maxima: ";
        cin >> tempMax;

    for (int i = 0 ; i < 10 ;i++)
    {
        string city = cities[i];
        float temperature = temperatures[i];
     
         if (temperatures[i] >= tempMin && temperatures[i] <= tempMax)
            {
               cout << cities[i] << " - " << temperatures[i] << " °C" << endl;
               sum += temperatures[i];
               counter++;
            }
        
    }
    float average = sum / counter;
    cout << "El promedio de las temperaturas dentro del rango es: " << average << " °C" << endl;

}

int main() {

    filterCities();
    return 0;
}

