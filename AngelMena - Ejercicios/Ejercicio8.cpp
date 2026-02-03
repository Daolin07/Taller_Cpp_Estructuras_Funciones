#include <iostream>
using namespace std;

int main(){
	int numero, positivos=0, negativos=0, cero=0;
	for(int i=0;i<10;i++){
		cout<<"Ingresa un numero: ";
		cin>>numero;
		if(numero==0){
			cero+=1;
		}else if(numero>0){
			positivos+=1;
		} else{
			negativos+=1;
		}
	}
	cout<<"Numeros positivos: "<<positivos<<endl;
	cout<<"Numeros negativos: "<<negativos<<endl;
}
