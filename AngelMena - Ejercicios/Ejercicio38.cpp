#include <iostream>
using namespace std;
void carga(float vts[],int n){
    for(int i=0;i<n;i++){
        cout<<"Venta "<<i+1<<": ";
        cin>>vts[i];
    }
}
void calc(float vts[],int n,float&tot,float&prm,int&cont){
    tot=0;cont=0;
    for(int i=0;i<n;i++)tot+=vts[i];
    prm=tot/n;
    for(int i=0;i<n;i++)if(vts[i]>prm)cont++;
}
int main(){
    float v[5],t,p;
    int c;
    carga(v,5);
    calc(v,5,t,p,c);
    cout<<"Total:"<<t<<"\nProm:"<<p<<"\nAltas:"<<c<<endl;
    return 0;
}
