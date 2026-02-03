#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int>edades;
	int suma=0, mayorP=0, menorigualP;
	float promedio;
	for(int i=0;i<10;i++){
		int num;
		cout<<"Ingrese la edad "<<i+1<<": ";
		cin>>num;
		suma+=num;
		edades.push_back(num);
	}
	promedio=suma/10;
	for(int i=0;i<10;i++){
		if(edades[i]>promedio){
			mayorP+=1;
		}else{
			menorigualP+=1;
		}
	}
	cout<<"Promedio de edades: "<<promedio<<endl;
	cout<<"Edades mayores al promedio: "<<mayorP<<endl;
	cout<<"Edades menores o iguales al promedio: "<<menorigualP<<endl;
}
