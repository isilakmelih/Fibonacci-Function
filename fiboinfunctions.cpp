#include<iostream>
using namespace std;
int fibo(int parameter,int sayi1,int sayi2);
int main(){
	cout<<fibo(20,0,1);
}
int fibo(int parameter,int sayi1,int sayi2){
    cout<<sayi1<<" ";
	if(parameter==0){
		return sayi1+sayi2;
	}
	else{
		fibo(parameter-1,sayi2, sayi1+sayi2);
		
		
	}
}
