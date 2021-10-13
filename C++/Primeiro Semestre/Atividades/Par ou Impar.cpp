// O programa determina e imprime se o dado valor é um número PAR ou ÍMPAR.
#include<iostream>

using namespace std;

int main(){
	int n1 = 0;
	int res = 0;
	
	cout<<"Entre com o primeiro numero: \n";
	cin>>n1;
	
	if(n1%2==0){
		cout<<"Numero Par. \n";
		cin>>n1;
	}else{
		cout<<"Numero Impar. \n";
		cin>>n1;
	}
	system("Pause");
	return 0;
}