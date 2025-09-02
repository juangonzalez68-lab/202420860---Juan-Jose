#include <iostream>

using namespace std;

int main () {
	
	int eggPrice=5;
	int amount, pay, vueltas;
	double total ;
	cout << "Ingrese la cantidad de huevos: ";
	cin >> amount;
	
    if (amount > 10);
	    {
		total = amount * eggPrice;
        }
	total = amount * eggPrice;

	cout << "Total a pagar es:" <<" " << total << endl;
	
	cout << "Con cuanto va a pagar: ";
	cin >> pay;
	
	vueltas = pay - total;
	
	
	
	cout << "Sus vueltas son:" <<" "<< vueltas;

	return 0 ;
}
