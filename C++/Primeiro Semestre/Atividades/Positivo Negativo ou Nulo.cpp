// O programa determina se o número dado ele é, POSITIVO, NEGATIVO ou NULO.
#include<iostream>

using namespace std;

int main(){
	int n1;
	
	cout<<"Entre com um numero para dizer se esta na classe de positivo, negativo ou nulo. \n";
	cin>>n1;
	
	if(n1>0){
		cout<<"Numero positivo: "<< n1 << "\n";
		cin>>n1;
		}if(n1<0){
			cout<<"Numero negativo: "<< n1 << "\n";
			cin>>n1;
		}if(n1==0){
			cout<<"Numero Nulo: "<< n1 << "\n";
		}
		system("Pause");
		return 0;
}