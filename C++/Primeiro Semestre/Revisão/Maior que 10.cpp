//Construa um programa em C++ que leia dois valores numéricos inteiros e
//efetue a adição; caso o resultado seja maior que 10, apresentá-lo. 
#include <iostream>

using namespace std;

int main(){
    int n1;
    int n2;
    int soma;

    cout<<"Insira o primeiro valor para soma! \n";
    cin>>n1;
    cout<<"Insira o segunda valor para soma! \n";
    cin>>n2;

    soma = n1 + n2;

    if (soma>10)
    {
        cout<<"Resultado: \n"<< soma;
    }
    system("Pause");
    return 0;    
}