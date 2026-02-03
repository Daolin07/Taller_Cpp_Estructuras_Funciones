#include <iostream>
#include <vector>
using namespace std;
struct Cliente{
    string nombre;
    int edad;
};
int main(){
    vector<Cliente>clientes;
    int n;
    cout<<"Cantidad de clientes: ";
    cin>>n;
    for(int i=0;i<n;i++){
        Cliente c;
        cout<<"Nombre: ";
        cin>>c.nombre;
        cout<<"Edad: ";
        cin>>c.edad;
        clientes.push_back(c);
    }
    int tam=clientes.size();
    for(int i=0;i<tam;i++){
        cout<<"Cliente: "<<clientes[i].nombre<<" | Edad: "<<clientes[i].edad<<endl;
    }

}
