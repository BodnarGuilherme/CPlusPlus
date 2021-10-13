/* O programa lê o número e impreme a raiz quadrada do número caso ele seja positivo 
ou igual a zero e o quadrado do número caso ele seja negativo. */
#include<iostream>
#include<math.h>

using namespace std;

int main(){
    int n1 = 0;

    cout<<"Entre com um numero. \n";
    cin>>n1;

    if(n1>0){
        cout<< "R: " << sqrt(n1) << "\n";
    }else{
        cout<< "R: " << n1 * n1 << "\n";
    }
    system("Pause");
    return 0;
}