//Ler uma temperatura em graus Celsius e apresenta-la convertida em graus Kelvin. 
//A fórmula para conversão é K = C + 273.15, onde K é a temperatura em Kelvin e C é a
//temperatura em graus Celsius.
#include<iostream>

using namespace std;

int main (){

    float c; // Celsius
    float k; // Kelvin

    cout<<"Insira o valor em graus celsius: \n";
    cin>> c;

    k = c + 273.15;

    cout<< c << " Graus celsius igual a " << k << " Graus kelvin. \n";

    system("Pause");
    return 0;
}