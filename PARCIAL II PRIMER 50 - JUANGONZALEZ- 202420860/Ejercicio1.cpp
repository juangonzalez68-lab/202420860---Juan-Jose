#include <iostream>
using namespace std;

int calculateTotal(int hours, int rate) {
    
    return hours * rate;
}
void printInvoice(string plate, int hours, int rate) {

    int total = calculateTotal(hours, rate);
    cout << "Vehiculo de placa: " << plate << ", horas que estuvo: " << hours << ", tarifa por hora: " << rate << ", el total es: " << total << endl;
    
}
int main() {
    string plate;
    int hours, rate;

    cout << "Ingrese la placa del vehiculo: ";
    cin >> plate;

    cout << "Ingrese las horas de parqueo: ";
    cin >> hours;

    cout << "Ingrese la tarifa por hora: ";
    cin >> rate;


    printInvoice(plate, hours, rate);

    return 0;
}
