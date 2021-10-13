//Ler uma temperatura em graus Fahrenheit e apresenta-la convertida em graus Celsius.
//A fórmula de conversão a ser utilizada é C = (( F – 32 ) * 5) / 9, em que a variável F
// representa a temperatura em graus Fahrenheit e a variável C a temperatura em graus Celsius.
#include<iostream>

using namespace std;

int main() {

    int c;
    int f;

    cout<<"Temperatura em Fahrenheit: \n";
    cin>> f;

    c = ((f - 32) * 5) / 9;

    cout<< c << " Graus celsius igual a " << f << " Graus fahrenheit. \n";

    system("Pause");
    return 0;
}