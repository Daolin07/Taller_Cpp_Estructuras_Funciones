#include <iostream>
using namespace std;

int main(){
	int numeros[15], sumaPositivos=0, sumaNegativos=0;
	double promedioP, promedioN;
	for(int i=0;i<15;i++){
		cout<<"Ingrese el numero "<<i+1<<": ";
		cin>>numeros[i];
		if(numeros[i]>0){
			sumaPositivos+=numeros[i];
		}else{
			sumaNegativos+=numeros[i];
		}
	}
	promedioP=sumaPositivos/15;
	promedioN=sumaNegativos/15;
	cout<<"Promedio de los numeros positivos: "<<promedioP<<endl;
	cout<<"Promedio de los numeros negativos: "<<promedioN<<endl;
}
