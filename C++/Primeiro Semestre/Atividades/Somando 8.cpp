/* O programa lê dois números e efetua uma adição. Caso o valor somado seja maior que 20,
este deverá ser apresentado somando-se a ele mais 8; Caso o valor somado  seja menor ou igual
a 20, este deverá ser apresentado subtraindo-se 5. */
#include<iostream>

using namespace std;

int main(){
    int n1 = 0;
    int n2 = 0;
    int soma = 0;

    cout<< "Entre com um numero: \n";
    cin>> n1;
    cout<< "Entre com um numero: \n";
    cin>> n2;

    soma = n1 + n2;

    if(soma>20){
        cout<< " soma: " << soma +8 << endl;
    }else{
        cout<< " soma: " << soma -5 << endl;
    }
    system("Pause");
    return 0;
}