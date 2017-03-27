#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int kmAntes, kmDespues;
	cout<<"Ingrese la medida del cuentakm antes: ";
	cin>>kmAntes;
	cout<<"Ingrese la medida cuentakm despues: ";
	cin>>kmDespues;
	
	int kmTotales = kmDespues-kmAntes;
	float litros = kmTotales * 0.12;
	float plata = litros * 18.50;
	cout<<"Nuestro amigo nos debe "<<plata<<" pesos por la nafta utilizada"<<endl;
	
	return 0;
}

