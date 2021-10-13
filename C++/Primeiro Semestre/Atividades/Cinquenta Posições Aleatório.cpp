/*Escreva um programa em C++ que crie um vetor de 50 posições com números aleatórios do tipo inteiro e depois
escreva um código que percorra esse vetor e para cada posição do vetor imprima seus números e também imprima o
número da posição atual do vetor multiplicado pela posição anterior, se não houver posição anterior então deve
multiplicar por 1.*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(NULL));
    int n1[50];

    for(int i= 0; i < 50; i++){
        if(i-1 == 0 || i == NULL){
            cout<< i << ": " << (i * (1)) << ": " << i[n1] << "\n";
        cout<< i << ": " << (i * (i -1)) << ": " << i[n1] << "\n";
    }
}
}