//O programa determina se os valores dados pelo usuário (A) é divisível por um outro valor (B).
#include<iostream>

using namespace std;

int main(){
    int n1 =0;
    int n2 =0;

    cout<< "Entre com o numero A. ";
    cin>> n1;
    cout<< "Entre com o numero B. ";
    cin>> n2;

    if(n1%n2==0){
        cout<< "Numero A e divisivel por B. \n" << endl;
    }else{
        cout<< "Numero A nao e divisivel por B. \n" << endl;
    }
    system("Pause");
    return 0;
}