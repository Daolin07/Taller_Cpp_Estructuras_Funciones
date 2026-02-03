#include <iostream>
using namespace std;

int main(){
	int numero, multiplicacion, suma;
	cout<<"Ingrese un numero entero positivo: ";
	cin>>numero;
	if(numero>0){
		for(int i=1;i<11;i++){
			multiplicacion=numero*i;
			cout<<numero<<" * "<<i<<" = "<<multiplicacion<<endl;
			suma+=multiplicacion;
		}
	}
	cout<<endl;
	cout<<"La suma total es de: "<<suma;
}
