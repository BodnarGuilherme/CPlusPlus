//Escreva um programa em C++ que leia um número e o imprima caso ele seja maior que 20.
#include<iostream>
#include<clocale>
using namespace std;

int main(){
    
    while (true)
    {
        
        int n1;

        cout<<"Insira um numero!! \n";
        cin>>n1;

        if(n1>20){
        cout<<n1 <<" Parabens numero maior que vinte";
        }else{
        cout<<"Valor menor que vinte \n";
        }
    
        if (n1>20){
            break;} 
}
    system("Pause");
    return 0;
}