/* JOGO
O programa tem um número que devemos descobrir qual é este valor em menos tentativas possíveis.
começando pedindo um valor ao usuário.
Em seguida, o sistema indica se o valor correto é maior ou menor do que aquele que tentamos em 
cada oportunidade.
O limite máximo é de 10 chutes.
O sistema também retorna uma pontuação caso o usuário acerte antes da décima tentativa.
Caso o usuário passe dos dez, o jogo se encerra mostrando o número correto e diz que o
usuário perdeu! :) */
#include<iostream>

using namespace std;

int main()
{
    int n1 = 0;
    int tentativa = 1;
    int fixo = 54;
    int acerto = false;

    while (acerto == false && tentativa <=10)
    {
        cout<<"Entre com um numero de adivinhacao!"<<endl;
        cin>>n1;
    
        if (n1 == fixo)
        {
            cout<<" Voce acertou o numero na \n"<< tentativa <<" Tentativa, Parabens!!!" <<endl;
            acerto = true;
        }else if (n1<fixo)
        {
            cout<< n1 <<" E menor que o sorteado!"<<endl;
        }else{
            cout<< n1 << " E maior que o sorteado!"<<endl;
        }
        tentativa++;
        
    }
    if(acerto==false){
        cout<<"Voce usou as suas 10 tentivas :( reinicie o jogo e tente novamente! \n";
    }
    system("Pause");
    return 0;
}