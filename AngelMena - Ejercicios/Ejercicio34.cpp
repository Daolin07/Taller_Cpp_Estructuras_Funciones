#include <iostream>
#include <vector>
#include <fstream>
#include <string>
using namespace std;
struct Cliente{
    string nombre;
    int edad;
};
int main(){
    vector<Cliente>lista;
    int n;
    cout<<"Cantidad: ";
    cin>>n;
    for(int i=0;i<n;i++){
        Cliente c;
        cout<<"Nombre: ";cin>>c.nombre;
        cout<<"Edad: ";cin>>c.edad;
        lista.push_back(c);
    }
    ofstream f("clientes.txt");
    for(auto c:lista)f<<c.nombre<<" "<<c.edad<<endl;
    f.close();
    string busca;
    cout<<"Nombre a buscar: ";cin>>busca;
    bool find=false;
    for(auto c:lista){
        if(c.nombre==busca){
            cout<<"Edad: "<<c.edad<<endl;
            find=true;
        }
    }
    if(!find)cout<<"No encontrado"<<endl;
    return 0;
}
