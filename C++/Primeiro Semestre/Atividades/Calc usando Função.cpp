/* O programa faz o calculo de 4 operações basicas da matemática(Adição, Subtração
Multiplicação e Divisão) cada uma dessas operações devem ser realizadas por funções 
e deve receber sempre dois parâmetros do tipo float,  o retorno de cada função também deve float
Além das quatro funções você deve desenvolver uma função principal e testar cada uma das quatro 
funções no programa. */
#include<iostream>
using namespace std;

float somar(float a, float b){
    return a + b;
}
float sub(float a, float b){
    return a - b;
}
float div(float a, float b){
    return a / b;
}
float mul(float a, float b){
    return a * b;
}
int main(){
    float n1;
    float n2;

    cout<< "Entre com um numero: ";
    cin>> n1;
    cout<< "Entre com o segundo numero: ";
    cin>> n2;

    cout<< "Soma: " << somar(n1, n2) << endl;
    cout<< "Subtracao: " << sub(n1, n2) << endl;
    cout<< "Divisao: " << div(n1, n2) << endl;
    cout<< "Multiplicacao: " << mul(n1, n2) << endl;

    system("Pause");
    return 0;
}