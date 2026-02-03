#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<int>numeros;
	int multiplosTres=0, multiplosCinco=0, multiplosAmbos=0;
	for(int i=0;i<15;i++){
		int numero;
		cout<<"Ingrese un numero "<<i+1<<": ";
		cin>>numero;
		if(numero%3==0 and numero%5==0){
			multiplosAmbos+=1;
		} else if(numero%5==0){
			multiplosCinco+=1;
		} else if(numero%3==0){
			multiplosTres+=1;
		}
	}
	cout<<"Multiplos de 3: "<<multiplosTres<<endl;
	cout<<"Multiplos de 5: "<<multiplosCinco<<endl;
	cout<<"Multiplos de 3 y 5: "<<multiplosAmbos<<endl;
	
}
