#include <iostream>
using namespace std;

int main(){
	int numeros[12], sumaPares=0, sumaImpares=0;
	for(int i=0;i<12;i++){
		cout<<"Ingrese el numero "<<i+1<<": ";
		cin>>numeros[i];
		if(numeros[i]%2==0){
			sumaPares+=numeros[i];
		} else{
			sumaImpares+=numeros[i];
		}
	}
	cout<<"Total suma pares: "<<sumaPares<<endl;
	cout<<"Total suma impares: "<<sumaImpares<<endl;
	if(sumaPares>sumaImpares){
		cout<<"La suma de los pares es mayor"<<endl;
	} else{
		cout<<"La suma de los numeros impares es mayor"<<endl;
	}
}
