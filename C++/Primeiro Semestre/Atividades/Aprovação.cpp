/*Escreva um programa que permita o usuário digita o nome de um aluno, e sua nota do primeiro e do segundo
bimestre. O sistema deve perguntar no inicio quantos alunos irão ser informados as notas e depois deve 
perguntar nome, nota 1 e nota 2, após ler todas as entradas deve calcular a media das notas de cada 
aluno e se a média for maior ou igual a 6 deve escrever o nome do aluno e que ele foi aprovado, caso
contrario deve imprimir o nome e informar que o aluno foi reprovado. */
#include<iostream>
using namespace std;

int main(){

int nome[10];
int sobrenome[10];
int qntdaluno;
int aluno = 1;
float media;

cout<<"Quantos alunos vao ser informados? \n";
cin>> qntdaluno;
cout<<"Qual nome e sobrenome do aluno: \n";
cin>>nome[10]>>sobrenome[10];

for(qntdaluno ; qntdaluno <= 10; qntdaluno++){
    cout<< nome[qntdaluno];
    cout<< sobrenome[qntdaluno];
}
}