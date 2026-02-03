#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

void registrarVentas(vector<double>&v,int n){
    for(int i=0;i<n;i++){
        double monto;
        cout<<"Monto venta "<<i+1<<": ";
        cin>>monto;
        v.push_back(monto);
    }
}

void salvarEnDisco(vector<double>&v){
    ofstream f("ventas.txt");
    for(double x:v)f<<x<<endl;
    f.close();
}

void cargarDeDisco(vector<double>&v){
    double x;
    ifstream f("ventas.txt");
    while(f>>x)v.push_back(x);
    f.close();
}

double obtenerTotal(vector<double>&v){
    double s=0;
    for(double x:v)s+=x;
    return s;
}

void compararConPromedio(vector<double>&v,double p){
    int mayor=0,menor=0;
    for(double x:v){
        if(x>p)mayor++;
        else if(x<p)menor++;
    }
    cout<<"Ventas mayores al promedio: "<<mayor<<endl;
    cout<<"Ventas menores al promedio: "<<menor<<endl;
}

int main(){
    vector<double>v_temp,v_final;
    int n;
    cout<<"Numero de ventas: ";
    cin>>n;
    registrarVentas(v_temp,n);
    salvarEnDisco(v_temp);
    
    // El analisis se hace con el vector cargado del archivo
    cargarDeDisco(v_final);
    double total=obtenerTotal(v_final);
    double promedio=total/v_final.size();
    
    cout<<"Total de ventas: "<<total<<endl;
    cout<<"Promedio de ventas: "<<promedio<<endl;
    compararConPromedio(v_final,promedio);
    
    return 0;
}
