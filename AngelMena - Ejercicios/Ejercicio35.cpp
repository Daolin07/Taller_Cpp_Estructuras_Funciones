#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

struct Cliente{
    string nom;
    int edad;
    double con;
};

int main(){
    int n;
    cout<<"Cantidad de clientes: ";
    cin>>n;
    vector<Cliente>v_input;
    for(int i=0;i<n;i++){
        Cliente c;
        cout<<"Nombre: ";cin>>c.nom;
        cout<<"Edad: ";cin>>c.edad;
        cout<<"Consumo: ";cin>>c.con;
        v_input.push_back(c);
    }
    // Guardar en archivo
    ofstream out("datos.txt");
    for(auto c:v_input)out<<c.nom<<" "<<c.edad<<" "<<c.con<<endl;
    out.close();

    // Leer del archivo para procesar
    vector<Cliente>v_file;
    ifstream in("datos.txt");
    Cliente temp;
    while(in>>temp.nom>>temp.edad>>temp.con){
        v_file.push_back(temp);
    }
    in.close();

    double tot=0,maxC=-1;
    string nomM="";
    for(auto c:v_file){
        tot+=c.con;
        if(c.con>maxC){
            maxC=c.con;
            nomM=c.nom;
        }
    }
    
    if(!v_file.empty()){
        cout<<"Total consumo: "<<tot<<endl;
        cout<<"Promedio: "<<tot/v_file.size()<<endl;
        cout<<"Mayor consumo: "<<nomM<<" con "<<maxC<<endl;
    }else{
        cout<<"No hay datos en el archivo."<<endl;
    }
    
    return 0;
}
