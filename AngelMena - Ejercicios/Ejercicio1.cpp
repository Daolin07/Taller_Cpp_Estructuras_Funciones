#include <iostream>
using namespace std;

int main(){
	int numero;
	cout<<"Ingrese un numero entero: ";
	cin>>numero;
	if (numero>=10 and numero<=50){
		cout<<"El numero es valido"<<endl;
	}else{
		cout<<"Valor invalido"<<endl;
	}
	return 0;
}
