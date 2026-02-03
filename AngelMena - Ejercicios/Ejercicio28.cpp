#include <iostream>
using namespace std;

void mostrarMenu(){
	cout<<"---------------- MENU -----------------"<<endl;
	cout<<"1. Ingresar 10 numeros en un arreglo"<<endl;
	cout<<"2. Mostrar el promedio"<<endl;
	cout<<"3. Mostrar el mayor y el menor"<<endl;
	cout<<"4. Contar numeros positivos y negativos"<<endl;
	cout<<"5. Salir"<<endl;
	cout<<"Seleccione una opcion: ";
}

int main(){
	int op, mayor, menor, positivos=0, negativos=0;
	int numeros[10];
	float suma=0;
	do{
		mostrarMenu();
		cin>>op;
		switch (op) {
			case 1:
				for(int i=0;i<10;i++){
					cout<<"Numero "<<i+1<<": ";
					cin>>numeros[i];
					suma+=numeros[i];
				}
				break;
			case 2:
				cout<<"El promedio de los numeros ingresados es: "<<suma/10<<endl;
				break;
			case 3:
				mayor=numeros[0];
				for(int i=1;i<10;i++){
					if(numeros[i]>mayor){
						mayor=numeros[i];
					}
				}
				menor=numeros[0];
				for(int i=1;i<10;i++){
					if(numeros[i]<menor){
						menor=numeros[i];
					}
				}
				cout<<"El numero mayor es: "<<mayor<<endl;
				cout<<"El numero menor es: "<<menor<<endl; 
				break;
			case 4:
				for(int i=0;i<10;i++){
					if(numeros[i]>0){
						positivos+=1;
					} else{
						negativos+=1;
					}
				}
				cout<<"Numeros positivos: "<<positivos<<endl;
				cout<<"Numeros negativos: "<<negativos<<endl;
				
				break;
			case 5:
				cout<<"Ha salido con exito!";
				break;
			default:
				cout<<"Opcion incorrecta";
				break;
		}
	}while(op!=5);
}
