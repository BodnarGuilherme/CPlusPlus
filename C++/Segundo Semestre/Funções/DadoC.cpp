// Use a função da questão passado e lance o dado cem mil de vezes. 
// Conte quantas vezes cada número saiu
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int Dado() {
    int numero = rand() % 6 + 1;
    return numero;
}

int main(){
    srand(time(NULL));
    int vezes1 = 0;
    int vezes2 = 0;
    int vezes3 = 0;
    int vezes4 = 0;
    int vezes5 = 0;
    int vezes6 = 0;

    for (int i = 0; i < 100000; i++)
    {
        int numeroGerado = Dado();

        if(numeroGerado == 1) vezes1++;
        if(numeroGerado == 2) vezes2++;
        if(numeroGerado == 3) vezes3++;
        if(numeroGerado == 4) vezes4++;
        if(numeroGerado == 5) vezes5++;
        if(numeroGerado == 6) vezes6++;
    }

    cout<<"O numero 1 foi gerado: "<<vezes1<<" Vezes \n";
    cout<<"O numero 2 foi gerado: "<<vezes2<<" Vezes \n";
    cout<<"O numero 3 foi gerado: "<<vezes3<<" Vezes \n";
    cout<<"O numero 4 foi gerado: "<<vezes4<<" Vezes \n";
    cout<<"O numero 5 foi gerado: "<<vezes5<<" Vezes \n";
    cout<<"O numero 6 foi gerado: "<<vezes6<<" Vezes \n";

    system("Pause");
    return 0;
}