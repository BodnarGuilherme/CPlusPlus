//O programa recebe quatro valores do usuário e imprime o maior e o menor valor.
#include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n1 = 0;
    int n2 = 0;
    int n3 = 0;
    int n4 = 0;

    cout<<"Entre com numero A: \n";
    cin>>n1;
    cout<<"Entre com numero B: \n";
    cin>>n2;
    cout<<"Entre com numero C: \n";
    cin>>n3;
    cout<<"Entre com numero D; \n";
    cin>>n4;

    if(n1>n2 && n1>n3 && n1>n4){
        cout<<"Valor A e o maior! \n";
    }
    if(n2>n1 && n2>n3 && n2>n4){
        cout<<"Valor B e o maior! \n";
    }
    if(n3>n1 && n3>n2 && n3>n4){
        cout<<"Valor C e o maior! \n";
    }
    if(n4>n1 && n4>n2 && n4>n3){
        cout<<"Valor D e o maior! \n";
    }
    if(n1<n2 && n1<n3 && n1<n4){
        cout<<"Valor A e o menor! \n";
    }
    if(n2<n1 && n2<n3 && n2<n4){
        cout<<"Valor B e o menor! \n";
    }
    if(n3<n1 && n3<n2 && n3<n4){
        cout<<"Valor C e o menor! \n";
    }
    if(n4<n1 && n4<n2 && n4<n3){
        cout<<"Valor D e o menor! \n";
    }
    system("Pause");
    return 0;
}
