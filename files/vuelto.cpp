#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int precio, conCuantoMePagan;
	int cantBilletes20, cantBilletes10, cantBilletes5, cantBilletes2;
	
	cout<<"Ingrese el precio de la compra: ";
	cin>>precio;
	cout<<"Ingrese con cuanto pago el cliente: ";
	cin>>conCuantoMePagan;
	
	int vuelto = conCuantoMePagan - precio;
	cout<<"El vuelto seria: "<<vuelto<<endl;
	
	cantBilletes20 = vuelto/20;
	cout<<"Cantidad de billetes de $20: "<<cantBilletes20<<endl;
	vuelto = vuelto - 20 * cantBilletes20;
	
	cantBilletes10 = vuelto/10;
	cout<<"Cantidad de billetes de $10: "<<cantBilletes10<<endl;
	vuelto = vuelto - 10 * cantBilletes10;
	
	cantBilletes5 = vuelto/5;
	cout<<"Cantidad de billetes de $5: "<<cantBilletes5 <<endl;
	vuelto = vuelto - 5 * cantBilletes5;
	
	cantBilletes2 = vuelto/2;
	vuelto = vuelto - 2 * cantBilletes2;
	cout<<"Cantidad de billetes de $2: "<<cantBilletes2<<endl;
	
	cout<<"Cantidad de monedas de $1: "<<vuelto<<endl;
	
	return 0;
}

