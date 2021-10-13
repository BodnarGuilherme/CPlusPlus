/*Desenvolva um programa que utilize funções para calcular a área e o perímetro das seguintes figuras 
geométricas (Quadrado, Retângulo, Circulo e Triangulo), você deve criar uma função para cada figura 
e ler os lados (medida) de cada figura e retornar o valor da área e perímetro.*/
#include<iostream>
int main(){
	int e;
	int r;
	inicio:
	std::cout << "Digite 1 para calcular a area do quadrado\nDigite 2 para calcular a area do Retangulo\nDigite 3 para calcular a area do Circulo\nDigite 4 para calcular a area do Triangulo\n";
	std::cin >> e;
	if(e==1){
		std::cout << "Digite o valor dos lados do quadrado:";
		int v;
		std::cin >> v;
		r = v*v;
		std::cout << "A area do quadrado e: " << r << "!\n";
	}
	else if(e==2){
		std::cout << "Digite o valor da base do retangulo:";
		int v;
		std::cin >> v;
		std::cout << "Digite o valor da altura do retangulo:";
		int a;
		std::cin >> a;
		r = a*v;
		std::cout << "A area do retangulo e: " << r << "!\n";
	}
	else if(e==3){
		std::cout << "O valor de PI e 3,14\n";
		std::cout << "Digite o valor do raio do circulo:";
		int v;
		std::cin >> v;
		r = v*v*3,14;
		std::cout << "A area do circulo e: " << r << "!\n";
	}
	else if(e==4){
		std::cout << "Digite o valor da base do triangulo:";
		int v;
		std::cin >> v;
		std::cout << "Digite o valor da altura do triangulo:";
		int a;
		std::cin >> a;
		r = a*v/2;
		std::cout << "A area do triangulo e: " << r << "!\n";
	}
	else{
		system("cls");
		std::cout << "Essa opcao nao existe!\nDigite um numero entre 1 e 4!\n";
		goto inicio;
	}
	return 0;
}