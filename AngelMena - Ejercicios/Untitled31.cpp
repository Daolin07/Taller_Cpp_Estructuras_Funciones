#include <iostream>
using namespace std;

int main(){
	int matriz[2][4], posFila, posCol, mayor;
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			cout<<"Ingrese un numero en ["<<i+1<<"]"<<"["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	mayor=matriz[0][0];
	for(int i=0;i<2;i++){
		for(int j=0;j<4;j++){
			if(matriz[i][j]>mayor){
				mayor=matriz[i][j];
				posFila=i;
				posCol=j;
			}
		}
	}
	cout<<"El numero mayor es: "<<mayor;
	cout<<"La posicion de la fila es: "<<posFila;
	cout<<"La posicion de la columna es: "<<posCol;
	
}
