#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[]) {
	float cat1, cat2;
	cout<<"Ingrese la longitud del primer cateto: ";
	cin>>cat1;
	cout<<"Ingrese la longitud del segundo cateto: ";
	cin>>cat2;
	
	float hipotenusa = sqrt(powf(cat1, 2)+powf(cat2, 2));
	
	cout<<"La longitud de la hipotenusa es: "<<hipotenusa<<endl;
	
	return 0;
}

