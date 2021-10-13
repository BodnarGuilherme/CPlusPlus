//Um professor, muito legal, fez 3 provas durante um semestre mas só vai levar em conta as duas
//notas mais altas para calcular a média. Faça uma aplicação em C++ que peça o valor das 3 notas,
//mostre como seria a média com essas 3 provas, a média com as 2 notas mais altas, bem como sua
//nota mais alta e sua nota mais baixa.
#include <iostream>

using namespace std;

float Media3(float nota1, float nota2, float nota3){
    return (nota1 + nota2 + nota3) / 3;
}

float Media2(float nota1, float nota2) {
    return (nota1 + nota2) / 2;
}

int main() {
    int n1, n2, n3;
    
    cout<<"Insira nota 1:\n";
    cin>> n1;
    cout<<"Insira nota 2:\n";
    cin>> n2;
    cout<<"Insira nota 3:\n";
    cin>>n3;

    cout << "A media entre todas as notas sao: " << Media3(n1, n2, n3)<<endl;

    if(n1 != n2 && n2 != n3 && n3 != n1 ){
        if(n1>n2 && n1>n3){
            if(n2>n3){
                cout << "A media entre as maiores notas sao: " << Media2(n1, n2)<<endl;
            }else{
                cout << "A media entre as maiores notas sao: " << Media2(n1, n3)<<endl;
            }
            cout << "A media entre as Piores notas sao: " << Media2(n2, n3)<<endl;
        }
        if(n2>n1 && n2>n3){ 
            if(n3>n1){
                    cout << "A media entre as maiores notas sao: " << Media2(n2, n3)<<endl;
            }else{
                cout << "A media entre as maiores notas sao: " << Media2(n2, n1)<<endl;
            }
            cout << "A media entre as Piores notas sao: " << Media2(n1, n3)<<endl;
        }
    
        if(n3>n1 && n3>n2){
            if(n2>n1){
                cout << "A media entre as maiores notas sao: " << Media2(n3, n2)<<endl;
            }else{
                cout << "A media entre as maiores notas sao: " << Media2(n3, n1)<<endl;
            }
            cout << "A media entre as Piores notas sao: " << Media2(n2, n1)<<endl;
        }
    }else{

        if(n1 == n2 && n1 > n3){
            cout << "A media entre as maiores notas sao: " << Media2(n1, n2)<<endl;
            cout << "A media entre as Piores notas sao: " << Media2(n2, n3)<<endl;
        }

        if(n1 == n3 && n1 > n2){
            cout << "A media entre as maiores notas sao: " << Media2(n1, n3)<<endl;
            cout << "A media entre as Piores notas sao: " << Media2(n1, n2)<<endl;
        }

        if(n2 == n3 && n2 > n1){
            cout << "A media entre as maiores notas sao: " << Media2(n2, n3)<<endl;
            cout << "A media entre as Piores notas sao: " << Media2(n2, n1)<<endl;
        }

        if(n1 == n2 && n2 == n3 && n3 == n1){
            cout << "A media entre as maiores notas sao: " << Media2(n1, n1)<<endl;
            cout << "A media entre as Piores notas sao: " << Media2(n1, n1)<<endl;
        }
    }
    system("Pause");
    return 0;
}