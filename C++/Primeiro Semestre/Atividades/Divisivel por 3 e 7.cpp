// O programa lê o número e informa se ele é divisivel por 3 e por 7.
#include<iostream>

using namespace std;

int main(){
    int n1 = 0;

    cout<<"Entre com um numero: \n";
    cin>>n1;

    if(n1%3==0 && n1%7==0){
        cout<<"Numero inserido e divisivel por 3 e 7. \n" ;
    }else{
        cout<<"Numero inserido nao e divisivel por 3 e 7. \n";
    }
    system("Pause");
    return 0;
}