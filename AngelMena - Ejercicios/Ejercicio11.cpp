#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int numeros[10];
	int suma=0, positivos=0, negativos=0;
	for(int i=0;i<10;i++){
		cout<<"Ingrese el numero "<<i+1<<": ";
		cin>>numeros[i];
		suma+=numeros[i];
		if(numeros[i]>0){
			positivos+=1;
		} else{
			negativos+=1;
		}
	}
	double promedio=suma/10;
	cout<<"La suma total es de: "<<suma<<endl;
	cout<<"El promedio es de: "<<fixed<<setprecision(2)<<promedio<<endl;
	cout<<"Porcentaje de numeros positivos: "<<positivos*10<<"%"<<endl;
	cout<<"Porcentaje de numeros negativos: "<<negativos*10<<"%"<<endl;
}
