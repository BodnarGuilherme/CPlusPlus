//Ler um valor inteiro qualquer positivo ou negativo e apresentar o número lido como um valor positivo.
#include<iostream>

using namespace std;

int main () {

    int number;

    cout<<"Insira um Valor: \n";
    cin>> number;

    if (number<0)
    {
        number *= -1;
    }
    
    cout<< "Resultado: " <<number << "\n";

    system("Pause");
    return 0;
}