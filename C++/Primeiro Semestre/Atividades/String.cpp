/*Escreva um programa que permita o usuário digita o nome de um aluno, e sua nota do primeiro 
e do segundo bimestre. O sistema deve perguntar no inicio quantos alunos irão ser informados as 
notas e depois deve perguntar nome, nota 1 e nota 2, após ler todas as entradas deve calcular a 
media das notas de cada aluno e se a média for maior ou igual a 6 deve escrever o nome do aluno 
e que ele foi aprovado, caso contrario deve imprimir o nome e informar que o aluno foi reprovado.*/
#include<iostream>
#include<cstdlib>
#include <string>
int main(){
	int alunos;
	std::cout << "Digite o numero de alunos: ";
	std::cin >> alunos;
	std::string nome[alunos];
	float nota1[alunos];
	float nota2[alunos];
	float media[alunos];
	for (int i = 0; i < alunos; i++) {		
		int n = 1;
		std::cout << "Digite o nome do " << i << " aluno: ";
		std::cin >> nome[i];
		std::cout << "Digite a nota do 1 bimestre: ";
		std::cin >> nota1[i];
		std::cout << "Digite a nota do 2 bimestre: ";
		std::cin >> nota2[i];
		float m2 = nota1[i] + nota2[i];
		media[i] = m2 / 2;
		system("cls");		
	}
	for (int j = 0; j < alunos; j++){
		if(media[j] >= 6){
			std::cout << "O aluno " << nome[j] << " foi aprovado e tem a media de: " << media[j] << "\n";
		}
		else{
			std::cout << "O aluno " << nome[j] << " foi reprovado e tem a media de: " << media[j] << "\n";
		}					
	}
	return 0;
}