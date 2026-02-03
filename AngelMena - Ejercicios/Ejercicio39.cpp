#include <iostream>
#include <vector>
using namespace std;
int suma(vector<int>v){
    int s=0;
    for(int x:v)s+=x;
    return s;
}
void tipo(vector<int>v,int&cp,int&ci){
    cp=0;ci=0;
    for(int x:v)(x%2==0)?cp++:ci++;
}
int main(){
    vector<int>nums={10,15,20,25,30};
    int s=suma(nums);
    int p,i;
    tipo(nums,p,i);
    cout<<"Suma:"<<s<<"\nProm:"<<s/(float)nums.size()<<"\nPares:"<<p<<"\nImpares:"<<i<<endl;
    return 0;
}
