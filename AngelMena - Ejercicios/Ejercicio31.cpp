#include <iostream>
using namespace std;

int main() {
    int m[4][4],p=0,n=0,z=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout<<"Valor ["<<i<<"]["<<j<<"]: ";
            cin>>m[i][j];
            if(m[i][j]>0)p++;
            else if(m[i][j]<0)n++;
            else z++;
        }
    }
    cout<<"Positivos:"<<p<<endl;
    cout<<"Negativos:"<<n<<endl;
    cout<<"Ceros:"<<z<<endl;
    return 0;
}
