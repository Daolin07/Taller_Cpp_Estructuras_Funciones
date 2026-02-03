#include <iostream>
using namespace std;

int main(){
	int numeros[3][3]={
		{1,2,3},
		{4,5,6},
		{7,8,9}
		};
	int sumaTotal=0;
	for(int i=0;i<3;i++){
		int sumaFila=0;
		for(int j=0;j<3;j++){
			sumaFila+=numeros[i][j];
		}
		sumaTotal+=sumaFila;
		cout<<"La suma de la fila "<<i+1<<" es: "<<sumaFila<<endl;
	}
	cout<<"La suma total es: "<<sumaTotal<<endl;
}
