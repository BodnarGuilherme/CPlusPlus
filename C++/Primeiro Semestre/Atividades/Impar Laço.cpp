//O programa lê imprime os 100 primeiros números ímpares.
#include<iostream>

using namespace std;

int main(){
    int c = 1;

    for(int n= 1; c <= 100; n++){
        if(n % 2 != 0){
            cout<< c << " : " << n << "\n";
            c++;
        }
    }
    system("Pause");
    return 0;
}