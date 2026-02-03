#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<float>sueldos;
	float suma=0;
	int mayor=0, menor=0;
	for(int i=0;i<10;i++){
		float sueldo;
		cout<<"Ingrese el sueldo "<<i+1<<": ";
		cin>>sueldo;
		suma+=sueldo;
		sueldos.push_back(sueldo);
	}
	float promedio=suma/10;
	cout<<"El sueldo promedio es de: "<<promedio<<endl;
	for(int i=0;i<10;i++){
		if(sueldos[i]>promedio){
			mayor+=1;
		} else if(sueldos[i]<promedio){
			menor+=1;
		}
	}
	cout<<"Sueldos por encima del promedio: "<<mayor<<endl;
	cout<<"Sueldos por debajo del promedio: "<<menor<<endl;
}
