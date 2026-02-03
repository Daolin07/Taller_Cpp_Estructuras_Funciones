#include <iostream>
#include <vector>
using namespace std;
void leer(vector<int>&vec,int n){
    for(int i=0;i<n;i++){
        int val;
        cout<<"Num "<<i+1<<": ";
        cin>>val;
        vec.push_back(val);
    }
}
void stats(vector<int>&vec,int&sum,float&prom,int&maxi,int&mini){
    sum=0;maxi=vec[0];mini=vec[0];
    for(int x:vec){
        sum+=x;
        if(x>maxi)maxi=x;
        if(x<mini)mini=x;
    }
    prom=sum/(float)vec.size();
}
int main(){
    vector<int>datos;
    int n,s,ma,mi;
    float p;
    cout<<"Cantidad: ";
    cin>>n;
    leer(datos,n);
    stats(datos,s,p,ma,mi);
    cout<<"Suma:"<<s<<"\nProm:"<<p<<"\nMax:"<<ma<<"\nMin:"<<mi<<endl;
    return 0;
}
