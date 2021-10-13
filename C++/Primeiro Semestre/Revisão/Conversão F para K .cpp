//Ler uma temperatura em graus Fahrenheit e apresentá-la convertida em Kelvin.
//Para conversão deve-se primeiro converter em graus Celsius conforme exercício 
//anterior, e depois converter em Kelvin.
#include<iostream>

using namespace std;

int main (){

    float c;
    float f;
    float k;

    cout<<"Insira a temperatura em Fahrenheit: \n";
    cin>> f;

    c = ((f - 32) * 5) / 9;
    k = c + 273.15;

    cout<< k << " Graus Kelvin \n";
    system("Pause");
    return 0;
}