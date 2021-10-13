//Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes
//de uma equação do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac'
#include <iostream>
#include <cmath>

using namespace std;

float coeficientes(float a, float b, float c){
    float delta = (b * b) - (4 * a * c);

    cout<<"Resultado: "<<delta<<endl;
}

int main(){
    float a, b, c;

    cout<<"Coeficiente A:\n";
    cin>>a;
    cout<<"Coeficiente B:\n";
    cin>>b;
    cout<<"Coeficiente C:\n";
    cin>>c;

    coeficientes(a, b, c);

    system("Pause");
    return 0;
}