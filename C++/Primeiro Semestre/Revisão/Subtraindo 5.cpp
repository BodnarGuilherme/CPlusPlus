//Construir um programa em C++ que leia dois números e efetue a adição.
//Caso o valor somado seja maior que 20, este deverá ser apresentado somando-se 
//a ele mais 8; caso o valor somado seja menor ou igual a 20, este deverá ser apresentado subtraindo-se 5. 
#include<iostream>

using namespace std;

int main(){
    int n1;
    int n2;
    int soma;

    cout<<"Entre com o primeiro numero: \n";
    cin>>n1;
    cout<<"Entre com o segundo numero: \n";
    cin>>n2;

    soma = n1 + n2;

    if(soma>20){
        cout<<(soma + 8);
    }else{
        cout<<(soma - 5);
    }
    system("Pause");
    return 0;
}