#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int>numeros;
	int suma=0, contador=0;
	float promedio;
	for(int i=0;i<10;i++){
		int num;
		cout<<"Ingrese un numero "<<i+1<<": ";
		cin>>num;
		suma+=num;
		numeros.push_back(num);
	}
	promedio=suma/10;
	cout<<"La suma total es: "<<suma<<endl;
	cout<<"El promedio es: "<<promedio<<endl;
	for(int i=0;i<10;i++){
		if(numeros[i]>promedio){
			contador+=1;
		}
	}
	cout<<"Los numeros por encima del promedio son: "<<contador;
}
