#include <iostream>
using namespace std;
struct Cliente{
    string nombre;
    int edad;
};
int main(){
    Cliente lista[3];
    for(int i=0;i<3;i++){
        cout<<"Nombre "<<i+1<<": ";
        cin>>lista[i].nombre;
        cout<<"Edad "<<i+1<<": ";
        cin>>lista[i].edad;
    }
    cout<<"Mayores de edad:"<<endl;
    for(int i=0;i<3;i++){
        if(lista[i].edad>=18){
            cout<<"Nombre: "<<lista[i].nombre<<" ("<<lista[i].edad<<")"<<endl;
        }
    }
}
