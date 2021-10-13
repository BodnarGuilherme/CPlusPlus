//Crie uma função em linguagem C++ que receba 3 números e retorne o maior valor.
#include <iostream>

using namespace std;

int recebe(int n1, int n2, int n3){
    if(n1 > n2 and n1 > n3){
        cout<<"Maior: "<<n1<<endl; 
    }else if(n2 > n1 and n2 > n3){
        cout<<"Maior: "<<n2<<endl; 
    }else if(n3 > n1 and n3 > n2){
        cout<<"Maior: "<<n3<<endl;
    }else{
        if(n1 == n2 and n1 > n3){
            cout<<"Maior: "<<n1<<endl;
        }
        else if(n1 == n3 and n1 > n2){
            cout<<"Maior: "<<n1<<endl;
        }
        else if(n2 == n3 and n2 > n1){
            cout<<"Maior: "<<n2<<endl;
        }else {
            cout<<"Maior: "<<n1<<endl;
        }
    }
}

int main(){
    int n1, n2, n3;

    cout<<"Insira n1: \n";
    cin>>n1;
    cout<<"Insira n2: \n";
    cin>>n2;
    cout<<"Insira n3: \n";
    cin>>n3;

    recebe(n1, n2, n3);
    system("Pause");
    return 0;
}