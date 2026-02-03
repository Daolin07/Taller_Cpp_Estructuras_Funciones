#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int>numeros;
	int enRango=0, fueraRango=0;
	for(int i=0;i<10;i++){
		int num;
		cout<<"Ingrese un numero "<<i+1<<": ";
		cin>>num;
		if(num>=20 and num<=80){
			enRango+=1;
		}else{
			fueraRango+=1;
		}
		numeros.push_back(num);
	}
	cout<<"En el rango de 20 a 80: "<<enRango<<" con el "<<enRango*10<<"%"<<endl;
	cout<<"Fuera del rango: "<<fueraRango<<" con el "<<fueraRango*10<<"%"<<endl;
}

