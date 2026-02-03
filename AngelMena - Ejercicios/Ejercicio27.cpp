#include <iostream>
using namespace std;

void mostrarMenu(){
	cout<<"---------------- MENU -----------------"<<endl;
	cout<<"1. Ingresar un numero"<<endl;
	cout<<"2. Verificar si el numero esta en el rango de 1 a 100"<<endl;
	cout<<"3. Verificar si el numero es par o impar"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Seleccione una opcion: ";
}

int main(){
	int op, num;
	do{
		mostrarMenu();
		cin>>op;
		switch (op) {
			case 1:
				cout<<"Ingrese un numero: ";
				cin>>num;
				break;
			case 2:
				if(num>=1 and num<=100){
					cout<<"El numero se encuentra en el rango"<<endl;
				}else{
					cout<<"El numero se encuentra fuera del rango"<<endl;
				}
				break;
			case 3:
				if(num%2==0){
					cout<<"El numero es par"<<endl;
				}else{
					cout<<"El numero es impar"<<endl;
				}
				break;
			case 4:
				cout<<"Ha salido con exito!"<<endl;
				break;
			default:
				cout<<"Opcion Incorrecta"<<endl;
				break;
		}
	}while(op!=4);
}
