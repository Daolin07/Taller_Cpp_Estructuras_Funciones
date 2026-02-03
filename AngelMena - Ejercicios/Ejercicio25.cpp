#include <iostream>
#include <vector>
using namespace std;

int main(){
	vector<float>notas;
	float promedio=0, notaAlta=0, notaBaja=0, suma=0;
	int aprobados=0, reprobados=0;
	for(int i=0;i<10;i++){
		float nota;
		cout<<"Ingrese la nota "<<i+1<<": ";
		cin>>nota;
		suma+=nota;
		if(nota>=7 and nota<=10){
			aprobados+=1;
		} else if(nota>=0 and nota<7){
			reprobados+=1;
		} else{
			cout<<"nota incorrecta"<<endl;
		}
		notas.push_back(nota);
	}
	notaAlta=notas[0];
	for(int i=1;i<10;i++){
		if(notas[i]>notaAlta){
			notaAlta=notas[i];
		}
	}
	notaBaja=notas[0];
	for(int i=1;i<10;i++){
		if(notas[i]<notaBaja){
			notaBaja=notas[i];
		}
	}
	promedio=suma/10;
	cout<<"------ Resumen Final ------"<<endl;
	cout<<"Promedio general: "<<promedio<<endl;
	cout<<"La nota mas alta es: "<<notaAlta<<endl;
	cout<<"La nota mas baja es: "<<notaBaja<<endl;
	cout<<"Porcentaje de aprobados: "<<aprobados*10<<"%"<<endl;
	cout<<"Porcentaje de reprobados: "<<reprobados*10<<"%"<<endl;
}
