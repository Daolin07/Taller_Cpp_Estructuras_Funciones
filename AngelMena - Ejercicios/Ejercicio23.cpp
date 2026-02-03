#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<float>precios;
	float suma=0;
	for(int i=0;i<10;i++){
		float precio;
		cout<<"Ingrese el precio "<<i+1<<": ";
		cin>>precio;
		suma+=precio;
		precios.push_back(precio);
	}
	cout<<"El subtotal a pagar: "<<suma<<endl;
	cout<<"El IVA: "<<suma*0.12<<endl;
	cout<<"Total a pagar: "<<suma*1.12<<endl;
}
