#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main(){
	vector<int>numeros;
	int sumaP=0, sumaN=0;
	for(int i=0;i<12;i++){
		int num;
		cout<<"Ingrese un numero "<<i+1<<": ";
		cin>>num;
		if(num>0){
			sumaP+=num;
		} else{
			sumaN+=num;
		}
		numeros.push_back(num);
	}
	cout<<"Total suma positivos: "<<sumaP<<endl;
	cout<<"Total suma negativos: "<<sumaN<<endl;
	cout<<"Valor absoluto total acumulado: "<<sumaP+abs(sumaN)<<endl;
}
