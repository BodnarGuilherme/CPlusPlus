/* O programa recebe um número e imprime uma das mensagens "é multiplo de 3" ou
"não é multiplo de 3". */
#include<iostream>

using namespace std;

int main(){
    int n1 = 0;

    cout<<"Entre com um numero: ";
    cin>> n1;

    if(n1%3==0){
        cout<< "Esse numero e multiplo de 3! " << endl;
    }else{
        cout<< "Esse numero nao e multiplo de 3! " << endl;
    }
    system("Pause");
    return 0;
}