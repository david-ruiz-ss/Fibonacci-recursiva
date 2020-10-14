#include<iostream>
using namespace std;
int fibo(int pos){
	if(pos>1){
		return fibo(pos-1)+fibo(pos-2);
	}
	else{
		if(pos==0){
			return 0;
		}
		if(pos==1){
			return 1;
		}
	}
}
int main(){
	int p;
	cout<<"ingrese posicion:"<<endl;
	cin>>p;
	cout<<"el numero es:"<<fibo(p);
	
	return 0;
}
