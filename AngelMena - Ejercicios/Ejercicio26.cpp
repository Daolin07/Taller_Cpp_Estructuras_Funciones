#include <iostream>
using namespace std;

void mostrarMenu(){
	cout<<"---------------- MENU -----------------"<<endl;
	cout<<"1. Ingresar dos numeros"<<endl;
	cout<<"2. Mostrar la suma y resta"<<endl;
	cout<<"3. Mostrar el mayor de los dos numeros"<<endl;
	cout<<"4. Salir"<<endl;
	cout<<"Seleccione una opcion: ";
}

int main(){
	int op;
	float numeros[2];
	do{
		mostrarMenu();
		cin>>op;
		switch (op) {
			case 1:
				for(int i=0;i<2;i++){
					cout<<"Numero "<<i+1<<": ";
					cin>>numeros[i];
				}
				break;
			case 2:
				cout<<"La suma de los numeros es: "<<numeros[0]+numeros[1]<<endl;
				cout<<"La resta de los numeros es: "<<numeros[0]-numeros[1]<<endl;
				break;
			case 3:
				if(numeros[0]>numeros[1]){
					cout<<"El numero mayor es: "<<numeros[0]<<endl;
				}else{
					cout<<"El numero mayor es: "<<numeros[1]<<endl;
				}
				break;
			case 4:
				cout<<"Ha salido con exito! "<<endl;
				break;
			default:
				cout<<"Opcion incorrecta"<<endl;
				break;
		}
	}while(op!=4);
}
