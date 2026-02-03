#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int>numeros;
	int sumaCuadrados=0, cuadrado;
	for(int i=0;i<10;i++){
		int num;
		cout<<"Ingrese un numero "<<i+1<<": ";
		cin>>num;
		cuadrado=num*num;
		sumaCuadrados+=cuadrado;
		numeros.push_back(num);
		cout<<"Su cuadrado es: "<<cuadrado<<endl;
	}
	double promedio=sumaCuadrados/10;
	cout<<"La suma de los cuadrados es: "<<sumaCuadrados<<endl;
	cout<<"El promedio de los cuadrados es: "<<promedio<<endl;
}
