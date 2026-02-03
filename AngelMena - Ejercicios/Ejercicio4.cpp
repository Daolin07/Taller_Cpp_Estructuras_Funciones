#include <iostream>
using namespace std;

int main(){
	int suma=0;
	for(int i=2;i<21;i+=2){
		cout<<i<<endl;
		suma+=i;
	}
	cout<<"La suma total es: "<<suma<<endl;
	return 0;
}

