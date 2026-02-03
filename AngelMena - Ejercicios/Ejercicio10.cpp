#include <iostream>
using namespace std;

int main(){
	int sumaPar=0, sumaImpar=0;
	for(int i=1;i<101;i++){
		cout<<i<<" "<<endl;
		if(i%2==0){
			sumaPar+=i;
		} else{
			sumaImpar+=i;
		}
	}
	if(sumaPar>sumaImpar){
		cout<<"La suma de los numeros pares es mayor con: "<<sumaPar<<endl;
	} else{
		cout<<"La suma de los numeros impares es mayor con: "<<sumaImpar<<endl;
	}
}
