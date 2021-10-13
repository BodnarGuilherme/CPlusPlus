//Escreva um programa em C++ para determinar se um dado número N (recebido através do teclado)
//é POSITIVO, NEGATIVO ou NULO. 
#include<iostream>

using namespace std;

int main(){
    int n1;

    cout<<"Insira um numero para saber se o mesmo e nulo, possitivo ou negativo: \n";
    cin>>n1;

    if(n1>0){
        cout<<n1<<" Numero positivo. \n";
    }
    if(n1<0){
        cout<<n1<<" Numero negativo. \n";
    }
    if(n1==0){
        cout<<n1<<" Numero nulo. \n";
    }
    system("Pause");
    return 0;
}