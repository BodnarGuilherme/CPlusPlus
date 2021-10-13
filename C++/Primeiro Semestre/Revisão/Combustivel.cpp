//Calcule a quantidade de litros de combustível gasta em uma viagem, utilizando um automóvel 
//que faz 12 km por litro. Para obter o cálculo, o usuário deve fornecer o tempo gasto na viagem
//e a velocidade média. Desta forma, será possível obter a distância percorrida com a fórmula 
//DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância, basta calcular a quantidade
//de litros de combustível utilizada na viagem com a fórmula LITROS_USADOS = DISTANCIA / 12.
//O programa deve apresentar os valores da velocidade média, tempo gasto, distância percorrida
//e quantidade de litros utilizada na viagem.
#include<iostream>

using namespace std;

int main(){
    float distancia;
    float tempo;
    float litrosUsados;
    float velocidadeMedia;

    cout<<"Qual seu tempo gasto na viagem em MINUTOS? \n";
    cin>>tempo;
    cout<<"Qual a sua velocidade media em KM? \n";
    cin>>velocidadeMedia;

    distancia = (tempo / 60) * velocidadeMedia;
    litrosUsados = distancia / 12;
    velocidadeMedia = distancia / (tempo / 60);

    cout<<"_________________________________________ \n";
    cout<<"_________________________________________ \n";
    cout<<"_________________________________________ \n";
    cout<<"Valor da velocidade media: \n" << velocidadeMedia << " Km/h" <<"\n";
    cout<<"_________________________________________ \n";
    cout<<"Distancia media percorrida: \n" << distancia << " Km" << "\n";
    cout<<"_________________________________________ \n";
    cout<<"Valor em media dos litros ultilizados na viagem: \n" << litrosUsados << " L" << "\n";

    system("Pause");
    return 0;
}