#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<float>valores;
	float maximo, minimo;
	for(int i=0;i<8;i++){
		int num;
		cout<<"Ingrese un numero "<<i+1<<": ";
		cin>>num;
		valores.push_back(num);
	}
	maximo=valores[0];
	for(int i=1;i<8;i++){
		if(valores[i]>maximo){
			maximo=valores[i];
		}
	}
	minimo=valores[0];
	for(int i=1;i<8;i++){
		if(valores[i]<minimo){
			minimo=valores[i];
		}
	}
	cout<<"El valor maximo es: "<<maximo<<endl;
	cout<<"El valor minimo es: "<<minimo<<endl;
	cout<<"El rango es: ["<<maximo<<" - "<<minimo<<"]"<<endl;
}
