// O programa lê o numero dado e informa se ele é divisivel por 5. 
#include<iostream>

using namespace std;

int main(){
    int n1 = 0;

    cout<< "Entre com um numero. \n";
    cin>> n1;

    if(n1%5==0){
        cout<< "Esse numero e multiplo de 5! " << endl;
    }else{
        cout<< "Esse numero nao e multiplo de 5! " << endl;
    }
    system("Pause");
    return 0;
}