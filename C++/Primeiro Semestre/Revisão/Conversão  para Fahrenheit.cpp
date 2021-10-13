//Ler uma temperatura em graus Celsius e exibi-la convertida em graus Fahrenheit.
//A fórmula de conversão a ser utilizada é F = ( 9 * C + 160 ) / 5, em que a variável F
//representa a temperatura em graus Fahrenheit e a variável C a temperatura em graus Celsius.
#include<iostream>

using namespace std;

int main(){

    int c;
    int f;

    cout<<"Temperatura em Celsius: \n";
    cin>>c;
    
    f = (9 * c + 160) / 5;

    cout<< c << " Graus celsius igual a " << f << " Graus fahrenheit. \n";

    system("Pause");
    return 0;
}