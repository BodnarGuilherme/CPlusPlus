//O programa lê e imprime todos os números pares em um intervalo fechado de 1 a 100.
#include<iostream>

int main(){
    for(int n1= 2; n1<=100; n1+=2){
        std::cout<< n1 << "\n";
    }
    system("Pause");
    return 0;
}