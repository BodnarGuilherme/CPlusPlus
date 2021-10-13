//O programa imprime qual o menor e o maior valor de dois números A e B, dados pelo usuário.
#include<iostream>

using namespace std;

int main(){
    int n1 = 0;
    int n2 = 0;

    cout<<"Entre com um numero (A). ";
    cin>>n1;
    cout<<"Entre com um numero (B). ";
    cin>>n2;

    if(n1>n2){
        cout<<"Numero maior (A). " << endl;
    }else{
        cout<<"Numero Menor (B). " <<endl;
    }
    system("Pause");
    return 0;
}