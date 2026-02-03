#include <iostream>
using namespace std;

int main(){
	float calificaciones[10], suma=0, aprobados=0, reprobados=0;
	for(int i=0;i<10;i++){
		cout<<"Ingrese la calificacion "<<i+1<<": ";
		cin>>calificaciones[i];
		suma+=calificaciones[i];
		if(calificaciones[i]>=7 and calificaciones[i]<=10){
			aprobados+=1;
		}else{
			reprobados+=1;
		}
	}
	cout<<"El promedio general es de: "<<suma/10<<endl;
	cout<<"Total estudiantes aprobados: "<<aprobados<<endl;
	cout<<"Total estudiantes reprobados: "<<reprobados<<endl;
}
