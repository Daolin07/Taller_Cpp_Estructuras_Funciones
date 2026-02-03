#include <iostream>
using namespace std;

int main(){
	int numero, enRango=0, fueraRango=0;
	for(int i=0;i<15;i++){
		cout<<"Ingresa un numero: ";
		cin>>numero;
		if(numero>=20 and numero<=80){
			enRango+=1;
		}else{
			fueraRango+=1;
		}
	}
	cout<<"Total numeros dentro del rango: "<<enRango<<endl;
	cout<<"Total numeros fuera del rango: "<<fueraRango<<endl;
}
