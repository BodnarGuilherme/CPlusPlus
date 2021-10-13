//O programa lê dois valores numéricos e efetua uma adição, caso o resultado seja maior que 10
//o programa apresenta o resultado.
#include<iostream>

using namespace std;

int main(){
	int n1 = 0;
	int n2 = 0;
	int soma = 0;
	
	cout<<"Entre com o primeiro valor numerico: \n";
	cin>>n1;
	cout<<"Entre com o segundo valor numerico: \n";
	cin>>n2;
	
	soma = n1 + n2;
	
	if(soma>10){
		cout<<"O resultado da soma: " << soma << endl;
	}else{
		cout<<"O valor da soma resulta em um valor menor que 10! "<< endl;
	}
	
	system("Pause");
	return 0;
}