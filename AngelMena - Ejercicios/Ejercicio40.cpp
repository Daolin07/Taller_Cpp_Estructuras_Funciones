#include <iostream>
using namespace std;
void tope(int a[],int n,int&mx,int&mn){
    mx=a[0];mn=a[0];
    for(int i=1;i<n;i++){
        if(a[i]>mx)mx=a[i];
        if(a[i]<mn)mn=a[i];
    }
}
void clase(int a[],int n,int&ps,int&ng,int&zr){
    ps=0;ng=0;zr=0;
    for(int i=0;i<n;i++){
        if(a[i]>0)ps++;
        else if(a[i]<0)ng++;
        else zr++;
    }
}
int main(){
    int d[]={4,-2,0,8,-1,0},ma,mi,p,n,z;
    tope(d,6,ma,mi);
    clase(d,6,p,n,z);
    cout<<"Max:"<<ma<<"\nMin:"<<mi<<"\nPos:"<<p<<"\nNeg:"<<n<<"\nZero:"<<z<<endl;
    return 0;
}
