#include <iostream>
using namespace std;

int main(){
	int multiplosTres=0, restante=0;
	for(int i=1;i<51;i++){
		if(i%3==0){
			multiplosTres+=1;
		} else{
			restante+=1;
		}
	}
	cout<<"Total multiplos de 3: "<<multiplosTres<<endl;
	cout<<"Restante: "<<restante;
}
