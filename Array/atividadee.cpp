#include "atividade1.h"

using namespace std;

int main()
{
    srand(time(NULL));
    cout<<"\n";
    cout<< "Treino com Array " << LINHA << " X  " << COLUNA << "\n";
    int vetor[LINHA][COLUNA];

    for(int linha = 0; linha < LINHA; linha++)
    {   
        for (int coluna = 0; coluna < COLUNA; coluna++)
        {
            vetor[linha][coluna] = rand() % 9 + 1;
            cout<< "|" << vetor[linha][coluna] << "|";
        }
        cout<< "\n";
    }

    cout<< "\n";
	cout<< "Soma Linhas\n";
    somaLinhas(vetor);

    cout<< "\n";
	cout<< "Soma Colunas\n";
    somaColunas(vetor);

    cout<< "\n";
    cout<< "Soma Diagonal Primaria\n";
    somaDiagonalPrincipal(vetor);

    cout<< "\n";
    cout<< "Soma Diagonal Secundaria\n";
    somaDiagonalSecundaria(vetor);

    return 0;
}

int somaLinhas(int vetor[LINHA][COLUNA])
{
    int linhasSomadas[] = {0,0,0};
    for(int linha = 0; linha < LINHA; linha++)
    {
        for(int coluna = 0; coluna < COLUNA; coluna++)
        {
            cout<< "|" << vetor[linha][coluna] << "|";
            linhasSomadas[linha] += vetor[linha][coluna];
        }
        cout<< "= "<< linhasSomadas[linha] << "\n";
    }
    return 0;
}

int somaColunas(int vetor[LINHA][COLUNA])
{
    int colunasSomadas[] = {0,0,0};
    for(int linha = 0; linha < LINHA; linha++)
    {
        for (int coluna = 0; coluna < COLUNA; coluna++)
        {
            cout<< "|" << vetor[linha][coluna] << "|";
            colunasSomadas[coluna] += vetor[linha][coluna];
        }
        cout<< "\n";
    }
    cout<< "-=-Resultado da soma das colunas-=-\n";		
	for (int i = 0; i < 5; i++)
    {
		std::cout<< "| " << colunasSomadas[i] << " |"; 
    }
    cout<< "\n";
    return 0;
}

int somaDiagonalPrincipal(int vetor[LINHA][COLUNA])
{
    int diagonal = 0;
    for(int linha = 0; linha < LINHA; linha++)
    {
        for(int coluna =0; coluna < COLUNA; coluna++)
        {
            if(linha == coluna){
                cout<< "|" << vetor[linha][coluna] << "|";
                diagonal += vetor[linha][coluna];
            }
            else
            {
                cout<< "| |";
            }
        }
        cout<< "\n";
    }
    cout<< diagonal;
    return 0;
}

int somaDiagonalSecundaria(int vetor[LINHA][COLUNA])
{
    int diagonal = 0;
    for(int linha = 0; linha < LINHA; linha++)
    {
        for(int coluna = 0; coluna < COLUNA; coluna++)
        {
            if(coluna == ((COLUNA - 1) - linha))
            {
                cout<< "|" << vetor[linha][coluna] << "|";
                diagonal += vetor[linha][coluna];
            }
            else
            {
                cout<< "| |";
            }
        }
        cout<< "\n";
    }
    cout<< diagonal;
    return 0;
}