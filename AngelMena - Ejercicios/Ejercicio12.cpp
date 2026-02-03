#include <iostream>
using namespace std;

int main(){
	int numeros[8], mayor, menor;
	for(int i=0;i<8;i++){
		cout<<"Ingrese el numero "<<i+1<<": ";
		cin>>numeros[i];
	}	
	mayor=numeros[0];
	for(int i=1;i<8;i++){
		if(numeros[i]>mayor){
			mayor=numeros[i];
		}
	}
	menor=numeros[0];
	for(int i=1;i<8;i++){
		if(numeros[i]<menor){
			menor=numeros[i];
		}
	}
	cout<<"El numero mayor es: "<<mayor<<endl;
	cout<<"El numero menor es: "<<menor<<endl;
	cout<<"La diferencia entre el mayor y menor es de: "<<mayor-menor<<endl;
}
