//Crie uma função que receba um valor e informe se ele é positivo ou não.
#include <iostream>

using namespace std;

int Positivo(int n1){
    if(n1 >= 0){
        cout<<"Positivo\n";
    }
}

int Negativo(int n1){
    if(n1 < 0){
        cout<<"Negativo\n";
    }
}

int main(){
    int n1;

    cout<<"insira um numero, para saber se o mesmo e positivo ou negativo\n";
    cin>> n1;

    Positivo(n1);
    Negativo(n1);
    system("Pause");
    return 0;
}