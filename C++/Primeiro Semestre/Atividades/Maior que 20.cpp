//O programa lê um número e o imprime caso ele seja maior que 20!
#include<iostream>

using namespace std;

int main(){
	int n1 = 0;
	
	cout<<"Entre com um numero. \n";
	cin>>n1;
	
	if(n1>10){
		cout<<"Numero inserido maior que 10. \n"<< n1;
	}else{
	cout<<"Numero inserido menor que 10. \n";
	}
	system("Pause");
	return 0;
}