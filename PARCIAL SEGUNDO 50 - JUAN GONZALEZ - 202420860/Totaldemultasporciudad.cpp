#include <iostream>
using namespace std;

void totalfines ()
{
    string plates[6] = {"ABC123", "XYZ789", "LMN456", "JKL321", "QWE654", "TYU999"};
    float fines[6] = {250000, 180000, 300000, 450000, 200000, 120000};
    string cities[6] = {"Tunja", "Bogota", "Tunja", "Medellin", "Cali", "Tunja"};
    string cityInput;

    cout << "Ingrese la ciudad: ";
    cin >> cityInput;

    float totalFines = 0;
    for (int i = 0; i < 6; i++)
    {
        if (cities[i] == cityInput)
        {
            cout << "Placa: " << plates[i] << ", Multa: " << fines[i] << endl;
            totalFines += fines[i];
        }
    }
    cout << "El total de multas en " << cityInput << " es: " << totalFines << endl;

}

int main() {

    totalfines();
    return 0;
}

