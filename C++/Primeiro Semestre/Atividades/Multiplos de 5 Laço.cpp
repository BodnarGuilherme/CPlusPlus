//O programa lê e imprime todos os números multiplos de 5 em um intervalo fechado de 1 a 500.
#include<iostream>

int main(){
    for(int n1= 0; n1<= 500; n1+=5){
        std::cout<< n1 << "\n";
    }
    system("Pause");
    return 0;
}