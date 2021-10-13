//Construa um programa em C++ que determine (imprima) se um dado número N inteiro 
//(recebido através do teclado) é PAR ou ÍMPAR. 
#include<iostream>

using namespace std;

int main(){
    int n1;

    cout<<"Insira um valor numerico para saber se determinado valor e impar ou par! \n";
    cin>>n1;

    if(n1%2==0){
        cout<<"Valor par \n";
    }else{
        cout<<"Valor impar \n";
    }
    system("Pause");
    return 0;
}