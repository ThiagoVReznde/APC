#include <stdio.h>

int matriz[5] = {1, 2, 3, 4, 5};
int const Coluna = 5;

int MaiorCalc();
float MediaCalc();
int MenorCalc();

int main(){

    printf("\nMaior %d", MaiorCalc(matriz, Coluna));
    printf("\nMedia %.2f", MediaCalc(matriz, Coluna));
    printf("\nMenor %d\n", MenorCalc(matriz, Coluna));

    return(0);
}

int MaiorCalc(int vetor[], int TamanhoMatriz){
    int maior, i;
    maior = vetor[0];
    for (i = 1; i < TamanhoMatriz; i++)
    {
        if (maior < vetor[i])
        {
            maior = vetor[i];
        }
    }
    return(maior);
}

float MediaCalc(int vetor[], int TamanhoMatriz){
    int i, soma=0;
    for (i = 0; i < TamanhoMatriz; i++)
    {
        soma=soma+vetor[i];
    }
    return(soma/TamanhoMatriz);
}

int MenorCalc(int vetor[], int TamanhoMatriz){
    int menor, i;
    menor = vetor[0];
    for (i = 1; i < TamanhoMatriz-1; i++)
    {
        if (menor < vetor[i])
        {
            menor = vetor[i];
        }
    }
    return(menor);
}