#include <iostream>
#include <fstream>
#include <vector>
using namespace std;
struct Estudiante{
    string nom;
    float n1,n2,n3,prom;
};
int main(){
    int n;
    cout<<"Cantidad de estudiantes: ";cin>>n;
    ofstream f_out("escuela.txt");
    for(int i=0;i<n;i++){
        string nom;float a,b,c;
        cout<<"Datos estudiante "<<i+1<<" (Nombre Nota1 Nota2 Nota3): ";
        cin>>nom>>a>>b>>c;
        f_out<<nom<<" "<<a<<" "<<b<<" "<<c<<endl;
    }
    f_out.close();
    ifstream f_in("escuela.txt");
    vector<Estudiante>alumnos;
    Estudiante e;
    while(f_in>>e.nom>>e.n1>>e.n2>>e.n3){
        e.prom=(e.n1+e.n2+e.n3)/3.0f;
        alumnos.push_back(e);
    }
    f_in.close();
    if(alumnos.empty()){
        cout<<"Error: No se pudieron leer datos."<<endl;
        return 1;
    }
    string busca;
    cout<<"Nombre a buscar: ";cin>>busca;
    bool find=false;
    for(const auto& a:alumnos){
        if(a.nom==busca){
            cout<<"Notas: "<<a.n1<<", "<<a.n2<<", "<<a.n3<<endl;
            cout<<"Promedio: "<<a.prom<<endl;
            cout<<"Estado: "<<(a.prom>=7?"APROBADO":"REPROBADO")<<endl;
            find=true;
            break;
        }
    }
    if(!find)cout<<"Estudiante no encontrado."<<endl;
    return 0;
}
