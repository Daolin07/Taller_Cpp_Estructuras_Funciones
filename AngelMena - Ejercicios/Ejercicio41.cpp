#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void ingresarNotas(vector<double>&notas,int cantidad){
    for(int i=0;i<cantidad;i++){
        double valor;
        cout<<"Nota "<<i+1<<": ";
        cin>>valor;
        notas.push_back(valor);
    }
}

void guardarArchivo(vector<double>&notas){
    ofstream archivo("notas.txt");
    for(double n:notas)archivo<<n<<endl;
    archivo.close();
}

void cargarDesdeArchivo(vector<double>&notas){
    notas.clear();
    double valor;
    ifstream archivo("notas.txt");
    while(archivo>>valor)notas.push_back(valor);
    archivo.close();
}

void mostrarAnalisis(vector<double>&notas){
    double suma=0,promedio;
    int arriba=0,abajo=0;
    for(double n:notas)suma+=n;
    promedio=suma/notas.size();
    for(double n:notas){
        if(n>promedio)arriba++;
        else if(n<promedio)abajo++;
    }
    cout<<"--- Resultados ---"<<endl;
    cout<<"Suma total: "<<suma<<endl;
    cout<<"Promedio: "<<promedio<<endl;
    cout<<"Sobre el promedio: "<<arriba<<endl;
    cout<<"Bajo el promedio: "<<abajo<<endl;
}

int main(){
    vector<double>misNotas;
    int n;
    cout<<"Cuantas notas ingresara? ";
    cin>>n;
    ingresarNotas(misNotas,n);
    guardarArchivo(misNotas);
    cargarDesdeArchivo(misNotas);
    mostrarAnalisis(misNotas);
    return 0;
}
